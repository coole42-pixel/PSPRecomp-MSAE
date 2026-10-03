#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0193[1024] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0,
    15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 29, 0, 0,
    0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38,
    0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0,
    48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57,
    0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0,
    65, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0,
    0, 74, 0, 75, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0,
    84, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 119, 0, 120, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151,
    0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0,
    0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0,
    167, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 174, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 179, 0, 180, 0, 0, 181, 182, 0, 183, 0, 0, 184, 185, 0, 0,
    0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0,
    190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197,
    0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 204, 205,
    0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 210, 0, 0, 0, 211, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0,
    216, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231,
};
void recomp_unit_0193_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088C5000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0193[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C5000;
    case 2u: goto L_088C5010;
    case 3u: goto L_088C501C;
    case 4u: goto L_088C502C;
    case 5u: goto L_088C5038;
    case 6u: goto L_088C5048;
    case 7u: goto L_088C5060;
    case 8u: goto L_088C5078;
    case 9u: goto L_088C5090;
    case 10u: goto L_088C50C0;
    case 11u: goto L_088C50CC;
    case 12u: goto L_088C50D8;
    case 13u: goto L_088C50F0;
    case 14u: goto L_088C50F8;
    case 15u: goto L_088C5100;
    case 16u: goto L_088C511C;
    case 17u: goto L_088C5134;
    case 18u: goto L_088C5160;
    case 19u: goto L_088C5180;
    case 20u: goto L_088C5188;
    case 21u: goto L_088C519C;
    case 22u: goto L_088C51AC;
    case 23u: goto L_088C51B4;
    case 24u: goto L_088C51BC;
    case 25u: goto L_088C51C8;
    case 26u: goto L_088C51D8;
    case 27u: goto L_088C51E0;
    case 28u: goto L_088C51E8;
    case 29u: goto L_088C51F4;
    case 30u: goto L_088C5208;
    case 31u: goto L_088C5214;
    case 32u: goto L_088C5220;
    case 33u: goto L_088C5234;
    case 34u: goto L_088C5240;
    case 35u: goto L_088C524C;
    case 36u: goto L_088C5260;
    case 37u: goto L_088C526C;
    case 38u: goto L_088C527C;
    case 39u: goto L_088C5284;
    case 40u: goto L_088C528C;
    case 41u: goto L_088C5294;
    case 42u: goto L_088C52B0;
    case 43u: goto L_088C52CC;
    case 44u: goto L_088C52D4;
    case 45u: goto L_088C52E0;
    case 46u: goto L_088C52E8;
    case 47u: goto L_088C52F0;
    case 48u: goto L_088C5300;
    case 49u: goto L_088C5314;
    case 50u: goto L_088C532C;
    case 51u: goto L_088C5334;
    case 52u: goto L_088C533C;
    case 53u: goto L_088C5344;
    case 54u: goto L_088C5350;
    case 55u: goto L_088C536C;
    case 56u: goto L_088C5374;
    case 57u: goto L_088C537C;
    case 58u: goto L_088C5384;
    case 59u: goto L_088C538C;
    case 60u: goto L_088C5394;
    case 61u: goto L_088C53CC;
    case 62u: goto L_088C53DC;
    case 63u: goto L_088C53F0;
    case 64u: goto L_088C53F8;
    case 65u: goto L_088C5400;
    case 66u: goto L_088C5408;
    case 67u: goto L_088C5410;
    case 68u: goto L_088C5420;
    case 69u: goto L_088C5440;
    case 70u: goto L_088C5450;
    case 71u: goto L_088C5458;
    case 72u: goto L_088C5464;
    case 73u: goto L_088C5474;
    case 74u: goto L_088C5484;
    case 75u: goto L_088C548C;
    case 76u: goto L_088C5494;
    case 77u: goto L_088C54A0;
    case 78u: goto L_088C54B8;
    case 79u: goto L_088C54C0;
    case 80u: goto L_088C54C8;
    case 81u: goto L_088C54D8;
    case 82u: goto L_088C54E0;
    case 83u: goto L_088C54F0;
    case 84u: goto L_088C5500;
    case 85u: goto L_088C550C;
    case 86u: goto L_088C5514;
    case 87u: goto L_088C551C;
    case 88u: goto L_088C5534;
    case 89u: goto L_088C5540;
    case 90u: goto L_088C5560;
    case 91u: goto L_088C5570;
    case 92u: goto L_088C559C;
    case 93u: goto L_088C55A8;
    case 94u: goto L_088C55B4;
    case 95u: goto L_088C55C4;
    case 96u: goto L_088C55E4;
    case 97u: goto L_088C55EC;
    case 98u: goto L_088C55F8;
    case 99u: goto L_088C5618;
    case 100u: goto L_088C5638;
    case 101u: goto L_088C5658;
    case 102u: goto L_088C5678;
    case 103u: goto L_088C5684;
    case 104u: goto L_088C5690;
    case 105u: goto L_088C56A4;
    case 106u: goto L_088C56AC;
    case 107u: goto L_088C56C0;
    case 108u: goto L_088C570C;
    case 109u: goto L_088C5728;
    case 110u: goto L_088C5744;
    case 111u: goto L_088C5764;
    case 112u: goto L_088C577C;
    case 113u: goto L_088C5798;
    case 114u: goto L_088C57B0;
    case 115u: goto L_088C57BC;
    case 116u: goto L_088C57C8;
    case 117u: goto L_088C57E4;
    case 118u: goto L_088C5800;
    case 119u: goto L_088C5818;
    case 120u: goto L_088C5820;
    case 121u: goto L_088C5824;
    case 122u: goto L_088C5840;
    case 123u: goto L_088C584C;
    case 124u: goto L_088C586C;
    case 125u: goto L_088C58A0;
    case 126u: goto L_088C58B8;
    case 127u: goto L_088C58C4;
    case 128u: goto L_088C58D8;
    case 129u: goto L_088C58E4;
    case 130u: goto L_088C58F4;
    case 131u: goto L_088C58FC;
    case 132u: goto L_088C591C;
    case 133u: goto L_088C5924;
    case 134u: goto L_088C592C;
    case 135u: goto L_088C5930;
    case 136u: goto L_088C593C;
    case 137u: goto L_088C595C;
    case 138u: goto L_088C5964;
    case 139u: goto L_088C598C;
    case 140u: goto L_088C59A8;
    case 141u: goto L_088C59B8;
    case 142u: goto L_088C59C4;
    case 143u: goto L_088C59E0;
    case 144u: goto L_088C59EC;
    case 145u: goto L_088C5A00;
    case 146u: goto L_088C5A1C;
    case 147u: goto L_088C5A24;
    case 148u: goto L_088C5A2C;
    case 149u: goto L_088C5A40;
    case 150u: goto L_088C5A6C;
    case 151u: goto L_088C5A7C;
    case 152u: goto L_088C5A8C;
    case 153u: goto L_088C5AA0;
    case 154u: goto L_088C5AB8;
    case 155u: goto L_088C5AC8;
    case 156u: goto L_088C5AD0;
    case 157u: goto L_088C5AEC;
    case 158u: goto L_088C5AF8;
    case 159u: goto L_088C5B08;
    case 160u: goto L_088C5B10;
    case 161u: goto L_088C5B28;
    case 162u: goto L_088C5B34;
    case 163u: goto L_088C5B54;
    case 164u: goto L_088C5B60;
    case 165u: goto L_088C5B70;
    case 166u: goto L_088C5B78;
    case 167u: goto L_088C5B80;
    case 168u: goto L_088C5B88;
    case 169u: goto L_088C5B9C;
    case 170u: goto L_088C5BB0;
    case 171u: goto L_088C5BC4;
    case 172u: goto L_088C5BD8;
    case 173u: goto L_088C5BEC;
    case 174u: goto L_088C5BF0;
    case 175u: goto L_088C5BF8;
    case 176u: goto L_088C5C18;
    case 177u: goto L_088C5C38;
    case 178u: goto L_088C5C40;
    case 179u: goto L_088C5C44;
    case 180u: goto L_088C5C4C;
    case 181u: goto L_088C5C58;
    case 182u: goto L_088C5C5C;
    case 183u: goto L_088C5C64;
    case 184u: goto L_088C5C70;
    case 185u: goto L_088C5C74;
    case 186u: goto L_088C5C84;
    case 187u: goto L_088C5CE4;
    case 188u: goto L_088C5CF0;
    case 189u: goto L_088C5CF8;
    case 190u: goto L_088C5D00;
    case 191u: goto L_088C5D10;
    case 192u: goto L_088C5D24;
    case 193u: goto L_088C5D34;
    case 194u: goto L_088C5D48;
    case 195u: goto L_088C5D58;
    case 196u: goto L_088C5D6C;
    case 197u: goto L_088C5D7C;
    case 198u: goto L_088C5D90;
    case 199u: goto L_088C5DA0;
    case 200u: goto L_088C5DAC;
    case 201u: goto L_088C5DBC;
    case 202u: goto L_088C5DE0;
    case 203u: goto L_088C5DF0;
    case 204u: goto L_088C5DF8;
    case 205u: goto L_088C5DFC;
    case 206u: goto L_088C5E1C;
    case 207u: goto L_088C5E48;
    case 208u: goto L_088C5E50;
    case 209u: goto L_088C5E60;
    case 210u: goto L_088C5E64;
    case 211u: goto L_088C5E74;
    case 212u: goto L_088C5E98;
    case 213u: goto L_088C5EB0;
    case 214u: goto L_088C5ED0;
    case 215u: goto L_088C5EEC;
    case 216u: goto L_088C5F00;
    case 217u: goto L_088C5F08;
    case 218u: goto L_088C5F14;
    case 219u: goto L_088C5F24;
    case 220u: goto L_088C5F2C;
    case 221u: goto L_088C5F48;
    case 222u: goto L_088C5F5C;
    case 223u: goto L_088C5F74;
    case 224u: goto L_088C5F88;
    case 225u: goto L_088C5F90;
    case 226u: goto L_088C5FAC;
    case 227u: goto L_088C5FB8;
    case 228u: goto L_088C5FC0;
    case 229u: goto L_088C5FD4;
    case 230u: goto L_088C5FF4;
    case 231u: goto L_088C5FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C5000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088C5010u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5010u) goto L_088C5010;
    return;
