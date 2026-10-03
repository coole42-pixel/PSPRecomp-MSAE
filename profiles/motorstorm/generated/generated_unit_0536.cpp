#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0536[1022] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6,
    0, 7, 8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    0, 20, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 28, 0, 29, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 37, 0, 0, 38, 0,
    39, 0, 40, 0, 0, 41, 42, 0, 43, 0, 0, 0, 44, 0, 45, 0, 46, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0, 63, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0,
    78, 0, 0, 0, 79, 0, 80, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 89, 90, 0, 0, 0, 0, 91, 0, 92, 0,
    0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 153, 154, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162,
    0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0,
    172, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 203,
    0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219,
};
void recomp_unit_0536_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A1C004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0536[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A1C004;
    case 2u: goto L_08A1C00C;
    case 3u: goto L_08A1C048;
    case 4u: goto L_08A1C060;
    case 5u: goto L_08A1C078;
    case 6u: goto L_08A1C080;
    case 7u: goto L_08A1C088;
    case 8u: goto L_08A1C08C;
    case 9u: goto L_08A1C0A0;
    case 10u: goto L_08A1C0B0;
    case 11u: goto L_08A1C0BC;
    case 12u: goto L_08A1C0CC;
    case 13u: goto L_08A1C0D8;
    case 14u: goto L_08A1C0E8;
    case 15u: goto L_08A1C0F4;
    case 16u: goto L_08A1C118;
    case 17u: goto L_08A1C13C;
    case 18u: goto L_08A1C14C;
    case 19u: goto L_08A1C170;
    case 20u: goto L_08A1C188;
    case 21u: goto L_08A1C190;
    case 22u: goto L_08A1C1A4;
    case 23u: goto L_08A1C1B8;
    case 24u: goto L_08A1C1CC;
    case 25u: goto L_08A1C1E0;
    case 26u: goto L_08A1C1F4;
    case 27u: goto L_08A1C208;
    case 28u: goto L_08A1C21C;
    case 29u: goto L_08A1C224;
    case 30u: goto L_08A1C228;
    case 31u: goto L_08A1C230;
    case 32u: goto L_08A1C238;
    case 33u: goto L_08A1C244;
    case 34u: goto L_08A1C254;
    case 35u: goto L_08A1C25C;
    case 36u: goto L_08A1C264;
    case 37u: goto L_08A1C270;
    case 38u: goto L_08A1C27C;
    case 39u: goto L_08A1C284;
    case 40u: goto L_08A1C28C;
    case 41u: goto L_08A1C298;
    case 42u: goto L_08A1C29C;
    case 43u: goto L_08A1C2A4;
    case 44u: goto L_08A1C2B4;
    case 45u: goto L_08A1C2BC;
    case 46u: goto L_08A1C2C4;
    case 47u: goto L_08A1C2C8;
    case 48u: goto L_08A1C2E8;
    case 49u: goto L_08A1C304;
    case 50u: goto L_08A1C31C;
    case 51u: goto L_08A1C328;
    case 52u: goto L_08A1C340;
    case 53u: goto L_08A1C34C;
    case 54u: goto L_08A1C354;
    case 55u: goto L_08A1C368;
    case 56u: goto L_08A1C3AC;
    case 57u: goto L_08A1C3B4;
    case 58u: goto L_08A1C3C0;
    case 59u: goto L_08A1C3C8;
    case 60u: goto L_08A1C3E0;
    case 61u: goto L_08A1C3E8;
    case 62u: goto L_08A1C3F0;
    case 63u: goto L_08A1C3FC;
    case 64u: goto L_08A1C404;
    case 65u: goto L_08A1C424;
    case 66u: goto L_08A1C42C;
    case 67u: goto L_08A1C444;
    case 68u: goto L_08A1C450;
    case 69u: goto L_08A1C474;
    case 70u: goto L_08A1C47C;
    case 71u: goto L_08A1C49C;
    case 72u: goto L_08A1C4C0;
    case 73u: goto L_08A1C4CC;
    case 74u: goto L_08A1C4D4;
    case 75u: goto L_08A1C4E4;
    case 76u: goto L_08A1C4EC;
    case 77u: goto L_08A1C4FC;
    case 78u: goto L_08A1C504;
    case 79u: goto L_08A1C514;
    case 80u: goto L_08A1C51C;
    case 81u: goto L_08A1C520;
    case 82u: goto L_08A1C530;
    case 83u: goto L_08A1C554;
    case 84u: goto L_08A1C578;
    case 85u: goto L_08A1C5A4;
    case 86u: goto L_08A1C5BC;
    case 87u: goto L_08A1C5C8;
    case 88u: goto L_08A1C5D8;
    case 89u: goto L_08A1C5DC;
    case 90u: goto L_08A1C5E0;
    case 91u: goto L_08A1C5F4;
    case 92u: goto L_08A1C5FC;
    case 93u: goto L_08A1C60C;
    case 94u: goto L_08A1C614;
    case 95u: goto L_08A1C66C;
    case 96u: goto L_08A1C688;
    case 97u: goto L_08A1C690;
    case 98u: goto L_08A1C6A0;
    case 99u: goto L_08A1C6AC;
    case 100u: goto L_08A1C6BC;
    case 101u: goto L_08A1C6C8;
    case 102u: goto L_08A1C6D8;
    case 103u: goto L_08A1C6E4;
    case 104u: goto L_08A1C708;
    case 105u: goto L_08A1C738;
    case 106u: goto L_08A1C758;
    case 107u: goto L_08A1C76C;
    case 108u: goto L_08A1C780;
    case 109u: goto L_08A1C794;
    case 110u: goto L_08A1C7A8;
    case 111u: goto L_08A1C7BC;
    case 112u: goto L_08A1C7CC;
    case 113u: goto L_08A1C7DC;
    case 114u: goto L_08A1C7E4;
    case 115u: goto L_08A1C7F4;
    case 116u: goto L_08A1C814;
    case 117u: goto L_08A1C81C;
    case 118u: goto L_08A1C85C;
    case 119u: goto L_08A1C868;
    case 120u: goto L_08A1C874;
    case 121u: goto L_08A1C880;
    case 122u: goto L_08A1C884;
    case 123u: goto L_08A1C8C0;
    case 124u: goto L_08A1C8CC;
    case 125u: goto L_08A1C904;
    case 126u: goto L_08A1C910;
    case 127u: goto L_08A1C934;
    case 128u: goto L_08A1C960;
    case 129u: goto L_08A1C988;
    case 130u: goto L_08A1C99C;
    case 131u: goto L_08A1C9B4;
    case 132u: goto L_08A1C9C8;
    case 133u: goto L_08A1C9DC;
    case 134u: goto L_08A1C9F0;
    case 135u: goto L_08A1CA04;
    case 136u: goto L_08A1CA18;
    case 137u: goto L_08A1CA24;
    case 138u: goto L_08A1CA2C;
    case 139u: goto L_08A1CA38;
    case 140u: goto L_08A1CA40;
    case 141u: goto L_08A1CA4C;
    case 142u: goto L_08A1CA70;
    case 143u: goto L_08A1CA8C;
    case 144u: goto L_08A1CAA4;
    case 145u: goto L_08A1CAB0;
    case 146u: goto L_08A1CAB8;
    case 147u: goto L_08A1CACC;
    case 148u: goto L_08A1CAE4;
    case 149u: goto L_08A1CAFC;
    case 150u: goto L_08A1CB0C;
    case 151u: goto L_08A1CB28;
    case 152u: goto L_08A1CB34;
    case 153u: goto L_08A1CB4C;
    case 154u: goto L_08A1CB50;
    case 155u: goto L_08A1CB54;
    case 156u: goto L_08A1CB64;
    case 157u: goto L_08A1CB6C;
    case 158u: goto L_08A1CB90;
    case 159u: goto L_08A1CBAC;
    case 160u: goto L_08A1CBD0;
    case 161u: goto L_08A1CBEC;
    case 162u: goto L_08A1CC00;
    case 163u: goto L_08A1CC08;
    case 164u: goto L_08A1CC14;
    case 165u: goto L_08A1CC24;
    case 166u: goto L_08A1CC38;
    case 167u: goto L_08A1CC40;
    case 168u: goto L_08A1CC4C;
    case 169u: goto L_08A1CC5C;
    case 170u: goto L_08A1CC70;
    case 171u: goto L_08A1CC78;
    case 172u: goto L_08A1CC84;
    case 173u: goto L_08A1CC94;
    case 174u: goto L_08A1CCA8;
    case 175u: goto L_08A1CCB0;
    case 176u: goto L_08A1CCBC;
    case 177u: goto L_08A1CCCC;
    case 178u: goto L_08A1CCE0;
    case 179u: goto L_08A1CCE8;
    case 180u: goto L_08A1CCF0;
    case 181u: goto L_08A1CD10;
    case 182u: goto L_08A1CD34;
    case 183u: goto L_08A1CD48;
    case 184u: goto L_08A1CD54;
    case 185u: goto L_08A1CD5C;
    case 186u: goto L_08A1CD68;
    case 187u: goto L_08A1CD7C;
    case 188u: goto L_08A1CD98;
    case 189u: goto L_08A1CDB0;
    case 190u: goto L_08A1CDB8;
    case 191u: goto L_08A1CDCC;
    case 192u: goto L_08A1CDE8;
    case 193u: goto L_08A1CE10;
    case 194u: goto L_08A1CE1C;
    case 195u: goto L_08A1CE24;
    case 196u: goto L_08A1CE2C;
    case 197u: goto L_08A1CE38;
    case 198u: goto L_08A1CE4C;
    case 199u: goto L_08A1CE54;
    case 200u: goto L_08A1CE5C;
    case 201u: goto L_08A1CE70;
    case 202u: goto L_08A1CE78;
    case 203u: goto L_08A1CE80;
    case 204u: goto L_08A1CE88;
    case 205u: goto L_08A1CEA8;
    case 206u: goto L_08A1CEC8;
    case 207u: goto L_08A1CEE8;
    case 208u: goto L_08A1CEFC;
    case 209u: goto L_08A1CF08;
    case 210u: goto L_08A1CF2C;
    case 211u: goto L_08A1CF34;
    case 212u: goto L_08A1CF58;
    case 213u: goto L_08A1CF78;
    case 214u: goto L_08A1CF9C;
    case 215u: goto L_08A1CFA8;
    case 216u: goto L_08A1CFB0;
    case 217u: goto L_08A1CFC8;
    case 218u: goto L_08A1CFD4;
    case 219u: goto L_08A1CFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A1C004:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(320)));
    goto L_08A1C00C;
