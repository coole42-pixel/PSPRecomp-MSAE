#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0404[1024] = {
    1, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 20, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0,
    28, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 35,
    0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 44,
    0, 45, 46, 0, 47, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 53, 54, 0, 55, 0, 0, 0, 0,
    0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 63, 0, 0, 64, 0, 0,
    0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 72, 0,
    73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0,
    81, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 0,
    0, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 98, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0,
    108, 0, 0, 109, 0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 119, 0,
    0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 123, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128,
    0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 0, 141,
    0, 0, 0, 0, 0, 142, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 164, 0, 165, 0, 0, 0, 0, 166, 167,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 171, 0, 172, 0,
    0, 0, 173, 174, 0, 175, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 191, 0, 0, 0, 192,
    0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 197, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0,
    208, 0, 0, 209, 210, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 223,
    0, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 229, 0, 230, 0, 231,
};
void recomp_unit_0404_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08998000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0404[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08998000;
    case 2u: goto L_0899800C;
    case 3u: goto L_08998014;
    case 4u: goto L_08998020;
    case 5u: goto L_08998028;
    case 6u: goto L_08998068;
    case 7u: goto L_08998128;
    case 8u: goto L_0899812C;
    case 9u: goto L_08998134;
    case 10u: goto L_0899818C;
    case 11u: goto L_089981D4;
    case 12u: goto L_08998214;
    case 13u: goto L_089982D4;
    case 14u: goto L_089982D8;
    case 15u: goto L_089982E0;
    case 16u: goto L_08998338;
    case 17u: goto L_08998380;
    case 18u: goto L_089983C0;
    case 19u: goto L_089983D8;
    case 20u: goto L_089983DC;
    case 21u: goto L_089983E0;
    case 22u: goto L_0899840C;
    case 23u: goto L_08998414;
    case 24u: goto L_08998430;
    case 25u: goto L_08998454;
    case 26u: goto L_0899845C;
    case 27u: goto L_08998474;
    case 28u: goto L_08998480;
    case 29u: goto L_08998498;
    case 30u: goto L_089984A4;
    case 31u: goto L_089984B8;
    case 32u: goto L_089984D4;
    case 33u: goto L_089984E0;
    case 34u: goto L_089984F8;
    case 35u: goto L_089984FC;
    case 36u: goto L_0899850C;
    case 37u: goto L_08998524;
    case 38u: goto L_0899852C;
    case 39u: goto L_08998538;
    case 40u: goto L_08998550;
    case 41u: goto L_08998554;
    case 42u: goto L_08998564;
    case 43u: goto L_08998578;
    case 44u: goto L_0899857C;
    case 45u: goto L_08998584;
    case 46u: goto L_08998588;
    case 47u: goto L_08998590;
    case 48u: goto L_08998594;
    case 49u: goto L_0899859C;
    case 50u: goto L_089985BC;
    case 51u: goto L_089985C4;
    case 52u: goto L_089985D0;
    case 53u: goto L_089985E0;
    case 54u: goto L_089985E4;
    case 55u: goto L_089985EC;
    case 56u: goto L_08998604;
    case 57u: goto L_08998610;
    case 58u: goto L_08998628;
    case 59u: goto L_08998634;
    case 60u: goto L_0899864C;
    case 61u: goto L_08998658;
    case 62u: goto L_08998664;
    case 63u: goto L_08998668;
    case 64u: goto L_08998674;
    case 65u: goto L_08998684;
    case 66u: goto L_0899868C;
    case 67u: goto L_089986B0;
    case 68u: goto L_089986C8;
    case 69u: goto L_089986D8;
    case 70u: goto L_089986EC;
    case 71u: goto L_089986F4;
    case 72u: goto L_089986F8;
    case 73u: goto L_08998700;
    case 74u: goto L_0899871C;
    case 75u: goto L_08998728;
    case 76u: goto L_08998744;
    case 77u: goto L_0899874C;
    case 78u: goto L_08998758;
    case 79u: goto L_0899876C;
    case 80u: goto L_08998774;
    case 81u: goto L_08998780;
    case 82u: goto L_08998798;
    case 83u: goto L_089987A4;
    case 84u: goto L_089987BC;
    case 85u: goto L_089987C8;
    case 86u: goto L_089987D8;
    case 87u: goto L_089987E0;
    case 88u: goto L_089987EC;
    case 89u: goto L_089987F4;
    case 90u: goto L_08998808;
    case 91u: goto L_08998810;
    case 92u: goto L_08998818;
    case 93u: goto L_08998820;
    case 94u: goto L_08998834;
    case 95u: goto L_0899883C;
    case 96u: goto L_08998844;
    case 97u: goto L_0899885C;
    case 98u: goto L_08998860;
    case 99u: goto L_08998870;
    case 100u: goto L_0899888C;
    case 101u: goto L_08998898;
    case 102u: goto L_089988B0;
    case 103u: goto L_089988BC;
    case 104u: goto L_089988C4;
    case 105u: goto L_089988D4;
    case 106u: goto L_089988EC;
    case 107u: goto L_089988F4;
    case 108u: goto L_08998900;
    case 109u: goto L_0899890C;
    case 110u: goto L_08998914;
    case 111u: goto L_08998920;
    case 112u: goto L_08998928;
    case 113u: goto L_08998938;
    case 114u: goto L_08998940;
    case 115u: goto L_08998948;
    case 116u: goto L_08998958;
    case 117u: goto L_08998960;
    case 118u: goto L_0899896C;
    case 119u: goto L_08998978;
    case 120u: goto L_08998988;
    case 121u: goto L_08998994;
    case 122u: goto L_089989A0;
    case 123u: goto L_089989B8;
    case 124u: goto L_089989BC;
    case 125u: goto L_089989CC;
    case 126u: goto L_089989E8;
    case 127u: goto L_089989F4;
    case 128u: goto L_089989FC;
    case 129u: goto L_08998A0C;
    case 130u: goto L_08998A18;
    case 131u: goto L_08998A20;
    case 132u: goto L_08998A28;
    case 133u: goto L_08998A30;
    case 134u: goto L_08998A38;
    case 135u: goto L_08998A44;
    case 136u: goto L_08998A50;
    case 137u: goto L_08998A58;
    case 138u: goto L_08998A60;
    case 139u: goto L_08998A68;
    case 140u: goto L_08998A70;
    case 141u: goto L_08998A7C;
    case 142u: goto L_08998A94;
    case 143u: goto L_08998A98;
    case 144u: goto L_08998AA4;
    case 145u: goto L_08998AC0;
    case 146u: goto L_08998ACC;
    case 147u: goto L_08998AD4;
    case 148u: goto L_08998B00;
    case 149u: goto L_08998B08;
    case 150u: goto L_08998B10;
    case 151u: goto L_08998B18;
    case 152u: goto L_08998B24;
    case 153u: goto L_08998B2C;
    case 154u: goto L_08998B3C;
    case 155u: goto L_08998B48;
    case 156u: goto L_08998B5C;
    case 157u: goto L_08998B64;
    case 158u: goto L_08998B78;
    case 159u: goto L_08998B8C;
    case 160u: goto L_08998B98;
    case 161u: goto L_08998BBC;
    case 162u: goto L_08998BCC;
    case 163u: goto L_08998BD8;
    case 164u: goto L_08998BDC;
    case 165u: goto L_08998BE4;
    case 166u: goto L_08998BF8;
    case 167u: goto L_08998BFC;
    case 168u: goto L_08998C18;
    case 169u: goto L_08998C5C;
    case 170u: goto L_08998C6C;
    case 171u: goto L_08998C70;
    case 172u: goto L_08998C78;
    case 173u: goto L_08998C88;
    case 174u: goto L_08998C8C;
    case 175u: goto L_08998C94;
    case 176u: goto L_08998C9C;
    case 177u: goto L_08998CA4;
    case 178u: goto L_08998CB4;
    case 179u: goto L_08998CCC;
    case 180u: goto L_08998CEC;
    case 181u: goto L_08998D04;
    case 182u: goto L_08998D0C;
    case 183u: goto L_08998D18;
    case 184u: goto L_08998D20;
    case 185u: goto L_08998D2C;
    case 186u: goto L_08998D34;
    case 187u: goto L_08998D40;
    case 188u: goto L_08998D48;
    case 189u: goto L_08998D54;
    case 190u: goto L_08998D68;
    case 191u: goto L_08998D6C;
    case 192u: goto L_08998D7C;
    case 193u: goto L_08998D88;
    case 194u: goto L_08998D90;
    case 195u: goto L_08998DA0;
    case 196u: goto L_08998DDC;
    case 197u: goto L_08998DE0;
    case 198u: goto L_08998E00;
    case 199u: goto L_08998E10;
    case 200u: goto L_08998E1C;
    case 201u: goto L_08998E28;
    case 202u: goto L_08998E30;
    case 203u: goto L_08998E40;
    case 204u: goto L_08998E48;
    case 205u: goto L_08998E54;
    case 206u: goto L_08998E68;
    case 207u: goto L_08998E74;
    case 208u: goto L_08998E80;
    case 209u: goto L_08998E8C;
    case 210u: goto L_08998E90;
    case 211u: goto L_08998EA4;
    case 212u: goto L_08998EAC;
    case 213u: goto L_08998EBC;
    case 214u: goto L_08998ED0;
    case 215u: goto L_08998EDC;
    case 216u: goto L_08998F08;
    case 217u: goto L_08998F10;
    case 218u: goto L_08998F1C;
    case 219u: goto L_08998F24;
    case 220u: goto L_08998F5C;
    case 221u: goto L_08998F68;
    case 222u: goto L_08998F74;
    case 223u: goto L_08998F7C;
    case 224u: goto L_08998F90;
    case 225u: goto L_08998F98;
    case 226u: goto L_08998FA4;
    case 227u: goto L_08998FCC;
    case 228u: goto L_08998FD4;
    case 229u: goto L_08998FEC;
    case 230u: goto L_08998FF4;
    case 231u: goto L_08998FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08998000:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[21];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 313u, 0x08997FE0u>(ctx, &aot_mem); return;
      }
      goto L_0899800C;
    }
