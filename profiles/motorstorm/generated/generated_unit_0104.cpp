#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0104[1013] = {
    1, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 17, 0, 18, 0, 0, 19, 0, 0,
    20, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 32, 0, 0, 33, 0, 34, 0, 35,
    0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 50, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61,
    0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0,
    0, 69, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0,
    76, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 94, 95, 96, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0,
    0, 108, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 123, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132,
    0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 138, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146,
    0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 152, 0, 153, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157, 158, 0, 159, 0, 0, 0, 160, 0, 161,
    0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 167, 168, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172,
    0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0,
    182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0,
    0, 192, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0,
    200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0,
    0, 0, 218, 0, 219, 0, 0, 220, 0, 221, 0, 0, 222, 0, 223, 0, 0, 224, 0, 225, 226,
};
void recomp_unit_0104_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0886C000u;
        entry_id = (entry_delta < 4052u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0104[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0886C000;
    case 2u: goto L_0886C018;
    case 3u: goto L_0886C01C;
    case 4u: goto L_0886C02C;
    case 5u: goto L_0886C034;
    case 6u: goto L_0886C044;
    case 7u: goto L_0886C054;
    case 8u: goto L_0886C060;
    case 9u: goto L_0886C070;
    case 10u: goto L_0886C084;
    case 11u: goto L_0886C0A0;
    case 12u: goto L_0886C0AC;
    case 13u: goto L_0886C0B4;
    case 14u: goto L_0886C0C0;
    case 15u: goto L_0886C0CC;
    case 16u: goto L_0886C0D8;
    case 17u: goto L_0886C0E0;
    case 18u: goto L_0886C0E8;
    case 19u: goto L_0886C0F4;
    case 20u: goto L_0886C100;
    case 21u: goto L_0886C108;
    case 22u: goto L_0886C110;
    case 23u: goto L_0886C120;
    case 24u: goto L_0886C150;
    case 25u: goto L_0886C154;
    case 26u: goto L_0886C160;
    case 27u: goto L_0886C19C;
    case 28u: goto L_0886C1A4;
    case 29u: goto L_0886C1C4;
    case 30u: goto L_0886C1CC;
    case 31u: goto L_0886C1D4;
    case 32u: goto L_0886C1E0;
    case 33u: goto L_0886C1EC;
    case 34u: goto L_0886C1F4;
    case 35u: goto L_0886C1FC;
    case 36u: goto L_0886C20C;
    case 37u: goto L_0886C23C;
    case 38u: goto L_0886C240;
    case 39u: goto L_0886C24C;
    case 40u: goto L_0886C288;
    case 41u: goto L_0886C290;
    case 42u: goto L_0886C2B0;
    case 43u: goto L_0886C2B8;
    case 44u: goto L_0886C2C0;
    case 45u: goto L_0886C2F0;
    case 46u: goto L_0886C314;
    case 47u: goto L_0886C320;
    case 48u: goto L_0886C32C;
    case 49u: goto L_0886C33C;
    case 50u: goto L_0886C344;
    case 51u: goto L_0886C348;
    case 52u: goto L_0886C358;
    case 53u: goto L_0886C360;
    case 54u: goto L_0886C380;
    case 55u: goto L_0886C388;
    case 56u: goto L_0886C398;
    case 57u: goto L_0886C3A8;
    case 58u: goto L_0886C3B8;
    case 59u: goto L_0886C3C4;
    case 60u: goto L_0886C3F0;
    case 61u: goto L_0886C3FC;
    case 62u: goto L_0886C404;
    case 63u: goto L_0886C40C;
    case 64u: goto L_0886C414;
    case 65u: goto L_0886C428;
    case 66u: goto L_0886C440;
    case 67u: goto L_0886C46C;
    case 68u: goto L_0886C478;
    case 69u: goto L_0886C484;
    case 70u: goto L_0886C488;
    case 71u: goto L_0886C4A0;
    case 72u: goto L_0886C4B4;
    case 73u: goto L_0886C4BC;
    case 74u: goto L_0886C4E4;
    case 75u: goto L_0886C4F0;
    case 76u: goto L_0886C500;
    case 77u: goto L_0886C508;
    case 78u: goto L_0886C524;
    case 79u: goto L_0886C544;
    case 80u: goto L_0886C554;
    case 81u: goto L_0886C560;
    case 82u: goto L_0886C580;
    case 83u: goto L_0886C588;
    case 84u: goto L_0886C590;
    case 85u: goto L_0886C598;
    case 86u: goto L_0886C5A0;
    case 87u: goto L_0886C5A8;
    case 88u: goto L_0886C5B0;
    case 89u: goto L_0886C5B8;
    case 90u: goto L_0886C5C0;
    case 91u: goto L_0886C634;
    case 92u: goto L_0886C640;
    case 93u: goto L_0886C64C;
    case 94u: goto L_0886C65C;
    case 95u: goto L_0886C660;
    case 96u: goto L_0886C664;
    case 97u: goto L_0886C67C;
    case 98u: goto L_0886C698;
    case 99u: goto L_0886C6B0;
    case 100u: goto L_0886C6BC;
    case 101u: goto L_0886C6C4;
    case 102u: goto L_0886C6D4;
    case 103u: goto L_0886C6DC;
    case 104u: goto L_0886C6FC;
    case 105u: goto L_0886C710;
    case 106u: goto L_0886C730;
    case 107u: goto L_0886C774;
    case 108u: goto L_0886C784;
    case 109u: goto L_0886C78C;
    case 110u: goto L_0886C798;
    case 111u: goto L_0886C7A4;
    case 112u: goto L_0886C7B4;
    case 113u: goto L_0886C7C0;
    case 114u: goto L_0886C7D0;
    case 115u: goto L_0886C7E4;
    case 116u: goto L_0886C7E8;
    case 117u: goto L_0886C810;
    case 118u: goto L_0886C828;
    case 119u: goto L_0886C834;
    case 120u: goto L_0886C84C;
    case 121u: goto L_0886C85C;
    case 122u: goto L_0886C874;
    case 123u: goto L_0886C884;
    case 124u: goto L_0886C888;
    case 125u: goto L_0886C898;
    case 126u: goto L_0886C8A0;
    case 127u: goto L_0886C8C0;
    case 128u: goto L_0886C8CC;
    case 129u: goto L_0886C8E4;
    case 130u: goto L_0886C8EC;
    case 131u: goto L_0886C8F4;
    case 132u: goto L_0886C8FC;
    case 133u: goto L_0886C904;
    case 134u: goto L_0886C90C;
    case 135u: goto L_0886C914;
    case 136u: goto L_0886C91C;
    case 137u: goto L_0886C924;
    case 138u: goto L_0886C928;
    case 139u: goto L_0886C930;
    case 140u: goto L_0886C93C;
    case 141u: goto L_0886C954;
    case 142u: goto L_0886C95C;
    case 143u: goto L_0886C964;
    case 144u: goto L_0886C96C;
    case 145u: goto L_0886C974;
    case 146u: goto L_0886C97C;
    case 147u: goto L_0886C984;
    case 148u: goto L_0886C98C;
    case 149u: goto L_0886C994;
    case 150u: goto L_0886C99C;
    case 151u: goto L_0886C9A4;
    case 152u: goto L_0886C9A8;
    case 153u: goto L_0886C9B0;
    case 154u: goto L_0886C9C0;
    case 155u: goto L_0886C9C8;
    case 156u: goto L_0886C9D0;
    case 157u: goto L_0886C9D8;
    case 158u: goto L_0886C9DC;
    case 159u: goto L_0886C9E4;
    case 160u: goto L_0886C9F4;
    case 161u: goto L_0886C9FC;
    case 162u: goto L_0886CA08;
    case 163u: goto L_0886CA14;
    case 164u: goto L_0886CA1C;
    case 165u: goto L_0886CA28;
    case 166u: goto L_0886CA3C;
    case 167u: goto L_0886CA4C;
    case 168u: goto L_0886CA50;
    case 169u: goto L_0886CA58;
    case 170u: goto L_0886CA6C;
    case 171u: goto L_0886CA74;
    case 172u: goto L_0886CA7C;
    case 173u: goto L_0886CA8C;
    case 174u: goto L_0886CA94;
    case 175u: goto L_0886CAA4;
    case 176u: goto L_0886CAAC;
    case 177u: goto L_0886CABC;
    case 178u: goto L_0886CAC4;
    case 179u: goto L_0886CAD4;
    case 180u: goto L_0886CADC;
    case 181u: goto L_0886CAF4;
    case 182u: goto L_0886CB00;
    case 183u: goto L_0886CB10;
    case 184u: goto L_0886CC38;
    case 185u: goto L_0886CC70;
    case 186u: goto L_0886CC7C;
    case 187u: goto L_0886CCA4;
    case 188u: goto L_0886CD18;
    case 189u: goto L_0886CD3C;
    case 190u: goto L_0886CD48;
    case 191u: goto L_0886CD6C;
    case 192u: goto L_0886CD84;
    case 193u: goto L_0886CD90;
    case 194u: goto L_0886CD9C;
    case 195u: goto L_0886CDA4;
    case 196u: goto L_0886CDB4;
    case 197u: goto L_0886CDBC;
    case 198u: goto L_0886CDE4;
    case 199u: goto L_0886CDF4;
    case 200u: goto L_0886CE00;
    case 201u: goto L_0886CE14;
    case 202u: goto L_0886CE34;
    case 203u: goto L_0886CE50;
    case 204u: goto L_0886CE6C;
    case 205u: goto L_0886CE8C;
    case 206u: goto L_0886CE9C;
    case 207u: goto L_0886CEAC;
    case 208u: goto L_0886CEFC;
    case 209u: goto L_0886CF04;
    case 210u: goto L_0886CF10;
    case 211u: goto L_0886CF1C;
    case 212u: goto L_0886CF2C;
    case 213u: goto L_0886CF34;
    case 214u: goto L_0886CF48;
    case 215u: goto L_0886CF50;
    case 216u: goto L_0886CF64;
    case 217u: goto L_0886CF74;
    case 218u: goto L_0886CF88;
    case 219u: goto L_0886CF90;
    case 220u: goto L_0886CF9C;
    case 221u: goto L_0886CFA4;
    case 222u: goto L_0886CFB0;
    case 223u: goto L_0886CFB8;
    case 224u: goto L_0886CFC4;
    case 225u: goto L_0886CFCC;
    case 226u: goto L_0886CFD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0886C000:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886C01C;
      }
      goto L_0886C018;
    }