L_08A1C00C:
    aot_gpr[10] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(304)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(324)));
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[8] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x08A1C048u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C048u) goto L_08A1C048;
    return;
L_08A1C048:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C060:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1C08C;
      }
      goto L_08A1C078;
    }
L_08A1C078:
    aot_gpr[31] = (0x08A1C080u);
    // nop
    goto L_08A1C0D8;
L_08A1C080:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C08C;
      }
      goto L_08A1C088;
    }
L_08A1C088:
    aot_gpr[16] = (0u | 1u);
    goto L_08A1C08C;
L_08A1C08C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C0A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A1C0B0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 97u, 0x08A465CCu>(ctx, &aot_mem) && ctx.pc == 0x08A1C0B0u) goto L_08A1C0B0;
    return;
L_08A1C0B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C0BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A1C0CCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 98u, 0x08A465D4u>(ctx, &aot_mem) && ctx.pc == 0x08A1C0CCu) goto L_08A1C0CC;
    return;
L_08A1C0CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C0D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A1C0E8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 99u, 0x08A465DCu>(ctx, &aot_mem) && ctx.pc == 0x08A1C0E8u) goto L_08A1C0E8;
    return;
L_08A1C0E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C0F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1C118u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-716));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C118u) goto L_08A1C118;
    return;
