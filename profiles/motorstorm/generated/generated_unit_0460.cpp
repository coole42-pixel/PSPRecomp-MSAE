#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0460[1024] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 15, 0, 16, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0,
    0, 29, 0, 30, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 43,
    0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 0, 54, 0, 55, 56, 57, 0, 58, 0, 59, 60, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0,
    67, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 79,
    0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 0, 84, 0, 85, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90,
    0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 97,
    0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 116,
    0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    120, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 124, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135,
    0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 145,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156,
    0, 0, 157, 0, 158, 0, 0, 0, 0, 159, 160, 0, 0, 0, 161, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 178, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 182, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 184, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 198, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 202, 0, 0, 0, 203, 204, 0, 0, 0,
    0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 219, 0, 0, 220, 0, 221, 0, 222,
};
void recomp_unit_0460_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089D0000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0460[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D0000;
    case 2u: goto L_089D0008;
    case 3u: goto L_089D0010;
    case 4u: goto L_089D0020;
    case 5u: goto L_089D003C;
    case 6u: goto L_089D0048;
    case 7u: goto L_089D0064;
    case 8u: goto L_089D006C;
    case 9u: goto L_089D0080;
    case 10u: goto L_089D00B0;
    case 11u: goto L_089D00C8;
    case 12u: goto L_089D00D4;
    case 13u: goto L_089D00DC;
    case 14u: goto L_089D00F4;
    case 15u: goto L_089D010C;
    case 16u: goto L_089D0114;
    case 17u: goto L_089D0118;
    case 18u: goto L_089D0134;
    case 19u: goto L_089D0140;
    case 20u: goto L_089D014C;
    case 21u: goto L_089D0154;
    case 22u: goto L_089D015C;
    case 23u: goto L_089D0164;
    case 24u: goto L_089D0184;
    case 25u: goto L_089D018C;
    case 26u: goto L_089D01B0;
    case 27u: goto L_089D01E8;
    case 28u: goto L_089D01F8;
    case 29u: goto L_089D0204;
    case 30u: goto L_089D020C;
    case 31u: goto L_089D0210;
    case 32u: goto L_089D0224;
    case 33u: goto L_089D0240;
    case 34u: goto L_089D0270;
    case 35u: goto L_089D0278;
    case 36u: goto L_089D0288;
    case 37u: goto L_089D02A0;
    case 38u: goto L_089D02A8;
    case 39u: goto L_089D02C0;
    case 40u: goto L_089D02DC;
    case 41u: goto L_089D02EC;
    case 42u: goto L_089D02F4;
    case 43u: goto L_089D02FC;
    case 44u: goto L_089D0304;
    case 45u: goto L_089D030C;
    case 46u: goto L_089D0340;
    case 47u: goto L_089D0350;
    case 48u: goto L_089D0360;
    case 49u: goto L_089D0388;
    case 50u: goto L_089D0398;
    case 51u: goto L_089D03A0;
    case 52u: goto L_089D03AC;
    case 53u: goto L_089D03B4;
    case 54u: goto L_089D03C0;
    case 55u: goto L_089D03C8;
    case 56u: goto L_089D03CC;
    case 57u: goto L_089D03D0;
    case 58u: goto L_089D03D8;
    case 59u: goto L_089D03E0;
    case 60u: goto L_089D03E4;
    case 61u: goto L_089D040C;
    case 62u: goto L_089D043C;
    case 63u: goto L_089D0444;
    case 64u: goto L_089D0454;
    case 65u: goto L_089D0460;
    case 66u: goto L_089D0474;
    case 67u: goto L_089D0480;
    case 68u: goto L_089D0488;
    case 69u: goto L_089D0494;
    case 70u: goto L_089D04A0;
    case 71u: goto L_089D04AC;
    case 72u: goto L_089D04B4;
    case 73u: goto L_089D04BC;
    case 74u: goto L_089D04C4;
    case 75u: goto L_089D04CC;
    case 76u: goto L_089D04E0;
    case 77u: goto L_089D04EC;
    case 78u: goto L_089D04F8;
    case 79u: goto L_089D04FC;
    case 80u: goto L_089D0504;
    case 81u: goto L_089D0510;
    case 82u: goto L_089D0518;
    case 83u: goto L_089D0520;
    case 84u: goto L_089D052C;
    case 85u: goto L_089D0534;
    case 86u: goto L_089D0538;
    case 87u: goto L_089D0564;
    case 88u: goto L_089D056C;
    case 89u: goto L_089D0574;
    case 90u: goto L_089D057C;
    case 91u: goto L_089D058C;
    case 92u: goto L_089D0594;
    case 93u: goto L_089D059C;
    case 94u: goto L_089D05DC;
    case 95u: goto L_089D05E8;
    case 96u: goto L_089D05F4;
    case 97u: goto L_089D05FC;
    case 98u: goto L_089D0610;
    case 99u: goto L_089D0618;
    case 100u: goto L_089D0620;
    case 101u: goto L_089D0648;
    case 102u: goto L_089D064C;
    case 103u: goto L_089D0674;
    case 104u: goto L_089D0684;
    case 105u: goto L_089D06B0;
    case 106u: goto L_089D06E4;
    case 107u: goto L_089D06F0;
    case 108u: goto L_089D06FC;
    case 109u: goto L_089D0700;
    case 110u: goto L_089D0728;
    case 111u: goto L_089D0738;
    case 112u: goto L_089D0770;
    case 113u: goto L_089D077C;
    case 114u: goto L_089D07BC;
    case 115u: goto L_089D07F8;
    case 116u: goto L_089D07FC;
    case 117u: goto L_089D0804;
    case 118u: goto L_089D080C;
    case 119u: goto L_089D086C;
    case 120u: goto L_089D0880;
    case 121u: goto L_089D0888;
    case 122u: goto L_089D0894;
    case 123u: goto L_089D08A4;
    case 124u: goto L_089D08AC;
    case 125u: goto L_089D08B0;
    case 126u: goto L_089D08C4;
    case 127u: goto L_089D08CC;
    case 128u: goto L_089D08E8;
    case 129u: goto L_089D08F0;
    case 130u: goto L_089D08F8;
    case 131u: goto L_089D0940;
    case 132u: goto L_089D0948;
    case 133u: goto L_089D0950;
    case 134u: goto L_089D0958;
    case 135u: goto L_089D097C;
    case 136u: goto L_089D0984;
    case 137u: goto L_089D09BC;
    case 138u: goto L_089D09D0;
    case 139u: goto L_089D0A08;
    case 140u: goto L_089D0A20;
    case 141u: goto L_089D0A30;
    case 142u: goto L_089D0A38;
    case 143u: goto L_089D0A68;
    case 144u: goto L_089D0A74;
    case 145u: goto L_089D0A7C;
    case 146u: goto L_089D0A80;
    case 147u: goto L_089D0AB8;
    case 148u: goto L_089D0AEC;
    case 149u: goto L_089D0B04;
    case 150u: goto L_089D0B14;
    case 151u: goto L_089D0B1C;
    case 152u: goto L_089D0B3C;
    case 153u: goto L_089D0B48;
    case 154u: goto L_089D0B60;
    case 155u: goto L_089D0B70;
    case 156u: goto L_089D0B7C;
    case 157u: goto L_089D0B88;
    case 158u: goto L_089D0B90;
    case 159u: goto L_089D0BA4;
    case 160u: goto L_089D0BA8;
    case 161u: goto L_089D0BB8;
    case 162u: goto L_089D0BBC;
    case 163u: goto L_089D0BC4;
    case 164u: goto L_089D0BD4;
    case 165u: goto L_089D0BF0;
    case 166u: goto L_089D0C18;
    case 167u: goto L_089D0C28;
    case 168u: goto L_089D0C30;
    case 169u: goto L_089D0C58;
    case 170u: goto L_089D0C70;
    case 171u: goto L_089D0C88;
    case 172u: goto L_089D0CAC;
    case 173u: goto L_089D0CB4;
    case 174u: goto L_089D0CBC;
    case 175u: goto L_089D0CD0;
    case 176u: goto L_089D0CE0;
    case 177u: goto L_089D0D08;
    case 178u: goto L_089D0D14;
    case 179u: goto L_089D0D18;
    case 180u: goto L_089D0D4C;
    case 181u: goto L_089D0D68;
    case 182u: goto L_089D0D6C;
    case 183u: goto L_089D0D7C;
    case 184u: goto L_089D0D98;
    case 185u: goto L_089D0D9C;
    case 186u: goto L_089D0DC0;
    case 187u: goto L_089D0DC8;
    case 188u: goto L_089D0DD8;
    case 189u: goto L_089D0DE0;
    case 190u: goto L_089D0DF0;
    case 191u: goto L_089D0DF8;
    case 192u: goto L_089D0E18;
    case 193u: goto L_089D0E30;
    case 194u: goto L_089D0E48;
    case 195u: goto L_089D0E54;
    case 196u: goto L_089D0E5C;
    case 197u: goto L_089D0E64;
    case 198u: goto L_089D0E9C;
    case 199u: goto L_089D0EA0;
    case 200u: goto L_089D0ECC;
    case 201u: goto L_089D0ED8;
    case 202u: goto L_089D0EDC;
    case 203u: goto L_089D0EEC;
    case 204u: goto L_089D0EF0;
    case 205u: goto L_089D0F04;
    case 206u: goto L_089D0F14;
    case 207u: goto L_089D0F20;
    case 208u: goto L_089D0F28;
    case 209u: goto L_089D0F30;
    case 210u: goto L_089D0F38;
    case 211u: goto L_089D0F44;
    case 212u: goto L_089D0F4C;
    case 213u: goto L_089D0F5C;
    case 214u: goto L_089D0F94;
    case 215u: goto L_089D0F9C;
    case 216u: goto L_089D0FB0;
    case 217u: goto L_089D0FC4;
    case 218u: goto L_089D0FDC;
    case 219u: goto L_089D0FE0;
    case 220u: goto L_089D0FEC;
    case 221u: goto L_089D0FF4;
    case 222u: goto L_089D0FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D0000:
    aot_gpr[31] = (0x089D0008u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0008u) goto L_089D0008;
    return;
L_089D0008:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    (void)rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 201u, 0x089CFEC0u>(ctx, &aot_mem); return;
L_089D0010:
    aot_gpr[2] = (aot_gpr[2] | 16960u);
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[3] != 0u) aot_gpr[4] = (aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 197u, 0x089CFE8Cu>(ctx, &aot_mem); return;
L_089D0020:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(26)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(136)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(188)));
    aot_gpr[4] = (aot_gpr[12] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D003Cu);
    aot_gpr[5] = (aot_gpr[13] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D003Cu) goto L_089D003C;
    return;
