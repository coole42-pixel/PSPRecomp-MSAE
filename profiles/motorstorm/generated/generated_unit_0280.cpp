#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0280[1018] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 7, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 13, 0, 14, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0,
    0, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 27,
    0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0,
    0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 39, 0, 0, 40, 0, 0, 0, 0, 41, 42, 0, 0, 0, 0, 43, 44, 0, 45, 0, 0, 46,
    0, 47, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 53, 54, 0, 0, 55, 0, 56, 0, 0, 0, 57,
    0, 58, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 64, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 71,
    0, 72, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78,
    0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 85, 0, 0, 86, 0, 87, 0,
    88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 95, 0, 96,
    97, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 0, 101, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 108, 0, 0, 0, 0, 0, 109, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115,
    116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 126,
    0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139,
    0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 0,
    147, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 152, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 163, 164, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 175, 0, 0, 0, 176, 0,
    0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 184,
    0, 0, 0, 185, 0, 0, 0, 186, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191,
    192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 198,
    0, 0, 0, 199, 200, 0, 201, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 0,
    208, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 213, 0, 214, 0, 0, 215, 216, 0, 0, 0,
    217, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222,
};
void recomp_unit_0280_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0891C004u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0280[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0891C004;
    case 2u: goto L_0891C01C;
    case 3u: goto L_0891C030;
    case 4u: goto L_0891C04C;
    case 5u: goto L_0891C058;
    case 6u: goto L_0891C068;
    case 7u: goto L_0891C06C;
    case 8u: goto L_0891C074;
    case 9u: goto L_0891C094;
    case 10u: goto L_0891C0A8;
    case 11u: goto L_0891C0C0;
    case 12u: goto L_0891C0F4;
    case 13u: goto L_0891C110;
    case 14u: goto L_0891C118;
    case 15u: goto L_0891C120;
    case 16u: goto L_0891C128;
    case 17u: goto L_0891C148;
    case 18u: goto L_0891C158;
    case 19u: goto L_0891C170;
    case 20u: goto L_0891C178;
    case 21u: goto L_0891C194;
    case 22u: goto L_0891C198;
    case 23u: goto L_0891C1B4;
    case 24u: goto L_0891C1D0;
    case 25u: goto L_0891C1DC;
    case 26u: goto L_0891C1F4;
    case 27u: goto L_0891C200;
    case 28u: goto L_0891C210;
    case 29u: goto L_0891C220;
    case 30u: goto L_0891C234;
    case 31u: goto L_0891C24C;
    case 32u: goto L_0891C254;
    case 33u: goto L_0891C25C;
    case 34u: goto L_0891C268;
    case 35u: goto L_0891C27C;
    case 36u: goto L_0891C288;
    case 37u: goto L_0891C298;
    case 38u: goto L_0891C2AC;
    case 39u: goto L_0891C2B0;
    case 40u: goto L_0891C2BC;
    case 41u: goto L_0891C2D0;
    case 42u: goto L_0891C2D4;
    case 43u: goto L_0891C2E8;
    case 44u: goto L_0891C2EC;
    case 45u: goto L_0891C2F4;
    case 46u: goto L_0891C300;
    case 47u: goto L_0891C308;
    case 48u: goto L_0891C310;
    case 49u: goto L_0891C324;
    case 50u: goto L_0891C32C;
    case 51u: goto L_0891C33C;
    case 52u: goto L_0891C350;
    case 53u: goto L_0891C358;
    case 54u: goto L_0891C35C;
    case 55u: goto L_0891C368;
    case 56u: goto L_0891C370;
    case 57u: goto L_0891C380;
    case 58u: goto L_0891C388;
    case 59u: goto L_0891C390;
    case 60u: goto L_0891C398;
    case 61u: goto L_0891C3A4;
    case 62u: goto L_0891C3AC;
    case 63u: goto L_0891C3EC;
    case 64u: goto L_0891C3F0;
    case 65u: goto L_0891C404;
    case 66u: goto L_0891C444;
    case 67u: goto L_0891C454;
    case 68u: goto L_0891C45C;
    case 69u: goto L_0891C468;
    case 70u: goto L_0891C478;
    case 71u: goto L_0891C480;
    case 72u: goto L_0891C488;
    case 73u: goto L_0891C490;
    case 74u: goto L_0891C4A0;
    case 75u: goto L_0891C4A8;
    case 76u: goto L_0891C4E0;
    case 77u: goto L_0891C4F8;
    case 78u: goto L_0891C500;
    case 79u: goto L_0891C514;
    case 80u: goto L_0891C524;
    case 81u: goto L_0891C52C;
    case 82u: goto L_0891C534;
    case 83u: goto L_0891C538;
    case 84u: goto L_0891C564;
    case 85u: goto L_0891C568;
    case 86u: goto L_0891C574;
    case 87u: goto L_0891C57C;
    case 88u: goto L_0891C584;
    case 89u: goto L_0891C598;
    case 90u: goto L_0891C5A8;
    case 91u: goto L_0891C5B0;
    case 92u: goto L_0891C5C4;
    case 93u: goto L_0891C5CC;
    case 94u: goto L_0891C5F4;
    case 95u: goto L_0891C5F8;
    case 96u: goto L_0891C600;
    case 97u: goto L_0891C604;
    case 98u: goto L_0891C610;
    case 99u: goto L_0891C61C;
    case 100u: goto L_0891C624;
    case 101u: goto L_0891C634;
    case 102u: goto L_0891C638;
    case 103u: goto L_0891C64C;
    case 104u: goto L_0891C678;
    case 105u: goto L_0891C68C;
    case 106u: goto L_0891C698;
    case 107u: goto L_0891C6A8;
    case 108u: goto L_0891C6AC;
    case 109u: goto L_0891C6C4;
    case 110u: goto L_0891C6C8;
    case 111u: goto L_0891C6D0;
    case 112u: goto L_0891C750;
    case 113u: goto L_0891C770;
    case 114u: goto L_0891C778;
    case 115u: goto L_0891C780;
    case 116u: goto L_0891C784;
    case 117u: goto L_0891C790;
    case 118u: goto L_0891C7A0;
    case 119u: goto L_0891C7E4;
    case 120u: goto L_0891C7EC;
    case 121u: goto L_0891C810;
    case 122u: goto L_0891C82C;
    case 123u: goto L_0891C830;
    case 124u: goto L_0891C860;
    case 125u: goto L_0891C874;
    case 126u: goto L_0891C880;
    case 127u: goto L_0891C890;
    case 128u: goto L_0891C8A4;
    case 129u: goto L_0891C8AC;
    case 130u: goto L_0891C95C;
    case 131u: goto L_0891C978;
    case 132u: goto L_0891C990;
    case 133u: goto L_0891C9AC;
    case 134u: goto L_0891C9B4;
    case 135u: goto L_0891C9C4;
    case 136u: goto L_0891C9CC;
    case 137u: goto L_0891C9DC;
    case 138u: goto L_0891C9F8;
    case 139u: goto L_0891CA00;
    case 140u: goto L_0891CA08;
    case 141u: goto L_0891CA1C;
    case 142u: goto L_0891CA44;
    case 143u: goto L_0891CA54;
    case 144u: goto L_0891CA5C;
    case 145u: goto L_0891CA64;
    case 146u: goto L_0891CA74;
    case 147u: goto L_0891CA84;
    case 148u: goto L_0891CA88;
    case 149u: goto L_0891CAA4;
    case 150u: goto L_0891CAC0;
    case 151u: goto L_0891CAF8;
    case 152u: goto L_0891CAFC;
    case 153u: goto L_0891CB0C;
    case 154u: goto L_0891CB30;
    case 155u: goto L_0891CB3C;
    case 156u: goto L_0891CB48;
    case 157u: goto L_0891CB50;
    case 158u: goto L_0891CB78;
    case 159u: goto L_0891CB80;
    case 160u: goto L_0891CBDC;
    case 161u: goto L_0891CBE4;
    case 162u: goto L_0891CBF4;
    case 163u: goto L_0891CBF8;
    case 164u: goto L_0891CBFC;
    case 165u: goto L_0891CC44;
    case 166u: goto L_0891CC64;
    case 167u: goto L_0891CC70;
    case 168u: goto L_0891CC7C;
    case 169u: goto L_0891CC98;
    case 170u: goto L_0891CCA0;
    case 171u: goto L_0891CCAC;
    case 172u: goto L_0891CCD8;
    case 173u: goto L_0891CCE0;
    case 174u: goto L_0891CCE8;
    case 175u: goto L_0891CCEC;
    case 176u: goto L_0891CCFC;
    case 177u: goto L_0891CD0C;
    case 178u: goto L_0891CD18;
    case 179u: goto L_0891CD2C;
    case 180u: goto L_0891CD38;
    case 181u: goto L_0891CD5C;
    case 182u: goto L_0891CD70;
    case 183u: goto L_0891CD78;
    case 184u: goto L_0891CD80;
    case 185u: goto L_0891CD90;
    case 186u: goto L_0891CDA0;
    case 187u: goto L_0891CDA4;
    case 188u: goto L_0891CDB4;
    case 189u: goto L_0891CDC4;
    case 190u: goto L_0891CDD8;
    case 191u: goto L_0891CE00;
    case 192u: goto L_0891CE04;
    case 193u: goto L_0891CE14;
    case 194u: goto L_0891CE1C;
    case 195u: goto L_0891CE2C;
    case 196u: goto L_0891CE34;
    case 197u: goto L_0891CE7C;
    case 198u: goto L_0891CE80;
    case 199u: goto L_0891CE90;
    case 200u: goto L_0891CE94;
    case 201u: goto L_0891CE9C;
    case 202u: goto L_0891CEA0;
    case 203u: goto L_0891CEBC;
    case 204u: goto L_0891CED4;
    case 205u: goto L_0891CEDC;
    case 206u: goto L_0891CEF0;
    case 207u: goto L_0891CEF8;
    case 208u: goto L_0891CF04;
    case 209u: goto L_0891CF08;
    case 210u: goto L_0891CF28;
    case 211u: goto L_0891CF40;
    case 212u: goto L_0891CF58;
    case 213u: goto L_0891CF5C;
    case 214u: goto L_0891CF64;
    case 215u: goto L_0891CF70;
    case 216u: goto L_0891CF74;
    case 217u: goto L_0891CF84;
    case 218u: goto L_0891CF98;
    case 219u: goto L_0891CFA4;
    case 220u: goto L_0891CFC8;
    case 221u: goto L_0891CFD8;
    case 222u: goto L_0891CFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0891C004:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0891C01Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C01Cu) goto L_0891C01C;
    return;