L_088C5010:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_088C502C;
      }
      goto L_088C501C;
    }
L_088C501C:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9656));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    goto L_088C502C;
L_088C502C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[31] = (0x088C5038u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 32u, 0x088621BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5038u) goto L_088C5038;
    return;
L_088C5038:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C5048u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31928));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088C5048u) goto L_088C5048;
    return;
L_088C5048:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C5060u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31944));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088C5060u) goto L_088C5060;
    return;
L_088C5060:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C5078u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31964));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088C5078u) goto L_088C5078;
    return;
L_088C5078:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C5090u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31980));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088C5090u) goto L_088C5090;
    return;
L_088C5090:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088C50C0u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C50C0u) goto L_088C50C0;
    return;
L_088C50C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088C50D8;
      }
      goto L_088C50CC;
    }
L_088C50CC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11936));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    goto L_088C50D8;
L_088C50D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7000), aot_gpr[19]);
    aot_gpr[31] = (0x088C50F0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 80u, 0x088935FCu>(ctx, &aot_mem) && ctx.pc == 0x088C50F0u) goto L_088C50F0;
    return;
L_088C50F0:
    aot_gpr[31] = (0x088C50F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 98u, 0x08887C90u>(ctx, &aot_mem) && ctx.pc == 0x088C50F8u) goto L_088C50F8;
    return;
