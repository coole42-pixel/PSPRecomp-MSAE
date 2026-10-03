#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0485[1020] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 10, 0, 0, 0, 11, 0, 12, 0, 13, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0,
    0, 31, 32, 0, 33, 34, 0, 0, 0, 0, 0, 0, 35, 36, 0, 37, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 56,
    0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 63, 64, 0, 0, 0, 0, 65, 0,
    66, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 0, 73, 0, 74, 75, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0,
    0, 91, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0,
    0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146,
    0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0,
    158, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 167, 168, 0, 169, 0, 170,
    0, 171, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 176, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 181,
    0, 0, 0, 0, 182, 0, 0, 183, 0, 184, 185, 0, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 0,
    0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 200, 0, 201, 0, 202, 0, 203, 204, 0, 0, 205, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 211,
    0, 212, 213, 0, 0, 0, 214, 215, 0, 216, 0, 0, 217, 218, 0, 0, 219, 220, 0, 0, 221, 0, 222, 223, 0, 224, 0, 0, 0, 0, 225, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0,
    237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 240, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 251,
    252, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 259, 260,
};
void recomp_unit_0485_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089E9000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0485[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E9000;
    case 2u: goto L_089E9008;
    case 3u: goto L_089E9014;
    case 4u: goto L_089E9024;
    case 5u: goto L_089E9040;
    case 6u: goto L_089E905C;
    case 7u: goto L_089E907C;
    case 8u: goto L_089E9090;
    case 9u: goto L_089E90A0;
    case 10u: goto L_089E90A8;
    case 11u: goto L_089E90B8;
    case 12u: goto L_089E90C0;
    case 13u: goto L_089E90C8;
    case 14u: goto L_089E90CC;
    case 15u: goto L_089E90D8;
    case 16u: goto L_089E9108;
    case 17u: goto L_089E9114;
    case 18u: goto L_089E911C;
    case 19u: goto L_089E912C;
    case 20u: goto L_089E9140;
    case 21u: goto L_089E9148;
    case 22u: goto L_089E9158;
    case 23u: goto L_089E9164;
    case 24u: goto L_089E9180;
    case 25u: goto L_089E9190;
    case 26u: goto L_089E9198;
    case 27u: goto L_089E91B0;
    case 28u: goto L_089E91C4;
    case 29u: goto L_089E91DC;
    case 30u: goto L_089E91E4;
    case 31u: goto L_089E9204;
    case 32u: goto L_089E9208;
    case 33u: goto L_089E9210;
    case 34u: goto L_089E9214;
    case 35u: goto L_089E9230;
    case 36u: goto L_089E9234;
    case 37u: goto L_089E923C;
    case 38u: goto L_089E9244;
    case 39u: goto L_089E9254;
    case 40u: goto L_089E925C;
    case 41u: goto L_089E9274;
    case 42u: goto L_089E9288;
    case 43u: goto L_089E92A0;
    case 44u: goto L_089E92AC;
    case 45u: goto L_089E92BC;
    case 46u: goto L_089E92C4;
    case 47u: goto L_089E92DC;
    case 48u: goto L_089E92F0;
    case 49u: goto L_089E9308;
    case 50u: goto L_089E9314;
    case 51u: goto L_089E9324;
    case 52u: goto L_089E932C;
    case 53u: goto L_089E9344;
    case 54u: goto L_089E9358;
    case 55u: goto L_089E9370;
    case 56u: goto L_089E937C;
    case 57u: goto L_089E938C;
    case 58u: goto L_089E9394;
    case 59u: goto L_089E93A0;
    case 60u: goto L_089E93B4;
    case 61u: goto L_089E93BC;
    case 62u: goto L_089E93C4;
    case 63u: goto L_089E93E0;
    case 64u: goto L_089E93E4;
    case 65u: goto L_089E93F8;
    case 66u: goto L_089E9400;
    case 67u: goto L_089E940C;
    case 68u: goto L_089E9414;
    case 69u: goto L_089E943C;
    case 70u: goto L_089E9448;
    case 71u: goto L_089E9450;
    case 72u: goto L_089E9458;
    case 73u: goto L_089E9464;
    case 74u: goto L_089E946C;
    case 75u: goto L_089E9470;
    case 76u: goto L_089E948C;
    case 77u: goto L_089E94BC;
    case 78u: goto L_089E94CC;
    case 79u: goto L_089E94D4;
    case 80u: goto L_089E94DC;
    case 81u: goto L_089E9504;
    case 82u: goto L_089E950C;
    case 83u: goto L_089E952C;
    case 84u: goto L_089E9534;
    case 85u: goto L_089E9544;
    case 86u: goto L_089E954C;
    case 87u: goto L_089E9554;
    case 88u: goto L_089E9564;
    case 89u: goto L_089E956C;
    case 90u: goto L_089E9574;
    case 91u: goto L_089E9584;
    case 92u: goto L_089E958C;
    case 93u: goto L_089E9594;
    case 94u: goto L_089E95A4;
    case 95u: goto L_089E95B0;
    case 96u: goto L_089E95B8;
    case 97u: goto L_089E95C8;
    case 98u: goto L_089E95D4;
    case 99u: goto L_089E95DC;
    case 100u: goto L_089E9618;
    case 101u: goto L_089E962C;
    case 102u: goto L_089E9634;
    case 103u: goto L_089E9644;
    case 104u: goto L_089E9650;
    case 105u: goto L_089E9658;
    case 106u: goto L_089E9664;
    case 107u: goto L_089E9698;
    case 108u: goto L_089E969C;
    case 109u: goto L_089E96BC;
    case 110u: goto L_089E96F0;
    case 111u: goto L_089E96F8;
    case 112u: goto L_089E9708;
    case 113u: goto L_089E9710;
    case 114u: goto L_089E9730;
    case 115u: goto L_089E9738;
    case 116u: goto L_089E9740;
    case 117u: goto L_089E9744;
    case 118u: goto L_089E975C;
    case 119u: goto L_089E9764;
    case 120u: goto L_089E9770;
    case 121u: goto L_089E978C;
    case 122u: goto L_089E97AC;
    case 123u: goto L_089E97B4;
    case 124u: goto L_089E97C0;
    case 125u: goto L_089E97C8;
    case 126u: goto L_089E97D0;
    case 127u: goto L_089E97D8;
    case 128u: goto L_089E97E0;
    case 129u: goto L_089E97E8;
    case 130u: goto L_089E9808;
    case 131u: goto L_089E9814;
    case 132u: goto L_089E981C;
    case 133u: goto L_089E9828;
    case 134u: goto L_089E9860;
    case 135u: goto L_089E9870;
    case 136u: goto L_089E988C;
    case 137u: goto L_089E9894;
    case 138u: goto L_089E98B4;
    case 139u: goto L_089E98EC;
    case 140u: goto L_089E98FC;
    case 141u: goto L_089E9918;
    case 142u: goto L_089E9920;
    case 143u: goto L_089E9940;
    case 144u: goto L_089E996C;
    case 145u: goto L_089E9974;
    case 146u: goto L_089E997C;
    case 147u: goto L_089E998C;
    case 148u: goto L_089E9994;
    case 149u: goto L_089E99B4;
    case 150u: goto L_089E99C8;
    case 151u: goto L_089E99F4;
    case 152u: goto L_089E9A1C;
    case 153u: goto L_089E9A20;
    case 154u: goto L_089E9A40;
    case 155u: goto L_089E9A64;
    case 156u: goto L_089E9A70;
    case 157u: goto L_089E9A78;
    case 158u: goto L_089E9A80;
    case 159u: goto L_089E9A84;
    case 160u: goto L_089E9A9C;
    case 161u: goto L_089E9AA8;
    case 162u: goto L_089E9AB0;
    case 163u: goto L_089E9AB8;
    case 164u: goto L_089E9AC4;
    case 165u: goto L_089E9AD8;
    case 166u: goto L_089E9AE0;
    case 167u: goto L_089E9AE8;
    case 168u: goto L_089E9AEC;
    case 169u: goto L_089E9AF4;
    case 170u: goto L_089E9AFC;
    case 171u: goto L_089E9B04;
    case 172u: goto L_089E9B10;
    case 173u: goto L_089E9B24;
    case 174u: goto L_089E9B30;
    case 175u: goto L_089E9B3C;
    case 176u: goto L_089E9B40;
    case 177u: goto L_089E9B4C;
    case 178u: goto L_089E9B54;
    case 179u: goto L_089E9B64;
    case 180u: goto L_089E9B6C;
    case 181u: goto L_089E9B7C;
    case 182u: goto L_089E9B90;
    case 183u: goto L_089E9B9C;
    case 184u: goto L_089E9BA4;
    case 185u: goto L_089E9BA8;
    case 186u: goto L_089E9BB4;
    case 187u: goto L_089E9BBC;
    case 188u: goto L_089E9BC8;
    case 189u: goto L_089E9BD0;
    case 190u: goto L_089E9BD8;
    case 191u: goto L_089E9BE0;
    case 192u: goto L_089E9BE8;
    case 193u: goto L_089E9BF0;
    case 194u: goto L_089E9C08;
    case 195u: goto L_089E9C10;
    case 196u: goto L_089E9C18;
    case 197u: goto L_089E9C48;
    case 198u: goto L_089E9C50;
    case 199u: goto L_089E9C80;
    case 200u: goto L_089E9C88;
    case 201u: goto L_089E9C90;
    case 202u: goto L_089E9C98;
    case 203u: goto L_089E9CA0;
    case 204u: goto L_089E9CA4;
    case 205u: goto L_089E9CB0;
    case 206u: goto L_089E9CB4;
    case 207u: goto L_089E9CD0;
    case 208u: goto L_089E9CE4;
    case 209u: goto L_089E9CEC;
    case 210u: goto L_089E9CF4;
    case 211u: goto L_089E9CFC;
    case 212u: goto L_089E9D04;
    case 213u: goto L_089E9D08;
    case 214u: goto L_089E9D18;
    case 215u: goto L_089E9D1C;
    case 216u: goto L_089E9D24;
    case 217u: goto L_089E9D30;
    case 218u: goto L_089E9D34;
    case 219u: goto L_089E9D40;
    case 220u: goto L_089E9D44;
    case 221u: goto L_089E9D50;
    case 222u: goto L_089E9D58;
    case 223u: goto L_089E9D5C;
    case 224u: goto L_089E9D64;
    case 225u: goto L_089E9D78;
    case 226u: goto L_089E9D80;
    case 227u: goto L_089E9DA4;
    case 228u: goto L_089E9DB0;
    case 229u: goto L_089E9DE4;
    case 230u: goto L_089E9E0C;
    case 231u: goto L_089E9E18;
    case 232u: goto L_089E9E20;
    case 233u: goto L_089E9E28;
    case 234u: goto L_089E9E68;
    case 235u: goto L_089E9E70;
    case 236u: goto L_089E9E78;
    case 237u: goto L_089E9E80;
    case 238u: goto L_089E9E94;
    case 239u: goto L_089E9EB0;
    case 240u: goto L_089E9EB4;
    case 241u: goto L_089E9EB8;
    case 242u: goto L_089E9EC0;
    case 243u: goto L_089E9EF4;
    case 244u: goto L_089E9F04;
    case 245u: goto L_089E9F0C;
    case 246u: goto L_089E9F18;
    case 247u: goto L_089E9F20;
    case 248u: goto L_089E9F28;
    case 249u: goto L_089E9F5C;
    case 250u: goto L_089E9F74;
    case 251u: goto L_089E9F7C;
    case 252u: goto L_089E9F80;
    case 253u: goto L_089E9F84;
    case 254u: goto L_089E9F98;
    case 255u: goto L_089E9FB4;
    case 256u: goto L_089E9FC8;
    case 257u: goto L_089E9FD8;
    case 258u: goto L_089E9FE0;
    case 259u: goto L_089E9FE8;
    case 260u: goto L_089E9FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E9000:
    aot_gpr[31] = (0x089E9008u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x089E9008u) goto L_089E9008;
    return;
L_089E9008:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_089E905C;
      }
      goto L_089E9014;
    }
