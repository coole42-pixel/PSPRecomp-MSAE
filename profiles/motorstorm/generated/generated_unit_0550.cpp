#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0550[1019] = {
    1, 2, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0,
    0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 17, 18, 0, 0, 19, 0, 20, 21, 0, 0, 0, 0, 0,
    22, 0, 0, 23, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34,
    0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0,
    0, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0,
    54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 59,
    0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 69, 70, 71, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 76, 77,
    0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0,
    85, 0, 86, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 91, 0, 92, 93, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0,
    0, 99, 0, 100, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 0, 109, 0, 110, 0,
    0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    123, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 132, 133, 134, 0, 0, 0, 135, 0, 136, 0,
    137, 0, 0, 138, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 148, 0, 0, 149, 0, 150, 0, 0, 151, 0, 152,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 165,
    166, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 170, 171, 0, 0, 172, 173, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 177,
    0, 178, 0, 0, 179, 0, 0, 0, 180, 181, 0, 0, 182, 0, 0, 183, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 208, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 228, 0, 0, 229, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0,
    0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 248,
};
void recomp_unit_0550_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A2A004u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0550[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A2A004;
    case 2u: goto L_08A2A008;
    case 3u: goto L_08A2A00C;
    case 4u: goto L_08A2A014;
    case 5u: goto L_08A2A01C;
    case 6u: goto L_08A2A024;
    case 7u: goto L_08A2A02C;
    case 8u: goto L_08A2A054;
    case 9u: goto L_08A2A070;
    case 10u: goto L_08A2A07C;
    case 11u: goto L_08A2A088;
    case 12u: goto L_08A2A098;
    case 13u: goto L_08A2A0A0;
    case 14u: goto L_08A2A0AC;
    case 15u: goto L_08A2A0B8;
    case 16u: goto L_08A2A0C8;
    case 17u: goto L_08A2A0D0;
    case 18u: goto L_08A2A0D4;
    case 19u: goto L_08A2A0E0;
    case 20u: goto L_08A2A0E8;
    case 21u: goto L_08A2A0EC;
    case 22u: goto L_08A2A104;
    case 23u: goto L_08A2A110;
    case 24u: goto L_08A2A118;
    case 25u: goto L_08A2A124;
    case 26u: goto L_08A2A134;
    case 27u: goto L_08A2A13C;
    case 28u: goto L_08A2A144;
    case 29u: goto L_08A2A14C;
    case 30u: goto L_08A2A160;
    case 31u: goto L_08A2A168;
    case 32u: goto L_08A2A170;
    case 33u: goto L_08A2A178;
    case 34u: goto L_08A2A180;
    case 35u: goto L_08A2A188;
    case 36u: goto L_08A2A194;
    case 37u: goto L_08A2A19C;
    case 38u: goto L_08A2A1A4;
    case 39u: goto L_08A2A1AC;
    case 40u: goto L_08A2A1B4;
    case 41u: goto L_08A2A1BC;
    case 42u: goto L_08A2A1C4;
    case 43u: goto L_08A2A1D4;
    case 44u: goto L_08A2A1E8;
    case 45u: goto L_08A2A1F4;
    case 46u: goto L_08A2A20C;
    case 47u: goto L_08A2A214;
    case 48u: goto L_08A2A220;
    case 49u: goto L_08A2A230;
    case 50u: goto L_08A2A248;
    case 51u: goto L_08A2A264;
    case 52u: goto L_08A2A26C;
    case 53u: goto L_08A2A274;
    case 54u: goto L_08A2A284;
    case 55u: goto L_08A2A294;
    case 56u: goto L_08A2A2A4;
    case 57u: goto L_08A2A2E0;
    case 58u: goto L_08A2A2F8;
    case 59u: goto L_08A2A300;
    case 60u: goto L_08A2A30C;
    case 61u: goto L_08A2A318;
    case 62u: goto L_08A2A320;
    case 63u: goto L_08A2A32C;
    case 64u: goto L_08A2A334;
    case 65u: goto L_08A2A344;
    case 66u: goto L_08A2A350;
    case 67u: goto L_08A2A358;
    case 68u: goto L_08A2A360;
    case 69u: goto L_08A2A370;
    case 70u: goto L_08A2A374;
    case 71u: goto L_08A2A378;
    case 72u: goto L_08A2A39C;
    case 73u: goto L_08A2A3DC;
    case 74u: goto L_08A2A3E4;
    case 75u: goto L_08A2A3F0;
    case 76u: goto L_08A2A3FC;
    case 77u: goto L_08A2A400;
    case 78u: goto L_08A2A40C;
    case 79u: goto L_08A2A41C;
    case 80u: goto L_08A2A424;
    case 81u: goto L_08A2A42C;
    case 82u: goto L_08A2A450;
    case 83u: goto L_08A2A474;
    case 84u: goto L_08A2A47C;
    case 85u: goto L_08A2A484;
    case 86u: goto L_08A2A48C;
    case 87u: goto L_08A2A498;
    case 88u: goto L_08A2A4A0;
    case 89u: goto L_08A2A4A8;
    case 90u: goto L_08A2A4B0;
    case 91u: goto L_08A2A4BC;
    case 92u: goto L_08A2A4C4;
    case 93u: goto L_08A2A4C8;
    case 94u: goto L_08A2A4DC;
    case 95u: goto L_08A2A4E4;
    case 96u: goto L_08A2A4EC;
    case 97u: goto L_08A2A4F4;
    case 98u: goto L_08A2A4FC;
    case 99u: goto L_08A2A508;
    case 100u: goto L_08A2A510;
    case 101u: goto L_08A2A518;
    case 102u: goto L_08A2A524;
    case 103u: goto L_08A2A52C;
    case 104u: goto L_08A2A544;
    case 105u: goto L_08A2A54C;
    case 106u: goto L_08A2A554;
    case 107u: goto L_08A2A560;
    case 108u: goto L_08A2A568;
    case 109u: goto L_08A2A574;
    case 110u: goto L_08A2A57C;
    case 111u: goto L_08A2A594;
    case 112u: goto L_08A2A59C;
    case 113u: goto L_08A2A5A4;
    case 114u: goto L_08A2A5AC;
    case 115u: goto L_08A2A5C4;
    case 116u: goto L_08A2A5E4;
    case 117u: goto L_08A2A5F4;
    case 118u: goto L_08A2A600;
    case 119u: goto L_08A2A614;
    case 120u: goto L_08A2A650;
    case 121u: goto L_08A2A65C;
    case 122u: goto L_08A2A67C;
    case 123u: goto L_08A2A684;
    case 124u: goto L_08A2A68C;
    case 125u: goto L_08A2A698;
    case 126u: goto L_08A2A6A0;
    case 127u: goto L_08A2A6A8;
    case 128u: goto L_08A2A6B0;
    case 129u: goto L_08A2A6C0;
    case 130u: goto L_08A2A6C8;
    case 131u: goto L_08A2A6D4;
    case 132u: goto L_08A2A6DC;
    case 133u: goto L_08A2A6E0;
    case 134u: goto L_08A2A6E4;
    case 135u: goto L_08A2A6F4;
    case 136u: goto L_08A2A6FC;
    case 137u: goto L_08A2A704;
    case 138u: goto L_08A2A710;
    case 139u: goto L_08A2A714;
    case 140u: goto L_08A2A724;
    case 141u: goto L_08A2A734;
    case 142u: goto L_08A2A764;
    case 143u: goto L_08A2A79C;
    case 144u: goto L_08A2A7A8;
    case 145u: goto L_08A2A7BC;
    case 146u: goto L_08A2A7C4;
    case 147u: goto L_08A2A7CC;
    case 148u: goto L_08A2A7D8;
    case 149u: goto L_08A2A7E4;
    case 150u: goto L_08A2A7EC;
    case 151u: goto L_08A2A7F8;
    case 152u: goto L_08A2A800;
    case 153u: goto L_08A2A818;
    case 154u: goto L_08A2A840;
    case 155u: goto L_08A2A864;
    case 156u: goto L_08A2A878;
    case 157u: goto L_08A2A890;
    case 158u: goto L_08A2A8A0;
    case 159u: goto L_08A2A8B4;
    case 160u: goto L_08A2A8C0;
    case 161u: goto L_08A2A8CC;
    case 162u: goto L_08A2A8E8;
    case 163u: goto L_08A2A8F0;
    case 164u: goto L_08A2A8F8;
    case 165u: goto L_08A2A900;
    case 166u: goto L_08A2A904;
    case 167u: goto L_08A2A90C;
    case 168u: goto L_08A2A918;
    case 169u: goto L_08A2A920;
    case 170u: goto L_08A2A930;
    case 171u: goto L_08A2A934;
    case 172u: goto L_08A2A940;
    case 173u: goto L_08A2A944;
    case 174u: goto L_08A2A950;
    case 175u: goto L_08A2A968;
    case 176u: goto L_08A2A978;
    case 177u: goto L_08A2A980;
    case 178u: goto L_08A2A988;
    case 179u: goto L_08A2A994;
    case 180u: goto L_08A2A9A4;
    case 181u: goto L_08A2A9A8;
    case 182u: goto L_08A2A9B4;
    case 183u: goto L_08A2A9C0;
    case 184u: goto L_08A2A9C4;
    case 185u: goto L_08A2A9D0;
    case 186u: goto L_08A2A9E0;
    case 187u: goto L_08A2A9FC;
    case 188u: goto L_08A2AA2C;
    case 189u: goto L_08A2AA4C;
    case 190u: goto L_08A2AA54;
    case 191u: goto L_08A2AAA4;
    case 192u: goto L_08A2AAB4;
    case 193u: goto L_08A2AAC8;
    case 194u: goto L_08A2AAD4;
    case 195u: goto L_08A2AAE0;
    case 196u: goto L_08A2AAFC;
    case 197u: goto L_08A2AB04;
    case 198u: goto L_08A2AB28;
    case 199u: goto L_08A2AB38;
    case 200u: goto L_08A2AB74;
    case 201u: goto L_08A2AB9C;
    case 202u: goto L_08A2ABC0;
    case 203u: goto L_08A2AC00;
    case 204u: goto L_08A2AC04;
    case 205u: goto L_08A2AC38;
    case 206u: goto L_08A2AC44;
    case 207u: goto L_08A2AC4C;
    case 208u: goto L_08A2AC54;
    case 209u: goto L_08A2AC58;
    case 210u: goto L_08A2AC60;
    case 211u: goto L_08A2AC94;
    case 212u: goto L_08A2ACA8;
    case 213u: goto L_08A2ACC0;
    case 214u: goto L_08A2ACC8;
    case 215u: goto L_08A2ACD0;
    case 216u: goto L_08A2ACD8;
    case 217u: goto L_08A2ACE8;
    case 218u: goto L_08A2AD08;
    case 219u: goto L_08A2AD14;
    case 220u: goto L_08A2AD34;
    case 221u: goto L_08A2AD54;
    case 222u: goto L_08A2AD5C;
    case 223u: goto L_08A2AD7C;
    case 224u: goto L_08A2AD84;
    case 225u: goto L_08A2ADA4;
    case 226u: goto L_08A2AE5C;
    case 227u: goto L_08A2AE6C;
    case 228u: goto L_08A2AE70;
    case 229u: goto L_08A2AE7C;
    case 230u: goto L_08A2AE84;
    case 231u: goto L_08A2AEB8;
    case 232u: goto L_08A2AEC0;
    case 233u: goto L_08A2AEC8;
    case 234u: goto L_08A2AED4;
    case 235u: goto L_08A2AF18;
    case 236u: goto L_08A2AF44;
    case 237u: goto L_08A2AF4C;
    case 238u: goto L_08A2AF54;
    case 239u: goto L_08A2AF64;
    case 240u: goto L_08A2AF78;
    case 241u: goto L_08A2AF88;
    case 242u: goto L_08A2AF94;
    case 243u: goto L_08A2AF9C;
    case 244u: goto L_08A2AFB0;
    case 245u: goto L_08A2AFC0;
    case 246u: goto L_08A2AFD0;
    case 247u: goto L_08A2AFE0;
    case 248u: goto L_08A2AFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A2A004:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(68), 0u);
    goto L_08A2A008;
