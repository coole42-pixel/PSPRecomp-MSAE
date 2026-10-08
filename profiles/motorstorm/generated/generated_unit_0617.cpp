#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0617[990] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0,
    29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0,
    36, 0, 0, 0, 0, 0, 0, 37, 38, 0, 0, 0, 0, 39, 0, 40, 0, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55,
    56, 57, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 62, 63, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73,
    0, 0, 0, 74, 0, 0, 0, 0, 75, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 81, 0, 0, 82, 0, 0, 0, 0, 83, 84, 85, 86, 87, 88, 89, 90, 0, 91, 0, 92, 0, 93, 94, 95, 0, 0, 0, 0, 96,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 99, 0, 0, 0, 0, 100, 0, 101, 0, 0, 102, 103, 0, 104, 105, 0, 0, 106, 0, 107, 0,
    108, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 112, 113, 114, 0, 115, 116, 117, 0, 118, 119, 120, 121, 122, 0, 123, 124, 0, 0, 125, 0, 0,
    0, 126, 127, 128, 0, 129, 0, 0, 0, 130, 0, 0, 131, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 137, 0,
    0, 0, 138, 139, 140, 141, 0, 142, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 160, 0, 161, 0, 162, 163, 0,
    0, 164, 165, 166, 167, 168, 0, 169, 0, 170, 0, 171, 172, 0, 0, 173, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 184,
    0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 195, 0, 0, 0, 0, 196,
};
void recomp_unit_0617_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A6D088u;
        entry_id = (entry_delta < 3960u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0617[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A6D088;
    case 2u: goto L_08A6D098;
    case 3u: goto L_08A6D0A8;
    case 4u: goto L_08A6D0B4;
    case 5u: goto L_08A6D0DC;
    case 6u: goto L_08A6D0E0;
    case 7u: goto L_08A6D108;
    case 8u: goto L_08A6D13C;
    case 9u: goto L_08A6D158;
    case 10u: goto L_08A6D170;
    case 11u: goto L_08A6D180;
    case 12u: goto L_08A6D190;
    case 13u: goto L_08A6D1C0;
    case 14u: goto L_08A6D20C;
    case 15u: goto L_08A6D210;
    case 16u: goto L_08A6D21C;
    case 17u: goto L_08A6D26C;
    case 18u: goto L_08A6D274;
    case 19u: goto L_08A6D284;
    case 20u: goto L_08A6D2E8;
    case 21u: goto L_08A6D318;
    case 22u: goto L_08A6D3BC;
    case 23u: goto L_08A6D3F4;
    case 24u: goto L_08A6D438;
    case 25u: goto L_08A6D458;
    case 26u: goto L_08A6D470;
    case 27u: goto L_08A6D478;
    case 28u: goto L_08A6D480;
    case 29u: goto L_08A6D488;
    case 30u: goto L_08A6D490;
    case 31u: goto L_08A6D498;
    case 32u: goto L_08A6D4A0;
    case 33u: goto L_08A6D4A8;
    case 34u: goto L_08A6D4B0;
    case 35u: goto L_08A6D500;
    case 36u: goto L_08A6D508;
    case 37u: goto L_08A6D524;
    case 38u: goto L_08A6D528;
    case 39u: goto L_08A6D53C;
    case 40u: goto L_08A6D544;
    case 41u: goto L_08A6D54C;
    case 42u: goto L_08A6D550;
    case 43u: goto L_08A6D554;
    case 44u: goto L_08A6D558;
    case 45u: goto L_08A6D55C;
    case 46u: goto L_08A6D560;
    case 47u: goto L_08A6D564;
    case 48u: goto L_08A6D568;
    case 49u: goto L_08A6D56C;
    case 50u: goto L_08A6D570;
    case 51u: goto L_08A6D574;
    case 52u: goto L_08A6D578;
    case 53u: goto L_08A6D57C;
    case 54u: goto L_08A6D580;
    case 55u: goto L_08A6D584;
    case 56u: goto L_08A6D588;
    case 57u: goto L_08A6D58C;
    case 58u: goto L_08A6D590;
    case 59u: goto L_08A6D5D8;
    case 60u: goto L_08A6D5E0;
    case 61u: goto L_08A6D5EC;
    case 62u: goto L_08A6D5F8;
    case 63u: goto L_08A6D5FC;
    case 64u: goto L_08A6D61C;
    case 65u: goto L_08A6D688;
    case 66u: goto L_08A6D690;
    case 67u: goto L_08A6D6A4;
    case 68u: goto L_08A6D6BC;
    case 69u: goto L_08A6D6CC;
    case 70u: goto L_08A6D6DC;
    case 71u: goto L_08A6D6E8;
    case 72u: goto L_08A6D6F4;
    case 73u: goto L_08A6D704;
    case 74u: goto L_08A6D714;
    case 75u: goto L_08A6D728;
    case 76u: goto L_08A6D72C;
    case 77u: goto L_08A6D740;
    case 78u: goto L_08A6D754;
    case 79u: goto L_08A6D75C;
    case 80u: goto L_08A6D790;
    case 81u: goto L_08A6D794;
    case 82u: goto L_08A6D7A0;
    case 83u: goto L_08A6D7B4;
    case 84u: goto L_08A6D7B8;
    case 85u: goto L_08A6D7BC;
    case 86u: goto L_08A6D7C0;
    case 87u: goto L_08A6D7C4;
    case 88u: goto L_08A6D7C8;
    case 89u: goto L_08A6D7CC;
    case 90u: goto L_08A6D7D0;
    case 91u: goto L_08A6D7D8;
    case 92u: goto L_08A6D7E0;
    case 93u: goto L_08A6D7E8;
    case 94u: goto L_08A6D7EC;
    case 95u: goto L_08A6D7F0;
    case 96u: goto L_08A6D804;
    case 97u: goto L_08A6D810;
    case 98u: goto L_08A6D830;
    case 99u: goto L_08A6D834;
    case 100u: goto L_08A6D848;
    case 101u: goto L_08A6D850;
    case 102u: goto L_08A6D85C;
    case 103u: goto L_08A6D860;
    case 104u: goto L_08A6D868;
    case 105u: goto L_08A6D86C;
    case 106u: goto L_08A6D878;
    case 107u: goto L_08A6D880;
    case 108u: goto L_08A6D888;
    case 109u: goto L_08A6D890;
    case 110u: goto L_08A6D898;
    case 111u: goto L_08A6D8AC;
    case 112u: goto L_08A6D8B4;
    case 113u: goto L_08A6D8B8;
    case 114u: goto L_08A6D8BC;
    case 115u: goto L_08A6D8C4;
    case 116u: goto L_08A6D8C8;
    case 117u: goto L_08A6D8CC;
    case 118u: goto L_08A6D8D4;
    case 119u: goto L_08A6D8D8;
    case 120u: goto L_08A6D8DC;
    case 121u: goto L_08A6D8E0;
    case 122u: goto L_08A6D8E4;
    case 123u: goto L_08A6D8EC;
    case 124u: goto L_08A6D8F0;
    case 125u: goto L_08A6D8FC;
    case 126u: goto L_08A6D90C;
    case 127u: goto L_08A6D910;
    case 128u: goto L_08A6D914;
    case 129u: goto L_08A6D91C;
    case 130u: goto L_08A6D92C;
    case 131u: goto L_08A6D938;
    case 132u: goto L_08A6D93C;
    case 133u: goto L_08A6D94C;
    case 134u: goto L_08A6D958;
    case 135u: goto L_08A6D96C;
    case 136u: goto L_08A6D97C;
    case 137u: goto L_08A6D980;
    case 138u: goto L_08A6D990;
    case 139u: goto L_08A6D994;
    case 140u: goto L_08A6D998;
    case 141u: goto L_08A6D99C;
    case 142u: goto L_08A6D9A4;
    case 143u: goto L_08A6D9A8;
    case 144u: goto L_08A6D9B0;
    case 145u: goto L_08A6D9C0;
    case 146u: goto L_08A6DA00;
    case 147u: goto L_08A6DA18;
    case 148u: goto L_08A6DCB8;
    case 149u: goto L_08A6DCDC;
    case 150u: goto L_08A6DD00;
    case 151u: goto L_08A6DD50;
    case 152u: goto L_08A6DD8C;
    case 153u: goto L_08A6DDAC;
    case 154u: goto L_08A6DDC0;
    case 155u: goto L_08A6DDC8;
    case 156u: goto L_08A6DDD0;
    case 157u: goto L_08A6DDD8;
    case 158u: goto L_08A6DDE0;
    case 159u: goto L_08A6DDE8;
    case 160u: goto L_08A6DDEC;
    case 161u: goto L_08A6DDF4;
    case 162u: goto L_08A6DDFC;
    case 163u: goto L_08A6DE00;
    case 164u: goto L_08A6DE0C;
    case 165u: goto L_08A6DE10;
    case 166u: goto L_08A6DE14;
    case 167u: goto L_08A6DE18;
    case 168u: goto L_08A6DE1C;
    case 169u: goto L_08A6DE24;
    case 170u: goto L_08A6DE2C;
    case 171u: goto L_08A6DE34;
    case 172u: goto L_08A6DE38;
    case 173u: goto L_08A6DE44;
    case 174u: goto L_08A6DE48;
    case 175u: goto L_08A6DE50;
    case 176u: goto L_08A6DE90;
    case 177u: goto L_08A6DEA4;
    case 178u: goto L_08A6DEB4;
    case 179u: goto L_08A6DEBC;
    case 180u: goto L_08A6DEC0;
    case 181u: goto L_08A6DEE0;
    case 182u: goto L_08A6DEE8;
    case 183u: goto L_08A6DEF8;
    case 184u: goto L_08A6DF04;
    case 185u: goto L_08A6DF0C;
    case 186u: goto L_08A6DF20;
    case 187u: goto L_08A6DF3C;
    case 188u: goto L_08A6DF44;
    case 189u: goto L_08A6DF54;
    case 190u: goto L_08A6DF70;
    case 191u: goto L_08A6DF88;
    case 192u: goto L_08A6DFB4;
    case 193u: goto L_08A6DFD0;
    case 194u: goto L_08A6DFE4;
    case 195u: goto L_08A6DFE8;
    case 196u: goto L_08A6DFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A6D088:
    rt.unsupported(0x08A6D08Cu, 0x08A73ED4u, "control flow in delay slot"); return;
L_08A6D098:
    rt.unsupported(0x08A6D09Cu, 0x08A73EF0u, "control flow in delay slot"); return;
L_08A6D0A8:
    rt.unsupported(0x08A6D0ACu, 0x08A73F20u, "control flow in delay slot"); return;
L_08A6D0B4:
    rt.unsupported(0x08A6D0B8u, 0x089E42E0u, "control flow in delay slot"); return;
L_08A6D0DC:
    // nop
    goto L_08A6D0E0;
L_08A6D0E0:
    rt.unsupported(0x08A6D0E4u, 0x089E5C24u, "control flow in delay slot"); return;
L_08A6D108:
    rt.unsupported(0x08A6D10Cu, 0x089E65C4u, "control flow in delay slot"); return;
L_08A6D13C:
    rt.unsupported(0x08A6D140u, 0x089E6724u, "control flow in delay slot"); return;
L_08A6D158:
    rt.unsupported(0x08A6D15Cu, 0x089E7558u, "control flow in delay slot"); return;
L_08A6D170:
    rt.unsupported(0x08A6D174u, 0x08A74BD8u, "control flow in delay slot"); return;
L_08A6D180:
    rt.unsupported(0x08A6D184u, 0x08A74C04u, "control flow in delay slot"); return;
L_08A6D190:
    rt.unsupported(0x08A6D194u, 0x08A74C44u, "control flow in delay slot"); return;
L_08A6D1C0:
    rt.unsupported(0x08A6D1C4u, 0x089E7CE8u, "control flow in delay slot"); return;
L_08A6D20C:
    rt.unsupported(0x08A6D210u, 0x08A74CDCu, "control flow in delay slot"); return;
L_08A6D210:
    rt.unsupported(0x08A6D214u, 0x08A74CF4u, "control flow in delay slot"); return;
L_08A6D21C:
    rt.unsupported(0x08A6D220u, 0x08A74D30u, "control flow in delay slot"); return;
L_08A6D26C:
    // nop
    ctx.pc = 0x029D3BA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A6D274:
    rt.unsupported(0x08A6D278u, 0x08A74BD8u, "control flow in delay slot"); return;
L_08A6D284:
    rt.unsupported(0x08A6D288u, 0x089E8754u, "control flow in delay slot"); return;
L_08A6D2E8:
    rt.unsupported(0x08A6D2ECu, 0x089E9230u, "control flow in delay slot"); return;
L_08A6D318:
    rt.unsupported(0x08A6D31Cu, 0x089E9F5Cu, "control flow in delay slot"); return;
L_08A6D3BC:
    rt.unsupported(0x08A6D3C0u, 0x089E9F7Cu, "control flow in delay slot"); return;
L_08A6D3F4:
    rt.unsupported(0x08A6D3F8u, 0x089EA258u, "control flow in delay slot"); return;
L_08A6D438:
    rt.unsupported(0x08A6D43Cu, 0x089EA018u, "control flow in delay slot"); return;
L_08A6D458:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6D464u, 0x7551432Fu, "unknown not lowered yet"); return;
L_08A6D470:
    rt.unsupported(0x08A6D470u, 0x70632E73u, "unknown not lowered yet"); return;
L_08A6D478:
    ctx.execute_vfpu_compare3(38u, 113u, 117u, 1u, 6u);
    rt.unsupported(0x08A6D47Cu, 0x00003B74u, "special? not lowered yet"); return;
L_08A6D480:
    rt.unsupported(0x08A6D480u, 0x706D6126u, "unknown not lowered yet"); return;
L_08A6D488:
    rt.unsupported(0x08A6D488u, 0x61726626u, "vfpu0 not lowered yet"); return;
L_08A6D490:
    aot_gpr[20] = (aot_gpr[27] ^ 27686u);
    // nop
    goto L_08A6D498;
L_08A6D498:
    aot_gpr[20] = (aot_gpr[27] ^ 26406u);
    // nop
    goto L_08A6D4A0;
L_08A6D4A0:
    rt.unsupported(0x08A6D4A0u, 0x61646E26u, "vfpu0 not lowered yet"); return;
L_08A6D4A8:
    rt.unsupported(0x08A6D4A8u, 0x61646D26u, "vfpu0 not lowered yet"); return;
L_08A6D4B0:
    rt.unsupported(0x08A6D4B0u, 0x73626E26u, "unknown not lowered yet"); return;
L_08A6D500:
    aot_gpr[5] = (aot_gpr[1] & 9509u);
    rt.unsupported(0x08A6D504u, 0x00007832u, "special? not lowered yet"); return;
L_08A6D508:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6D514u, 0x7474482Fu, "unknown not lowered yet"); return;
L_08A6D524:
    // nop
    goto L_08A6D528;