L_089E9014:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(6144)));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[31] = (0x089E9024u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E9024u) goto L_089E9024;
    return;
L_089E9024:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(6144)));
    aot_gpr[2] = (aot_gpr[18] + static_cast<std::uint32_t>(3072));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[31] = (0x089E9040u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E9040u) goto L_089E9040;
    return;
L_089E9040:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(6144)));
    aot_gpr[2] = (aot_gpr[3] << 8u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[18]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[19]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(6144), aot_gpr[3]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(3072), static_cast<std::uint8_t>(0u));
    goto L_089E905C;
L_089E905C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
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
L_089E907C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[3] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E90CC;
      }
      goto L_089E9090;
    }
L_089E9090:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(528)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(528));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
      if (branch_taken) {
          goto L_089E90A8;
      }
      goto L_089E90A0;
    }
L_089E90A0:
    aot_gpr[31] = (0x089E90A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089E90A8u) goto L_089E90A8;
    return;
L_089E90A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089E90C0;
      }
      goto L_089E90B8;
    }
L_089E90B8:
    aot_gpr[31] = (0x089E90C0u);
    // nop
    goto L_089E9A40;
L_089E90C0:
    aot_gpr[31] = (0x089E90C8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089E90C8u) goto L_089E90C8;
    return;
L_089E90C8:
    aot_gpr[2] = (0u + 0u);
    goto L_089E90CC;