L_08A2A008:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(48)));
    goto L_08A2A00C;
L_08A2A00C:
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
        goto L_08A2A014;
    }
    goto L_08A2A014;
L_08A2A014:
    aot_gpr[31] = (0x08A2A01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A01Cu) goto L_08A2A01C;
    return;
L_08A2A01C:
    aot_gpr[31] = (0x08A2A024u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A024u) goto L_08A2A024;
    return;
L_08A2A024:
    aot_gpr[31] = (0x08A2A02Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 138u, 0x089EEB90u>(ctx, &aot_mem) && ctx.pc == 0x08A2A02Cu) goto L_08A2A02C;
    return;
L_08A2A02C:
    aot_gpr[2] = (aot_gpr[21] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8196)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8200)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8204)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8208)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8212)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8216)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8220)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(8224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A054:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2A0D0;
      }
      goto L_08A2A070;
    }
L_08A2A070:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A2A098;
      }
      goto L_08A2A07C;
    }
L_08A2A07C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A2A088u);
    aot_gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A088u) goto L_08A2A088;
    return;
L_08A2A088:
    aot_gpr[4] = (0u | 48u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[31] = (0x08A2A098u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2A1D4;
L_08A2A098:
    aot_gpr[31] = (0x08A2A0A0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0549_entry, 549u, 162u, 0x08A29A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A0A0u) goto L_08A2A0A0;
    return;
L_08A2A0A0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A2A0D4;
      }
      goto L_08A2A0AC;
    }