L_0891C01C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C030:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891C094;
      }
      goto L_0891C04C;
    }
L_0891C04C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_0891C06C;
      }
      goto L_0891C058;
    }
L_0891C058:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0891C068u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    goto L_0891C404;
L_0891C068:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_0891C06C;
L_0891C06C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0891C094;
      }
      goto L_0891C074;
    }
L_0891C074:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891C094u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891C094u) goto L_0891C094;
    return;
L_0891C094:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C0A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C0C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    aot_gpr[6] = (32767u << 16u);
    aot_gpr[6] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[6] >> 16u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891C118;
      }
      goto L_0891C0F4;
    }
L_0891C0F4:
    aot_gpr[5] = (aot_gpr[16] & 65535u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[18] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_0891C120;
    }
    goto L_0891C110;
L_0891C110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C194;
      }
      goto L_0891C118;
    }
L_0891C118:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891C198;
      }
      goto L_0891C120;
    }
L_0891C120:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C194;
      }
      goto L_0891C128;
    }
L_0891C128:
    aot_gpr[6] = (aot_gpr[5] << 8u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[19] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[31] = (0x0891C148u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26296));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0891C148u) goto L_0891C148;
    return;
L_0891C148:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0891C178;
      }
      goto L_0891C158;
    }
L_0891C158:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891C170u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26292));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0891C170u) goto L_0891C170;
    return;
