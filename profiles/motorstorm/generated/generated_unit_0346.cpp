#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0346[1023] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 8, 0, 0, 0, 9, 10, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 32, 0, 0, 33, 0, 34, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0,
    42, 0, 0, 0, 43, 0, 0, 44, 0, 45, 46, 0, 0, 47, 0, 0, 48, 0, 49, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 57, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 64, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0,
    0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0,
    81, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 91, 0,
    0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 102,
    0, 0, 0, 0, 103, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 115, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131,
    0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0,
    141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0,
    148, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 159, 0,
    160, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 0, 168, 0, 169, 170, 171, 0, 0, 0, 172, 0,
    0, 0, 173, 0, 0, 174, 0, 175, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0,
    0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 185, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 200,
    0, 0, 201, 0, 202, 203, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 0,
    214, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 218, 0, 219, 0, 220, 221, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0,
    0, 225, 0, 0, 226, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0,
    235, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0,
    0, 0, 243, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256,
};
void recomp_unit_0346_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0895E004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0346[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0895E004;
    case 2u: goto L_0895E00C;
    case 3u: goto L_0895E028;
    case 4u: goto L_0895E03C;
    case 5u: goto L_0895E04C;
    case 6u: goto L_0895E05C;
    case 7u: goto L_0895E088;
    case 8u: goto L_0895E094;
    case 9u: goto L_0895E0A4;
    case 10u: goto L_0895E0A8;
    case 11u: goto L_0895E0AC;
    case 12u: goto L_0895E0C0;
    case 13u: goto L_0895E0DC;
    case 14u: goto L_0895E0F0;
    case 15u: goto L_0895E0F8;
    case 16u: goto L_0895E118;
    case 17u: goto L_0895E140;
    case 18u: goto L_0895E14C;
    case 19u: goto L_0895E160;
    case 20u: goto L_0895E168;
    case 21u: goto L_0895E170;
    case 22u: goto L_0895E18C;
    case 23u: goto L_0895E1A4;
    case 24u: goto L_0895E1B0;
    case 25u: goto L_0895E1CC;
    case 26u: goto L_0895E1F8;
    case 27u: goto L_0895E200;
    case 28u: goto L_0895E210;
    case 29u: goto L_0895E234;
    case 30u: goto L_0895E244;
    case 31u: goto L_0895E264;
    case 32u: goto L_0895E290;
    case 33u: goto L_0895E29C;
    case 34u: goto L_0895E2A4;
    case 35u: goto L_0895E2A8;
    case 36u: goto L_0895E2E0;
    case 37u: goto L_0895E2F8;
    case 38u: goto L_0895E32C;
    case 39u: goto L_0895E364;
    case 40u: goto L_0895E370;
    case 41u: goto L_0895E37C;
    case 42u: goto L_0895E384;
    case 43u: goto L_0895E394;
    case 44u: goto L_0895E3A0;
    case 45u: goto L_0895E3A8;
    case 46u: goto L_0895E3AC;
    case 47u: goto L_0895E3B8;
    case 48u: goto L_0895E3C4;
    case 49u: goto L_0895E3CC;
    case 50u: goto L_0895E3D0;
    case 51u: goto L_0895E3F0;
    case 52u: goto L_0895E408;
    case 53u: goto L_0895E420;
    case 54u: goto L_0895E42C;
    case 55u: goto L_0895E464;
    case 56u: goto L_0895E470;
    case 57u: goto L_0895E474;
    case 58u: goto L_0895E484;
    case 59u: goto L_0895E4C0;
    case 60u: goto L_0895E4D0;
    case 61u: goto L_0895E4D8;
    case 62u: goto L_0895E4E8;
    case 63u: goto L_0895E50C;
    case 64u: goto L_0895E520;
    case 65u: goto L_0895E524;
    case 66u: goto L_0895E540;
    case 67u: goto L_0895E54C;
    case 68u: goto L_0895E558;
    case 69u: goto L_0895E560;
    case 70u: goto L_0895E574;
    case 71u: goto L_0895E57C;
    case 72u: goto L_0895E58C;
    case 73u: goto L_0895E59C;
    case 74u: goto L_0895E5A8;
    case 75u: goto L_0895E5B4;
    case 76u: goto L_0895E5C4;
    case 77u: goto L_0895E5D0;
    case 78u: goto L_0895E5DC;
    case 79u: goto L_0895E5E8;
    case 80u: goto L_0895E5F8;
    case 81u: goto L_0895E604;
    case 82u: goto L_0895E60C;
    case 83u: goto L_0895E61C;
    case 84u: goto L_0895E624;
    case 85u: goto L_0895E630;
    case 86u: goto L_0895E640;
    case 87u: goto L_0895E64C;
    case 88u: goto L_0895E65C;
    case 89u: goto L_0895E668;
    case 90u: goto L_0895E674;
    case 91u: goto L_0895E67C;
    case 92u: goto L_0895E68C;
    case 93u: goto L_0895E694;
    case 94u: goto L_0895E6A0;
    case 95u: goto L_0895E6AC;
    case 96u: goto L_0895E6B4;
    case 97u: goto L_0895E6C4;
    case 98u: goto L_0895E6CC;
    case 99u: goto L_0895E6DC;
    case 100u: goto L_0895E6EC;
    case 101u: goto L_0895E6F4;
    case 102u: goto L_0895E700;
    case 103u: goto L_0895E714;
    case 104u: goto L_0895E718;
    case 105u: goto L_0895E724;
    case 106u: goto L_0895E72C;
    case 107u: goto L_0895E740;
    case 108u: goto L_0895E760;
    case 109u: goto L_0895E788;
    case 110u: goto L_0895E794;
    case 111u: goto L_0895E7A0;
    case 112u: goto L_0895E7A8;
    case 113u: goto L_0895E7B8;
    case 114u: goto L_0895E7CC;
    case 115u: goto L_0895E7D0;
    case 116u: goto L_0895E7DC;
    case 117u: goto L_0895E7F4;
    case 118u: goto L_0895E808;
    case 119u: goto L_0895E824;
    case 120u: goto L_0895E860;
    case 121u: goto L_0895E870;
    case 122u: goto L_0895E878;
    case 123u: goto L_0895E888;
    case 124u: goto L_0895E8A8;
    case 125u: goto L_0895E8AC;
    case 126u: goto L_0895E8B4;
    case 127u: goto L_0895E8C4;
    case 128u: goto L_0895E8D8;
    case 129u: goto L_0895E8E0;
    case 130u: goto L_0895E8F0;
    case 131u: goto L_0895E900;
    case 132u: goto L_0895E90C;
    case 133u: goto L_0895E918;
    case 134u: goto L_0895E920;
    case 135u: goto L_0895E930;
    case 136u: goto L_0895E938;
    case 137u: goto L_0895E940;
    case 138u: goto L_0895E950;
    case 139u: goto L_0895E960;
    case 140u: goto L_0895E978;
    case 141u: goto L_0895E984;
    case 142u: goto L_0895E994;
    case 143u: goto L_0895E9B0;
    case 144u: goto L_0895E9BC;
    case 145u: goto L_0895E9D0;
    case 146u: goto L_0895E9F0;
    case 147u: goto L_0895E9FC;
    case 148u: goto L_0895EA04;
    case 149u: goto L_0895EA08;
    case 150u: goto L_0895EA34;
    case 151u: goto L_0895EA40;
    case 152u: goto L_0895EA4C;
    case 153u: goto L_0895EA58;
    case 154u: goto L_0895EA70;
    case 155u: goto L_0895EA78;
    case 156u: goto L_0895EAE4;
    case 157u: goto L_0895EAEC;
    case 158u: goto L_0895EAF4;
    case 159u: goto L_0895EAFC;
    case 160u: goto L_0895EB04;
    case 161u: goto L_0895EB0C;
    case 162u: goto L_0895EB14;
    case 163u: goto L_0895EB24;
    case 164u: goto L_0895EB34;
    case 165u: goto L_0895EB3C;
    case 166u: goto L_0895EB44;
    case 167u: goto L_0895EB50;
    case 168u: goto L_0895EB5C;
    case 169u: goto L_0895EB64;
    case 170u: goto L_0895EB68;
    case 171u: goto L_0895EB6C;
    case 172u: goto L_0895EB7C;
    case 173u: goto L_0895EB8C;
    case 174u: goto L_0895EB98;
    case 175u: goto L_0895EBA0;
    case 176u: goto L_0895EBA4;
    case 177u: goto L_0895EBC0;
    case 178u: goto L_0895EBD4;
    case 179u: goto L_0895EBE4;
    case 180u: goto L_0895EBEC;
    case 181u: goto L_0895EBF4;
    case 182u: goto L_0895EBFC;
    case 183u: goto L_0895EC0C;
    case 184u: goto L_0895EC14;
    case 185u: goto L_0895EC30;
    case 186u: goto L_0895EC34;
    case 187u: goto L_0895EC58;
    case 188u: goto L_0895EC60;
    case 189u: goto L_0895EC6C;
    case 190u: goto L_0895EC74;
    case 191u: goto L_0895EC84;
    case 192u: goto L_0895ECA0;
    case 193u: goto L_0895ECA8;
    case 194u: goto L_0895ECB8;
    case 195u: goto L_0895ECC8;
    case 196u: goto L_0895ECDC;
    case 197u: goto L_0895ECE8;
    case 198u: goto L_0895ECF0;
    case 199u: goto L_0895ECF8;
    case 200u: goto L_0895ED00;
    case 201u: goto L_0895ED0C;
    case 202u: goto L_0895ED14;
    case 203u: goto L_0895ED18;
    case 204u: goto L_0895ED28;
    case 205u: goto L_0895ED3C;
    case 206u: goto L_0895ED44;
    case 207u: goto L_0895ED64;
    case 208u: goto L_0895EDC8;
    case 209u: goto L_0895EDD4;
    case 210u: goto L_0895EDDC;
    case 211u: goto L_0895EDE4;
    case 212u: goto L_0895EDEC;
    case 213u: goto L_0895EDF4;
    case 214u: goto L_0895EE04;
    case 215u: goto L_0895EE14;
    case 216u: goto L_0895EE1C;
    case 217u: goto L_0895EE24;
    case 218u: goto L_0895EE34;
    case 219u: goto L_0895EE3C;
    case 220u: goto L_0895EE44;
    case 221u: goto L_0895EE48;
    case 222u: goto L_0895EE58;
    case 223u: goto L_0895EE6C;
    case 224u: goto L_0895EE74;
    case 225u: goto L_0895EE88;
    case 226u: goto L_0895EE94;
    case 227u: goto L_0895EEA0;
    case 228u: goto L_0895EEA8;
    case 229u: goto L_0895EEB0;
    case 230u: goto L_0895EEC0;
    case 231u: goto L_0895EED0;
    case 232u: goto L_0895EED8;
    case 233u: goto L_0895EEEC;
    case 234u: goto L_0895EEFC;
    case 235u: goto L_0895EF04;
    case 236u: goto L_0895EF0C;
    case 237u: goto L_0895EF14;
    case 238u: goto L_0895EF20;
    case 239u: goto L_0895EF4C;
    case 240u: goto L_0895EF60;
    case 241u: goto L_0895EF70;
    case 242u: goto L_0895EF7C;
    case 243u: goto L_0895EF8C;
    case 244u: goto L_0895EF94;
    case 245u: goto L_0895EF9C;
    case 246u: goto L_0895EFA8;
    case 247u: goto L_0895EFB0;
    case 248u: goto L_0895EFB8;
    case 249u: goto L_0895EFC0;
    case 250u: goto L_0895EFC8;
    case 251u: goto L_0895EFD4;
    case 252u: goto L_0895EFDC;
    case 253u: goto L_0895EFE4;
    case 254u: goto L_0895EFEC;
    case 255u: goto L_0895EFF4;
    case 256u: goto L_0895EFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0895E004:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0895E00C;
L_0895E00C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 2048u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0895E028u);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x0895E028u) goto L_0895E028;
    return;
