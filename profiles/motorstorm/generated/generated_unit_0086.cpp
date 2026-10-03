#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0086[1005] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0,
    14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0,
    64, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0,
    71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 78, 79, 0, 80, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 96, 97, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 103, 0, 0, 104, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 117, 0, 118, 0, 119, 0,
    120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0,
    0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 148, 149, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 165, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 173, 174, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 188, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 192, 0,
    0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 209, 210, 0, 0, 0, 0, 211,
    0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 215, 216, 0, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 222, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229,
};
void recomp_unit_0086_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0885A004u;
        entry_id = (entry_delta < 4020u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0086[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0885A004;
    case 2u: goto L_0885A00C;
    case 3u: goto L_0885A024;
    case 4u: goto L_0885A034;
    case 5u: goto L_0885A03C;
    case 6u: goto L_0885A044;
    case 7u: goto L_0885A04C;
    case 8u: goto L_0885A054;
    case 9u: goto L_0885A05C;
    case 10u: goto L_0885A064;
    case 11u: goto L_0885A06C;
    case 12u: goto L_0885A074;
    case 13u: goto L_0885A07C;
    case 14u: goto L_0885A084;
    case 15u: goto L_0885A08C;
    case 16u: goto L_0885A094;
    case 17u: goto L_0885A09C;
    case 18u: goto L_0885A0A4;
    case 19u: goto L_0885A0BC;
    case 20u: goto L_0885A0D8;
    case 21u: goto L_0885A0E4;
    case 22u: goto L_0885A0F4;
    case 23u: goto L_0885A10C;
    case 24u: goto L_0885A118;
    case 25u: goto L_0885A128;
    case 26u: goto L_0885A138;
    case 27u: goto L_0885A148;
    case 28u: goto L_0885A158;
    case 29u: goto L_0885A168;
    case 30u: goto L_0885A180;
    case 31u: goto L_0885A198;
    case 32u: goto L_0885A1A8;
    case 33u: goto L_0885A1B8;
    case 34u: goto L_0885A1C8;
    case 35u: goto L_0885A1E0;
    case 36u: goto L_0885A1F8;
    case 37u: goto L_0885A218;
    case 38u: goto L_0885A238;
    case 39u: goto L_0885A240;
    case 40u: goto L_0885A248;
    case 41u: goto L_0885A274;
    case 42u: goto L_0885A298;
    case 43u: goto L_0885A2AC;
    case 44u: goto L_0885A2B8;
    case 45u: goto L_0885A2C8;
    case 46u: goto L_0885A2D8;
    case 47u: goto L_0885A2E8;
    case 48u: goto L_0885A2F4;
    case 49u: goto L_0885A304;
    case 50u: goto L_0885A324;
    case 51u: goto L_0885A33C;
    case 52u: goto L_0885A344;
    case 53u: goto L_0885A34C;
    case 54u: goto L_0885A358;
    case 55u: goto L_0885A368;
    case 56u: goto L_0885A374;
    case 57u: goto L_0885A380;
    case 58u: goto L_0885A3AC;
    case 59u: goto L_0885A3B4;
    case 60u: goto L_0885A3BC;
    case 61u: goto L_0885A3EC;
    case 62u: goto L_0885A3F4;
    case 63u: goto L_0885A3FC;
    case 64u: goto L_0885A404;
    case 65u: goto L_0885A414;
    case 66u: goto L_0885A428;
    case 67u: goto L_0885A430;
    case 68u: goto L_0885A450;
    case 69u: goto L_0885A46C;
    case 70u: goto L_0885A474;
    case 71u: goto L_0885A484;
    case 72u: goto L_0885A494;
    case 73u: goto L_0885A49C;
    case 74u: goto L_0885A4AC;
    case 75u: goto L_0885A4B4;
    case 76u: goto L_0885A4CC;
    case 77u: goto L_0885A4D4;
    case 78u: goto L_0885A4F0;
    case 79u: goto L_0885A4F4;
    case 80u: goto L_0885A4FC;
    case 81u: goto L_0885A514;
    case 82u: goto L_0885A538;
    case 83u: goto L_0885A540;
    case 84u: goto L_0885A548;
    case 85u: goto L_0885A550;
    case 86u: goto L_0885A568;
    case 87u: goto L_0885A588;
    case 88u: goto L_0885A594;
    case 89u: goto L_0885A5A4;
    case 90u: goto L_0885A5AC;
    case 91u: goto L_0885A5B8;
    case 92u: goto L_0885A5C8;
    case 93u: goto L_0885A5D0;
    case 94u: goto L_0885A5DC;
    case 95u: goto L_0885A5EC;
    case 96u: goto L_0885A5F4;
    case 97u: goto L_0885A5F8;
    case 98u: goto L_0885A600;
    case 99u: goto L_0885A630;
    case 100u: goto L_0885A63C;
    case 101u: goto L_0885A654;
    case 102u: goto L_0885A67C;
    case 103u: goto L_0885A688;
    case 104u: goto L_0885A694;
    case 105u: goto L_0885A6A0;
    case 106u: goto L_0885A6A8;
    case 107u: goto L_0885A6B0;
    case 108u: goto L_0885A6CC;
    case 109u: goto L_0885A6F8;
    case 110u: goto L_0885A704;
    case 111u: goto L_0885A724;
    case 112u: goto L_0885A730;
    case 113u: goto L_0885A740;
    case 114u: goto L_0885A74C;
    case 115u: goto L_0885A754;
    case 116u: goto L_0885A75C;
    case 117u: goto L_0885A76C;
    case 118u: goto L_0885A774;
    case 119u: goto L_0885A77C;
    case 120u: goto L_0885A784;
    case 121u: goto L_0885A790;
    case 122u: goto L_0885A798;
    case 123u: goto L_0885A7AC;
    case 124u: goto L_0885A7B8;
    case 125u: goto L_0885A7C4;
    case 126u: goto L_0885A7CC;
    case 127u: goto L_0885A7D4;
    case 128u: goto L_0885A7E4;
    case 129u: goto L_0885A7F8;
    case 130u: goto L_0885A808;
    case 131u: goto L_0885A818;
    case 132u: goto L_0885A820;
    case 133u: goto L_0885A830;
    case 134u: goto L_0885A83C;
    case 135u: goto L_0885A854;
    case 136u: goto L_0885A864;
    case 137u: goto L_0885A88C;
    case 138u: goto L_0885A8A0;
    case 139u: goto L_0885A8A8;
    case 140u: goto L_0885A8B0;
    case 141u: goto L_0885A8BC;
    case 142u: goto L_0885A8C4;
    case 143u: goto L_0885A8CC;
    case 144u: goto L_0885A8D4;
    case 145u: goto L_0885A8DC;
    case 146u: goto L_0885A8E4;
    case 147u: goto L_0885A8EC;
    case 148u: goto L_0885A8F0;
    case 149u: goto L_0885A8F4;
    case 150u: goto L_0885A908;
    case 151u: goto L_0885A930;
    case 152u: goto L_0885A948;
    case 153u: goto L_0885A950;
    case 154u: goto L_0885A958;
    case 155u: goto L_0885A960;
    case 156u: goto L_0885A968;
    case 157u: goto L_0885A970;
    case 158u: goto L_0885A984;
    case 159u: goto L_0885A9A8;
    case 160u: goto L_0885A9B4;
    case 161u: goto L_0885A9C0;
    case 162u: goto L_0885A9CC;
    case 163u: goto L_0885A9D4;
    case 164u: goto L_0885A9E0;
    case 165u: goto L_0885A9E4;
    case 166u: goto L_0885A9F4;
    case 167u: goto L_0885AA0C;
    case 168u: goto L_0885AA28;
    case 169u: goto L_0885AA38;
    case 170u: goto L_0885AA5C;
    case 171u: goto L_0885AA68;
    case 172u: goto L_0885AA70;
    case 173u: goto L_0885AA78;
    case 174u: goto L_0885AA7C;
    case 175u: goto L_0885AA8C;
    case 176u: goto L_0885AAA4;
    case 177u: goto L_0885AAB0;
    case 178u: goto L_0885AABC;
    case 179u: goto L_0885AADC;
    case 180u: goto L_0885AB0C;
    case 181u: goto L_0885AB28;
    case 182u: goto L_0885AB58;
    case 183u: goto L_0885AB7C;
    case 184u: goto L_0885AB9C;
    case 185u: goto L_0885ABB0;
    case 186u: goto L_0885ABC0;
    case 187u: goto L_0885ABC8;
    case 188u: goto L_0885ABD0;
    case 189u: goto L_0885ABD8;
    case 190u: goto L_0885ABE8;
    case 191u: goto L_0885ABF8;
    case 192u: goto L_0885ABFC;
    case 193u: goto L_0885AC08;
    case 194u: goto L_0885AC3C;
    case 195u: goto L_0885AC48;
    case 196u: goto L_0885AC68;
    case 197u: goto L_0885ACB8;
    case 198u: goto L_0885ACDC;
    case 199u: goto L_0885AD00;
    case 200u: goto L_0885AD24;
    case 201u: goto L_0885AD48;
    case 202u: goto L_0885AD6C;
    case 203u: goto L_0885AD90;
    case 204u: goto L_0885ADB4;
    case 205u: goto L_0885ADBC;
    case 206u: goto L_0885ADC4;
    case 207u: goto L_0885AE54;
    case 208u: goto L_0885AE60;
    case 209u: goto L_0885AE68;
    case 210u: goto L_0885AE6C;
    case 211u: goto L_0885AE80;
    case 212u: goto L_0885AE8C;
    case 213u: goto L_0885AEAC;
    case 214u: goto L_0885AEB4;
    case 215u: goto L_0885AEBC;
    case 216u: goto L_0885AEC0;
    case 217u: goto L_0885AECC;
    case 218u: goto L_0885AED4;
    case 219u: goto L_0885AEDC;
    case 220u: goto L_0885AEF8;
    case 221u: goto L_0885AF0C;
    case 222u: goto L_0885AF20;
    case 223u: goto L_0885AF24;
    case 224u: goto L_0885AF34;
    case 225u: goto L_0885AF44;
    case 226u: goto L_0885AF68;
    case 227u: goto L_0885AF88;
    case 228u: goto L_0885AFA4;
    case 229u: goto L_0885AFB4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0885A004:
    aot_gpr[31] = (0x0885A00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 65u, 0x0884A598u>(ctx, &aot_mem) && ctx.pc == 0x0885A00Cu) goto L_0885A00C;
    return;
L_0885A00C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3340));
    aot_gpr[31] = (0x0885A024u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0885A024u) goto L_0885A024;
    return;