L_0891C170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C194;
      }
      goto L_0891C178;
    }
L_0891C178:
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891C194u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26252));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0891C194u) goto L_0891C194;
    return;
L_0891C194:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    goto L_0891C198;
L_0891C198:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C1B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891C1D0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29332)));
    goto L_0891C0A8;
L_0891C1D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C1DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891C1F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29332)));
    goto L_0891C0C0;
L_0891C1F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C200:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_0891C25C;
      }
      goto L_0891C210;
    }
L_0891C210:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25368));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_0891C25C;
      }
      goto L_0891C220;
    }
L_0891C220:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C254;
      }
      goto L_0891C234;
    }
L_0891C234:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891C24Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891C24Cu) goto L_0891C24C;
    return;
L_0891C24C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C25C;
      }
      goto L_0891C254;
    }
L_0891C254:
    aot_gpr[31] = (0x0891C25Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0891C25Cu) goto L_0891C25C;
    return;
L_0891C25C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C268:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891C27Cu);
    aot_gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C27Cu) goto L_0891C27C;
    return;
L_0891C27C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C288:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0891C2B0;
      }
      goto L_0891C298;
    }
L_0891C298:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C2B0;
      }
      goto L_0891C2AC;
    }
L_0891C2AC:
    aot_gpr[8] = (0u | 1u);
    goto L_0891C2B0;
