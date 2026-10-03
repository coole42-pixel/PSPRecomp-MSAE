#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0443[1022] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 0,
    8, 0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25,
    0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0,
    35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0,
    167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174,
    0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 199,
    0, 0, 200, 0, 0, 201, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 208, 0, 0, 209, 0, 210,
    0, 0, 211, 0, 212, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227,
    0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0,
    235, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241,
};
void recomp_unit_0443_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089BF004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0443[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089BF004;
    case 2u: goto L_089BF010;
    case 3u: goto L_089BF02C;
    case 4u: goto L_089BF050;
    case 5u: goto L_089BF05C;
    case 6u: goto L_089BF068;
    case 7u: goto L_089BF074;
    case 8u: goto L_089BF084;
    case 9u: goto L_089BF094;
    case 10u: goto L_089BF0A0;
    case 11u: goto L_089BF0AC;
    case 12u: goto L_089BF0B8;
    case 13u: goto L_089BF0C4;
    case 14u: goto L_089BF0D0;
    case 15u: goto L_089BF0DC;
    case 16u: goto L_089BF0E8;
    case 17u: goto L_089BF0F4;
    case 18u: goto L_089BF110;
    case 19u: goto L_089BF134;
    case 20u: goto L_089BF140;
    case 21u: goto L_089BF14C;
    case 22u: goto L_089BF158;
    case 23u: goto L_089BF164;
    case 24u: goto L_089BF170;
    case 25u: goto L_089BF180;
    case 26u: goto L_089BF190;
    case 27u: goto L_089BF1A0;
    case 28u: goto L_089BF1B0;
    case 29u: goto L_089BF1BC;
    case 30u: goto L_089BF1C8;
    case 31u: goto L_089BF1D4;
    case 32u: goto L_089BF1E0;
    case 33u: goto L_089BF1EC;
    case 34u: goto L_089BF1F8;
    case 35u: goto L_089BF204;
    case 36u: goto L_089BF210;
    case 37u: goto L_089BF21C;
    case 38u: goto L_089BF228;
    case 39u: goto L_089BF234;
    case 40u: goto L_089BF240;
    case 41u: goto L_089BF24C;
    case 42u: goto L_089BF268;
    case 43u: goto L_089BF28C;
    case 44u: goto L_089BF298;
    case 45u: goto L_089BF2A4;
    case 46u: goto L_089BF2C0;
    case 47u: goto L_089BF2E4;
    case 48u: goto L_089BF2F0;
    case 49u: goto L_089BF2FC;
    case 50u: goto L_089BF318;
    case 51u: goto L_089BF33C;
    case 52u: goto L_089BF348;
    case 53u: goto L_089BF354;
    case 54u: goto L_089BF370;
    case 55u: goto L_089BF394;
    case 56u: goto L_089BF3A0;
    case 57u: goto L_089BF3AC;
    case 58u: goto L_089BF3B8;
    case 59u: goto L_089BF3C4;
    case 60u: goto L_089BF3E0;
    case 61u: goto L_089BF404;
    case 62u: goto L_089BF410;
    case 63u: goto L_089BF41C;
    case 64u: goto L_089BF42C;
    case 65u: goto L_089BF438;
    case 66u: goto L_089BF444;
    case 67u: goto L_089BF450;
    case 68u: goto L_089BF46C;
    case 69u: goto L_089BF490;
    case 70u: goto L_089BF49C;
    case 71u: goto L_089BF4A8;
    case 72u: goto L_089BF4B4;
    case 73u: goto L_089BF4D0;
    case 74u: goto L_089BF4F4;
    case 75u: goto L_089BF504;
    case 76u: goto L_089BF510;
    case 77u: goto L_089BF51C;
    case 78u: goto L_089BF528;
    case 79u: goto L_089BF538;
    case 80u: goto L_089BF548;
    case 81u: goto L_089BF554;
    case 82u: goto L_089BF560;
    case 83u: goto L_089BF56C;
    case 84u: goto L_089BF578;
    case 85u: goto L_089BF594;
    case 86u: goto L_089BF5B8;
    case 87u: goto L_089BF5C4;
    case 88u: goto L_089BF5D0;
    case 89u: goto L_089BF5DC;
    case 90u: goto L_089BF5EC;
    case 91u: goto L_089BF5FC;
    case 92u: goto L_089BF618;
    case 93u: goto L_089BF624;
    case 94u: goto L_089BF630;
    case 95u: goto L_089BF63C;
    case 96u: goto L_089BF648;
    case 97u: goto L_089BF654;
    case 98u: goto L_089BF668;
    case 99u: goto L_089BF68C;
    case 100u: goto L_089BF698;
    case 101u: goto L_089BF6A4;
    case 102u: goto L_089BF6B0;
    case 103u: goto L_089BF6BC;
    case 104u: goto L_089BF6C8;
    case 105u: goto L_089BF6D4;
    case 106u: goto L_089BF6F0;
    case 107u: goto L_089BF714;
    case 108u: goto L_089BF720;
    case 109u: goto L_089BF72C;
    case 110u: goto L_089BF738;
    case 111u: goto L_089BF744;
    case 112u: goto L_089BF750;
    case 113u: goto L_089BF75C;
    case 114u: goto L_089BF768;
    case 115u: goto L_089BF774;
    case 116u: goto L_089BF790;
    case 117u: goto L_089BF7B4;
    case 118u: goto L_089BF7C0;
    case 119u: goto L_089BF7CC;
    case 120u: goto L_089BF7E8;
    case 121u: goto L_089BF80C;
    case 122u: goto L_089BF818;
    case 123u: goto L_089BF824;
    case 124u: goto L_089BF840;
    case 125u: goto L_089BF864;
    case 126u: goto L_089BF870;
    case 127u: goto L_089BF87C;
    case 128u: goto L_089BF898;
    case 129u: goto L_089BF8BC;
    case 130u: goto L_089BF8C8;
    case 131u: goto L_089BF8D4;
    case 132u: goto L_089BF8E0;
    case 133u: goto L_089BF8FC;
    case 134u: goto L_089BF920;
    case 135u: goto L_089BF92C;
    case 136u: goto L_089BF938;
    case 137u: goto L_089BF944;
    case 138u: goto L_089BF950;
    case 139u: goto L_089BF96C;
    case 140u: goto L_089BF990;
    case 141u: goto L_089BF99C;
    case 142u: goto L_089BF9A8;
    case 143u: goto L_089BF9B4;
    case 144u: goto L_089BF9C0;
    case 145u: goto L_089BF9CC;
    case 146u: goto L_089BF9DC;
    case 147u: goto L_089BF9EC;
    case 148u: goto L_089BFA08;
    case 149u: goto L_089BFA14;
    case 150u: goto L_089BFA20;
    case 151u: goto L_089BFA34;
    case 152u: goto L_089BFA58;
    case 153u: goto L_089BFA64;
    case 154u: goto L_089BFA70;
    case 155u: goto L_089BFA7C;
    case 156u: goto L_089BFA98;
    case 157u: goto L_089BFABC;
    case 158u: goto L_089BFAC8;
    case 159u: goto L_089BFAD4;
    case 160u: goto L_089BFAF0;
    case 161u: goto L_089BFB14;
    case 162u: goto L_089BFB20;
    case 163u: goto L_089BFB2C;
    case 164u: goto L_089BFB48;
    case 165u: goto L_089BFB6C;
    case 166u: goto L_089BFB78;
    case 167u: goto L_089BFB84;
    case 168u: goto L_089BFB90;
    case 169u: goto L_089BFB9C;
    case 170u: goto L_089BFBA8;
    case 171u: goto L_089BFBB4;
    case 172u: goto L_089BFBD0;
    case 173u: goto L_089BFBF4;
    case 174u: goto L_089BFC00;
    case 175u: goto L_089BFC0C;
    case 176u: goto L_089BFC18;
    case 177u: goto L_089BFC24;
    case 178u: goto L_089BFC30;
    case 179u: goto L_089BFC3C;
    case 180u: goto L_089BFC48;
    case 181u: goto L_089BFC64;
    case 182u: goto L_089BFC88;
    case 183u: goto L_089BFC94;
    case 184u: goto L_089BFCA0;
    case 185u: goto L_089BFCAC;
    case 186u: goto L_089BFCB8;
    case 187u: goto L_089BFCC4;
    case 188u: goto L_089BFCD0;
    case 189u: goto L_089BFCDC;
    case 190u: goto L_089BFCF8;
    case 191u: goto L_089BFD1C;
    case 192u: goto L_089BFD28;
    case 193u: goto L_089BFD34;
    case 194u: goto L_089BFD44;
    case 195u: goto L_089BFD50;
    case 196u: goto L_089BFD5C;
    case 197u: goto L_089BFD68;
    case 198u: goto L_089BFD74;
    case 199u: goto L_089BFD80;
    case 200u: goto L_089BFD8C;
    case 201u: goto L_089BFD98;
    case 202u: goto L_089BFD9C;
    case 203u: goto L_089BFDB4;
    case 204u: goto L_089BFDC0;
    case 205u: goto L_089BFDD0;
    case 206u: goto L_089BFDD8;
    case 207u: goto L_089BFDE0;
    case 208u: goto L_089BFDEC;
    case 209u: goto L_089BFDF8;
    case 210u: goto L_089BFE00;
    case 211u: goto L_089BFE0C;
    case 212u: goto L_089BFE14;
    case 213u: goto L_089BFE20;
    case 214u: goto L_089BFE2C;
    case 215u: goto L_089BFE34;
    case 216u: goto L_089BFE40;
    case 217u: goto L_089BFE48;
    case 218u: goto L_089BFE50;
    case 219u: goto L_089BFE58;
    case 220u: goto L_089BFE7C;
    case 221u: goto L_089BFE88;
    case 222u: goto L_089BFE94;
    case 223u: goto L_089BFEA0;
    case 224u: goto L_089BFEAC;
    case 225u: goto L_089BFEBC;
    case 226u: goto L_089BFEDC;
    case 227u: goto L_089BFF00;
    case 228u: goto L_089BFF0C;
    case 229u: goto L_089BFF18;
    case 230u: goto L_089BFF24;
    case 231u: goto L_089BFF30;
    case 232u: goto L_089BFF4C;
    case 233u: goto L_089BFF6C;
    case 234u: goto L_089BFF78;
    case 235u: goto L_089BFF84;
    case 236u: goto L_089BFF90;
    case 237u: goto L_089BFFA0;
    case 238u: goto L_089BFFBC;
    case 239u: goto L_089BFFE0;
    case 240u: goto L_089BFFEC;
    case 241u: goto L_089BFFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089BF004:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF010u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BF010u) goto L_089BF010;
    return;