L_08A6D528:
    rt.unsupported(0x08A6D528u, 0x676E616Cu, "vfpu1 not lowered yet"); return;
L_08A6D53C:
    if (aot_gpr[9] != aot_gpr[13]) {
    ctx.lo = 0u;
        ctx.pc = 0x08A88ED4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6D544;
L_08A6D544:
    rt.unsupported(0x08A6D544u, 0x472D6E65u, "cop1? not lowered yet"); return;
L_08A6D54C:
    aot_gpr[12] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    goto L_08A6D550;
L_08A6D550:
    aot_gpr[13] = (0u < 0u ? 1u : 0u);
    goto L_08A6D554;
L_08A6D554:
    rt.unsupported(0x08A6D554u, 0x00007469u, "special? not lowered yet"); return;
L_08A6D558:
    aot_gpr[14] = (0u | 0u);
    goto L_08A6D55C;
L_08A6D55C:
    aot_gpr[12] = (0u & 0u);
    goto L_08A6D560;
L_08A6D560:
    aot_gpr[14] = (0u ^ 0u);
    goto L_08A6D564;
L_08A6D564:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A6D568;
L_08A6D568:
    rt.unsupported(0x08A6D568u, 0x00007470u, "special? not lowered yet"); return;
L_08A6D56C:
    rt.unsupported(0x08A6D56Cu, 0x0000687Au, "special? not lowered yet"); return;
L_08A6D570:
    rt.unsupported(0x08A6D570u, 0x00007774u, "special? not lowered yet"); return;
L_08A6D574:
    aot_gpr[13] = (0u ^ 0u);
    goto L_08A6D578;
L_08A6D578:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A6D57C;
L_08A6D57C:
    aot_gpr[12] = (0u & 0u);
    goto L_08A6D580;
L_08A6D580:
    rt.unsupported(0x08A6D580u, 0x00007673u, "special? not lowered yet"); return;
L_08A6D584:
    rt.unsupported(0x08A6D584u, 0x00007572u, "special? not lowered yet"); return;
L_08A6D588:
    rt.unsupported(0x08A6D588u, 0x00006C70u, "special? not lowered yet"); return;
L_08A6D58C:
    rt.unsupported(0x08A6D590u, 0x08A6D53Cu, "control flow in delay slot"); return;
L_08A6D590:
    rt.unsupported(0x08A6D594u, 0x08A6D544u, "control flow in delay slot"); return;
L_08A6D5D8:
    ctx.execute_vfpu_vscl_ct<66u, 97u, 115u, 1u>();
    // nop
    goto L_08A6D5E0;
L_08A6D5E0:
    rt.unsupported(0x08A6D5E0u, 0x425F5653u, "unknown not lowered yet"); return;
L_08A6D5EC:
    rt.unsupported(0x08A6D5ECu, 0x45444944u, "cop1? not lowered yet"); return;
L_08A6D5F8:
    rt.unsupported(0x08A6D5F8u, 0x636F7673u, "vfpu0 not lowered yet"); return;
L_08A6D5FC:
    rt.unsupported(0x08A6D5FCu, 0x6E65696Cu, "vfpu3 not lowered yet"); return;
L_08A6D61C:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6D628u, 0x4256532Fu, "unknown not lowered yet"); return;
L_08A6D688:
    rt.unsupported(0x08A6D688u, 0x63637553u, "vfpu0 not lowered yet"); return;