L_0891C2B0:
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0891C2D4;
      }
      goto L_0891C2BC;
    }
L_0891C2BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C2D4;
      }
      goto L_0891C2D0;
    }
L_0891C2D0:
    aot_gpr[5] = (0u | 1u);
    goto L_0891C2D4;
L_0891C2D4:
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[8] & 255u);
    aot_gpr[2] = (aot_gpr[5] ^ aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C2E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    goto L_0891C2EC;
L_0891C2EC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C308;
      }
      goto L_0891C2F4;
    }
L_0891C2F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891C308;
      }
      goto L_0891C300;
    }
L_0891C300:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0891C2EC;
      }
      goto L_0891C308;
    }
L_0891C308:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C310:
    aot_gpr[8] = (aot_gpr[6] & 255u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0891C324;
      }
      goto L_0891C324;
    }
L_0891C324:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[9] = (4096u << 16u);
      if (branch_taken) {
          goto L_0891C3A4;
      }
      goto L_0891C32C;
    }
L_0891C32C:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (61440u << 16u);
    aot_gpr[10] = (16384u << 16u);
    aot_gpr[8] = (8192u << 16u);
    goto L_0891C33C;
L_0891C33C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[11] = (aot_gpr[3] & aot_gpr[2]);
    aot_gpr[12] = (aot_gpr[11] & aot_gpr[10]);
    { const bool branch_taken = aot_gpr[12] == 0u;
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[9]);
      if (branch_taken) {
          goto L_0891C370;
      }
      goto L_0891C350;
    }
L_0891C350:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C35C;
      }
      goto L_0891C358;
    }
L_0891C358:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_0891C35C;
L_0891C35C:
    aot_gpr[11] = (aot_gpr[7] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C398;
      }
      goto L_0891C368;
    }
L_0891C368:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[3] | 0u);
      if (branch_taken) {
          goto L_0891C398;
      }
      goto L_0891C370;
    }
L_0891C370:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[12] = (aot_gpr[11] & aot_gpr[8]);
    { const bool branch_taken = aot_gpr[12] == 0u;
    aot_gpr[11] = (aot_gpr[3] & 1u);
      if (branch_taken) {
          goto L_0891C390;
      }
      goto L_0891C380;
    }
L_0891C380:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C398;
      }
      goto L_0891C388;
    }
L_0891C388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C398;
      }
      goto L_0891C390;
    }
L_0891C390:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C398;
      }
      goto L_0891C398;
    }
L_0891C398:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C33C;
      }
      goto L_0891C3A4;
    }
L_0891C3A4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C3AC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (4096u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (32768u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C3F0;
      }
      goto L_0891C3EC;
    }
L_0891C3EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0891C3F0;
L_0891C3F0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C404:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891C454;
      }
      goto L_0891C444;
    }
L_0891C444:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C488;
      }
      goto L_0891C454;
    }
L_0891C454:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C480;
      }
      goto L_0891C45C;
    }
L_0891C45C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891C468u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_0891C2E8;
L_0891C468:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891C490;
      }
      goto L_0891C478;
    }
L_0891C478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C4A0;
      }
      goto L_0891C480;
    }
L_0891C480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C64C;
      }
      goto L_0891C488;
    }
L_0891C488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C64C;
      }
      goto L_0891C490;
    }
L_0891C490:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0891C4A0u);
    aot_gpr[6] = (0u | 1u);
    goto L_0891C310;
L_0891C4A0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C64C;
      }
      goto L_0891C4A8;
    }
L_0891C4A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[23] = (4096u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & 2u);
    aot_gpr[19] = (61440u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (16384u << 16u);
      if (branch_taken) {
          goto L_0891C4F8;
      }
      goto L_0891C4E0;
    }
L_0891C4E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (48317u << 16u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[23]);
    aot_gpr[31] = (0x0891C4F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-17220));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C4F8u) goto L_0891C4F8;
    return;
L_0891C4F8:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C57C;
      }
      goto L_0891C500;
    }
L_0891C500:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C57C;
      }
      goto L_0891C514;
    }
L_0891C514:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0891C524u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0891C288;
L_0891C524:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C57C;
      }
      goto L_0891C52C;
    }
