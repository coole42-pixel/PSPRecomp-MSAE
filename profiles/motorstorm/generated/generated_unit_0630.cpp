#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0630[961] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 10, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35,
    0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0,
    46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 53, 54, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0,
    59, 60, 0, 0, 61, 0, 0, 62, 63, 0, 64, 0, 0, 65, 0, 0, 66, 0, 67, 68, 0, 0, 69, 70, 0, 71, 0, 0, 72, 0, 0, 73,
    0, 0, 74, 0, 0, 75, 76, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 81, 0, 82, 0, 0, 83, 84, 0, 85, 0, 0, 86, 0, 0,
    87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0,
    0, 98, 0, 0, 99, 100, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109,
    0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 123, 124, 0, 0, 0, 125,
    0, 126, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 131, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 135, 0, 136,
    137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142,
    0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 154, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0,
    164, 0, 165, 0, 166, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0,
    178,
};
void recomp_unit_0630_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A7A000u;
        entry_id = (entry_delta < 3844u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0630[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A7A000;
    case 2u: goto L_08A7A00C;
    case 3u: goto L_08A7A054;
    case 4u: goto L_08A7A0FC;
    case 5u: goto L_08A7A108;
    case 6u: goto L_08A7A118;
    case 7u: goto L_08A7A178;
    case 8u: goto L_08A7A270;
    case 9u: goto L_08A7A390;
    case 10u: goto L_08A7A394;
    case 11u: goto L_08A7A3A8;
    case 12u: goto L_08A7A3B4;
    case 13u: goto L_08A7A480;
    case 14u: goto L_08A7A49C;
    case 15u: goto L_08A7A4B8;
    case 16u: goto L_08A7A4C4;
    case 17u: goto L_08A7A4D0;
    case 18u: goto L_08A7A4D4;
    case 19u: goto L_08A7A4F0;
    case 20u: goto L_08A7A51C;
    case 21u: goto L_08A7A52C;
    case 22u: goto L_08A7A540;
    case 23u: goto L_08A7A554;
    case 24u: goto L_08A7A568;
    case 25u: goto L_08A7A570;
    case 26u: goto L_08A7A57C;
    case 27u: goto L_08A7A5C0;
    case 28u: goto L_08A7A600;
    case 29u: goto L_08A7A63C;
    case 30u: goto L_08A7A640;
    case 31u: goto L_08A7A64C;
    case 32u: goto L_08A7A658;
    case 33u: goto L_08A7A664;
    case 34u: goto L_08A7A670;
    case 35u: goto L_08A7A67C;
    case 36u: goto L_08A7A688;
    case 37u: goto L_08A7A694;
    case 38u: goto L_08A7A6A0;
    case 39u: goto L_08A7A6AC;
    case 40u: goto L_08A7A6B8;
    case 41u: goto L_08A7A6C4;
    case 42u: goto L_08A7A6D0;
    case 43u: goto L_08A7A6DC;
    case 44u: goto L_08A7A6E8;
    case 45u: goto L_08A7A6F4;
    case 46u: goto L_08A7A700;
    case 47u: goto L_08A7A70C;
    case 48u: goto L_08A7A718;
    case 49u: goto L_08A7A724;
    case 50u: goto L_08A7A730;
    case 51u: goto L_08A7A73C;
    case 52u: goto L_08A7A748;
    case 53u: goto L_08A7A74C;
    case 54u: goto L_08A7A750;
    case 55u: goto L_08A7A754;
    case 56u: goto L_08A7A760;
    case 57u: goto L_08A7A76C;
    case 58u: goto L_08A7A778;
    case 59u: goto L_08A7A780;
    case 60u: goto L_08A7A784;
    case 61u: goto L_08A7A790;
    case 62u: goto L_08A7A79C;
    case 63u: goto L_08A7A7A0;
    case 64u: goto L_08A7A7A8;
    case 65u: goto L_08A7A7B4;
    case 66u: goto L_08A7A7C0;
    case 67u: goto L_08A7A7C8;
    case 68u: goto L_08A7A7CC;
    case 69u: goto L_08A7A7D8;
    case 70u: goto L_08A7A7DC;
    case 71u: goto L_08A7A7E4;
    case 72u: goto L_08A7A7F0;
    case 73u: goto L_08A7A7FC;
    case 74u: goto L_08A7A808;
    case 75u: goto L_08A7A814;
    case 76u: goto L_08A7A818;
    case 77u: goto L_08A7A820;
    case 78u: goto L_08A7A82C;
    case 79u: goto L_08A7A838;
    case 80u: goto L_08A7A844;
    case 81u: goto L_08A7A848;
    case 82u: goto L_08A7A850;
    case 83u: goto L_08A7A85C;
    case 84u: goto L_08A7A860;
    case 85u: goto L_08A7A868;
    case 86u: goto L_08A7A874;
    case 87u: goto L_08A7A880;
    case 88u: goto L_08A7A88C;
    case 89u: goto L_08A7A898;
    case 90u: goto L_08A7A8A4;
    case 91u: goto L_08A7A8B0;
    case 92u: goto L_08A7A8BC;
    case 93u: goto L_08A7A8C8;
    case 94u: goto L_08A7A8D4;
    case 95u: goto L_08A7A8E0;
    case 96u: goto L_08A7A8EC;
    case 97u: goto L_08A7A8F8;
    case 98u: goto L_08A7A904;
    case 99u: goto L_08A7A910;
    case 100u: goto L_08A7A914;
    case 101u: goto L_08A7A91C;
    case 102u: goto L_08A7A928;
    case 103u: goto L_08A7A934;
    case 104u: goto L_08A7A940;
    case 105u: goto L_08A7A94C;
    case 106u: goto L_08A7A958;
    case 107u: goto L_08A7A964;
    case 108u: goto L_08A7A970;
    case 109u: goto L_08A7A97C;
    case 110u: goto L_08A7A988;
    case 111u: goto L_08A7A994;
    case 112u: goto L_08A7A9A0;
    case 113u: goto L_08A7A9AC;
    case 114u: goto L_08A7A9B8;
    case 115u: goto L_08A7A9C0;
    case 116u: goto L_08A7A9DC;
    case 117u: goto L_08A7A9E4;
    case 118u: goto L_08A7A9F0;
    case 119u: goto L_08A7AA18;
    case 120u: goto L_08A7AA44;
    case 121u: goto L_08A7AA5C;
    case 122u: goto L_08A7AA64;
    case 123u: goto L_08A7AA68;
    case 124u: goto L_08A7AA6C;
    case 125u: goto L_08A7AA7C;
    case 126u: goto L_08A7AA84;
    case 127u: goto L_08A7AA8C;
    case 128u: goto L_08A7AA98;
    case 129u: goto L_08A7AAA4;
    case 130u: goto L_08A7AAC4;
    case 131u: goto L_08A7AAC8;
    case 132u: goto L_08A7AAD4;
    case 133u: goto L_08A7AAE4;
    case 134u: goto L_08A7AAEC;
    case 135u: goto L_08A7AAF4;
    case 136u: goto L_08A7AAFC;
    case 137u: goto L_08A7AB00;
    case 138u: goto L_08A7AB18;
    case 139u: goto L_08A7AB3C;
    case 140u: goto L_08A7AB50;
    case 141u: goto L_08A7AB64;
    case 142u: goto L_08A7AB7C;
    case 143u: goto L_08A7AB88;
    case 144u: goto L_08A7AB98;
    case 145u: goto L_08A7ABA4;
    case 146u: goto L_08A7ABE8;
    case 147u: goto L_08A7AC08;
    case 148u: goto L_08A7AC30;
    case 149u: goto L_08A7AC48;
    case 150u: goto L_08A7AC50;
    case 151u: goto L_08A7AC68;
    case 152u: goto L_08A7AC70;
    case 153u: goto L_08A7AC80;
    case 154u: goto L_08A7AC9C;
    case 155u: goto L_08A7ACA0;
    case 156u: goto L_08A7AD5C;
    case 157u: goto L_08A7AD64;
    case 158u: goto L_08A7AD70;
    case 159u: goto L_08A7AD84;
    case 160u: goto L_08A7ADC4;
    case 161u: goto L_08A7ADD4;
    case 162u: goto L_08A7ADE4;
    case 163u: goto L_08A7ADF0;
    case 164u: goto L_08A7AE00;
    case 165u: goto L_08A7AE08;
    case 166u: goto L_08A7AE10;
    case 167u: goto L_08A7AE18;
    case 168u: goto L_08A7AE24;
    case 169u: goto L_08A7AE30;
    case 170u: goto L_08A7AE44;
    case 171u: goto L_08A7AE4C;
    case 172u: goto L_08A7AE60;
    case 173u: goto L_08A7AE7C;
    case 174u: goto L_08A7AEA0;
    case 175u: goto L_08A7AEA4;
    case 176u: goto L_08A7AEC4;
    case 177u: goto L_08A7AEE4;
    case 178u: goto L_08A7AF00;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A7A000:
    // nop
    // nop
    // nop
    goto L_08A7A00C;
L_08A7A00C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7A054;
L_08A7A054:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7A0FC;
L_08A7A0FC:
    // nop
    // nop
    // nop
    goto L_08A7A108;
L_08A7A108:
    // nop
    // nop
    // nop
    // nop
    goto L_08A7A118;
L_08A7A118:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7A178;
L_08A7A178:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7A270;
L_08A7A270:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7A390;
L_08A7A390:
    // nop
    goto L_08A7A394;
L_08A7A394:
    rt.unsupported(0x08A7A394u, 0x00000270u, "special? not lowered yet"); return;
L_08A7A3A8:
    rt.unsupported(0x08A7A3A8u, 0x01010DF7u, "special? not lowered yet"); return;
L_08A7A3B4:
    rt.unsupported(0x08A7A3B8u, 0x00000009u, "control flow in delay slot"); return;
L_08A7A480:
    // nop
    // nop
    // nop
    rt.unsupported(0x08A7A48Cu, 0x00000045u, "special? not lowered yet"); return;
L_08A7A49C:
    // nop
    // nop
    rt.unsupported(0x08A7A4A8u, 0x00000008u, "control flow in delay slot"); return;
L_08A7A4B8:
    // nop
    rt.unsupported(0x08A7A4C0u, 0x00000008u, "control flow in delay slot"); return;
L_08A7A4C4:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-31190))))));
    if (static_cast<std::int32_t>(0u) < 0) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0633_entry, 633u, 79u, 0x08A7DCA8u>(ctx, &aot_mem); return;
    }
    goto L_08A7A4D0;