L_0885A024:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0885A09C;
      }
      goto L_0885A034;
    }
L_0885A034:
    aot_gpr[31] = (0x0885A03Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 63u, 0x088583E4u>(ctx, &aot_mem) && ctx.pc == 0x0885A03Cu) goto L_0885A03C;
    return;
L_0885A03C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A09C;
      }
      goto L_0885A044;
    }
L_0885A044:
    aot_gpr[31] = (0x0885A04Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 55u, 0x08858374u>(ctx, &aot_mem) && ctx.pc == 0x0885A04Cu) goto L_0885A04C;
    return;
L_0885A04C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A09C;
      }
      goto L_0885A054;
    }
L_0885A054:
    aot_gpr[31] = (0x0885A05Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 92u, 0x08858588u>(ctx, &aot_mem) && ctx.pc == 0x0885A05Cu) goto L_0885A05C;
    return;
L_0885A05C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A09C;
      }
      goto L_0885A064;
    }
L_0885A064:
    aot_gpr[31] = (0x0885A06Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 101u, 0x08858604u>(ctx, &aot_mem) && ctx.pc == 0x0885A06Cu) goto L_0885A06C;
    return;
L_0885A06C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A09C;
      }
      goto L_0885A074;
    }
L_0885A074:
    aot_gpr[31] = (0x0885A07Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 108u, 0x08858688u>(ctx, &aot_mem) && ctx.pc == 0x0885A07Cu) goto L_0885A07C;
    return;