L_089D003C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    (void)rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 170u, 0x089CFC98u>(ctx, &aot_mem); return;
L_089D0048:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D015C;
      }
      goto L_089D0064;
    }
L_089D0064:
    if (aot_gpr[6] == 0u) {
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
        goto L_089D0118;
    }
    goto L_089D006C;
L_089D006C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 54509u);
      if (branch_taken) {
          goto L_089D0118;
      }
      goto L_089D0080;
    }
L_089D0080:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D0118;
      }
      goto L_089D00B0;
    }
L_089D00B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D00C8u);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D00C8u) goto L_089D00C8;
    return;
L_089D00C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D010C;
      }
      goto L_089D00D4;
    }
L_089D00D4:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089D00DC;
L_089D00DC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089D0134;
      }
      goto L_089D00F4;
    }
L_089D00F4:
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089D00DC;
    }
    goto L_089D010C;
L_089D010C:
    aot_gpr[31] = (0x089D0114u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 108u, 0x089C280Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0114u) goto L_089D0114;
    return;
L_089D0114:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089D0118;
L_089D0118:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0134:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D0140u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0140u) goto L_089D0140;
    return;
L_089D0140:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D014Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 162u, 0x089C2CC4u>(ctx, &aot_mem) && ctx.pc == 0x089D014Cu) goto L_089D014C;
    return;