L_0899800C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 298u, 0x08997E9Cu>(ctx, &aot_mem); return;
L_08998014:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08998020u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 22u, 0x0899918Cu>(ctx, &aot_mem) && ctx.pc == 0x08998020u) goto L_08998020;
    return;
L_08998020:
    aot_gpr[22] = (aot_gpr[2] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 293u, 0x08997E58u>(ctx, &aot_mem); return;
L_08998028:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12604));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[17] = (aot_gpr[6] + 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08998068u);
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x08998068u) goto L_08998068;
    return;
L_08998068:
    aot_gpr[3] = (10922u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] | 43691u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(275));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(9));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 31u));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(367));
    aot_gpr[3] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 1u));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[4] = (14563u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 36409u);
    aot_gpr[7] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < 0 ? 1u : 0u);
    if (aot_gpr[2] != 0u) aot_gpr[6] = (aot_gpr[3]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (ctx.lo);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 31u));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[2] = (36u << 16u);
    aot_gpr[3] = (37u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 55692u);
    aot_gpr[3] = (aot_gpr[3] | 26681u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[8]) < 70 ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(12));
    aot_gpr[3] = (aot_gpr[6] + static_cast<std::uint32_t>(-12));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_0899812C;
      }
      goto L_08998128;
    }
L_08998128:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_0899812C;
L_0899812C:
    if (aot_gpr[6] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
        goto L_0899818C;
    }
    goto L_08998134;