L_0885A07C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A09C;
      }
      goto L_0885A084;
    }
L_0885A084:
    aot_gpr[31] = (0x0885A08Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 117u, 0x08858704u>(ctx, &aot_mem) && ctx.pc == 0x0885A08Cu) goto L_0885A08C;
    return;
L_0885A08C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A09C;
      }
      goto L_0885A094;
    }
L_0885A094:
    aot_gpr[31] = (0x0885A09Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 124u, 0x0885875Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A09Cu) goto L_0885A09C;
    return;
L_0885A09C:
    aot_gpr[31] = (0x0885A0A4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x0885A0A4u) goto L_0885A0A4;
    return;
L_0885A0A4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2792));
    aot_gpr[31] = (0x0885A0BCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2820));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A0BCu) goto L_0885A0BC;
    return;
L_0885A0BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A0F4;
      }
      goto L_0885A0D8;
    }
L_0885A0D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(608)));
    aot_gpr[31] = (0x0885A0E4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(612)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 67u, 0x0888A478u>(ctx, &aot_mem) && ctx.pc == 0x0885A0E4u) goto L_0885A0E4;
    return;
L_0885A0E4:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(544), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(548), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0885A118;
      }
      goto L_0885A0F4;
    }
L_0885A0F4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2792));
    aot_gpr[31] = (0x0885A10Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2852));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A10Cu) goto L_0885A10C;
    return;
L_0885A10C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885A118u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 179u, 0x08858C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A118u) goto L_0885A118;
    return;
L_0885A118:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(572)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(528)));
    aot_gpr[31] = (0x0885A128u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x0885A128u) goto L_0885A128;
    return;
L_0885A128:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(576)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(528)));
    aot_gpr[31] = (0x0885A138u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x0885A138u) goto L_0885A138;
    return;
L_0885A138:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(568)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(532)));
    aot_gpr[31] = (0x0885A148u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x0885A148u) goto L_0885A148;
    return;
L_0885A148:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (0x0885A158u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x0885A158u) goto L_0885A158;
    return;
L_0885A158:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(584)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (0x0885A168u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x0885A168u) goto L_0885A168;
    return;
L_0885A168:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(556)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(588)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x0885A180u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x0885A180u) goto L_0885A180;
    return;
L_0885A180:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(592)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(556)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885A198u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x0885A198u) goto L_0885A198;
    return;
L_0885A198:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(596)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (0x0885A1A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x0885A1A8u) goto L_0885A1A8;
    return;
L_0885A1A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(600)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (0x0885A1B8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x0885A1B8u) goto L_0885A1B8;
    return;
L_0885A1B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(604)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (0x0885A1C8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x0885A1C8u) goto L_0885A1C8;
    return;
L_0885A1C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(608)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(544)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885A1E0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x0885A1E0u) goto L_0885A1E0;
    return;