L_088C50F8:
    aot_gpr[31] = (0x088C5100u);
    aot_gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 59u, 0x0885B458u>(ctx, &aot_mem) && ctx.pc == 0x088C5100u) goto L_088C5100;
    return;
L_088C5100:
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
L_088C511C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088C5134u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 65u, 0x0885B51Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5134u) goto L_088C5134;
    return;
L_088C5134:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7000), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088C5160u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5160u) goto L_088C5160;
    return;
L_088C5160:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088C5180u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5180u) goto L_088C5180;
    return;
L_088C5180:
    aot_gpr[31] = (0x088C5188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 48u, 0x088622BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5188u) goto L_088C5188;
    return;
L_088C5188:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C519C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C51ACu);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 119u, 0x0882FAACu>(ctx, &aot_mem) && ctx.pc == 0x088C51ACu) goto L_088C51AC;
    return;
L_088C51AC:
    aot_gpr[31] = (0x088C51B4u);
    aot_gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 119u, 0x0882FAACu>(ctx, &aot_mem) && ctx.pc == 0x088C51B4u) goto L_088C51B4;
    return;
L_088C51B4:
    aot_gpr[31] = (0x088C51BCu);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 119u, 0x0882FAACu>(ctx, &aot_mem) && ctx.pc == 0x088C51BCu) goto L_088C51BC;
    return;
L_088C51BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C51C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C51D8u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 167u, 0x0882FFE4u>(ctx, &aot_mem) && ctx.pc == 0x088C51D8u) goto L_088C51D8;
    return;
L_088C51D8:
    aot_gpr[31] = (0x088C51E0u);
    aot_gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 167u, 0x0882FFE4u>(ctx, &aot_mem) && ctx.pc == 0x088C51E0u) goto L_088C51E0;
    return;