L_0886C018:
    aot_gpr[19] = (0u | 1u);
    goto L_0886C01C;
L_0886C01C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x0886C02Cu);
    aot_gpr[20] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 81u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x0886C02Cu) goto L_0886C02C;
    return;
L_0886C02C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886C044;
      }
      goto L_0886C034;
    }
L_0886C034:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[4] << 16u);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 16u));
    goto L_0886C044;
L_0886C044:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[20]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886C054u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 163u, 0x0886BC8Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C054u) goto L_0886C054;
    return;
L_0886C054:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0886C0A0;
      }
      goto L_0886C060;
    }
L_0886C060:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_0886C0A0;
      }
      goto L_0886C070;
    }
L_0886C070:
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886C0A0;
      }
      goto L_0886C084;
    }
L_0886C084:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(452)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886C0B4;
      }
      goto L_0886C0A0;
    }
L_0886C0A0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886C0ACu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 186u, 0x0886BE2Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C0ACu) goto L_0886C0AC;
    return;
L_0886C0AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C2B8;
      }
      goto L_0886C0B4;
    }
L_0886C0B4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886C0E0;
      }
      goto L_0886C0C0;
    }
L_0886C0C0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(11))))));
    aot_gpr[31] = (0x0886C0CCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0886C0CCu) goto L_0886C0CC;
    return;