L_08A6D690:
    rt.unsupported(0x08A6D690u, 0x75716552u, "unknown not lowered yet"); return;
L_08A6D6A4:
    ctx.execute_vfpu_compare3(82u, 101u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6D6ACu, 0x46746F4Eu, "cop1? not lowered yet"); return;
L_08A6D6BC:
    ctx.execute_vfpu_vscl_ct<78u, 97u, 109u, 1u>();
    rt.unsupported(0x08A6D6C0u, 0x6B6F6F4Cu, "unknown not lowered yet"); return;
L_08A6D6CC:
    rt.unsupported(0x08A6D6CCu, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08A6D6DC:
    rt.unsupported(0x08A6D6DCu, 0x74697257u, "unknown not lowered yet"); return;
L_08A6D6E8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A6D6F0u, 0x00000072u, "special? not lowered yet"); return;
L_08A6D6F4:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A6D6F8u, 0x4574756Fu, "cop1? not lowered yet"); return;
L_08A6D704:
    ctx.execute_vfpu_vscl_ct<73u, 110u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<110u, 97u, 1u, 2u>();
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A6D710u, 0x00000072u, "special? not lowered yet"); return;
L_08A6D714:
    rt.unsupported(0x08A6D714u, 0x74726543u, "unknown not lowered yet"); return;