L_088C51E0:
    aot_gpr[31] = (0x088C51E8u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 167u, 0x0882FFE4u>(ctx, &aot_mem) && ctx.pc == 0x088C51E8u) goto L_088C51E8;
    return;
L_088C51E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C51F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C5208u);
    aot_gpr[5] = (0u | 0u);
    goto L_088C5C84;
L_088C5208:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088C5214u);
    aot_gpr[5] = (0u | 0u);
    goto L_088C5C84;
L_088C5214:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5220:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C5234u);
    aot_gpr[5] = (0u | 1u);
    goto L_088C5E1C;
L_088C5234:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[31] = (0x088C5240u);
    aot_gpr[5] = (0u | 1u);
    goto L_088C5E1C;
L_088C5240:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C524C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C5260u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 197u, 0x08810D44u>(ctx, &aot_mem) && ctx.pc == 0x088C5260u) goto L_088C5260;
    return;
L_088C5260:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088C526Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 15u, 0x088930B8u>(ctx, &aot_mem) && ctx.pc == 0x088C526Cu) goto L_088C526C;
    return;
L_088C526C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5294;
      }
      goto L_088C527C;
    }
L_088C527C:
    aot_gpr[31] = (0x088C5284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 101u, 0x08887CC0u>(ctx, &aot_mem) && ctx.pc == 0x088C5284u) goto L_088C5284;
    return;
L_088C5284:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5294;
      }
      goto L_088C528C;
    }
L_088C528C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088C5294;
L_088C5294:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C52B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C52CCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 43u, 0x088932C8u>(ctx, &aot_mem) && ctx.pc == 0x088C52CCu) goto L_088C52CC;
    return;
L_088C52CC:
    aot_gpr[31] = (0x088C52D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 32u, 0x08931398u>(ctx, &aot_mem) && ctx.pc == 0x088C52D4u) goto L_088C52D4;
    return;
L_088C52D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C52E0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 55u, 0x088933C0u>(ctx, &aot_mem) && ctx.pc == 0x088C52E0u) goto L_088C52E0;
    return;
L_088C52E0:
    aot_gpr[31] = (0x088C52E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 222u, 0x08810F24u>(ctx, &aot_mem) && ctx.pc == 0x088C52E8u) goto L_088C52E8;
    return;
L_088C52E8:
    aot_gpr[31] = (0x088C52F0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 231u, 0x08893EF8u>(ctx, &aot_mem) && ctx.pc == 0x088C52F0u) goto L_088C52F0;
    return;
L_088C52F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5300:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5344;
      }
      goto L_088C5314;
    }
L_088C5314:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5292)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
      if (branch_taken) {
          goto L_088C533C;
      }
      goto L_088C532C;
    }
L_088C532C:
    aot_gpr[31] = (0x088C5334u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    goto L_088C5684;
L_088C5334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5344;
      }
      goto L_088C533C;
    }
L_088C533C:
    aot_gpr[31] = (0x088C5344u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_088C5684;
L_088C5344:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5350:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 333u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C536Cu);
    aot_gpr[5] = (0u | 166u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 149u, 0x08943A90u>(ctx, &aot_mem) && ctx.pc == 0x088C536Cu) goto L_088C536C;
    return;
L_088C536C:
    aot_gpr[31] = (0x088C5374u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 193u, 0x088C4D10u>(ctx, &aot_mem) && ctx.pc == 0x088C5374u) goto L_088C5374;
    return;
L_088C5374:
    aot_gpr[31] = (0x088C537Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 210u, 0x088C4F6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C537Cu) goto L_088C537C;
    return;
L_088C537C:
    aot_gpr[31] = (0x088C5384u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 217u, 0x088C4FC8u>(ctx, &aot_mem) && ctx.pc == 0x088C5384u) goto L_088C5384;
    return;
L_088C5384:
    aot_gpr[31] = (0x088C538Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088C519C;
L_088C538C:
    aot_gpr[31] = (0x088C5394u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088C51F4;
L_088C5394:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7292), static_cast<std::uint8_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7296), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7300), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7291), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (0u | 222u);
    aot_gpr[31] = (0x088C53CCu);
    aot_gpr[5] = (0u | 111u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 149u, 0x08943A90u>(ctx, &aot_mem) && ctx.pc == 0x088C53CCu) goto L_088C53CC;
    return;