L_0891C52C:
    { const bool branch_taken = aot_gpr[22] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[22]);
      if (branch_taken) {
          goto L_0891C538;
      }
      goto L_0891C534;
    }
L_0891C534:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    goto L_0891C538;
L_0891C538:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[4] & aot_gpr[23]);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[23]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0891C568;
      }
      goto L_0891C564;
    }
L_0891C564:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    goto L_0891C568;
L_0891C568:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891C574u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_0891C3AC;
L_0891C574:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_0891C57C;
      }
      goto L_0891C57C;
    }
L_0891C57C:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C61C;
      }
      goto L_0891C584;
    }
L_0891C584:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C61C;
      }
      goto L_0891C598;
    }
L_0891C598:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0891C5A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0891C288;
L_0891C5A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C61C;
      }
      goto L_0891C5B0;
    }
L_0891C5B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
        goto L_0891C5CC;
    }
    goto L_0891C5C4;
L_0891C5C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_0891C5CC;
L_0891C5CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[4] & aot_gpr[23]);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[23]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[22];
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_0891C5F8;
      }
      goto L_0891C5F4;
    }
L_0891C5F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    goto L_0891C5F8;
L_0891C5F8:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_0891C604;
      }
      goto L_0891C600;
    }
L_0891C600:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    goto L_0891C604;
L_0891C604:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891C610u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    goto L_0891C3AC;
L_0891C610:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_0891C624;
      }
      goto L_0891C61C;
    }
L_0891C61C:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_0891C624;
L_0891C624:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C638;
      }
      goto L_0891C634;
    }
L_0891C634:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    goto L_0891C638;
L_0891C638:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_0891C64C;
L_0891C64C:
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
L_0891C678:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0891C68Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_0891C404;
L_0891C68C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C698:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891C6AC;
      }
      goto L_0891C6A8;
    }
L_0891C6A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_0891C6AC;
L_0891C6AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891C6C8;
      }
      goto L_0891C6C4;
    }
L_0891C6C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_0891C6C8;
L_0891C6C8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C6D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1160));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (4096u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[7] | 0u);
    aot_gpr[30] = (aot_gpr[8] | 0u);
    aot_gpr[23] = (aot_gpr[9] | 0u);
    aot_gpr[22] = (aot_gpr[10] | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[21] = (aot_gpr[11] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (61440u << 16u);
      if (branch_taken) {
          goto L_0891C778;
      }
      goto L_0891C750;
    }
L_0891C750:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0891C770u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891C770u) goto L_0891C770;
    return;
L_0891C770:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891C784;
      }
      goto L_0891C778;
    }
L_0891C778:
    aot_gpr[31] = (0x0891C780u);
    aot_gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x0891C780u) goto L_0891C780;
    return;
L_0891C780:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0891C784;
L_0891C784:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_0891C7A0;
      }
      goto L_0891C790;
    }
L_0891C790:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25400));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    goto L_0891C7A0;
L_0891C7A0:
    aot_gpr[4] = (0u | 20u);
    { const std::uint32_t dividend = aot_gpr[30]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0891C860;
      }
      goto L_0891C7E4;
    }
L_0891C7E4:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (32768u << 16u);
    goto L_0891C7EC;
L_0891C7EC:
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0891C82C;
      }
      goto L_0891C810;
    }
L_0891C810:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[9] = (aot_gpr[4] << 2u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[7]);
      if (branch_taken) {
          goto L_0891C830;
      }
      goto L_0891C82C;
    }
L_0891C82C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), 0u);
    goto L_0891C830;
L_0891C830:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[17]);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0891C7EC;
      }
      goto L_0891C860;
    }
L_0891C860:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[6] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891C880;
      }
      goto L_0891C874;
    }
L_0891C874:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    goto L_0891C880;
L_0891C880:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891C8A4;
      }
      goto L_0891C890;
    }
L_0891C890:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (48317u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x0891C8A4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-17220));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C8A4u) goto L_0891C8A4;
    return;
L_0891C8A4:
    aot_gpr[31] = (0x0891C8ACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0891C698;
L_0891C8AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C95C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891CA08;
      }
      goto L_0891C978;
    }
L_0891C978:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1160));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C9AC;
      }
      goto L_0891C990;
    }
L_0891C990:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891C9ACu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891C9ACu) goto L_0891C9AC;
    return;
L_0891C9AC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[17] & 1u);
      if (branch_taken) {
          goto L_0891C9C4;
      }
      goto L_0891C9B4;
    }