L_089E90CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E90D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089E91E4;
      }
      goto L_089E9108;
    }
L_089E9108:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089E9114u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(532));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089E9114u) goto L_089E9114;
    return;
L_089E9114:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E9204;
      }
      goto L_089E911C;
    }
L_089E911C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E912Cu);
    aot_gpr[5] = (0u + 0u);
    goto L_089E9414;
L_089E912C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9208;
      }
      goto L_089E9140;
    }
L_089E9140:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E9208;
      }
      goto L_089E9148;
    }
L_089E9148:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089E9158u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089E9534;
L_089E9158:
    aot_gpr[3] = (aot_gpr[18] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E9234;
      }
      goto L_089E9164;
    }
L_089E9164:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[18] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-11544));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9180:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[31] = (0x089E9190u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(528));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089E9190u) goto L_089E9190;
    return;
L_089E9190:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E9204;
      }
      goto L_089E9198;
    }
L_089E9198:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2207u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-30368));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089E91B0u);
    aot_gpr[16] = (0u + 0u);
    goto L_089E9554;
L_089E91B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2207u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29772));
    aot_gpr[31] = (0x089E91C4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089E9574;
L_089E91C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2207u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29684));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089E91DCu);
    aot_gpr[5] = (0u + 0u);
    goto L_089E9594;