L_08A1C118:
    aot_gpr[4] = (0u | 14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A1C13Cu);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C13Cu) goto L_08A1C13C;
    return;
L_08A1C13C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C14C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A1C170u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A1C170u) goto L_08A1C170;
    return;
L_08A1C170:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16408));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(468));
    aot_gpr[31] = (0x08A1C188u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 75u, 0x08A46458u>(ctx, &aot_mem) && ctx.pc == 0x08A1C188u) goto L_08A1C188;
    return;
L_08A1C188:
    aot_gpr[31] = (0x08A1C190u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1C6E4;
L_08A1C190:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A1C1A4u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-704));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C1A4u) goto L_08A1C1A4;
    return;
L_08A1C1A4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1C1B8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C1B8u) goto L_08A1C1B8;
    return;
L_08A1C1B8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(328));
    aot_gpr[31] = (0x08A1C1CCu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-692));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C1CCu) goto L_08A1C1CC;
    return;
L_08A1C1CC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1C1E0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C1E0u) goto L_08A1C1E0;
    return;
L_08A1C1E0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A1C1F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-676));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 103u, 0x08A0063Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C1F4u) goto L_08A1C1F4;
    return;
L_08A1C1F4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    aot_gpr[31] = (0x08A1C208u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-668));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C208u) goto L_08A1C208;
    return;
L_08A1C208:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1C21Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C21Cu) goto L_08A1C21C;
    return;
L_08A1C21C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1C228;
      }
      goto L_08A1C224;
    }
L_08A1C224:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), aot_gpr[4]);
    goto L_08A1C228;
