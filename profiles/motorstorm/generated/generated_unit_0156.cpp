#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0156[1023] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0,
    8, 0, 9, 0, 10, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 19, 20,
    0, 21, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33,
    0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0,
    0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0,
    0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0,
    54, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0,
    0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0,
    76, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0,
    0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90,
    0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0,
    0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109,
    0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 128, 129, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 0, 141, 0,
    0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 148,
    0, 149, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 158,
    0, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0,
    174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0,
    0, 0, 183, 184, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 208, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214,
    0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 221, 222, 0, 223, 0, 0, 0, 224,
    0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0,
    229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233,
};
void recomp_unit_0156_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088A0000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0156[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A0000;
    case 2u: goto L_088A0008;
    case 3u: goto L_088A0014;
    case 4u: goto L_088A0038;
    case 5u: goto L_088A0058;
    case 6u: goto L_088A0070;
    case 7u: goto L_088A0078;
    case 8u: goto L_088A0080;
    case 9u: goto L_088A0088;
    case 10u: goto L_088A0090;
    case 11u: goto L_088A009C;
    case 12u: goto L_088A00A8;
    case 13u: goto L_088A00B0;
    case 14u: goto L_088A00C4;
    case 15u: goto L_088A00CC;
    case 16u: goto L_088A00D4;
    case 17u: goto L_088A00DC;
    case 18u: goto L_088A00EC;
    case 19u: goto L_088A00F8;
    case 20u: goto L_088A00FC;
    case 21u: goto L_088A0104;
    case 22u: goto L_088A010C;
    case 23u: goto L_088A011C;
    case 24u: goto L_088A0124;
    case 25u: goto L_088A012C;
    case 26u: goto L_088A0148;
    case 27u: goto L_088A0170;
    case 28u: goto L_088A019C;
    case 29u: goto L_088A01B4;
    case 30u: goto L_088A01D0;
    case 31u: goto L_088A01D8;
    case 32u: goto L_088A01F4;
    case 33u: goto L_088A01FC;
    case 34u: goto L_088A0218;
    case 35u: goto L_088A0220;
    case 36u: goto L_088A023C;
    case 37u: goto L_088A0244;
    case 38u: goto L_088A0260;
    case 39u: goto L_088A0268;
    case 40u: goto L_088A0284;
    case 41u: goto L_088A028C;
    case 42u: goto L_088A02A8;
    case 43u: goto L_088A02B0;
    case 44u: goto L_088A02CC;
    case 45u: goto L_088A02D4;
    case 46u: goto L_088A02F0;
    case 47u: goto L_088A02F8;
    case 48u: goto L_088A0314;
    case 49u: goto L_088A031C;
    case 50u: goto L_088A0338;
    case 51u: goto L_088A0340;
    case 52u: goto L_088A035C;
    case 53u: goto L_088A0364;
    case 54u: goto L_088A0380;
    case 55u: goto L_088A0388;
    case 56u: goto L_088A03A4;
    case 57u: goto L_088A03AC;
    case 58u: goto L_088A03C8;
    case 59u: goto L_088A03D0;
    case 60u: goto L_088A03EC;
    case 61u: goto L_088A03F4;
    case 62u: goto L_088A0410;
    case 63u: goto L_088A041C;
    case 64u: goto L_088A0424;
    case 65u: goto L_088A0434;
    case 66u: goto L_088A044C;
    case 67u: goto L_088A0468;
    case 68u: goto L_088A0470;
    case 69u: goto L_088A048C;
    case 70u: goto L_088A0494;
    case 71u: goto L_088A04B0;
    case 72u: goto L_088A04B8;
    case 73u: goto L_088A04D4;
    case 74u: goto L_088A04DC;
    case 75u: goto L_088A04F8;
    case 76u: goto L_088A0500;
    case 77u: goto L_088A051C;
    case 78u: goto L_088A0524;
    case 79u: goto L_088A0540;
    case 80u: goto L_088A0548;
    case 81u: goto L_088A0564;
    case 82u: goto L_088A056C;
    case 83u: goto L_088A0588;
    case 84u: goto L_088A0590;
    case 85u: goto L_088A05AC;
    case 86u: goto L_088A05B4;
    case 87u: goto L_088A05D0;
    case 88u: goto L_088A05D8;
    case 89u: goto L_088A05F4;
    case 90u: goto L_088A05FC;
    case 91u: goto L_088A0618;
    case 92u: goto L_088A0620;
    case 93u: goto L_088A063C;
    case 94u: goto L_088A0644;
    case 95u: goto L_088A0660;
    case 96u: goto L_088A0668;
    case 97u: goto L_088A0684;
    case 98u: goto L_088A068C;
    case 99u: goto L_088A06A8;
    case 100u: goto L_088A06B0;
    case 101u: goto L_088A06C8;
    case 102u: goto L_088A06D0;
    case 103u: goto L_088A06D8;
    case 104u: goto L_088A06E0;
    case 105u: goto L_088A0714;
    case 106u: goto L_088A0724;
    case 107u: goto L_088A0748;
    case 108u: goto L_088A0768;
    case 109u: goto L_088A077C;
    case 110u: goto L_088A0784;
    case 111u: goto L_088A0790;
    case 112u: goto L_088A07A0;
    case 113u: goto L_088A07BC;
    case 114u: goto L_088A07DC;
    case 115u: goto L_088A07E8;
    case 116u: goto L_088A07F0;
    case 117u: goto L_088A0804;
    case 118u: goto L_088A0818;
    case 119u: goto L_088A0820;
    case 120u: goto L_088A083C;
    case 121u: goto L_088A084C;
    case 122u: goto L_088A0860;
    case 123u: goto L_088A0880;
    case 124u: goto L_088A08A4;
    case 125u: goto L_088A08B0;
    case 126u: goto L_088A08BC;
    case 127u: goto L_088A08C4;
    case 128u: goto L_088A08C8;
    case 129u: goto L_088A08CC;
    case 130u: goto L_088A08E8;
    case 131u: goto L_088A08F0;
    case 132u: goto L_088A0924;
    case 133u: goto L_088A0930;
    case 134u: goto L_088A0938;
    case 135u: goto L_088A0944;
    case 136u: goto L_088A094C;
    case 137u: goto L_088A0954;
    case 138u: goto L_088A095C;
    case 139u: goto L_088A0964;
    case 140u: goto L_088A096C;
    case 141u: goto L_088A0978;
    case 142u: goto L_088A0984;
    case 143u: goto L_088A098C;
    case 144u: goto L_088A099C;
    case 145u: goto L_088A09B8;
    case 146u: goto L_088A09E8;
    case 147u: goto L_088A09F0;
    case 148u: goto L_088A09FC;
    case 149u: goto L_088A0A04;
    case 150u: goto L_088A0A0C;
    case 151u: goto L_088A0A18;
    case 152u: goto L_088A0A20;
    case 153u: goto L_088A0A34;
    case 154u: goto L_088A0A44;
    case 155u: goto L_088A0A54;
    case 156u: goto L_088A0A64;
    case 157u: goto L_088A0A74;
    case 158u: goto L_088A0A7C;
    case 159u: goto L_088A0A88;
    case 160u: goto L_088A0A90;
    case 161u: goto L_088A0AA4;
    case 162u: goto L_088A0AB4;
    case 163u: goto L_088A0AC4;
    case 164u: goto L_088A0AD4;
    case 165u: goto L_088A0AE4;
    case 166u: goto L_088A0AE8;
    case 167u: goto L_088A0B18;
    case 168u: goto L_088A0B38;
    case 169u: goto L_088A0B58;
    case 170u: goto L_088A0B60;
    case 171u: goto L_088A0B68;
    case 172u: goto L_088A0B70;
    case 173u: goto L_088A0B78;
    case 174u: goto L_088A0B80;
    case 175u: goto L_088A0B88;
    case 176u: goto L_088A0B90;
    case 177u: goto L_088A0B98;
    case 178u: goto L_088A0BA0;
    case 179u: goto L_088A0BA8;
    case 180u: goto L_088A0BC8;
    case 181u: goto L_088A0BF0;
    case 182u: goto L_088A0BF8;
    case 183u: goto L_088A0C08;
    case 184u: goto L_088A0C0C;
    case 185u: goto L_088A0C24;
    case 186u: goto L_088A0C30;
    case 187u: goto L_088A0C48;
    case 188u: goto L_088A0C54;
    case 189u: goto L_088A0C6C;
    case 190u: goto L_088A0C88;
    case 191u: goto L_088A0CB0;
    case 192u: goto L_088A0CB8;
    case 193u: goto L_088A0CC0;
    case 194u: goto L_088A0CD0;
    case 195u: goto L_088A0CE0;
    case 196u: goto L_088A0CF4;
    case 197u: goto L_088A0D10;
    case 198u: goto L_088A0D34;
    case 199u: goto L_088A0D3C;
    case 200u: goto L_088A0D48;
    case 201u: goto L_088A0D6C;
    case 202u: goto L_088A0D7C;
    case 203u: goto L_088A0D8C;
    case 204u: goto L_088A0DA4;
    case 205u: goto L_088A0DBC;
    case 206u: goto L_088A0DD4;
    case 207u: goto L_088A0DE4;
    case 208u: goto L_088A0DEC;
    case 209u: goto L_088A0DF8;
    case 210u: goto L_088A0E40;
    case 211u: goto L_088A0E4C;
    case 212u: goto L_088A0E60;
    case 213u: goto L_088A0E70;
    case 214u: goto L_088A0E7C;
    case 215u: goto L_088A0E8C;
    case 216u: goto L_088A0E98;
    case 217u: goto L_088A0EB4;
    case 218u: goto L_088A0EC8;
    case 219u: goto L_088A0ED0;
    case 220u: goto L_088A0ED8;
    case 221u: goto L_088A0EE0;
    case 222u: goto L_088A0EE4;
    case 223u: goto L_088A0EEC;
    case 224u: goto L_088A0EFC;
    case 225u: goto L_088A0F04;
    case 226u: goto L_088A0F34;
    case 227u: goto L_088A0F60;
    case 228u: goto L_088A0F70;
    case 229u: goto L_088A0F80;
    case 230u: goto L_088A0F90;
    case 231u: goto L_088A0F9C;
    case 232u: goto L_088A0FB8;
    case 233u: goto L_088A0FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A0000:
    aot_gpr[31] = (0x088A0008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0008u) goto L_088A0008;
    return;
L_088A0008:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0014:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A012C;
      }
      goto L_088A0038;
    }