L_0886C0CC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[31] = (0x0886C0D8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0886C0D8u) goto L_0886C0D8;
    return;
L_0886C0D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C2B8;
      }
      goto L_0886C0E0;
    }
L_0886C0E0:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886C1D4;
      }
      goto L_0886C0E8;
    }
L_0886C0E8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[31] = (0x0886C0F4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0886C0F4u) goto L_0886C0F4;
    return;
L_0886C0F4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(11))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0886C154;
      }
      goto L_0886C100;
    }
L_0886C100:
    aot_gpr[31] = (0x0886C108u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 81u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x0886C108u) goto L_0886C108;
    return;
L_0886C108:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C154;
      }
      goto L_0886C110;
    }
L_0886C110:
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886C154;
      }
      goto L_0886C120;
    }
L_0886C120:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[20] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5424));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[8] = (2183u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886C150u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-15584));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 120u, 0x08863844u>(ctx, &aot_mem) && ctx.pc == 0x0886C150u) goto L_0886C150;
    return;
L_0886C150:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_0886C154;
L_0886C154:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(11))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0886C2B8;
      }
      goto L_0886C160;
    }
L_0886C160:
    aot_fpr[12] = aot_fpr[20] - aot_fpr[24];
    aot_gpr[5] = (15779u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (16230u << 16u);
    aot_gpr[5] = (2218u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[6] = (aot_gpr[6] | 26214u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 6u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0886C1A4;
      }
      goto L_0886C19C;
    }
L_0886C19C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C1C4;
      }
      goto L_0886C1A4;
    }