L_08A1C228:
    aot_gpr[31] = (0x08A1C230u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1C6AC;
L_08A1C230:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A1C264;
      }
      goto L_08A1C238;
    }
L_08A1C238:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A1C244u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-660));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C244u) goto L_08A1C244;
    return;
L_08A1C244:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1C254u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C254u) goto L_08A1C254;
    return;
L_08A1C254:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A1C264;
      }
      goto L_08A1C25C;
    }
L_08A1C25C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_08A1C264;
L_08A1C264:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1C270u);
    aot_gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C270u) goto L_08A1C270;
    return;
L_08A1C270:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1C27Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C27Cu) goto L_08A1C27C;
    return;
L_08A1C27C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C29C;
      }
      goto L_08A1C284;
    }
L_08A1C284:
    aot_gpr[31] = (0x08A1C28Cu);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C28Cu) goto L_08A1C28C;
    return;
L_08A1C28C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1C298u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C298u) goto L_08A1C298;
    return;
L_08A1C298:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08A1C29C;
L_08A1C29C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(340));
      if (branch_taken) {
          goto L_08A1C2C4;
      }
      goto L_08A1C2A4;
    }
L_08A1C2A4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1C2B4u);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C2B4u) goto L_08A1C2B4;
    return;
L_08A1C2B4:
    aot_gpr[31] = (0x08A1C2BCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A1C2BCu) goto L_08A1C2BC;
    return;
L_08A1C2BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C2C8;
      }
      goto L_08A1C2C4;
    }
L_08A1C2C4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(0u));
    goto L_08A1C2C8;
L_08A1C2C8:
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
L_08A1C2E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1C354;
      }
      goto L_08A1C304;
    }
L_08A1C304:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16408));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1C31Cu);
    aot_gpr[5] = (0u | 0u);
    goto L_08A1C690;
L_08A1C31C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(468));
    aot_gpr[31] = (0x08A1C328u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 87u, 0x08A46520u>(ctx, &aot_mem) && ctx.pc == 0x08A1C328u) goto L_08A1C328;
    return;
L_08A1C328:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1C340u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A1C340u) goto L_08A1C340;
    return;
L_08A1C340:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C354;
      }
      goto L_08A1C34C;
    }
L_08A1C34C:
    aot_gpr[31] = (0x08A1C354u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A1C354u) goto L_08A1C354;
    return;
L_08A1C354:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C368:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1C3ACu);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C3ACu) goto L_08A1C3AC;
    return;
L_08A1C3AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A1C554;
      }
      goto L_08A1C3B4;
    }
L_08A1C3B4:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1C3C0u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C3C0u) goto L_08A1C3C0;
    return;
L_08A1C3C0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A1C4C0;
      }
      goto L_08A1C3C8;
    }
L_08A1C3C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1C3E0u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C3E0u) goto L_08A1C3E0;
    return;
L_08A1C3E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A1C4C0;
      }
      goto L_08A1C3E8;
    }
L_08A1C3E8:
    aot_gpr[31] = (0x08A1C3F0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(468));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 99u, 0x08A465DCu>(ctx, &aot_mem) && ctx.pc == 0x08A1C3F0u) goto L_08A1C3F0;
    return;
L_08A1C3F0:
    aot_gpr[19] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-648));
      if (branch_taken) {
          goto L_08A1C42C;
      }
      goto L_08A1C3FC;
    }
L_08A1C3FC:
    aot_gpr[31] = (0x08A1C404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C404u) goto L_08A1C404;
    return;
L_08A1C404:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 6u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1C424u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C424u) goto L_08A1C424;
    return;
L_08A1C424:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A1C4C0;
      }
      goto L_08A1C42C;
    }
L_08A1C42C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08A1C444u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[5]);
    goto L_08A1C6AC;
L_08A1C444:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1C450u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_08A1C6C8;
L_08A1C450:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A1C474u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C474u) goto L_08A1C474;
    return;
L_08A1C474:
    aot_gpr[31] = (0x08A1C47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C47Cu) goto L_08A1C47C;
    return;
L_08A1C47C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1C49Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C49Cu) goto L_08A1C49C;
    return;
L_08A1C49C:
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
L_08A1C4C0:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1C4CCu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C4CCu) goto L_08A1C4CC;
    return;
L_08A1C4CC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A1C520;
      }
      goto L_08A1C4D4;
    }
L_08A1C4D4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1C4E4u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C4E4u) goto L_08A1C4E4;
    return;
L_08A1C4E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A1C520;
      }
      goto L_08A1C4EC;
    }