L_088A0038:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6036));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1336));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1292));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(1256));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(1224));
      if (branch_taken) {
          goto L_088A0088;
      }
      goto L_088A0058;
    }
L_088A0058:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6100));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1360), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1364));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_088A0078;
      }
      goto L_088A0070;
    }
L_088A0070:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24776));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1396), aot_gpr[6]);
    goto L_088A0078;
L_088A0078:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088A0088;
      }
      goto L_088A0080;
    }
L_088A0080:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6196));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1360), aot_gpr[5]);
    goto L_088A0088;
L_088A0088:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088A00A8;
      }
      goto L_088A0090;
    }
L_088A0090:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6068));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1316), aot_gpr[5]);
      if (branch_taken) {
          goto L_088A00A8;
      }
      goto L_088A009C;
    }
L_088A009C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6196));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1316), aot_gpr[4]);
    goto L_088A00A8;
L_088A00A8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088A00D4;
      }
      goto L_088A00B0;
    }
L_088A00B0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6132));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1280), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1284));
    aot_gpr[31] = (0x088A00C4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 36u, 0x0889F2D8u>(ctx, &aot_mem) && ctx.pc == 0x088A00C4u) goto L_088A00C4;
    return;
L_088A00C4:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088A00D4;
      }
      goto L_088A00CC;
    }