L_089E91DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E91E4;
L_089E91E4:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9204:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089E9208;
L_089E9208:
    aot_gpr[31] = (0x089E9210u);
    // nop
    goto L_089E907C;
L_089E9210:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089E9214;
L_089E9214:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9230:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089E9234;
L_089E9234:
    aot_gpr[31] = (0x089E923Cu);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(4));
    goto L_089E907C;
L_089E923C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089E9214;
L_089E9244:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089E9254u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(528));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089E9254u) goto L_089E9254;
    return;
L_089E9254:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E9204;
      }
      goto L_089E925C;
    }
L_089E925C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2207u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-31976));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089E9274u);
    aot_gpr[16] = (0u + 0u);
    goto L_089E9554;
L_089E9274:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2207u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-31596));
    aot_gpr[31] = (0x089E9288u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089E9574;
L_089E9288:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2207u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31508));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089E92A0u);
    aot_gpr[5] = (0u + 0u);
    goto L_089E9594;
L_089E92A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E91E4;
L_089E92AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4868));
    aot_gpr[31] = (0x089E92BCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(528));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089E92BCu) goto L_089E92BC;
    return;
L_089E92BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E9204;
      }
      goto L_089E92C4;
    }
L_089E92C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2206u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31072));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089E92DCu);
    aot_gpr[16] = (0u + 0u);
    goto L_089E9554;
L_089E92DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2206u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31392));
    aot_gpr[31] = (0x089E92F0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089E9574;
L_089E92F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2206u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(31532));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089E9308u);
    aot_gpr[5] = (0u + 0u);
    goto L_089E9594;
L_089E9308:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E91E4;
L_089E9314:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(6148));
    aot_gpr[31] = (0x089E9324u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(528));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089E9324u) goto L_089E9324;
    return;
L_089E9324:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E9204;
      }
      goto L_089E932C;
    }
L_089E932C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2207u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29532));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089E9344u);
    aot_gpr[16] = (0u + 0u);
    goto L_089E9554;
L_089E9344:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2207u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-28900));
    aot_gpr[31] = (0x089E9358u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089E9574;
L_089E9358:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2207u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28764));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089E9370u);
    aot_gpr[5] = (0u + 0u);
    goto L_089E9594;
L_089E9370:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E91E4;
L_089E937C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E9394;
      }
      goto L_089E938C;
    }
L_089E938C:
    aot_gpr[31] = (0x089E9394u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E9E28;
L_089E9394:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E93A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_089E93E0;
      }
      goto L_089E93B4;
    }
L_089E93B4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E93E4;
      }
      goto L_089E93BC;
    }
L_089E93BC:
    aot_gpr[31] = (0x089E93C4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E95B8;
L_089E93C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E93E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089E93E4;
L_089E93E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E93F8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E940C;
      }
      goto L_089E9400;
    }
L_089E9400:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(528)));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E940C;
L_089E940C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9414:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089E952C;
      }
      goto L_089E943C;
    }
L_089E943C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E9470;
      }
      goto L_089E9448;
    }
L_089E9448:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089E952C;
      }
      goto L_089E9450;
    }
L_089E9450:
    aot_gpr[31] = (0x089E9458u);
    aot_gpr[5] = (0u | 35888u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089E9458u) goto L_089E9458;
    return;
L_089E9458:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(100));
        goto L_089E9470;
    }
    goto L_089E9464;
L_089E9464:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (1u << 16u);
        goto L_089E948C;
    }
    goto L_089E946C;
L_089E946C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(100));
    goto L_089E9470;
L_089E9470:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E948C:
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-32768), aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[31] = (0x089E94BCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-32768)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x089E94BCu) goto L_089E94BC;
    return;
L_089E94BC:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9504;
      }
      goto L_089E94CC;
    }
L_089E94CC:
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E9504;
      }
      goto L_089E94D4;
    }
L_089E94D4:
    aot_gpr[31] = (0x089E94DCu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089E94DCu) goto L_089E94DC;
    return;
L_089E94DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9504:
    aot_gpr[31] = (0x089E950Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089E950Cu) goto L_089E950C;
    return;
L_089E950C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(100));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E952C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089E9470;
L_089E9534:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E954C;
      }
      goto L_089E9544;
    }
L_089E9544:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(-29672), aot_gpr[5]);
    aot_gpr[2] = (0u + 0u);
    goto L_089E954C;