L_0886C1A4:
    aot_gpr[5] = (15692u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_0886C1C4;
    }
    goto L_0886C1C4;
L_0886C1C4:
    aot_gpr[31] = (0x0886C1CCu);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 107u, 0x0892A828u>(ctx, &aot_mem) && ctx.pc == 0x0886C1CCu) goto L_0886C1CC;
    return;
L_0886C1CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C2B8;
      }
      goto L_0886C1D4;
    }
L_0886C1D4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(11))))));
    aot_gpr[31] = (0x0886C1E0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0886C1E0u) goto L_0886C1E0;
    return;
L_0886C1E0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0886C240;
      }
      goto L_0886C1EC;
    }
L_0886C1EC:
    aot_gpr[31] = (0x0886C1F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 81u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x0886C1F4u) goto L_0886C1F4;
    return;
L_0886C1F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C240;
      }
      goto L_0886C1FC;
    }
L_0886C1FC:
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886C240;
      }
      goto L_0886C20C;
    }
L_0886C20C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[20] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5488));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[8] = (2183u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886C23Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-15584));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 120u, 0x08863844u>(ctx, &aot_mem) && ctx.pc == 0x0886C23Cu) goto L_0886C23C;
    return;
L_0886C23C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_0886C240;
L_0886C240:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0886C2B8;
      }
      goto L_0886C24C;
    }
L_0886C24C:
    aot_fpr[20] = aot_fpr[20] - aot_fpr[24];
    aot_gpr[5] = (15779u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (16230u << 16u);
    aot_gpr[5] = (2218u << 16u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[6] = (aot_gpr[6] | 26214u);
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0886C290;
      }
      goto L_0886C288;
    }
L_0886C288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C2B0;
      }
      goto L_0886C290;
    }
L_0886C290:
    aot_gpr[5] = (15692u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_0886C2B0;
    }
    goto L_0886C2B0;
L_0886C2B0:
    aot_gpr[31] = (0x0886C2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 107u, 0x0892A828u>(ctx, &aot_mem) && ctx.pc == 0x0886C2B8u) goto L_0886C2B8;
    return;
L_0886C2B8:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[19]));
    goto L_0886C2C0;
L_0886C2C0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C2F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(5756), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886C314u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 186u, 0x0886BE2Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C314u) goto L_0886C314;
    return;
L_0886C314:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C320:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886C32C;
L_0886C32C:
    aot_gpr[9] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(11))))));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886C348;
      }
      goto L_0886C33C;
    }
L_0886C33C:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886C348;
      }
      goto L_0886C344;
    }
L_0886C344:
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_0886C348;
L_0886C348:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886C32C;
      }
      goto L_0886C358;
    }
L_0886C358:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C360:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25200), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C380:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C388:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886C398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0886C398u) goto L_0886C398;
    return;
L_0886C398:
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C3A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886C3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 111u, 0x088C08D8u>(ctx, &aot_mem) && ctx.pc == 0x0886C3B8u) goto L_0886C3B8;
    return;
L_0886C3B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C3C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0886C40C;
      }
      goto L_0886C3F0;
    }
L_0886C3F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_gpr[31] = (0x0886C3FCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0886C3FCu) goto L_0886C3FC;
    return;
L_0886C3FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C414;
      }
      goto L_0886C404;
    }
L_0886C404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C524;
      }
      goto L_0886C40C;
    }
L_0886C40C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C524;
      }
      goto L_0886C414;
    }
L_0886C414:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0886C4B4;
      }
      goto L_0886C428;
    }
L_0886C428:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[19] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886C4A0;
      }
      goto L_0886C440;
    }
L_0886C440:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0886C46Cu);
    aot_gpr[6] = (0u | 28u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886C46Cu) goto L_0886C46C;
    return;
L_0886C46C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_0886C488;
      }
      goto L_0886C478;
    }
L_0886C478:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886C484u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    goto L_0886C5C0;
L_0886C484:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    goto L_0886C488;
L_0886C488:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[19] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0886C4B4;
      }
      goto L_0886C4A0;
    }
L_0886C4A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886C428;
      }
      goto L_0886C4B4;
    }
L_0886C4B4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0886C524;
      }
      goto L_0886C4BC;
    }
L_0886C4BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0886C4E4u);
    aot_gpr[6] = (0u | 28u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886C4E4u) goto L_0886C4E4;
    return;
L_0886C4E4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (aot_gpr[18] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_0886C508;
    }
    goto L_0886C4F0;