L_08A7A4D0:
    // nop
    goto L_08A7A4D4;
L_08A7A4D4:
    if (0u == 0u) (void)(0u);
    jump_target = 0u;
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-31190))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A4F0:
    rt.unsupported(0x08A7A4F0u, 0x00000005u, "special? not lowered yet"); return;
L_08A7A51C:
    // nop
    // nop
    // nop
    // nop
    goto L_08A7A52C;
L_08A7A52C:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7A540;
L_08A7A540:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7A554;
L_08A7A554:
    // nop
    // nop
    rt.unsupported(0x08A7A55Cu, 0x67452301u, "vfpu1 not lowered yet"); return;
L_08A7A568:
    { const bool branch_taken = aot_gpr[1] == aot_gpr[18];
    { const std::uint32_t ll_address = aot_gpr[30] + static_cast<std::uint32_t>(-7696);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
      if (branch_taken) {
          ctx.pc = 0x08A8F744u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
      }
      goto L_08A7A570;
    }
L_08A7A570:
    // nop
    // nop
    // nop
    goto L_08A7A57C;
L_08A7A57C:
    rt.unsupported(0x08A7A580u, 0x08A7315Cu, "control flow in delay slot"); return;
L_08A7A5C0:
    (void)(0u << 2u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7A600;
L_08A7A600:
    (void)(0u << 2u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7A63C;
L_08A7A63C:
    // nop
    goto L_08A7A640;
L_08A7A640:
    rt.unsupported(0x08A7A644u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A64C:
    rt.unsupported(0x08A7A650u, 0x08A7A670u, "control flow in delay slot"); return;
L_08A7A658:
    rt.unsupported(0x08A7A65Cu, 0x08A7A688u, "control flow in delay slot"); return;
L_08A7A664:
    rt.unsupported(0x08A7A668u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A670:
    rt.unsupported(0x08A7A674u, 0x08A7A6A0u, "control flow in delay slot"); return;
L_08A7A67C:
    rt.unsupported(0x08A7A680u, 0x08A7A6B8u, "control flow in delay slot"); return;
L_08A7A688:
    rt.unsupported(0x08A7A68Cu, 0x08A7A6D0u, "control flow in delay slot"); return;
L_08A7A694:
    rt.unsupported(0x08A7A698u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A6A0:
    rt.unsupported(0x08A7A6A4u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A6AC:
    rt.unsupported(0x08A7A6B0u, 0x08A7A6E8u, "control flow in delay slot"); return;
L_08A7A6B8:
    rt.unsupported(0x08A7A6BCu, 0x08A7A700u, "control flow in delay slot"); return;
L_08A7A6C4:
    rt.unsupported(0x08A7A6C8u, 0x08A7A718u, "control flow in delay slot"); return;
L_08A7A6D0:
    rt.unsupported(0x08A7A6D4u, 0x08A7A6D0u, "control flow in delay slot"); return;
L_08A7A6DC:
    rt.unsupported(0x08A7A6E0u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A6E8:
    rt.unsupported(0x08A7A6ECu, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A6F4:
    rt.unsupported(0x08A7A6F8u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A700:
    rt.unsupported(0x08A7A704u, 0x08A7A730u, "control flow in delay slot"); return;
L_08A7A70C:
    rt.unsupported(0x08A7A710u, 0x08A7A748u, "control flow in delay slot"); return;
L_08A7A718:
    rt.unsupported(0x08A7A71Cu, 0x08A7A760u, "control flow in delay slot"); return;
L_08A7A724:
    rt.unsupported(0x08A7A728u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A730:
    rt.unsupported(0x08A7A734u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A73C:
    rt.unsupported(0x08A7A740u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A748:
    rt.unsupported(0x08A7A74Cu, 0x08A7A778u, "control flow in delay slot"); return;
L_08A7A74C:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029E9DE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7A750:
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08A7A754;
L_08A7A754:
    rt.unsupported(0x08A7A758u, 0x08A7A790u, "control flow in delay slot"); return;
L_08A7A760:
    rt.unsupported(0x08A7A764u, 0x08A7A7A8u, "control flow in delay slot"); return;
L_08A7A76C:
    rt.unsupported(0x08A7A770u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A778:
    rt.unsupported(0x08A7A77Cu, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A780:
    (void)(static_cast<std::uint32_t>(std::countl_zero(0u)));
    goto L_08A7A784;
L_08A7A784:
    rt.unsupported(0x08A7A788u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A790:
    rt.unsupported(0x08A7A794u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A79C:
    rt.unsupported(0x08A7A7A0u, 0x08A7A7C0u, "control flow in delay slot"); return;
L_08A7A7A0:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029E9F00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7A7A8:
    rt.unsupported(0x08A7A7ACu, 0x08A7A7D8u, "control flow in delay slot"); return;
L_08A7A7B4:
    rt.unsupported(0x08A7A7B8u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A7C0:
    rt.unsupported(0x08A7A7C4u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A7C8:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator + product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A7A7CC;
L_08A7A7CC:
    rt.unsupported(0x08A7A7D0u, 0x08A7A7F0u, "control flow in delay slot"); return;
L_08A7A7D8:
    rt.unsupported(0x08A7A7DCu, 0x08A7A808u, "control flow in delay slot"); return;
L_08A7A7DC:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029EA020u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7A7E4:
    rt.unsupported(0x08A7A7E8u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A7F0:
    rt.unsupported(0x08A7A7F4u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A7FC:
    rt.unsupported(0x08A7A800u, 0x08A7A820u, "control flow in delay slot"); return;
L_08A7A808:
    rt.unsupported(0x08A7A80Cu, 0x08A7A838u, "control flow in delay slot"); return;
L_08A7A814:
    rt.unsupported(0x08A7A818u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A818:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A7A81Cu, 0x00000020u); return; } }
    ctx.pc = 0x029E9960u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7A820:
    rt.unsupported(0x08A7A824u, 0x08A7A850u, "control flow in delay slot"); return;
L_08A7A82C:
    rt.unsupported(0x08A7A830u, 0x08A7A868u, "control flow in delay slot"); return;
L_08A7A838:
    rt.unsupported(0x08A7A83Cu, 0x08A7A880u, "control flow in delay slot"); return;
L_08A7A844:
    rt.unsupported(0x08A7A848u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A848:
    (void)(0u ^ 0u);
    ctx.pc = 0x029E9960u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7A850:
    rt.unsupported(0x08A7A854u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A85C:
    rt.unsupported(0x08A7A860u, 0x08A7A898u, "control flow in delay slot"); return;
L_08A7A860:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x029EA260u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7A868:
    rt.unsupported(0x08A7A86Cu, 0x08A7A8B0u, "control flow in delay slot"); return;
L_08A7A874:
    rt.unsupported(0x08A7A878u, 0x08A7A8C8u, "control flow in delay slot"); return;
L_08A7A880:
    rt.unsupported(0x08A7A884u, 0x08A7A8E0u, "control flow in delay slot"); return;
L_08A7A88C:
    rt.unsupported(0x08A7A890u, 0x08A7A8F8u, "control flow in delay slot"); return;
L_08A7A898:
    rt.unsupported(0x08A7A89Cu, 0x08A7A910u, "control flow in delay slot"); return;
L_08A7A8A4:
    rt.unsupported(0x08A7A8A8u, 0x08A7A928u, "control flow in delay slot"); return;
L_08A7A8B0:
    rt.unsupported(0x08A7A8B4u, 0x08A7A940u, "control flow in delay slot"); return;
L_08A7A8BC:
    rt.unsupported(0x08A7A8C0u, 0x08A7A958u, "control flow in delay slot"); return;
L_08A7A8C8:
    rt.unsupported(0x08A7A8CCu, 0x08A7A970u, "control flow in delay slot"); return;
L_08A7A8D4:
    rt.unsupported(0x08A7A8D8u, 0x08A7A988u, "control flow in delay slot"); return;
L_08A7A8E0:
    rt.unsupported(0x08A7A8E4u, 0x08A7A9A0u, "control flow in delay slot"); return;
L_08A7A8EC:
    rt.unsupported(0x08A7A8F0u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A8F8:
    rt.unsupported(0x08A7A8FCu, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A904:
    rt.unsupported(0x08A7A908u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A910:
    rt.unsupported(0x08A7A914u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A914:
    rt.unsupported(0x08A7A918u, 0x00000030u, "special? not lowered yet"); return;
    ctx.pc = 0x029E9960u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7A91C:
    rt.unsupported(0x08A7A920u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A928:
    rt.unsupported(0x08A7A92Cu, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A934:
    rt.unsupported(0x08A7A938u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A940:
    rt.unsupported(0x08A7A944u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A94C:
    rt.unsupported(0x08A7A950u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A958:
    rt.unsupported(0x08A7A95Cu, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A964:
    rt.unsupported(0x08A7A968u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A970:
    rt.unsupported(0x08A7A974u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A97C:
    rt.unsupported(0x08A7A980u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A988:
    rt.unsupported(0x08A7A98Cu, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A994:
    rt.unsupported(0x08A7A998u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A9A0:
    rt.unsupported(0x08A7A9A4u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A9AC:
    rt.unsupported(0x08A7A9B0u, 0x08A7A658u, "control flow in delay slot"); return;
L_08A7A9B8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[11]) <= 0;
    ctx.set_vfpu_scalar_bits_ct<9u>(PSPRECOMP_AOT_LOAD32(aot_gpr[24] + static_cast<std::uint32_t>(-31356)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0636_entry, 636u, 88u, 0x08A80F50u>(ctx, &aot_mem); return;
      }
      goto L_08A7A9C0;
    }
L_08A7A9C0:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(13170))))));
    aot_gpr[18] = (static_cast<std::int32_t>(aot_gpr[21]) < -27547 ? 1u : 0u);
    rt.unsupported(0x08A7A9C8u, 0x40611965u, "unknown not lowered yet"); return;
L_08A7A9DC:
    rt.unsupported(0x08A7A9E0u, 0x19488C8Cu, "control flow in delay slot"); return;
L_08A7A9E4:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(22881)));
    rt.unsupported(0x08A7A9ECu, 0x181C2C26u, "control flow in delay slot"); return;
L_08A7A9F0:
    rt.unsupported(0x08A7A9F0u, 0x614AC099u, "vfpu0 not lowered yet"); return;
L_08A7AA18:
    (void)(aot_gpr[7] & 29387u);
    ctx.pc = 0x06010658u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7AA44:
    aot_gpr[2] = (aot_gpr[22] & 12837u);
    aot_gpr[9] = (0u < static_cast<std::uint32_t>(11016) ? 1u : 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(17927))))));
    aot_gpr[21] = (aot_gpr[12] + static_cast<std::uint32_t>(-27119));
    if (aot_gpr[3] == aot_gpr[5]) {
    rt.unsupported(0x08A7AA58u, 0x72CB370Au, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0599_entry, 599u, 235u, 0x08A5BF04u>(ctx, &aot_mem); return;
    }
    goto L_08A7AA5C;
L_08A7AA5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(25696)));
    rt.unsupported(0x08A7AA60u, 0x7F4B9611u, "special3? not lowered yet"); return;
L_08A7AA64:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[11]) <= 0;
    ctx.set_vfpu_scalar_bits_ct<9u>(PSPRECOMP_AOT_LOAD32(aot_gpr[24] + static_cast<std::uint32_t>(-31356)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0636_entry, 636u, 90u, 0x08A80FFCu>(ctx, &aot_mem); return;
      }
      goto L_08A7AA6C;
    }
L_08A7AA68:
    ctx.set_vfpu_scalar_bits_ct<9u>(PSPRECOMP_AOT_LOAD32(aot_gpr[24] + static_cast<std::uint32_t>(-31356)));
    goto L_08A7AA6C;
L_08A7AA6C:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(13170))))));
    ctx.set_vfpu_scalar_bits_ct<43u>(PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(10560)));
    rt.unsupported(0x08A7AA78u, 0x52372CD9u, "control flow in delay slot"); return;
L_08A7AA7C:
    rt.unsupported(0x08A7AA7Cu, 0x2384C026u, "unknown not lowered yet"); return;
L_08A7AA84:
    aot_gpr[31] = (0x08A7AA8Cu);
    { const std::uint32_t ll_address = aot_gpr[4] + static_cast<std::uint32_t>(17426);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
    ctx.pc = 0x04A61C28u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7AA8Cu) goto L_08A7AA8C;
    return;
L_08A7AA8C:
    ctx.execute_vfpu_vscl_ct<42u, 20u, 65u, 4u>();
    { const bool branch_taken = static_cast<std::int32_t>(0u) > 0;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-9160)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 47u, 0x08A8371Cu>(ctx, &aot_mem); return;
      }
      goto L_08A7AA98;
    }
L_08A7AA98:
    rt.unsupported(0x08A7AA98u, 0x6E59B2B2u, "vfpu3 not lowered yet"); return;
L_08A7AAA4:
    aot_gpr[10] = (aot_gpr[10] & 37194u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(17196), 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[25] + static_cast<std::uint32_t>(-31604))))));
    { const std::uint32_t ll_address = aot_gpr[17] + static_cast<std::uint32_t>(7336);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
    aot_gpr[29] = (rt.memory().aot_load_word_left(0u + static_cast<std::uint32_t>(-30350), aot_gpr[29]));
    rt.unsupported(0x08A7AAB8u, 0x6132CD91u, "vfpu0 not lowered yet"); return;
L_08A7AAC4:
    rt.unsupported(0x08A7AAC4u, 0x4E446466u, "unknown not lowered yet"); return;
L_08A7AAC8:
    PSPRECOMP_AOT_STORE16(aot_gpr[12] + static_cast<std::uint32_t>(-29864), static_cast<std::uint16_t>(aot_gpr[21]));
    if (aot_gpr[11] != 0u) {
    rt.unsupported(0x08A7AAD0u, 0x6586F456u, "vfpu1 not lowered yet"); return;
        ctx.pc = 0x08A92B00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A7AAD4;
L_08A7AAD4:
    rt.unsupported(0x08A7AAD4u, 0xD750C165u, "vfpu not lowered yet"); return;
L_08A7AAE4:
    ctx.set_vfpu_scalar_bits_ct<66u>(PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(25284)));
    (void)(PSPRECOMP_AOT_LOAD16(aot_gpr[24] + static_cast<std::uint32_t>(-6703)));
    goto L_08A7AAEC;
L_08A7AAEC:
    if (static_cast<std::int32_t>(aot_gpr[3]) <= 0) {
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < -32104 ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0599_entry, 599u, 203u, 0x08A5BC88u>(ctx, &aot_mem); return;
    }
    goto L_08A7AAF4;
L_08A7AAF4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) <= 0;
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(-26831), aot_gpr[26]);
      if (branch_taken) {
          ctx.pc = 0x08A946B8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
      }
      goto L_08A7AAFC;
    }
L_08A7AAFC:
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-13734)));
    goto L_08A7AB00;
L_08A7AB00:
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-29943))))));
    rt.unsupported(0x08A7AB04u, 0x7AB0965Bu, "unknown not lowered yet"); return;