L_089E954C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9554:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E956C;
      }
      goto L_089E9564;
    }
L_089E9564:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(-29660), aot_gpr[5]);
    aot_gpr[2] = (0u + 0u);
    goto L_089E956C;
L_089E956C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9574:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E958C;
      }
      goto L_089E9584;
    }
L_089E9584:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(-29656), aot_gpr[5]);
    aot_gpr[2] = (0u + 0u);
    goto L_089E958C;
L_089E958C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9594:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E95B0;
      }
      goto L_089E95A4;
    }
L_089E95A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(-29652), aot_gpr[6]);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(-29668), aot_gpr[5]);
    goto L_089E95B0;
L_089E95B0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E95B8:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089E95D4;
      }
      goto L_089E95C8;
    }
L_089E95C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-31728)));
    aot_gpr[2] = (aot_gpr[2] ^ 26u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089E95D4;
L_089E95D4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E95DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-32764)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-32768)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_089E9698;
      }
      goto L_089E9618;
    }
L_089E9618:
    aot_gpr[19] = (aot_gpr[7] + 0u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4096));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    goto L_089E9634;
L_089E962C:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089E9698;
      }
      goto L_089E9634;
    }
L_089E9634:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089E962C;
      }
      goto L_089E9644;
    }
L_089E9644:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E9650u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089E9650u) goto L_089E9650;
    return;
L_089E9650:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E969C;
      }
      goto L_089E9658;
    }
L_089E9658:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089E969C;
      }
      goto L_089E9664;
    }
L_089E9664:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-32764)));
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-32764), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] + 0u);
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
L_089E9698:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089E969C;
L_089E969C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(100));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E96BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[2] = (1u << 16u);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4096));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089E96F8;
L_089E96F0:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[6];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089E9730;
      }
      goto L_089E96F8;
    }
L_089E96F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[2];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089E96F0;
      }
      goto L_089E9708;
    }
L_089E9708:
    aot_gpr[31] = (0x089E9710u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089E9710u) goto L_089E9710;
    return;
L_089E9710:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-32764)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-32764), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089E9730;
L_089E9730:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089E9744;
      }
      goto L_089E9738;
    }
L_089E9738:
    aot_gpr[31] = (0x089E9740u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089E9740u) goto L_089E9740;
    return;
L_089E9740:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089E9744;
L_089E9744:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E975C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (1u << 16u);
      if (branch_taken) {
          goto L_089E97B4;
      }
      goto L_089E9764;
    }
L_089E9764:
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089E97B4;
      }
      goto L_089E9770;
    }
L_089E9770:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-31732)));
    aot_gpr[9] = (0u + 0u);
    aot_gpr[7] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[7] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[8]);
      if (branch_taken) {
          goto L_089E97AC;
      }
      goto L_089E978C;
    }
L_089E978C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-32756)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-31732), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-31732)));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-32756), 0u);
    goto L_089E97AC;
L_089E97AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[9] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E97B4:
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[9] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E97C0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089E97D0;
      }
      goto L_089E97C8;
    }
L_089E97C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_089E95DC;
L_089E97D0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E97D8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (1u << 16u);
      if (branch_taken) {
          goto L_089E981C;
      }
      goto L_089E97E0;
    }
L_089E97E0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[8]);
      if (branch_taken) {
          goto L_089E981C;
      }
      goto L_089E97E8;
    }
L_089E97E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-31732)));
    aot_gpr[6] = (0u | 55501u);
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[8]);
      if (branch_taken) {
          goto L_089E9814;
      }
      goto L_089E9808;
    }
L_089E9808:
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-32756), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-31732), aot_gpr[4]);
    goto L_089E9814;
L_089E9814:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E981C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9828:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29676)));
    aot_gpr[31] = (0x089E9860u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089E95DC;
L_089E9860:
    aot_gpr[5] = (0u | 33812u);
    aot_gpr[19] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
      if (branch_taken) {
          goto L_089E9894;
      }
      goto L_089E9870;
    }
L_089E9870:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29676)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089E988Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29676)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089E988Cu) goto L_089E988C;
    return;
L_089E988C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29676), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(-31724), static_cast<std::uint8_t>(0u));
    goto L_089E9894;
L_089E9894:
    aot_gpr[2] = (aot_gpr[19] + 0u);
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
L_089E98B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29676)));
    aot_gpr[31] = (0x089E98ECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089E95DC;
L_089E98EC:
    aot_gpr[5] = (0u | 33812u);
    aot_gpr[19] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
      if (branch_taken) {
          goto L_089E9920;
      }
      goto L_089E98FC;
    }
L_089E98FC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29676)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089E9918u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29676)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089E9918u) goto L_089E9918;
    return;
L_089E9918:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29676), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(-31724), static_cast<std::uint8_t>(0u));
    goto L_089E9920;