L_0891C9B4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25368));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] & 1u);
    goto L_0891C9C4;
L_0891C9C4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0891CA08;
      }
      goto L_0891C9CC;
    }
L_0891C9CC:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA00;
      }
      goto L_0891C9DC;
    }
L_0891C9DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0891C9F8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891C9F8u) goto L_0891C9F8;
    return;
L_0891C9F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA08;
      }
      goto L_0891CA00;
    }
L_0891CA00:
    aot_gpr[31] = (0x0891CA08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0891CA08u) goto L_0891CA08;
    return;
L_0891CA08:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CA1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[15] = (0u | 0u);
    aot_gpr[14] = (aot_gpr[6] | 0u);
    aot_gpr[25] = (0u | 0u);
    aot_gpr[13] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[14] == 0u;
    aot_gpr[24] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891CA5C;
      }
      goto L_0891CA44;
    }
L_0891CA44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA64;
      }
      goto L_0891CA54;
    }
L_0891CA54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA74;
      }
      goto L_0891CA5C;
    }
L_0891CA5C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891CCEC;
      }
      goto L_0891CA64;
    }
L_0891CA64:
    aot_gpr[4] = (aot_gpr[13] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0891CA74u);
    aot_gpr[6] = (0u | 1u);
    goto L_0891C310;
L_0891CA74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA88;
      }
      goto L_0891CA84;
    }
L_0891CA84:
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    goto L_0891CA88;
L_0891CA88:
    aot_gpr[4] = (aot_gpr[24] + aot_gpr[14]);
    aot_gpr[14] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[24] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[14] = (aot_gpr[14] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0891CB48;
      }
      goto L_0891CAA4;
    }
L_0891CAA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CB3C;
      }
      goto L_0891CAC0;
    }
L_0891CAC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[24] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[24]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[25] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CAFC;
      }
      goto L_0891CAF8;
    }
L_0891CAF8:
    aot_gpr[25] = (aot_gpr[5] | 0u);
    goto L_0891CAFC;
L_0891CAFC:
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[14]);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CB3C;
      }
      goto L_0891CB0C;
    }
L_0891CB0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[14]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CB3C;
      }
      goto L_0891CB30;
    }
L_0891CB30:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[15] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0891CB48;
      }
      goto L_0891CB3C;
    }
L_0891CB3C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CAA4;
      }
      goto L_0891CB48;
    }
L_0891CB48:
    { const bool branch_taken = aot_gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CCE8;
      }
      goto L_0891CB50;
    }
L_0891CB50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[24] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[24]);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[5]);
    aot_gpr[24] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[7] < static_cast<std::uint32_t>(65) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(16)));
        goto L_0891CBFC;
    }
    goto L_0891CB78;
L_0891CB78:
    aot_gpr[31] = (0x0891CB80u);
    aot_gpr[4] = (aot_gpr[13] | 0u);
    goto L_0891C698;
L_0891CB80:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[24]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[6] = (4096u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[6] = (16384u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0891CBE4;
      }
      goto L_0891CBDC;
    }
L_0891CBDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891CBE4;
L_0891CBE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[15];
    // nop
      if (branch_taken) {
          goto L_0891CBF8;
      }
      goto L_0891CBF4;
    }
L_0891CBF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    goto L_0891CBF8;
L_0891CBF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(16)));
    goto L_0891CBFC;
L_0891CBFC:
    aot_gpr[4] = (aot_gpr[24] + aot_gpr[14]);
    aot_gpr[6] = (61440u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (8192u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CC64;
      }
      goto L_0891CC44;
    }
L_0891CC44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (4096u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891CC64;
L_0891CC64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[15] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891CCAC;
      }
      goto L_0891CC70;
    }
L_0891CC70:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CCAC;
      }
      goto L_0891CC7C;
    }
L_0891CC7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CCA0;
      }
      goto L_0891CC98;
    }
L_0891CC98:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(52), aot_gpr[16]);
      if (branch_taken) {
          goto L_0891CCAC;
      }
      goto L_0891CCA0;
    }
L_0891CCA0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(52), aot_gpr[16]);
      if (branch_taken) {
          goto L_0891CC7C;
      }
      goto L_0891CCAC;
    }
L_0891CCAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (4096u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CCE0;
      }
      goto L_0891CCD8;
    }