L_08A7AB18:
    rt.unsupported(0x08A7AB1Cu, 0xB6AB2CC7u, "unknown not lowered yet"); return;
    ctx.pc = 0x02E15634u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7AB3C:
    rt.unsupported(0x08A7AB3Cu, 0xCD959B28u, "unknown not lowered yet"); return;
L_08A7AB50:
    aot_gpr[18] = (rt.memory().aot_load_word_left(aot_gpr[10] + static_cast<std::uint32_t>(-23278), aot_gpr[18]));
    rt.memory().aot_store_word_left(aot_gpr[13] + static_cast<std::uint32_t>(18770), aot_gpr[12]);
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(29196), static_cast<std::uint16_t>(aot_gpr[16]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[25]) <= 0;
    aot_gpr[21] = (6038u << 16u);
      if (branch_taken) {
          ctx.pc = 0x08A93164u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
      }
      goto L_08A7AB64;
    }
L_08A7AB64:
    rt.unsupported(0x08A7AB64u, 0x41197460u, "unknown not lowered yet"); return;
L_08A7AB7C:
    rt.unsupported(0x08A7AB7Cu, 0x4B602530u, "cop2/vfpu not lowered yet"); return;
L_08A7AB88:
    rt.unsupported(0x08A7AB88u, 0x020579B2u, "special? not lowered yet"); return;
