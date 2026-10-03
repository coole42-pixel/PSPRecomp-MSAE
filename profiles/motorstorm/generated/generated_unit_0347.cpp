#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0347[1022] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 16, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 0,
    0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 44, 45, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48,
    0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0,
    56, 0, 0, 0, 57, 0, 58, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 68, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 80, 0, 81, 0, 0, 82, 0, 0, 83,
    0, 84, 85, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0,
    0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 103,
    0, 0, 104, 0, 105, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111,
    0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116,
    0, 0, 117, 0, 0, 0, 118, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0,
    0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 163, 0, 164, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0,
    0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186,
    0, 187, 0, 188, 0, 189, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0,
    199, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 219, 0, 220, 0,
    221, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0,
    230, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 234, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 248, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0,
    0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 0, 257, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0,
    263, 0, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269,
};
void recomp_unit_0347_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0895F004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0347[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0895F004;
    case 2u: goto L_0895F018;
    case 3u: goto L_0895F024;
    case 4u: goto L_0895F034;
    case 5u: goto L_0895F040;
    case 6u: goto L_0895F050;
    case 7u: goto L_0895F05C;
    case 8u: goto L_0895F070;
    case 9u: goto L_0895F090;
    case 10u: goto L_0895F0AC;
    case 11u: goto L_0895F0C4;
    case 12u: goto L_0895F0D0;
    case 13u: goto L_0895F0D8;
    case 14u: goto L_0895F0EC;
    case 15u: goto L_0895F0F4;
    case 16u: goto L_0895F0FC;
    case 17u: goto L_0895F114;
    case 18u: goto L_0895F12C;
    case 19u: goto L_0895F13C;
    case 20u: goto L_0895F150;
    case 21u: goto L_0895F158;
    case 22u: goto L_0895F160;
    case 23u: goto L_0895F168;
    case 24u: goto L_0895F170;
    case 25u: goto L_0895F178;
    case 26u: goto L_0895F18C;
    case 27u: goto L_0895F194;
    case 28u: goto L_0895F1A0;
    case 29u: goto L_0895F1B0;
    case 30u: goto L_0895F1CC;
    case 31u: goto L_0895F1EC;
    case 32u: goto L_0895F1F8;
    case 33u: goto L_0895F200;
    case 34u: goto L_0895F214;
    case 35u: goto L_0895F228;
    case 36u: goto L_0895F230;
    case 37u: goto L_0895F24C;
    case 38u: goto L_0895F25C;
    case 39u: goto L_0895F270;
    case 40u: goto L_0895F290;
    case 41u: goto L_0895F2B4;
    case 42u: goto L_0895F2C0;
    case 43u: goto L_0895F2CC;
    case 44u: goto L_0895F2D4;
    case 45u: goto L_0895F2D8;
    case 46u: goto L_0895F2DC;
    case 47u: goto L_0895F2F8;
    case 48u: goto L_0895F300;
    case 49u: goto L_0895F310;
    case 50u: goto L_0895F31C;
    case 51u: goto L_0895F344;
    case 52u: goto L_0895F354;
    case 53u: goto L_0895F360;
    case 54u: goto L_0895F370;
    case 55u: goto L_0895F37C;
    case 56u: goto L_0895F384;
    case 57u: goto L_0895F394;
    case 58u: goto L_0895F39C;
    case 59u: goto L_0895F3A8;
    case 60u: goto L_0895F3AC;
    case 61u: goto L_0895F3C8;
    case 62u: goto L_0895F3E4;
    case 63u: goto L_0895F3F0;
    case 64u: goto L_0895F400;
    case 65u: goto L_0895F408;
    case 66u: goto L_0895F428;
    case 67u: goto L_0895F434;
    case 68u: goto L_0895F43C;
    case 69u: goto L_0895F440;
    case 70u: goto L_0895F454;
    case 71u: goto L_0895F488;
    case 72u: goto L_0895F498;
    case 73u: goto L_0895F4A4;
    case 74u: goto L_0895F4AC;
    case 75u: goto L_0895F4B4;
    case 76u: goto L_0895F4BC;
    case 77u: goto L_0895F4C8;
    case 78u: goto L_0895F4D4;
    case 79u: goto L_0895F4DC;
    case 80u: goto L_0895F4E0;
    case 81u: goto L_0895F4E8;
    case 82u: goto L_0895F4F4;
    case 83u: goto L_0895F500;
    case 84u: goto L_0895F508;
    case 85u: goto L_0895F50C;
    case 86u: goto L_0895F514;
    case 87u: goto L_0895F530;
    case 88u: goto L_0895F538;
    case 89u: goto L_0895F540;
    case 90u: goto L_0895F550;
    case 91u: goto L_0895F55C;
    case 92u: goto L_0895F57C;
    case 93u: goto L_0895F590;
    case 94u: goto L_0895F598;
    case 95u: goto L_0895F5A8;
    case 96u: goto L_0895F5B0;
    case 97u: goto L_0895F5B8;
    case 98u: goto L_0895F5C4;
    case 99u: goto L_0895F5CC;
    case 100u: goto L_0895F5E8;
    case 101u: goto L_0895F5F0;
    case 102u: goto L_0895F5F8;
    case 103u: goto L_0895F600;
    case 104u: goto L_0895F60C;
    case 105u: goto L_0895F614;
    case 106u: goto L_0895F618;
    case 107u: goto L_0895F630;
    case 108u: goto L_0895F648;
    case 109u: goto L_0895F654;
    case 110u: goto L_0895F670;
    case 111u: goto L_0895F680;
    case 112u: goto L_0895F688;
    case 113u: goto L_0895F69C;
    case 114u: goto L_0895F6CC;
    case 115u: goto L_0895F6E4;
    case 116u: goto L_0895F700;
    case 117u: goto L_0895F70C;
    case 118u: goto L_0895F71C;
    case 119u: goto L_0895F720;
    case 120u: goto L_0895F728;
    case 121u: goto L_0895F734;
    case 122u: goto L_0895F754;
    case 123u: goto L_0895F75C;
    case 124u: goto L_0895F778;
    case 125u: goto L_0895F790;
    case 126u: goto L_0895F79C;
    case 127u: goto L_0895F7B0;
    case 128u: goto L_0895F7C8;
    case 129u: goto L_0895F7D4;
    case 130u: goto L_0895F7F0;
    case 131u: goto L_0895F808;
    case 132u: goto L_0895F814;
    case 133u: goto L_0895F828;
    case 134u: goto L_0895F840;
    case 135u: goto L_0895F84C;
    case 136u: goto L_0895F868;
    case 137u: goto L_0895F880;
    case 138u: goto L_0895F88C;
    case 139u: goto L_0895F8B4;
    case 140u: goto L_0895F8BC;
    case 141u: goto L_0895F8C4;
    case 142u: goto L_0895F8CC;
    case 143u: goto L_0895F8D4;
    case 144u: goto L_0895F8E4;
    case 145u: goto L_0895F8F4;
    case 146u: goto L_0895F908;
    case 147u: goto L_0895F920;
    case 148u: goto L_0895F928;
    case 149u: goto L_0895F930;
    case 150u: goto L_0895F93C;
    case 151u: goto L_0895F948;
    case 152u: goto L_0895F95C;
    case 153u: goto L_0895F968;
    case 154u: goto L_0895F984;
    case 155u: goto L_0895F994;
    case 156u: goto L_0895F9AC;
    case 157u: goto L_0895F9B4;
    case 158u: goto L_0895F9C0;
    case 159u: goto L_0895F9C8;
    case 160u: goto L_0895F9E4;
    case 161u: goto L_0895F9F0;
    case 162u: goto L_0895FA14;
    case 163u: goto L_0895FA18;
    case 164u: goto L_0895FA20;
    case 165u: goto L_0895FA24;
    case 166u: goto L_0895FA40;
    case 167u: goto L_0895FA50;
    case 168u: goto L_0895FA64;
    case 169u: goto L_0895FA7C;
    case 170u: goto L_0895FA88;
    case 171u: goto L_0895FA9C;
    case 172u: goto L_0895FAA4;
    case 173u: goto L_0895FAAC;
    case 174u: goto L_0895FAC0;
    case 175u: goto L_0895FAD0;
    case 176u: goto L_0895FAD8;
    case 177u: goto L_0895FAF0;
    case 178u: goto L_0895FB10;
    case 179u: goto L_0895FB1C;
    case 180u: goto L_0895FB48;
    case 181u: goto L_0895FB58;
    case 182u: goto L_0895FB60;
    case 183u: goto L_0895FB68;
    case 184u: goto L_0895FB70;
    case 185u: goto L_0895FB78;
    case 186u: goto L_0895FB80;
    case 187u: goto L_0895FB88;
    case 188u: goto L_0895FB90;
    case 189u: goto L_0895FB98;
    case 190u: goto L_0895FBA8;
    case 191u: goto L_0895FBB0;
    case 192u: goto L_0895FBB8;
    case 193u: goto L_0895FBC8;
    case 194u: goto L_0895FBD0;
    case 195u: goto L_0895FBD8;
    case 196u: goto L_0895FBEC;
    case 197u: goto L_0895FBF4;
    case 198u: goto L_0895FBFC;
    case 199u: goto L_0895FC04;
    case 200u: goto L_0895FC0C;
    case 201u: goto L_0895FC14;
    case 202u: goto L_0895FC24;
    case 203u: goto L_0895FC38;
    case 204u: goto L_0895FC40;
    case 205u: goto L_0895FC50;
    case 206u: goto L_0895FC60;
    case 207u: goto L_0895FC68;
    case 208u: goto L_0895FC70;
    case 209u: goto L_0895FC78;
    case 210u: goto L_0895FC80;
    case 211u: goto L_0895FC94;
    case 212u: goto L_0895FCAC;
    case 213u: goto L_0895FCB4;
    case 214u: goto L_0895FCC0;
    case 215u: goto L_0895FCD0;
    case 216u: goto L_0895FCD8;
    case 217u: goto L_0895FCE4;
    case 218u: goto L_0895FCEC;
    case 219u: goto L_0895FCF4;
    case 220u: goto L_0895FCFC;
    case 221u: goto L_0895FD04;
    case 222u: goto L_0895FD0C;
    case 223u: goto L_0895FD18;
    case 224u: goto L_0895FD34;
    case 225u: goto L_0895FD50;
    case 226u: goto L_0895FD58;
    case 227u: goto L_0895FD60;
    case 228u: goto L_0895FD70;
    case 229u: goto L_0895FD78;
    case 230u: goto L_0895FD84;
    case 231u: goto L_0895FD88;
    case 232u: goto L_0895FDA0;
    case 233u: goto L_0895FDB0;
    case 234u: goto L_0895FDB8;
    case 235u: goto L_0895FDBC;
    case 236u: goto L_0895FDCC;
    case 237u: goto L_0895FE04;
    case 238u: goto L_0895FE10;
    case 239u: goto L_0895FE20;
    case 240u: goto L_0895FE44;
    case 241u: goto L_0895FE4C;
    case 242u: goto L_0895FE60;
    case 243u: goto L_0895FE84;
    case 244u: goto L_0895FEA8;
    case 245u: goto L_0895FEBC;
    case 246u: goto L_0895FEC4;
    case 247u: goto L_0895FECC;
    case 248u: goto L_0895FED4;
    case 249u: goto L_0895FED8;
    case 250u: goto L_0895FEE8;
    case 251u: goto L_0895FF08;
    case 252u: goto L_0895FF10;
    case 253u: goto L_0895FF18;
    case 254u: goto L_0895FF20;
    case 255u: goto L_0895FF28;
    case 256u: goto L_0895FF30;
    case 257u: goto L_0895FF3C;
    case 258u: goto L_0895FF40;
    case 259u: goto L_0895FF50;
    case 260u: goto L_0895FF60;
    case 261u: goto L_0895FF74;
    case 262u: goto L_0895FF7C;
    case 263u: goto L_0895FF84;
    case 264u: goto L_0895FF94;
    case 265u: goto L_0895FF9C;
    case 266u: goto L_0895FFAC;
    case 267u: goto L_0895FFBC;
    case 268u: goto L_0895FFE0;
    case 269u: goto L_0895FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0895F004:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895F018u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 238u, 0x0895EF20u>(ctx, &aot_mem) && ctx.pc == 0x0895F018u) goto L_0895F018;
    return;