L_08A1C4EC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1C4FCu);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C4FCu) goto L_08A1C4FC;
    return;
L_08A1C4FC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A1C520;
      }
      goto L_08A1C504;
    }
L_08A1C504:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1C514u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C514u) goto L_08A1C514;
    return;
L_08A1C514:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C554;
      }
      goto L_08A1C51C;
    }
L_08A1C51C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08A1C520;
L_08A1C520:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A1C530u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C530u) goto L_08A1C530;
    return;
L_08A1C530:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
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
L_08A1C554:
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
L_08A1C578:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(340));
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x08A1C5A4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1C5A4u) goto L_08A1C5A4;
    return;
L_08A1C5A4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(328)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A1C5DC;
      }
      goto L_08A1C5BC;
    }
L_08A1C5BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(332)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
        goto L_08A1C5E0;
    }
    goto L_08A1C5C8;
L_08A1C5C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(320)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1C5D8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 59u, 0x08A0E384u>(ctx, &aot_mem) && ctx.pc == 0x08A1C5D8u) goto L_08A1C5D8;
    return;
L_08A1C5D8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_08A1C5DC;
L_08A1C5DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    goto L_08A1C5E0;
L_08A1C5E0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1C5F4u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C5F4u) goto L_08A1C5F4;
    return;
L_08A1C5F4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(300)));
        goto L_08A1C60C;
    }
    goto L_08A1C5FC;
L_08A1C5FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(312)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(316)));
      if (branch_taken) {
          goto L_08A1C614;
      }
      goto L_08A1C60C;
    }
L_08A1C60C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(304)));
    goto L_08A1C614;
L_08A1C614:
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
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(332)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[13] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[13]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[11] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[14];
    aot_gpr[31] = (0x08A1C66Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[12]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C66Cu) goto L_08A1C66C;
    return;
L_08A1C66C:
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
L_08A1C688:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C690:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A1C6A0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(468));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 92u, 0x08A46578u>(ctx, &aot_mem) && ctx.pc == 0x08A1C6A0u) goto L_08A1C6A0;
    return;
L_08A1C6A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C6AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A1C6BCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(468));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 97u, 0x08A465CCu>(ctx, &aot_mem) && ctx.pc == 0x08A1C6BCu) goto L_08A1C6BC;
    return;
L_08A1C6BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C6C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A1C6D8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(468));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 98u, 0x08A465D4u>(ctx, &aot_mem) && ctx.pc == 0x08A1C6D8u) goto L_08A1C6D8;
    return;
L_08A1C6D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C6E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1C708u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-644));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C708u) goto L_08A1C708;
    return;
L_08A1C708:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[5]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C738:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A1C758u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A1C758u) goto L_08A1C758;
    return;
L_08A1C758:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16544));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A1C76Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1C910;
L_08A1C76C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A1C780u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-516));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C780u) goto L_08A1C780;
    return;
L_08A1C780:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1C794u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C794u) goto L_08A1C794;
    return;
L_08A1C794:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A1C7A8u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-500));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C7A8u) goto L_08A1C7A8;
    return;
L_08A1C7A8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1C7BCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C7BCu) goto L_08A1C7BC;
    return;
L_08A1C7BC:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(328));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-532));
    goto L_08A1C7CC;
L_08A1C7CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A1C7DCu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A1C7DCu) goto L_08A1C7DC;
    return;
L_08A1C7DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A1C7F4;
      }
      goto L_08A1C7E4;
    }
L_08A1C7E4:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A1C7CC;
      }
      goto L_08A1C7F4;
    }
L_08A1C7F4:
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
L_08A1C814:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C81C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[12] = (aot_gpr[5] | 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(328)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(296)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(300)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    aot_gpr[11] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[4] = (aot_gpr[12] | 0u);
      if (branch_taken) {
          goto L_08A1C880;
      }
      goto L_08A1C85C;
    }
L_08A1C85C:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(332)));
    { const bool branch_taken = aot_gpr[12] != 0u;
    aot_gpr[14] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A1C884;
      }
      goto L_08A1C868;
    }
L_08A1C868:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = aot_gpr[12] != 0u;
    aot_gpr[14] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A1C884;
      }
      goto L_08A1C874;
    }
L_08A1C874:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(340)));
    if (aot_gpr[12] == 0u) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0))))));
        goto L_08A1C8CC;
    }
    goto L_08A1C880;
L_08A1C880:
    aot_gpr[14] = (aot_gpr[6] | 0u);
    goto L_08A1C884;