L_0885A1E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(612)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(548)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885A1F8u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 150u, 0x08857D48u>(ctx, &aot_mem) && ctx.pc == 0x0885A1F8u) goto L_0885A1F8;
    return;
L_0885A1F8:
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
L_0885A218:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24176), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A238:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A240:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A248:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3624));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0885A274u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3644));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A274u) goto L_0885A274;
    return;
L_0885A274:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A2F4;
      }
      goto L_0885A298;
    }
L_0885A298:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7928)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A2D8;
      }
      goto L_0885A2AC;
    }
L_0885A2AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7922)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A2D8;
      }
      goto L_0885A2B8;
    }
L_0885A2B8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885A2C8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3656));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0885A2C8u) goto L_0885A2C8;
    return;
L_0885A2C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0885A2F4;
      }
      goto L_0885A2D8;
    }
L_0885A2D8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885A2E8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3676));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0885A2E8u) goto L_0885A2E8;
    return;
L_0885A2E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_0885A2F4;
L_0885A2F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A304:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24184), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A324:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0885A33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0309_entry, 309u, 108u, 0x08939EECu>(ctx, &aot_mem) && ctx.pc == 0x0885A33Cu) goto L_0885A33C;
    return;
L_0885A33C:
    aot_gpr[31] = (0x0885A344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 96u, 0x08884AE4u>(ctx, &aot_mem) && ctx.pc == 0x0885A344u) goto L_0885A344;
    return;
L_0885A344:
    aot_gpr[31] = (0x0885A34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 70u, 0x0893F74Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A34Cu) goto L_0885A34C;
    return;
L_0885A34C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0885A358u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x0885A358u) goto L_0885A358;
    return;
L_0885A358:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5216)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A414;
      }
      goto L_0885A368;
    }
L_0885A368:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[31] = (0x0885A374u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0885A374u) goto L_0885A374;
    return;
L_0885A374:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[31] = (0x0885A380u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0885A380u) goto L_0885A380;
    return;
L_0885A380:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28760)));
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(5228)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0885A3ACu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0885A3ACu) goto L_0885A3AC;
    return;
L_0885A3AC:
    aot_gpr[31] = (0x0885A3B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x0885A3B4u) goto L_0885A3B4;
    return;
L_0885A3B4:
    aot_gpr[31] = (0x0885A3BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0885A3BCu) goto L_0885A3BC;
    return;
L_0885A3BC:
    aot_gpr[4] = (0u | 6u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[6] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[31] = (0x0885A3ECu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0885A3ECu) goto L_0885A3EC;
    return;
L_0885A3EC:
    aot_gpr[31] = (0x0885A3F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 15u, 0x08928174u>(ctx, &aot_mem) && ctx.pc == 0x0885A3F4u) goto L_0885A3F4;
    return;
L_0885A3F4:
    aot_gpr[31] = (0x0885A3FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x0885A3FCu) goto L_0885A3FC;
    return;
L_0885A3FC:
    aot_gpr[31] = (0x0885A404u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0885A404u) goto L_0885A404;
    return;
L_0885A404:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28760)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    goto L_0885A414;
L_0885A414:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A428:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A430:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0885A450u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 152u, 0x088D8A84u>(ctx, &aot_mem) && ctx.pc == 0x0885A450u) goto L_0885A450;
    return;
L_0885A450:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    aot_gpr[5] = (0u | 512u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0885A46Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6560));
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 94u, 0x089347FCu>(ctx, &aot_mem) && ctx.pc == 0x0885A46Cu) goto L_0885A46C;
    return;
L_0885A46C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (2218u << 16u);
      if (branch_taken) {
          goto L_0885A4D4;
      }
      goto L_0885A474;
    }
L_0885A474:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0885A4D4;
      }
      goto L_0885A484;
    }
L_0885A484:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0885A494u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3696));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A494u) goto L_0885A494;
    return;
L_0885A494:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A4D4;
      }
      goto L_0885A49C;
    }
L_0885A49C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A4D4;
      }
      goto L_0885A4AC;
    }
L_0885A4AC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2228)));
      if (branch_taken) {
          goto L_0885A4F4;
      }
      goto L_0885A4B4;
    }
L_0885A4B4:
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(160));
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(176));
    aot_gpr[9] = (aot_gpr[17] + static_cast<std::uint32_t>(184));
    aot_gpr[31] = (0x0885A4CCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 60u, 0x088168A4u>(ctx, &aot_mem) && ctx.pc == 0x0885A4CCu) goto L_0885A4CC;
    return;
L_0885A4CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2228)));
      if (branch_taken) {
          goto L_0885A4F4;
      }
      goto L_0885A4D4;
    }
L_0885A4D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(176));
    aot_gpr[9] = (aot_gpr[17] + static_cast<std::uint32_t>(184));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0885A4F0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 60u, 0x088168A4u>(ctx, &aot_mem) && ctx.pc == 0x0885A4F0u) goto L_0885A4F0;
    return;
L_0885A4F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2228)));
    goto L_0885A4F4;