L_08A7AB98:
    aot_gpr[27] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(11052)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) > 0;
    rt.unsupported(0x08A7ABA0u, 0x61194109u, "vfpu0 not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0611_entry, 611u, 73u, 0x08A67530u>(ctx, &aot_mem); return;
      }
      goto L_08A7ABA4;
    }
L_08A7ABA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-5484), aot_gpr[12]);
    rt.unsupported(0x08A7ABACu, 0x5654834Cu, "control flow in delay slot"); return;
L_08A7ABE8:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[21]) < -19048 ? 1u : 0u);
    rt.unsupported(0x08A7ABECu, 0x419635D5u, "unknown not lowered yet"); return;
L_08A7AC08:
    rt.unsupported(0x08A7AC08u, 0x6A9702A0u, "unknown not lowered yet"); return;
L_08A7AC30:
    aot_gpr[17] = (3112u << 16u);
    rt.unsupported(0x08A7AC34u, 0x4B2894B9u, "cop2/vfpu not lowered yet"); return;
L_08A7AC48:
    if (static_cast<std::int32_t>(aot_gpr[9]) <= 0) {
    rt.unsupported(0x08A7AC4Cu, 0x62CDC239u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0608_entry, 608u, 2u, 0x08A6409Cu>(ctx, &aot_mem); return;
    }
    goto L_08A7AC50;
L_08A7AC50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(16806)));
    rt.unsupported(0x08A7AC54u, 0xB450CB35u, "unknown not lowered yet"); return;