L_08A2A0AC:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A2A0B8u);
    aot_gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A0B8u) goto L_08A2A0B8;
    return;
L_08A2A0B8:
    aot_gpr[4] = (0u | 50u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[31] = (0x08A2A0C8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2A1D4;
L_08A2A0C8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08A2A0D4;
      }
      goto L_08A2A0D0;
    }
L_08A2A0D0:
    aot_gpr[17] = (0u | 1u);
    goto L_08A2A0D4;
L_08A2A0D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A0EC;
      }
      goto L_08A2A0E0;
    }
L_08A2A0E0:
    aot_gpr[31] = (0x08A2A0E8u);
    // nop
    goto L_08A2A950;
L_08A2A0E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_08A2A0EC;
L_08A2A0EC:
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
L_08A2A104:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-17912));
    goto L_08A2A110;
L_08A2A110:
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A144;
      }
      goto L_08A2A118;
    }
L_08A2A118:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A144;
      }
      goto L_08A2A124;
    }
L_08A2A124:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2A13C;
      }
      goto L_08A2A134;
    }
L_08A2A134:
    if (aot_gpr[11] == aot_gpr[7]) {
    aot_gpr[8] = (aot_gpr[4] | 0u);
        goto L_08A2A13C;
    }
    goto L_08A2A13C;
L_08A2A13C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A2A110;
      }
      goto L_08A2A144;
    }
L_08A2A144:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A14C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A2A160u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A160u) goto L_08A2A160;
    return;
L_08A2A160:
    aot_gpr[31] = (0x08A2A168u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A168u) goto L_08A2A168;
    return;
L_08A2A168:
    aot_gpr[31] = (0x08A2A170u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 138u, 0x089EEB90u>(ctx, &aot_mem) && ctx.pc == 0x08A2A170u) goto L_08A2A170;
    return;
L_08A2A170:
    aot_gpr[31] = (0x08A2A178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A178u) goto L_08A2A178;
    return;
L_08A2A178:
    aot_gpr[31] = (0x08A2A180u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A180u) goto L_08A2A180;
    return;
L_08A2A180:
    aot_gpr[31] = (0x08A2A188u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 138u, 0x089EEB90u>(ctx, &aot_mem) && ctx.pc == 0x08A2A188u) goto L_08A2A188;
    return;
L_08A2A188:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x08A2A194u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0551_entry, 551u, 140u, 0x08A2BA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A194u) goto L_08A2A194;
    return;
L_08A2A194:
    aot_gpr[31] = (0x08A2A19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A19Cu) goto L_08A2A19C;
    return;