L_089BF010:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BF02C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF050u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF050u) goto L_089BF050;
    return;
L_089BF050:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF05Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF05Cu) goto L_089BF05C;
    return;
L_089BF05C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF068u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF068u) goto L_089BF068;
    return;
L_089BF068:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF074u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF074u) goto L_089BF074;
    return;
L_089BF074:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089BF084u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF084u) goto L_089BF084;
    return;
L_089BF084:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF094u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF094u) goto L_089BF094;
    return;
L_089BF094:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF0A0u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF0A0u) goto L_089BF0A0;
    return;
L_089BF0A0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF0ACu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF0ACu) goto L_089BF0AC;
    return;
L_089BF0AC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF0B8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(132));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF0B8u) goto L_089BF0B8;
    return;
L_089BF0B8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF0C4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF0C4u) goto L_089BF0C4;
    return;
L_089BF0C4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF0D0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF0D0u) goto L_089BF0D0;
    return;
L_089BF0D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF0DCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF0DCu) goto L_089BF0DC;
    return;
L_089BF0DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF0E8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(148));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF0E8u) goto L_089BF0E8;
    return;
L_089BF0E8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF0F4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF0F4u) goto L_089BF0F4;
    return;
L_089BF0F4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(156));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BF110:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF134u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF134u) goto L_089BF134;
    return;