L_0885A4F4:
    aot_gpr[31] = (0x0885A4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x08816998u>(ctx, &aot_mem) && ctx.pc == 0x0885A4FCu) goto L_0885A4FC;
    return;
L_0885A4FC:
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
L_0885A514:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] & 255u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(5216)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0885A550;
      }
      goto L_0885A538;
    }
L_0885A538:
    aot_gpr[31] = (0x0885A540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 155u, 0x0893CC3Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A540u) goto L_0885A540;
    return;
L_0885A540:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A550;
      }
      goto L_0885A548;
    }
L_0885A548:
    aot_gpr[31] = (0x0885A550u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 150u, 0x0893CBF4u>(ctx, &aot_mem) && ctx.pc == 0x0885A550u) goto L_0885A550;
    return;
L_0885A550:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5216), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A568:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(2172)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A630;
      }
      goto L_0885A588;
    }
L_0885A588:
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0885A5AC;
      }
      goto L_0885A594;
    }
L_0885A594:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0885A5A4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 132u, 0x0885B95Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A5A4u) goto L_0885A5A4;
    return;
L_0885A5A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0885A5F8;
      }
      goto L_0885A5AC;
    }
L_0885A5AC:
    aot_gpr[7] = (0u | 2u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0885A5D0;
      }
      goto L_0885A5B8;
    }
L_0885A5B8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0885A5C8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 136u, 0x0885B988u>(ctx, &aot_mem) && ctx.pc == 0x0885A5C8u) goto L_0885A5C8;
    return;
L_0885A5C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0885A5F8;
      }
      goto L_0885A5D0;
    }
L_0885A5D0:
    aot_gpr[7] = (0u | 3u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0885A5F4;
      }
      goto L_0885A5DC;
    }
L_0885A5DC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0885A5ECu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 140u, 0x0885B9B4u>(ctx, &aot_mem) && ctx.pc == 0x0885A5ECu) goto L_0885A5EC;
    return;
L_0885A5EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0885A5F8;
      }
      goto L_0885A5F4;
    }
L_0885A5F4:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    goto L_0885A5F8;
L_0885A5F8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A630;
      }
      goto L_0885A600;
    }
L_0885A600:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2228)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2228)));
    aot_gpr[6] = (16204u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[6] | 52429u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2228)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0885A630;
L_0885A630:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A63C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0885A67C;
      }
      goto L_0885A654;
    }
L_0885A654:
    aot_gpr[5] = (16204u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (2218u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2228)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0885A67Cu);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 50u, 0x08816754u>(ctx, &aot_mem) && ctx.pc == 0x0885A67Cu) goto L_0885A67C;
    return;
L_0885A67C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A688:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A6A0;
      }
      goto L_0885A694;
    }
L_0885A694:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5224)));
      if (branch_taken) {
          goto L_0885A6A8;
      }
      goto L_0885A6A0;
    }
L_0885A6A0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5220)));
    goto L_0885A6A8;
L_0885A6A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A6B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A6F8;
      }
      goto L_0885A6CC;
    }
L_0885A6CC:
    aot_gpr[7] = (16204u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 52429u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (16128u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[31] = (0x0885A6F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2228)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 50u, 0x08816754u>(ctx, &aot_mem) && ctx.pc == 0x0885A6F8u) goto L_0885A6F8;
    return;
L_0885A6F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A704:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2224)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0885A754;
      }
      goto L_0885A724;
    }
L_0885A724:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2144)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A754;
      }
      goto L_0885A730;
    }
L_0885A730:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0885A740u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 34u, 0x088DA258u>(ctx, &aot_mem) && ctx.pc == 0x0885A740u) goto L_0885A740;
    return;
L_0885A740:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A75C;
      }
      goto L_0885A74C;
    }
L_0885A74C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A854;
      }
      goto L_0885A754;
    }
L_0885A754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A854;
      }
      goto L_0885A75C;
    }
L_0885A75C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0885A77C;
      }
      goto L_0885A76C;
    }
L_0885A76C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0885A830;
      }
      goto L_0885A774;
    }
L_0885A774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A798;
      }
      goto L_0885A77C;
    }
L_0885A77C:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A7D4;
      }
      goto L_0885A784;
    }
L_0885A784:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A820;
      }
      goto L_0885A790;
    }
L_0885A790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A830;
      }
      goto L_0885A798;
    }
L_0885A798:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 6u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0885A7B8;
      }
      goto L_0885A7AC;
    }
L_0885A7AC:
    aot_gpr[6] = (0u | 7u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0885A7C4;
      }
      goto L_0885A7B8;
    }
L_0885A7B8:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_0885A7CC;
      }
      goto L_0885A7C4;
    }
L_0885A7C4:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0885A7CC;
L_0885A7CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A830;
      }
      goto L_0885A7D4;
    }
L_0885A7D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(1454))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A7F8;
      }
      goto L_0885A7E4;
    }
L_0885A7E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_0885A818;
      }
      goto L_0885A7F8;
    }
L_0885A7F8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x0885A808u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 25u, 0x088DA1D8u>(ctx, &aot_mem) && ctx.pc == 0x0885A808u) goto L_0885A808;
    return;