L_089D014C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D0118;
      }
      goto L_089D0154;
    }
L_089D0154:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089D00F4;
L_089D015C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089D0118;
L_089D0164:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_089D020C;
      }
      goto L_089D0184;
    }
L_089D0184:
    if (aot_gpr[6] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_089D0210;
    }
    goto L_089D018C;
L_089D018C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089D020C;
      }
      goto L_089D01B0;
    }
L_089D01B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(6)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089D0224;
      }
      goto L_089D01E8;
    }
L_089D01E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D01F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D01F8u) goto L_089D01F8;
    return;
L_089D01F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    aot_gpr[31] = (0x089D0204u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 162u, 0x089C2CC4u>(ctx, &aot_mem) && ctx.pc == 0x089D0204u) goto L_089D0204;
    return;
L_089D0204:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D0224;
      }
      goto L_089D020C;
    }
L_089D020C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089D0210;
L_089D0210:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0224:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0240:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
      if (branch_taken) {
          goto L_089D0288;
      }
      goto L_089D0270;
    }
L_089D0270:
    aot_gpr[31] = (0x089D0278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 155u, 0x089C2C30u>(ctx, &aot_mem) && ctx.pc == 0x089D0278u) goto L_089D0278;
    return;
L_089D0278:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D02A0;
      }
      goto L_089D0288;
    }
L_089D0288:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D02A0:
    aot_gpr[31] = (0x089D02A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 155u, 0x089C2C30u>(ctx, &aot_mem) && ctx.pc == 0x089D02A8u) goto L_089D02A8;
    return;
L_089D02A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D02C0:
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[7] = (aot_gpr[7] & 65535u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_089D02EC;
      }
      goto L_089D02DC;
    }
L_089D02DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D02EC:
    aot_gpr[31] = (0x089D02F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0458_entry, 458u, 233u, 0x089CEF94u>(ctx, &aot_mem) && ctx.pc == 0x089D02F4u) goto L_089D02F4;
    return;
L_089D02F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D02DC;
      }
      goto L_089D02FC;
    }
L_089D02FC:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0304:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D030C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
      if (branch_taken) {
          goto L_089D040C;
      }
      goto L_089D0340;
    }