L_08998134:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[3] << 6u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899818C:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[3] << 6u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089981D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12604));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[17] = (aot_gpr[6] + 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08998214u);
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x08998214u) goto L_08998214;
    return;
L_08998214:
    aot_gpr[3] = (10922u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] | 43691u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(275));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(9));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 31u));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(367));
    aot_gpr[3] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 1u));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[4] = (14563u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 36409u);
    aot_gpr[7] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < 0 ? 1u : 0u);
    if (aot_gpr[2] != 0u) aot_gpr[6] = (aot_gpr[3]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (ctx.lo);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 31u));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[2] = (36u << 16u);
    aot_gpr[3] = (37u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 55692u);
    aot_gpr[3] = (aot_gpr[3] | 26681u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[8]) < 70 ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(12));
    aot_gpr[3] = (aot_gpr[6] + static_cast<std::uint32_t>(-12));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_089982D8;
      }
      goto L_089982D4;
    }
L_089982D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_089982D8;
L_089982D8:
    if (aot_gpr[6] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
        goto L_08998338;
    }
    goto L_089982E0;
L_089982E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[3] << 6u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998338:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[3] << 6u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998380:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    aot_gpr[31] = (0x089983C0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x089983C0u) goto L_089983C0;
    return;
L_089983C0:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[23] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[23] + 0u);
      if (branch_taken) {
          goto L_0899840C;
      }
      goto L_089983D8;
    }
L_089983D8:
    aot_gpr[2] = (0u + 0u);
    goto L_089983DC;
L_089983DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_089983E0;
L_089983E0:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899840C:
    aot_gpr[31] = (0x08998414u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x08998414u) goto L_08998414;
    return;
L_08998414:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[23] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
      if (branch_taken) {
          goto L_089983D8;
      }
      goto L_08998430;
    }
L_08998430:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[30]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    goto L_08998474;
L_08998454:
    aot_gpr[31] = (0x0899845Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x0899845Cu) goto L_0899845C;
    return;
L_0899845C:
    aot_gpr[3] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_08998474;
L_08998474:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08998480u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x08998480u) goto L_08998480;
    return;
L_08998480:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[19];
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08998454;
      }
      goto L_08998498;
    }
L_08998498:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089987E0;
      }
      goto L_089984A4;
    }
L_089984A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[31] = (0x089984B8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x089984B8u) goto L_089984B8;
    return;
L_089984B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_0899883C;
      }
      goto L_089984D4;
    }
L_089984D4:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089984E0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x089984E0u) goto L_089984E0;
    return;
L_089984E0:
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[19];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08998914;
      }
      goto L_089984F8;
    }
L_089984F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089984FC;
L_089984FC:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[31] = (0x0899850Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x0899850Cu) goto L_0899850C;
    return;