L_089BF134:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF140u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF140u) goto L_089BF140;
    return;
L_089BF140:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF14Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF14Cu) goto L_089BF14C;
    return;
L_089BF14C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF158u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF158u) goto L_089BF158;
    return;
L_089BF158:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF164u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF164u) goto L_089BF164;
    return;
L_089BF164:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF170u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF170u) goto L_089BF170;
    return;
L_089BF170:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x089BF180u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF180u) goto L_089BF180;
    return;
L_089BF180:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(104));
    aot_gpr[31] = (0x089BF190u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF190u) goto L_089BF190;
    return;
L_089BF190:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(136));
    aot_gpr[31] = (0x089BF1A0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF1A0u) goto L_089BF1A0;
    return;
L_089BF1A0:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF1B0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF1B0u) goto L_089BF1B0;
    return;
L_089BF1B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF1BCu);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF1BCu) goto L_089BF1BC;
    return;
L_089BF1BC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF1C8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(424));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF1C8u) goto L_089BF1C8;
    return;
L_089BF1C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF1D4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(428));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF1D4u) goto L_089BF1D4;
    return;
L_089BF1D4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF1E0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(432));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF1E0u) goto L_089BF1E0;
    return;
L_089BF1E0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF1ECu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(436));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF1ECu) goto L_089BF1EC;
    return;