L_089E9920:
    aot_gpr[2] = (aot_gpr[19] + 0u);
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
L_089E9940:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089E9A1C;
      }
      goto L_089E996C;
    }
L_089E996C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
        goto L_089E9A20;
    }
    goto L_089E9974;
L_089E9974:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089E9A1C;
      }
      goto L_089E997C;
    }
L_089E997C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[31] = (0x089E998Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    goto L_089E95DC;
L_089E998C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E99B4;
      }
      goto L_089E9994;
    }
L_089E9994:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E99B4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x089E99C8u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089E99C8u) goto L_089E99C8;
    return;
L_089E99C8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089E99F4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_089E96BC;
L_089E99F4:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9A1C:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    goto L_089E9A20;
L_089E9A20:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9A40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_089E9A84;
      }
      goto L_089E9A64;
    }
L_089E9A64:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089E9A70u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089E975C;
L_089E9A70:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E9A9C;
      }
      goto L_089E9A78;
    }
L_089E9A78:
    aot_gpr[31] = (0x089E9A80u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089E9A80u) goto L_089E9A80;
    return;
L_089E9A80:
    aot_gpr[2] = (0u + 0u);
    goto L_089E9A84;
L_089E9A84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9A9C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089E9AC4;
      }
      goto L_089E9AA8;
    }
L_089E9AA8:
    aot_gpr[31] = (0x089E9AB0u);
    // nop
    goto L_089E975C;
L_089E9AB0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E9A78;
      }
      goto L_089E9AB8;
    }
L_089E9AB8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089E9AA8;
      }
      goto L_089E9AC4;
    }
L_089E9AC4:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-32760)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9A78;
      }
      goto L_089E9AD8;
    }
L_089E9AD8:
    aot_gpr[31] = (0x089E9AE0u);
    // nop
    goto L_089E97D8;
L_089E9AE0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089E9A78;
      }
      goto L_089E9AE8;
    }
L_089E9AE8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089E9AEC;
L_089E9AEC:
    aot_gpr[31] = (0x089E9AF4u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    goto L_089E975C;
L_089E9AF4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E9A78;
      }
      goto L_089E9AFC;
    }
L_089E9AFC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9A78;
      }
      goto L_089E9B04;
    }
L_089E9B04:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089E9B40;
      }
      goto L_089E9B10;
    }
L_089E9B10:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089E9B40;
      }
      goto L_089E9B24;
    }
L_089E9B24:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    if (aot_gpr[6] == aot_gpr[4]) {
    aot_gpr[16] = (0u + 0u);
        goto L_089E9B40;
    }
    goto L_089E9B30;
L_089E9B30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E9B24;
      }
      goto L_089E9B3C;
    }
L_089E9B3C:
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089E9B40;
L_089E9B40:
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E9BE0;
      }
      goto L_089E9B4C;
    }
L_089E9B4C:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E9A78;
      }
      goto L_089E9B54;
    }
L_089E9B54:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E9B6C;
      }
      goto L_089E9B64;
    }
L_089E9B64:
    aot_gpr[31] = (0x089E9B6Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089E96BC;
L_089E9B6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089E9BA8;
      }
      goto L_089E9B7C;
    }
L_089E9B7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E9B90u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089E96BC;
L_089E9B90:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E9B9Cu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    goto L_089E96BC;
L_089E9B9C:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089E9B7C;
      }
      goto L_089E9BA4;
    }
L_089E9BA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089E9BA8;
L_089E9BA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E9BBC;
      }
      goto L_089E9BB4;
    }
L_089E9BB4:
    aot_gpr[31] = (0x089E9BBCu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089E96BC;
L_089E9BBC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E9BC8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_089E96BC;
L_089E9BC8:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089E9BD0;
L_089E9BD0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089E9AEC;
      }
      goto L_089E9BD8;
    }
L_089E9BD8:
    // nop
    goto L_089E9A78;
L_089E9BE0:
    aot_gpr[31] = (0x089E9BE8u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089E97D8;
L_089E9BE8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E9A78;
      }
      goto L_089E9BF0;
    }
L_089E9BF0:
    aot_gpr[2] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[31] = (0x089E9C08u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089E97D8;
L_089E9C08:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E9A78;
      }
      goto L_089E9C10;
    }
L_089E9C10:
    // nop
    goto L_089E9BD0;
L_089E9C18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (0u | 33812u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089E9DE4;
      }
      goto L_089E9C48;
    }
L_089E9C48:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          goto L_089E9DE4;
      }
      goto L_089E9C50;
    }
L_089E9C50:
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-29676)));
    aot_gpr[17] = (aot_gpr[8] + 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-31724), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(13));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089E9CB0;
      }
      goto L_089E9C80;
    }
L_089E9C80:
    if (aot_gpr[2] == aot_gpr[3]) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089E9CA4;
    }
    goto L_089E9C88;