L_0886C4F0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0886C500u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_0886C5C0;
L_0886C500:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_0886C508;
L_0886C508:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0886C524;
L_0886C524:
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
L_0886C544:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886C554u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x0886C554u) goto L_0886C554;
    return;
L_0886C554:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C560:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25208), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C580:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C588:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C590:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C598:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C5A0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C5A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C5B0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C5B8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C5C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-7620));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0886C634u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 17u, 0x088770DCu>(ctx, &aot_mem) && ctx.pc == 0x0886C634u) goto L_0886C634;
    return;
L_0886C634:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C664;
      }
      goto L_0886C640;
    }
L_0886C640:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0886C660;
      }
      goto L_0886C64C;
    }
L_0886C64C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0886C65Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 164u, 0x08867F30u>(ctx, &aot_mem) && ctx.pc == 0x0886C65Cu) goto L_0886C65C;
    return;
L_0886C65C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0886C660;
L_0886C660:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_0886C664;
L_0886C664:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C67C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0886C6FC;
      }
      goto L_0886C698;
    }
L_0886C698:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7620));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C6BC;
      }
      goto L_0886C6B0;
    }
L_0886C6B0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0886C6BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C6BCu) goto L_0886C6BC;
    return;
L_0886C6BC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_0886C6D4;
      }
      goto L_0886C6C4;
    }
L_0886C6C4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_0886C6D4;
L_0886C6D4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0886C6FC;
      }
      goto L_0886C6DC;
    }
L_0886C6DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886C6FCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886C6FCu) goto L_0886C6FC;
    return;
L_0886C6FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C710:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25216), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C730:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] & 255u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-4288)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C7E4;
      }
      goto L_0886C774;
    }
L_0886C774:
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886C7D0;
      }
      goto L_0886C784;
    }
L_0886C784:
    aot_gpr[31] = (0x0886C78Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 207u, 0x0881CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C78Cu) goto L_0886C78C;
    return;
L_0886C78C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0886C798u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 208u, 0x0881CEB8u>(ctx, &aot_mem) && ctx.pc == 0x0886C798u) goto L_0886C798;
    return;
L_0886C798:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0886C7A4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 209u, 0x0881CED4u>(ctx, &aot_mem) && ctx.pc == 0x0886C7A4u) goto L_0886C7A4;
    return;
L_0886C7A4:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0886C7B4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 268u, 0x08871D18u>(ctx, &aot_mem) && ctx.pc == 0x0886C7B4u) goto L_0886C7B4;
    return;
L_0886C7B4:
    aot_gpr[4] = (aot_gpr[20] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C7D0;
      }
      goto L_0886C7C0;
    }
L_0886C7C0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_0886C7E8;
      }
      goto L_0886C7D0;
    }
L_0886C7D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-4288)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886C774;
      }
      goto L_0886C7E4;
    }
L_0886C7E4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886C7E8;
L_0886C7E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C810:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0886C828u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 195u, 0x0881CDD4u>(ctx, &aot_mem) && ctx.pc == 0x0886C828u) goto L_0886C828;
    return;
L_0886C828:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886C834u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 196u, 0x0881CDF0u>(ctx, &aot_mem) && ctx.pc == 0x0886C834u) goto L_0886C834;
    return;
L_0886C834:
    aot_gpr[4] = (aot_gpr[2] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x0886C84Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0886C84Cu) goto L_0886C84C;
    return;
L_0886C84C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C85C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4288)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886C898;
      }
      goto L_0886C874;
    }
L_0886C874:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C888;
      }
      goto L_0886C884;
    }
L_0886C884:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0886C888;
L_0886C888:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886C874;
      }
      goto L_0886C898;
    }
L_0886C898:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C8A0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C8C0:
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C924;
      }
      goto L_0886C8CC;
    }
L_0886C8CC:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(5136)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C8E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886C928;
      }
      goto L_0886C8EC;
    }
L_0886C8EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0886C928;
      }
      goto L_0886C8F4;
    }
L_0886C8F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_0886C928;
      }
      goto L_0886C8FC;
    }
L_0886C8FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0886C928;
      }
      goto L_0886C904;
    }
L_0886C904:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0886C928;
      }
      goto L_0886C90C;
    }
L_0886C90C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_0886C928;
      }
      goto L_0886C914;
    }
L_0886C914:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 12u);
      if (branch_taken) {
          goto L_0886C928;
      }
      goto L_0886C91C;
    }
L_0886C91C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_0886C928;
      }
      goto L_0886C924;
    }