L_0895E028:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[8] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E0AC;
      }
      goto L_0895E03C;
    }
L_0895E03C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[8]);
    aot_gpr[31] = (0x0895E04Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0895E04Cu) goto L_0895E04C;
    return;
L_0895E04C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_gpr[31] = (0x0895E05Cu);
    aot_gpr[5] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E05Cu) goto L_0895E05C;
    return;
L_0895E05C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] >> 11u);
    aot_gpr[6] = (aot_gpr[4] << 11u);
    aot_gpr[6] = (0u + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0895E088u);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x0895E088u) goto L_0895E088;
    return;
L_0895E088:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895E0A8;
      }
      goto L_0895E094;
    }
L_0895E094:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0895E0A4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0345_entry, 345u, 165u, 0x0895DF08u>(ctx, &aot_mem) && ctx.pc == 0x0895E0A4u) goto L_0895E0A4;
    return;
L_0895E0A4:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    goto L_0895E0A8;
L_0895E0A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0895E0AC;
L_0895E0AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(260), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(264), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0895E0DC;
      }
      goto L_0895E0C0;
    }
L_0895E0C0:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(268), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(269), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895E0F0;
      }
      goto L_0895E0DC;
    }
L_0895E0DC:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(268), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(269), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    goto L_0895E0F0;
L_0895E0F0:
    aot_gpr[31] = (0x0895E0F8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0895E0F8u) goto L_0895E0F8;
    return;