L_089D0340:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (0u | 65535u);
    if (aot_gpr[5] == aot_gpr[2]) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_089D0538;
    }
    goto L_089D0350;
L_089D0350:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[17] << 3u);
      if (branch_taken) {
          goto L_089D040C;
      }
      goto L_089D0360;
    }
L_089D0360:
    aot_gpr[3] = (aot_gpr[17] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[20] = (0u | 54512u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089D03A0;
      }
      goto L_089D0388;
    }
L_089D0388:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[20] = (0u | 54511u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D03A0;
      }
      goto L_089D0398;
    }
L_089D0398:
    aot_gpr[20] = (0u | 54509u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D03A0;
L_089D03A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D04BC;
      }
      goto L_089D03AC;
    }
L_089D03AC:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D043C;
      }
      goto L_089D03B4;
    }
L_089D03B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089D03CC;
      }
      goto L_089D03C0;
    }
L_089D03C0:
    aot_gpr[31] = (0x089D03C8u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 2u, 0x089C10C8u>(ctx, &aot_mem) && ctx.pc == 0x089D03C8u) goto L_089D03C8;
    return;
L_089D03C8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    goto L_089D03CC;
L_089D03CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089D03D0;
L_089D03D0:
    aot_gpr[31] = (0x089D03D8u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 111u, 0x089C3708u>(ctx, &aot_mem) && ctx.pc == 0x089D03D8u) goto L_089D03D8;
    return;
L_089D03D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D0534;
      }
      goto L_089D03E0;
    }
L_089D03E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089D03E4;
L_089D03E4:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D040C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D043C:
    aot_gpr[31] = (0x089D0444u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0458_entry, 458u, 173u, 0x089CEBD0u>(ctx, &aot_mem) && ctx.pc == 0x089D0444u) goto L_089D0444;
    return;
L_089D0444:
    aot_gpr[22] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u | 65535u);
    if (aot_gpr[22] == aot_gpr[2]) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
        goto L_089D057C;
    }
    goto L_089D0454;
L_089D0454:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[22];
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D0564;
      }
      goto L_089D0460;
    }
L_089D0460:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089D0474u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0474u) goto L_089D0474;
    return;
L_089D0474:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D0488;
      }
      goto L_089D0480;
    }
L_089D0480:
    aot_gpr[31] = (0x089D0488u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 2u, 0x089C10C8u>(ctx, &aot_mem) && ctx.pc == 0x089D0488u) goto L_089D0488;
    return;
L_089D0488:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089D0494u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 137u, 0x089C5AECu>(ctx, &aot_mem) && ctx.pc == 0x089D0494u) goto L_089D0494;
    return;
L_089D0494:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D04A0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0458_entry, 458u, 160u, 0x089CEB40u>(ctx, &aot_mem) && ctx.pc == 0x089D04A0u) goto L_089D04A0;
    return;
L_089D04A0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D04ACu);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0458_entry, 458u, 205u, 0x089CED6Cu>(ctx, &aot_mem) && ctx.pc == 0x089D04ACu) goto L_089D04AC;
    return;
L_089D04AC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D03E0;
      }
      goto L_089D04B4;
    }
L_089D04B4:
    // nop
    goto L_089D03D0;
L_089D04BC:
    aot_gpr[31] = (0x089D04C4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 183u, 0x089C3D70u>(ctx, &aot_mem) && ctx.pc == 0x089D04C4u) goto L_089D04C4;
    return;
L_089D04C4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D03E0;
      }
      goto L_089D04CC;
    }
L_089D04CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089D04E0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D04E0u) goto L_089D04E0;
    return;
L_089D04E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(436)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (aot_gpr[19] + 0u);
        goto L_089D04FC;
    }
    goto L_089D04EC;
L_089D04EC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D04F8u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 2u, 0x089C10C8u>(ctx, &aot_mem) && ctx.pc == 0x089D04F8u) goto L_089D04F8;
    return;
L_089D04F8:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    goto L_089D04FC;
L_089D04FC:
    aot_gpr[31] = (0x089D0504u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 137u, 0x089C5AECu>(ctx, &aot_mem) && ctx.pc == 0x089D0504u) goto L_089D0504;
    return;
L_089D0504:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D0510u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0458_entry, 458u, 160u, 0x089CEB40u>(ctx, &aot_mem) && ctx.pc == 0x089D0510u) goto L_089D0510;
    return;
L_089D0510:
    aot_gpr[31] = (0x089D0518u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 111u, 0x089C3708u>(ctx, &aot_mem) && ctx.pc == 0x089D0518u) goto L_089D0518;
    return;
L_089D0518:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D03E0;
      }
      goto L_089D0520;
    }