L_088A00CC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6196));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1280), aot_gpr[4]);
    goto L_088A00D4;
L_088A00D4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A00FC;
      }
      goto L_088A00DC;
    }
L_088A00DC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6164));
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1248), aot_gpr[4]);
      if (branch_taken) {
          goto L_088A00F8;
      }
      goto L_088A00EC;
    }
L_088A00EC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6196));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1248), aot_gpr[4]);
    goto L_088A00F8;
L_088A00F8:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    goto L_088A00FC;
L_088A00FC:
    aot_gpr[31] = (0x088A0104u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 243u, 0x0889EFB8u>(ctx, &aot_mem) && ctx.pc == 0x088A0104u) goto L_088A0104;
    return;
L_088A0104:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_088A011C;
      }
      goto L_088A010C;
    }
L_088A010C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25160));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_088A011C;
L_088A011C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A012C;
      }
      goto L_088A0124;
    }
L_088A0124:
    aot_gpr[31] = (0x088A012Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 201u, 0x0889FFF8u>(ctx, &aot_mem) && ctx.pc == 0x088A012Cu) goto L_088A012C;
    return;
L_088A012C:
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
L_088A0148:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1072));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1036), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1040), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1044), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1048), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1052), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1056), aot_gpr[31]);
    aot_gpr[31] = (0x088A0170u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 142u, 0x089EEBC0u>(ctx, &aot_mem) && ctx.pc == 0x088A0170u) goto L_088A0170;
    return;
L_088A0170:
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(1028));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16672));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16964));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(17032));
      if (branch_taken) {
          goto L_088A03F4;
      }
      goto L_088A019C;
    }