L_088C53CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C53DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C53F0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088C5220;
L_088C53F0:
    aot_gpr[31] = (0x088C53F8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088C51C8;
L_088C53F8:
    aot_gpr[31] = (0x088C5400u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088C511C;
L_088C5400:
    aot_gpr[31] = (0x088C5408u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 215u, 0x088C4FACu>(ctx, &aot_mem) && ctx.pc == 0x088C5408u) goto L_088C5408;
    return;
L_088C5408:
    aot_gpr[31] = (0x088C5410u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 205u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5410u) goto L_088C5410;
    return;
L_088C5410:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5420:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28592), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5440:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C5450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 197u, 0x08810D44u>(ctx, &aot_mem) && ctx.pc == 0x088C5450u) goto L_088C5450;
    return;
L_088C5450:
    aot_gpr[31] = (0x088C5458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 9u, 0x0886E088u>(ctx, &aot_mem) && ctx.pc == 0x088C5458u) goto L_088C5458;
    return;
L_088C5458:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5464:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C5474u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 163u, 0x0886DB64u>(ctx, &aot_mem) && ctx.pc == 0x088C5474u) goto L_088C5474;
    return;
L_088C5474:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C548C;
      }
      goto L_088C5484;
    }
L_088C5484:
    aot_gpr[31] = (0x088C548Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 55u, 0x088933C0u>(ctx, &aot_mem) && ctx.pc == 0x088C548Cu) goto L_088C548C;
    return;
L_088C548C:
    aot_gpr[31] = (0x088C5494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 222u, 0x08810F24u>(ctx, &aot_mem) && ctx.pc == 0x088C5494u) goto L_088C5494;
    return;
L_088C5494:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C54A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088C54E0;
      }
      goto L_088C54B8;
    }
L_088C54B8:
    aot_gpr[31] = (0x088C54C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 11u, 0x0889A0BCu>(ctx, &aot_mem) && ctx.pc == 0x088C54C0u) goto L_088C54C0;
    return;
L_088C54C0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5560;
      }
      goto L_088C54C8;
    }
L_088C54C8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x088C54D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    goto L_088C5684;
L_088C54D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5560;
      }
      goto L_088C54E0;
    }
L_088C54E0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5560;
      }
      goto L_088C54F0;
    }
L_088C54F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < -2 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < -1 ? 1u : 0u);
        goto L_088C5514;
    }
    goto L_088C5500;
L_088C5500:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < -3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5560;
      }
      goto L_088C550C;
    }
L_088C550C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5540;
      }
      goto L_088C5514;
    }
L_088C5514:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5560;
      }
      goto L_088C551C;
    }
L_088C551C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5488)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x088C5534u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5488), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 215u, 0x0889ACA0u>(ctx, &aot_mem) && ctx.pc == 0x088C5534u) goto L_088C5534;
    return;
L_088C5534:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088C5560;
      }
      goto L_088C5540;
    }
L_088C5540:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24848)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24760));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088C5560u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088C5684;
L_088C5560:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5570:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3951), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C55B4;
      }
      goto L_088C559C;
    }
L_088C559C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x088C55A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32008));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088C55A8u) goto L_088C55A8;
    return;
L_088C55A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C55B4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 84u, 0x08893684u>(ctx, &aot_mem) && ctx.pc == 0x088C55B4u) goto L_088C55B4;
    return;
L_088C55B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C55C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3951), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C55EC;
      }
      goto L_088C55E4;
    }
L_088C55E4:
    aot_gpr[31] = (0x088C55ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 85u, 0x08893694u>(ctx, &aot_mem) && ctx.pc == 0x088C55ECu) goto L_088C55EC;
    return;
L_088C55EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C55F8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28600), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5618:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28608), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5638:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28616), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5658:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28624), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5678:
    aot_gpr[5] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28636), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5684:
    aot_gpr[5] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28640), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5690:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C56A4u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    goto L_088C5678;
L_088C56A4:
    aot_gpr[31] = (0x088C56ACu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_088C5684;
L_088C56AC:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28648), aot_gpr[7]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C56C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28636)));
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[16] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28636)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088C570Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C570Cu) goto L_088C570C;
    return;
L_088C570C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28636)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088C5728u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5728u) goto L_088C5728;
    return;
L_088C5728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28636)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088C5744u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5744u) goto L_088C5744;
    return;
L_088C5744:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28636)));
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28636)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C57B0;
      }
      goto L_088C5764;
    }
L_088C5764:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088C577Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C577Cu) goto L_088C577C;
    return;
L_088C577C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28636)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088C5798u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5798u) goto L_088C5798;
    return;