L_08A6D728:
    rt.unsupported(0x08A6D728u, 0x7373654Du, "unknown not lowered yet"); return;
L_08A6D72C:
    rt.unsupported(0x08A6D72Cu, 0x49656761u, "cop2/vfpu not lowered yet"); return;
L_08A6D740:
    rt.unsupported(0x08A6D740u, 0x70736552u, "unknown not lowered yet"); return;
L_08A6D754:
    rt.unsupported(0x08A6D754u, 0x73614C6Bu, "unknown not lowered yet"); return;
L_08A6D75C:
    rt.unsupported(0x08A6D760u, 0x08A6D690u, "control flow in delay slot"); return;
L_08A6D790:
    rt.unsupported(0x08A6D790u, 0x002F2F3Au, "special? not lowered yet"); return;
L_08A6D794:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    goto L_08A6D7A0;
L_08A6D7A0:
    rt.unsupported(0x08A6D7A0u, 0x4952552Fu, "cop2/vfpu not lowered yet"); return;
L_08A6D7B4:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A6D7B8;
L_08A6D7B8:
    rt.unsupported(0x08A6D7B8u, 0x0000003Au, "special? not lowered yet"); return;
L_08A6D7BC:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A6D7C0;
L_08A6D7C0:
    rt.unsupported(0x08A6D7C0u, 0x73257325u, "unknown not lowered yet"); return;