L_088A019C:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(17120)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A01B4:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 196u);
    aot_gpr[31] = (0x088A01D0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16852));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A01D0u) goto L_088A01D0;
    return;
L_088A01D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A01D8;
    }
L_088A01D8:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 202u);
    aot_gpr[31] = (0x088A01F4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16980));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A01F4u) goto L_088A01F4;
    return;
L_088A01F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A01FC;
    }
L_088A01FC:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 205u);
    aot_gpr[31] = (0x088A0218u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16984));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A0218u) goto L_088A0218;
    return;
L_088A0218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A0220;
    }
L_088A0220:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 208u);
    aot_gpr[31] = (0x088A023Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16988));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A023Cu) goto L_088A023C;
    return;
L_088A023C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A0244;
    }
L_088A0244:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 211u);
    aot_gpr[31] = (0x088A0260u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16992));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A0260u) goto L_088A0260;
    return;
L_088A0260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A0268;
    }
L_088A0268:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 214u);
    aot_gpr[31] = (0x088A0284u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16996));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A0284u) goto L_088A0284;
    return;
L_088A0284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A028C;
    }
L_088A028C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 217u);
    aot_gpr[31] = (0x088A02A8u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17000));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A02A8u) goto L_088A02A8;
    return;
L_088A02A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A02B0;
    }
L_088A02B0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 220u);
    aot_gpr[31] = (0x088A02CCu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17004));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A02CCu) goto L_088A02CC;
    return;
L_088A02CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A02D4;
    }
L_088A02D4:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 223u);
    aot_gpr[31] = (0x088A02F0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17008));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A02F0u) goto L_088A02F0;
    return;
L_088A02F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A02F8;
    }
L_088A02F8:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 226u);
    aot_gpr[31] = (0x088A0314u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17012));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A0314u) goto L_088A0314;
    return;
L_088A0314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A031C;
    }
L_088A031C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 229u);
    aot_gpr[31] = (0x088A0338u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17016));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A0338u) goto L_088A0338;
    return;
L_088A0338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A0340;
    }
L_088A0340:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 232u);
    aot_gpr[31] = (0x088A035Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17020));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A035Cu) goto L_088A035C;
    return;
L_088A035C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A0364;
    }
L_088A0364:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 235u);
    aot_gpr[31] = (0x088A0380u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16876));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A0380u) goto L_088A0380;
    return;
L_088A0380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A0388;
    }
L_088A0388:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 238u);
    aot_gpr[31] = (0x088A03A4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17024));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A03A4u) goto L_088A03A4;
    return;
L_088A03A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A03AC;
    }
L_088A03AC:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 241u);
    aot_gpr[31] = (0x088A03C8u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17028));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A03C8u) goto L_088A03C8;
    return;
L_088A03C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A03D0;
    }
L_088A03D0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 244u);
    aot_gpr[31] = (0x088A03ECu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16944));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A03ECu) goto L_088A03EC;
    return;
L_088A03EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0410;
      }
      goto L_088A03F4;
    }
L_088A03F4:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 248u);
    aot_gpr[31] = (0x088A0410u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16940));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A0410u) goto L_088A0410;
    return;
L_088A0410:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(1032));
    aot_gpr[31] = (0x088A041Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = 0x08A5AD4Cu;
    return;
L_088A041C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088A06B0;
      }
      goto L_088A0424;
    }
L_088A0424:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A068C;
      }
      goto L_088A0434;
    }
L_088A0434:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(17184)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A044C:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 266u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A0468u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17040));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A0468u) goto L_088A0468;
    return;
L_088A0468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A0470;
    }
L_088A0470:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 272u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A048Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17044));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A048Cu) goto L_088A048C;
    return;
L_088A048C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A0494;
    }
L_088A0494:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 275u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A04B0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17048));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A04B0u) goto L_088A04B0;
    return;
L_088A04B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A04B8;
    }
L_088A04B8:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 278u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A04D4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17052));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A04D4u) goto L_088A04D4;
    return;
L_088A04D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A04DC;
    }
L_088A04DC:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 281u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A04F8u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17056));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A04F8u) goto L_088A04F8;
    return;
L_088A04F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A0500;
    }
L_088A0500:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 284u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A051Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17060));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A051Cu) goto L_088A051C;
    return;
L_088A051C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A0524;
    }
L_088A0524:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 287u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A0540u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17064));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A0540u) goto L_088A0540;
    return;
L_088A0540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A0548;
    }
L_088A0548:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 290u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A0564u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17068));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A0564u) goto L_088A0564;
    return;