L_0886C924:
    aot_gpr[2] = (0u | 0u);
    goto L_0886C928;
L_0886C928:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C930:
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C9A4;
      }
      goto L_0886C93C;
    }
L_0886C93C:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(5168)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C954:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886C9A8;
      }
      goto L_0886C95C;
    }
L_0886C95C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0886C9A8;
      }
      goto L_0886C964;
    }
L_0886C964:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_0886C9A8;
      }
      goto L_0886C96C;
    }
L_0886C96C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0886C9A8;
      }
      goto L_0886C974;
    }
L_0886C974:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0886C9A8;
      }
      goto L_0886C97C;
    }
L_0886C97C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_0886C9A8;
      }
      goto L_0886C984;
    }
L_0886C984:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_0886C9A8;
      }
      goto L_0886C98C;
    }
L_0886C98C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 7u);
      if (branch_taken) {
          goto L_0886C9A8;
      }
      goto L_0886C994;
    }
L_0886C994:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_0886C9A8;
      }
      goto L_0886C99C;
    }
L_0886C99C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_0886C9A8;
      }
      goto L_0886C9A4;
    }
L_0886C9A4:
    aot_gpr[2] = (0u | 12u);
    goto L_0886C9A8;
L_0886C9A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C9B0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-6992))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 14u);
      if (branch_taken) {
          goto L_0886C9D0;
      }
      goto L_0886C9C0;
    }
L_0886C9C0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_0886C9D0;
      }
      goto L_0886C9C8;
    }
L_0886C9C8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886C9D8;
      }
      goto L_0886C9D0;
    }
L_0886C9D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0886C9DC;
      }
      goto L_0886C9D8;
    }
L_0886C9D8:
    aot_gpr[2] = (0u | 1u);
    goto L_0886C9DC;
L_0886C9DC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C9E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886C9F4u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_0886C9B0;
L_0886C9F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CA1C;
      }
      goto L_0886C9FC;
    }
L_0886C9FC:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0886CA08u);
    aot_gpr[5] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x0886CA08u) goto L_0886CA08;
    return;
L_0886CA08:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CA1C;
      }
      goto L_0886CA14;
    }
L_0886CA14:
    aot_gpr[4] = (0u | 44u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0886CA1C;
L_0886CA1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886CA28:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886CA4C;
      }
      goto L_0886CA3C;
    }
L_0886CA3C:
    aot_gpr[5] = (0u | 46u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0886CA50;
      }
      goto L_0886CA4C;
    }
L_0886CA4C:
    aot_gpr[2] = (0u | 0u);
    goto L_0886CA50;
L_0886CA50:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886CA58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[31]);
    aot_gpr[31] = (0x0886CA6Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0886CA6Cu) goto L_0886CA6C;
    return;
L_0886CA6C:
    aot_gpr[31] = (0x0886CA74u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_0886CA28;
L_0886CA74:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CB00;
      }
      goto L_0886CA7C;
    }
L_0886CA7C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886CB00;
      }
      goto L_0886CA8C;
    }
L_0886CA8C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CB00;
      }
      goto L_0886CA94;
    }
L_0886CA94:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886CB00;
      }
      goto L_0886CAA4;
    }
L_0886CAA4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CB00;
      }
      goto L_0886CAAC;
    }
L_0886CAAC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886CB00;
      }
      goto L_0886CABC;
    }
L_0886CABC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CB00;
      }
      goto L_0886CAC4;
    }
L_0886CAC4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886CB00;
      }
      goto L_0886CAD4;
    }
L_0886CAD4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CB00;
      }
      goto L_0886CADC;
    }
L_0886CADC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(6));
    aot_gpr[31] = (0x0886CAF4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CAF4u) goto L_0886CAF4;
    return;
L_0886CAF4:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x0886CB00u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CB00u) goto L_0886CB00;
    return;
L_0886CB00:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886CB10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(2248));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(5024));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-2848));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-2592));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(2152));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(25237), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(5760), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25236), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(5812), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-7488), aot_gpr[5]);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-2072), aot_gpr[5]);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(2416), aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2272), 0u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2276), 0u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2280), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2428), aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(5824), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1904), aot_gpr[5]);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(2168), aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(25340), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2172), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2080));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5816));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[22] = (2214u << 16u);
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[23] = (0u | 12030u);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(2264));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(5120));
    goto L_0886CC38;
L_0886CC38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (0u | 1013u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0886CC70u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CC70u) goto L_0886CC70;
    return;