L_089D0520:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x089D052Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0458_entry, 458u, 233u, 0x089CEF94u>(ctx, &aot_mem) && ctx.pc == 0x089D052Cu) goto L_089D052C;
    return;
L_089D052C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D03E0;
      }
      goto L_089D0534;
    }
L_089D0534:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089D0538;
L_089D0538:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0564:
    aot_gpr[31] = (0x089D056Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 183u, 0x089C3D70u>(ctx, &aot_mem) && ctx.pc == 0x089D056Cu) goto L_089D056C;
    return;
L_089D056C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D0460;
      }
      goto L_089D0574;
    }
L_089D0574:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089D03E4;
L_089D057C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D058Cu);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D058Cu) goto L_089D058C;
    return;
L_089D058C:
    aot_gpr[31] = (0x089D0594u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 11u, 0x089C605Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0594u) goto L_089D0594;
    return;
L_089D0594:
    aot_gpr[3] = (0u + 0u);
    goto L_089D03E0;
L_089D059C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089D0620;
      }
      goto L_089D05DC;
    }
L_089D05DC:
    aot_gpr[18] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089D0620;
      }
      goto L_089D05E8;
    }
L_089D05E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089D064C;
      }
      goto L_089D05F4;
    }
L_089D05F4:
    aot_gpr[31] = (0x089D05FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 147u, 0x089C2BCCu>(ctx, &aot_mem) && ctx.pc == 0x089D05FCu) goto L_089D05FC;
    return;
L_089D05FC:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[7] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089D0674;
      }
      goto L_089D0610;
    }
L_089D0610:
    aot_gpr[31] = (0x089D0618u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    goto L_089D030C;
L_089D0618:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D0648;
      }
      goto L_089D0620;
    }
L_089D0620:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0648:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089D064C;
L_089D064C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0674:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D0684u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0684u) goto L_089D0684;
    return;
L_089D0684:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D06B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[14] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[13] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[8] + 0u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (aot_gpr[4] + 0u);
    aot_gpr[16] = (aot_gpr[11] + 0u);
    aot_gpr[7] = (aot_gpr[5] & 65535u);
    { const bool branch_taken = aot_gpr[12] == aot_gpr[2];
    aot_gpr[8] = (aot_gpr[9] & 255u);
      if (branch_taken) {
          goto L_089D06F0;
      }
      goto L_089D06E4;
    }
L_089D06E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[12];
    // nop
      if (branch_taken) {
          goto L_089D0880;
      }
      goto L_089D06F0;
    }
L_089D06F0:
    aot_gpr[9] = (aot_gpr[3] + static_cast<std::uint32_t>(116));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089D0700;
      }
      goto L_089D06FC;
    }
L_089D06FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(132)));
    goto L_089D0700;
L_089D0700:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = aot_gpr[13] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr[6]));
      if (branch_taken) {
          goto L_089D08C4;
      }
      goto L_089D0728;
    }
L_089D0728:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[9] + 0u);
      if (branch_taken) {
          goto L_089D07FC;
      }
      goto L_089D0738;
    }
L_089D0738:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[3] = (aot_gpr[6] << 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    goto L_089D0770;
L_089D0770:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[9] + 0u);
      if (branch_taken) {
          goto L_089D07FC;
      }
      goto L_089D077C;
    }
L_089D077C:
    aot_gpr[2] = (aot_gpr[7] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[3] = (aot_gpr[6] << 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < 8 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
      if (branch_taken) {
          goto L_089D07F8;
      }
      goto L_089D07BC;
    }
L_089D07BC:
    aot_gpr[4] = (aot_gpr[7] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(20));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[7] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    goto L_089D07F8;
L_089D07F8:
    aot_gpr[4] = (aot_gpr[9] + 0u);
    goto L_089D07FC;
L_089D07FC:
    aot_gpr[31] = (0x089D0804u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem) && ctx.pc == 0x089D0804u) goto L_089D0804;
    return;
L_089D0804:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D086C;
      }
      goto L_089D080C;
    }
L_089D080C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[7] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3));
    aot_gpr[4] = (aot_gpr[6] << 3u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    goto L_089D086C;
L_089D086C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0880:
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089D08AC;
      }
      goto L_089D0888;
    }
L_089D0888:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[9] = (aot_gpr[10] + 0u);
      if (branch_taken) {
          goto L_089D08CC;
      }
      goto L_089D0894;
    }
L_089D0894:
    aot_gpr[5] = (aot_gpr[14] + 0u);
    aot_gpr[10] = (aot_gpr[11] + 0u);
    aot_gpr[31] = (0x089D08A4u);
    aot_gpr[11] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089D08A4u) goto L_089D08A4;
    return;
L_089D08A4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D086C;
      }
      goto L_089D08AC;
    }
