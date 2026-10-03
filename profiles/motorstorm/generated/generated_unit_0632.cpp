#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0632[998] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6,
    7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 16, 17, 0, 18, 0, 19, 0,
    20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 33, 34, 0, 35, 0, 36, 0,
    37, 0, 38, 0, 39, 0, 40, 0, 41, 42, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 52, 53, 0, 54, 0,
    55, 56, 57, 0, 58, 0, 59, 0, 60, 0, 61, 62, 63, 0, 64, 0, 65, 66, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0,
    74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0,
    90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 104, 105, 0, 106, 107,
    108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0,
    124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0,
    140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0,
    148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 173,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 182, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 201,
};
void recomp_unit_0632_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A7C060u;
        entry_id = (entry_delta < 3992u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0632[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A7C060;
    case 2u: goto L_08A7C0C4;
    case 3u: goto L_08A7C0F0;
    case 4u: goto L_08A7C154;
    case 5u: goto L_08A7C1C0;
    case 6u: goto L_08A7C1DC;
    case 7u: goto L_08A7C1E0;
    case 8u: goto L_08A7C1EC;
    case 9u: goto L_08A7C210;
    case 10u: goto L_08A7C218;
    case 11u: goto L_08A7C220;
    case 12u: goto L_08A7C228;
    case 13u: goto L_08A7C230;
    case 14u: goto L_08A7C238;
    case 15u: goto L_08A7C240;
    case 16u: goto L_08A7C244;
    case 17u: goto L_08A7C248;
    case 18u: goto L_08A7C250;
    case 19u: goto L_08A7C258;
    case 20u: goto L_08A7C260;
    case 21u: goto L_08A7C268;
    case 22u: goto L_08A7C270;
    case 23u: goto L_08A7C278;
    case 24u: goto L_08A7C280;
    case 25u: goto L_08A7C288;
    case 26u: goto L_08A7C290;
    case 27u: goto L_08A7C298;
    case 28u: goto L_08A7C2A0;
    case 29u: goto L_08A7C2A8;
    case 30u: goto L_08A7C2B0;
    case 31u: goto L_08A7C2B8;
    case 32u: goto L_08A7C2C0;
    case 33u: goto L_08A7C2C4;
    case 34u: goto L_08A7C2C8;
    case 35u: goto L_08A7C2D0;
    case 36u: goto L_08A7C2D8;
    case 37u: goto L_08A7C2E0;
    case 38u: goto L_08A7C2E8;
    case 39u: goto L_08A7C2F0;
    case 40u: goto L_08A7C2F8;
    case 41u: goto L_08A7C300;
    case 42u: goto L_08A7C304;
    case 43u: goto L_08A7C308;
    case 44u: goto L_08A7C310;
    case 45u: goto L_08A7C318;
    case 46u: goto L_08A7C320;
    case 47u: goto L_08A7C328;
    case 48u: goto L_08A7C330;
    case 49u: goto L_08A7C338;
    case 50u: goto L_08A7C340;
    case 51u: goto L_08A7C348;
    case 52u: goto L_08A7C34C;
    case 53u: goto L_08A7C350;
    case 54u: goto L_08A7C358;
    case 55u: goto L_08A7C360;
    case 56u: goto L_08A7C364;
    case 57u: goto L_08A7C368;
    case 58u: goto L_08A7C370;
    case 59u: goto L_08A7C378;
    case 60u: goto L_08A7C380;
    case 61u: goto L_08A7C388;
    case 62u: goto L_08A7C38C;
    case 63u: goto L_08A7C390;
    case 64u: goto L_08A7C398;
    case 65u: goto L_08A7C3A0;
    case 66u: goto L_08A7C3A4;
    case 67u: goto L_08A7C3A8;
    case 68u: goto L_08A7C3B0;
    case 69u: goto L_08A7C3B8;
    case 70u: goto L_08A7C3C0;
    case 71u: goto L_08A7C3C8;
    case 72u: goto L_08A7C3D0;
    case 73u: goto L_08A7C3D8;
    case 74u: goto L_08A7C3E0;
    case 75u: goto L_08A7C3E8;
    case 76u: goto L_08A7C3F0;
    case 77u: goto L_08A7C3F8;
    case 78u: goto L_08A7C400;
    case 79u: goto L_08A7C408;
    case 80u: goto L_08A7C410;
    case 81u: goto L_08A7C418;
    case 82u: goto L_08A7C420;
    case 83u: goto L_08A7C428;
    case 84u: goto L_08A7C430;
    case 85u: goto L_08A7C438;
    case 86u: goto L_08A7C440;
    case 87u: goto L_08A7C448;
    case 88u: goto L_08A7C450;
    case 89u: goto L_08A7C458;
    case 90u: goto L_08A7C460;
    case 91u: goto L_08A7C468;
    case 92u: goto L_08A7C470;
    case 93u: goto L_08A7C478;
    case 94u: goto L_08A7C480;
    case 95u: goto L_08A7C488;
    case 96u: goto L_08A7C490;
    case 97u: goto L_08A7C498;
    case 98u: goto L_08A7C4A0;
    case 99u: goto L_08A7C4A8;
    case 100u: goto L_08A7C4B0;
    case 101u: goto L_08A7C4B8;
    case 102u: goto L_08A7C4C0;
    case 103u: goto L_08A7C4C8;
    case 104u: goto L_08A7C4CC;
    case 105u: goto L_08A7C4D0;
    case 106u: goto L_08A7C4D8;
    case 107u: goto L_08A7C4DC;
    case 108u: goto L_08A7C4E0;
    case 109u: goto L_08A7C4E8;
    case 110u: goto L_08A7C4F0;
    case 111u: goto L_08A7C4F8;
    case 112u: goto L_08A7C500;
    case 113u: goto L_08A7C508;
    case 114u: goto L_08A7C510;
    case 115u: goto L_08A7C518;
    case 116u: goto L_08A7C520;
    case 117u: goto L_08A7C528;
    case 118u: goto L_08A7C530;
    case 119u: goto L_08A7C538;
    case 120u: goto L_08A7C540;
    case 121u: goto L_08A7C548;
    case 122u: goto L_08A7C550;
    case 123u: goto L_08A7C558;
    case 124u: goto L_08A7C560;
    case 125u: goto L_08A7C568;
    case 126u: goto L_08A7C570;
    case 127u: goto L_08A7C578;
    case 128u: goto L_08A7C580;
    case 129u: goto L_08A7C588;
    case 130u: goto L_08A7C590;
    case 131u: goto L_08A7C598;
    case 132u: goto L_08A7C5A0;
    case 133u: goto L_08A7C5A8;
    case 134u: goto L_08A7C5B0;
    case 135u: goto L_08A7C5B8;
    case 136u: goto L_08A7C5C0;
    case 137u: goto L_08A7C5C8;
    case 138u: goto L_08A7C5D0;
    case 139u: goto L_08A7C5D8;
    case 140u: goto L_08A7C5E0;
    case 141u: goto L_08A7C5E8;
    case 142u: goto L_08A7C5F0;
    case 143u: goto L_08A7C5F8;
    case 144u: goto L_08A7C600;
    case 145u: goto L_08A7C608;
    case 146u: goto L_08A7C64C;
    case 147u: goto L_08A7C654;
    case 148u: goto L_08A7C660;
    case 149u: goto L_08A7C670;
    case 150u: goto L_08A7C708;
    case 151u: goto L_08A7C758;
    case 152u: goto L_08A7C788;
    case 153u: goto L_08A7C7A4;
    case 154u: goto L_08A7C7B8;
    case 155u: goto L_08A7C7D8;
    case 156u: goto L_08A7C80C;
    case 157u: goto L_08A7C840;
    case 158u: goto L_08A7C888;
    case 159u: goto L_08A7C890;
    case 160u: goto L_08A7C8C0;
    case 161u: goto L_08A7C8CC;
    case 162u: goto L_08A7C8D8;
    case 163u: goto L_08A7C8E0;
    case 164u: goto L_08A7C914;
    case 165u: goto L_08A7C920;
    case 166u: goto L_08A7C960;
    case 167u: goto L_08A7C978;
    case 168u: goto L_08A7C998;
    case 169u: goto L_08A7C9A0;
    case 170u: goto L_08A7C9E0;
    case 171u: goto L_08A7CA20;
    case 172u: goto L_08A7CA58;
    case 173u: goto L_08A7CA5C;
    case 174u: goto L_08A7CA68;
    case 175u: goto L_08A7CAA8;
    case 176u: goto L_08A7CAD0;
    case 177u: goto L_08A7CAE8;
    case 178u: goto L_08A7CB28;
    case 179u: goto L_08A7CB68;
    case 180u: goto L_08A7CBB0;
    case 181u: goto L_08A7CC38;
    case 182u: goto L_08A7CC3C;
    case 183u: goto L_08A7CC88;
    case 184u: goto L_08A7CCC0;
    case 185u: goto L_08A7CCC4;
    case 186u: goto L_08A7CCE8;
    case 187u: goto L_08A7CD28;
    case 188u: goto L_08A7CD60;
    case 189u: goto L_08A7CD88;
    case 190u: goto L_08A7CDB0;
    case 191u: goto L_08A7CDE8;
    case 192u: goto L_08A7CE10;
    case 193u: goto L_08A7CE48;
    case 194u: goto L_08A7CE70;
    case 195u: goto L_08A7CE98;
    case 196u: goto L_08A7CE9C;
    case 197u: goto L_08A7CED0;
    case 198u: goto L_08A7CF08;
    case 199u: goto L_08A7CF40;
    case 200u: goto L_08A7CF78;
    case 201u: goto L_08A7CFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A7C060:
    rt.unsupported(0x08A7C060u, 0x00000005u, "special? not lowered yet"); return;
L_08A7C0C4:
    // nop
    // nop
    rt.unsupported(0x08A7C0CCu, 0x00000005u, "special? not lowered yet"); return;
L_08A7C0F0:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    rt.unsupported(0x08A7C0F4u, 0x00000005u, "special? not lowered yet"); return;
L_08A7C154:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    rt.unsupported(0x08A7C16Cu, 0x00000005u, "special? not lowered yet"); return;
L_08A7C1C0:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7C1DC;
L_08A7C1DC:
    // nop
    goto L_08A7C1E0;
L_08A7C1E0:
    // nop
    // nop
    // nop
    goto L_08A7C1EC;
L_08A7C1EC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7C210;
L_08A7C210:
    // nop
    // nop
    goto L_08A7C218;
L_08A7C218:
    rt.unsupported(0x08A7C21Cu, 0x08A7C210u, "control flow in delay slot"); return;
L_08A7C220:
    rt.unsupported(0x08A7C224u, 0x08A7C218u, "control flow in delay slot"); return;
L_08A7C228:
    rt.unsupported(0x08A7C22Cu, 0x08A7C220u, "control flow in delay slot"); return;
L_08A7C230:
    rt.unsupported(0x08A7C234u, 0x08A7C228u, "control flow in delay slot"); return;
L_08A7C238:
    rt.unsupported(0x08A7C23Cu, 0x08A7C230u, "control flow in delay slot"); return;
L_08A7C240:
    rt.unsupported(0x08A7C244u, 0x08A7C238u, "control flow in delay slot"); return;
L_08A7C244:
    rt.unsupported(0x08A7C248u, 0x08A7C240u, "control flow in delay slot"); return;
L_08A7C248:
    rt.unsupported(0x08A7C24Cu, 0x08A7C240u, "control flow in delay slot"); return;
L_08A7C250:
    rt.unsupported(0x08A7C254u, 0x08A7C248u, "control flow in delay slot"); return;
L_08A7C258:
    rt.unsupported(0x08A7C25Cu, 0x08A7C250u, "control flow in delay slot"); return;
L_08A7C260:
    rt.unsupported(0x08A7C264u, 0x08A7C258u, "control flow in delay slot"); return;
L_08A7C268:
    rt.unsupported(0x08A7C26Cu, 0x08A7C260u, "control flow in delay slot"); return;
L_08A7C270:
    rt.unsupported(0x08A7C274u, 0x08A7C268u, "control flow in delay slot"); return;
L_08A7C278:
    rt.unsupported(0x08A7C27Cu, 0x08A7C270u, "control flow in delay slot"); return;
L_08A7C280:
    rt.unsupported(0x08A7C284u, 0x08A7C278u, "control flow in delay slot"); return;
L_08A7C288:
    rt.unsupported(0x08A7C28Cu, 0x08A7C280u, "control flow in delay slot"); return;
L_08A7C290:
    rt.unsupported(0x08A7C294u, 0x08A7C288u, "control flow in delay slot"); return;
L_08A7C298:
    rt.unsupported(0x08A7C29Cu, 0x08A7C290u, "control flow in delay slot"); return;
L_08A7C2A0:
    rt.unsupported(0x08A7C2A4u, 0x08A7C298u, "control flow in delay slot"); return;
L_08A7C2A8:
    rt.unsupported(0x08A7C2ACu, 0x08A7C2A0u, "control flow in delay slot"); return;
L_08A7C2B0:
    rt.unsupported(0x08A7C2B4u, 0x08A7C2A8u, "control flow in delay slot"); return;
L_08A7C2B8:
    rt.unsupported(0x08A7C2BCu, 0x08A7C2B0u, "control flow in delay slot"); return;
L_08A7C2C0:
    rt.unsupported(0x08A7C2C4u, 0x08A7C2B8u, "control flow in delay slot"); return;
L_08A7C2C4:
    rt.unsupported(0x08A7C2C8u, 0x08A7C2C0u, "control flow in delay slot"); return;
L_08A7C2C8:
    rt.unsupported(0x08A7C2CCu, 0x08A7C2C0u, "control flow in delay slot"); return;
L_08A7C2D0:
    rt.unsupported(0x08A7C2D4u, 0x08A7C2C8u, "control flow in delay slot"); return;
L_08A7C2D8:
    rt.unsupported(0x08A7C2DCu, 0x08A7C2D0u, "control flow in delay slot"); return;
L_08A7C2E0:
    rt.unsupported(0x08A7C2E4u, 0x08A7C2D8u, "control flow in delay slot"); return;
L_08A7C2E8:
    rt.unsupported(0x08A7C2ECu, 0x08A7C2E0u, "control flow in delay slot"); return;
L_08A7C2F0:
    rt.unsupported(0x08A7C2F4u, 0x08A7C2E8u, "control flow in delay slot"); return;
L_08A7C2F8:
    rt.unsupported(0x08A7C2FCu, 0x08A7C2F0u, "control flow in delay slot"); return;
L_08A7C300:
    rt.unsupported(0x08A7C304u, 0x08A7C2F8u, "control flow in delay slot"); return;
L_08A7C304:
    rt.unsupported(0x08A7C308u, 0x08A7C300u, "control flow in delay slot"); return;
L_08A7C308:
    rt.unsupported(0x08A7C30Cu, 0x08A7C300u, "control flow in delay slot"); return;
L_08A7C310:
    rt.unsupported(0x08A7C314u, 0x08A7C308u, "control flow in delay slot"); return;
L_08A7C318:
    rt.unsupported(0x08A7C31Cu, 0x08A7C310u, "control flow in delay slot"); return;
L_08A7C320:
    rt.unsupported(0x08A7C324u, 0x08A7C318u, "control flow in delay slot"); return;
L_08A7C328:
    rt.unsupported(0x08A7C32Cu, 0x08A7C320u, "control flow in delay slot"); return;
L_08A7C330:
    rt.unsupported(0x08A7C334u, 0x08A7C328u, "control flow in delay slot"); return;
L_08A7C338:
    rt.unsupported(0x08A7C33Cu, 0x08A7C330u, "control flow in delay slot"); return;
L_08A7C340:
    rt.unsupported(0x08A7C344u, 0x08A7C338u, "control flow in delay slot"); return;
L_08A7C348:
    rt.unsupported(0x08A7C34Cu, 0x08A7C340u, "control flow in delay slot"); return;
L_08A7C34C:
    rt.unsupported(0x08A7C350u, 0x08A7C348u, "control flow in delay slot"); return;
L_08A7C350:
    rt.unsupported(0x08A7C354u, 0x08A7C348u, "control flow in delay slot"); return;
L_08A7C358:
    rt.unsupported(0x08A7C35Cu, 0x08A7C350u, "control flow in delay slot"); return;
L_08A7C360:
    rt.unsupported(0x08A7C364u, 0x08A7C358u, "control flow in delay slot"); return;
L_08A7C364:
    rt.unsupported(0x08A7C368u, 0x08A7C360u, "control flow in delay slot"); return;
L_08A7C368:
    rt.unsupported(0x08A7C36Cu, 0x08A7C360u, "control flow in delay slot"); return;
L_08A7C370:
    rt.unsupported(0x08A7C374u, 0x08A7C368u, "control flow in delay slot"); return;
L_08A7C378:
    rt.unsupported(0x08A7C37Cu, 0x08A7C370u, "control flow in delay slot"); return;
L_08A7C380:
    rt.unsupported(0x08A7C384u, 0x08A7C378u, "control flow in delay slot"); return;
L_08A7C388:
    rt.unsupported(0x08A7C38Cu, 0x08A7C380u, "control flow in delay slot"); return;
L_08A7C38C:
    rt.unsupported(0x08A7C390u, 0x08A7C388u, "control flow in delay slot"); return;
L_08A7C390:
    rt.unsupported(0x08A7C394u, 0x08A7C388u, "control flow in delay slot"); return;
L_08A7C398:
    rt.unsupported(0x08A7C39Cu, 0x08A7C390u, "control flow in delay slot"); return;
L_08A7C3A0:
    rt.unsupported(0x08A7C3A4u, 0x08A7C398u, "control flow in delay slot"); return;
L_08A7C3A4:
    rt.unsupported(0x08A7C3A8u, 0x08A7C3A0u, "control flow in delay slot"); return;
L_08A7C3A8:
    rt.unsupported(0x08A7C3ACu, 0x08A7C3A0u, "control flow in delay slot"); return;
L_08A7C3B0:
    rt.unsupported(0x08A7C3B4u, 0x08A7C3A8u, "control flow in delay slot"); return;
L_08A7C3B8:
    rt.unsupported(0x08A7C3BCu, 0x08A7C3B0u, "control flow in delay slot"); return;
L_08A7C3C0:
    rt.unsupported(0x08A7C3C4u, 0x08A7C3B8u, "control flow in delay slot"); return;
L_08A7C3C8:
    rt.unsupported(0x08A7C3CCu, 0x08A7C3C0u, "control flow in delay slot"); return;
L_08A7C3D0:
    rt.unsupported(0x08A7C3D4u, 0x08A7C3C8u, "control flow in delay slot"); return;
L_08A7C3D8:
    rt.unsupported(0x08A7C3DCu, 0x08A7C3D0u, "control flow in delay slot"); return;
L_08A7C3E0:
    rt.unsupported(0x08A7C3E4u, 0x08A7C3D8u, "control flow in delay slot"); return;
L_08A7C3E8:
    rt.unsupported(0x08A7C3ECu, 0x08A7C3E0u, "control flow in delay slot"); return;
L_08A7C3F0:
    rt.unsupported(0x08A7C3F4u, 0x08A7C3E8u, "control flow in delay slot"); return;
L_08A7C3F8:
    rt.unsupported(0x08A7C3FCu, 0x08A7C3F0u, "control flow in delay slot"); return;
L_08A7C400:
    rt.unsupported(0x08A7C404u, 0x08A7C3F8u, "control flow in delay slot"); return;
L_08A7C408:
    rt.unsupported(0x08A7C40Cu, 0x08A7C400u, "control flow in delay slot"); return;
L_08A7C410:
    rt.unsupported(0x08A7C414u, 0x08A7C408u, "control flow in delay slot"); return;
L_08A7C418:
    rt.unsupported(0x08A7C41Cu, 0x08A7C410u, "control flow in delay slot"); return;
L_08A7C420:
    rt.unsupported(0x08A7C424u, 0x08A7C418u, "control flow in delay slot"); return;
L_08A7C428:
    rt.unsupported(0x08A7C42Cu, 0x08A7C420u, "control flow in delay slot"); return;
L_08A7C430:
    rt.unsupported(0x08A7C434u, 0x08A7C428u, "control flow in delay slot"); return;
L_08A7C438:
    rt.unsupported(0x08A7C43Cu, 0x08A7C430u, "control flow in delay slot"); return;
L_08A7C440:
    rt.unsupported(0x08A7C444u, 0x08A7C438u, "control flow in delay slot"); return;
L_08A7C448:
    rt.unsupported(0x08A7C44Cu, 0x08A7C440u, "control flow in delay slot"); return;
L_08A7C450:
    rt.unsupported(0x08A7C454u, 0x08A7C448u, "control flow in delay slot"); return;
L_08A7C458:
    rt.unsupported(0x08A7C45Cu, 0x08A7C450u, "control flow in delay slot"); return;
L_08A7C460:
    rt.unsupported(0x08A7C464u, 0x08A7C458u, "control flow in delay slot"); return;
L_08A7C468:
    rt.unsupported(0x08A7C46Cu, 0x08A7C460u, "control flow in delay slot"); return;
L_08A7C470:
    rt.unsupported(0x08A7C474u, 0x08A7C468u, "control flow in delay slot"); return;
L_08A7C478:
    rt.unsupported(0x08A7C47Cu, 0x08A7C470u, "control flow in delay slot"); return;
L_08A7C480:
    rt.unsupported(0x08A7C484u, 0x08A7C478u, "control flow in delay slot"); return;
L_08A7C488:
    rt.unsupported(0x08A7C48Cu, 0x08A7C480u, "control flow in delay slot"); return;
L_08A7C490:
    rt.unsupported(0x08A7C494u, 0x08A7C488u, "control flow in delay slot"); return;
L_08A7C498:
    rt.unsupported(0x08A7C49Cu, 0x08A7C490u, "control flow in delay slot"); return;
L_08A7C4A0:
    rt.unsupported(0x08A7C4A4u, 0x08A7C498u, "control flow in delay slot"); return;
L_08A7C4A8:
    rt.unsupported(0x08A7C4ACu, 0x08A7C4A0u, "control flow in delay slot"); return;
L_08A7C4B0:
    rt.unsupported(0x08A7C4B4u, 0x08A7C4A8u, "control flow in delay slot"); return;
L_08A7C4B8:
    rt.unsupported(0x08A7C4BCu, 0x08A7C4B0u, "control flow in delay slot"); return;
L_08A7C4C0:
    rt.unsupported(0x08A7C4C4u, 0x08A7C4B8u, "control flow in delay slot"); return;
L_08A7C4C8:
    rt.unsupported(0x08A7C4CCu, 0x08A7C4C0u, "control flow in delay slot"); return;
L_08A7C4CC:
    rt.unsupported(0x08A7C4D0u, 0x08A7C4C8u, "control flow in delay slot"); return;
L_08A7C4D0:
    rt.unsupported(0x08A7C4D4u, 0x08A7C4C8u, "control flow in delay slot"); return;
L_08A7C4D8:
    rt.unsupported(0x08A7C4DCu, 0x08A7C4D0u, "control flow in delay slot"); return;
L_08A7C4DC:
    rt.unsupported(0x08A7C4E0u, 0x08A7C4D8u, "control flow in delay slot"); return;
L_08A7C4E0:
    rt.unsupported(0x08A7C4E4u, 0x08A7C4D8u, "control flow in delay slot"); return;
L_08A7C4E8:
    rt.unsupported(0x08A7C4ECu, 0x08A7C4E0u, "control flow in delay slot"); return;
L_08A7C4F0:
    rt.unsupported(0x08A7C4F4u, 0x08A7C4E8u, "control flow in delay slot"); return;
L_08A7C4F8:
    rt.unsupported(0x08A7C4FCu, 0x08A7C4F0u, "control flow in delay slot"); return;
L_08A7C500:
    rt.unsupported(0x08A7C504u, 0x08A7C4F8u, "control flow in delay slot"); return;
L_08A7C508:
    rt.unsupported(0x08A7C50Cu, 0x08A7C500u, "control flow in delay slot"); return;
L_08A7C510:
    rt.unsupported(0x08A7C514u, 0x08A7C508u, "control flow in delay slot"); return;
L_08A7C518:
    rt.unsupported(0x08A7C51Cu, 0x08A7C510u, "control flow in delay slot"); return;
L_08A7C520:
    rt.unsupported(0x08A7C524u, 0x08A7C518u, "control flow in delay slot"); return;
L_08A7C528:
    rt.unsupported(0x08A7C52Cu, 0x08A7C520u, "control flow in delay slot"); return;
L_08A7C530:
    rt.unsupported(0x08A7C534u, 0x08A7C528u, "control flow in delay slot"); return;
L_08A7C538:
    rt.unsupported(0x08A7C53Cu, 0x08A7C530u, "control flow in delay slot"); return;
L_08A7C540:
    rt.unsupported(0x08A7C544u, 0x08A7C538u, "control flow in delay slot"); return;
L_08A7C548:
    rt.unsupported(0x08A7C54Cu, 0x08A7C540u, "control flow in delay slot"); return;
L_08A7C550:
    rt.unsupported(0x08A7C554u, 0x08A7C548u, "control flow in delay slot"); return;
L_08A7C558:
    rt.unsupported(0x08A7C55Cu, 0x08A7C550u, "control flow in delay slot"); return;
L_08A7C560:
    rt.unsupported(0x08A7C564u, 0x08A7C558u, "control flow in delay slot"); return;
L_08A7C568:
    rt.unsupported(0x08A7C56Cu, 0x08A7C560u, "control flow in delay slot"); return;
L_08A7C570:
    rt.unsupported(0x08A7C574u, 0x08A7C568u, "control flow in delay slot"); return;
L_08A7C578:
    rt.unsupported(0x08A7C57Cu, 0x08A7C570u, "control flow in delay slot"); return;
L_08A7C580:
    rt.unsupported(0x08A7C584u, 0x08A7C578u, "control flow in delay slot"); return;
L_08A7C588:
    rt.unsupported(0x08A7C58Cu, 0x08A7C580u, "control flow in delay slot"); return;
L_08A7C590:
    rt.unsupported(0x08A7C594u, 0x08A7C588u, "control flow in delay slot"); return;
L_08A7C598:
    rt.unsupported(0x08A7C59Cu, 0x08A7C590u, "control flow in delay slot"); return;
L_08A7C5A0:
    rt.unsupported(0x08A7C5A4u, 0x08A7C598u, "control flow in delay slot"); return;
L_08A7C5A8:
    rt.unsupported(0x08A7C5ACu, 0x08A7C5A0u, "control flow in delay slot"); return;
L_08A7C5B0:
    rt.unsupported(0x08A7C5B4u, 0x08A7C5A8u, "control flow in delay slot"); return;
L_08A7C5B8:
    rt.unsupported(0x08A7C5BCu, 0x08A7C5B0u, "control flow in delay slot"); return;
L_08A7C5C0:
    rt.unsupported(0x08A7C5C4u, 0x08A7C5B8u, "control flow in delay slot"); return;
L_08A7C5C8:
    rt.unsupported(0x08A7C5CCu, 0x08A7C5C0u, "control flow in delay slot"); return;
L_08A7C5D0:
    rt.unsupported(0x08A7C5D4u, 0x08A7C5C8u, "control flow in delay slot"); return;
L_08A7C5D8:
    rt.unsupported(0x08A7C5DCu, 0x08A7C5D0u, "control flow in delay slot"); return;
L_08A7C5E0:
    rt.unsupported(0x08A7C5E4u, 0x08A7C5D8u, "control flow in delay slot"); return;
L_08A7C5E8:
    rt.unsupported(0x08A7C5ECu, 0x08A7C5E0u, "control flow in delay slot"); return;
L_08A7C5F0:
    rt.unsupported(0x08A7C5F4u, 0x08A7C5E8u, "control flow in delay slot"); return;
L_08A7C5F8:
    rt.unsupported(0x08A7C5FCu, 0x08A7C5F0u, "control flow in delay slot"); return;
L_08A7C600:
    rt.unsupported(0x08A7C604u, 0x08A7C5F8u, "control flow in delay slot"); return;
L_08A7C608:
    rt.unsupported(0x08A7C60Cu, 0x08A7C600u, "control flow in delay slot"); return;
L_08A7C64C:
    // nop
    // nop
    goto L_08A7C654;
L_08A7C654:
    // nop
    // nop
    // nop
    goto L_08A7C660;
L_08A7C660:
    // nop
    rt.unsupported(0x08A7C668u, 0x08A40BF0u, "control flow in delay slot"); return;
L_08A7C670:
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u >> 0u);
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
    goto L_08A7C708;
L_08A7C708:
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
    // nop
    ctx.pc = 0x029CACC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C758:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02011840u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C788:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02928AC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C7A4:
    // nop
    ctx.pc = 0x02928890u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C7B8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292B3C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C7D8:
    // nop
    // nop
    ctx.pc = 0x022FDD90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C80C:
    // nop
    ctx.pc = 0x02301AD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C840:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020417F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C888:
    // nop
    // nop
    ctx.pc = 0x02041560u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C890:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BCE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C8C0:
    // nop
    // nop
    ctx.pc = 0x0292BD20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C8CC:
    // nop
    ctx.pc = 0x0292BD40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C8D8:
    // nop
    // nop
    ctx.pc = 0x0209E1A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C8E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0204AFF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C914:
    // nop
    ctx.pc = 0x0292BE00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C920:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BD60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C960:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292BEA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C978:
    // nop
    // nop
    ctx.pc = 0x0204BAA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C998:
    // nop
    // nop
    ctx.pc = 0x0292BE80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C9A0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292C040u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7C9E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02050000u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CA20:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292C760u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CA58:
    // nop
    goto L_08A7CA5C;
L_08A7CA5C:
    // nop
    ctx.pc = 0x02058640u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CA68:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0205BC90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CAA8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0205E510u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CAD0:
    // nop
    // nop
    ctx.pc = 0x0292C020u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CAE8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02061C70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CB28:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292CAD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CB68:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292CC50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CBB0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292F8E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CC38:
    // nop
    goto L_08A7CC3C;
L_08A7CC3C:
    // nop
    // nop
    // nop
    ctx.pc = 0x020914F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CC88:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02091E70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CCC0:
    // nop
    goto L_08A7CCC4;
L_08A7CCC4:
    // nop
    // nop
    // nop
    ctx.pc = 0x02092200u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CCE8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020930A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CD28:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02094400u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CD60:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020946F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CD88:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02094910u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CDB0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02094D20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CDE8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02095010u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CE10:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02095480u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CE48:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02095810u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CE70:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02095A80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CE98:
    // nop
    goto L_08A7CE9C;
L_08A7CE9C:
    // nop
    // nop
    // nop
    ctx.pc = 0x02095E40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CED0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02096280u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CF08:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020966C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CF40:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02096B00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CF78:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0292FB90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7CFF4:
    // nop
    ctx.pc = 0x02302570u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0632(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0632_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_632(Runtime &runtime) {
    runtime.register_generated_unit(632u, 0x08A7C000u, 4096u, &recomp_unit_0632, &recomp_unit_0632_entry);
    runtime.register_function(0x08A7C060u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C0C4u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C0F0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C154u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C1C0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C1DCu, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C1E0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C1ECu, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C210u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C218u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C220u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C228u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C230u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C238u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C240u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C244u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C248u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C250u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C258u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C260u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C268u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C270u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C278u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C280u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C288u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C290u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C298u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C2A0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C2A8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C2B0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C2B8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C2C0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C2C4u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C2C8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C2D0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C2D8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C2E0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C2E8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C2F0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C2F8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C300u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C304u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C308u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C310u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C318u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C320u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C328u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C330u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C338u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C340u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C348u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C34Cu, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C350u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C358u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C360u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C364u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C368u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C370u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C378u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C380u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C388u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C38Cu, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C390u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C398u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C3A0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C3A4u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C3A8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C3B0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C3B8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C3C0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C3C8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C3D0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C3D8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C3E0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C3E8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C3F0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C3F8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C400u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C408u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C410u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C418u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C420u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C428u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C430u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C438u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C440u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C448u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C450u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C458u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C460u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C468u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C470u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C478u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C480u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C488u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C490u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C498u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C4A0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C4A8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C4B0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C4B8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C4C0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C4C8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C4CCu, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C4D0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C4D8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C4DCu, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C4E0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C4E8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C4F0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C4F8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C500u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C508u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C510u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C518u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C520u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C528u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C530u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C538u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C540u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C548u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C550u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C558u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C560u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C568u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C570u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C578u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C580u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C588u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C590u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C598u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C5A0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C5A8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C5B0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C5B8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C5C0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C5C8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C5D0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C5D8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C5E0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C5E8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C5F0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C5F8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C600u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C608u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C64Cu, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C654u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C660u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C670u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C708u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C758u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C788u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C7A4u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C7B8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C7D8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C80Cu, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C840u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C888u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C890u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C8C0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C8CCu, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C8D8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C8E0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C914u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C920u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C960u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C978u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C998u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C9A0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7C9E0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CA20u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CA58u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CA5Cu, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CA68u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CAA8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CAD0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CAE8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CB28u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CB68u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CBB0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CC38u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CC3Cu, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CC88u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CCC0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CCC4u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CCE8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CD28u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CD60u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CD88u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CDB0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CDE8u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CE10u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CE48u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CE70u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CE98u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CE9Cu, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CED0u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CF08u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CF40u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CF78u, &recomp_unit_0632, "recomp_unit_0632");
    runtime.register_function(0x08A7CFF4u, &recomp_unit_0632, "recomp_unit_0632");
}
} // namespace psprecomp