L_0886CC70:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0886CC7Cu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CC7Cu) goto L_0886CC7C;
    return;
L_0886CC7C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(64));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886CC38;
      }
      goto L_0886CCA4;
    }
L_0886CCA4:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(25320), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(25328), aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(5804), 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(5808), aot_gpr[5]);
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(25332), aot_gpr[4]);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(3024), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2420), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2424), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886CD18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3472)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886CD3Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 217u, 0x088B7E40u>(ctx, &aot_mem) && ctx.pc == 0x0886CD3Cu) goto L_0886CD3C;
    return;
L_0886CD3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886CD48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[16] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(25240), 0u);
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[31] = (0x0886CD6Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(25244), 0u);
    goto L_0886CB10;
L_0886CD6C:
    aot_gpr[4] = (0u | 8464u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(25240), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0886CD84u);
    aot_gpr[5] = (0u | 8464u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x0886CD84u) goto L_0886CD84;
    return;
L_0886CD84:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(25244), aot_gpr[2]);
    aot_gpr[31] = (0x0886CD90u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 120u, 0x088B7814u>(ctx, &aot_mem) && ctx.pc == 0x0886CD90u) goto L_0886CD90;
    return;
L_0886CD90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x0886CD9Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(7917), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 83u, 0x08943620u>(ctx, &aot_mem) && ctx.pc == 0x0886CD9Cu) goto L_0886CD9C;
    return;
L_0886CD9C:
    aot_gpr[31] = (0x0886CDA4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0886C8C0;
L_0886CDA4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-6992), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x0886CDB4u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-6992))))));
    goto L_0886C930;
L_0886CDB4:
    aot_gpr[31] = (0x0886CDBCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 102u, 0x0894373Cu>(ctx, &aot_mem) && ctx.pc == 0x0886CDBCu) goto L_0886CDBC;
    return;
L_0886CDBC:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x0886CDE4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5016));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 255u, 0x08876EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886CDE4u) goto L_0886CDE4;
    return;
L_0886CDE4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3472), aot_gpr[2]);
    aot_gpr[31] = (0x0886CDF4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 3u, 0x0886F038u>(ctx, &aot_mem) && ctx.pc == 0x0886CDF4u) goto L_0886CDF4;
    return;
L_0886CDF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x0886CE00u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7980), 0u);
    goto L_0886CD18;
L_0886CE00:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2848));
    aot_gpr[31] = (0x0886CE14u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5068));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CE14u) goto L_0886CE14;
    return;
L_0886CE14:
    aot_gpr[16] = (0u | 1u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-2080), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2336));
    aot_gpr[31] = (0x0886CE34u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5088));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CE34u) goto L_0886CE34;
    return;
L_0886CE34:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5820), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2592));
    aot_gpr[31] = (0x0886CE50u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5100));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CE50u) goto L_0886CE50;
    return;
L_0886CE50:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5816), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886CE6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0886CE8Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(25244));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0886CE8Cu) goto L_0886CE8C;
    return;
L_0886CE8C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0886CE9Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3472));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0886CE9Cu) goto L_0886CE9C;
    return;
L_0886CE9C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886CEAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[23] = (2218u << 16u);
    aot_gpr[30] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(2152));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-2848));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-2592));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_0886CEFC;
L_0886CEFC:
    aot_gpr[31] = (0x0886CF04u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 169u, 0x0881CC0Cu>(ctx, &aot_mem) && ctx.pc == 0x0886CF04u) goto L_0886CF04;
    return;
L_0886CF04:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] != aot_gpr[21];
    aot_gpr[22] = (aot_gpr[16] & 255u);
      if (branch_taken) {
          goto L_0886CF2C;
      }
      goto L_0886CF10;
    }
L_0886CF10:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[31] = (0x0886CF1Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 165u, 0x0881CB9Cu>(ctx, &aot_mem) && ctx.pc == 0x0886CF1Cu) goto L_0886CF1C;
    return;
L_0886CF1C:
    aot_gpr[4] = (aot_gpr[22] & 255u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_0886CF2C;
L_0886CF2C:
    aot_gpr[31] = (0x0886CF34u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 166u, 0x0881CBB8u>(ctx, &aot_mem) && ctx.pc == 0x0886CF34u) goto L_0886CF34;
    return;
L_0886CF34:
    aot_gpr[4] = (aot_gpr[22] & 255u);
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    aot_gpr[31] = (0x0886CF48u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CF48u) goto L_0886CF48;
    return;
L_0886CF48:
    aot_gpr[31] = (0x0886CF50u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 167u, 0x0881CBD4u>(ctx, &aot_mem) && ctx.pc == 0x0886CF50u) goto L_0886CF50;
    return;
L_0886CF50:
    aot_gpr[4] = (aot_gpr[22] & 255u);
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[30]);
    aot_gpr[31] = (0x0886CF64u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CF64u) goto L_0886CF64;
    return;