L_08A2A19C:
    aot_gpr[31] = (0x08A2A1A4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A1A4u) goto L_08A2A1A4;
    return;
L_08A2A1A4:
    aot_gpr[31] = (0x08A2A1ACu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 138u, 0x089EEB90u>(ctx, &aot_mem) && ctx.pc == 0x08A2A1ACu) goto L_08A2A1AC;
    return;
L_08A2A1AC:
    aot_gpr[31] = (0x08A2A1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A1B4u) goto L_08A2A1B4;
    return;
L_08A2A1B4:
    aot_gpr[31] = (0x08A2A1BCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A1BCu) goto L_08A2A1BC;
    return;
L_08A2A1BC:
    aot_gpr[31] = (0x08A2A1C4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 138u, 0x089EEB90u>(ctx, &aot_mem) && ctx.pc == 0x08A2A1C4u) goto L_08A2A1C4;
    return;
L_08A2A1C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A1D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A2A1E8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A2A14C;
L_08A2A1E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2A220;
      }
      goto L_08A2A1F4;
    }
L_08A2A1F4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A2A20Cu);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0549_entry, 549u, 149u, 0x08A2996Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A20Cu) goto L_08A2A20C;
    return;
L_08A2A20C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A220;
      }
      goto L_08A2A214;
    }
L_08A2A214:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
      if (branch_taken) {
          goto L_08A2A220;
      }
      goto L_08A2A220;
    }
L_08A2A220:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A230:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A2A248u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    goto L_08A2A9FC;
L_08A2A248:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4500)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4496)));
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2A26C;
      }
      goto L_08A2A264;
    }
L_08A2A264:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A274;
      }
      goto L_08A2A26C;
    }
L_08A2A26C:
    aot_gpr[31] = (0x08A2A274u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2A104;
L_08A2A274:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A2A284u);
    aot_gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A284u) goto L_08A2A284;
    return;
L_08A2A284:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[31] = (0x08A2A294u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2A1D4;
L_08A2A294:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A2A4:
    aot_gpr[1] = (0u | 39344u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[1]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6560), 0u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(6568));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6564), 0u);
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A2A2E0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A2E0u) goto L_08A2A2E0;
    return;
L_08A2A2E0:
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(6560));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(6564));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A2A2F8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0549_entry, 549u, 155u, 0x08A299D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A2F8u) goto L_08A2A2F8;
    return;
L_08A2A2F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A378;
      }
      goto L_08A2A300;
    }
L_08A2A300:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(6560)));
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
        goto L_08A2A320;
    }
    goto L_08A2A30C;
L_08A2A30C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(6564)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A378;
      }
      goto L_08A2A318;
    }
L_08A2A318:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A378;
      }
      goto L_08A2A320;
    }
L_08A2A320:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    aot_gpr[31] = (0x08A2A32Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2A1D4;
L_08A2A32C:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
        goto L_08A2A374;
    }
    goto L_08A2A334;
L_08A2A334:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 11 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
        goto L_08A2A358;
    }
    goto L_08A2A344;
L_08A2A344:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A370;
      }
      goto L_08A2A350;
    }
L_08A2A350:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2A370;
      }
      goto L_08A2A358;
    }
L_08A2A358:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A370;
      }
      goto L_08A2A360;
    }
L_08A2A360:
    aot_gpr[4] = (0u | 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 3u);
      if (branch_taken) {
          goto L_08A2A370;
      }
      goto L_08A2A370;
    }
L_08A2A370:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    goto L_08A2A374;
L_08A2A374:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_08A2A378;
L_08A2A378:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[1] = (1u << 16u);
    aot_gpr[1] = (aot_gpr[1] + static_cast<std::uint32_t>(-26192));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + aot_gpr[1]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A39C:
    aot_gpr[1] = (0u | 39344u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[1]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6560), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(6568));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(6564), 0u);
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(6560));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(6564));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A2A3DCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0549_entry, 549u, 155u, 0x08A299D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A3DCu) goto L_08A2A3DC;
    return;
L_08A2A3DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A42C;
      }
      goto L_08A2A3E4;
    }
L_08A2A3E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(6560)));
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
        goto L_08A2A400;
    }
    goto L_08A2A3F0;
L_08A2A3F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(6564)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A42C;
      }
      goto L_08A2A3FC;
    }
L_08A2A3FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    goto L_08A2A400;
L_08A2A400:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    aot_gpr[31] = (0x08A2A40Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2A1D4;
L_08A2A40C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 32u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A424;
      }
      goto L_08A2A41C;
    }
L_08A2A41C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2A424;
      }
      goto L_08A2A424;
    }
L_08A2A424:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_08A2A42C;
L_08A2A42C:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[1] = (1u << 16u);
    aot_gpr[1] = (aot_gpr[1] + static_cast<std::uint32_t>(-26192));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + aot_gpr[1]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A450:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_08A2A48C;
      }
      goto L_08A2A474;
    }
L_08A2A474:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A2A5AC;
      }
      goto L_08A2A47C;
    }
L_08A2A47C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A4A8;
      }
      goto L_08A2A484;
    }
L_08A2A484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A510;
      }
      goto L_08A2A48C;
    }
L_08A2A48C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A2A560;
      }
      goto L_08A2A498;
    }
L_08A2A498:
    if (aot_gpr[4] != 0u) {
    aot_gpr[17] = (0u | 1u);
        goto L_08A2A5AC;
    }
    goto L_08A2A4A0;