L_08A7AC68:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) > 0;
    rt.unsupported(0x08A7AC6Cu, 0xB4760C65u, "unknown not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0604_entry, 604u, 28u, 0x08A601ACu>(ctx, &aot_mem); return;
      }
      goto L_08A7AC70;
    }
L_08A7AC70:
    aot_gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-29483))))));
    aot_gpr[25] = (aot_gpr[16] + static_cast<std::uint32_t>(18019));
    rt.unsupported(0x08A7AC78u, 0x4326A35Cu, "unknown not lowered yet"); return;
L_08A7AC80:
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(-21200);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(-27702)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-5467)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[7]) < -31204 ? 1u : 0u);
    { const std::uint32_t ll_address = aot_gpr[21] + static_cast<std::uint32_t>(-6928);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
    rt.unsupported(0x08A7AC94u, 0x7B9191B4u, "unknown not lowered yet"); return;
L_08A7AC9C:
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(25947))))));
    goto L_08A7ACA0;
L_08A7ACA0:
    rt.memory().aot_store_word_left(aot_gpr[18] + static_cast<std::uint32_t>(-22948), aot_gpr[20]);
    rt.unsupported(0x08A7ACA4u, 0x48D564CCu, "cop2/vfpu not lowered yet"); return;
L_08A7AD5C:
    if (aot_gpr[6] != aot_gpr[3]) {
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[7]) < -8869 ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 29u, 0x08A8342Cu>(ctx, &aot_mem); return;
    }
    goto L_08A7AD64;