L_0895F018:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F024:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895F034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x0895F034u) goto L_0895F034;
    return;
L_0895F034:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F040:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895F050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F050u) goto L_0895F050;
    return;
L_0895F050:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F05C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0895F070u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 53u, 0x08A032C0u>(ctx, &aot_mem) && ctx.pc == 0x0895F070u) goto L_0895F070;
    return;
L_0895F070:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4112));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F090:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0895F0D8;
      }
      goto L_0895F0AC;
    }
L_0895F0AC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4112));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0895F0C4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 54u, 0x08A032E0u>(ctx, &aot_mem) && ctx.pc == 0x0895F0C4u) goto L_0895F0C4;
    return;
L_0895F0C4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F0D8;
      }
      goto L_0895F0D0;
    }
L_0895F0D0:
    aot_gpr[31] = (0x0895F0D8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0895F040;
L_0895F0D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F0EC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F0F4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F0FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0895F114u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(23464));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 167u, 0x089EEDB8u>(ctx, &aot_mem) && ctx.pc == 0x0895F114u) goto L_0895F114;
    return;
L_0895F114:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0895F12Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895F12Cu) goto L_0895F12C;
    return;
L_0895F12C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0895F13Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-23352));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0895F13Cu) goto L_0895F13C;
    return;
L_0895F13C:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F150:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F158:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F160:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F168:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F170:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F178:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0895F18Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x0895F18Cu) goto L_0895F18C;
    return;