L_0885A808:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0885A818;
L_0885A818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A830;
      }
      goto L_0885A820;
    }
L_0885A820:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0885A830;
L_0885A830:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0885A83Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 67u, 0x089406D4u>(ctx, &aot_mem) && ctx.pc == 0x0885A83Cu) goto L_0885A83C;
    return;
L_0885A83C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2216), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2216));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0885A854;
L_0885A854:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A864:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0885A88Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 54u, 0x088DA348u>(ctx, &aot_mem) && ctx.pc == 0x0885A88Cu) goto L_0885A88C;
    return;
L_0885A88C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[6] = (aot_gpr[5] | aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A8F0;
      }
      goto L_0885A8A0;
    }
L_0885A8A0:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885A8D4;
      }
      goto L_0885A8A8;
    }
L_0885A8A8:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885A8C4;
      }
      goto L_0885A8B0;
    }
L_0885A8B0:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A8EC;
      }
      goto L_0885A8BC;
    }
L_0885A8BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0885A8E4;
      }
      goto L_0885A8C4;
    }
L_0885A8C4:
    aot_gpr[31] = (0x0885A8CCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 180u, 0x088D8C24u>(ctx, &aot_mem) && ctx.pc == 0x0885A8CCu) goto L_0885A8CC;
    return;
L_0885A8CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885A8F4;
      }
      goto L_0885A8D4;
    }
L_0885A8D4:
    aot_gpr[31] = (0x0885A8DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 180u, 0x088D8C24u>(ctx, &aot_mem) && ctx.pc == 0x0885A8DCu) goto L_0885A8DC;
    return;
L_0885A8DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A8F4;
      }
      goto L_0885A8E4;
    }
L_0885A8E4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A8F0;
      }
      goto L_0885A8EC;
    }
L_0885A8EC:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-2));
    goto L_0885A8F0;
L_0885A8F0:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_0885A8F4;
L_0885A8F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A908:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885A970;
      }
      goto L_0885A930;
    }
L_0885A930:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5228)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0885A948u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0885A948u) goto L_0885A948;
    return;
L_0885A948:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A958;
      }
      goto L_0885A950;
    }
L_0885A950:
    aot_gpr[31] = (0x0885A958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 47u, 0x08935484u>(ctx, &aot_mem) && ctx.pc == 0x0885A958u) goto L_0885A958;
    return;
L_0885A958:
    aot_gpr[31] = (0x0885A960u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 84u, 0x088DB74Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A960u) goto L_0885A960;
    return;
L_0885A960:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885A970;
      }
      goto L_0885A968;
    }
L_0885A968:
    aot_gpr[31] = (0x0885A970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 55u, 0x0893559Cu>(ctx, &aot_mem) && ctx.pc == 0x0885A970u) goto L_0885A970;
    return;
L_0885A970:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885A984:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0885A9A8u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF94u;
    return;
L_0885A9A8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0885A9B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2232)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 154u, 0x088C5AB8u>(ctx, &aot_mem) && ctx.pc == 0x0885A9B4u) goto L_0885A9B4;
    return;
L_0885A9B4:
    aot_gpr[17] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
      if (branch_taken) {
          goto L_0885A9D4;
      }
      goto L_0885A9C0;
    }
L_0885A9C0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x0885A9CCu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 107u, 0x088D6754u>(ctx, &aot_mem) && ctx.pc == 0x0885A9CCu) goto L_0885A9CC;
    return;
L_0885A9CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
      if (branch_taken) {
          goto L_0885A9E4;
      }
      goto L_0885A9D4;
    }
L_0885A9D4:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885A9E0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 107u, 0x088D6754u>(ctx, &aot_mem) && ctx.pc == 0x0885A9E0u) goto L_0885A9E0;
    return;
L_0885A9E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    goto L_0885A9E4;
L_0885A9E4:
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(5232), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0885A9F4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 184u, 0x088D5C80u>(ctx, &aot_mem) && ctx.pc == 0x0885A9F4u) goto L_0885A9F4;
    return;
L_0885A9F4:
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
L_0885AA0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AA78;
      }
      goto L_0885AA28;
    }
L_0885AA28:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x0885AA38u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 62u, 0x088D8428u>(ctx, &aot_mem) && ctx.pc == 0x0885AA38u) goto L_0885AA38;
    return;
L_0885AA38:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5232), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2228)));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(176));
    aot_gpr[31] = (0x0885AA5Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 56u, 0x08816854u>(ctx, &aot_mem) && ctx.pc == 0x0885AA5Cu) goto L_0885AA5C;
    return;
L_0885AA5C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0885AA68u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2232)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 158u, 0x088C5AF8u>(ctx, &aot_mem) && ctx.pc == 0x0885AA68u) goto L_0885AA68;
    return;
L_0885AA68:
    aot_gpr[31] = (0x0885AA70u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF7Cu;
    return;
L_0885AA70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0885AA7C;
      }
      goto L_0885AA78;
    }
L_0885AA78:
    aot_gpr[2] = (0u | 0u);
    goto L_0885AA7C;