L_08A2A4A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A5AC;
      }
      goto L_08A2A4A8;
    }
L_08A2A4A8:
    aot_gpr[31] = (0x08A2A4B0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0549_entry, 549u, 139u, 0x08A298F4u>(ctx, &aot_mem) && ctx.pc == 0x08A2A4B0u) goto L_08A2A4B0;
    return;
L_08A2A4B0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08A2A4E4;
    }
    goto L_08A2A4BC;
L_08A2A4BC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2A508;
      }
      goto L_08A2A4C4;
    }
L_08A2A4C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08A2A4C8;
L_08A2A4C8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A2A4DCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2A4DCu) goto L_08A2A4DC;
    return;
L_08A2A4DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A5AC;
      }
      goto L_08A2A4E4;
    }
L_08A2A4E4:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08A2A4C8;
    }
    goto L_08A2A4EC;
L_08A2A4EC:
    aot_gpr[31] = (0x08A2A4F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2A230;
L_08A2A4F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A2A5AC;
      }
      goto L_08A2A4FC;
    }
L_08A2A4FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A5AC;
      }
      goto L_08A2A508;
    }
L_08A2A508:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A5AC;
      }
      goto L_08A2A510;
    }
L_08A2A510:
    aot_gpr[31] = (0x08A2A518u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2A2A4;
L_08A2A518:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) > 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A2A54C;
      }
      goto L_08A2A524;
    }
L_08A2A524:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2A5AC;
      }
      goto L_08A2A52C;
    }
L_08A2A52C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A2A544u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2A544u) goto L_08A2A544;
    return;
L_08A2A544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A5AC;
      }
      goto L_08A2A54C;
    }
L_08A2A54C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08A2A52C;
      }
      goto L_08A2A554;
    }
L_08A2A554:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A5AC;
      }
      goto L_08A2A560;
    }
L_08A2A560:
    aot_gpr[31] = (0x08A2A568u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2A39C;
L_08A2A568:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) > 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A2A59C;
      }
      goto L_08A2A574;
    }
L_08A2A574:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2A5AC;
      }
      goto L_08A2A57C;
    }
L_08A2A57C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A2A594u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2A594u) goto L_08A2A594;
    return;
L_08A2A594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A5AC;
      }
      goto L_08A2A59C;
    }
L_08A2A59C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08A2A57C;
      }
      goto L_08A2A5A4;
    }
L_08A2A5A4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A2A5AC;
      }
      goto L_08A2A5AC;
    }
L_08A2A5AC:
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
L_08A2A5C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(29244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(29248));
      if (branch_taken) {
          goto L_08A2A600;
      }
      goto L_08A2A5E4;
    }
L_08A2A5E4:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(29244), aot_gpr[5]);
    aot_gpr[31] = (0x08A2A5F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2A840;
L_08A2A5F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08A2A600u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-17736));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A600u) goto L_08A2A600;
    return;
L_08A2A600:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A614:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    aot_gpr[31] = (0x08A2A650u);
    aot_gpr[6] = (0u | 65u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A650u) goto L_08A2A650;
    return;
L_08A2A650:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A2A65Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 215u, 0x08A3AB28u>(ctx, &aot_mem) && ctx.pc == 0x08A2A65Cu) goto L_08A2A65C;
    return;
L_08A2A65C:
    aot_gpr[23] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[23] = (aot_gpr[21] + aot_gpr[23]);
    goto L_08A2A67C;
L_08A2A67C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A6F4;
      }
      goto L_08A2A684;
    }
L_08A2A684:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A734;
      }
      goto L_08A2A68C;
    }
L_08A2A68C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A2A6A8;
      }
      goto L_08A2A698;
    }
L_08A2A698:
    if (aot_gpr[17] != 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A2A6E4;
    }
    goto L_08A2A6A0;
L_08A2A6A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          goto L_08A2A6E0;
      }
      goto L_08A2A6A8;
    }
L_08A2A6A8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A6C0;
      }
      goto L_08A2A6B0;
    }
L_08A2A6B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(136)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          goto L_08A2A6C8;
      }
      goto L_08A2A6C0;
    }
L_08A2A6C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          goto L_08A2A6E0;
      }
      goto L_08A2A6C8;
    }
L_08A2A6C8:
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A2A6D4u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A6D4u) goto L_08A2A6D4;
    return;
L_08A2A6D4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A2A6E4;
    }
    goto L_08A2A6DC;
L_08A2A6DC:
    aot_gpr[19] = (aot_gpr[23] | 0u);
    goto L_08A2A6E0;
L_08A2A6E0:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A2A6E4;
L_08A2A6E4:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(140));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(140));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A2A67C;
      }
      goto L_08A2A6F4;
    }
L_08A2A6F4:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A734;
      }
      goto L_08A2A6FC;
    }
L_08A2A6FC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A2A710;
      }
      goto L_08A2A704;
    }
L_08A2A704:
    aot_gpr[19] = (aot_gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[19] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08A2A714;
      }
      goto L_08A2A710;
    }
L_08A2A710:
    aot_gpr[17] = (aot_gpr[19] + static_cast<std::uint32_t>(128));
    goto L_08A2A714;
L_08A2A714:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A2A724u);
    aot_gpr[6] = (0u | 129u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A724u) goto L_08A2A724;
    return;
L_08A2A724:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A2A734u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A2A734u) goto L_08A2A734;
    return;