L_088A0564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A056C;
    }
L_088A056C:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 293u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A0588u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17072));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A0588u) goto L_088A0588;
    return;
L_088A0588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A0590;
    }
L_088A0590:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 296u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A05ACu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17076));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A05ACu) goto L_088A05AC;
    return;
L_088A05AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A05B4;
    }
L_088A05B4:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 299u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A05D0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17080));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A05D0u) goto L_088A05D0;
    return;
L_088A05D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A05D8;
    }
L_088A05D8:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 302u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A05F4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17084));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A05F4u) goto L_088A05F4;
    return;
L_088A05F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A05FC;
    }
L_088A05FC:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 305u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A0618u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17088));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A0618u) goto L_088A0618;
    return;
L_088A0618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A0620;
    }
L_088A0620:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 308u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A063Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17092));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A063Cu) goto L_088A063C;
    return;
L_088A063C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A0644;
    }
L_088A0644:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 311u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A0660u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17096));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A0660u) goto L_088A0660;
    return;
L_088A0660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A0668;
    }
L_088A0668:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 314u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A0684u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17100));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A0684u) goto L_088A0684;
    return;
L_088A0684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A068C;
    }
L_088A068C:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 318u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A06A8u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17104));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A06A8u) goto L_088A06A8;
    return;
L_088A06A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A06B0;
    }
L_088A06B0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 325u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A06C8u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x088A06C8u) goto L_088A06C8;
    return;
L_088A06C8:
    aot_gpr[31] = (0x088A06D0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 70u, 0x0889F50Cu>(ctx, &aot_mem) && ctx.pc == 0x088A06D0u) goto L_088A06D0;
    return;
L_088A06D0:
    aot_gpr[31] = (0x088A06D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x088A06D8u) goto L_088A06D8;
    return;
L_088A06D8:
    aot_gpr[31] = (0x088A06E0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x088A06E0u) goto L_088A06E0;
    return;
L_088A06E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 7u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17108));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x088A0714u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A0714u) goto L_088A0714;
    return;
L_088A0714:
    aot_gpr[16] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A0724u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 144u, 0x089EEBF4u>(ctx, &aot_mem) && ctx.pc == 0x088A0724u) goto L_088A0724;
    return;
L_088A0724:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1036)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1040)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1044)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1048)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1052)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1056)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0748:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26672), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0768:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A077Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x088A077Cu) goto L_088A077C;
    return;
L_088A077C:
    aot_gpr[31] = (0x088A0784u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0784u) goto L_088A0784;
    return;
L_088A0784:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088A0790u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x088A0790u) goto L_088A0790;
    return;
L_088A0790:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A07A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A07F0;
      }
      goto L_088A07BC;
    }
L_088A07BC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6004));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26684), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A07DCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A07DCu) goto L_088A07DC;
    return;
L_088A07DC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A07F0;
      }
      goto L_088A07E8;
    }
L_088A07E8:
    aot_gpr[31] = (0x088A07F0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088A0768;
L_088A07F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0804:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A0818u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x088A0818u) goto L_088A0818;
    return;
L_088A0818:
    aot_gpr[31] = (0x088A0820u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0820u) goto L_088A0820;
    return;
L_088A0820:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 13u);
    aot_gpr[31] = (0x088A083Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17248));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x088A083Cu) goto L_088A083C;
    return;
L_088A083C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A084C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A0860u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x088A0860u) goto L_088A0860;
    return;
L_088A0860:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6004));
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
L_088A0880:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(26684)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A08CC;
      }
      goto L_088A08A4;
    }
L_088A08A4:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x088A08B0u);
    aot_gpr[4] = (0u | 8u);
    goto L_088A0804;
L_088A08B0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A08C8;
      }
      goto L_088A08BC;
    }
L_088A08BC:
    aot_gpr[31] = (0x088A08C4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088A084C;
L_088A08C4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_088A08C8;
L_088A08C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(26684), aot_gpr[17]);
    goto L_088A08CC;
L_088A08CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(26684)));
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
L_088A08E8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A08F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    aot_gpr[31] = (0x088A0924u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x088A0924u) goto L_088A0924;
    return;
L_088A0924:
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A095C;
      }
      goto L_088A0930;
    }
L_088A0930:
    aot_gpr[31] = (0x088A0938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x088A0938u) goto L_088A0938;
    return;
L_088A0938:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(1400)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0954;
      }
      goto L_088A0944;
    }
L_088A0944:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A0964;
      }
      goto L_088A094C;
    }