L_089BF1EC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF1F8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(440));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF1F8u) goto L_089BF1F8;
    return;
L_089BF1F8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF204u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(444));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF204u) goto L_089BF204;
    return;
L_089BF204:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF210u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(448));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF210u) goto L_089BF210;
    return;
L_089BF210:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF21Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(452));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF21Cu) goto L_089BF21C;
    return;
L_089BF21C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF228u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(456));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF228u) goto L_089BF228;
    return;
L_089BF228:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF234u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF234u) goto L_089BF234;
    return;
L_089BF234:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF240u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(464));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF240u) goto L_089BF240;
    return;
L_089BF240:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF24Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(468));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF24Cu) goto L_089BF24C;
    return;
L_089BF24C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(472));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BF268:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF28Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF28Cu) goto L_089BF28C;
    return;
L_089BF28C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF298u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF298u) goto L_089BF298;
    return;
L_089BF298:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF2A4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF2A4u) goto L_089BF2A4;
    return;
L_089BF2A4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BF2C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF2E4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF2E4u) goto L_089BF2E4;
    return;
L_089BF2E4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF2F0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF2F0u) goto L_089BF2F0;
    return;
L_089BF2F0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF2FCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF2FCu) goto L_089BF2FC;
    return;
L_089BF2FC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BF318:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF33Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF33Cu) goto L_089BF33C;
    return;
L_089BF33C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF348u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF348u) goto L_089BF348;
    return;
L_089BF348:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF354u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF354u) goto L_089BF354;
    return;
L_089BF354:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BF370:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF394u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF394u) goto L_089BF394;
    return;
L_089BF394:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF3A0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF3A0u) goto L_089BF3A0;
    return;
L_089BF3A0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF3ACu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF3ACu) goto L_089BF3AC;
    return;
L_089BF3AC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF3B8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF3B8u) goto L_089BF3B8;
    return;
L_089BF3B8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF3C4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF3C4u) goto L_089BF3C4;
    return;
L_089BF3C4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BF3E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF404u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF404u) goto L_089BF404;
    return;
L_089BF404:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF410u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF410u) goto L_089BF410;
    return;
L_089BF410:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF41Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF41Cu) goto L_089BF41C;
    return;
L_089BF41C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF42Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF42Cu) goto L_089BF42C;
    return;
L_089BF42C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF438u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF438u) goto L_089BF438;
    return;
L_089BF438:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF444u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF444u) goto L_089BF444;
    return;
L_089BF444:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF450u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BF450u) goto L_089BF450;
    return;
L_089BF450:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BF46C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF490u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF490u) goto L_089BF490;
    return;
L_089BF490:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF49Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF49Cu) goto L_089BF49C;
    return;
L_089BF49C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF4A8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF4A8u) goto L_089BF4A8;
    return;
L_089BF4A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF4B4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF4B4u) goto L_089BF4B4;
    return;
L_089BF4B4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BF4D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF4F4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF4F4u) goto L_089BF4F4;
    return;
L_089BF4F4:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF504u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF504u) goto L_089BF504;
    return;
L_089BF504:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF510u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF510u) goto L_089BF510;
    return;
L_089BF510:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF51Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF51Cu) goto L_089BF51C;
    return;
L_089BF51C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF528u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF528u) goto L_089BF528;
    return;
