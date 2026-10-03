#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0614[949] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 10, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0,
    16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 32, 0, 0, 33, 0, 34, 35, 0, 36, 37, 0, 38, 39, 0, 0, 40, 0, 0, 41,
    0, 42, 0, 0, 43, 0, 0, 44, 0, 45, 46, 0, 47, 0, 48, 0, 49, 50, 0, 0, 51, 0, 0, 52, 53, 0, 54, 0, 0, 55, 0, 56,
    0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 0, 69,
    0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86,
    0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95,
    0, 0, 0, 0, 96, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 104, 0, 0, 105, 106, 0, 0, 107,
    108, 0, 0, 0, 109, 0, 0, 0, 0, 110, 111, 0, 0, 112, 0, 113, 0, 0, 114, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 118, 0, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 138, 139, 140, 0, 0, 141, 0, 0, 0, 142, 0,
    143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0,
    168, 0, 0, 169, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 177, 0, 0, 178, 0,
    0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186,
    0, 0, 187, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191,
};
void recomp_unit_0614_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A6A128u;
        entry_id = (entry_delta < 3796u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0614[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A6A128;
    case 2u: goto L_08A6A138;
    case 3u: goto L_08A6A154;
    case 4u: goto L_08A6A170;
    case 5u: goto L_08A6A1A0;
    case 6u: goto L_08A6A1B4;
    case 7u: goto L_08A6A1C0;
    case 8u: goto L_08A6A1CC;
    case 9u: goto L_08A6A1D8;
    case 10u: goto L_08A6A1DC;
    case 11u: goto L_08A6A1E0;
    case 12u: goto L_08A6A1E8;
    case 13u: goto L_08A6A210;
    case 14u: goto L_08A6A218;
    case 15u: goto L_08A6A220;
    case 16u: goto L_08A6A228;
    case 17u: goto L_08A6A238;
    case 18u: goto L_08A6A244;
    case 19u: goto L_08A6A250;
    case 20u: goto L_08A6A25C;
    case 21u: goto L_08A6A2C8;
    case 22u: goto L_08A6A2F8;
    case 23u: goto L_08A6A31C;
    case 24u: goto L_08A6A324;
    case 25u: goto L_08A6A370;
    case 26u: goto L_08A6A428;
    case 27u: goto L_08A6A488;
    case 28u: goto L_08A6A494;
    case 29u: goto L_08A6A4A0;
    case 30u: goto L_08A6A4C8;
    case 31u: goto L_08A6A4D8;
    case 32u: goto L_08A6A4DC;
    case 33u: goto L_08A6A4E8;
    case 34u: goto L_08A6A4F0;
    case 35u: goto L_08A6A4F4;
    case 36u: goto L_08A6A4FC;
    case 37u: goto L_08A6A500;
    case 38u: goto L_08A6A508;
    case 39u: goto L_08A6A50C;
    case 40u: goto L_08A6A518;
    case 41u: goto L_08A6A524;
    case 42u: goto L_08A6A52C;
    case 43u: goto L_08A6A538;
    case 44u: goto L_08A6A544;
    case 45u: goto L_08A6A54C;
    case 46u: goto L_08A6A550;
    case 47u: goto L_08A6A558;
    case 48u: goto L_08A6A560;
    case 49u: goto L_08A6A568;
    case 50u: goto L_08A6A56C;
    case 51u: goto L_08A6A578;
    case 52u: goto L_08A6A584;
    case 53u: goto L_08A6A588;
    case 54u: goto L_08A6A590;
    case 55u: goto L_08A6A59C;
    case 56u: goto L_08A6A5A4;
    case 57u: goto L_08A6A5B0;
    case 58u: goto L_08A6A5C0;
    case 59u: goto L_08A6A5EC;
    case 60u: goto L_08A6A5F4;
    case 61u: goto L_08A6A600;
    case 62u: goto L_08A6A60C;
    case 63u: goto L_08A6A638;
    case 64u: goto L_08A6A65C;
    case 65u: goto L_08A6A680;
    case 66u: goto L_08A6A688;
    case 67u: goto L_08A6A690;
    case 68u: goto L_08A6A698;
    case 69u: goto L_08A6A6A4;
    case 70u: goto L_08A6A6B4;
    case 71u: goto L_08A6A6C4;
    case 72u: goto L_08A6A6D8;
    case 73u: goto L_08A6A6E8;
    case 74u: goto L_08A6A6F4;
    case 75u: goto L_08A6A708;
    case 76u: goto L_08A6A724;
    case 77u: goto L_08A6A734;
    case 78u: goto L_08A6A73C;
    case 79u: goto L_08A6A744;
    case 80u: goto L_08A6A75C;
    case 81u: goto L_08A6A768;
    case 82u: goto L_08A6A774;
    case 83u: goto L_08A6A780;
    case 84u: goto L_08A6A78C;
    case 85u: goto L_08A6A798;
    case 86u: goto L_08A6A7A4;
    case 87u: goto L_08A6A7B4;
    case 88u: goto L_08A6A7C4;
    case 89u: goto L_08A6A7D4;
    case 90u: goto L_08A6A7E0;
    case 91u: goto L_08A6A7F0;
    case 92u: goto L_08A6A7FC;
    case 93u: goto L_08A6A808;
    case 94u: goto L_08A6A814;
    case 95u: goto L_08A6A824;
    case 96u: goto L_08A6A838;
    case 97u: goto L_08A6A83C;
    case 98u: goto L_08A6A848;
    case 99u: goto L_08A6A85C;
    case 100u: goto L_08A6A864;
    case 101u: goto L_08A6A86C;
    case 102u: goto L_08A6A874;
    case 103u: goto L_08A6A880;
    case 104u: goto L_08A6A888;
    case 105u: goto L_08A6A894;
    case 106u: goto L_08A6A898;
    case 107u: goto L_08A6A8A4;
    case 108u: goto L_08A6A8A8;
    case 109u: goto L_08A6A8B8;
    case 110u: goto L_08A6A8CC;
    case 111u: goto L_08A6A8D0;
    case 112u: goto L_08A6A8DC;
    case 113u: goto L_08A6A8E4;
    case 114u: goto L_08A6A8F0;
    case 115u: goto L_08A6A8F4;
    case 116u: goto L_08A6A98C;
    case 117u: goto L_08A6A9B4;
    case 118u: goto L_08A6A9BC;
    case 119u: goto L_08A6A9C4;
    case 120u: goto L_08A6A9C8;
    case 121u: goto L_08A6A9CC;
    case 122u: goto L_08A6A9D0;
    case 123u: goto L_08A6A9D4;
    case 124u: goto L_08A6A9D8;
    case 125u: goto L_08A6A9DC;
    case 126u: goto L_08A6A9E0;
    case 127u: goto L_08A6A9E4;
    case 128u: goto L_08A6A9E8;
    case 129u: goto L_08A6A9EC;
    case 130u: goto L_08A6A9F0;
    case 131u: goto L_08A6A9F4;
    case 132u: goto L_08A6A9F8;
    case 133u: goto L_08A6A9FC;
    case 134u: goto L_08A6AA00;
    case 135u: goto L_08A6AB00;
    case 136u: goto L_08A6AB68;
    case 137u: goto L_08A6AB70;
    case 138u: goto L_08A6AB7C;
    case 139u: goto L_08A6AB80;
    case 140u: goto L_08A6AB84;
    case 141u: goto L_08A6AB90;
    case 142u: goto L_08A6ABA0;
    case 143u: goto L_08A6ABA8;
    case 144u: goto L_08A6ABB8;
    case 145u: goto L_08A6ABC0;
    case 146u: goto L_08A6AC40;
    case 147u: goto L_08A6AC48;
    case 148u: goto L_08A6AC50;
    case 149u: goto L_08A6AC5C;
    case 150u: goto L_08A6AC80;
    case 151u: goto L_08A6AC88;
    case 152u: goto L_08A6AC90;
    case 153u: goto L_08A6ACC0;
    case 154u: goto L_08A6ACF8;
    case 155u: goto L_08A6AD18;
    case 156u: goto L_08A6AD44;
    case 157u: goto L_08A6AD70;
    case 158u: goto L_08A6ADB8;
    case 159u: goto L_08A6ADD8;
    case 160u: goto L_08A6ADE4;
    case 161u: goto L_08A6ADF0;
    case 162u: goto L_08A6ADFC;
    case 163u: goto L_08A6AE10;
    case 164u: goto L_08A6AE20;
    case 165u: goto L_08A6AE30;
    case 166u: goto L_08A6AE90;
    case 167u: goto L_08A6AE9C;
    case 168u: goto L_08A6AEA8;
    case 169u: goto L_08A6AEB4;
    case 170u: goto L_08A6AEC0;
    case 171u: goto L_08A6AEC8;
    case 172u: goto L_08A6AED0;
    case 173u: goto L_08A6AEE0;
    case 174u: goto L_08A6AEEC;
    case 175u: goto L_08A6AF00;
    case 176u: goto L_08A6AF10;
    case 177u: goto L_08A6AF14;
    case 178u: goto L_08A6AF20;
    case 179u: goto L_08A6AF30;
    case 180u: goto L_08A6AF40;
    case 181u: goto L_08A6AF50;
    case 182u: goto L_08A6AF60;
    case 183u: goto L_08A6AF6C;
    case 184u: goto L_08A6AF7C;
    case 185u: goto L_08A6AF98;
    case 186u: goto L_08A6AFA4;
    case 187u: goto L_08A6AFB0;
    case 188u: goto L_08A6AFB4;
    case 189u: goto L_08A6AFCC;
    case 190u: goto L_08A6AFE0;
    case 191u: goto L_08A6AFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A6A128:
    rt.unsupported(0x08A6A128u, 0x6873654Du, "unknown not lowered yet"); return;
L_08A6A138:
    rt.unsupported(0x08A6A138u, 0x73694463u, "unknown not lowered yet"); return;
L_08A6A154:
    ctx.execute_vfpu_vscl_ct<77u, 97u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 97u, 1u, 2u>();
    rt.unsupported(0x08A6A15Cu, 0x6873654Du, "unknown not lowered yet"); return;
L_08A6A170:
    rt.unsupported(0x08A6A170u, 0x73694463u, "unknown not lowered yet"); return;
L_08A6A1A0:
    rt.unsupported(0x08A6A1A0u, 0x75646F4Du, "unknown not lowered yet"); return;
L_08A6A1B4:
    rt.unsupported(0x08A6A1B4u, 0x69766F4Du, "unknown not lowered yet"); return;
L_08A6A1C0:
    rt.unsupported(0x08A6A1C0u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08A6A1CC:
    aot_gpr[5] = (aot_gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08A6A1D0u, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = aot_gpr[1];
    aot_gpr[10] = (0x08A6A1DCu);
    rt.unsupported(0x08A6A1D8u, 0x696C6F53u, "unknown not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6A1DCu) goto L_08A6A1DC;
    return;
L_08A6A1D8:
    rt.unsupported(0x08A6A1D8u, 0x696C6F53u, "unknown not lowered yet"); return;
L_08A6A1DC:
    (void)(0u & 0u);
    goto L_08A6A1E0;
L_08A6A1E0:
    rt.unsupported(0x08A6A1E0u, 0x68706C41u, "unknown not lowered yet"); return;
L_08A6A1E8:
    rt.unsupported(0x08A6A1E8u, 0x6E657453u, "vfpu3 not lowered yet"); return;
L_08A6A210:
    ctx.execute_vfpu_vminmax(102u, 97u, 116u, 1u, false);
    rt.unsupported(0x08A6A214u, 0x003A3073u, "special? not lowered yet"); return;
L_08A6A218:
    aot_gpr[16] = (aot_gpr[17] ^ 29549u);
    // nop
    goto L_08A6A220;
L_08A6A220:
    rt.unsupported(0x08A6A220u, 0x74697845u, "unknown not lowered yet"); return;
L_08A6A228:
    rt.unsupported(0x08A6A228u, 0x74737953u, "unknown not lowered yet"); return;
L_08A6A238:
    rt.unsupported(0x08A6A238u, 0x43444D55u, "unknown not lowered yet"); return;
L_08A6A244:
    rt.unsupported(0x08A6A244u, 0x6143534Du, "vfpu0 not lowered yet"); return;
L_08A6A250:
    rt.unsupported(0x08A6A250u, 0x45444D55u, "cop1? not lowered yet"); return;
L_08A6A25C:
    // nop
    rt.unsupported(0x08A6A260u, 0x00787270u, "special? not lowered yet"); return;
L_08A6A2C8:
    rt.unsupported(0x08A6A2C8u, 0x74786554u, "unknown not lowered yet"); return;
L_08A6A2F8:
    // nop
    // nop
    // nop
    // nop
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    rt.unsupported(0x08A6A310u, 0x00000001u, "special? not lowered yet"); return;
L_08A6A31C:
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    goto L_08A6A324;
L_08A6A324:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    rt.unsupported(0x08A6A328u, 0x00000001u, "special? not lowered yet"); return;
L_08A6A370:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(0u << (0u & 31u));
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> (0u & 31u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(0u >> (0u & 31u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    jump_target = 0u;
    (void)(0u >> 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A428:
    rt.unsupported(0x08A6A42Cu, 0x0894EB18u, "control flow in delay slot"); return;
L_08A6A488:
    ctx.execute_vfpu_vscl_ct<102u, 105u, 108u, 1u>();
    aot_gpr[15] = (aot_gpr[25] < static_cast<std::uint32_t>(12090) ? 1u : 0u);
    // nop
    goto L_08A6A494;
L_08A6A494:
    ctx.execute_vfpu_vscl_ct<102u, 105u, 108u, 1u>();
    aot_gpr[15] = (aot_gpr[25] < static_cast<std::uint32_t>(12090) ? 1u : 0u);
    aot_gpr[14] = (0u | 0u);
    goto L_08A6A4A0;
L_08A6A4A0:
    rt.unsupported(0x08A6A4A0u, 0x636F7673u, "vfpu0 not lowered yet"); return;
L_08A6A4C8:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08A6A4CCu, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A6A4D8:
    // nop
    goto L_08A6A4DC;
L_08A6A4DC:
    rt.unsupported(0x08A6A4DCu, 0x4E414843u, "unknown not lowered yet"); return;
L_08A6A4E8:
    if (aot_gpr[10] != aot_gpr[16]) {
    rt.unsupported(0x08A6A4ECu, 0x41545350u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0634_entry, 634u, 14u, 0x08A7E22Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6A4F0;
L_08A6A4F0:
    aot_gpr[10] = (ctx.lo);
    goto L_08A6A4F4;
L_08A6A4F4:
    if (aot_gpr[10] != aot_gpr[16]) {
    rt.unsupported(0x08A6A4F8u, 0x444E4550u, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0634_entry, 634u, 15u, 0x08A7E238u>(ctx, &aot_mem); return;
    }
    goto L_08A6A4FC;
L_08A6A4FC:
    // nop
    goto L_08A6A500;
L_08A6A500:
    rt.unsupported(0x08A6A504u, 0x54554250u, "control flow in delay slot"); return;
L_08A6A508:
    rt.unsupported(0x08A6A508u, 0x004E4F54u, "special? not lowered yet"); return;
L_08A6A50C:
    rt.unsupported(0x08A6A50Cu, 0x43534544u, "unknown not lowered yet"); return;
L_08A6A518:
    rt.unsupported(0x08A6A518u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6A524:
    if (aot_gpr[2] != aot_gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0632_entry, 632u, 172u, 0x08A7CA58u>(ctx, &aot_mem); return;
    }
    goto L_08A6A52C;
L_08A6A52C:
    rt.unsupported(0x08A6A52Cu, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6A538:
    rt.unsupported(0x08A6A538u, 0x41544144u, "unknown not lowered yet"); return;
L_08A6A544:
    rt.unsupported(0x08A6A548u, 0x53494C5Fu, "control flow in delay slot"); return;
L_08A6A54C:
    rt.unsupported(0x08A6A54Cu, 0x00000054u, "special? not lowered yet"); return;
L_08A6A550:
    rt.unsupported(0x08A6A554u, 0x5441445Fu, "control flow in delay slot"); return;
L_08A6A558:
    if (aot_gpr[10] != aot_gpr[15]) {
    aot_gpr[8] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0635_entry, 635u, 14u, 0x08A7F260u>(ctx, &aot_mem); return;
    }
    goto L_08A6A560;
L_08A6A560:
    rt.unsupported(0x08A6A564u, 0x504E495Fu, "control flow in delay slot"); return;
L_08A6A568:
    rt.unsupported(0x08A6A568u, 0x00005455u, "special? not lowered yet"); return;
L_08A6A56C:
    rt.unsupported(0x08A6A56Cu, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6A578:
    rt.unsupported(0x08A6A578u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08A6A584:
    aot_gpr[8] = (ctx.lo);
    goto L_08A6A588;
L_08A6A588:
    rt.unsupported(0x08A6A588u, 0x4D554E45u, "unknown not lowered yet"); return;
L_08A6A590:
    rt.unsupported(0x08A6A590u, 0x41544144u, "unknown not lowered yet"); return;
L_08A6A59C:
    if (aot_gpr[2] != aot_gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0632_entry, 632u, 176u, 0x08A7CAD0u>(ctx, &aot_mem); return;
    }
    goto L_08A6A5A4;
L_08A6A5A4:
    rt.unsupported(0x08A6A5A4u, 0x45464153u, "cop1? not lowered yet"); return;
L_08A6A5B0:
    rt.unsupported(0x08A6A5B0u, 0x45435845u, "cop1? not lowered yet"); return;
L_08A6A5C0:
    rt.unsupported(0x08A6A5C0u, 0x74696E75u, "unknown not lowered yet"); return;
L_08A6A5EC:
    if (aot_gpr[2] != aot_gpr[9]) {
    { const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0633_entry, 633u, 93u, 0x08A7DF44u>(ctx, &aot_mem); return;
    }
    goto L_08A6A5F4;
L_08A6A5F4:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 112u, 1u>();
    // nop
    // nop
    goto L_08A6A600;
L_08A6A600:
    ctx.execute_vfpu_vhdp(104u, 114u, 101u, 1u);
    // nop
    rt.unsupported(0x08A6A608u, 0x00006E6Fu, "special? not lowered yet"); return;
L_08A6A60C:
    rt.unsupported(0x08A6A60Cu, 0x74696E75u, "unknown not lowered yet"); return;
L_08A6A638:
    rt.unsupported(0x08A6A638u, 0x74696E75u, "unknown not lowered yet"); return;
L_08A6A65C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<72u, 1u>(vfpu_d); }
    aot_gpr[18] = (aot_gpr[19] < static_cast<std::uint32_t>(25964) ? 1u : 0u);
    aot_gpr[14] = (aot_gpr[3] - aot_gpr[16]);
    rt.unsupported(0x08A6A668u, 0x67617373u, "vfpu1 not lowered yet"); return;
L_08A6A680:
    ctx.execute_vfpu_vminmax(99u, 111u, 109u, 1u, false);
    aot_gpr[13] = (aot_gpr[3] + aot_gpr[4]);
    goto L_08A6A688;
L_08A6A688:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    // nop
    goto L_08A6A690;
L_08A6A690:
    rt.unsupported(0x08A6A690u, 0x73736573u, "unknown not lowered yet"); return;
L_08A6A698:
    rt.unsupported(0x08A6A698u, 0x74736F68u, "unknown not lowered yet"); return;
L_08A6A6A4:
    rt.unsupported(0x08A6A6A4u, 0x6964656Du, "unknown not lowered yet"); return;
L_08A6A6B4:
    rt.unsupported(0x08A6A6B4u, 0x6964656Du, "unknown not lowered yet"); return;
L_08A6A6C4:
    rt.unsupported(0x08A6A6C4u, 0x6964656Du, "unknown not lowered yet"); return;
L_08A6A6D8:
    rt.unsupported(0x08A6A6D8u, 0x75746567u, "unknown not lowered yet"); return;
L_08A6A6E8:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    rt.unsupported(0x08A6A6ECu, 0x61647075u, "vfpu0 not lowered yet"); return;
L_08A6A6F4:
    rt.unsupported(0x08A6A6F4u, 0x6964656Du, "unknown not lowered yet"); return;
L_08A6A708:
    rt.unsupported(0x08A6A708u, 0x7774656Eu, "unknown not lowered yet"); return;
L_08A6A724:
    rt.unsupported(0x08A6A724u, 0x73736573u, "unknown not lowered yet"); return;
L_08A6A734:
    ctx.execute_vfpu_compare3(108u, 111u, 103u, 1u, 6u);
    rt.unsupported(0x08A6A738u, 0x00007475u, "special? not lowered yet"); return;
L_08A6A73C:
    rt.unsupported(0x08A6A73Cu, 0x69676F6Cu, "unknown not lowered yet"); return;
L_08A6A744:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<121u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vhdp(99u, 111u, 110u, 1u);
    rt.unsupported(0x08A6A750u, 0x616D7269u, "vfpu0 not lowered yet"); return;
L_08A6A75C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<121u, 1u>(vfpu_d); }
    // nop
    goto L_08A6A768;
L_08A6A768:
    ctx.execute_vfpu_compare3(105u, 103u, 110u, 1u, 6u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    (void)(0u & 0u);
    goto L_08A6A774;
L_08A6A774:
    rt.unsupported(0x08A6A774u, 0x61657263u, "vfpu0 not lowered yet"); return;
L_08A6A780:
    rt.unsupported(0x08A6A780u, 0x6E696F6Au, "vfpu3 not lowered yet"); return;
L_08A6A78C:
    rt.unsupported(0x08A6A78Cu, 0x6E696F6Au, "vfpu3 not lowered yet"); return;
L_08A6A798:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vminmax(121u, 114u, 101u, 1u, false);
    rt.unsupported(0x08A6A7A0u, 0x0065766Fu, "special? not lowered yet"); return;
L_08A6A7A4:
    ctx.execute_vfpu_compare3(105u, 103u, 110u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 101u, 114u, 1u>();
    ctx.execute_vfpu_vscl_ct<109u, 111u, 118u, 1u>();
    // nop
    goto L_08A6A7B4;
L_08A6A7B4:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    rt.unsupported(0x08A6A7B8u, 0x7473696Cu, "unknown not lowered yet"); return;
L_08A6A7C4:
    rt.unsupported(0x08A6A7C4u, 0x62626F6Cu, "vfpu0 not lowered yet"); return;
L_08A6A7D4:
    rt.unsupported(0x08A6A7D4u, 0x72617473u, "unknown not lowered yet"); return;
L_08A6A7E0:
    rt.unsupported(0x08A6A7E0u, 0x616E6966u, "vfpu0 not lowered yet"); return;
L_08A6A7F0:
    rt.unsupported(0x08A6A7F0u, 0x72646E65u, "unknown not lowered yet"); return;
L_08A6A7FC:
    rt.unsupported(0x08A6A7FCu, 0x7661656Cu, "unknown not lowered yet"); return;
L_08A6A808:
    rt.unsupported(0x08A6A808u, 0x63697571u, "vfpu0 not lowered yet"); return;
L_08A6A814:
    ctx.execute_vfpu_vscl_ct<101u, 120u, 99u, 1u>();
    ctx.execute_vfpu_compare3(112u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A6A81Cu, 0x7079546Eu, "unknown not lowered yet"); return;
L_08A6A824:
    rt.unsupported(0x08A6A824u, 0x74696E55u, "unknown not lowered yet"); return;
L_08A6A838:
    // nop
    goto L_08A6A83C;
L_08A6A83C:
    ctx.execute_vfpu_vhdp(104u, 114u, 101u, 1u);
    // nop
    // nop
    goto L_08A6A848;
L_08A6A848:
    rt.unsupported(0x08A6A848u, 0x74696E55u, "unknown not lowered yet"); return;
L_08A6A85C:
    rt.unsupported(0x08A6A85Cu, 0x69726176u, "unknown not lowered yet"); return;
L_08A6A864:
    rt.unsupported(0x08A6A864u, 0x73736573u, "unknown not lowered yet"); return;
L_08A6A86C:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    // nop
    goto L_08A6A874;
L_08A6A874:
    rt.unsupported(0x08A6A874u, 0x6B6E696Cu, "unknown not lowered yet"); return;
L_08A6A880:
    ctx.execute_vfpu_vhdp(104u, 114u, 101u, 1u);
    // nop
    goto L_08A6A888;
L_08A6A888:
    rt.unsupported(0x08A6A888u, 0x72656373u, "unknown not lowered yet"); return;
L_08A6A894:
    aot_gpr[12] = (0u | 0u);
    goto L_08A6A898;
L_08A6A898:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<78u, 97u, 109u, 1u>();
    // nop
    goto L_08A6A8A4;
L_08A6A8A4:
    aot_gpr[14] = (0u | 0u);
    goto L_08A6A8A8;
L_08A6A8A8:
    rt.unsupported(0x08A6A8A8u, 0x74736F68u, "unknown not lowered yet"); return;
L_08A6A8B8:
    ctx.execute_vfpu_compare3(114u, 101u, 109u, 1u, 6u);
    ctx.execute_vfpu_vcmp_ct<101u, 80u, 1u, 4u>();
    rt.unsupported(0x08A6A8C0u, 0x72657961u, "unknown not lowered yet"); return;
L_08A6A8CC:
    // nop
    goto L_08A6A8D0;
L_08A6A8D0:
    ctx.execute_vfpu_vscl_ct<116u, 105u, 109u, 1u>();
    rt.unsupported(0x08A6A8D4u, 0x44726550u, "cop1? not lowered yet"); return;
L_08A6A8DC:
    rt.unsupported(0x08A6A8DCu, 0x446D756Eu, "cop1? not lowered yet"); return;
L_08A6A8E4:
    rt.unsupported(0x08A6A8E4u, 0x61636F6Cu, "vfpu0 not lowered yet"); return;
L_08A6A8F0:
    rt.unsupported(0x08A6A8F0u, 0x74617473u, "unknown not lowered yet"); return;
L_08A6A8F4:
    aot_gpr[26] = (aot_gpr[25] < static_cast<std::uint32_t>(25449) ? 1u : 0u);
    rt.unsupported(0x08A6A8F8u, 0x0000002Fu, "special? not lowered yet"); return;
L_08A6A98C:
    rt.unsupported(0x08A6A98Cu, 0x636F7673u, "vfpu0 not lowered yet"); return;
L_08A6A9B4:
    if (aot_gpr[9] != aot_gpr[13]) {
    ctx.lo = 0u;
        ctx.pc = 0x08A8634Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6A9BC;
L_08A6A9BC:
    rt.unsupported(0x08A6A9BCu, 0x472D6E65u, "cop1? not lowered yet"); return;
L_08A6A9C4:
    aot_gpr[12] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    goto L_08A6A9C8;
L_08A6A9C8:
    aot_gpr[13] = (0u < 0u ? 1u : 0u);
    goto L_08A6A9CC;
L_08A6A9CC:
    rt.unsupported(0x08A6A9CCu, 0x00007469u, "special? not lowered yet"); return;
L_08A6A9D0:
    aot_gpr[14] = (0u | 0u);
    goto L_08A6A9D4;
L_08A6A9D4:
    aot_gpr[12] = (0u & 0u);
    goto L_08A6A9D8;
L_08A6A9D8:
    aot_gpr[14] = (0u ^ 0u);
    goto L_08A6A9DC;
L_08A6A9DC:
    rt.unsupported(0x08A6A9DCu, 0x00006C6Eu, "special? not lowered yet"); return;
L_08A6A9E0:
    rt.unsupported(0x08A6A9E0u, 0x00007470u, "special? not lowered yet"); return;
L_08A6A9E4:
    rt.unsupported(0x08A6A9E4u, 0x0000687Au, "special? not lowered yet"); return;
L_08A6A9E8:
    rt.unsupported(0x08A6A9E8u, 0x00007774u, "special? not lowered yet"); return;
L_08A6A9EC:
    aot_gpr[13] = (0u ^ 0u);
    goto L_08A6A9F0;
L_08A6A9F0:
    rt.unsupported(0x08A6A9F0u, 0x00006F6Eu, "special? not lowered yet"); return;
L_08A6A9F4:
    aot_gpr[12] = (0u & 0u);
    goto L_08A6A9F8;
L_08A6A9F8:
    rt.unsupported(0x08A6A9F8u, 0x00007673u, "special? not lowered yet"); return;
L_08A6A9FC:
    rt.unsupported(0x08A6A9FCu, 0x00007572u, "special? not lowered yet"); return;
L_08A6AA00:
    rt.unsupported(0x08A6AA00u, 0x00006C70u, "special? not lowered yet"); return;
L_08A6AB00:
    rt.unsupported(0x08A6AB00u, 0x74696E75u, "unknown not lowered yet"); return;
L_08A6AB68:
    aot_gpr[30] = (aot_gpr[11] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08A6AB6Cu, 0x00000078u, "special? not lowered yet"); return;
L_08A6AB70:
    rt.unsupported(0x08A6AB70u, 0x61657263u, "vfpu0 not lowered yet"); return;
L_08A6AB7C:
    jump_target = 0u;
    aot_gpr[31] = (0x08A6AB84u);
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6AB84u) goto L_08A6AB84;
    return;
L_08A6AB80:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    goto L_08A6AB84;
L_08A6AB84:
    rt.unsupported(0x08A6AB84u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A6AB90:
    rt.unsupported(0x08A6AB90u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A6ABA0:
    rt.unsupported(0x08A6ABA0u, 0x6E69676Fu, "vfpu3 not lowered yet"); return;
L_08A6ABA8:
    rt.unsupported(0x08A6ABA8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A6ABB8:
    rt.unsupported(0x08A6ABB8u, 0x756F676Fu, "unknown not lowered yet"); return;
L_08A6ABC0:
    rt.unsupported(0x08A6ABC0u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A6AC40:
    aot_gpr[14] = (0u | 0u);
    // nop
    goto L_08A6AC48;
L_08A6AC48:
    (void)(aot_gpr[8] << 1u);
    ctx.pc = 0x029E5FC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A6AC50:
    rt.unsupported(0x08A6AC50u, 0x6143504Eu, "vfpu0 not lowered yet"); return;
L_08A6AC5C:
    (void)(0u & 0u);
    rt.unsupported(0x08A6AC64u, 0x0896FDC8u, "control flow in delay slot"); return;
L_08A6AC80:
    if (aot_gpr[11] != aot_gpr[5]) {
    rt.unsupported(0x08A6AC84u, 0x496C6974u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 64u, 0x08A839D0u>(ctx, &aot_mem); return;
    }
    goto L_08A6AC88;
L_08A6AC88:
    if (aot_gpr[27] == aot_gpr[20]) {
    ctx.execute_vfpu_vcmp_ct<109u, 112u, 1u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0640_entry, 640u, 21u, 0x08A84244u>(ctx, &aot_mem); return;
    }
    goto L_08A6AC90;
L_08A6AC90:
    ctx.execute_vfpu_vcmp_ct<86u, 112u, 1u, 5u>();
    // nop
    rt.unsupported(0x08A6AC9Cu, 0x08970E04u, "control flow in delay slot"); return;
L_08A6ACC0:
    rt.unsupported(0x08A6ACC4u, 0x08970E8Cu, "control flow in delay slot"); return;
L_08A6ACF8:
    rt.unsupported(0x08A6ACF8u, 0x79616C50u, "unknown not lowered yet"); return;
L_08A6AD18:
    rt.unsupported(0x08A6AD18u, 0x6E756F46u, "vfpu3 not lowered yet"); return;
L_08A6AD44:
    rt.unsupported(0x08A6AD44u, 0x78656E55u, "unknown not lowered yet"); return;
L_08A6AD70:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08A6AD74u, 0x74206465u, "unknown not lowered yet"); return;
L_08A6ADB8:
    rt.unsupported(0x08A6ADB8u, 0x464D5350u, "cop1? not lowered yet"); return;
L_08A6ADD8:
    rt.unsupported(0x08A6ADD8u, 0x636E7953u, "vfpu0 not lowered yet"); return;
L_08A6ADE4:
    rt.unsupported(0x08A6ADE4u, 0x636E7953u, "vfpu0 not lowered yet"); return;
L_08A6ADF0:
    rt.unsupported(0x08A6ADF0u, 0x636E7953u, "vfpu0 not lowered yet"); return;
L_08A6ADFC:
    rt.unsupported(0x08A6ADFCu, 0x636E7953u, "vfpu0 not lowered yet"); return;
L_08A6AE10:
    rt.unsupported(0x08A6AE10u, 0x636E7953u, "vfpu0 not lowered yet"); return;
L_08A6AE20:
    rt.unsupported(0x08A6AE20u, 0x69766F4Du, "unknown not lowered yet"); return;
L_08A6AE30:
    ctx.execute_vfpu_vcmp_ct<70u, 105u, 1u, 5u>();
    (void)(0u | 0u);
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    aot_gpr[1] = (0u << 0u);
    // nop
    rt.unsupported(0x08A6AE48u, 0x00000001u, "special? not lowered yet"); return;
L_08A6AE90:
    ctx.execute_vfpu_compare3(68u, 101u, 99u, 1u, 6u);
    rt.unsupported(0x08A6AE94u, 0x79536564u, "unknown not lowered yet"); return;
L_08A6AE9C:
    ctx.execute_vfpu_compare3(65u, 117u, 68u, 1u, 6u);
    rt.unsupported(0x08A6AEA0u, 0x7953656Eu, "unknown not lowered yet"); return;
L_08A6AEA8:
    ctx.execute_vfpu_vscl_ct<118u, 105u, 100u, 1u>();
    rt.unsupported(0x08A6AEACu, 0x7274536Fu, "unknown not lowered yet"); return;
L_08A6AEB4:
    rt.unsupported(0x08A6AEB4u, 0x69647561u, "unknown not lowered yet"); return;
L_08A6AEC0:
    rt.unsupported(0x08A6AEC0u, 0x74627573u, "unknown not lowered yet"); return;
L_08A6AEC8:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    aot_gpr[13] = (0u + 0u);
    goto L_08A6AED0;
L_08A6AED0:
    rt.unsupported(0x08A6AED0u, 0x72657375u, "unknown not lowered yet"); return;
L_08A6AEE0:
    rt.unsupported(0x08A6AEE0u, 0x6E6B6E75u, "vfpu3 not lowered yet"); return;
L_08A6AEEC:
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08A6AEF0u, 0x00000BBBu, "special? not lowered yet"); return;
L_08A6AF00:
    rt.unsupported(0x08A6AF00u, 0x69766F4Du, "unknown not lowered yet"); return;
L_08A6AF10:
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A6AF14;
L_08A6AF14:
    rt.unsupported(0x08A6AF14u, 0x75427541u, "unknown not lowered yet"); return;
L_08A6AF20:
    rt.unsupported(0x08A6AF20u, 0x636E7953u, "vfpu0 not lowered yet"); return;
L_08A6AF30:
    rt.unsupported(0x08A6AF30u, 0x636E7953u, "vfpu0 not lowered yet"); return;
L_08A6AF40:
    ctx.execute_vfpu_vscl_ct<86u, 105u, 100u, 1u>();
    rt.unsupported(0x08A6AF44u, 0x4275416Fu, "unknown not lowered yet"); return;
L_08A6AF50:
    rt.unsupported(0x08A6AF50u, 0x69647541u, "unknown not lowered yet"); return;
L_08A6AF60:
    rt.unsupported(0x08A6AF60u, 0x41627553u, "unknown not lowered yet"); return;
L_08A6AF6C:
    rt.unsupported(0x08A6AF6Cu, 0x41787541u, "unknown not lowered yet"); return;
L_08A6AF7C:
    rt.unsupported(0x08A6AF7Cu, 0x74736F68u, "unknown not lowered yet"); return;
L_08A6AF98:
    rt.unsupported(0x08A6AF98u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08A6AFA4:
    aot_gpr[5] = (aot_gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08A6AFA8u, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = aot_gpr[1];
    aot_gpr[10] = (0x08A6AFB4u);
    rt.unsupported(0x08A6AFB0u, 0x20646E45u, "unknown not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6AFB4u) goto L_08A6AFB4;
    return;
L_08A6AFB0:
    rt.unsupported(0x08A6AFB0u, 0x20646E45u, "unknown not lowered yet"); return;
L_08A6AFB4:
    ctx.execute_vfpu_vscl_ct<116u, 104u, 114u, 1u>();
    ctx.execute_vfpu_vhdp(97u, 100u, 32u, 1u);
    ctx.execute_vfpu_vscl_ct<97u, 105u, 108u, 1u>();
    rt.unsupported(0x08A6AFC0u, 0x69772064u, "unknown not lowered yet"); return;
L_08A6AFCC:
    rt.unsupported(0x08A6AFCCu, 0x6E6B6E75u, "vfpu3 not lowered yet"); return;
L_08A6AFE0:
    ctx.execute_vfpu_vscl_ct<84u, 104u, 114u, 1u>();
    rt.unsupported(0x08A6AFE4u, 0x72656461u, "unknown not lowered yet"); return;
L_08A6AFF8:
    rt.unsupported(0x08A6AFF8u, 0x6E6B6E75u, "vfpu3 not lowered yet"); return;
}

void recomp_unit_0614(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0614_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_614(Runtime &runtime) {
    runtime.register_generated_unit(614u, 0x08A6A000u, 4096u, &recomp_unit_0614, &recomp_unit_0614_entry);
    runtime.register_function(0x08A6A128u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A138u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A154u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A170u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A1A0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A1B4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A1C0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A1CCu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A1D8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A1DCu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A1E0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A1E8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A210u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A218u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A220u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A228u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A238u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A244u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A250u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A25Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A2C8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A2F8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A31Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A324u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A370u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A428u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A488u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A494u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A4A0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A4C8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A4D8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A4DCu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A4E8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A4F0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A4F4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A4FCu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A500u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A508u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A50Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A518u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A524u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A52Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A538u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A544u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A54Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A550u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A558u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A560u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A568u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A56Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A578u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A584u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A588u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A590u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A59Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A5A4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A5B0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A5C0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A5ECu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A5F4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A600u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A60Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A638u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A65Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A680u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A688u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A690u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A698u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A6A4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A6B4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A6C4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A6D8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A6E8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A6F4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A708u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A724u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A734u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A73Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A744u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A75Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A768u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A774u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A780u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A78Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A798u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A7A4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A7B4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A7C4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A7D4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A7E0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A7F0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A7FCu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A808u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A814u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A824u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A838u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A83Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A848u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A85Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A864u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A86Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A874u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A880u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A888u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A894u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A898u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A8A4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A8A8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A8B8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A8CCu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A8D0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A8DCu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A8E4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A8F0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A8F4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A98Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9B4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9BCu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9C4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9C8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9CCu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9D0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9D4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9D8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9DCu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9E0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9E4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9E8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9ECu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9F0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9F4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9F8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6A9FCu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AA00u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AB00u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AB68u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AB70u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AB7Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AB80u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AB84u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AB90u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6ABA0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6ABA8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6ABB8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6ABC0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AC40u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AC48u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AC50u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AC5Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AC80u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AC88u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AC90u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6ACC0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6ACF8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AD18u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AD44u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AD70u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6ADB8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6ADD8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6ADE4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6ADF0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6ADFCu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AE10u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AE20u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AE30u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AE90u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AE9Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AEA8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AEB4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AEC0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AEC8u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AED0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AEE0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AEECu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AF00u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AF10u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AF14u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AF20u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AF30u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AF40u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AF50u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AF60u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AF6Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AF7Cu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AF98u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AFA4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AFB0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AFB4u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AFCCu, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AFE0u, &recomp_unit_0614, "recomp_unit_0614");
    runtime.register_function(0x08A6AFF8u, &recomp_unit_0614, "recomp_unit_0614");
}
} // namespace psprecomp