L_08A6D7C4:
    // nop
    goto L_08A6D7C8;
L_08A6D7C8:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[1])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[15]))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A6D7CC;
L_08A6D7CC:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A6D7D0;
L_08A6D7D0:
    ctx.execute_vfpu_vscl_ct<116u, 114u, 117u, 1u>();
    // nop
    goto L_08A6D7D8;
L_08A6D7D8:
    rt.unsupported(0x08A6D7D8u, 0x736C6166u, "unknown not lowered yet"); return;
L_08A6D7E0:
    rt.unsupported(0x08A6D7E0u, 0x20202020u, "unknown not lowered yet"); return;
L_08A6D7E8:
    if (0u == 0u) (void)(0u);
    goto L_08A6D7EC;
L_08A6D7EC:
    // nop
    goto L_08A6D7F0;
L_08A6D7F0:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    if (aot_gpr[10] != aot_gpr[22]) {
    rt.unsupported(0x08A6D800u, 0x74534952u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 19u, 0x08A824BCu>(ctx, &aot_mem); return;
    }
    goto L_08A6D804;
L_08A6D804:
    aot_gpr[5] = (aot_gpr[19] < static_cast<std::uint32_t>(29295) ? 1u : 0u);
    aot_gpr[14] = (aot_gpr[3] - aot_gpr[16]);
    // nop
    goto L_08A6D810;
L_08A6D810:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6D81Cu, 0x4C56532Fu, "unknown not lowered yet"); return;
L_08A6D830:
    aot_gpr[14] = (aot_gpr[1] | aot_gpr[29]);
    goto L_08A6D834;
L_08A6D834:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    ctx.execute_vfpu_compare3(47u, 67u, 67u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<111u, 107u, 105u, 1u>();
    goto L_08A6D848;
L_08A6D848:
    rt.unsupported(0x08A6D848u, 0x7070632Eu, "unknown not lowered yet"); return;
L_08A6D850:
    rt.unsupported(0x08A6D850u, 0x6B6F6F43u, "unknown not lowered yet"); return;
L_08A6D85C:
    rt.unsupported(0x08A6D85Cu, 0x0000203Bu, "special? not lowered yet"); return;
L_08A6D860:
    aot_gpr[29] = (aot_gpr[9] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08A6D864u, 0x00000073u, "special? not lowered yet"); return;
L_08A6D868:
    rt.unsupported(0x08A6D868u, 0x00000A0Du, "special? not lowered yet"); return;
L_08A6D86C:
    aot_gpr[20] = (aot_gpr[11] < static_cast<std::uint32_t>(25939) ? 1u : 0u);
    rt.unsupported(0x08A6D870u, 0x6B6F6F43u, "unknown not lowered yet"); return;
L_08A6D878:
    rt.unsupported(0x08A6D878u, 0x69707865u, "unknown not lowered yet"); return;
L_08A6D880:
    rt.unsupported(0x08A6D880u, 0x616D6F64u, "vfpu0 not lowered yet"); return;
L_08A6D888:
    rt.unsupported(0x08A6D888u, 0x68746170u, "unknown not lowered yet"); return;
L_08A6D890:
    rt.unsupported(0x08A6D890u, 0x75636573u, "unknown not lowered yet"); return;
L_08A6D898:
    aot_gpr[24] = (aot_gpr[11] + static_cast<std::uint32_t>(8998));
    aot_gpr[24] = (aot_gpr[26] ^ 12848u);
    // nop
    aot_gpr[12] = (0u | 0u);
    aot_gpr[12] = (0u | 0u);
    goto L_08A6D8AC;
L_08A6D8AC:
    rt.unsupported(0x08A6D8ACu, 0x223D7325u, "unknown not lowered yet"); return;
L_08A6D8B4:
    rt.unsupported(0x08A6D8B4u, 0x0000223Du, "special? not lowered yet"); return;
L_08A6D8B8:
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6D8B8u, 0x00000022u); return; } }
    goto L_08A6D8BC;