L_089D08AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089D08B0;
L_089D08B0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D08C4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_089D0770;
L_089D08CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[14] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (aot_gpr[11] + 0u);
    aot_gpr[7] = (aot_gpr[8] + 0u);
    aot_gpr[8] = (aot_gpr[10] + 0u);
    aot_gpr[31] = (0x089D08E8u);
    aot_gpr[10] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089D08E8u) goto L_089D08E8;
    return;
L_089D08E8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D086C;
      }
      goto L_089D08F0;
    }
L_089D08F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089D08B0;
L_089D08F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D0A7C;
      }
      goto L_089D0940;
    }
L_089D0940:
    if (aot_gpr[5] == 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089D0A80;
    }
    goto L_089D0948;
L_089D0948:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[2] = (aot_gpr[22] & 16384u);
      if (branch_taken) {
          goto L_089D0A7C;
      }
      goto L_089D0950;
    }
L_089D0950:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089D0A08;
      }
      goto L_089D0958;
    }
L_089D0958:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[11] = (aot_gpr[23] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089D097Cu);
    aot_gpr[10] = (0u + 0u);
    goto L_089D06B0;
L_089D097C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D09BC;
      }
      goto L_089D0984;
    }
L_089D0984:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
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
L_089D09BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089D09D0u);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 134u, 0x089CF9E8u>(ctx, &aot_mem) && ctx.pc == 0x089D09D0u) goto L_089D09D0;
    return;
L_089D09D0:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
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
L_089D0A08:
    aot_gpr[2] = (aot_gpr[6] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[29]);
      if (branch_taken) {
          goto L_089D0958;
      }
      goto L_089D0A20;
    }
L_089D0A20:
    aot_gpr[16] = (aot_gpr[29] + 0u);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[19] = (0u + 0u);
    goto L_089D0A38;
L_089D0A30:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[19];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089D0958;
      }
      goto L_089D0A38;
    }
L_089D0A38:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089D0A30;
      }
      goto L_089D0A68;
    }
L_089D0A68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089D0A74u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 130u, 0x089CF9C4u>(ctx, &aot_mem) && ctx.pc == 0x089D0A74u) goto L_089D0A74;
    return;
L_089D0A74:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089D0A30;
L_089D0A7C:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089D0A80;
L_089D0A80:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[16] + 0u);
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
L_089D0AB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-672));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(632), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(660), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(656), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(652), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(648), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(644), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(640), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(636), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(628), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(624), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D0F5C;
      }
      goto L_089D0AEC;
    }
L_089D0AEC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    aot_gpr[3] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[6] & 65535u);
      if (branch_taken) {
          goto L_089D0BBC;
      }
      goto L_089D0B04;
    }
L_089D0B04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[6] & 65535u);
      if (branch_taken) {
          goto L_089D0BBC;
      }
      goto L_089D0B14;
    }
L_089D0B14:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    aot_gpr[3] = (aot_gpr[16] << 6u);
      if (branch_taken) {
          goto L_089D0BBC;
      }
      goto L_089D0B1C;
    }
L_089D0B1C:
    aot_gpr[2] = (aot_gpr[16] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089D0B3Cu);
    aot_gpr[17] = (aot_gpr[5] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 162u, 0x08992A80u>(ctx, &aot_mem) && ctx.pc == 0x089D0B3Cu) goto L_089D0B3C;
    return;
L_089D0B3C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
    if (aot_gpr[3] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(464)));
        goto L_089D0F9C;
    }
    goto L_089D0B48;
L_089D0B48:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(464)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(251) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089D0BB8;
      }
      goto L_089D0B60;
    }
L_089D0B60:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(72), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D0BB8;
      }
      goto L_089D0B70;
    }
L_089D0B70:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[19] = (0u + 0u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(6));
    goto L_089D0B7C;
L_089D0B7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[17] == aot_gpr[2]) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089D0BA8;
    }
    goto L_089D0B88;
L_089D0B88:
    if (aot_gpr[17] == aot_gpr[16]) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089D0BA8;
    }
    goto L_089D0B90;
L_089D0B90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[20];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(464));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 7u, 0x089D1054u>(ctx, &aot_mem); return;
      }
      goto L_089D0BA4;
    }
L_089D0BA4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089D0BA8;
L_089D0BA8:
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089D0B7C;
      }
      goto L_089D0BB8;
    }
L_089D0BB8:
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    goto L_089D0BBC;
L_089D0BBC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089D0CAC;
      }
      goto L_089D0BC4;
    }
L_089D0BC4:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    goto L_089D0BF0;
L_089D0BD4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[2] & 65535u);
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_089D0CAC;
      }
      goto L_089D0BF0;
    }
L_089D0BF0:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(21));
      if (branch_taken) {
          goto L_089D0BD4;
      }
      goto L_089D0C18;
    }
L_089D0C18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[2] << 1u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D0BD4;
      }
      goto L_089D0C28;
    }