L_089BF528:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x089BF538u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF538u) goto L_089BF538;
    return;
L_089BF538:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF548u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF548u) goto L_089BF548;
    return;
L_089BF548:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF554u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF554u) goto L_089BF554;
    return;
L_089BF554:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF560u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(148));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF560u) goto L_089BF560;
    return;
L_089BF560:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF56Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF56Cu) goto L_089BF56C;
    return;
L_089BF56C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF578u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF578u) goto L_089BF578;
    return;
L_089BF578:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(160));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BF594:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF5B8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF5B8u) goto L_089BF5B8;
    return;
L_089BF5B8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF5C4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF5C4u) goto L_089BF5C4;
    return;
L_089BF5C4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF5D0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF5D0u) goto L_089BF5D0;
    return;
L_089BF5D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF5DCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF5DCu) goto L_089BF5DC;
    return;
L_089BF5DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089BF5ECu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF5ECu) goto L_089BF5EC;
    return;
L_089BF5EC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF5FCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF5FCu) goto L_089BF5FC;
    return;
L_089BF5FC:
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(320));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(140));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (0x089BF618u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0438_entry, 438u, 52u, 0x089BA5ACu>(ctx, &aot_mem) && ctx.pc == 0x089BF618u) goto L_089BF618;
    return;
L_089BF618:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF624u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF624u) goto L_089BF624;
    return;
L_089BF624:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF630u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(464));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF630u) goto L_089BF630;
    return;
L_089BF630:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF63Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(468));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF63Cu) goto L_089BF63C;
    return;
L_089BF63C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF648u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(472));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BF648u) goto L_089BF648;
    return;
L_089BF648:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF654u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF654u) goto L_089BF654;
    return;
L_089BF654:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BF668:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF68Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF68Cu) goto L_089BF68C;
    return;
L_089BF68C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF698u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF698u) goto L_089BF698;
    return;
L_089BF698:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF6A4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF6A4u) goto L_089BF6A4;
    return;
L_089BF6A4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF6B0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF6B0u) goto L_089BF6B0;
    return;
L_089BF6B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF6BCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF6BCu) goto L_089BF6BC;
    return;
L_089BF6BC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF6C8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF6C8u) goto L_089BF6C8;
    return;
L_089BF6C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF6D4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BF6D4u) goto L_089BF6D4;
    return;
L_089BF6D4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BF6F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF714u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF714u) goto L_089BF714;
    return;
L_089BF714:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF720u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF720u) goto L_089BF720;
    return;
L_089BF720:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF72Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF72Cu) goto L_089BF72C;
    return;
L_089BF72C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF738u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF738u) goto L_089BF738;
    return;
L_089BF738:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF744u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF744u) goto L_089BF744;
    return;
L_089BF744:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF750u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF750u) goto L_089BF750;
    return;
L_089BF750:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF75Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF75Cu) goto L_089BF75C;
    return;
L_089BF75C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF768u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF768u) goto L_089BF768;
    return;
L_089BF768:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF774u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BF774u) goto L_089BF774;
    return;
L_089BF774:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BF790:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF7B4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF7B4u) goto L_089BF7B4;
    return;
L_089BF7B4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF7C0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF7C0u) goto L_089BF7C0;
    return;
L_089BF7C0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF7CCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF7CCu) goto L_089BF7CC;
    return;
L_089BF7CC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BF7E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF80Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF80Cu) goto L_089BF80C;
    return;
L_089BF80C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF818u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF818u) goto L_089BF818;
    return;
L_089BF818:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF824u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF824u) goto L_089BF824;
    return;
L_089BF824:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BF840:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF864u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF864u) goto L_089BF864;
    return;
L_089BF864:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF870u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF870u) goto L_089BF870;
    return;
L_089BF870:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF87Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF87Cu) goto L_089BF87C;
    return;
L_089BF87C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BF898:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF8BCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF8BCu) goto L_089BF8BC;
    return;
L_089BF8BC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF8C8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF8C8u) goto L_089BF8C8;
    return;
L_089BF8C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF8D4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF8D4u) goto L_089BF8D4;
    return;
L_089BF8D4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF8E0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF8E0u) goto L_089BF8E0;
    return;