L_089E9C88:
    if (aot_gpr[2] == aot_gpr[5]) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089E9CA4;
    }
    goto L_089E9C90;
L_089E9C90:
    if (aot_gpr[2] == aot_gpr[6]) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089E9CA4;
    }
    goto L_089E9C98;
L_089E9C98:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[7];
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          goto L_089E9CB4;
      }
      goto L_089E9CA0;
    }
L_089E9CA0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089E9CA4;
L_089E9CA4:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E9C80;
      }
      goto L_089E9CB0;
    }
L_089E9CB0:
    aot_gpr[2] = (1u << 16u);
    goto L_089E9CB4;
L_089E9CB4:
    aot_gpr[2] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-29676)));
    aot_gpr[3] = (aot_gpr[8] + aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
        goto L_089E9D1C;
    }
    goto L_089E9CD0;
L_089E9CD0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(13));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(10));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0))))));
    goto L_089E9CE4;
L_089E9CE4:
    if (aot_gpr[2] == aot_gpr[4]) {
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_089E9D08;
    }
    goto L_089E9CEC;
L_089E9CEC:
    if (aot_gpr[2] == aot_gpr[5]) {
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_089E9D08;
    }
    goto L_089E9CF4;
L_089E9CF4:
    if (aot_gpr[2] == aot_gpr[6]) {
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_089E9D08;
    }
    goto L_089E9CFC;
L_089E9CFC:
    if (aot_gpr[2] != aot_gpr[7]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
        goto L_089E9D1C;
    }
    goto L_089E9D04;
L_089E9D04:
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089E9D08;
L_089E9D08:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0))))));
        goto L_089E9CE4;
    }
    goto L_089E9D18;
L_089E9D18:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    goto L_089E9D1C;
L_089E9D1C:
    if (aot_gpr[16] == 0u) {
    aot_gpr[4] = (aot_gpr[19] + 0u);
        goto L_089E9E0C;
    }
    goto L_089E9D24;
L_089E9D24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[19] + 0u);
        goto L_089E9D44;
    }
    goto L_089E9D30;
L_089E9D30:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089E9D34;
L_089E9D34:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (aot_gpr[2] + 0u);
        goto L_089E9D34;
    }
    goto L_089E9D40;
L_089E9D40:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    goto L_089E9D44;
L_089E9D44:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E9D50u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    goto L_089E95DC;
L_089E9D50:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E9D80;
      }
      goto L_089E9D58;
    }
L_089E9D58:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089E9D5C;
L_089E9D5C:
    aot_gpr[31] = (0x089E9D64u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E9D64u) goto L_089E9D64;
    return;
L_089E9D64:
    aot_gpr[16] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E9D78u);
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089E95DC;
L_089E9D78:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E9DA4;
      }
      goto L_089E9D80;
    }
L_089E9D80:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
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
L_089E9DA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089E9DB0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x089E9DB0u) goto L_089E9DB0;
    return;
L_089E9DB0:
    aot_gpr[3] = (1u << 16u);
    aot_gpr[3] = (aot_gpr[19] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(-29676), 0u);
    aot_gpr[2] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(-31724), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
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
L_089E9DE4:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
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
L_089E9E0C:
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E9E18u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    goto L_089E95DC;
L_089E9E18:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E9D80;
      }
      goto L_089E9E20;
    }
L_089E9E20:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    goto L_089E9D5C;
L_089E9E28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[7]);
      if (branch_taken) {
          goto L_089E9EC0;
      }
      goto L_089E9E68;
    }
L_089E9E68:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E9EB0;
      }
      goto L_089E9E70;
    }
L_089E9E70:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089E9EB4;
      }
      goto L_089E9E78;
    }
L_089E9E78:
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[20] = (0u + 0u);
    goto L_089E9E80;
L_089E9E80:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-9));
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(55) ? 1u : 0u);
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (1u << 16u);
        goto L_089E9F80;
    }
    goto L_089E9E94;
L_089E9E94:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-11496));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9EB0:
    aot_gpr[18] = (0u + 0u);
    goto L_089E9EB4;
L_089E9EB4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089E9EB8;
L_089E9EB8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E9EF4;
      }
      goto L_089E9EC0;
    }
L_089E9EC0:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9EF4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089E9F04u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    goto L_089E975C;
L_089E9F04:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E9EC0;
      }
      goto L_089E9F0C;
    }
L_089E9F0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 65u, 0x089EA360u>(ctx, &aot_mem); return;
      }
      goto L_089E9F18;
    }
L_089E9F18:
    aot_gpr[31] = (0x089E9F20u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    goto L_089E975C;
L_089E9F20:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E9F0C;
      }
      goto L_089E9F28;
    }