L_0891CCD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    goto L_0891CCE0;
L_0891CCE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0891CCEC;
      }
      goto L_0891CCE8;
    }
L_0891CCE8:
    aot_gpr[2] = (0u | 0u);
    goto L_0891CCEC;
L_0891CCEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CCFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891CD0Cu);
    // nop
    goto L_0891CA1C;
L_0891CD0C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CD18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891CD2Cu);
    aot_gpr[5] = (0u | 4u);
    goto L_0891CA1C;
L_0891CD2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CD38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[24] = (aot_gpr[6] | 0u);
    aot_gpr[25] = (0u | 0u);
    aot_gpr[13] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[24] == 0u;
    aot_gpr[14] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891CD78;
      }
      goto L_0891CD5C;
    }
L_0891CD5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(60)));
    aot_gpr[16] = (aot_gpr[14] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (~(aot_gpr[16] | 0u));
      if (branch_taken) {
          goto L_0891CD80;
      }
      goto L_0891CD70;
    }
L_0891CD70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CD90;
      }
      goto L_0891CD78;
    }
L_0891CD78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891CF74;
      }
      goto L_0891CD80;
    }
L_0891CD80:
    aot_gpr[4] = (aot_gpr[13] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0891CD90u);
    aot_gpr[6] = (0u | 1u);
    goto L_0891C310;
L_0891CD90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CDA4;
      }
      goto L_0891CDA0;
    }
L_0891CDA0:
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(4));
    goto L_0891CDA4;
L_0891CDA4:
    aot_gpr[4] = (aot_gpr[14] + aot_gpr[24]);
    aot_gpr[14] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[15] == 0u;
    aot_gpr[14] = (aot_gpr[14] & aot_gpr[16]);
      if (branch_taken) {
          goto L_0891CF70;
      }
      goto L_0891CDB4;
    }
L_0891CDB4:
    aot_gpr[9] = (4096u << 16u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (61440u << 16u);
    aot_gpr[8] = (16384u << 16u);
    goto L_0891CDC4;
L_0891CDC4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[10] & aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[8]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CF64;
      }
      goto L_0891CDD8;
    }
L_0891CDD8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[10] & aot_gpr[9]);
    aot_gpr[10] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[14]);
    aot_gpr[11] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[10] = (aot_gpr[10] & aot_gpr[16]);
    aot_gpr[11] = (aot_gpr[11] - aot_gpr[14]);
    aot_gpr[2] = (aot_gpr[25] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[11] = (aot_gpr[11] - aot_gpr[10]);
      if (branch_taken) {
          goto L_0891CE04;
      }
      goto L_0891CE00;
    }
L_0891CE00:
    aot_gpr[25] = (aot_gpr[5] | 0u);
    goto L_0891CE04;
L_0891CE04:
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[14]);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[10] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891CF64;
      }
      goto L_0891CE14;
    }
L_0891CE14:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CF64;
      }
      goto L_0891CE1C;
    }
L_0891CE1C:
    aot_gpr[3] = (aot_gpr[5] - aot_gpr[11]);
    aot_gpr[6] = (aot_gpr[3] < static_cast<std::uint32_t>(65) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CEBC;
      }
      goto L_0891CE2C;
    }
L_0891CE2C:
    aot_gpr[31] = (0x0891CE34u);
    aot_gpr[4] = (aot_gpr[13] | 0u);
    goto L_0891C698;
L_0891CE34:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CE80;
      }
      goto L_0891CE7C;
    }
L_0891CE7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_0891CE80;
L_0891CE80:
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[15];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_0891CE94;
      }
      goto L_0891CE90;
    }
L_0891CE90:
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_0891CE94;
L_0891CE94:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[15];
    // nop
      if (branch_taken) {
          goto L_0891CEA0;
      }
      goto L_0891CE9C;
    }
L_0891CE9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    goto L_0891CEA0;
L_0891CEA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(12), aot_gpr[10]);
      if (branch_taken) {
          goto L_0891CF04;
      }
      goto L_0891CEBC;
    }
L_0891CEBC:
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(52)));
    if (aot_gpr[15] != aot_gpr[4]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(16)));
        goto L_0891CF08;
    }
    goto L_0891CED4;
L_0891CED4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CF04;
      }
      goto L_0891CEDC;
    }
L_0891CEDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[8]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CEF8;
      }
      goto L_0891CEF0;
    }
L_0891CEF0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(52), aot_gpr[4]);
      if (branch_taken) {
          goto L_0891CF04;
      }
      goto L_0891CEF8;
    }