L_08A6D8BC:
    aot_gpr[29] = (aot_gpr[25] + static_cast<std::uint32_t>(29477));
    aot_gpr[14] = (aot_gpr[1] | aot_gpr[7]);
    goto L_08A6D8C4;
L_08A6D8C4:
    rt.unsupported(0x08A6D8C4u, 0x0000273Du, "special? not lowered yet"); return;
L_08A6D8C8:
    (void)(~(0u | 0u));
    goto L_08A6D8CC;
L_08A6D8CC:
    rt.unsupported(0x08A6D8CCu, 0x20202020u, "unknown not lowered yet"); return;
L_08A6D8D4:
    rt.unsupported(0x08A6D8D4u, 0x0073253Cu, "special? not lowered yet"); return;
L_08A6D8D8:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6D8D8u, 0x00000020u); return; } }
    goto L_08A6D8DC;
L_08A6D8DC:
    { const bool signed_ok = ctx.execute_signed_add(5u, 1u, 30u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6D8DCu, 0x003E2F20u); return; } }
    goto L_08A6D8E0;
L_08A6D8E0:
    rt.unsupported(0x08A6D8E0u, 0x0000003Eu, "special? not lowered yet"); return;
L_08A6D8E4:
    rt.unsupported(0x08A6D8E4u, 0x73252F3Cu, "unknown not lowered yet"); return;
L_08A6D8EC:
    if (0u == 0u) (void)(0u);
    goto L_08A6D8F0;
L_08A6D8F0:
    aot_gpr[13] = (aot_gpr[9] < static_cast<std::uint32_t>(8508) ? 1u : 0u);
    aot_gpr[13] = (aot_gpr[9] < static_cast<std::uint32_t>(29477) ? 1u : 0u);
    rt.unsupported(0x08A6D8F8u, 0x0000003Eu, "special? not lowered yet"); return;
L_08A6D8FC:
    rt.unsupported(0x08A6D8FCu, 0x435B213Cu, "unknown not lowered yet"); return;
L_08A6D90C:
    aot_gpr[14] = (0u | 0u);
    goto L_08A6D910;
L_08A6D910:
    // nop
    goto L_08A6D914;
L_08A6D914:
    ctx.execute_vfpu_vminmax(60u, 63u, 120u, 1u, false);
    aot_gpr[4] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A6D91C;
L_08A6D91C:
    rt.unsupported(0x08A6D91Cu, 0x73726576u, "unknown not lowered yet"); return;
L_08A6D92C:
    rt.unsupported(0x08A6D92Cu, 0x73726576u, "unknown not lowered yet"); return;
L_08A6D938:
    { const bool signed_ok = ctx.execute_signed_sub(4u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6D938u, 0x00002022u); return; } }
    goto L_08A6D93C;
L_08A6D93C:
    ctx.execute_vfpu_compare3(101u, 110u, 99u, 1u, 6u);
    rt.unsupported(0x08A6D940u, 0x676E6964u, "vfpu1 not lowered yet"); return;
L_08A6D94C:
    ctx.execute_vfpu_compare3(101u, 110u, 99u, 1u, 6u);
    rt.unsupported(0x08A6D950u, 0x676E6964u, "vfpu1 not lowered yet"); return;
L_08A6D958:
    rt.unsupported(0x08A6D958u, 0x6E617473u, "vfpu3 not lowered yet"); return;
L_08A6D96C:
    rt.unsupported(0x08A6D96Cu, 0x6E617473u, "vfpu3 not lowered yet"); return;
L_08A6D97C:
    rt.unsupported(0x08A6D97Cu, 0x00003E3Fu, "special? not lowered yet"); return;
L_08A6D980:
    aot_gpr[19] = (9532u << 16u);
    // nop
    rt.unsupported(0x08A6D988u, 0x00006272u, "special? not lowered yet"); return;
L_08A6D990:
    rt.unsupported(0x08A6D990u, 0x0000003Cu, "special? not lowered yet"); return;
L_08A6D994:
    rt.unsupported(0x08A6D994u, 0x00002F3Cu, "special? not lowered yet"); return;
L_08A6D998:
    rt.unsupported(0x08A6D998u, 0x435B213Cu, "unknown not lowered yet"); return;
L_08A6D99C:
    rt.unsupported(0x08A6D99Cu, 0x41544144u, "unknown not lowered yet"); return;
L_08A6D9A4:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[1]) * static_cast<std::uint64_t>(aot_gpr[30]); const std::uint64_t result = accumulator + product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A6D9A8;
L_08A6D9A8:
    aot_gpr[13] = (aot_gpr[9] < static_cast<std::uint32_t>(8508) ? 1u : 0u);
    // nop
    goto L_08A6D9B0;
L_08A6D9B0:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[1]) < static_cast<std::int32_t>(aot_gpr[30]) ? aot_gpr[1] : aot_gpr[30]);
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    goto L_08A6D9C0;
L_08A6D9C0:
    rt.unsupported(0x08A6D9C0u, 0x00000001u, "special? not lowered yet"); return;
L_08A6DA00:
    rt.unsupported(0x08A6DA00u, 0x00000001u, "special? not lowered yet"); return;