L_0885AA7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885AA8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5232), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0885AAA4u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF7Cu;
    return;
L_0885AAA4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0885AAB0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2232)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 158u, 0x088C5AF8u>(ctx, &aot_mem) && ctx.pc == 0x0885AAB0u) goto L_0885AAB0;
    return;
L_0885AAB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885AABC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24192), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885AADC:
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(24204));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885AB0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0885AB28u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_0885AADC;
L_0885AB28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (256u << 16u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885AB58:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24204));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(aot_gpr[5]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(aot_gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885AB7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[12] = (aot_gpr[4] & 255u);
    aot_gpr[3] = (aot_gpr[5] & 255u);
    aot_gpr[11] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    goto L_0885AB9C;
L_0885AB9C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    aot_gpr[6] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x0885ABB0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    goto L_0885AADC;
L_0885ABB0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr[12] != aot_gpr[6];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_0885ABD8;
      }
      goto L_0885ABC0;
    }
L_0885ABC0:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885ABD8;
      }
      goto L_0885ABC8;
    }
L_0885ABC8:
    { const bool branch_taken = aot_gpr[11] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885ABD8;
      }
      goto L_0885ABD0;
    }
L_0885ABD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885ABFC;
      }
      goto L_0885ABD8;
    }
L_0885ABD8:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 25 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885AB9C;
      }
      goto L_0885ABE8;
    }
L_0885ABE8:
    aot_gpr[4] = (aot_gpr[12] | 0u);
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x0885ABF8u);
    aot_gpr[6] = (aot_gpr[11] | 0u);
    goto L_0885AB58;
L_0885ABF8:
    aot_gpr[2] = (0u | 24u);
    goto L_0885ABFC;
L_0885ABFC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885AC08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[4] & 65280u);
    aot_gpr[6] = (255u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[6] = (aot_gpr[4] >> 16u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0885AC3Cu);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0885AB7C;
L_0885AC3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885AC48:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24200), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885AC68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2696));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0885ACB8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885ACB8u) goto L_0885ACB8;
    return;
L_0885ACB8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 512u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0885ACDCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885ACDCu) goto L_0885ACDC;
    return;
L_0885ACDC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 512u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0885AD00u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885AD00u) goto L_0885AD00;
    return;
L_0885AD00:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5104)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 48u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0885AD24u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885AD24u) goto L_0885AD24;
    return;
L_0885AD24:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5236)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 128u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0885AD48u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885AD48u) goto L_0885AD48;
    return;
L_0885AD48:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5240)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 64u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0885AD6Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885AD6Cu) goto L_0885AD6C;
    return;
L_0885AD6C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0885AD90u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885AD90u) goto L_0885AD90;
    return;
L_0885AD90:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5244)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0885ADB4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885ADB4u) goto L_0885ADB4;
    return;
L_0885ADB4:
    aot_gpr[31] = (0x0885ADBCu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 88u, 0x08884A44u>(ctx, &aot_mem) && ctx.pc == 0x0885ADBCu) goto L_0885ADBC;
    return;
L_0885ADBC:
    aot_gpr[31] = (0x0885ADC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 79u, 0x0882BC40u>(ctx, &aot_mem) && ctx.pc == 0x0885ADC4u) goto L_0885ADC4;
    return;
L_0885ADC4:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(5184));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5184), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5200), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5200));
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (48793u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (49280u << 16u);
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(5168));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5168), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (16448u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0885AE54u);
    aot_gpr[6] = (0u | 176u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885AE54u) goto L_0885AE54;
    return;
L_0885AE54:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AE6C;
      }
      goto L_0885AE60;
    }
L_0885AE60:
    aot_gpr[31] = (0x0885AE68u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 48u, 0x088166ECu>(ctx, &aot_mem) && ctx.pc == 0x0885AE68u) goto L_0885AE68;
    return;
L_0885AE68:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    goto L_0885AE6C;
L_0885AE6C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2228), aot_gpr[18]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x0885AE80u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3712));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 100u, 0x08884B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AE80u) goto L_0885AE80;
    return;
L_0885AE80:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0885AEB4;
      }
      goto L_0885AE8C;
    }
L_0885AE8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0885AEACu);
    aot_gpr[6] = (0u | 2208u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885AEACu) goto L_0885AEAC;
    return;
L_0885AEAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0885AEC0;
      }
      goto L_0885AEB4;
    }
L_0885AEB4:
    aot_gpr[31] = (0x0885AEBCu);
    aot_gpr[4] = (0u | 2208u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x0885AEBCu) goto L_0885AEBC;
    return;
L_0885AEBC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_0885AEC0;
L_0885AEC0:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885AF24;
      }
      goto L_0885AECC;
    }
L_0885AECC:
    aot_gpr[31] = (0x0885AED4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 45u, 0x08A4C354u>(ctx, &aot_mem) && ctx.pc == 0x0885AED4u) goto L_0885AED4;
    return;