L_0899850C:
    aot_gpr[16] = (aot_gpr[18] + aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[19];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0899888C;
      }
      goto L_08998524;
    }
L_08998524:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    goto L_0899852C;
L_0899852C:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08998538u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x08998538u) goto L_08998538;
    return;
L_08998538:
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[22];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08998900;
      }
      goto L_08998550;
    }
L_08998550:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08998554;
L_08998554:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[31] = (0x08998564u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x08998564u) goto L_08998564;
    return;
L_08998564:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (aot_gpr[18] + aot_gpr[16]);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[19] == aot_gpr[22];
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[2]);
      if (branch_taken) {
          goto L_0899874C;
      }
      goto L_08998578;
    }
L_08998578:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_0899857C;
L_0899857C:
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    goto L_08998584;
L_08998584:
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[30] ? 1u : 0u);
    goto L_08998588;
L_08998588:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089986F8;
      }
      goto L_08998590;
    }
L_08998590:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08998594;
L_08998594:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[18];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089983DC;
      }
      goto L_0899859C;
    }
L_0899859C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    aot_gpr[16] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(3) ? 1u : 0u);
      if (branch_taken) {
          goto L_089987C8;
      }
      goto L_089985BC;
    }
L_089985BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08998810;
      }
      goto L_089985C4;
    }
L_089985C4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089983DC;
      }
      goto L_089985D0;
    }
L_089985D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x089985E0u);
    aot_gpr[6] = (aot_gpr[21] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0407_entry, 407u, 30u, 0x0899BDB4u>(ctx, &aot_mem) && ctx.pc == 0x089985E0u) goto L_089985E0;
    return;
L_089985E0:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_089985E4;
L_089985E4:
    aot_gpr[31] = (0x089985ECu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x089985ECu) goto L_089985EC;
    return;
L_089985EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089983DC;
      }
      goto L_08998604;
    }
L_08998604:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08998610u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x08998610u) goto L_08998610;
    return;
L_08998610:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089983DC;
      }
      goto L_08998628;
    }
L_08998628:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08998634u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 22u, 0x0899918Cu>(ctx, &aot_mem) && ctx.pc == 0x08998634u) goto L_08998634;
    return;
L_08998634:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[3]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
      if (branch_taken) {
          goto L_08998A68;
      }
      goto L_0899864C;
    }
L_0899864C:
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08998A50;
      }
      goto L_08998658;
    }
L_08998658:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[2];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089983DC;
      }
      goto L_08998664;
    }
L_08998664:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    goto L_08998668;
L_08998668:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08998684;
      }
      goto L_08998674;
    }
L_08998674:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000010u) | ((0u & 0x00000001u) << 4u));
    aot_gpr[2] = (aot_gpr[2] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_08998684;
L_08998684:
    aot_gpr[31] = (0x0899868Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x0899868Cu) goto L_0899868C;
    return;
L_0899868C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[16] = (aot_gpr[18] + aot_gpr[16]);
    aot_gpr[31] = (0x089986B0u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x089986B0u) goto L_089986B0;
    return;
L_089986B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089983DC;
      }
      goto L_089986C8;
    }
L_089986C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[21] - aot_gpr[6]);
    aot_gpr[31] = (0x089986D8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(776));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089986D8u) goto L_089986D8;
    return;
L_089986D8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    if (aot_gpr[2] != aot_gpr[3]) {
    aot_gpr[2] = (0u + 0u);
        goto L_089983DC;
    }
    goto L_089986EC;
L_089986EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_089983E0;
L_089986F4:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089986F8;
L_089986F8:
    aot_gpr[31] = (0x08998700u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x08998700u) goto L_08998700;
    return;
L_08998700:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[30] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[2] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08998590;
      }
      goto L_0899871C;
    }
L_0899871C:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08998728u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x08998728u) goto L_08998728;
    return;
L_08998728:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[30] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[2] + aot_gpr[5]);
      if (branch_taken) {
          goto L_089986F4;
      }
      goto L_08998744;
    }
L_08998744:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08998594;
L_0899874C:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08998758u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x08998758u) goto L_08998758;
    return;
L_08998758:
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[19];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08998994;
      }
      goto L_0899876C;
    }
L_0899876C:
    aot_gpr[16] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    goto L_08998774;
L_08998774:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08998780u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x08998780u) goto L_08998780;
    return;
L_08998780:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0899857C;
      }
      goto L_08998798;
    }
L_08998798:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089987A4u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x089987A4u) goto L_089987A4;
    return;
L_089987A4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08998A70;
      }
      goto L_089987BC;
    }
L_089987BC:
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    goto L_08998584;
L_089987C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x089987D8u);
    aot_gpr[6] = (aot_gpr[21] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 23u, 0x0899C720u>(ctx, &aot_mem) && ctx.pc == 0x089987D8u) goto L_089987D8;
    return;