L_08A6DA18:
    rt.unsupported(0x08A6DA18u, 0x00000001u, "special? not lowered yet"); return;
L_08A6DCB8:
    rt.unsupported(0x08A6DCB8u, 0x00000001u, "special? not lowered yet"); return;
L_08A6DCDC:
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    goto L_08A6DD00;
L_08A6DD00:
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    goto L_08A6DD50;
L_08A6DD50:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(0u << (0u & 31u));
    (void)(0u << (0u & 31u));
    (void)(0u << (0u & 31u));
    goto L_08A6DD8C;
L_08A6DD8C:
    (void)(0u << (0u & 31u));
    (void)(0u << (0u & 31u));
    rt.unsupported(0x08A6DD94u, 0x00000001u, "special? not lowered yet"); return;
L_08A6DDAC:
    rt.unsupported(0x08A6DDACu, 0x00000001u, "special? not lowered yet"); return;
L_08A6DDC0:
    rt.unsupported(0x08A6DDC0u, 0x706D6126u, "unknown not lowered yet"); return;
L_08A6DDC8:
    aot_gpr[20] = (aot_gpr[27] ^ 27686u);
    // nop
    goto L_08A6DDD0;
L_08A6DDD0:
    aot_gpr[20] = (aot_gpr[27] ^ 26406u);
    // nop
    goto L_08A6DDD8;
L_08A6DDD8:
    ctx.execute_vfpu_compare3(38u, 113u, 117u, 1u, 6u);
    rt.unsupported(0x08A6DDDCu, 0x00003B74u, "special? not lowered yet"); return;
L_08A6DDE0:
    ctx.execute_vfpu_compare3(38u, 97u, 112u, 1u, 6u);
    rt.unsupported(0x08A6DDE4u, 0x00003B73u, "special? not lowered yet"); return;
L_08A6DDE8:
    // nop
    goto L_08A6DDEC;
L_08A6DDEC:
    ctx.execute_vfpu_vminmax(60u, 63u, 120u, 1u, false);
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A6DDF4;
L_08A6DDF4:
    aot_gpr[13] = (aot_gpr[9] < static_cast<std::uint32_t>(8508) ? 1u : 0u);
    // nop
    goto L_08A6DDFC;
L_08A6DDFC:
    rt.unsupported(0x08A6DDFCu, 0x0000213Cu, "special? not lowered yet"); return;
L_08A6DE00:
    rt.unsupported(0x08A6DE00u, 0x435B213Cu, "unknown not lowered yet"); return;
L_08A6DE0C:
    (void)(~(0u | 0u));
    goto L_08A6DE10;
L_08A6DE10:
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6DE10u, 0x00000022u); return; } }
    goto L_08A6DE14;
L_08A6DE14:
    rt.unsupported(0x08A6DE14u, 0x00002F3Cu, "special? not lowered yet"); return;
L_08A6DE18:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[1]) < static_cast<std::int32_t>(aot_gpr[30]) ? aot_gpr[1] : aot_gpr[30]);
    goto L_08A6DE1C;
L_08A6DE1C:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[1]) * static_cast<std::uint64_t>(aot_gpr[30]); const std::uint64_t result = accumulator + product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    rt.unsupported(0x08A6DE20u, 0x0000003Cu, "special? not lowered yet"); return;
L_08A6DE24:
    rt.unsupported(0x08A6DE24u, 0x73726576u, "unknown not lowered yet"); return;
L_08A6DE2C:
    ctx.execute_vfpu_compare3(101u, 110u, 99u, 1u, 6u);
    rt.unsupported(0x08A6DE30u, 0x676E6964u, "vfpu1 not lowered yet"); return;
L_08A6DE34:
    // nop
    goto L_08A6DE38;
L_08A6DE38:
    rt.unsupported(0x08A6DE38u, 0x6E617473u, "vfpu3 not lowered yet"); return;
L_08A6DE44:
    rt.unsupported(0x08A6DE44u, 0x0000003Eu, "special? not lowered yet"); return;
L_08A6DE48:
    aot_gpr[6] = (aot_gpr[10] < static_cast<std::uint32_t>(21589) ? 1u : 0u);
    rt.unsupported(0x08A6DE4Cu, 0x00000038u, "special? not lowered yet"); return;
L_08A6DE50:
    aot_gpr[6] = (aot_gpr[2] ^ 21589u);
    // nop
    rt.unsupported(0x08A6DE5Cu, 0x089F91B8u, "control flow in delay slot"); return;
L_08A6DE90:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    if (aot_gpr[10] != aot_gpr[22]) {
    ctx.execute_vfpu_vscl_ct<82u, 73u, 83u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 43u, 0x08A82B5Cu>(ctx, &aot_mem); return;
    }
    goto L_08A6DEA4;
L_08A6DEA4:
    rt.unsupported(0x08A6DEA4u, 0x72657672u, "unknown not lowered yet"); return;
L_08A6DEB4:
    rt.unsupported(0x08A6DEB4u, 0x73256325u, "unknown not lowered yet"); return;