L_0895F18C:
    aot_gpr[31] = (0x0895F194u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F194u) goto L_0895F194;
    return;
L_0895F194:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0895F1A0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x0895F1A0u) goto L_0895F1A0;
    return;
L_0895F1A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F1B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0895F200;
      }
      goto L_0895F1CC;
    }
L_0895F1CC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4200));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28384), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0895F1ECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F1ECu) goto L_0895F1EC;
    return;
L_0895F1EC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F200;
      }
      goto L_0895F1F8;
    }
L_0895F1F8:
    aot_gpr[31] = (0x0895F200u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0895F178;
L_0895F200:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F214:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0895F228u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x0895F228u) goto L_0895F228;
    return;
L_0895F228:
    aot_gpr[31] = (0x0895F230u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F230u) goto L_0895F230;
    return;
L_0895F230:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 58u);
    aot_gpr[31] = (0x0895F24Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-23104));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x0895F24Cu) goto L_0895F24C;
    return;
L_0895F24C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F25C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0895F270u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x0895F270u) goto L_0895F270;
    return;
L_0895F270:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4200));
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
L_0895F290:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28384)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F2DC;
      }
      goto L_0895F2B4;
    }
L_0895F2B4:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x0895F2C0u);
    aot_gpr[4] = (0u | 8u);
    goto L_0895F214;