L_0895E0F8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29332)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28440), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E170;
      }
      goto L_0895E118;
    }
L_0895E118:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0895E140u);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E140u) goto L_0895E140;
    return;
L_0895E140:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0895E168;
      }
      goto L_0895E14C;
    }
L_0895E14C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(276)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0895E160u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 195u, 0x0891BFD0u>(ctx, &aot_mem) && ctx.pc == 0x0895E160u) goto L_0895E160;
    return;
L_0895E160:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0895E168;
L_0895E168:
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28436), aot_gpr[16]);
    goto L_0895E170;
L_0895E170:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(272), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 64u);
      if (branch_taken) {
          goto L_0895E1CC;
      }
      goto L_0895E18C;
    }
L_0895E18C:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(272)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(340)));
    aot_gpr[9] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E1B0;
      }
      goto L_0895E1A4;
    }
L_0895E1A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(272), aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    goto L_0895E1B0;
L_0895E1B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(344), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0895E18C;
      }
      goto L_0895E1CC;
    }
L_0895E1CC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4448));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4464), aot_gpr[22]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(328));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    goto L_0895E1F8;
L_0895E1F8:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[30];
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_0895E234;
      }
      goto L_0895E200;
    }
L_0895E200:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(340)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0895E210u);
    aot_gpr[5] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E210u) goto L_0895E210;
    return;
L_0895E210:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4476), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4476)));
      if (branch_taken) {
          goto L_0895E264;
      }
      goto L_0895E234;
    }
L_0895E234:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(272)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0895E244u);
    aot_gpr[5] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E244u) goto L_0895E244;
    return;
L_0895E244:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4476), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4476)));
    goto L_0895E264;
L_0895E264:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (0u | 16u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0895E290u);
    aot_gpr[6] = (0u | 32u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E290u) goto L_0895E290;
    return;
L_0895E290:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0895E2A8;
      }
      goto L_0895E29C;
    }
L_0895E29C:
    aot_gpr[31] = (0x0895E2A4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 53u, 0x08927540u>(ctx, &aot_mem) && ctx.pc == 0x0895E2A4u) goto L_0895E2A4;
    return;
L_0895E2A4:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    goto L_0895E2A8;
L_0895E2A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4524), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4492), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4508), 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0895E1F8;
      }
      goto L_0895E2E0;
    }
L_0895E2E0:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(-28431), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0895E2F8u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0345_entry, 345u, 75u, 0x0895D760u>(ctx, &aot_mem) && ctx.pc == 0x0895E2F8u) goto L_0895E2F8;
    return;
L_0895E2F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(360)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(372)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(376)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E32C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28431), static_cast<std::uint8_t>(0u));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[16] | 0u);
    goto L_0895E364;
L_0895E364:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0895E370u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0345_entry, 345u, 86u, 0x0895D868u>(ctx, &aot_mem) && ctx.pc == 0x0895E370u) goto L_0895E370;
    return;