L_08A1C884:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0))))));
    aot_gpr[12] = (aot_gpr[8] | 0u);
    aot_gpr[13] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[15] = (aot_gpr[5] + static_cast<std::uint32_t>(328));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[11] | 0u);
    aot_gpr[7] = (aot_gpr[10] | 0u);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (aot_gpr[12] | 0u);
    aot_gpr[10] = (aot_gpr[13] | 0u);
    aot_gpr[11] = (aot_gpr[15] | 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x08A1C8C0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C8C0u) goto L_08A1C8C0;
    return;
L_08A1C8C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C8CC:
    aot_gpr[12] = (aot_gpr[8] | 0u);
    aot_gpr[13] = (aot_gpr[7] | 0u);
    aot_gpr[14] = (aot_gpr[6] | 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[11] | 0u);
    aot_gpr[7] = (aot_gpr[10] | 0u);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (aot_gpr[12] | 0u);
    aot_gpr[10] = (aot_gpr[13] | 0u);
    aot_gpr[11] = (0u | 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x08A1C904u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C904u) goto L_08A1C904;
    return;
L_08A1C904:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C910:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1C934u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-484));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C934u) goto L_08A1C934;
    return;
L_08A1C934:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(340), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C960:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A1C988u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A1C988u) goto L_08A1C988;
    return;
L_08A1C988:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16680));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A1C99Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A1CB6C;
L_08A1C99C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(308), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(296));
    aot_gpr[31] = (0x08A1C9B4u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-464));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C9B4u) goto L_08A1C9B4;
    return;
L_08A1C9B4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1C9C8u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C9C8u) goto L_08A1C9C8;
    return;
L_08A1C9C8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(300));
    aot_gpr[31] = (0x08A1C9DCu);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-452));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C9DCu) goto L_08A1C9DC;
    return;
L_08A1C9DC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1C9F0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1C9F0u) goto L_08A1C9F0;
    return;
L_08A1C9F0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(304));
    aot_gpr[31] = (0x08A1CA04u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-436));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CA04u) goto L_08A1CA04;
    return;
L_08A1CA04:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1CA18u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1CA18u) goto L_08A1CA18;
    return;
L_08A1CA18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CA38;
      }
      goto L_08A1CA24;
    }
L_08A1CA24:
    aot_gpr[31] = (0x08A1CA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1CA2Cu) goto L_08A1CA2C;
    return;
L_08A1CA2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (0x08A1CA38u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 240u, 0x089EFEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1CA38u) goto L_08A1CA38;
    return;
L_08A1CA38:
    aot_gpr[31] = (0x08A1CA40u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A1CBAC;
L_08A1CA40:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1CA4Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A1CD10;
L_08A1CA4C:
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
L_08A1CA70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1CAB8;
      }
      goto L_08A1CA8C;
    }
L_08A1CA8C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16680));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1CAA4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A1CAA4u) goto L_08A1CAA4;
    return;
L_08A1CAA4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CAB8;
      }
      goto L_08A1CAB0;
    }
L_08A1CAB0:
    aot_gpr[31] = (0x08A1CAB8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A1CAB8u) goto L_08A1CAB8;
    return;
L_08A1CAB8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CACC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(296)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A1CAFC;
      }
      goto L_08A1CAE4;
    }
L_08A1CAE4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1CAFCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1CAFCu) goto L_08A1CAFC;
    return;
L_08A1CAFC:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CB0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1CB54;
      }
      goto L_08A1CB28;
    }
L_08A1CB28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (0u | 1u);
        goto L_08A1CB50;
    }
    goto L_08A1CB34;
L_08A1CB34:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1CB4Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1CB4Cu) goto L_08A1CB4C;
    return;
L_08A1CB4C:
    aot_gpr[4] = (0u | 1u);
    goto L_08A1CB50;
L_08A1CB50:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(308), aot_gpr[4]);
    goto L_08A1CB54;
L_08A1CB54:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CB64:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CB6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1CB90u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-424));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CB90u) goto L_08A1CB90;
    return;
L_08A1CB90:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(300), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CBAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08A1CBD0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1CBD0u) goto L_08A1CBD0;
    return;
L_08A1CBD0:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A1CBECu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-408));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CBECu) goto L_08A1CBEC;
    return;
L_08A1CBEC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1CC00u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1CC00u) goto L_08A1CC00;
    return;
L_08A1CC00:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_08A1CC14;
    }
    goto L_08A1CC08;
L_08A1CC08:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A1CC14;
L_08A1CC14:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A1CC24u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-396));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CC24u) goto L_08A1CC24;
    return;