L_0895F2C0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F2D8;
      }
      goto L_0895F2CC;
    }
L_0895F2CC:
    aot_gpr[31] = (0x0895F2D4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F25C;
L_0895F2D4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0895F2D8;
L_0895F2D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28384), aot_gpr[17]);
    goto L_0895F2DC;
L_0895F2DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28384)));
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
L_0895F2F8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F300:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895F310u);
    // nop
    goto L_0895F290;
L_0895F310:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F31C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0895F344u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x0895F344u) goto L_0895F344;
    return;
L_0895F344:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0895F354u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895F354u) goto L_0895F354;
    return;
L_0895F354:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F3A8;
      }
      goto L_0895F360;
    }
L_0895F360:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-28380));
    aot_gpr[18] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0895F370;
L_0895F370:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0895F37Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0895F37Cu) goto L_0895F37C;
    return;
L_0895F37C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F39C;
      }
      goto L_0895F384;
    }
L_0895F384:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895F370;
      }
      goto L_0895F394;
    }
L_0895F394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F3A8;
      }
      goto L_0895F39C;
    }
L_0895F39C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0895F3AC;
      }
      goto L_0895F3A8;
    }
L_0895F3A8:
    aot_gpr[2] = (0u | 0u);
    goto L_0895F3AC;
L_0895F3AC:
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
L_0895F3C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0895F3E4u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x0895F3E4u) goto L_0895F3E4;
    return;
L_0895F3E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0895F3F0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895F3F0u) goto L_0895F3F0;
    return;
L_0895F3F0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0895F400u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-23060));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F400u) goto L_0895F400;
    return;
L_0895F400:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F43C;
      }
      goto L_0895F408;
    }
L_0895F408:
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0895F428u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-23052));
    goto L_0895F31C;
L_0895F428:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F43C;
      }
      goto L_0895F434;
    }
L_0895F434:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0895F440;
      }
      goto L_0895F43C;
    }
L_0895F43C:
    aot_gpr[2] = (0u | 0u);
    goto L_0895F440;
L_0895F440:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F454:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0895F488u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-23052));
    goto L_0895F31C;
L_0895F488:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 18 ? 1u : 0u);
        goto L_0895F4AC;
    }
    goto L_0895F498;
L_0895F498:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F514;
      }
      goto L_0895F4A4;
    }
L_0895F4A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F4BC;
      }
      goto L_0895F4AC;
    }
L_0895F4AC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F4E8;
      }
      goto L_0895F4B4;
    }
L_0895F4B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F514;
      }
      goto L_0895F4BC;
    }
L_0895F4BC:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[31] = (0x0895F4C8u);
    aot_gpr[4] = (0u | 296u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 197u, 0x08960B6Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F4C8u) goto L_0895F4C8;
    return;
L_0895F4C8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_0895F4E0;
      }
      goto L_0895F4D4;
    }
L_0895F4D4:
    aot_gpr[31] = (0x0895F4DCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 171u, 0x089609C4u>(ctx, &aot_mem) && ctx.pc == 0x0895F4DCu) goto L_0895F4DC;
    return;
L_0895F4DC:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_0895F4E0;
L_0895F4E0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
      if (branch_taken) {
          goto L_0895F514;
      }
      goto L_0895F4E8;
    }
L_0895F4E8:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[31] = (0x0895F4F4u);
    aot_gpr[4] = (0u | 296u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 158u, 0x08960950u>(ctx, &aot_mem) && ctx.pc == 0x0895F4F4u) goto L_0895F4F4;
    return;
L_0895F4F4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_0895F50C;
      }
      goto L_0895F500;
    }
L_0895F500:
    aot_gpr[31] = (0x0895F508u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 139u, 0x08960800u>(ctx, &aot_mem) && ctx.pc == 0x0895F508u) goto L_0895F508;
    return;
L_0895F508:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_0895F50C;
L_0895F50C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
      if (branch_taken) {
          goto L_0895F514;
      }
      goto L_0895F514;
    }
L_0895F514:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F530:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F538:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F540:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895F550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F550u) goto L_0895F550;
    return;
L_0895F550:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F55C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(260), 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0895F57Cu);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F57Cu) goto L_0895F57C;
    return;
L_0895F57C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F590:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F598:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_0895F5B8;
      }
      goto L_0895F5A8;
    }