L_0895E370:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4524)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E384;
      }
      goto L_0895E37C;
    }
L_0895E37C:
    aot_gpr[31] = (0x0895E384u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 63u, 0x08927680u>(ctx, &aot_mem) && ctx.pc == 0x0895E384u) goto L_0895E384;
    return;
L_0895E384:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895E364;
      }
      goto L_0895E394;
    }
L_0895E394:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28436)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E3AC;
      }
      goto L_0895E3A0;
    }
L_0895E3A0:
    aot_gpr[31] = (0x0895E3A8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 3u, 0x0891C030u>(ctx, &aot_mem) && ctx.pc == 0x0895E3A8u) goto L_0895E3A8;
    return;
L_0895E3A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28436), 0u);
    goto L_0895E3AC;
L_0895E3AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895E3D0;
      }
      goto L_0895E3B8;
    }
L_0895E3B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E3D0;
      }
      goto L_0895E3C4;
    }
L_0895E3C4:
    aot_gpr[31] = (0x0895E3CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 138u, 0x089337B8u>(ctx, &aot_mem) && ctx.pc == 0x0895E3CCu) goto L_0895E3CC;
    return;
L_0895E3CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(260), aot_gpr[17]);
    goto L_0895E3D0;
L_0895E3D0:
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
L_0895E3F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4464)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895E420;
      }
      goto L_0895E408;
    }
L_0895E408:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4436)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2))))));
    aot_gpr[31] = (0x0895E420u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1))))));
    if (rt.invoke_chained_direct<&recomp_unit_0345_entry, 345u, 117u, 0x0895DB78u>(ctx, &aot_mem) && ctx.pc == 0x0895E420u) goto L_0895E420;
    return;
L_0895E420:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E42C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(4448);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_0895E464;
L_0895E464:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4508)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0895E474;
      }
      goto L_0895E470;
    }
L_0895E470:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4508), 0u);
    goto L_0895E474;
L_0895E474:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895E464;
      }
      goto L_0895E484;
    }
L_0895E484:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(312)));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[14];
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_fpr[15] = aot_fpr[15] - aot_fpr[16];
    aot_fpr[15] = aot_fpr[15] / aot_fpr[17];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0895E6EC;
      }
      goto L_0895E4C0;
    }
L_0895E4C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(280)));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E6EC;
      }
      goto L_0895E4D0;
    }
L_0895E4D0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895E6EC;
      }
      goto L_0895E4D8;
    }
L_0895E4D8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E6EC;
      }
      goto L_0895E4E8;
    }
L_0895E4E8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4436)));
    aot_gpr[5] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895E6EC;
      }
      goto L_0895E50C;
    }
L_0895E50C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4464), aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28416)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895E524;
      }
      goto L_0895E520;
    }
L_0895E520:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28416), aot_gpr[4]);
    goto L_0895E524;
L_0895E524:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4548), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    goto L_0895E540;
L_0895E540:
    aot_gpr[9] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E558;
      }
      goto L_0895E54C;
    }
L_0895E54C:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0895E560;
      }
      goto L_0895E558;
    }
L_0895E558:
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_0895E560;
L_0895E560:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4548), aot_gpr[9]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[6] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895E540;
      }
      goto L_0895E574;
    }
L_0895E574:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_0895E57C;
L_0895E57C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4548)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E59C;
      }
      goto L_0895E58C;
    }
L_0895E58C:
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4548), aot_gpr[6]);
      if (branch_taken) {
          goto L_0895E5B4;
      }
      goto L_0895E59C;
    }
L_0895E59C:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E5B4;
      }
      goto L_0895E5A8;
    }
L_0895E5A8:
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4548), aot_gpr[6]);
    goto L_0895E5B4;
L_0895E5B4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895E57C;
      }
      goto L_0895E5C4;
    }
L_0895E5C4:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[19] = (0u | 3u);
    aot_gpr[18] = (aot_gpr[16] | 0u);
    goto L_0895E5D0;
L_0895E5D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4476)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E630;
      }
      goto L_0895E5DC;
    }
L_0895E5DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4508)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0895E630;
      }
      goto L_0895E5E8;
    }
L_0895E5E8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4492)));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_0895E5F8;
L_0895E5F8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4548)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0895E60C;
      }
      goto L_0895E604;
    }
L_0895E604:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895E61C;
      }
      goto L_0895E60C;
    }
L_0895E60C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895E5F8;
      }
      goto L_0895E61C;
    }
L_0895E61C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E630;
      }
      goto L_0895E624;
    }
L_0895E624:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0895E630u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0345_entry, 345u, 86u, 0x0895D868u>(ctx, &aot_mem) && ctx.pc == 0x0895E630u) goto L_0895E630;
    return;
L_0895E630:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895E5D0;
      }
      goto L_0895E640;
    }
L_0895E640:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[16] | 0u);
    goto L_0895E64C;
L_0895E64C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4548)));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_0895E65C;
L_0895E65C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4492)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_0895E67C;
      }
      goto L_0895E668;
    }
L_0895E668:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4508)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E67C;
      }
      goto L_0895E674;
    }
L_0895E674:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895E68C;
      }
      goto L_0895E67C;
    }
L_0895E67C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895E65C;
      }
      goto L_0895E68C;
    }
L_0895E68C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E6DC;
      }
      goto L_0895E694;
    }
L_0895E694:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_0895E6A0;
L_0895E6A0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4508)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E6B4;
      }
      goto L_0895E6AC;
    }