L_08A7AD64:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(18707)));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[6];
    rt.unsupported(0x08A7AD6Cu, 0x065488C3u, "regimm? not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0634_entry, 634u, 21u, 0x08A7E2C0u>(ctx, &aot_mem); return;
      }
      goto L_08A7AD70;
    }
L_08A7AD70:
    rt.unsupported(0x08A7AD70u, 0x4CAA46A4u, "unknown not lowered yet"); return;
L_08A7AD84:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-19759), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[27] + static_cast<std::uint32_t>(2073))))));
    rt.unsupported(0x08A7AD8Cu, 0x736E0151u, "unknown not lowered yet"); return;
L_08A7ADC4:
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-6446), aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(14764)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[14] = (static_cast<std::int32_t>(aot_gpr[21]) < -29096 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0600_entry, 600u, 72u, 0x08A5C630u>(ctx, &aot_mem); return;
      }
      goto L_08A7ADD4;
    }
L_08A7ADD4:
    aot_gpr[17] = (aot_gpr[10] ^ 390u);
    ctx.set_vfpu_scalar_bits_ct<42u>(PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(12500)));
    rt.unsupported(0x08A7ADE0u, 0x19AA91E8u, "control flow in delay slot"); return;
L_08A7ADE4:
    aot_gpr[21] = (aot_gpr[10] | 10741u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(-29654), aot_gpr[22]);
      if (branch_taken) {
          ctx.pc = 0x08A8F0B4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
      }
      goto L_08A7ADF0;
    }