L_0895F5A8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F5B8;
      }
      goto L_0895F5B0;
    }
L_0895F5B0:
    aot_gpr[31] = (0x0895F5B8u);
    // nop
    goto L_0895F540;
L_0895F5B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F5C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(260)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F5CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0895F618;
      }
      goto L_0895F5E8;
    }
L_0895F5E8:
    aot_gpr[31] = (0x0895F5F0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F590;
L_0895F5F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F60C;
      }
      goto L_0895F5F8;
    }
L_0895F5F8:
    aot_gpr[31] = (0x0895F600u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F590;
L_0895F600:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0895F60Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0895F60Cu) goto L_0895F60C;
    return;
L_0895F60C:
    aot_gpr[31] = (0x0895F614u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F5C4;
L_0895F614:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(260), aot_gpr[2]);
    goto L_0895F618;
L_0895F618:
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
L_0895F630:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895F648u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(288));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 138u, 0x0896299Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F648u) goto L_0895F648;
    return;
L_0895F648:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F654:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0895F670u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    goto L_0895F55C;
L_0895F670:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(280), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(284), 0u);
    aot_gpr[31] = (0x0895F680u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(288));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0895F680u) goto L_0895F680;
    return;
L_0895F680:
    aot_gpr[31] = (0x0895F688u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F630;
L_0895F688:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F69C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0895F6CCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0895F5CC;
L_0895F6CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(268)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(280), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(272)));
    aot_gpr[31] = (0x0895F6E4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(284), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x0895F6E4u) goto L_0895F6E4;
    return;
L_0895F6E4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F700:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F720;
      }
      goto L_0895F70C;
    }
L_0895F70C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(280)));
    aot_gpr[5] = (0u | 3u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 4u);
        goto L_0895F71C;
    }
    goto L_0895F71C;
L_0895F71C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0895F720;
L_0895F720:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F728:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_0895F754;
      }
      goto L_0895F734;
    }
L_0895F734:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(288));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_0895F754;
L_0895F754:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F75C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0895F790;
      }
      goto L_0895F778;
    }
L_0895F778:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(288));
    aot_gpr[31] = (0x0895F790u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 142u, 0x089629F0u>(ctx, &aot_mem) && ctx.pc == 0x0895F790u) goto L_0895F790;
    return;
L_0895F790:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F79C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F7C8;
      }
      goto L_0895F7B0;
    }
L_0895F7B0:
    aot_gpr[6] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0895F7C8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(288));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 146u, 0x08962A68u>(ctx, &aot_mem) && ctx.pc == 0x0895F7C8u) goto L_0895F7C8;
    return;
L_0895F7C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F7D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0895F808;
      }
      goto L_0895F7F0;
    }
L_0895F7F0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(288));
    aot_gpr[31] = (0x0895F808u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 150u, 0x08962AE0u>(ctx, &aot_mem) && ctx.pc == 0x0895F808u) goto L_0895F808;
    return;
L_0895F808:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F814:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F840;
      }
      goto L_0895F828;
    }
L_0895F828:
    aot_gpr[6] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0895F840u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(288));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F840u) goto L_0895F840;
    return;
L_0895F840:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F84C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0895F880;
      }
      goto L_0895F868;
    }
L_0895F868:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(288));
    aot_gpr[31] = (0x0895F880u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 154u, 0x08962B58u>(ctx, &aot_mem) && ctx.pc == 0x0895F880u) goto L_0895F880;
    return;
L_0895F880:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F88C:
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(288));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F8B4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F8BC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F8C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F8CC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F8D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_0895F930;
      }
      goto L_0895F8E4;
    }
L_0895F8E4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4264));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(476), aot_gpr[6]);
      if (branch_taken) {
          goto L_0895F930;
      }
      goto L_0895F8F4;
    }
L_0895F8F4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F928;
      }
      goto L_0895F908;
    }
L_0895F908:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0895F920u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895F920u) goto L_0895F920;
    return;
L_0895F920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F930;
      }
      goto L_0895F928;
    }
L_0895F928:
    aot_gpr[31] = (0x0895F930u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0895F930u) goto L_0895F930;
    return;
L_0895F930:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F93C:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28304)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F948:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895F95Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28304), aot_gpr[4]);
    goto L_0895F630;
L_0895F95C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F968:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0895F984u);
    aot_gpr[17] = (0u | 0u);
    goto L_0895F8C4;
L_0895F984:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA20;
      }
      goto L_0895F994;
    }
L_0895F994:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0895F9ACu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895F9ACu) goto L_0895F9AC;
    return;
L_0895F9AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA24;
      }
      goto L_0895F9B4;
    }
L_0895F9B4:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x0895F9C0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_0895F590;
L_0895F9C0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA18;
      }
      goto L_0895F9C8;
    }