L_0891CEF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(52), aot_gpr[4]);
      if (branch_taken) {
          goto L_0891CEDC;
      }
      goto L_0891CF04;
    }
L_0891CF04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(16)));
    goto L_0891CF08;
L_0891CF08:
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[9]);
      if (branch_taken) {
          goto L_0891CF40;
      }
      goto L_0891CF28;
    }
L_0891CF28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[9]);
    goto L_0891CF40;
L_0891CF40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          goto L_0891CF5C;
      }
      goto L_0891CF58;
    }
L_0891CF58:
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    goto L_0891CF5C;
L_0891CF5C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0891CF74;
      }
      goto L_0891CF64;
    }
L_0891CF64:
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[15] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CDC4;
      }
      goto L_0891CF70;
    }
L_0891CF70:
    aot_gpr[2] = (0u | 0u);
    goto L_0891CF74;
L_0891CF74:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CF84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891CF98u);
    aot_gpr[5] = (0u | 4u);
    goto L_0891CD38;
L_0891CF98:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CFA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[13] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[14] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0891CFC8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0891C2E8;
L_0891CFC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[15] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891CFE8;
      }
      goto L_0891CFD8;
    }
L_0891CFD8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0891CFE8u);
    aot_gpr[6] = (0u | 1u);
    goto L_0891C310;
L_0891CFE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[13]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    ctx.pc = 0x0891D000u; return;
}

void recomp_unit_0280(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0280_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_280(Runtime &runtime) {
    runtime.register_generated_unit(280u, 0x0891C000u, 4096u, &recomp_unit_0280, &recomp_unit_0280_entry);
    runtime.register_function(0x0891C004u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C01Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C030u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C04Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C058u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C068u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C06Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C074u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C094u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C0A8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C0C0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C0F4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C110u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C118u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C120u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C128u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C148u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C158u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C170u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C178u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C194u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C198u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C1B4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C1D0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C1DCu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C1F4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C200u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C210u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C220u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C234u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C24Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C254u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C25Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C268u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C27Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C288u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C298u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C2ACu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C2B0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C2BCu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C2D0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C2D4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C2E8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C2ECu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C2F4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C300u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C308u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C310u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C324u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C32Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C33Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C350u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C358u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C35Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C368u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C370u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C380u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C388u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C390u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C398u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C3A4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C3ACu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C3ECu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C3F0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C404u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C444u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C454u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C45Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C468u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C478u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C480u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C488u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C490u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C4A0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C4A8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C4E0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C4F8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C500u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C514u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C524u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C52Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C534u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C538u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C564u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C568u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C574u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C57Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C584u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C598u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C5A8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C5B0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C5C4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C5CCu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C5F4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C5F8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C600u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C604u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C610u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C61Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C624u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C634u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C638u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C64Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C678u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C68Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C698u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C6A8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C6ACu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C6C4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C6C8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C6D0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C750u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C770u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C778u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C780u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C784u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C790u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C7A0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C7E4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C7ECu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C810u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C82Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C830u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C860u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C874u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C880u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C890u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C8A4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C8ACu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C95Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C978u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C990u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C9ACu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C9B4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C9C4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C9CCu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C9DCu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891C9F8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CA00u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CA08u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CA1Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CA44u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CA54u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CA5Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CA64u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CA74u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CA84u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CA88u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CAA4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CAC0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CAF8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CAFCu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CB0Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CB30u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CB3Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CB48u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CB50u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CB78u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CB80u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CBDCu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CBE4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CBF4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CBF8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CBFCu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CC44u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CC64u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CC70u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CC7Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CC98u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CCA0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CCACu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CCD8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CCE0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CCE8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CCECu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CCFCu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CD0Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CD18u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CD2Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CD38u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CD5Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CD70u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CD78u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CD80u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CD90u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CDA0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CDA4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CDB4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CDC4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CDD8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CE00u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CE04u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CE14u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CE1Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CE2Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CE34u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CE7Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CE80u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CE90u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CE94u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CE9Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CEA0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CEBCu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CED4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CEDCu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CEF0u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CEF8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CF04u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CF08u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CF28u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CF40u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CF58u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CF5Cu, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CF64u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CF70u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CF74u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CF84u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CF98u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CFA4u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CFC8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CFD8u, &recomp_unit_0280, "recomp_unit_0280");
    runtime.register_function(0x0891CFE8u, &recomp_unit_0280, "recomp_unit_0280");
}
} // namespace psprecomp