L_088C5798:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28636)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5764;
      }
      goto L_088C57B0;
    }
L_088C57B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28640)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C57C8;
      }
      goto L_088C57BC;
    }
L_088C57BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(28652)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5818;
      }
      goto L_088C57C8;
    }
L_088C57C8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28652), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088C57E4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C57E4u) goto L_088C57E4;
    return;
L_088C57E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28636)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28640)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28644), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28636), aot_gpr[6]);
      if (branch_taken) {
          goto L_088C5820;
      }
      goto L_088C5800;
    }
L_088C5800:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088C5818u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5818u) goto L_088C5818;
    return;
L_088C5818:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C5824;
      }
      goto L_088C5820;
    }
L_088C5820:
    aot_gpr[2] = (0u | 0u);
    goto L_088C5824;
L_088C5824:
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
L_088C5840:
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28640)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C584C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28632), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C586C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[20] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088C58A0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 43u, 0x0891D338u>(ctx, &aot_mem) && ctx.pc == 0x088C58A0u) goto L_088C58A0;
    return;
L_088C58A0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[18] = (aot_gpr[19] - aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088C58D8;
      }
      goto L_088C58B8;
    }
L_088C58B8:
    aot_gpr[5] = (0u | 16u);
    aot_gpr[31] = (0x088C58C4u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x088C58C4u) goto L_088C58C4;
    return;
L_088C58C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[19] = (aot_gpr[2] + aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C58D8;
    }
L_088C58D8:
    aot_gpr[5] = (0u | 16u);
    aot_gpr[31] = (0x088C58E4u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C58E4u) goto L_088C58E4;
    return;
L_088C58E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[19] = (aot_gpr[2] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    goto L_088C58F4;
L_088C58F4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5924;
      }
      goto L_088C58FC;
    }
L_088C58FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088C591Cu);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C591Cu) goto L_088C591C;
    return;
L_088C591C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C5930;
      }
      goto L_088C5924;
    }
L_088C5924:
    aot_gpr[31] = (0x088C592Cu);
    aot_gpr[4] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088C592Cu) goto L_088C592C;
    return;
L_088C592C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    goto L_088C5930;
L_088C5930:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
        goto L_088C5964;
    }
    goto L_088C593C;
L_088C593C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x088C595Cu);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 111u, 0x0891C6D0u>(ctx, &aot_mem) && ctx.pc == 0x088C595Cu) goto L_088C595C;
    return;
L_088C595C:
    aot_gpr[20] = (aot_gpr[21] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    goto L_088C5964;
L_088C5964:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_088C598C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C5A2C;
      }
      goto L_088C59A8;
    }
L_088C59A8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088C59B8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088C59B8u) goto L_088C59B8;
    return;
L_088C59B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C59E0;
      }
      goto L_088C59C4;
    }
L_088C59C4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088C59E0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C59E0u) goto L_088C59E0;
    return;
L_088C59E0:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088C5A2C;
      }
      goto L_088C59EC;
    }
L_088C59EC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5A24;
      }
      goto L_088C5A00;
    }
L_088C5A00:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088C5A1Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5A1Cu) goto L_088C5A1C;
    return;
L_088C5A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5A2C;
      }
      goto L_088C5A24;
    }
L_088C5A24:
    aot_gpr[31] = (0x088C5A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x088C5A2Cu) goto L_088C5A2C;
    return;
L_088C5A2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5A40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 256u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[31]);
    aot_gpr[31] = (0x088C5A6Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32032));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x088C5A6Cu) goto L_088C5A6C;
    return;
L_088C5A6C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088C5A7Cu);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 243u, 0x08A3AC74u>(ctx, &aot_mem) && ctx.pc == 0x088C5A7Cu) goto L_088C5A7C;
    return;
L_088C5A7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088C5A8Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x088C5A8Cu) goto L_088C5A8C;
    return;
L_088C5A8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5AA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[2] = (aot_gpr[5] ^ aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5AB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C5AC8u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_088C5AA0;
L_088C5AC8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088C5AEC;
      }
      goto L_088C5AD0;
    }
L_088C5AD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29308), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-30480), aot_gpr[4]);
    goto L_088C5AEC;
L_088C5AEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5AF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C5B08u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_088C5AA0;
L_088C5B08:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5B28;
      }
      goto L_088C5B10;
    }
L_088C5B10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-29308), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-30480), aot_gpr[4]);
    goto L_088C5B28;
L_088C5B28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5B34:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28656), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5B54:
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088C5BEC;
      }
      goto L_088C5B60;
    }