L_0895F9C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x0895F9E4u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    goto L_0895F590;
L_0895F9E4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0895F9F0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    goto L_0895F5C4;
L_0895F9F0:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0895FA14u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895FA14u) goto L_0895FA14;
    return;
L_0895FA14:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_0895FA18;
L_0895FA18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA24;
      }
      goto L_0895FA20;
    }
L_0895FA20:
    aot_gpr[17] = (0u | 1u);
    goto L_0895FA24;
L_0895FA24:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_0895FA40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895FA50u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_0895F8BC;
L_0895FA50:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA7C;
      }
      goto L_0895FA64;
    }
L_0895FA64:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0895FA7Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895FA7Cu) goto L_0895FA7C;
    return;
L_0895FA7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FA88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0895FA9Cu);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_0895F8B4;
L_0895FA9C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FB10;
      }
      goto L_0895FAA4;
    }
L_0895FAA4:
    aot_gpr[31] = (0x0895FAACu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_0895F8CC;
L_0895FAAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(300)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FB10;
      }
      goto L_0895FAC0;
    }
L_0895FAC0:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[31] = (0x0895FAD0u);
    aot_gpr[5] = (0u | 13u);
    goto L_0895F79C;
L_0895FAD0:
    aot_gpr[31] = (0x0895FAD8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0895F8BC;
L_0895FAD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FB10;
      }
      goto L_0895FAF0;
    }
L_0895FAF0:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 13u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0895FB10u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895FB10u) goto L_0895FB10;
    return;
L_0895FB10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FB1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0895FB48u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    goto L_0895F8B4;
L_0895FB48:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_0895FC04;
      }
      goto L_0895FB58;
    }
L_0895FB58:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0895FBB8;
      }
      goto L_0895FB60;
    }
L_0895FB60:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895FB78;
      }
      goto L_0895FB68;
    }
L_0895FB68:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC78;
      }
      goto L_0895FB70;
    }
L_0895FB70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FD18;
      }
      goto L_0895FB78;
    }
L_0895FB78:
    aot_gpr[31] = (0x0895FB80u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F968;
L_0895FB80:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FBB0;
      }
      goto L_0895FB88;
    }
L_0895FB88:
    aot_gpr[31] = (0x0895FB90u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895FA40;
L_0895FB90:
    aot_gpr[31] = (0x0895FB98u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F630;
L_0895FB98:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    aot_gpr[31] = (0x0895FBA8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 255u, 0x0895EFF4u>(ctx, &aot_mem) && ctx.pc == 0x0895FBA8u) goto L_0895FBA8;
    return;
L_0895FBA8:
    aot_gpr[31] = (0x0895FBB0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 253u, 0x0895EFE4u>(ctx, &aot_mem) && ctx.pc == 0x0895FBB0u) goto L_0895FBB0;
    return;
L_0895FBB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FD18;
      }
      goto L_0895FBB8;
    }
L_0895FBB8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    aot_gpr[31] = (0x0895FBC8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 255u, 0x0895EFF4u>(ctx, &aot_mem) && ctx.pc == 0x0895FBC8u) goto L_0895FBC8;
    return;
L_0895FBC8:
    aot_gpr[31] = (0x0895FBD0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 253u, 0x0895EFE4u>(ctx, &aot_mem) && ctx.pc == 0x0895FBD0u) goto L_0895FBD0;
    return;
L_0895FBD0:
    aot_gpr[31] = (0x0895FBD8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F8C4;
L_0895FBD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(272)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(268)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(288));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0895FBECu);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895FBECu) goto L_0895FBEC;
    return;
L_0895FBEC:
    aot_gpr[31] = (0x0895FBF4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895FA40;
L_0895FBF4:
    aot_gpr[31] = (0x0895FBFCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F630;
L_0895FBFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FD18;
      }
      goto L_0895FC04;
    }
L_0895FC04:
    aot_gpr[31] = (0x0895FC0Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895FA40;
L_0895FC0C:
    aot_gpr[31] = (0x0895FC14u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F8C4;
L_0895FC14:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC40;
      }
      goto L_0895FC24;
    }
L_0895FC24:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(272)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(288));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0895FC38u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895FC38u) goto L_0895FC38;
    return;
L_0895FC38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC50;
      }
      goto L_0895FC40;
    }
L_0895FC40:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0895FC50u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    goto L_0895F88C;
L_0895FC50:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    aot_gpr[31] = (0x0895FC60u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 255u, 0x0895EFF4u>(ctx, &aot_mem) && ctx.pc == 0x0895FC60u) goto L_0895FC60;
    return;
L_0895FC60:
    aot_gpr[31] = (0x0895FC68u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 253u, 0x0895EFE4u>(ctx, &aot_mem) && ctx.pc == 0x0895FC68u) goto L_0895FC68;
    return;
L_0895FC68:
    aot_gpr[31] = (0x0895FC70u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F630;
L_0895FC70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FD18;
      }
      goto L_0895FC78;
    }