L_088A094C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A098C;
      }
      goto L_088A0954;
    }
L_088A0954:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A0AE8;
      }
      goto L_088A095C;
    }
L_088A095C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A0AE8;
      }
      goto L_088A0964;
    }
L_088A0964:
    aot_gpr[31] = (0x088A096Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A096Cu) goto L_088A096C;
    return;
L_088A096C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A0978u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A0978u) goto L_088A0978;
    return;
L_088A0978:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A0984u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 61u, 0x0889F4A4u>(ctx, &aot_mem) && ctx.pc == 0x088A0984u) goto L_088A0984;
    return;
L_088A0984:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A09F0;
      }
      goto L_088A098C;
    }
L_088A098C:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A099Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 226u, 0x088A6F04u>(ctx, &aot_mem) && ctx.pc == 0x088A099Cu) goto L_088A099C;
    return;
L_088A099C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(76));
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088A09B8u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 2u, 0x088A703Cu>(ctx, &aot_mem) && ctx.pc == 0x088A09B8u) goto L_088A09B8;
    return;
L_088A09B8:
    aot_gpr[30] = (2216u << 16u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-5056));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(25192));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-5152));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088A0A04;
      }
      goto L_088A09E8;
    }
L_088A09E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0A7C;
      }
      goto L_088A09F0;
    }
L_088A09F0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A09FCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 50u, 0x0889F3F4u>(ctx, &aot_mem) && ctx.pc == 0x088A09FCu) goto L_088A09FC;
    return;
L_088A09FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A0AE8;
      }
      goto L_088A0A04;
    }
L_088A0A04:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088A0A7C;
      }
      goto L_088A0A0C;
    }
L_088A0A0C:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (aot_gpr[4] | 0u);
        goto L_088A0A18;
    }
    goto L_088A0A18;
L_088A0A18:
    aot_gpr[31] = (0x088A0A20u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 68u, 0x0889F4ECu>(ctx, &aot_mem) && ctx.pc == 0x088A0A20u) goto L_088A0A20;
    return;
L_088A0A20:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088A0A34u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x088A0A34u) goto L_088A0A34;
    return;
L_088A0A34:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088A0A44u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x088A0A44u) goto L_088A0A44;
    return;
L_088A0A44:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088A0A54u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x088A0A54u) goto L_088A0A54;
    return;
L_088A0A54:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088A0A64u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x088A0A64u) goto L_088A0A64;
    return;
L_088A0A64:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A0A74u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x088A0A74u) goto L_088A0A74;
    return;
L_088A0A74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_088A0AE8;
      }
      goto L_088A0A7C;
    }
L_088A0A7C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (aot_gpr[4] | 0u);
        goto L_088A0A88;
    }
    goto L_088A0A88;
L_088A0A88:
    aot_gpr[31] = (0x088A0A90u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 50u, 0x0889F3F4u>(ctx, &aot_mem) && ctx.pc == 0x088A0A90u) goto L_088A0A90;
    return;
L_088A0A90:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088A0AA4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x088A0AA4u) goto L_088A0AA4;
    return;
L_088A0AA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088A0AB4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x088A0AB4u) goto L_088A0AB4;
    return;
L_088A0AB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088A0AC4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x088A0AC4u) goto L_088A0AC4;
    return;
L_088A0AC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088A0AD4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x088A0AD4u) goto L_088A0AD4;
    return;
L_088A0AD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A0AE4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x088A0AE4u) goto L_088A0AE4;
    return;
L_088A0AE4:
    aot_gpr[2] = (0u | 0u);
    goto L_088A0AE8;
L_088A0AE8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0B18:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26680), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0B38:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26688), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0B58:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0B60:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0B68:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0B70:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0B78:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0B80:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0B88:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0B90:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0B98:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0BA0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0BA8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26696), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0BC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6468)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A0C54;
      }
      goto L_088A0BF0;
    }
L_088A0BF0:
    aot_gpr[31] = (0x088A0BF8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 169u, 0x0881CC0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0BF8u) goto L_088A0BF8;
    return;
L_088A0BF8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A0C0C;
      }
      goto L_088A0C08;
    }
L_088A0C08:
    aot_gpr[16] = (0u | 0u);
    goto L_088A0C0C;
L_088A0C0C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[17] << 6u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2064));
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088A0C24u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 166u, 0x0881CBB8u>(ctx, &aot_mem) && ctx.pc == 0x088A0C24u) goto L_088A0C24;
    return;
L_088A0C24:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088A0C30u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088A0C30u) goto L_088A0C30;
    return;