L_08A1CC24:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1CC38u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1CC38u) goto L_08A1CC38;
    return;
L_08A1CC38:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_08A1CC4C;
    }
    goto L_08A1CC40;
L_08A1CC40:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A1CC4C;
L_08A1CC4C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A1CC5Cu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-384));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CC5Cu) goto L_08A1CC5C;
    return;
L_08A1CC5C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1CC70u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1CC70u) goto L_08A1CC70;
    return;
L_08A1CC70:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_08A1CC84;
    }
    goto L_08A1CC78;
L_08A1CC78:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A1CC84;
L_08A1CC84:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A1CC94u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-372));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CC94u) goto L_08A1CC94;
    return;
L_08A1CC94:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1CCA8u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1CCA8u) goto L_08A1CCA8;
    return;
L_08A1CCA8:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
        goto L_08A1CCBC;
    }
    goto L_08A1CCB0;
L_08A1CCB0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    goto L_08A1CCBC;
L_08A1CCBC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A1CCCCu);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-360));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CCCCu) goto L_08A1CCCC;
    return;
L_08A1CCCC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1CCE0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1CCE0u) goto L_08A1CCE0;
    return;
L_08A1CCE0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CCF0;
      }
      goto L_08A1CCE8;
    }
L_08A1CCE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_08A1CCF0;
L_08A1CCF0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CD10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A1CD34u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-344));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CD34u) goto L_08A1CD34;
    return;
L_08A1CD34:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1CD48u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1CD48u) goto L_08A1CD48;
    return;
L_08A1CD48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CD68;
      }
      goto L_08A1CD54;
    }
L_08A1CD54:
    aot_gpr[31] = (0x08A1CD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1CD5Cu) goto L_08A1CD5C;
    return;
L_08A1CD5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A1CD68u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 242u, 0x089EFEFCu>(ctx, &aot_mem) && ctx.pc == 0x08A1CD68u) goto L_08A1CD68;
    return;
L_08A1CD68:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CD7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A1CD98u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A1CD98u) goto L_08A1CD98;
    return;
L_08A1CD98:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16816));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(304));
    aot_gpr[31] = (0x08A1CDB0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 75u, 0x08A46458u>(ctx, &aot_mem) && ctx.pc == 0x08A1CDB0u) goto L_08A1CDB0;
    return;
L_08A1CDB0:
    aot_gpr[31] = (0x08A1CDB8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 9u, 0x08A1D06Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CDB8u) goto L_08A1CDB8;
    return;
L_08A1CDB8:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1CDCCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 11u, 0x08A1D0A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1CDCCu) goto L_08A1CDCC;
    return;
L_08A1CDCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(296), aot_gpr[2]);
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
L_08A1CDE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A1CE10u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1CE10u) goto L_08A1CE10;
    return;
L_08A1CE10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A1CEC8;
      }
      goto L_08A1CE1C;
    }
L_08A1CE1C:
    aot_gpr[31] = (0x08A1CE24u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 3u, 0x08A1D018u>(ctx, &aot_mem) && ctx.pc == 0x08A1CE24u) goto L_08A1CE24;
    return;
L_08A1CE24:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CEA8;
      }
      goto L_08A1CE2C;
    }
L_08A1CE2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CE88;
      }
      goto L_08A1CE38;
    }
L_08A1CE38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(296)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A1CE4Cu);
    aot_gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CE4Cu) goto L_08A1CE4C;
    return;
L_08A1CE4C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CE88;
      }
      goto L_08A1CE54;
    }
L_08A1CE54:
    aot_gpr[31] = (0x08A1CE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x08A1CE5Cu) goto L_08A1CE5C;
    return;
L_08A1CE5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(296)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A1CE70u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 136u, 0x08A03830u>(ctx, &aot_mem) && ctx.pc == 0x08A1CE70u) goto L_08A1CE70;
    return;
L_08A1CE70:
    aot_gpr[31] = (0x08A1CE78u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 7u, 0x08A1D050u>(ctx, &aot_mem) && ctx.pc == 0x08A1CE78u) goto L_08A1CE78;
    return;
L_08A1CE78:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A1CEE8;
    }
    goto L_08A1CE80;
L_08A1CE80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CF58;
      }
      goto L_08A1CE88;
    }
L_08A1CE88:
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
L_08A1CEA8:
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
L_08A1CEC8:
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
L_08A1CEE8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08A1CEFCu);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 3u, 0x08A1D018u>(ctx, &aot_mem) && ctx.pc == 0x08A1CEFCu) goto L_08A1CEFC;
    return;