L_0895FC78:
    aot_gpr[31] = (0x0895FC80u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F8BC;
L_0895FC80:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 36u);
      if (branch_taken) {
          goto L_0895FCAC;
      }
      goto L_0895FC94;
    }
L_0895FC94:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0895FCACu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895FCACu) goto L_0895FCAC;
    return;
L_0895FCAC:
    aot_gpr[31] = (0x0895FCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0895FCB4u) goto L_0895FCB4;
    return;
L_0895FCB4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0895FCC0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F8BC;
L_0895FCC0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 26u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895FCEC;
      }
      goto L_0895FCD0;
    }
L_0895FCD0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0895FCEC;
      }
      goto L_0895FCD8;
    }
L_0895FCD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0895FCE4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895FA88;
L_0895FCE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FD18;
      }
      goto L_0895FCEC;
    }
L_0895FCEC:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0895FD18;
      }
      goto L_0895FCF4;
    }
L_0895FCF4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FD18;
      }
      goto L_0895FCFC;
    }
L_0895FCFC:
    aot_gpr[31] = (0x0895FD04u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 146u, 0x08964AB8u>(ctx, &aot_mem) && ctx.pc == 0x0895FD04u) goto L_0895FD04;
    return;
L_0895FD04:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FD18;
      }
      goto L_0895FD0C;
    }
L_0895FD0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0895FD18u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895FA88;
L_0895FD18:
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
L_0895FD34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0895FD50u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0895F8B4;
L_0895FD50:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (2216u << 16u);
      if (branch_taken) {
          goto L_0895FD78;
      }
      goto L_0895FD58;
    }
L_0895FD58:
    aot_gpr[31] = (0x0895FD60u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F630;
L_0895FD60:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    aot_gpr[31] = (0x0895FD70u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 255u, 0x0895EFF4u>(ctx, &aot_mem) && ctx.pc == 0x0895FD70u) goto L_0895FD70;
    return;
L_0895FD70:
    aot_gpr[31] = (0x0895FD78u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 253u, 0x0895EFE4u>(ctx, &aot_mem) && ctx.pc == 0x0895FD78u) goto L_0895FD78;
    return;
L_0895FD78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28304)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_0895FD88;
      }
      goto L_0895FD84;
    }
L_0895FD84:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-28304), 0u);
    goto L_0895FD88;
L_0895FD88:
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
L_0895FDA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895FDB0u);
    aot_gpr[5] = (0u | 0u);
    goto L_0895F8B4;
L_0895FDB0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FDBC;
      }
      goto L_0895FDB8;
    }
L_0895FDB8:
    aot_gpr[5] = (0u | 1u);
    goto L_0895FDBC;
L_0895FDBC:
    aot_gpr[2] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FDCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0895FE04u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    goto L_0895F8B4;
L_0895FE04:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0895FE10u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_0895F69C;
L_0895FE10:
    aot_gpr[4] = (0u | 30000u);
    aot_gpr[5] = (0u | 37u);
    if (aot_gpr[19] == aot_gpr[5]) {
    aot_gpr[4] = (0u | 65000u);
        goto L_0895FE20;
    }
    goto L_0895FE20;
L_0895FE20:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(300), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 330u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0895FE44u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-23028));
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 252u, 0x0895EFDCu>(ctx, &aot_mem) && ctx.pc == 0x0895FE44u) goto L_0895FE44;
    return;
L_0895FE44:
    aot_gpr[31] = (0x0895FE4Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 254u, 0x0895EFECu>(ctx, &aot_mem) && ctx.pc == 0x0895FE4Cu) goto L_0895FE4C;
    return;
L_0895FE4C:
    aot_gpr[4] = (aot_gpr[19] << 2u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FE84;
      }
      goto L_0895FE60;
    }
L_0895FE60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0895FE84u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895FE84u) goto L_0895FE84;
    return;
L_0895FE84:
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
L_0895FEA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895FEBCu);
    aot_gpr[7] = (0u | 0u);
    goto L_0895F8B4;
L_0895FEBC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FED8;
      }
      goto L_0895FEC4;
    }
L_0895FEC4:
    aot_gpr[31] = (0x0895FECCu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_0895F8BC;
L_0895FECC:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895FED8;
      }
      goto L_0895FED4;
    }
L_0895FED4:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    goto L_0895FED8;
L_0895FED8:
    aot_gpr[2] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FEE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895FF08u);
    aot_gpr[8] = (0u | 0u);
    goto L_0895F8B4;
L_0895FF08:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FF50;
      }
      goto L_0895FF10;
    }
L_0895FF10:
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[9] < aot_gpr[5] ? 1u : 0u);
    goto L_0895FF18;
L_0895FF18:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FF50;
      }
      goto L_0895FF20;
    }
L_0895FF20:
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FF50;
      }
      goto L_0895FF28;
    }
L_0895FF28:
    aot_gpr[31] = (0x0895FF30u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0895F8BC;
L_0895FF30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895FF40;
      }
      goto L_0895FF3C;
    }