L_089D0C28:
    aot_gpr[31] = (0x089D0C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089D0C30u) goto L_089D0C30;
    return;
L_089D0C30:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(601));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(26));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089D0C58u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 19u, 0x089CC174u>(ctx, &aot_mem) && ctx.pc == 0x089D0C58u) goto L_089D0C58;
    return;
L_089D0C58:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089D0C88;
      }
      goto L_089D0C70;
    }
L_089D0C70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[31] = (0x089D0C88u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[19]);
    goto L_089D08F8;
L_089D0C88:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[2] & 65535u);
    aot_gpr[3] = (aot_gpr[6] & 65535u);
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_089D0BF0;
      }
      goto L_089D0CAC;
    }
L_089D0CAC:
    aot_gpr[31] = (0x089D0CB4u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 2u, 0x089CF00Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0CB4u) goto L_089D0CB4;
    return;
L_089D0CB4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D0D18;
      }
      goto L_089D0CBC;
    }
L_089D0CBC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[30] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[6] & 65535u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[23] = (0u + 0u);
      if (branch_taken) {
          goto L_089D0D4C;
      }
      goto L_089D0CD0;
    }
L_089D0CD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[4] << 6u);
      if (branch_taken) {
          goto L_089D0D14;
      }
      goto L_089D0CE0;
    }
L_089D0CE0:
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[8]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[3];
    aot_gpr[2] = (aot_gpr[6] & 65535u);
      if (branch_taken) {
          goto L_089D0D14;
      }
      goto L_089D0D08;
    }
L_089D0D08:
    aot_gpr[10] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_089D0EF0;
      }
      goto L_089D0D14;
    }
L_089D0D14:
    aot_gpr[3] = (0u + 0u);
    goto L_089D0D18;
L_089D0D18:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(660)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(656)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(652)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(648)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(644)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(640)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(636)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(632)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(628)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0D4C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[23]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[22] = (aot_gpr[30] & 65535u);
      if (branch_taken) {
          goto L_089D0D9C;
      }
      goto L_089D0D68;
    }
L_089D0D68:
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    goto L_089D0D6C;
L_089D0D6C:
    aot_gpr[3] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[30] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089D0CD0;
      }
      goto L_089D0D7C;
    }
L_089D0D7C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[23]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
        goto L_089D0D6C;
    }
    goto L_089D0D98;
L_089D0D98:
    aot_gpr[22] = (aot_gpr[30] & 65535u);
    goto L_089D0D9C;
L_089D0D9C:
    aot_gpr[21] = (aot_gpr[22] & 65535u);
    aot_gpr[2] = (aot_gpr[21] << 3u);
    aot_gpr[3] = (aot_gpr[21] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[21]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(608), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089D0DC0;
L_089D0DC0:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[5] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_089D0F94;
      }
      goto L_089D0DC8;
    }
L_089D0DC8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089D0F94;
      }
      goto L_089D0DD8;
    }
L_089D0DD8:
    aot_gpr[31] = (0x089D0DE0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 66u, 0x089CF46Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0DE0u) goto L_089D0DE0;
    return;
L_089D0DE0:
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089D0F94;
      }
      goto L_089D0DF0;
    }
L_089D0DF0:
    aot_gpr[31] = (0x089D0DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 130u, 0x089C29A0u>(ctx, &aot_mem) && ctx.pc == 0x089D0DF8u) goto L_089D0DF8;
    return;
L_089D0DF8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(2)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089D0E18u);
    aot_gpr[10] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 74u, 0x089C66ECu>(ctx, &aot_mem) && ctx.pc == 0x089D0E18u) goto L_089D0E18;
    return;
L_089D0E18:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[3] = (aot_gpr[21] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089D0F5C;
      }
      goto L_089D0E30;
    }
L_089D0E30:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(608)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[31] = (0x089D0E48u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 66u, 0x089CF46Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0E48u) goto L_089D0E48;
    return;
L_089D0E48:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 6u, 0x089D104Cu>(ctx, &aot_mem); return;
      }
      goto L_089D0E54;
    }
L_089D0E54:
    aot_gpr[31] = (0x089D0E5Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0E5Cu) goto L_089D0E5C;
    return;
L_089D0E5C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D0DC0;
      }
      goto L_089D0E64;
    }
L_089D0E64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(660)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(656)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(652)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(648)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(644)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(640)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(636)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(632)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(628)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0E9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    goto L_089D0EA0;
L_089D0EA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(468)));
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(468)));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 5u, 0x089D1040u>(ctx, &aot_mem); return;
      }
      goto L_089D0ECC;
    }
L_089D0ECC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089D0ED8;
L_089D0ED8:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    goto L_089D0EDC;
L_089D0EDC:
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089D0D14;
      }
      goto L_089D0EEC;
    }