L_08A6DEBC:
    rt.unsupported(0x08A6DEBCu, 0x0000003Du, "special? not lowered yet"); return;
L_08A6DEC0:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    ctx.execute_vfpu_vminmax(47u, 77u, 101u, 1u, false);
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 0u>();
    rt.unsupported(0x08A6DED4u, 0x7070632Eu, "unknown not lowered yet"); return;
L_08A6DEE0:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A6DEE4u, 0x63656863u, "vfpu0 not lowered yet"); return;
        ctx.pc = 0x08A89CA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A6DEE8;
L_08A6DEE8:
    rt.unsupported(0x08A6DEE8u, 0x6E695F6Bu, "vfpu3 not lowered yet"); return;
L_08A6DEF8:
    ctx.execute_vfpu_vscl_ct<78u, 111u, 32u, 1u>();
    rt.unsupported(0x08A6DEFCu, 0x726F7272u, "unknown not lowered yet"); return;
L_08A6DF04:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A6DF08u, 0x00000072u, "special? not lowered yet"); return;
L_08A6DF0C:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08A6DF10u, 0x74206465u, "unknown not lowered yet"); return;
L_08A6DF20:
    ctx.execute_vfpu_compare3(77u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08A6DF24u, 0x61207972u, "vfpu0 not lowered yet"); return;
L_08A6DF3C:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A6DF40u, 0x61702072u, "vfpu0 not lowered yet"); return;
L_08A6DF44:
    rt.unsupported(0x08A6DF44u, 0x6E697372u, "vfpu3 not lowered yet"); return;
L_08A6DF54:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08A6DF58u, 0x74206465u, "unknown not lowered yet"); return;
L_08A6DF70:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 32u, 114u, 1u>();
    rt.unsupported(0x08A6DF78u, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08A6DF88:
    rt.unsupported(0x08A6DF88u, 0x2065756Cu, "unknown not lowered yet"); return;
L_08A6DFB4:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 32u, 114u, 1u>();
    rt.unsupported(0x08A6DFBCu, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08A6DFD0:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 58u, 32u, 1u>();
    rt.unsupported(0x08A6DFD8u, 0x7974706Du, "unknown not lowered yet"); return;
L_08A6DFE4:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    goto L_08A6DFE8;
L_08A6DFE8:
    ctx.execute_vfpu_vscl_ct<114u, 32u, 114u, 1u>();
    rt.unsupported(0x08A6DFECu, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08A6DFFC:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    ctx.pc = 0x08A6E000u; return;
}

void recomp_unit_0617(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0617_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_617(Runtime &runtime) {
    runtime.register_generated_unit(617u, 0x08A6D000u, 4096u, &recomp_unit_0617, &recomp_unit_0617_entry);
    runtime.register_function(0x08A6D088u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D098u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D0A8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D0B4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D0DCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D0E0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D108u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D13Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D158u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D170u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D180u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D190u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D1C0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D20Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D210u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D21Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D26Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D274u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D284u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D2E8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D318u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D3BCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D3F4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D438u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D458u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D470u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D478u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D480u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D488u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D490u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D498u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D4A0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D4A8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D4B0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D500u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D508u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D524u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D528u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D53Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D544u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D54Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D550u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D554u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D558u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D55Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D560u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D564u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D568u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D56Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D570u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D574u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D578u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D57Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D580u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D584u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D588u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D58Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D590u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D5D8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D5E0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D5ECu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D5F8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D5FCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D61Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D688u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D690u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D6A4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D6BCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D6CCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D6DCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D6E8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D6F4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D704u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D714u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D728u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D72Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D740u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D754u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D75Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D790u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D794u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D7A0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D7B4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D7B8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D7BCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D7C0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D7C4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D7C8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D7CCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D7D0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D7D8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D7E0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D7E8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D7ECu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D7F0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D804u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D810u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D830u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D834u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D848u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D850u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D85Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D860u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D868u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D86Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D878u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D880u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D888u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D890u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D898u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8ACu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8B4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8B8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8BCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8C4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8C8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8CCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8D4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8D8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8DCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8E0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8E4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8ECu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8F0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D8FCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D90Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D910u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D914u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D91Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D92Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D938u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D93Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D94Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D958u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D96Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D97Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D980u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D990u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D994u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D998u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D99Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D9A4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D9A8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D9B0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6D9C0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DA00u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DA18u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DCB8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DCDCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DD00u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DD50u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DD8Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DDACu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DDC0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DDC8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DDD0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DDD8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DDE0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DDE8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DDECu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DDF4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DDFCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DE00u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DE0Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DE10u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DE14u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DE18u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DE1Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DE24u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DE2Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DE34u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DE38u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DE44u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DE48u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DE50u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DE90u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DEA4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DEB4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DEBCu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DEC0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DEE0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DEE8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DEF8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DF04u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DF0Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DF20u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DF3Cu, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DF44u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DF54u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DF70u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DF88u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DFB4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DFD0u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DFE4u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DFE8u, &recomp_unit_0617, "recomp_unit_0617");
    runtime.register_function(0x08A6DFFCu, &recomp_unit_0617, "recomp_unit_0617");
}
} // namespace psprecomp