L_08A2A734:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(136), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A764:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    aot_gpr[31] = (0x08A2A79Cu);
    aot_gpr[6] = (0u | 65u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A79Cu) goto L_08A2A79C;
    return;
L_08A2A79C:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A2A7A8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 215u, 0x08A3AB28u>(ctx, &aot_mem) && ctx.pc == 0x08A2A7A8u) goto L_08A2A7A8;
    return;
L_08A2A7A8:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[18] = (aot_gpr[19] + aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[19] + static_cast<std::uint32_t>(128));
    goto L_08A2A7BC;
L_08A2A7BC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A818;
      }
      goto L_08A2A7C4;
    }
L_08A2A7C4:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A818;
      }
      goto L_08A2A7CC;
    }
L_08A2A7CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A2A800;
      }
      goto L_08A2A7D8;
    }
L_08A2A7D8:
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A2A7E4u);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A7E4u) goto L_08A2A7E4;
    return;
L_08A2A7E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A2A800;
      }
      goto L_08A2A7EC;
    }
L_08A2A7EC:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A2A7F8u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A2A7F8u) goto L_08A2A7F8;
    return;
L_08A2A7F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(136), 0u);
    aot_gpr[21] = (0u | 1u);
    goto L_08A2A800;
L_08A2A800:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(140));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(140));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(140));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A2A7BC;
      }
      goto L_08A2A818;
    }
L_08A2A818:
    aot_gpr[2] = (aot_gpr[21] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A840:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 8u);
    aot_gpr[6] = (0u | 140u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A2A864u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-22752));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x08A2A864u) goto L_08A2A864;
    return;
L_08A2A864:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A878:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A2A890u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x08A2A890u) goto L_08A2A890;
    return;
L_08A2A890:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A8A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A2A8B4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08A2A8B4u) goto L_08A2A8B4;
    return;
L_08A2A8B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A8C0:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4616));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A8CC:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[9] = (2217u << 16u);
    aot_gpr[10] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(30372), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(30368), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(30384), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A2A920;
      }
      goto L_08A2A8E8;
    }
L_08A2A8E8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (2211u << 16u);
      if (branch_taken) {
          goto L_08A2A934;
      }
      goto L_08A2A8F0;
    }
L_08A2A8F0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (2201u << 16u);
      if (branch_taken) {
          goto L_08A2A944;
      }
      goto L_08A2A8F8;
    }
L_08A2A8F8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_08A2A904;
      }
      goto L_08A2A900;
    }
L_08A2A900:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(30380), aot_gpr[7]);
    goto L_08A2A904;
L_08A2A904:
    if (static_cast<std::int32_t>(aot_gpr[8]) <= 0) {
    aot_gpr[2] = (0u + 0u);
        goto L_08A2A918;
    }
    goto L_08A2A90C;
L_08A2A90C:
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(30376), aot_gpr[8]);
    aot_gpr[2] = (0u + 0u);
    goto L_08A2A918;
L_08A2A918:
    jump_target = aot_gpr[31];
    aot_gpr[3] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A920:
    aot_gpr[2] = (2211u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-22408));
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(30372), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A2A8F0;
      }
      goto L_08A2A930;
    }
L_08A2A930:
    aot_gpr[2] = (2211u << 16u);
    goto L_08A2A934;
L_08A2A934:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-22368));
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(30368), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A2A8F8;
      }
      goto L_08A2A940;
    }
L_08A2A940:
    aot_gpr[2] = (2201u << 16u);
    goto L_08A2A944;
L_08A2A944:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1340));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(30384), aot_gpr[2]);
    goto L_08A2A8F8;
L_08A2A950:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          goto L_08A2A9E0;
      }
      goto L_08A2A968;
    }
L_08A2A968:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (2217u << 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A2A988;
      }
      goto L_08A2A978;
    }
L_08A2A978:
    aot_gpr[31] = (0x08A2A980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 198u, 0x08997918u>(ctx, &aot_mem) && ctx.pc == 0x08A2A980u) goto L_08A2A980;
    return;
L_08A2A980:
    aot_gpr[31] = (0x08A2A988u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 218u, 0x08997A04u>(ctx, &aot_mem) && ctx.pc == 0x08A2A988u) goto L_08A2A988;
    return;
L_08A2A988:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1060)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A2A9A8;
      }
      goto L_08A2A994;
    }
L_08A2A994:
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(30368)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A2A9A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2A9A4u) goto L_08A2A9A4;
    return;
L_08A2A9A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1060), 0u);
    goto L_08A2A9A8;
L_08A2A9A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1056)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A2A9C4;
      }
      goto L_08A2A9B4;
    }
L_08A2A9B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(30368)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A2A9C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2A9C0u) goto L_08A2A9C0;
    return;
L_08A2A9C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1056), 0u);
    goto L_08A2A9C4;
L_08A2A9C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(30368)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A2A9D0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2A9D0u) goto L_08A2A9D0;
    return;
L_08A2A9D0:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(30388)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(30388), aot_gpr[2]);
    goto L_08A2A9E0;
L_08A2A9E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    aot_gpr[3] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A9FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(30372)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A2AA2Cu);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2AA2Cu) goto L_08A2AA2C;
    return;
L_08A2AA2C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3112));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A2AAE0;
      }
      goto L_08A2AA4C;
    }
L_08A2AA4C:
    aot_gpr[31] = (0x08A2AA54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2AA54u) goto L_08A2AA54;
    return;