L_089BF8E0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BF8FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF920u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF920u) goto L_089BF920;
    return;
L_089BF920:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF92Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF92Cu) goto L_089BF92C;
    return;
L_089BF92C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF938u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF938u) goto L_089BF938;
    return;
L_089BF938:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF944u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF944u) goto L_089BF944;
    return;
L_089BF944:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF950u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF950u) goto L_089BF950;
    return;
L_089BF950:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BF96C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BF990u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF990u) goto L_089BF990;
    return;
L_089BF990:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF99Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BF99Cu) goto L_089BF99C;
    return;
L_089BF99C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF9A8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF9A8u) goto L_089BF9A8;
    return;
L_089BF9A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF9B4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF9B4u) goto L_089BF9B4;
    return;
L_089BF9B4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF9C0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF9C0u) goto L_089BF9C0;
    return;
L_089BF9C0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF9CCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BF9CCu) goto L_089BF9CC;
    return;
L_089BF9CC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x089BF9DCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF9DCu) goto L_089BF9DC;
    return;
L_089BF9DC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BF9ECu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BF9ECu) goto L_089BF9EC;
    return;
L_089BF9EC:
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(328));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(140));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (0x089BFA08u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0438_entry, 438u, 52u, 0x089BA5ACu>(ctx, &aot_mem) && ctx.pc == 0x089BFA08u) goto L_089BFA08;
    return;
L_089BFA08:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFA14u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(468));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BFA14u) goto L_089BFA14;
    return;
L_089BFA14:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFA20u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BFA20u) goto L_089BFA20;
    return;
L_089BFA20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BFA34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BFA58u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFA58u) goto L_089BFA58;
    return;
L_089BFA58:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFA64u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BFA64u) goto L_089BFA64;
    return;
L_089BFA64:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFA70u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFA70u) goto L_089BFA70;
    return;
L_089BFA70:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFA7Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFA7Cu) goto L_089BFA7C;
    return;
L_089BFA7C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BFA98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BFABCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFABCu) goto L_089BFABC;
    return;
L_089BFABC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFAC8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BFAC8u) goto L_089BFAC8;
    return;
L_089BFAC8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFAD4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFAD4u) goto L_089BFAD4;
    return;
L_089BFAD4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BFAF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BFB14u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFB14u) goto L_089BFB14;
    return;
L_089BFB14:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFB20u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BFB20u) goto L_089BFB20;
    return;
L_089BFB20:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFB2Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFB2Cu) goto L_089BFB2C;
    return;
L_089BFB2C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BFB48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BFB6Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFB6Cu) goto L_089BFB6C;
    return;
L_089BFB6C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFB78u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BFB78u) goto L_089BFB78;
    return;
L_089BFB78:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFB84u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFB84u) goto L_089BFB84;
    return;
L_089BFB84:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFB90u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFB90u) goto L_089BFB90;
    return;
L_089BFB90:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFB9Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFB9Cu) goto L_089BFB9C;
    return;
L_089BFB9C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFBA8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFBA8u) goto L_089BFBA8;
    return;
L_089BFBA8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFBB4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFBB4u) goto L_089BFBB4;
    return;
L_089BFBB4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BFBD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BFBF4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFBF4u) goto L_089BFBF4;
    return;
L_089BFBF4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFC00u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BFC00u) goto L_089BFC00;
    return;
L_089BFC00:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFC0Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFC0Cu) goto L_089BFC0C;
    return;
L_089BFC0C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFC18u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFC18u) goto L_089BFC18;
    return;
L_089BFC18:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFC24u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFC24u) goto L_089BFC24;
    return;
L_089BFC24:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFC30u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFC30u) goto L_089BFC30;
    return;
L_089BFC30:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFC3Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFC3Cu) goto L_089BFC3C;
    return;
L_089BFC3C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFC48u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFC48u) goto L_089BFC48;
    return;
L_089BFC48:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BFC64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BFC88u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFC88u) goto L_089BFC88;
    return;
L_089BFC88:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFC94u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BFC94u) goto L_089BFC94;
    return;
L_089BFC94:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFCA0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFCA0u) goto L_089BFCA0;
    return;
L_089BFCA0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFCACu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFCACu) goto L_089BFCAC;
    return;