L_089987D8:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_089985E4;
L_089987E0:
    aot_gpr[2] = (aot_gpr[16] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089987F4;
      }
      goto L_089987EC;
    }
L_089987EC:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(-20));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(20));
    goto L_089987F4;
L_089987F4:
    aot_gpr[4] = (aot_gpr[21] - aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(84));
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[31] = (0x08998808u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08998808u) goto L_08998808;
    return;
L_08998808:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    goto L_089984A4;
L_08998810:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08998928;
      }
      goto L_08998818;
    }
L_08998818:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089983DC;
      }
      goto L_08998820;
    }
L_08998820:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[6] = (aot_gpr[21] + static_cast<std::uint32_t>(84));
    aot_gpr[31] = (0x08998834u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 35u, 0x089951E8u>(ctx, &aot_mem) && ctx.pc == 0x08998834u) goto L_08998834;
    return;
L_08998834:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_089985E4;
L_0899883C:
    aot_gpr[31] = (0x08998844u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x08998844u) goto L_08998844;
    return;
L_08998844:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08998940;
      }
      goto L_0899885C;
    }
L_0899885C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08998860;
L_08998860:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[31] = (0x08998870u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x08998870u) goto L_08998870;
    return;
L_08998870:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (aot_gpr[18] + aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    goto L_089984D4;
L_0899888C:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08998898u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x08998898u) goto L_08998898;
    return;
L_08998898:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(23));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089989E8;
      }
      goto L_089988B0;
    }
L_089988B0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08998A18;
      }
      goto L_089988BC;
    }
L_089988BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    goto L_089988C4;
L_089988C4:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089988D4u);
    aot_gpr[16] = (aot_gpr[2] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x089988D4u) goto L_089988D4;
    return;
L_089988D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(23));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08998978;
      }
      goto L_089988EC;
    }
L_089988EC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089989FC;
      }
      goto L_089988F4;
    }
L_089988F4:
    aot_gpr[16] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    goto L_0899852C;
L_08998900:
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(104));
    aot_gpr[31] = (0x0899890Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 279u, 0x08997D28u>(ctx, &aot_mem) && ctx.pc == 0x0899890Cu) goto L_0899890C;
    return;
L_0899890C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08998554;
L_08998914:
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(184));
    aot_gpr[31] = (0x08998920u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 279u, 0x08997D28u>(ctx, &aot_mem) && ctx.pc == 0x08998920u) goto L_08998920;
    return;
L_08998920:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089984FC;
L_08998928:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x08998938u);
    aot_gpr[6] = (aot_gpr[21] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 64u, 0x0899CB04u>(ctx, &aot_mem) && ctx.pc == 0x08998938u) goto L_08998938;
    return;
L_08998938:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_089985E4;
L_08998940:
    aot_gpr[31] = (0x08998948u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 22u, 0x0899918Cu>(ctx, &aot_mem) && ctx.pc == 0x08998948u) goto L_08998948;
    return;
L_08998948:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(10) ? 1u : 0u);
      if (branch_taken) {
          goto L_08998A44;
      }
      goto L_08998958;
    }
L_08998958:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08998A28;
      }
      goto L_08998960;
    }
L_08998960:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08998860;
    }
    goto L_0899896C;
L_0899896C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_0899885C;
L_08998978:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08998988u);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(56));
    goto L_08998028;
L_08998988:
    aot_gpr[16] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    goto L_0899852C;
L_08998994:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089989A0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x089989A0u) goto L_089989A0;
    return;
L_089989A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08998B08;
      }
      goto L_089989B8;
    }
L_089989B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089989BC;
L_089989BC:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[31] = (0x089989CCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x089989CCu) goto L_089989CC;
    return;
L_089989CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (aot_gpr[18] + aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    goto L_08998774;
L_089989E8:
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x089989F4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_08998028;
L_089989F4:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    goto L_089988C4;
L_089989FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08998A0Cu);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(56));
    goto L_089981D4;
L_08998A0C:
    aot_gpr[16] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    goto L_0899852C;
L_08998A18:
    aot_gpr[31] = (0x08998A20u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_089981D4;
L_08998A20:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    goto L_089988C4;
L_08998A28:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_08998B18;
      }
      goto L_08998A30;
    }
L_08998A30:
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08998860;
    }
    goto L_08998A38;
L_08998A38:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_0899885C;
L_08998A44:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_0899885C;
L_08998A50:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_08998B24;
      }
      goto L_08998A58;
    }
L_08998A58:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[2];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089983DC;
      }
      goto L_08998A60;
    }
L_08998A60:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    goto L_08998668;
L_08998A68:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_08998668;
L_08998A70:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08998A7Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x08998A7Cu) goto L_08998A7C;
    return;