L_0895E6AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0895E6C4;
      }
      goto L_0895E6B4;
    }
L_0895E6B4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895E6A0;
      }
      goto L_0895E6C4;
    }
L_0895E6C4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0895E6DC;
      }
      goto L_0895E6CC;
    }
L_0895E6CC:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0895E6DCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0345_entry, 345u, 75u, 0x0895D760u>(ctx, &aot_mem) && ctx.pc == 0x0895E6DCu) goto L_0895E6DC;
    return;
L_0895E6DC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895E64C;
      }
      goto L_0895E6EC;
    }
L_0895E6EC:
    aot_gpr[31] = (0x0895E6F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895E3F0;
L_0895E6F4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0895E700u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0345_entry, 345u, 145u, 0x0895DD60u>(ctx, &aot_mem) && ctx.pc == 0x0895E700u) goto L_0895E700;
    return;
L_0895E700:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-28448)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2219u << 16u);
      if (branch_taken) {
          goto L_0895E740;
      }
      goto L_0895E714;
    }
L_0895E714:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(26296));
    goto L_0895E718;
L_0895E718:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E72C;
      }
      goto L_0895E724;
    }
L_0895E724:
    aot_gpr[31] = (0x0895E72Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 155u, 0x08922B84u>(ctx, &aot_mem) && ctx.pc == 0x0895E72Cu) goto L_0895E72C;
    return;
L_0895E72C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-28448)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0895E718;
      }
      goto L_0895E740;
    }
L_0895E740:
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
L_0895E760:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (0u | 3u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    goto L_0895E788;
L_0895E788:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4476)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E7A8;
      }
      goto L_0895E794;
    }
L_0895E794:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4508)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895E7A8;
      }
      goto L_0895E7A0;
    }
L_0895E7A0:
    aot_gpr[31] = (0x0895E7A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 135u, 0x0891F9A8u>(ctx, &aot_mem) && ctx.pc == 0x0895E7A8u) goto L_0895E7A8;
    return;
L_0895E7A8:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895E788;
      }
      goto L_0895E7B8;
    }
L_0895E7B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28448)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2219u << 16u);
      if (branch_taken) {
          goto L_0895E808;
      }
      goto L_0895E7CC;
    }
L_0895E7CC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(26296));
    goto L_0895E7D0;
L_0895E7D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E7F4;
      }
      goto L_0895E7DC;
    }
L_0895E7DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[31] = (0x0895E7F4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 117u, 0x089228D4u>(ctx, &aot_mem) && ctx.pc == 0x0895E7F4u) goto L_0895E7F4;
    return;
L_0895E7F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28448)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0895E7D0;
      }
      goto L_0895E808;
    }
L_0895E808:
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
L_0895E824:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(312)));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[14];
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(300)));
    aot_fpr[15] = aot_fpr[15] - aot_fpr[16];
    aot_fpr[15] = aot_fpr[15] / aot_fpr[17];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0895E8A8;
      }
      goto L_0895E860;
    }
L_0895E860:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(280)));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E8A8;
      }
      goto L_0895E870;
    }
L_0895E870:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895E8A8;
      }
      goto L_0895E878;
    }
L_0895E878:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(288)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E8A8;
      }
      goto L_0895E888;
    }
L_0895E888:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(280)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4436)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0895E8AC;
      }
      goto L_0895E8A8;
    }
L_0895E8A8:
    aot_gpr[2] = (0u | 0u);
    goto L_0895E8AC;
L_0895E8AC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E8B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4520)));
    aot_gpr[2] = (aot_gpr[4] ^ 3u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E8C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895E8D8u);
    aot_gpr[6] = (0u | 0u);
    goto L_0895E8B4;
L_0895E8D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E950;
      }
      goto L_0895E8E0;
    }
L_0895E8E0:
    aot_gpr[6] = (0u | 1u);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[4] = (0u | 3u);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    goto L_0895E8F0;
L_0895E8F0:
    aot_gpr[11] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4548)));
    aot_gpr[9] = (aot_gpr[5] | 0u);
    goto L_0895E900;
L_0895E900:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4492)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0895E920;
      }
      goto L_0895E90C;
    }
L_0895E90C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4508)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895E920;
      }
      goto L_0895E918;
    }
L_0895E918:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (0u | 1u);
      if (branch_taken) {
          goto L_0895E930;
      }
      goto L_0895E920;
    }
L_0895E920:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[10] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895E900;
      }
      goto L_0895E930;
    }
L_0895E930:
    { const bool branch_taken = aot_gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E940;
      }
      goto L_0895E938;
    }
L_0895E938:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0895E950;
      }
      goto L_0895E940;
    }
L_0895E940:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895E8F0;
      }
      goto L_0895E950;
    }
L_0895E950:
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E960:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0895E978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0895E978u) goto L_0895E978;
    return;
L_0895E978:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E9BC;
      }
      goto L_0895E984;
    }
L_0895E984:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28400)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E9BC;
      }
      goto L_0895E994;
    }
L_0895E994:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28408)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0895E9B0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    goto L_0895EF70;
L_0895E9B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28408)));
    aot_gpr[31] = (0x0895E9BCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 146u, 0x089FE9C4u>(ctx, &aot_mem) && ctx.pc == 0x0895E9BCu) goto L_0895E9BC;
    return;
L_0895E9BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E9D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    aot_gpr[31] = (0x0895E9F0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 2u, 0x0896000Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E9F0u) goto L_0895E9F0;
    return;