L_08A7ADF0:
    aot_gpr[15] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(21676), aot_gpr[15]));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(-27259)));
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    rt.memory().aot_store_word_left(aot_gpr[30] + static_cast<std::uint32_t>(-31421), aot_gpr[21]);
        (void)rt.invoke_chained_direct<&recomp_unit_0598_entry, 598u, 351u, 0x08A5AF40u>(ctx, &aot_mem); return;
    }
    goto L_08A7AE00;
L_08A7AE00:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[21]) <= 0;
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(-4040);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
      if (branch_taken) {
          ctx.pc = 0x08A93C6Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
      }
      goto L_08A7AE08;
    }
L_08A7AE08:
    rt.unsupported(0x08A7AE08u, 0xCD5AAEACu, "unknown not lowered yet"); return;
L_08A7AE10:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[30]) <= 0;
    rt.unsupported(0x08A7AE14u, 0xB5CA7766u, "unknown not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0636_entry, 636u, 17u, 0x08A80328u>(ctx, &aot_mem); return;
      }
      goto L_08A7AE18;
    }
L_08A7AE18:
    aot_gpr[11] = (aot_gpr[13] & 28004u);
    rt.unsupported(0x08A7AE20u, 0x19D433B1u, "control flow in delay slot"); return;
L_08A7AE24:
    ctx.set_vfpu_scalar_bits_ct<74u>(PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(11352)));
    { const std::uint32_t vfpu_address = aot_gpr[27] + static_cast<std::uint32_t>(22432);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-7909)));
    goto L_08A7AE30;