L_0895FF3C:
    aot_gpr[8] = (aot_gpr[7] | 0u);
    goto L_0895FF40;
L_0895FF40:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[9] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FF18;
      }
      goto L_0895FF50;
    }
L_0895FF50:
    aot_gpr[2] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FF60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0895FF74u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_0895F8B4;
L_0895FF74:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FF9C;
      }
      goto L_0895FF7C;
    }
L_0895FF7C:
    aot_gpr[31] = (0x0895FF84u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_0895F630;
L_0895FF84:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    aot_gpr[31] = (0x0895FF94u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 255u, 0x0895EFF4u>(ctx, &aot_mem) && ctx.pc == 0x0895FF94u) goto L_0895FF94;
    return;
L_0895FF94:
    aot_gpr[31] = (0x0895FF9Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 253u, 0x0895EFE4u>(ctx, &aot_mem) && ctx.pc == 0x0895FF9Cu) goto L_0895FF9C;
    return;
L_0895FF9C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FFAC:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(304), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FFBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4264));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(476), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0895FFE0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0895F654;
L_0895FFE0:
    aot_gpr[4] = (0u | 30000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(300), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(304));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0895FFF8u);
    aot_gpr[6] = (0u | 172u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0895FFF8u) goto L_0895FFF8;
    return;
L_0895FFF8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08960000u; return;
}

void recomp_unit_0347(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0347_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_347(Runtime &runtime) {
    runtime.register_generated_unit(347u, 0x0895F000u, 4096u, &recomp_unit_0347, &recomp_unit_0347_entry);
    runtime.register_function(0x0895F004u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F018u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F024u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F034u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F040u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F050u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F05Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F070u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F090u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F0ACu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F0C4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F0D0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F0D8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F0ECu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F0F4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F0FCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F114u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F12Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F13Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F150u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F158u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F160u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F168u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F170u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F178u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F18Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F194u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F1A0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F1B0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F1CCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F1ECu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F1F8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F200u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F214u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F228u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F230u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F24Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F25Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F270u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F290u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F2B4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F2C0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F2CCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F2D4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F2D8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F2DCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F2F8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F300u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F310u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F31Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F344u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F354u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F360u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F370u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F37Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F384u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F394u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F39Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F3A8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F3ACu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F3C8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F3E4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F3F0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F400u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F408u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F428u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F434u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F43Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F440u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F454u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F488u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F498u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F4A4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F4ACu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F4B4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F4BCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F4C8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F4D4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F4DCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F4E0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F4E8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F4F4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F500u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F508u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F50Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F514u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F530u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F538u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F540u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F550u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F55Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F57Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F590u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F598u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F5A8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F5B0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F5B8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F5C4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F5CCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F5E8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F5F0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F5F8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F600u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F60Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F614u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F618u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F630u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F648u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F654u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F670u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F680u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F688u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F69Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F6CCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F6E4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F700u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F70Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F71Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F720u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F728u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F734u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F754u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F75Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F778u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F790u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F79Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F7B0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F7C8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F7D4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F7F0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F808u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F814u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F828u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F840u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F84Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F868u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F880u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F88Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F8B4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F8BCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F8C4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F8CCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F8D4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F8E4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F8F4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F908u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F920u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F928u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F930u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F93Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F948u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F95Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F968u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F984u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F994u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F9ACu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F9B4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F9C0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F9C8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F9E4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895F9F0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FA14u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FA18u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FA20u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FA24u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FA40u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FA50u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FA64u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FA7Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FA88u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FA9Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FAA4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FAACu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FAC0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FAD0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FAD8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FAF0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FB10u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FB1Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FB48u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FB58u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FB60u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FB68u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FB70u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FB78u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FB80u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FB88u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FB90u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FB98u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FBA8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FBB0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FBB8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FBC8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FBD0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FBD8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FBECu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FBF4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FBFCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FC04u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FC0Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FC14u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FC24u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FC38u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FC40u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FC50u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FC60u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FC68u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FC70u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FC78u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FC80u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FC94u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FCACu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FCB4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FCC0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FCD0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FCD8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FCE4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FCECu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FCF4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FCFCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FD04u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FD0Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FD18u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FD34u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FD50u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FD58u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FD60u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FD70u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FD78u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FD84u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FD88u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FDA0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FDB0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FDB8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FDBCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FDCCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FE04u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FE10u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FE20u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FE44u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FE4Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FE60u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FE84u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FEA8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FEBCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FEC4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FECCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FED4u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FED8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FEE8u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF08u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF10u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF18u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF20u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF28u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF30u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF3Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF40u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF50u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF60u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF74u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF7Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF84u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF94u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FF9Cu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FFACu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FFBCu, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FFE0u, &recomp_unit_0347, "recomp_unit_0347");
    runtime.register_function(0x0895FFF8u, &recomp_unit_0347, "recomp_unit_0347");
}
} // namespace psprecomp