L_0895E9F0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0895EA08;
    }
    goto L_0895E9FC;
L_0895E9FC:
    aot_gpr[31] = (0x0895EA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 20u, 0x08960148u>(ctx, &aot_mem) && ctx.pc == 0x0895EA04u) goto L_0895EA04;
    return;
L_0895EA04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0895EA08;
L_0895EA08:
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27144), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27200), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27176), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0895EA70;
      }
      goto L_0895EA34;
    }
L_0895EA34:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0895EA40u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-23416));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0895EA40u) goto L_0895EA40;
    return;
L_0895EA40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x0895EA4Cu);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0895EA4Cu) goto L_0895EA4C;
    return;
L_0895EA4C:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[31] = (0x0895EA58u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x0895EA58u) goto L_0895EA58;
    return;
L_0895EA58:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0895EA70u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-23404));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0895EA70u) goto L_0895EA70;
    return;
L_0895EA70:
    aot_gpr[31] = (0x0895EA78u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 9u, 0x089FF054u>(ctx, &aot_mem) && ctx.pc == 0x0895EA78u) goto L_0895EA78;
    return;
L_0895EA78:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-31048));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-31040));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-23392));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[31] = (0x0895EAE4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 99u, 0x089FF6A4u>(ctx, &aot_mem) && ctx.pc == 0x0895EAE4u) goto L_0895EAE4;
    return;
L_0895EAE4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0895EAF4;
      }
      goto L_0895EAEC;
    }
L_0895EAEC:
    aot_gpr[31] = (0x0895EAF4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EAF4u) goto L_0895EAF4;
    return;
L_0895EAF4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EBA0;
      }
      goto L_0895EAFC;
    }
L_0895EAFC:
    aot_gpr[31] = (0x0895EB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 117u, 0x08A0E87Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EB04u) goto L_0895EB04;
    return;
L_0895EB04:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EB3C;
      }
      goto L_0895EB0C;
    }
L_0895EB0C:
    aot_gpr[31] = (0x0895EB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 191u, 0x08961ED8u>(ctx, &aot_mem) && ctx.pc == 0x0895EB14u) goto L_0895EB14;
    return;
L_0895EB14:
    aot_gpr[5] = (2198u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0895EB24u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3328));
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 159u, 0x08961CF8u>(ctx, &aot_mem) && ctx.pc == 0x0895EB24u) goto L_0895EB24;
    return;
L_0895EB24:
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28404)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EB44;
      }
      goto L_0895EB34;
    }
L_0895EB34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EB6C;
      }
      goto L_0895EB3C;
    }
L_0895EB3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0895EBA4;
      }
      goto L_0895EB44;
    }
L_0895EB44:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x0895EB50u);
    aot_gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 3u, 0x0895F024u>(ctx, &aot_mem) && ctx.pc == 0x0895EB50u) goto L_0895EB50;
    return;
L_0895EB50:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EB68;
      }
      goto L_0895EB5C;
    }
L_0895EB5C:
    aot_gpr[31] = (0x0895EB64u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 7u, 0x0895F05Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EB64u) goto L_0895EB64;
    return;
L_0895EB64:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_0895EB68;
L_0895EB68:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-28404), aot_gpr[18]);
    goto L_0895EB6C;
L_0895EB6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28404)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0895EB7Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 4u, 0x089FE06Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EB7Cu) goto L_0895EB7C;
    return;
L_0895EB7C:
    aot_gpr[5] = (2198u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0895EB8Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5792));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 102u, 0x08962774u>(ctx, &aot_mem) && ctx.pc == 0x0895EB8Cu) goto L_0895EB8C;
    return;
L_0895EB8C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0895EB98u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    goto L_0895EF60;
L_0895EB98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895EBA4;
      }
      goto L_0895EBA0;
    }
L_0895EBA0:
    aot_gpr[2] = (0u | 4u);
    goto L_0895EBA4;
L_0895EBA4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EBC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0895EBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 191u, 0x08961ED8u>(ctx, &aot_mem) && ctx.pc == 0x0895EBD4u) goto L_0895EBD4;
    return;
L_0895EBD4:
    aot_gpr[5] = (2198u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0895EBE4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3328));
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 171u, 0x08961D9Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EBE4u) goto L_0895EBE4;
    return;
L_0895EBE4:
    aot_gpr[31] = (0x0895EBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 124u, 0x08A0E8D8u>(ctx, &aot_mem) && ctx.pc == 0x0895EBECu) goto L_0895EBEC;
    return;
L_0895EBEC:
    aot_gpr[31] = (0x0895EBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0895EBF4u) goto L_0895EBF4;
    return;
L_0895EBF4:
    aot_gpr[31] = (0x0895EBFCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 98u, 0x089FE764u>(ctx, &aot_mem) && ctx.pc == 0x0895EBFCu) goto L_0895EBFC;
    return;
L_0895EBFC:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28404)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC34;
      }
      goto L_0895EC0C;
    }
L_0895EC0C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC30;
      }
      goto L_0895EC14;
    }
L_0895EC14:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0895EC30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895EC30u) goto L_0895EC30;
    return;
L_0895EC30:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-28404), 0u);
    goto L_0895EC34;
L_0895EC34:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-27144), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-27200), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-27176), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0895EC58u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 102u, 0x08962774u>(ctx, &aot_mem) && ctx.pc == 0x0895EC58u) goto L_0895EC58;
    return;
L_0895EC58:
    aot_gpr[31] = (0x0895EC60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 2u, 0x0896000Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EC60u) goto L_0895EC60;
    return;