L_089E9F28:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9F5C:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31728)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (1u << 16u);
      if (branch_taken) {
          goto L_089E9F80;
      }
      goto L_089E9F74;
    }
L_089E9F74:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    goto L_089E9F7C;
L_089E9F7C:
    aot_gpr[2] = (1u << 16u);
    goto L_089E9F80;
L_089E9F80:
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    goto L_089E9F84;
L_089E9F84:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-31728)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 2u, 0x089EA018u>(ctx, &aot_mem); return;
      }
      goto L_089E9F98;
    }
L_089E9F98:
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-11276));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9FB4:
    aot_gpr[2] = (1u << 16u);
    aot_gpr[19] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29676)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 144u, 0x089EA6FCu>(ctx, &aot_mem); return;
      }
      goto L_089E9FC8;
    }
L_089E9FC8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-31728)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 152u, 0x089EA750u>(ctx, &aot_mem); return;
      }
      goto L_089E9FD8;
    }
L_089E9FD8:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[6] = (1u << 16u);
      if (branch_taken) {
          goto L_089E9FEC;
      }
      goto L_089E9FE0;
    }
L_089E9FE0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-31728), aot_gpr[2]);
    goto L_089E9FE8;
L_089E9FE8:
    aot_gpr[6] = (1u << 16u);
    goto L_089E9FEC;
L_089E9FEC:
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29676)));
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
        (void)rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 3u, 0x089EA01Cu>(ctx, &aot_mem); return;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 1u, 0x089EA000u>(ctx, &aot_mem); return;
}

void recomp_unit_0485(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0485_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_485(Runtime &runtime) {
    runtime.register_generated_unit(485u, 0x089E9000u, 4096u, &recomp_unit_0485, &recomp_unit_0485_entry);
    runtime.register_function(0x089E9000u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9008u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9014u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9024u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9040u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E905Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E907Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9090u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E90A0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E90A8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E90B8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E90C0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E90C8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E90CCu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E90D8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9108u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9114u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E911Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E912Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9140u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9148u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9158u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9164u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9180u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9190u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9198u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E91B0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E91C4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E91DCu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E91E4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9204u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9208u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9210u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9214u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9230u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9234u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E923Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9244u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9254u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E925Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9274u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9288u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E92A0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E92ACu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E92BCu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E92C4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E92DCu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E92F0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9308u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9314u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9324u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E932Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9344u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9358u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9370u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E937Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E938Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9394u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E93A0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E93B4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E93BCu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E93C4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E93E0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E93E4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E93F8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9400u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E940Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9414u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E943Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9448u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9450u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9458u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9464u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E946Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9470u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E948Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E94BCu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E94CCu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E94D4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E94DCu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9504u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E950Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E952Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9534u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9544u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E954Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9554u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9564u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E956Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9574u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9584u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E958Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9594u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E95A4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E95B0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E95B8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E95C8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E95D4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E95DCu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9618u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E962Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9634u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9644u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9650u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9658u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9664u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9698u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E969Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E96BCu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E96F0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E96F8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9708u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9710u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9730u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9738u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9740u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9744u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E975Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9764u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9770u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E978Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E97ACu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E97B4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E97C0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E97C8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E97D0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E97D8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E97E0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E97E8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9808u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9814u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E981Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9828u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9860u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9870u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E988Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9894u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E98B4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E98ECu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E98FCu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9918u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9920u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9940u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E996Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9974u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E997Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E998Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9994u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E99B4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E99C8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E99F4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9A1Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9A20u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9A40u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9A64u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9A70u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9A78u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9A80u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9A84u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9A9Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9AA8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9AB0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9AB8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9AC4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9AD8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9AE0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9AE8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9AECu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9AF4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9AFCu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9B04u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9B10u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9B24u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9B30u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9B3Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9B40u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9B4Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9B54u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9B64u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9B6Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9B7Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9B90u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9B9Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9BA4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9BA8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9BB4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9BBCu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9BC8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9BD0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9BD8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9BE0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9BE8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9BF0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9C08u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9C10u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9C18u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9C48u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9C50u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9C80u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9C88u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9C90u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9C98u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9CA0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9CA4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9CB0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9CB4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9CD0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9CE4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9CECu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9CF4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9CFCu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D04u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D08u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D18u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D1Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D24u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D30u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D34u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D40u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D44u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D50u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D58u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D5Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D64u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D78u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9D80u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9DA4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9DB0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9DE4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9E0Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9E18u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9E20u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9E28u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9E68u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9E70u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9E78u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9E80u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9E94u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9EB0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9EB4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9EB8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9EC0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9EF4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9F04u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9F0Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9F18u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9F20u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9F28u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9F5Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9F74u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9F7Cu, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9F80u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9F84u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9F98u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9FB4u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9FC8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9FD8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9FE0u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9FE8u, &recomp_unit_0485, "recomp_unit_0485");
    runtime.register_function(0x089E9FECu, &recomp_unit_0485, "recomp_unit_0485");
}
} // namespace psprecomp