L_08A2AA54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(30372)));
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[6] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(30368)));
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(30384)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(30380)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1048), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(30376)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1052), aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(30388)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A2AAA4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(30388), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2AAA4u) goto L_08A2AAA4;
    return;
L_08A2AAA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1056), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(30372)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A2AAB4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(30376)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2AAB4u) goto L_08A2AAB4;
    return;
L_08A2AAB4:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1056)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1060), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2AAFC;
      }
      goto L_08A2AAC8;
    }
L_08A2AAC8:
    aot_gpr[2] = (0u + 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08A2AAFC;
      }
      goto L_08A2AAD4;
    }
L_08A2AAD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_08A2AAE0;
L_08A2AAE0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08A2AAFC:
    aot_gpr[31] = (0x08A2AB04u);
    // nop
    goto L_08A2A950;
L_08A2AB04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2AB28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A2AB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 269u, 0x08997CA8u>(ctx, &aot_mem) && ctx.pc == 0x08A2AB38u) goto L_08A2AB38;
    return;
L_08A2AB38:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(30368), 0u);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(30372), 0u);
    aot_gpr[5] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(30384), 0u);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(30380), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(30376), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2AB74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1060)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08A2AB9Cu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A2AB9Cu) goto L_08A2AB9C;
    return;
L_08A2AB9C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2ABC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A2AC38;
      }
      goto L_08A2AC00;
    }
L_08A2AC00:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    goto L_08A2AC04;
L_08A2AC04:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2AC38:
    aot_gpr[23] = (2217u << 16u);
    aot_gpr[22] = (2217u << 16u);
    goto L_08A2AC60;
L_08A2AC44:
    aot_gpr[31] = (0x08A2AC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 241u, 0x08997B00u>(ctx, &aot_mem) && ctx.pc == 0x08A2AC4Cu) goto L_08A2AC4C;
    return;
L_08A2AC4C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_08A2ACC8;
      }
      goto L_08A2AC54;
    }
L_08A2AC54:
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[21] ? 1u : 0u);
    goto L_08A2AC58;
L_08A2AC58:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A2AC04;
      }
      goto L_08A2AC60;
    }
L_08A2AC60:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(1)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(30372)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(30368)));
    aot_gpr[16] = (aot_gpr[16] << 8u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[4] = (0u + 0u);
    aot_gpr[16] = (aot_gpr[16] << 8u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[31] = (0x08A2AC94u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0404_entry, 404u, 219u, 0x08998F24u>(ctx, &aot_mem) && ctx.pc == 0x08A2AC94u) goto L_08A2AC94;
    return;
L_08A2AC94:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A2ACA8u);
    aot_gpr[18] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0404_entry, 404u, 17u, 0x08998380u>(ctx, &aot_mem) && ctx.pc == 0x08A2ACA8u) goto L_08A2ACA8;
    return;
L_08A2ACA8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (aot_gpr[20] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[16]);
      if (branch_taken) {
          goto L_08A2AC44;
      }
      goto L_08A2ACC0;
    }
L_08A2ACC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    goto L_08A2AC54;
L_08A2ACC8:
    aot_gpr[31] = (0x08A2ACD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0403_entry, 403u, 218u, 0x08997A04u>(ctx, &aot_mem) && ctx.pc == 0x08A2ACD0u) goto L_08A2ACD0;
    return;
L_08A2ACD0:
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[21] ? 1u : 0u);
    goto L_08A2AC58;
L_08A2ACD8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2ACE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A2AD14;
      }
      goto L_08A2AD08;
    }
L_08A2AD08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AD54;
      }
      goto L_08A2AD14;
    }
L_08A2AD14:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(790));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(324));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A2AD7C;
      }
      goto L_08A2AD34;
    }
L_08A2AD34:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2AD54:
    aot_gpr[31] = (0x08A2AD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0551_entry, 551u, 194u, 0x08A2BDF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2AD5Cu) goto L_08A2AD5C;
    return;
L_08A2AD5C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(790));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(324));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A2AD34;
      }
      goto L_08A2AD7C;
    }
L_08A2AD7C:
    aot_gpr[31] = (0x08A2AD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 160u, 0x08A44C68u>(ctx, &aot_mem) && ctx.pc == 0x08A2AD84u) goto L_08A2AD84;
    return;
L_08A2AD84:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2ADA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(148));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(84));
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(35));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[7]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[9]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[6]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[8]));
    aot_gpr[10] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(19), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(23), aot_gpr[11]));
    aot_gpr[12] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(27), aot_gpr[12]));
    aot_gpr[13] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(31), aot_gpr[13]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[7]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[9]));
    aot_gpr[13] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[13]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[8]));
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[11]));
    aot_gpr[12] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[12]));
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[9]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(19), aot_gpr[10]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[10]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(23), aot_gpr[11]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(20), aot_gpr[11]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(27), aot_gpr[12]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[12]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(31), aot_gpr[13]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(28), aot_gpr[13]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(38));
      if (branch_taken) {
          goto L_08A2AE84;
      }
      goto L_08A2AE5C;
    }
L_08A2AE5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[6] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08A2AEB8;
      }
      goto L_08A2AE6C;
    }
L_08A2AE6C:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    goto L_08A2AE70;
L_08A2AE70:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2AE7Cu);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A2AE7Cu) goto L_08A2AE7C;
    return;
L_08A2AE7C:
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(38));
    goto L_08A2AE84;