L_08A7AE30:
    rt.unsupported(0x08A7AE30u, 0x404120E5u, "unknown not lowered yet"); return;
L_08A7AE44:
    ctx.set_vfpu_scalar_bits_ct<57u>(PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21312)));
    rt.unsupported(0x08A7AE48u, 0x7F25252Au, "special3? not lowered yet"); return;
L_08A7AE4C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[27] + static_cast<std::uint32_t>(17185))))));
    rt.unsupported(0x08A7AE54u, 0x08A73254u, "control flow in delay slot"); return;
L_08A7AE60:
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u & 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08A7AE7C;
L_08A7AE7C:
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    jump_target = 0u;
    aot_gpr[31] = (0x08A7AEA4u);
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7AEA4u) goto L_08A7AEA4;
    return;
L_08A7AEA0:
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08A7AEA4;
L_08A7AEA4:
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u & 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u & 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08A7AEC4;
L_08A7AEC4:
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08A7AEE4;
L_08A7AEE4:
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    goto L_08A7AF00;
L_08A7AF00:
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u & 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    ctx.pc = 0x08A7B000u; return;
}

void recomp_unit_0630(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0630_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_630(Runtime &runtime) {
    runtime.register_generated_unit(630u, 0x08A7A000u, 4096u, &recomp_unit_0630, &recomp_unit_0630_entry);
    runtime.register_function(0x08A7A000u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A00Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A054u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A0FCu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A108u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A118u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A178u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A270u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A390u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A394u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A3A8u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A3B4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A480u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A49Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A4B8u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A4C4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A4D0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A4D4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A4F0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A51Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A52Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A540u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A554u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A568u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A570u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A57Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A5C0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A600u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A63Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A640u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A64Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A658u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A664u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A670u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A67Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A688u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A694u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A6A0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A6ACu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A6B8u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A6C4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A6D0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A6DCu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A6E8u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A6F4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A700u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A70Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A718u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A724u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A730u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A73Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A748u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A74Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A750u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A754u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A760u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A76Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A778u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A780u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A784u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A790u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A79Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A7A0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A7A8u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A7B4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A7C0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A7C8u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A7CCu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A7D8u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A7DCu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A7E4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A7F0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A7FCu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A808u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A814u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A818u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A820u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A82Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A838u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A844u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A848u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A850u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A85Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A860u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A868u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A874u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A880u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A88Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A898u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A8A4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A8B0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A8BCu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A8C8u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A8D4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A8E0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A8ECu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A8F8u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A904u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A910u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A914u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A91Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A928u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A934u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A940u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A94Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A958u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A964u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A970u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A97Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A988u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A994u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A9A0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A9ACu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A9B8u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A9C0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A9DCu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A9E4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7A9F0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AA18u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AA44u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AA5Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AA64u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AA68u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AA6Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AA7Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AA84u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AA8Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AA98u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AAA4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AAC4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AAC8u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AAD4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AAE4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AAECu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AAF4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AAFCu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AB00u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AB18u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AB3Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AB50u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AB64u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AB7Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AB88u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AB98u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7ABA4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7ABE8u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AC08u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AC30u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AC48u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AC50u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AC68u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AC70u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AC80u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AC9Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7ACA0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AD5Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AD64u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AD70u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AD84u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7ADC4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7ADD4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7ADE4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7ADF0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AE00u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AE08u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AE10u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AE18u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AE24u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AE30u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AE44u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AE4Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AE60u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AE7Cu, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AEA0u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AEA4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AEC4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AEE4u, &recomp_unit_0630, "recomp_unit_0630");
    runtime.register_function(0x08A7AF00u, &recomp_unit_0630, "recomp_unit_0630");
}
} // namespace psprecomp