L_0895EC60:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC74;
      }
      goto L_0895EC6C;
    }
L_0895EC6C:
    aot_gpr[31] = (0x0895EC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 20u, 0x08960148u>(ctx, &aot_mem) && ctx.pc == 0x0895EC74u) goto L_0895EC74;
    return;
L_0895EC74:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EC84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    aot_gpr[31] = (0x0895ECA0u);
    aot_gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0895ECA0u) goto L_0895ECA0;
    return;
L_0895ECA0:
    aot_gpr[31] = (0x0895ECA8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 9u, 0x089FF054u>(ctx, &aot_mem) && ctx.pc == 0x0895ECA8u) goto L_0895ECA8;
    return;
L_0895ECA8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (0x0895ECB8u);
    aot_gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0895ECB8u) goto L_0895ECB8;
    return;
L_0895ECB8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895ECC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0895ECDCu);
    aot_gpr[16] = (aot_gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0895ECDCu) goto L_0895ECDC;
    return;
L_0895ECDC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ED14;
      }
      goto L_0895ECE8;
    }
L_0895ECE8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ED0C;
      }
      goto L_0895ECF0;
    }
L_0895ECF0:
    aot_gpr[31] = (0x0895ECF8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 124u, 0x08A0E8D8u>(ctx, &aot_mem) && ctx.pc == 0x0895ECF8u) goto L_0895ECF8;
    return;
L_0895ECF8:
    aot_gpr[31] = (0x0895ED00u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 98u, 0x089FE764u>(ctx, &aot_mem) && ctx.pc == 0x0895ED00u) goto L_0895ED00;
    return;
L_0895ED00:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0895ED0Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 102u, 0x08962774u>(ctx, &aot_mem) && ctx.pc == 0x0895ED0Cu) goto L_0895ED0C;
    return;
L_0895ED0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895ED18;
      }
      goto L_0895ED14;
    }
L_0895ED14:
    aot_gpr[2] = (0u | 19u);
    goto L_0895ED18;
L_0895ED18:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895ED28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    aot_gpr[31] = (0x0895ED3Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0895ED3Cu) goto L_0895ED3C;
    return;
L_0895ED3C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EE44;
      }
      goto L_0895ED44;
    }
L_0895ED44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27144), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27200), aot_gpr[4]);
    aot_gpr[31] = (0x0895ED64u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 9u, 0x089FF054u>(ctx, &aot_mem) && ctx.pc == 0x0895ED64u) goto L_0895ED64;
    return;
L_0895ED64:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-31048));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-31040));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-23392));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    aot_gpr[31] = (0x0895EDC8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 99u, 0x089FF6A4u>(ctx, &aot_mem) && ctx.pc == 0x0895EDC8u) goto L_0895EDC8;
    return;
L_0895EDC8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EE3C;
      }
      goto L_0895EDD4;
    }
L_0895EDD4:
    aot_gpr[31] = (0x0895EDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 117u, 0x08A0E87Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EDDCu) goto L_0895EDDC;
    return;
L_0895EDDC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EE1C;
      }
      goto L_0895EDE4;
    }
L_0895EDE4:
    aot_gpr[31] = (0x0895EDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 191u, 0x08961ED8u>(ctx, &aot_mem) && ctx.pc == 0x0895EDECu) goto L_0895EDEC;
    return;
L_0895EDEC:
    aot_gpr[31] = (0x0895EDF4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 184u, 0x08961E68u>(ctx, &aot_mem) && ctx.pc == 0x0895EDF4u) goto L_0895EDF4;
    return;
L_0895EDF4:
    aot_gpr[5] = (2198u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0895EE04u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5792));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 102u, 0x08962774u>(ctx, &aot_mem) && ctx.pc == 0x0895EE04u) goto L_0895EE04;
    return;
L_0895EE04:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28404)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EE24;
      }
      goto L_0895EE14;
    }
L_0895EE14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EE34;
      }
      goto L_0895EE1C;
    }
L_0895EE1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0895EE48;
      }
      goto L_0895EE24;
    }
L_0895EE24:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0895EE34u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 4u, 0x089FE06Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EE34u) goto L_0895EE34;
    return;
L_0895EE34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895EE48;
      }
      goto L_0895EE3C;
    }
L_0895EE3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0895EE48;
      }
      goto L_0895EE44;
    }
L_0895EE44:
    aot_gpr[2] = (0u | 0u);
    goto L_0895EE48;
L_0895EE48:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EE58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0895EE6Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x0895EE6Cu) goto L_0895EE6C;
    return;
L_0895EE6C:
    aot_gpr[31] = (0x0895EE74u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 236u, 0x089EFEACu>(ctx, &aot_mem) && ctx.pc == 0x0895EE74u) goto L_0895EE74;
    return;
L_0895EE74:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28392), aot_gpr[2]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0895EE88u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28388), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x0895EE88u) goto L_0895EE88;
    return;
L_0895EE88:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0895EE94u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 37u, 0x089F0214u>(ctx, &aot_mem) && ctx.pc == 0x0895EE94u) goto L_0895EE94;
    return;
L_0895EE94:
    aot_gpr[4] = (2198u << 16u);
    aot_gpr[31] = (0x0895EEA0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4416));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 56u, 0x089623B8u>(ctx, &aot_mem) && ctx.pc == 0x0895EEA0u) goto L_0895EEA0;
    return;
L_0895EEA0:
    aot_gpr[31] = (0x0895EEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 23u, 0x08962170u>(ctx, &aot_mem) && ctx.pc == 0x0895EEA8u) goto L_0895EEA8;
    return;