L_088A0C30:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[17] << 6u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1104));
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088A0C48u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 167u, 0x0881CBD4u>(ctx, &aot_mem) && ctx.pc == 0x088A0C48u) goto L_088A0C48;
    return;
L_088A0C48:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A0C54u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088A0C54u) goto L_088A0C54;
    return;
L_088A0C54:
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
L_088A0C6C:
    aot_gpr[5] = (aot_gpr[5] << 8u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (0u - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0C88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x088A0CB0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 67u, 0x0889B4ACu>(ctx, &aot_mem) && ctx.pc == 0x088A0CB0u) goto L_088A0CB0;
    return;
L_088A0CB0:
    aot_gpr[31] = (0x088A0CB8u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A0CB8u) goto L_088A0CB8;
    return;
L_088A0CB8:
    aot_gpr[31] = (0x088A0CC0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 146u, 0x08964AB8u>(ctx, &aot_mem) && ctx.pc == 0x088A0CC0u) goto L_088A0CC0;
    return;
L_088A0CC0:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    goto L_088A0CD0;
L_088A0CD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A0CE0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 150u, 0x088A4A50u>(ctx, &aot_mem) && ctx.pc == 0x088A0CE0u) goto L_088A0CE0;
    return;
L_088A0CE0:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(768));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_088A0CD0;
      }
      goto L_088A0CF4;
    }
L_088A0CF4:
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
L_088A0D10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A0D3C;
      }
      goto L_088A0D34;
    }
L_088A0D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0D8C;
      }
      goto L_088A0D3C;
    }
L_088A0D3C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A0D48u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 157u, 0x089D1D90u>(ctx, &aot_mem) && ctx.pc == 0x088A0D48u) goto L_088A0D48;
    return;
L_088A0D48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(26508)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(224), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(26508)));
    aot_gpr[31] = (0x088A0D6Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088A0C6C;
L_088A0D6C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A0D7Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 148u, 0x088A49ECu>(ctx, &aot_mem) && ctx.pc == 0x088A0D7Cu) goto L_088A0D7C;
    return;
L_088A0D7C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(720), aot_gpr[4]);
    aot_gpr[31] = (0x088A0D8Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(26508)));
    goto L_088A0C88;
L_088A0D8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0DA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26508)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A0DEC;
      }
      goto L_088A0DBC;
    }
L_088A0DBC:
    aot_gpr[4] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(224), 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088A0DD4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_088A0C6C;
L_088A0DD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(720), 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088A0DE4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_088A0C6C;
L_088A0DE4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(212), aot_gpr[4]);
    goto L_088A0DEC;
L_088A0DEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0DF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[21] = (aot_gpr[7] | 0u);
    aot_gpr[23] = (0u | 1u);
    aot_gpr[17] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[21] + aot_gpr[19]);
    aot_gpr[22] = (aot_gpr[21] + static_cast<std::uint32_t>(12));
    aot_gpr[20] = (2218u << 16u);
    goto L_088A0E40;
L_088A0E40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(26508)));
    aot_gpr[31] = (0x088A0E4Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088A0C6C;
L_088A0E4C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(232));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088A0E60u);
    aot_gpr[6] = (0u | 476u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088A0E60u) goto L_088A0E60;
    return;
L_088A0E60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(26508)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(105))))));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A0E7C;
      }
      goto L_088A0E70;
    }
L_088A0E70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x088A0E7Cu);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(238))))));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 141u, 0x088DBC9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0E7Cu) goto L_088A0E7C;
    return;
L_088A0E7C:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(244));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088A0E8Cu);
    aot_gpr[6] = (0u | 464u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088A0E8Cu) goto L_088A0E8C;
    return;
L_088A0E8C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x088A0E98u);
    aot_gpr[4] = (aot_gpr[16] & 255u);
    goto L_088A0BC8;
L_088A0E98:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(708), static_cast<std::uint8_t>(aot_gpr[23]));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(476));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(476));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(476));
      if (branch_taken) {
          goto L_088A0E40;
      }
      goto L_088A0EB4;
    }
L_088A0EB4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26496)));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A0ED8;
      }
      goto L_088A0EC8;
    }
L_088A0EC8:
    aot_gpr[31] = (0x088A0ED0u);
    aot_gpr[4] = (0u | 67u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x0889AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0ED0u) goto L_088A0ED0;
    return;
L_088A0ED0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(26508)));
      if (branch_taken) {
          goto L_088A0EE4;
      }
      goto L_088A0ED8;
    }