L_08998A7C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08998B2C;
      }
      goto L_08998A94;
    }
L_08998A94:
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[19]);
    goto L_08998A98;
L_08998A98:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08998AA4u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 258u, 0x08997BD8u>(ctx, &aot_mem) && ctx.pc == 0x08998AA4u) goto L_08998AA4;
    return;
L_08998AA4:
    aot_gpr[3] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0899857C;
      }
      goto L_08998AC0;
    }
L_08998AC0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(36), 0u);
      if (branch_taken) {
          goto L_08998584;
      }
      goto L_08998ACC;
    }
L_08998ACC:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    goto L_08998AD4;
L_08998AD4:
    aot_gpr[4] = (aot_gpr[4] << 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[19] ? 1u : 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(36), aot_gpr[2]);
      if (branch_taken) {
          goto L_08998AD4;
      }
      goto L_08998B00;
    }
L_08998B00:
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[30] ? 1u : 0u);
    goto L_08998588;
L_08998B08:
    aot_gpr[31] = (0x08998B10u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 22u, 0x0899918Cu>(ctx, &aot_mem) && ctx.pc == 0x08998B10u) goto L_08998B10;
    return;
L_08998B10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089989BC;
L_08998B18:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_0899885C;
L_08998B24:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    goto L_08998668;
L_08998B2C:
    aot_gpr[2] = (aot_gpr[19] ^ 1u);
    aot_gpr[2] = (aot_gpr[2] & 1u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(257) ? 1u : 0u);
      if (branch_taken) {
          goto L_08998B5C;
      }
      goto L_08998B3C;
    }
L_08998B3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(257) ? 1u : 0u);
      if (branch_taken) {
          goto L_08998B5C;
      }
      goto L_08998B48;
    }
L_08998B48:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    goto L_08998B5C;
L_08998B5C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[19]);
      if (branch_taken) {
          goto L_08998A98;
      }
      goto L_08998B64;
    }
L_08998B64:
    aot_gpr[16] = (aot_gpr[21] + static_cast<std::uint32_t>(264));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x08998B78u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08998B78u) goto L_08998B78;
    return;
L_08998B78:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[6]);
    aot_gpr[31] = (0x08998B8Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08998B8Cu) goto L_08998B8C;
    return;
L_08998B8C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    goto L_08998A94;
L_08998B98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[17]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[16]);
      if (branch_taken) {
          goto L_08998BF8;
      }
      goto L_08998BBC;
    }
L_08998BBC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[6] & 4u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_08998BF8;
      }
      goto L_08998BCC;
    }
L_08998BCC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (49710u << 16u);
      if (branch_taken) {
          goto L_08998C18;
      }
      goto L_08998BD8;
    }
L_08998BD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08998BDC;
L_08998BDC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(184));
      if (branch_taken) {
          goto L_08998D0C;
      }
      goto L_08998BE4;
    }
L_08998BE4:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(24));
    aot_gpr[16] = (aot_gpr[16] & 24u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[6] & 64u);
      if (branch_taken) {
          goto L_08998C94;
      }
      goto L_08998BF8;
    }
L_08998BF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    goto L_08998BFC;
L_08998BFC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998C18:
    aot_gpr[2] = (aot_gpr[2] | 17671u);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[5]) * static_cast<std::uint64_t>(aot_gpr[2]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[3] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[3] | 20864u);
    aot_gpr[10] = (0u | 43200u);
    aot_gpr[3] = (aot_gpr[3] | 20863u);
    aot_gpr[2] = (ctx.hi);
    aot_gpr[7] = (aot_gpr[2] >> 16u);
    ctx.lo = aot_gpr[5];
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4]))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    aot_gpr[9] = (37u << 16u);
    aot_gpr[2] = (aot_gpr[9] | 15755u);
    aot_gpr[8] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[2]);
      if (branch_taken) {
          goto L_08998CEC;
      }
      goto L_08998C5C;
    }
L_08998C5C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08998BDC;
    }
    goto L_08998C6C;
L_08998C6C:
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
    goto L_08998C70;
L_08998C70:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (aot_gpr[6] | 256u);
        goto L_08998C8C;
    }
    goto L_08998C78;
L_08998C78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08998BDC;
    }
    goto L_08998C88;
L_08998C88:
    aot_gpr[16] = (aot_gpr[6] | 256u);
    goto L_08998C8C;
L_08998C8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    goto L_08998BD8;
L_08998C94:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
      if (branch_taken) {
          goto L_08998BFC;
      }
      goto L_08998C9C;
    }
L_08998C9C:
    aot_gpr[31] = (0x08998CA4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08998B98;
L_08998CA4:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[2] & 24u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[16];
    aot_gpr[2] = (aot_gpr[3] & 280u);
      if (branch_taken) {
          goto L_08998F10;
      }
      goto L_08998CB4;
    }