L_08A1CEFC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1CF08u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 5u, 0x08A1D034u>(ctx, &aot_mem) && ctx.pc == 0x08A1CF08u) goto L_08A1CF08;
    return;
L_08A1CF08:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A1CF2Cu);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1CF2Cu) goto L_08A1CF2C;
    return;
L_08A1CF2C:
    aot_gpr[31] = (0x08A1CF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CF34u) goto L_08A1CF34;
    return;
L_08A1CF34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1CF58u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1CF58u) goto L_08A1CF58;
    return;
L_08A1CF58:
    aot_gpr[2] = (0u | 0u);
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
L_08A1CF78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(300)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1CFF8;
      }
      goto L_08A1CF9C;
    }
L_08A1CF9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(300), 0u);
    aot_gpr[31] = (0x08A1CFA8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 7u, 0x08A1D050u>(ctx, &aot_mem) && ctx.pc == 0x08A1CFA8u) goto L_08A1CFA8;
    return;
L_08A1CFA8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CFF8;
      }
      goto L_08A1CFB0;
    }
L_08A1CFB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08A1CFC8u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 3u, 0x08A1D018u>(ctx, &aot_mem) && ctx.pc == 0x08A1CFC8u) goto L_08A1CFC8;
    return;
L_08A1CFC8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1CFD4u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 5u, 0x08A1D034u>(ctx, &aot_mem) && ctx.pc == 0x08A1CFD4u) goto L_08A1CFD4;
    return;
L_08A1CFD4:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A1CFF8u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1CFF8u) goto L_08A1CFF8;
    return;
L_08A1CFF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A1D000u; return;
}

void recomp_unit_0536(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0536_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_536(Runtime &runtime) {
    runtime.register_generated_unit(536u, 0x08A1C000u, 4096u, &recomp_unit_0536, &recomp_unit_0536_entry);
    runtime.register_function(0x08A1C004u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C00Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C048u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C060u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C078u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C080u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C088u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C08Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C0A0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C0B0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C0BCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C0CCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C0D8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C0E8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C0F4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C118u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C13Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C14Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C170u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C188u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C190u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C1A4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C1B8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C1CCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C1E0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C1F4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C208u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C21Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C224u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C228u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C230u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C238u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C244u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C254u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C25Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C264u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C270u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C27Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C284u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C28Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C298u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C29Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C2A4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C2B4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C2BCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C2C4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C2C8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C2E8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C304u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C31Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C328u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C340u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C34Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C354u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C368u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C3ACu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C3B4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C3C0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C3C8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C3E0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C3E8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C3F0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C3FCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C404u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C424u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C42Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C444u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C450u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C474u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C47Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C49Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C4C0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C4CCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C4D4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C4E4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C4ECu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C4FCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C504u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C514u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C51Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C520u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C530u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C554u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C578u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C5A4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C5BCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C5C8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C5D8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C5DCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C5E0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C5F4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C5FCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C60Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C614u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C66Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C688u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C690u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C6A0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C6ACu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C6BCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C6C8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C6D8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C6E4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C708u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C738u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C758u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C76Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C780u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C794u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C7A8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C7BCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C7CCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C7DCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C7E4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C7F4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C814u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C81Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C85Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C868u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C874u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C880u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C884u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C8C0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C8CCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C904u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C910u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C934u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C960u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C988u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C99Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C9B4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C9C8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C9DCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1C9F0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CA04u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CA18u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CA24u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CA2Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CA38u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CA40u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CA4Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CA70u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CA8Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CAA4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CAB0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CAB8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CACCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CAE4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CAFCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CB0Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CB28u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CB34u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CB4Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CB50u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CB54u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CB64u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CB6Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CB90u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CBACu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CBD0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CBECu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CC00u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CC08u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CC14u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CC24u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CC38u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CC40u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CC4Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CC5Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CC70u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CC78u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CC84u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CC94u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CCA8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CCB0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CCBCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CCCCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CCE0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CCE8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CCF0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CD10u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CD34u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CD48u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CD54u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CD5Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CD68u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CD7Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CD98u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CDB0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CDB8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CDCCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CDE8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CE10u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CE1Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CE24u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CE2Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CE38u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CE4Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CE54u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CE5Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CE70u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CE78u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CE80u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CE88u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CEA8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CEC8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CEE8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CEFCu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CF08u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CF2Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CF34u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CF58u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CF78u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CF9Cu, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CFA8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CFB0u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CFC8u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CFD4u, &recomp_unit_0536, "recomp_unit_0536");
    runtime.register_function(0x08A1CFF8u, &recomp_unit_0536, "recomp_unit_0536");
}
} // namespace psprecomp