L_0895EEA8:
    aot_gpr[31] = (0x0895EEB0u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0895EEB0u) goto L_0895EEB0;
    return;
L_0895EEB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EEC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895EED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x0895EED0u) goto L_0895EED0;
    return;
L_0895EED0:
    aot_gpr[31] = (0x0895EED8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 236u, 0x089EFEACu>(ctx, &aot_mem) && ctx.pc == 0x0895EED8u) goto L_0895EED8;
    return;
L_0895EED8:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28392)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895EF14;
      }
      goto L_0895EEEC;
    }
L_0895EEEC:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28388)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895EF0C;
      }
      goto L_0895EEFC;
    }
L_0895EEFC:
    aot_gpr[31] = (0x0895EF04u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0895EF04u) goto L_0895EF04;
    return;
L_0895EF04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EF14;
      }
      goto L_0895EF0C;
    }
L_0895EF0C:
    aot_gpr[31] = (0x0895EF14u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0895EF14u) goto L_0895EF14;
    return;
L_0895EF14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EF20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0895EF4Cu);
    aot_gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EF4Cu) goto L_0895EF4C;
    return;
L_0895EF4C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EF60:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EF70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895EFD4;
      }
      goto L_0895EF7C;
    }
L_0895EF7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895EFA8;
      }
      goto L_0895EF8C;
    }
L_0895EF8C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895EFD4;
      }
      goto L_0895EF94;
    }
L_0895EF94:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0895EFC0;
      }
      goto L_0895EF9C;
    }
L_0895EF9C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_0895EFD4;
      }
      goto L_0895EFA8;
    }
L_0895EFA8:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895EFC8;
      }
      goto L_0895EFB0;
    }
L_0895EFB0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EFD4;
      }
      goto L_0895EFB8;
    }
L_0895EFB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EFD4;
      }
      goto L_0895EFC0;
    }
L_0895EFC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EFD4;
      }
      goto L_0895EFC8;
    }
L_0895EFC8:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_0895EFD4;
      }
      goto L_0895EFD4;
    }
L_0895EFD4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EFDC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EFE4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EFEC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EFF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EFFC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0346(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0346_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_346(Runtime &runtime) {
    runtime.register_generated_unit(346u, 0x0895E000u, 4096u, &recomp_unit_0346, &recomp_unit_0346_entry);
    runtime.register_function(0x0895E004u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E00Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E028u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E03Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E04Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E05Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E088u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E094u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E0A4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E0A8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E0ACu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E0C0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E0DCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E0F0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E0F8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E118u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E140u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E14Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E160u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E168u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E170u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E18Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E1A4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E1B0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E1CCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E1F8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E200u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E210u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E234u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E244u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E264u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E290u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E29Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E2A4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E2A8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E2E0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E2F8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E32Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E364u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E370u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E37Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E384u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E394u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E3A0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E3A8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E3ACu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E3B8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E3C4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E3CCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E3D0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E3F0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E408u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E420u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E42Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E464u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E470u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E474u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E484u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E4C0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E4D0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E4D8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E4E8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E50Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E520u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E524u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E540u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E54Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E558u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E560u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E574u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E57Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E58Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E59Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E5A8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E5B4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E5C4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E5D0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E5DCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E5E8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E5F8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E604u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E60Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E61Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E624u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E630u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E640u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E64Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E65Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E668u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E674u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E67Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E68Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E694u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E6A0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E6ACu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E6B4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E6C4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E6CCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E6DCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E6ECu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E6F4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E700u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E714u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E718u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E724u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E72Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E740u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E760u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E788u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E794u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E7A0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E7A8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E7B8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E7CCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E7D0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E7DCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E7F4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E808u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E824u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E860u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E870u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E878u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E888u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E8A8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E8ACu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E8B4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E8C4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E8D8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E8E0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E8F0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E900u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E90Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E918u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E920u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E930u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E938u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E940u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E950u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E960u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E978u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E984u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E994u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E9B0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E9BCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E9D0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E9F0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895E9FCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EA04u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EA08u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EA34u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EA40u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EA4Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EA58u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EA70u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EA78u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EAE4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EAECu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EAF4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EAFCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB04u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB0Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB14u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB24u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB34u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB3Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB44u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB50u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB5Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB64u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB68u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB6Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB7Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB8Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EB98u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EBA0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EBA4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EBC0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EBD4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EBE4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EBECu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EBF4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EBFCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EC0Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EC14u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EC30u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EC34u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EC58u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EC60u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EC6Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EC74u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EC84u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ECA0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ECA8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ECB8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ECC8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ECDCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ECE8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ECF0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ECF8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ED00u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ED0Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ED14u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ED18u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ED28u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ED3Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ED44u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895ED64u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EDC8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EDD4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EDDCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EDE4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EDECu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EDF4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EE04u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EE14u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EE1Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EE24u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EE34u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EE3Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EE44u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EE48u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EE58u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EE6Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EE74u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EE88u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EE94u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EEA0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EEA8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EEB0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EEC0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EED0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EED8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EEECu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EEFCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EF04u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EF0Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EF14u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EF20u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EF4Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EF60u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EF70u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EF7Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EF8Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EF94u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EF9Cu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EFA8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EFB0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EFB8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EFC0u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EFC8u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EFD4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EFDCu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EFE4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EFECu, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EFF4u, &recomp_unit_0346, "recomp_unit_0346");
    runtime.register_function(0x0895EFFCu, &recomp_unit_0346, "recomp_unit_0346");
}
} // namespace psprecomp