L_088A0ED8:
    aot_gpr[31] = (0x088A0EE0u);
    aot_gpr[4] = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x0889AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0EE0u) goto L_088A0EE0;
    return;
L_088A0EE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(26508)));
    goto L_088A0EE4;
L_088A0EE4:
    aot_gpr[31] = (0x088A0EECu);
    // nop
    goto L_088A0C88;
L_088A0EEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(26508)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088A0EFCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 39u, 0x08983204u>(ctx, &aot_mem) && ctx.pc == 0x088A0EFCu) goto L_088A0EFC;
    return;
L_088A0EFC:
    aot_gpr[31] = (0x088A0F04u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 195u, 0x0895ECC8u>(ctx, &aot_mem) && ctx.pc == 0x088A0F04u) goto L_088A0F04;
    return;
L_088A0F04:
    aot_gpr[2] = (0u | 2856u);
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
L_088A0F34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088A0F60u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088A0C6C;
L_088A0F60:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(708)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A0F9C;
      }
      goto L_088A0F70;
    }
L_088A0F70:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(232));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088A0F80u);
    aot_gpr[6] = (0u | 476u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088A0F80u) goto L_088A0F80;
    return;
L_088A0F80:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(244));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x088A0F90u);
    aot_gpr[6] = (0u | 464u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088A0F90u) goto L_088A0F90;
    return;
L_088A0F90:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x088A0F9Cu);
    aot_gpr[4] = (aot_gpr[16] & 255u);
    goto L_088A0BC8;
L_088A0F9C:
    aot_gpr[2] = (0u | 476u);
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
L_088A0FB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (20352u << 16u);
    aot_gpr[20] = (0u | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[18] = (2218u << 16u);
    goto L_088A0FF8;
L_088A0FF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(26508)));
    aot_gpr[31] = (0x088A1004u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_088A0C6C;
}

void recomp_unit_0156(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0156_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_156(Runtime &runtime) {
    runtime.register_generated_unit(156u, 0x088A0000u, 4096u, &recomp_unit_0156, &recomp_unit_0156_entry);
    runtime.register_function(0x088A0000u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0008u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0014u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0038u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0058u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0070u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0078u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0080u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0088u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0090u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A009Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A00A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A00B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A00C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A00CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A00D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A00DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A00ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A00F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A00FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0104u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A010Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A011Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0124u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A012Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0148u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0170u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A019Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A01B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A01D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A01D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A01F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A01FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0218u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0220u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A023Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0244u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0260u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0268u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0284u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A028Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A02A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A02B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A02CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A02D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A02F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A02F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0314u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A031Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0338u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0340u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A035Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0364u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0380u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0388u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A03A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A03ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A03C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A03D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A03ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A03F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0410u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A041Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0424u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0434u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A044Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0468u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0470u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A048Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0494u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A04B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A04B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A04D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A04DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A04F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0500u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A051Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0524u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0540u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0548u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0564u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A056Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0588u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0590u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A05ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A05B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A05D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A05D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A05F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A05FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0618u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0620u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A063Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0644u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0660u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0668u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0684u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A068Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A06A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A06B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A06C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A06D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A06D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A06E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0714u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0724u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0748u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0768u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A077Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0784u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0790u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A07A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A07BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A07DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A07E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A07F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0804u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0818u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0820u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A083Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A084Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0860u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0880u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A08A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A08B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A08BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A08C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A08C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A08CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A08E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A08F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0924u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0930u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0938u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0944u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A094Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0954u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A095Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0964u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A096Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0978u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0984u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A098Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A099Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A09B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A09E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A09F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A09FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0A04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0A0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0A18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0A20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0A34u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0A44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0A54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0A64u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0A74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0A7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0A88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0A90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0AA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0AB4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0AC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0AD4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0AE4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0AE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0B18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0B38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0B58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0B60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0B68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0B70u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0B78u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0B80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0B88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0B90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0B98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0BA0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0BA8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0BC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0BF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0BF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0C08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0C0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0C24u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0C30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0C48u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0C54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0C6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0C88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0CB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0CB8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0CC0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0CD0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0CE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0CF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0D10u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0D34u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0D3Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0D48u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0D6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0D7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0D8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0DA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0DBCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0DD4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0DE4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0DECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0DF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0E40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0E4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0E60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0E70u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0E7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0E8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0E98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0EB4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0EC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0ED0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0ED8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0EE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0EE4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0EECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0EFCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0F04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0F34u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0F60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0F70u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0F80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0F90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0F9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0FB8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x088A0FF8u, &recomp_unit_0156, "recomp_unit_0156");
}
} // namespace psprecomp