L_0885AED4:
    aot_gpr[31] = (0x0885AEDCu);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 45u, 0x08A4C354u>(ctx, &aot_mem) && ctx.pc == 0x0885AEDCu) goto L_0885AEDC;
    return;
L_0885AEDC:
    aot_gpr[5] = (2213u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-15532));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (0u | 5u);
    aot_gpr[6] = (0u | 12u);
    aot_gpr[31] = (0x0885AEF8u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x0885AEF8u) goto L_0885AEF8;
    return;
L_0885AEF8:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(84));
    aot_gpr[5] = (0u | 36u);
    aot_gpr[6] = (0u | 12u);
    aot_gpr[31] = (0x0885AF0Cu);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x0885AF0Cu) goto L_0885AF0C;
    return;
L_0885AF0C:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(516));
    aot_gpr[5] = (0u | 36u);
    aot_gpr[6] = (0u | 12u);
    aot_gpr[31] = (0x0885AF20u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x0885AF20u) goto L_0885AF20;
    return;
L_0885AF20:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_0885AF24;
L_0885AF24:
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(2148), aot_gpr[17]);
    aot_gpr[31] = (0x0885AF34u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 145u, 0x088D5A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0885AF34u) goto L_0885AF34;
    return;
L_0885AF34:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2144), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0885AF44u);
    aot_gpr[4] = (0u | 0u);
    goto L_0885A514;
L_0885AF44:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5108), static_cast<std::uint8_t>(0u));
    aot_gpr[17] = (0u | 32768u);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0885AF68u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3748));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 79u, 0x088774DCu>(ctx, &aot_mem) && ctx.pc == 0x0885AF68u) goto L_0885AF68;
    return;
L_0885AF68:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5220), aot_gpr[2]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0885AF88u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3816));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 79u, 0x088774DCu>(ctx, &aot_mem) && ctx.pc == 0x0885AF88u) goto L_0885AF88;
    return;
L_0885AF88:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5224), aot_gpr[2]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0885AFA4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3880));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 113u, 0x08877760u>(ctx, &aot_mem) && ctx.pc == 0x0885AFA4u) goto L_0885AFA4;
    return;
L_0885AFA4:
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(5228), aot_gpr[2]);
    aot_gpr[31] = (0x0885AFB4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 62u, 0x08920528u>(ctx, &aot_mem) && ctx.pc == 0x0885AFB4u) goto L_0885AFB4;
    return;
L_0885AFB4:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (49344u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5228)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[5]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    ctx.pc = 0x0885B000u; return;
}

void recomp_unit_0086(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0086_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_86(Runtime &runtime) {
    runtime.register_generated_unit(86u, 0x0885A000u, 4096u, &recomp_unit_0086, &recomp_unit_0086_entry);
    runtime.register_function(0x0885A004u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A00Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A024u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A034u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A03Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A044u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A04Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A054u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A05Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A064u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A06Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A074u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A07Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A084u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A08Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A094u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A09Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A0A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A0BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A0D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A0E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A0F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A10Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A118u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A128u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A138u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A148u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A158u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A168u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A180u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A198u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A1A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A1B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A1C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A1E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A1F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A218u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A238u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A240u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A248u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A274u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A298u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A2ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A2B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A2C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A2D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A2E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A2F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A304u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A324u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A33Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A344u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A34Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A358u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A368u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A374u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A380u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A3ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A3B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A3BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A3ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A3F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A3FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A404u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A414u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A428u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A430u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A450u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A46Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A474u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A484u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A494u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A49Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A4ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A4B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A4CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A4D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A4F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A4F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A4FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A514u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A538u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A540u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A548u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A550u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A568u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A588u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A594u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A5A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A5ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A5B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A5C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A5D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A5DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A5ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A5F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A5F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A600u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A630u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A63Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A654u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A67Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A688u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A694u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A6A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A6A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A6B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A6CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A6F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A704u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A724u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A730u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A740u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A74Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A754u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A75Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A76Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A774u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A77Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A784u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A790u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A798u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A7ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A7B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A7C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A7CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A7D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A7E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A7F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A808u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A818u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A820u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A830u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A83Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A854u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A864u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A88Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A8A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A8A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A8B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A8BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A8C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A8CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A8D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A8DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A8E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A8ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A8F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A8F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A908u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A930u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A948u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A950u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A958u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A960u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A968u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A970u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A984u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A9A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A9B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A9C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A9CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A9D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A9E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A9E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885A9F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AA0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AA28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AA38u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AA5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AA68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AA70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AA78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AA7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AA8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AAA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AAB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AABCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AADCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AB0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AB28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AB58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AB7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AB9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885ABB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885ABC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885ABC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885ABD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885ABD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885ABE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885ABF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885ABFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AC08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AC3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AC48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AC68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885ACB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885ACDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AD00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AD24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AD48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AD6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AD90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885ADB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885ADBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885ADC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AE54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AE60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AE68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AE6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AE80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AE8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AEACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AEB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AEBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AEC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AECCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AED4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AEDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AEF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AF0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AF20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AF24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AF34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AF44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AF68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AF88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AFA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0885AFB4u, &recomp_unit_0086, "recomp_unit_0086");
}
} // namespace psprecomp