L_08998CB4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = ((aot_gpr[16] & ~0x00000018u) | ((0u & 0x00000003u) << 3u));
    aot_gpr[2] = (aot_gpr[16] | aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[2] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    goto L_08998CCC;
L_08998CCC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998CEC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr[2] = (aot_gpr[9] | 15756u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[8] - aot_gpr[10]);
      if (branch_taken) {
          goto L_08998BD8;
      }
      goto L_08998D04;
    }
L_08998D04:
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
    goto L_08998C70;
L_08998D0C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(104));
    aot_gpr[31] = (0x08998D18u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 224u, 0x08997A50u>(ctx, &aot_mem) && ctx.pc == 0x08998D18u) goto L_08998D18;
    return;
L_08998D18:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = ((aot_gpr[16] & ~0x00000040u) | ((0u & 0x00000001u) << 6u));
        goto L_08998D7C;
    }
    goto L_08998D20;
L_08998D20:
    aot_gpr[16] = (aot_gpr[16] | 64u);
    aot_gpr[19] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    goto L_08998D2C;
L_08998D2C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[19]);
      if (branch_taken) {
          goto L_08998D68;
      }
      goto L_08998D34;
    }
L_08998D34:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08998D40u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 224u, 0x08997A50u>(ctx, &aot_mem) && ctx.pc == 0x08998D40u) goto L_08998D40;
    return;
L_08998D40:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_08998D6C;
    }
    goto L_08998D48;
L_08998D48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_08998D6C;
    }
    goto L_08998D54;
L_08998D54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(519)));
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (aot_gpr[2] & 1u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(520));
      if (branch_taken) {
          goto L_08998D90;
      }
      goto L_08998D68;
    }
L_08998D68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08998D6C;
L_08998D6C:
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000018u) | ((0u & 0x00000003u) << 3u));
    aot_gpr[16] = (aot_gpr[2] | 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    goto L_08998BE4;
L_08998D7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[31] = (0x08998D88u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 225u, 0x08997A58u>(ctx, &aot_mem) && ctx.pc == 0x08998D88u) goto L_08998D88;
    return;
L_08998D88:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    goto L_08998D2C;
L_08998D90:
    aot_gpr[2] = (aot_gpr[6] & 3u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(776));
      if (branch_taken) {
          goto L_08998EDC;
      }
      goto L_08998DA0;
    }
L_08998DA0:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08998DA0;
      }
      goto L_08998DDC;
    }
L_08998DDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    goto L_08998DE0;
L_08998DE0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[19] - aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[8] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(520));
    aot_gpr[31] = (0x08998E00u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 118u, 0x08999CC0u>(ctx, &aot_mem) && ctx.pc == 0x08998E00u) goto L_08998E00;
    return;
L_08998E00:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08998E30;
      }
      goto L_08998E10;
    }
L_08998E10:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(3));
    aot_gpr[3] = (aot_gpr[5] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(255));
    goto L_08998E1C;
L_08998E1C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08998E1C;
      }
      goto L_08998E28;
    }
L_08998E28:
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    goto L_08998E30;
L_08998E30:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(255));
    goto L_08998E48;
L_08998E40:
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08998E48;
L_08998E48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[6];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08998E40;
      }
      goto L_08998E54;
    }
L_08998E54:
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[29]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(7)));
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[31] = (0x08998E68u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 22u, 0x0899918Cu>(ctx, &aot_mem) && ctx.pc == 0x08998E68u) goto L_08998E68;
    return;
L_08998E68:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
        goto L_08998E90;
    }
    goto L_08998E74;
L_08998E74:
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08998E90;
      }
      goto L_08998E80;
    }
L_08998E80:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08998E90;
      }
      goto L_08998E8C;
    }
L_08998E8C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    goto L_08998E90;
L_08998E90:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[29] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(104));
    aot_gpr[31] = (0x08998EA4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 158u, 0x08A3A7ECu>(ctx, &aot_mem) && ctx.pc == 0x08998EA4u) goto L_08998EA4;
    return;
L_08998EA4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_08998D6C;
    }
    goto L_08998EAC;
L_08998EAC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[3] & 64u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[3] | 24u);
      if (branch_taken) {
          goto L_08998F1C;
      }
      goto L_08998EBC;
    }
L_08998EBC:
    aot_gpr[3] = ((aot_gpr[3] & ~0x00000018u) | ((0u & 0x00000003u) << 3u));
    aot_gpr[16] = (aot_gpr[3] | 4u);
    aot_gpr[2] = (aot_gpr[16] & 128u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[16]);
      if (branch_taken) {
          goto L_08998BE4;
      }
      goto L_08998ED0;
    }
L_08998ED0:
    aot_gpr[16] = (aot_gpr[3] | 20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    goto L_08998BE4;
L_08998EDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08998EDC;
      }
      goto L_08998F08;
    }