L_089D0EEC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089D0EF0;
L_089D0EF0:
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    if (aot_gpr[4] != aot_gpr[2]) {
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
        goto L_089D0EDC;
    }
    goto L_089D0F04;
L_089D0F04:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
        goto L_089D0EDC;
    }
    goto L_089D0F14;
L_089D0F14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089D0F44;
      }
      goto L_089D0F20;
    }
L_089D0F20:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D0E9C;
      }
      goto L_089D0F28;
    }
L_089D0F28:
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
        goto L_089D0EA0;
    }
    goto L_089D0F30;
L_089D0F30:
    if (aot_gpr[3] != 0u) {
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
        goto L_089D0EDC;
    }
    goto L_089D0F38;
L_089D0F38:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089D0ED8;
L_089D0F44:
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
        goto L_089D0EDC;
    }
    goto L_089D0F4C;
L_089D0F4C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089D0ED8;
L_089D0F5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(660)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(656)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(652)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(648)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(644)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(640)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(636)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(632)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(628)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0F94:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089D0D68;
L_089D0F9C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[9] - aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 4u, 0x089D1034u>(ctx, &aot_mem); return;
      }
      goto L_089D0FB0;
    }
L_089D0FB0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
        goto L_089D0CAC;
    }
    goto L_089D0FC4;
L_089D0FC4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (0u + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(6));
    goto L_089D0FEC;
L_089D0FDC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089D0FE0;
L_089D0FE0:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089D0BB8;
      }
      goto L_089D0FEC;
    }
L_089D0FEC:
    if (aot_gpr[4] == aot_gpr[7]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_089D0FE0;
    }
    goto L_089D0FF4;
L_089D0FF4:
    if (aot_gpr[4] == aot_gpr[16]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_089D0FE0;
    }
    goto L_089D0FFC;
L_089D0FFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x089D1000u; return;
}

void recomp_unit_0460(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0460_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_460(Runtime &runtime) {
    runtime.register_generated_unit(460u, 0x089D0000u, 4096u, &recomp_unit_0460, &recomp_unit_0460_entry);
    runtime.register_function(0x089D0000u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0008u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0010u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0020u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D003Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0048u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0064u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D006Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0080u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D00B0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D00C8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D00D4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D00DCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D00F4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D010Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0114u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0118u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0134u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0140u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D014Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0154u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D015Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0164u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0184u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D018Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D01B0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D01E8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D01F8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0204u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D020Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0210u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0224u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0240u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0270u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0278u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0288u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D02A0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D02A8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D02C0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D02DCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D02ECu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D02F4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D02FCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0304u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D030Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0340u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0350u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0360u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0388u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0398u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D03A0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D03ACu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D03B4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D03C0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D03C8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D03CCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D03D0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D03D8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D03E0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D03E4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D040Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D043Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0444u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0454u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0460u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0474u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0480u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0488u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0494u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D04A0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D04ACu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D04B4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D04BCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D04C4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D04CCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D04E0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D04ECu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D04F8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D04FCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0504u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0510u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0518u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0520u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D052Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0534u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0538u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0564u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D056Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0574u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D057Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D058Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0594u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D059Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D05DCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D05E8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D05F4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D05FCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0610u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0618u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0620u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0648u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D064Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0674u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0684u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D06B0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D06E4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D06F0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D06FCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0700u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0728u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0738u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0770u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D077Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D07BCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D07F8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D07FCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0804u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D080Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D086Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0880u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0888u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0894u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D08A4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D08ACu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D08B0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D08C4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D08CCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D08E8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D08F0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D08F8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0940u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0948u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0950u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0958u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D097Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0984u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D09BCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D09D0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0A08u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0A20u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0A30u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0A38u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0A68u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0A74u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0A7Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0A80u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0AB8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0AECu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0B04u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0B14u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0B1Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0B3Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0B48u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0B60u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0B70u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0B7Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0B88u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0B90u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0BA4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0BA8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0BB8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0BBCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0BC4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0BD4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0BF0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0C18u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0C28u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0C30u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0C58u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0C70u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0C88u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0CACu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0CB4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0CBCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0CD0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0CE0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0D08u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0D14u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0D18u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0D4Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0D68u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0D6Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0D7Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0D98u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0D9Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0DC0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0DC8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0DD8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0DE0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0DF0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0DF8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0E18u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0E30u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0E48u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0E54u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0E5Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0E64u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0E9Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0EA0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0ECCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0ED8u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0EDCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0EECu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0EF0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0F04u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0F14u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0F20u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0F28u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0F30u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0F38u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0F44u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0F4Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0F5Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0F94u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0F9Cu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0FB0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0FC4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0FDCu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0FE0u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0FECu, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0FF4u, &recomp_unit_0460, "recomp_unit_0460");
    runtime.register_function(0x089D0FFCu, &recomp_unit_0460, "recomp_unit_0460");
}
} // namespace psprecomp