L_089BFCAC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFCB8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFCB8u) goto L_089BFCB8;
    return;
L_089BFCB8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFCC4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFCC4u) goto L_089BFCC4;
    return;
L_089BFCC4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFCD0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFCD0u) goto L_089BFCD0;
    return;
L_089BFCD0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFCDCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFCDCu) goto L_089BFCDC;
    return;
L_089BFCDC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BFCF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BFD1Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFD1Cu) goto L_089BFD1C;
    return;
L_089BFD1C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BFD28u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFD28u) goto L_089BFD28;
    return;
L_089BFD28:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BFD34u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFD34u) goto L_089BFD34;
    return;
L_089BFD34:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[3] & 4u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089BFE48;
      }
      goto L_089BFD44;
    }
L_089BFD44:
    aot_gpr[2] = (aot_gpr[3] & 8u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089BFE34;
      }
      goto L_089BFD50;
    }
L_089BFD50:
    aot_gpr[2] = (aot_gpr[3] & 16u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(164));
        goto L_089BFE14;
    }
    goto L_089BFD5C;
L_089BFD5C:
    aot_gpr[2] = (aot_gpr[3] & 32u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089BFE00;
      }
      goto L_089BFD68;
    }
L_089BFD68:
    aot_gpr[2] = (aot_gpr[3] & 64u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(552));
        goto L_089BFDD8;
    }
    goto L_089BFD74;
L_089BFD74:
    aot_gpr[2] = (aot_gpr[3] & 128u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(564));
      if (branch_taken) {
          goto L_089BFDB4;
      }
      goto L_089BFD80;
    }
L_089BFD80:
    aot_gpr[2] = (aot_gpr[3] & 256u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089BFD9C;
      }
      goto L_089BFD8C;
    }
L_089BFD8C:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(700));
    aot_gpr[31] = (0x089BFD98u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFD98u) goto L_089BFD98;
    return;
L_089BFD98:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089BFD9C;
L_089BFD9C:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1084));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem); return;
L_089BFDB4:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089BFDC0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFDC0u) goto L_089BFDC0;
    return;
L_089BFDC0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(572));
    aot_gpr[31] = (0x089BFDD0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFDD0u) goto L_089BFDD0;
    return;
L_089BFDD0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_089BFD80;
L_089BFDD8:
    aot_gpr[31] = (0x089BFDE0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFDE0u) goto L_089BFDE0;
    return;
L_089BFDE0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BFDECu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(556));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFDECu) goto L_089BFDEC;
    return;
L_089BFDEC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BFDF8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(560));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFDF8u) goto L_089BFDF8;
    return;
L_089BFDF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_089BFD74;
L_089BFE00:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(296));
    aot_gpr[31] = (0x089BFE0Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFE0Cu) goto L_089BFE0C;
    return;
L_089BFE0C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_089BFD68;
L_089BFE14:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[31] = (0x089BFE20u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFE20u) goto L_089BFE20;
    return;
L_089BFE20:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BFE2Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFE2Cu) goto L_089BFE2C;
    return;
L_089BFE2C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_089BFD5C;
L_089BFE34:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x089BFE40u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFE40u) goto L_089BFE40;
    return;
L_089BFE40:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_089BFD50;
L_089BFE48:
    aot_gpr[31] = (0x089BFE50u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFE50u) goto L_089BFE50;
    return;
L_089BFE50:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_089BFD44;
L_089BFE58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BFE7Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFE7Cu) goto L_089BFE7C;
    return;
L_089BFE7C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFE88u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BFE88u) goto L_089BFE88;
    return;
L_089BFE88:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFE94u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFE94u) goto L_089BFE94;
    return;
L_089BFE94:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFEA0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFEA0u) goto L_089BFEA0;
    return;
L_089BFEA0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BFEACu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFEACu) goto L_089BFEAC;
    return;
L_089BFEAC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x089BFEBCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFEBCu) goto L_089BFEBC;
    return;
L_089BFEBC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BFEDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BFF00u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFF00u) goto L_089BFF00;
    return;
L_089BFF00:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BFF0Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFF0Cu) goto L_089BFF0C;
    return;
L_089BFF0C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BFF18u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(260));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFF18u) goto L_089BFF18;
    return;