L_08998F08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    goto L_08998DE0;
L_08998F10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[16] + 0u);
    goto L_08998CCC;
L_08998F1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    goto L_08998BE4;
L_08998F24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
      if (branch_taken) {
          goto L_08998FA4;
      }
      goto L_08998F5C;
    }
L_08998F5C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[21] = (2217u << 16u);
      if (branch_taken) {
          goto L_08998F74;
      }
      goto L_08998F68;
    }
L_08998F68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16024)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08998FCC;
      }
      goto L_08998F74;
    }
L_08998F74:
    jump_target = aot_gpr[17];
    aot_gpr[31] = (0x08998F7Cu);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(776));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08998F7Cu) goto L_08998F7C;
    return;
L_08998F7C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(776));
      if (branch_taken) {
          goto L_08998FA4;
      }
      goto L_08998F90;
    }
L_08998F90:
    aot_gpr[31] = (0x08998F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08998F98u) goto L_08998F98;
    return;
L_08998F98:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    goto L_08998FA4;
L_08998FA4:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998FCC:
    aot_gpr[31] = (0x08998FD4u);
    // nop
    goto L_08998F24;
L_08998FD4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18000));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(958));
    aot_gpr[31] = (0x08998FECu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_08998380;
L_08998FEC:
    aot_gpr[31] = (0x08998FF4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08998B98;
L_08998FF4:
    aot_gpr[31] = (0x08998FFCu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 241u, 0x08997B00u>(ctx, &aot_mem) && ctx.pc == 0x08998FFCu) goto L_08998FFC;
    return;
L_08998FFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 2u, 0x0899900Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 1u, 0x08999004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0404(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0404_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_404(Runtime &runtime) {
    runtime.register_generated_unit(404u, 0x08998000u, 4096u, &recomp_unit_0404, &recomp_unit_0404_entry);
    runtime.register_function(0x08998000u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899800Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998014u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998020u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998028u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998068u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998128u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899812Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998134u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899818Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089981D4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998214u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089982D4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089982D8u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089982E0u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998338u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998380u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089983C0u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089983D8u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089983DCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089983E0u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899840Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998414u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998430u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998454u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899845Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998474u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998480u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998498u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089984A4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089984B8u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089984D4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089984E0u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089984F8u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089984FCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899850Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998524u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899852Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998538u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998550u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998554u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998564u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998578u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899857Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998584u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998588u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998590u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998594u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899859Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089985BCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089985C4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089985D0u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089985E0u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089985E4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089985ECu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998604u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998610u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998628u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998634u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899864Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998658u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998664u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998668u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998674u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998684u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899868Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089986B0u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089986C8u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089986D8u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089986ECu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089986F4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089986F8u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998700u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899871Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998728u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998744u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899874Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998758u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899876Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998774u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998780u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998798u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089987A4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089987BCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089987C8u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089987D8u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089987E0u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089987ECu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089987F4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998808u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998810u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998818u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998820u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998834u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899883Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998844u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899885Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998860u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998870u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899888Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998898u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089988B0u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089988BCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089988C4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089988D4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089988ECu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089988F4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998900u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899890Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998914u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998920u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998928u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998938u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998940u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998948u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998958u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998960u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x0899896Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998978u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998988u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998994u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089989A0u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089989B8u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089989BCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089989CCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089989E8u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089989F4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x089989FCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A0Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A18u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A20u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A28u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A30u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A38u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A44u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A50u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A58u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A60u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A68u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A70u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A7Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A94u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998A98u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998AA4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998AC0u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998ACCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998AD4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998B00u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998B08u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998B10u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998B18u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998B24u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998B2Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998B3Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998B48u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998B5Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998B64u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998B78u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998B8Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998B98u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998BBCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998BCCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998BD8u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998BDCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998BE4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998BF8u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998BFCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998C18u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998C5Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998C6Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998C70u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998C78u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998C88u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998C8Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998C94u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998C9Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998CA4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998CB4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998CCCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998CECu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998D04u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998D0Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998D18u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998D20u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998D2Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998D34u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998D40u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998D48u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998D54u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998D68u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998D6Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998D7Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998D88u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998D90u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998DA0u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998DDCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998DE0u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998E00u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998E10u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998E1Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998E28u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998E30u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998E40u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998E48u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998E54u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998E68u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998E74u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998E80u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998E8Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998E90u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998EA4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998EACu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998EBCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998ED0u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998EDCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998F08u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998F10u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998F1Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998F24u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998F5Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998F68u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998F74u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998F7Cu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998F90u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998F98u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998FA4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998FCCu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998FD4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998FECu, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998FF4u, &recomp_unit_0404, "recomp_unit_0404");
    runtime.register_function(0x08998FFCu, &recomp_unit_0404, "recomp_unit_0404");
}
} // namespace psprecomp