L_08A2AE84:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(1)));
    aot_gpr[3] = (aot_gpr[3] << 8u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08A2AEB8:
    aot_gpr[31] = (0x08A2AEC0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 158u, 0x08A3A7ECu>(ctx, &aot_mem) && ctx.pc == 0x08A2AEC0u) goto L_08A2AEC0;
    return;
L_08A2AEC0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_08A2AE70;
      }
      goto L_08A2AEC8;
    }
L_08A2AEC8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(17));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A2AE7C;
L_08A2AED4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(436));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[21]);
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(532));
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[16]);
    goto L_08A2AF18;
L_08A2AF18:
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
          goto L_08A2AF18;
      }
      goto L_08A2AF44;
    }
L_08A2AF44:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0551_entry, 551u, 14u, 0x08A2B0D8u>(ctx, &aot_mem); return;
      }
      goto L_08A2AF4C;
    }
L_08A2AF4C:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(4608));
    goto L_08A2AF54;
L_08A2AF54:
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(228));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08A2AF64u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2AF64u) goto L_08A2AF64;
    return;
L_08A2AF64:
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x08A2AF78u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2AF78u) goto L_08A2AF78;
    return;
L_08A2AF78:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08A2AF88u);
    aot_gpr[5] = (aot_gpr[23] + static_cast<std::uint32_t>(4552));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2AF88u) goto L_08A2AF88;
    return;
L_08A2AF88:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08A2AF94u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 46u, 0x0899C96Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2AF94u) goto L_08A2AF94;
    return;
L_08A2AF94:
    aot_gpr[31] = (0x08A2AF9Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 27u, 0x0899C77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2AF9Cu) goto L_08A2AF9C;
    return;
L_08A2AF9C:
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08A2AFB0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2AFB0u) goto L_08A2AFB0;
    return;
L_08A2AFB0:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x08A2AFC0u);
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(4504));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2AFC0u) goto L_08A2AFC0;
    return;
L_08A2AFC0:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08A2AFD0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2AFD0u) goto L_08A2AFD0;
    return;
L_08A2AFD0:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2AFE0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 46u, 0x0899C96Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2AFE0u) goto L_08A2AFE0;
    return;
L_08A2AFE0:
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(340));
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[17] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A2AFEC;
L_08A2AFEC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    ctx.pc = 0x08A2B000u; return;
}

void recomp_unit_0550(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0550_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_550(Runtime &runtime) {
    runtime.register_generated_unit(550u, 0x08A2A000u, 4096u, &recomp_unit_0550, &recomp_unit_0550_entry);
    runtime.register_function(0x08A2A004u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A008u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A00Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A014u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A01Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A024u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A02Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A054u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A070u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A07Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A088u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A098u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A0A0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A0ACu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A0B8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A0C8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A0D0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A0D4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A0E0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A0E8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A0ECu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A104u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A110u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A118u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A124u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A134u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A13Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A144u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A14Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A160u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A168u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A170u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A178u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A180u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A188u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A194u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A19Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A1A4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A1ACu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A1B4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A1BCu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A1C4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A1D4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A1E8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A1F4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A20Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A214u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A220u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A230u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A248u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A264u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A26Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A274u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A284u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A294u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A2A4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A2E0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A2F8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A300u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A30Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A318u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A320u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A32Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A334u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A344u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A350u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A358u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A360u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A370u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A374u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A378u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A39Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A3DCu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A3E4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A3F0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A3FCu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A400u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A40Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A41Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A424u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A42Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A450u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A474u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A47Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A484u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A48Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A498u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A4A0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A4A8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A4B0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A4BCu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A4C4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A4C8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A4DCu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A4E4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A4ECu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A4F4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A4FCu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A508u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A510u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A518u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A524u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A52Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A544u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A54Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A554u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A560u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A568u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A574u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A57Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A594u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A59Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A5A4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A5ACu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A5C4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A5E4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A5F4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A600u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A614u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A650u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A65Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A67Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A684u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A68Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A698u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A6A0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A6A8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A6B0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A6C0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A6C8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A6D4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A6DCu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A6E0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A6E4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A6F4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A6FCu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A704u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A710u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A714u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A724u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A734u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A764u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A79Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A7A8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A7BCu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A7C4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A7CCu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A7D8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A7E4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A7ECu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A7F8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A800u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A818u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A840u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A864u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A878u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A890u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A8A0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A8B4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A8C0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A8CCu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A8E8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A8F0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A8F8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A900u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A904u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A90Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A918u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A920u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A930u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A934u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A940u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A944u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A950u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A968u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A978u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A980u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A988u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A994u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A9A4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A9A8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A9B4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A9C0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A9C4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A9D0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A9E0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2A9FCu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AA2Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AA4Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AA54u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AAA4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AAB4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AAC8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AAD4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AAE0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AAFCu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AB04u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AB28u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AB38u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AB74u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AB9Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2ABC0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AC00u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AC04u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AC38u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AC44u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AC4Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AC54u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AC58u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AC60u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AC94u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2ACA8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2ACC0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2ACC8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2ACD0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2ACD8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2ACE8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AD08u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AD14u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AD34u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AD54u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AD5Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AD7Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AD84u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2ADA4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AE5Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AE6Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AE70u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AE7Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AE84u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AEB8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AEC0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AEC8u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AED4u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AF18u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AF44u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AF4Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AF54u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AF64u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AF78u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AF88u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AF94u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AF9Cu, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AFB0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AFC0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AFD0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AFE0u, &recomp_unit_0550, "recomp_unit_0550");
    runtime.register_function(0x08A2AFECu, &recomp_unit_0550, "recomp_unit_0550");
}
} // namespace psprecomp