L_089BFF18:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BFF24u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(264));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFF24u) goto L_089BFF24;
    return;
L_089BFF24:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BFF30u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(268));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFF30u) goto L_089BFF30;
    return;
L_089BFF30:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(272));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BFF4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BFF6Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFF6Cu) goto L_089BFF6C;
    return;
L_089BFF6C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BFF78u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFF78u) goto L_089BFF78;
    return;
L_089BFF78:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BFF84u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFF84u) goto L_089BFF84;
    return;
L_089BFF84:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BFF90u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFF90u) goto L_089BFF90;
    return;
L_089BFF90:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089BFFA0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFFA0u) goto L_089BFFA0;
    return;
L_089BFFA0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BFFBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(464));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BFFE0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BFFE0u) goto L_089BFFE0;
    return;
L_089BFFE0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BFFECu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(464));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFFECu) goto L_089BFFEC;
    return;
L_089BFFEC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BFFF8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(468));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BFFF8u) goto L_089BFFF8;
    return;
L_089BFFF8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0004u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(472));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0443(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0443_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_443(Runtime &runtime) {
    runtime.register_generated_unit(443u, 0x089BF000u, 4096u, &recomp_unit_0443, &recomp_unit_0443_entry);
    runtime.register_function(0x089BF004u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF010u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF02Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF050u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF05Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF068u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF074u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF084u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF094u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF0A0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF0ACu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF0B8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF0C4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF0D0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF0DCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF0E8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF0F4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF110u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF134u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF140u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF14Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF158u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF164u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF170u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF180u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF190u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF1A0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF1B0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF1BCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF1C8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF1D4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF1E0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF1ECu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF1F8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF204u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF210u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF21Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF228u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF234u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF240u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF24Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF268u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF28Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF298u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF2A4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF2C0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF2E4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF2F0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF2FCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF318u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF33Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF348u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF354u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF370u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF394u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF3A0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF3ACu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF3B8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF3C4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF3E0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF404u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF410u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF41Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF42Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF438u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF444u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF450u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF46Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF490u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF49Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF4A8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF4B4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF4D0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF4F4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF504u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF510u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF51Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF528u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF538u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF548u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF554u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF560u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF56Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF578u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF594u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF5B8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF5C4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF5D0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF5DCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF5ECu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF5FCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF618u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF624u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF630u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF63Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF648u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF654u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF668u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF68Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF698u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF6A4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF6B0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF6BCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF6C8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF6D4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF6F0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF714u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF720u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF72Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF738u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF744u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF750u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF75Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF768u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF774u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF790u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF7B4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF7C0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF7CCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF7E8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF80Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF818u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF824u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF840u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF864u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF870u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF87Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF898u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF8BCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF8C8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF8D4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF8E0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF8FCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF920u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF92Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF938u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF944u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF950u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF96Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF990u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF99Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF9A8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF9B4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF9C0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF9CCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF9DCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BF9ECu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFA08u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFA14u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFA20u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFA34u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFA58u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFA64u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFA70u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFA7Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFA98u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFABCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFAC8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFAD4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFAF0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFB14u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFB20u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFB2Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFB48u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFB6Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFB78u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFB84u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFB90u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFB9Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFBA8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFBB4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFBD0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFBF4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFC00u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFC0Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFC18u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFC24u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFC30u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFC3Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFC48u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFC64u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFC88u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFC94u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFCA0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFCACu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFCB8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFCC4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFCD0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFCDCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFCF8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFD1Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFD28u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFD34u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFD44u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFD50u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFD5Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFD68u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFD74u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFD80u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFD8Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFD98u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFD9Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFDB4u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFDC0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFDD0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFDD8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFDE0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFDECu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFDF8u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFE00u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFE0Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFE14u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFE20u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFE2Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFE34u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFE40u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFE48u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFE50u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFE58u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFE7Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFE88u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFE94u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFEA0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFEACu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFEBCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFEDCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFF00u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFF0Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFF18u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFF24u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFF30u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFF4Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFF6Cu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFF78u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFF84u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFF90u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFFA0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFFBCu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFFE0u, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFFECu, &recomp_unit_0443, "recomp_unit_0443");
    runtime.register_function(0x089BFFF8u, &recomp_unit_0443, "recomp_unit_0443");
}
} // namespace psprecomp