L_088C5B60:
    aot_gpr[4] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088C5B9C;
      }
      goto L_088C5B70;
    }
L_088C5B70:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088C5BB0;
      }
      goto L_088C5B78;
    }
L_088C5B78:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C5BC4;
      }
      goto L_088C5B80;
    }
L_088C5B80:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_088C5BD8;
      }
      goto L_088C5B88;
    }
L_088C5B88:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28668));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C5BF0;
      }
      goto L_088C5B9C;
    }
L_088C5B9C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29196));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C5BF0;
      }
      goto L_088C5BB0;
    }
L_088C5BB0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30392));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C5BF0;
      }
      goto L_088C5BC4;
    }
L_088C5BC4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30400));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C5BF0;
      }
      goto L_088C5BD8;
    }
L_088C5BD8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31980));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C5BF0;
      }
      goto L_088C5BEC;
    }
L_088C5BEC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088C5BF0;
L_088C5BF0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5BF8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28664), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5C18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C5C44;
      }
      goto L_088C5C38;
    }
L_088C5C38:
    aot_gpr[31] = (0x088C5C40u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 75u, 0x08A4B424u>(ctx, &aot_mem) && ctx.pc == 0x088C5C40u) goto L_088C5C40;
    return;
L_088C5C40:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_088C5C44;
L_088C5C44:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5C5C;
      }
      goto L_088C5C4C;
    }
L_088C5C4C:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x088C5C58u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5C58u) goto L_088C5C58;
    return;
L_088C5C58:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    goto L_088C5C5C;
L_088C5C5C:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5C74;
      }
      goto L_088C5C64;
    }
L_088C5C64:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088C5C70u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 75u, 0x08A4B424u>(ctx, &aot_mem) && ctx.pc == 0x088C5C70u) goto L_088C5C70;
    return;
L_088C5C70:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_088C5C74;
L_088C5C74:
    aot_gpr[2] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5C84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    aot_gpr[6] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-22264));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[6] = (24948u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24932));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (28787u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28767));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[18]);
    aot_gpr[7] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[18] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[16]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[6] = (0u | 4u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(32308));
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[19] = (2218u << 16u);
      if (branch_taken) {
          goto L_088C5D48;
      }
      goto L_088C5CE4;
    }
L_088C5CE4:
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088C5D24;
      }
      goto L_088C5CF0;
    }
L_088C5CF0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C5D6C;
      }
      goto L_088C5CF8;
    }
L_088C5CF8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5D90;
      }
      goto L_088C5D00;
    }
L_088C5D00:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088C5D10u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32112));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088C5D10u) goto L_088C5D10;
    return;
L_088C5D10:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C5DA0;
      }
      goto L_088C5D24;
    }
L_088C5D24:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088C5D34u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32132));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088C5D34u) goto L_088C5D34;
    return;
L_088C5D34:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C5DA0;
      }
      goto L_088C5D48;
    }
L_088C5D48:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088C5D58u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32152));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088C5D58u) goto L_088C5D58;
    return;
L_088C5D58:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C5DA0;
      }
      goto L_088C5D6C;
    }
L_088C5D6C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088C5D7Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32168));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088C5D7Cu) goto L_088C5D7C;
    return;
L_088C5D7C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C5DA0;
      }
      goto L_088C5D90;
    }
L_088C5D90:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_088C5DA0;
L_088C5DA0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088C5DACu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088C5DACu) goto L_088C5DAC;
    return;
L_088C5DAC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088C5DBCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32188));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088C5DBCu) goto L_088C5DBC;
    return;
L_088C5DBC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x088C5DE0u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 255u, 0x08876EA0u>(ctx, &aot_mem) && ctx.pc == 0x088C5DE0u) goto L_088C5DE0;
    return;
L_088C5DE0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5DFC;
      }
      goto L_088C5DF0;
    }
L_088C5DF0:
    aot_gpr[31] = (0x088C5DF8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088C5C18;
L_088C5DF8:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088C5DFC;
L_088C5DFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
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
L_088C5E1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22264));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5E64;
      }
      goto L_088C5E48;
    }
L_088C5E48:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5E60;
      }
      goto L_088C5E50;
    }
L_088C5E50:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088C5E60u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088C5E60u) goto L_088C5E60;
    return;
L_088C5E60:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_088C5E64;
L_088C5E64:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5E74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[6] = (2219u << 16u);
      if (branch_taken) {
          goto L_088C5FB8;
      }
      goto L_088C5E98;
    }