L_0886CF64:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886CEFC;
      }
      goto L_0886CF74;
    }
L_0886CF74:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7924)));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0886CFD0;
      }
      goto L_0886CF88;
    }
L_0886CF88:
    aot_gpr[31] = (0x0886CF90u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 169u, 0x0881CC0Cu>(ctx, &aot_mem) && ctx.pc == 0x0886CF90u) goto L_0886CF90;
    return;
L_0886CF90:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0886CFD0;
      }
      goto L_0886CF9C;
    }
L_0886CF9C:
    aot_gpr[31] = (0x0886CFA4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 166u, 0x0881CBB8u>(ctx, &aot_mem) && ctx.pc == 0x0886CFA4u) goto L_0886CFA4;
    return;
L_0886CFA4:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0886CFB0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CFB0u) goto L_0886CFB0;
    return;
L_0886CFB0:
    aot_gpr[31] = (0x0886CFB8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 167u, 0x0881CBD4u>(ctx, &aot_mem) && ctx.pc == 0x0886CFB8u) goto L_0886CFB8;
    return;
L_0886CFB8:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x0886CFC4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CFC4u) goto L_0886CFC4;
    return;
L_0886CFC4:
    aot_gpr[31] = (0x0886CFCCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 165u, 0x0881CB9Cu>(ctx, &aot_mem) && ctx.pc == 0x0886CFCCu) goto L_0886CFCC;
    return;
L_0886CFCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2152), aot_gpr[2]);
    goto L_0886CFD0;
L_0886CFD0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0104(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0104_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_104(Runtime &runtime) {
    runtime.register_generated_unit(104u, 0x0886C000u, 4096u, &recomp_unit_0104, &recomp_unit_0104_entry);
    runtime.register_function(0x0886C000u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C018u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C01Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C02Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C034u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C044u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C054u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C060u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C070u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C084u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C0A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C0ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C0B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C0C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C0CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C0D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C0E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C0E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C0F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C100u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C108u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C110u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C120u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C150u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C154u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C160u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C19Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C1A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C1C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C1CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C1D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C1E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C1ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C1F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C1FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C20Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C23Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C240u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C24Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C288u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C290u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C2B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C2B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C2C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C2F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C314u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C320u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C32Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C33Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C344u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C348u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C358u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C360u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C380u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C388u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C398u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C3A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C3B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C3C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C3F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C3FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C404u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C40Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C414u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C428u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C440u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C46Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C478u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C484u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C488u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C4A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C4B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C4BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C4E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C4F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C500u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C508u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C524u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C544u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C554u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C560u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C580u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C588u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C590u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C598u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C5A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C5A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C5B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C5B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C5C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C634u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C640u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C64Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C65Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C660u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C664u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C67Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C698u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C6B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C6BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C6C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C6D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C6DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C6FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C710u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C730u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C774u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C784u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C78Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C798u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C7A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C7B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C7C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C7D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C7E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C7E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C810u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C828u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C834u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C84Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C85Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C874u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C884u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C888u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C898u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C8A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C8C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C8CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C8E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C8ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C8F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C8FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C904u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C90Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C914u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C91Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C924u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C928u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C930u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C93Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C954u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C95Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C964u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C96Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C974u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C97Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C984u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C98Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C994u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C99Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C9A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C9A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C9B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C9C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C9C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C9D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C9D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C9DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C9E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C9F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886C9FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CA08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CA14u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CA1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CA28u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CA3Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CA4Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CA50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CA58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CA6Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CA74u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CA7Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CA8Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CA94u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CAA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CAACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CABCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CAC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CAD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CADCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CAF4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CB00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CB10u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CC38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CC70u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CC7Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CCA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CD18u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CD3Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CD48u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CD6Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CD84u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CD90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CD9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CDA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CDB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CDBCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CDE4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CDF4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CE00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CE14u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CE34u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CE50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CE6Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CE8Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CE9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CEACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CEFCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CF04u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CF10u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CF1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CF2Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CF34u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CF48u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CF50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CF64u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CF74u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CF88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CF90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CF9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CFA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CFB0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CFB8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CFC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CFCCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x0886CFD0u, &recomp_unit_0104, "recomp_unit_0104");
}
} // namespace psprecomp