L_088C5E98:
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-22264));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (2219u << 16u);
      if (branch_taken) {
          goto L_088C5FB8;
      }
      goto L_088C5EB0;
    }
L_088C5EB0:
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-22264));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5F08;
      }
      goto L_088C5ED0;
    }
L_088C5ED0:
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-22264));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088C5EECu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088C5B54;
L_088C5EEC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[17] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5F14;
      }
      goto L_088C5F00;
    }
L_088C5F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5F24;
      }
      goto L_088C5F08;
    }
L_088C5F08:
    aot_gpr[2] = (2214u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(32196));
      if (branch_taken) {
          goto L_088C5FC0;
      }
      goto L_088C5F14;
    }
L_088C5F14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088C5F24;
L_088C5F24:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C5F48;
      }
      goto L_088C5F2C;
    }
L_088C5F2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_088C5FC0;
      }
      goto L_088C5F48;
    }
L_088C5F48:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5FAC;
      }
      goto L_088C5F5C;
    }
L_088C5F5C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C5F90;
      }
      goto L_088C5F74;
    }
L_088C5F74:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5F5C;
      }
      goto L_088C5F88;
    }
L_088C5F88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5FAC;
      }
      goto L_088C5F90;
    }
L_088C5F90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_088C5FC0;
      }
      goto L_088C5FAC;
    }
L_088C5FAC:
    aot_gpr[2] = (2214u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(32200));
      if (branch_taken) {
          goto L_088C5FC0;
      }
      goto L_088C5FB8;
    }
L_088C5FB8:
    aot_gpr[2] = (2214u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(32200));
    goto L_088C5FC0;
L_088C5FC0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5FD4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32304), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5FF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5FFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.pc = 0x088C6000u; return;
}

void recomp_unit_0193(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0193_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_193(Runtime &runtime) {
    runtime.register_generated_unit(193u, 0x088C5000u, 4096u, &recomp_unit_0193, &recomp_unit_0193_entry);
    runtime.register_function(0x088C5000u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5010u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C501Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C502Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5038u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5048u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5060u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5078u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5090u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C50C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C50CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C50D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C50F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C50F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5100u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C511Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5134u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5160u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5180u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5188u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C519Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C51ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C51B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C51BCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C51C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C51D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C51E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C51E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C51F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5208u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5214u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5220u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5234u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5240u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C524Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5260u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C526Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C527Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5284u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C528Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5294u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C52B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C52CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C52D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C52E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C52E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C52F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5300u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5314u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C532Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5334u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C533Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5344u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5350u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C536Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5374u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C537Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5384u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C538Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5394u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C53CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C53DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C53F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C53F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5400u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5408u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5410u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5420u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5440u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5450u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5458u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5464u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5474u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5484u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C548Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5494u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C54A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C54B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C54C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C54C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C54D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C54E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C54F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5500u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C550Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5514u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C551Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5534u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5540u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5560u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5570u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C559Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C55A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C55B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C55C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C55E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C55ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C55F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5618u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5638u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5658u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5678u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5684u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5690u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C56A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C56ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C56C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C570Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5728u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5744u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5764u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C577Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5798u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C57B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C57BCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C57C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C57E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5800u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5818u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5820u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5824u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5840u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C584Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C586Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C58A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C58B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C58C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C58D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C58E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C58F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C58FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C591Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5924u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C592Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5930u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C593Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C595Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5964u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C598Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C59A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C59B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C59C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C59E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C59ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5A00u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5A1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5A24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5A2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5A40u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5A6Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5A7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5A8Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5AA0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5AB8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5AC8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5AD0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5AECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5AF8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5B08u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5B10u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5B28u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5B34u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5B54u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5B60u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5B70u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5B78u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5B80u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5B88u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5B9Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5BB0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5BC4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5BD8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5BECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5BF0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5BF8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5C18u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5C38u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5C40u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5C44u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5C4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5C58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5C5Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5C64u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5C70u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5C74u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5C84u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5CE4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5CF0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5CF8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5D00u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5D10u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5D24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5D34u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5D48u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5D58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5D6Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5D7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5D90u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5DA0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5DACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5DBCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5DE0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5DF0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5DF8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5DFCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5E1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5E48u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5E50u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5E60u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5E64u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5E74u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5E98u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5EB0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5ED0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5EECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5F00u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5F08u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5F14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5F24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5F2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5F48u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5F5Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5F74u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5F88u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5F90u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5FACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5FB8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5FC0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5FD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5FF4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x088C5FFCu, &recomp_unit_0193, "recomp_unit_0193");
}
} // namespace psprecomp
