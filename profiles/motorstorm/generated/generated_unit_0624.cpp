#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0624[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0,
    3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    6, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 33,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 37, 38, 0, 39, 0, 0,
    40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    46, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 53, 0, 54, 55, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61,
    0, 62, 0, 0, 0, 63, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 68, 69, 70, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 83, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 111, 0, 0,
    0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 120, 121, 0, 122,
    123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0,
    142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 146, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0,
    151, 0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 167, 168, 0, 169, 170, 0, 171,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 178, 179, 180,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 0, 186,
};
void recomp_unit_0624_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A74000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0624[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A74000;
    case 2u: goto L_08A74078;
    case 3u: goto L_08A74080;
    case 4u: goto L_08A74088;
    case 5u: goto L_08A74170;
    case 6u: goto L_08A74180;
    case 7u: goto L_08A74194;
    case 8u: goto L_08A741A4;
    case 9u: goto L_08A741AC;
    case 10u: goto L_08A741B4;
    case 11u: goto L_08A741CC;
    case 12u: goto L_08A741EC;
    case 13u: goto L_08A74220;
    case 14u: goto L_08A74260;
    case 15u: goto L_08A7426C;
    case 16u: goto L_08A74310;
    case 17u: goto L_08A7432C;
    case 18u: goto L_08A74334;
    case 19u: goto L_08A74338;
    case 20u: goto L_08A7433C;
    case 21u: goto L_08A7436C;
    case 22u: goto L_08A74378;
    case 23u: goto L_08A7438C;
    case 24u: goto L_08A743A8;
    case 25u: goto L_08A743C0;
    case 26u: goto L_08A743EC;
    case 27u: goto L_08A74430;
    case 28u: goto L_08A74434;
    case 29u: goto L_08A74440;
    case 30u: goto L_08A7444C;
    case 31u: goto L_08A74464;
    case 32u: goto L_08A74478;
    case 33u: goto L_08A7447C;
    case 34u: goto L_08A7448C;
    case 35u: goto L_08A74518;
    case 36u: goto L_08A74564;
    case 37u: goto L_08A74568;
    case 38u: goto L_08A7456C;
    case 39u: goto L_08A74574;
    case 40u: goto L_08A74580;
    case 41u: goto L_08A7458C;
    case 42u: goto L_08A745C0;
    case 43u: goto L_08A745CC;
    case 44u: goto L_08A745D0;
    case 45u: goto L_08A745E4;
    case 46u: goto L_08A74600;
    case 47u: goto L_08A74604;
    case 48u: goto L_08A74634;
    case 49u: goto L_08A74638;
    case 50u: goto L_08A74668;
    case 51u: goto L_08A74698;
    case 52u: goto L_08A746A8;
    case 53u: goto L_08A746AC;
    case 54u: goto L_08A746B4;
    case 55u: goto L_08A746B8;
    case 56u: goto L_08A746C0;
    case 57u: goto L_08A746D4;
    case 58u: goto L_08A746DC;
    case 59u: goto L_08A746E4;
    case 60u: goto L_08A746F4;
    case 61u: goto L_08A746FC;
    case 62u: goto L_08A74704;
    case 63u: goto L_08A74714;
    case 64u: goto L_08A74718;
    case 65u: goto L_08A74730;
    case 66u: goto L_08A74744;
    case 67u: goto L_08A74754;
    case 68u: goto L_08A7475C;
    case 69u: goto L_08A74760;
    case 70u: goto L_08A74764;
    case 71u: goto L_08A74774;
    case 72u: goto L_08A747A4;
    case 73u: goto L_08A747CC;
    case 74u: goto L_08A747FC;
    case 75u: goto L_08A74810;
    case 76u: goto L_08A74824;
    case 77u: goto L_08A74830;
    case 78u: goto L_08A74844;
    case 79u: goto L_08A74864;
    case 80u: goto L_08A74890;
    case 81u: goto L_08A748BC;
    case 82u: goto L_08A748E0;
    case 83u: goto L_08A74904;
    case 84u: goto L_08A74908;
    case 85u: goto L_08A7493C;
    case 86u: goto L_08A7496C;
    case 87u: goto L_08A7499C;
    case 88u: goto L_08A749C4;
    case 89u: goto L_08A749D4;
    case 90u: goto L_08A74A08;
    case 91u: goto L_08A74A38;
    case 92u: goto L_08A74A40;
    case 93u: goto L_08A74A58;
    case 94u: goto L_08A74A60;
    case 95u: goto L_08A74A6C;
    case 96u: goto L_08A74AA4;
    case 97u: goto L_08A74AD4;
    case 98u: goto L_08A74AFC;
    case 99u: goto L_08A74B18;
    case 100u: goto L_08A74B30;
    case 101u: goto L_08A74B58;
    case 102u: goto L_08A74B8C;
    case 103u: goto L_08A74BAC;
    case 104u: goto L_08A74BB4;
    case 105u: goto L_08A74BBC;
    case 106u: goto L_08A74BC8;
    case 107u: goto L_08A74BD0;
    case 108u: goto L_08A74BD8;
    case 109u: goto L_08A74BE0;
    case 110u: goto L_08A74BE8;
    case 111u: goto L_08A74BF4;
    case 112u: goto L_08A74C04;
    case 113u: goto L_08A74C14;
    case 114u: goto L_08A74C24;
    case 115u: goto L_08A74C38;
    case 116u: goto L_08A74C44;
    case 117u: goto L_08A74C50;
    case 118u: goto L_08A74C5C;
    case 119u: goto L_08A74C6C;
    case 120u: goto L_08A74C70;
    case 121u: goto L_08A74C74;
    case 122u: goto L_08A74C7C;
    case 123u: goto L_08A74C80;
    case 124u: goto L_08A74C8C;
    case 125u: goto L_08A74C98;
    case 126u: goto L_08A74CA4;
    case 127u: goto L_08A74CAC;
    case 128u: goto L_08A74CB4;
    case 129u: goto L_08A74CBC;
    case 130u: goto L_08A74CC8;
    case 131u: goto L_08A74CDC;
    case 132u: goto L_08A74CF4;
    case 133u: goto L_08A74D08;
    case 134u: goto L_08A74D14;
    case 135u: goto L_08A74D1C;
    case 136u: goto L_08A74D30;
    case 137u: goto L_08A74D48;
    case 138u: goto L_08A74D4C;
    case 139u: goto L_08A74D60;
    case 140u: goto L_08A74D68;
    case 141u: goto L_08A74D78;
    case 142u: goto L_08A74D80;
    case 143u: goto L_08A74D88;
    case 144u: goto L_08A74DA0;
    case 145u: goto L_08A74DB4;
    case 146u: goto L_08A74DB8;
    case 147u: goto L_08A74DC0;
    case 148u: goto L_08A74DD0;
    case 149u: goto L_08A74DDC;
    case 150u: goto L_08A74DE4;
    case 151u: goto L_08A74E00;
    case 152u: goto L_08A74E08;
    case 153u: goto L_08A74E10;
    case 154u: goto L_08A74E1C;
    case 155u: goto L_08A74E24;
    case 156u: goto L_08A74E2C;
    case 157u: goto L_08A74E40;
    case 158u: goto L_08A74E58;
    case 159u: goto L_08A74E6C;
    case 160u: goto L_08A74E84;
    case 161u: goto L_08A74E8C;
    case 162u: goto L_08A74EA0;
    case 163u: goto L_08A74EA8;
    case 164u: goto L_08A74EBC;
    case 165u: goto L_08A74EC4;
    case 166u: goto L_08A74EDC;
    case 167u: goto L_08A74EE4;
    case 168u: goto L_08A74EE8;
    case 169u: goto L_08A74EF0;
    case 170u: goto L_08A74EF4;
    case 171u: goto L_08A74EFC;
    case 172u: goto L_08A74F08;
    case 173u: goto L_08A74F34;
    case 174u: goto L_08A74F3C;
    case 175u: goto L_08A74F48;
    case 176u: goto L_08A74F58;
    case 177u: goto L_08A74F70;
    case 178u: goto L_08A74F74;
    case 179u: goto L_08A74F78;
    case 180u: goto L_08A74F7C;
    case 181u: goto L_08A74FB0;
    case 182u: goto L_08A74FD0;
    case 183u: goto L_08A74FDC;
    case 184u: goto L_08A74FE8;
    case 185u: goto L_08A74FF0;
    case 186u: goto L_08A74FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A74000:
    rt.unsupported(0x08A74000u, 0x6E69646Fu, "vfpu3 not lowered yet"); return;
L_08A74078:
    if (aot_gpr[2] != aot_gpr[19]) {
    rt.unsupported(0x08A7407Cu, 0x73252F20u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A87DBCu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74080;
L_08A74080:
    if (aot_gpr[2] != aot_gpr[20]) {
    aot_gpr[17] = (aot_gpr[17] < static_cast<std::uint32_t>(12112) ? 1u : 0u);
        ctx.pc = 0x08A86104u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74088;
L_08A74088:
    rt.unsupported(0x08A74088u, 0x480A0D31u, "cop2/vfpu not lowered yet"); return;
L_08A74170:
    rt.unsupported(0x08A74170u, 0x20544547u, "unknown not lowered yet"); return;
L_08A74180:
    ctx.execute_vfpu_compare3(13u, 10u, 72u, 1u, 6u);
    aot_gpr[26] = (aot_gpr[9] + static_cast<std::uint32_t>(29811));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<58u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(13u, 10u, 67u, 1u, 6u);
    rt.unsupported(0x08A74190u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08A74194:
    rt.unsupported(0x08A74194u, 0x6E6F6974u, "vfpu3 not lowered yet"); return;
L_08A741A4:
    if (aot_gpr[27] == aot_gpr[20]) {
    rt.unsupported(0x08A741A8u, 0x75746174u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8D6C4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A741AC;
L_08A741AC:
    ctx.execute_vfpu_vhdp(115u, 73u, 110u, 1u);
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A741B4;
L_08A741B4:
    rt.unsupported(0x08A741B4u, 0x45746547u, "cop1? not lowered yet"); return;
L_08A741CC:
    rt.unsupported(0x08A741CCu, 0x453A733Cu, "cop1? not lowered yet"); return;
L_08A741EC:
    rt.unsupported(0x08A741ECu, 0x7468223Du, "unknown not lowered yet"); return;
L_08A74220:
    rt.unsupported(0x08A74220u, 0x636E653Au, "vfpu0 not lowered yet"); return;
L_08A74260:
    ctx.execute_vfpu_compare3(115u, 58u, 66u, 1u, 6u);
    aot_gpr[31] = (0x08A7426Cu);
    rt.unsupported(0x08A74268u, 0x2020200Au, "unknown not lowered yet"); return;
    ctx.pc = 0x04F9E590u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7426Cu) goto L_08A7426C;
    return;
L_08A7426C:
    aot_gpr[13] = (aot_gpr[19] ^ 15392u);
    rt.unsupported(0x08A74270u, 0x72657551u, "unknown not lowered yet"); return;
L_08A74310:
    rt.unsupported(0x08A74310u, 0x74726F50u, "unknown not lowered yet"); return;
L_08A7432C:
    if (aot_gpr[2] != aot_gpr[19]) {
    rt.unsupported(0x08A74330u, 0x73252F20u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A88070u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74334;
L_08A74334:
    if (aot_gpr[2] != aot_gpr[20]) {
    aot_gpr[17] = (aot_gpr[17] < static_cast<std::uint32_t>(12112) ? 1u : 0u);
        ctx.pc = 0x08A863B8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A7433C;
L_08A74338:
    aot_gpr[17] = (aot_gpr[17] < static_cast<std::uint32_t>(12112) ? 1u : 0u);
    goto L_08A7433C;
L_08A7433C:
    rt.unsupported(0x08A7433Cu, 0x480A0D31u, "cop2/vfpu not lowered yet"); return;
L_08A7436C:
    ctx.execute_vfpu_vcmp_ct<122u, 105u, 1u, 15u>();
    aot_gpr[15] = (aot_gpr[1] | 24940u);
    (void)(static_cast<std::int32_t>(aot_gpr[1]) < 12334 ? 1u : 0u);
    goto L_08A74378;
L_08A74378:
    rt.unsupported(0x08A74378u, 0x706D6F63u, "unknown not lowered yet"); return;
L_08A7438C:
    rt.unsupported(0x08A7438Cu, 0x6957203Bu, "unknown not lowered yet"); return;
L_08A743A8:
    rt.unsupported(0x08A743A8u, 0x78657420u, "unknown not lowered yet"); return;
L_08A743C0:
    rt.unsupported(0x08A743C4u, 0x746E6F43u, "unknown not lowered yet"); return;
    ctx.pc = 0x083488E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A743EC:
    rt.unsupported(0x08A743ECu, 0x63415041u, "vfpu0 not lowered yet"); return;
L_08A74430:
    rt.unsupported(0x08A74430u, 0x00000073u, "special? not lowered yet"); return;
L_08A74434:
    rt.unsupported(0x08A74434u, 0x77654E3Cu, "unknown not lowered yet"); return;
L_08A74440:
    aot_gpr[30] = (29811u << 16u);
    rt.unsupported(0x08A74444u, 0x77654E2Fu, "unknown not lowered yet"); return;
L_08A7444C:
    ctx.execute_vfpu_compare3(116u, 101u, 72u, 1u, 6u);
    aot_gpr[30] = (29811u << 16u);
    rt.unsupported(0x08A74454u, 0x4577654Eu, "cop1? not lowered yet"); return;
L_08A74464:
    aot_gpr[28] = (aot_gpr[25] < static_cast<std::uint32_t>(25637) ? 1u : 0u);
    rt.unsupported(0x08A74468u, 0x4577654Eu, "cop1? not lowered yet"); return;
L_08A74478:
    rt.unsupported(0x08A74478u, 0x77654E3Cu, "unknown not lowered yet"); return;
L_08A7447C:
    rt.unsupported(0x08A7447Cu, 0x746F7250u, "unknown not lowered yet"); return;
L_08A7448C:
    ctx.execute_vfpu_compare3(119u, 80u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(116u, 111u, 99u, 1u, 6u);
    rt.unsupported(0x08A74494u, 0x4E3C3E6Cu, "unknown not lowered yet"); return;
L_08A74518:
    rt.unsupported(0x08A74518u, 0x4543533Eu, "cop1? not lowered yet"); return;
L_08A74564:
    if (aot_gpr[3] == aot_gpr[4]) {
    rt.unsupported(0x08A74568u, 0x4D74726Fu, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8D66Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A7456C;
L_08A74568:
    rt.unsupported(0x08A74568u, 0x4D74726Fu, "unknown not lowered yet"); return;
L_08A7456C:
    rt.unsupported(0x08A7456Cu, 0x69707061u, "unknown not lowered yet"); return;
L_08A74574:
    rt.unsupported(0x08A74574u, 0x45532D4Du, "cop1? not lowered yet"); return;
L_08A74580:
    aot_gpr[16] = (aot_gpr[26] < static_cast<std::uint32_t>(21588) ? 1u : 0u);
    aot_gpr[31] = (0x08A7458Cu);
    rt.unsupported(0x08A74588u, 0x736F480Au, "unknown not lowered yet"); return;
    ctx.pc = 0x04C4B8C4u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7458Cu) goto L_08A7458C;
    return;
L_08A7458C:
    (void)(aot_gpr[9] + static_cast<std::uint32_t>(14964));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<58u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08A74594u, 0x614D0A0Du, "vfpu0 not lowered yet"); return;
L_08A745C0:
    aot_gpr[25] = (aot_gpr[17] < static_cast<std::uint32_t>(13106) ? 1u : 0u);
    aot_gpr[21] = (aot_gpr[17] < static_cast<std::uint32_t>(13618) ? 1u : 0u);
    aot_gpr[21] = (aot_gpr[17] < static_cast<std::uint32_t>(13618) ? 1u : 0u);
    goto L_08A745CC;
L_08A745CC:
    rt.unsupported(0x08A745CCu, 0x00303532u, "special? not lowered yet"); return;
L_08A745D0:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A745DCu, 0x706E7075u, "unknown not lowered yet"); return;
L_08A745E4:
    rt.unsupported(0x08A745E4u, 0x7265733Au, "unknown not lowered yet"); return;
L_08A74600:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    goto L_08A74604;
L_08A74604:
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A7460Cu, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74634:
    aot_gpr[7] = (~(aot_gpr[1] | aot_gpr[17]));
    goto L_08A74638;
L_08A74638:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74644u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74668:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74674u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74698:
    ctx.execute_vfpu_compare3(85u, 110u, 99u, 1u, 6u);
    rt.unsupported(0x08A7469Cu, 0x6769666Eu, "vfpu1 not lowered yet"); return;
L_08A746A8:
    rt.unsupported(0x08A746A8u, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08A746AC:
    rt.unsupported(0x08A746ACu, 0x69746365u, "unknown not lowered yet"); return;
L_08A746B4:
    rt.unsupported(0x08A746B4u, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08A746B8:
    ctx.execute_vfpu_vscl_ct<101u, 99u, 116u, 1u>();
    (void)(0u & 0u);
    goto L_08A746C0;
L_08A746C0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<80u, 1u>(vfpu_d); }
    rt.unsupported(0x08A746C4u, 0x44676E69u, "cop1? not lowered yet"); return;
L_08A746D4:
    rt.unsupported(0x08A746D4u, 0x63736944u, "vfpu0 not lowered yet"); return;
L_08A746DC:
    rt.unsupported(0x08A746DCu, 0x6E697463u, "vfpu3 not lowered yet"); return;
L_08A746E4:
    rt.unsupported(0x08A746E4u, 0x63736944u, "vfpu0 not lowered yet"); return;
L_08A746F4:
    if (aot_gpr[2] == aot_gpr[20]) {
    aot_gpr[15] = (aot_gpr[9] + static_cast<std::uint32_t>(12090));
        ctx.pc = 0x08A89818u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A746FC;
L_08A746FC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<58u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    // nop
    goto L_08A74704;
L_08A74704:
    rt.unsupported(0x08A74704u, 0x4377654Eu, "unknown not lowered yet"); return;
L_08A74714:
    rt.unsupported(0x08A74714u, 0x00737574u, "special? not lowered yet"); return;
L_08A74718:
    rt.unsupported(0x08A74718u, 0x4577654Eu, "cop1? not lowered yet"); return;
L_08A74730:
    rt.unsupported(0x08A74730u, 0x4977654Eu, "cop2/vfpu not lowered yet"); return;
L_08A74744:
    rt.unsupported(0x08A74744u, 0x4977654Eu, "cop2/vfpu not lowered yet"); return;
L_08A74754:
    if (aot_gpr[3] == aot_gpr[23]) {
    ctx.execute_vfpu_compare3(114u, 111u, 116u, 1u, 6u);
        ctx.pc = 0x08A8DC90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A7475C;
L_08A7475C:
    aot_gpr[13] = (aot_gpr[3] - aot_gpr[12]);
    goto L_08A74760;
L_08A74760:
    rt.unsupported(0x08A74760u, 0x00504455u, "special? not lowered yet"); return;
L_08A74764:
    rt.unsupported(0x08A74764u, 0x4577654Eu, "cop1? not lowered yet"); return;
L_08A74774:
    rt.unsupported(0x08A74774u, 0x77654E3Cu, "unknown not lowered yet"); return;
L_08A747A4:
    rt.unsupported(0x08A747A4u, 0x47746547u, "cop1? not lowered yet"); return;
L_08A747CC:
    rt.unsupported(0x08A747CCu, 0x77654E3Cu, "unknown not lowered yet"); return;
L_08A747FC:
    aot_gpr[28] = (aot_gpr[25] < static_cast<std::uint32_t>(25637) ? 1u : 0u);
    rt.unsupported(0x08A74800u, 0x4577654Eu, "cop1? not lowered yet"); return;
L_08A74810:
    rt.unsupported(0x08A74810u, 0x77654E3Cu, "unknown not lowered yet"); return;
L_08A74824:
    ctx.execute_vfpu_compare3(119u, 80u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(116u, 111u, 99u, 1u, 6u);
    aot_gpr[7] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A74830;
L_08A74830:
    ctx.execute_vfpu_vscl_ct<68u, 101u, 108u, 1u>();
    ctx.execute_vfpu_compare3(116u, 101u, 80u, 1u, 6u);
    rt.unsupported(0x08A74838u, 0x614D7472u, "vfpu0 not lowered yet"); return;
L_08A74844:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74850u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74864:
    rt.unsupported(0x08A74864u, 0x70747468u, "unknown not lowered yet"); return;
L_08A74890:
    rt.unsupported(0x08A74890u, 0x70747468u, "unknown not lowered yet"); return;
L_08A748BC:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A748C8u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A748E0:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A748ECu, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74904:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    goto L_08A74908;
L_08A74908:
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74910u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A7493C:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74948u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A7496C:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74978u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A7499C:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A749A8u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A749C4:
    rt.unsupported(0x08A749C4u, 0x6B6E694Cu, "unknown not lowered yet"); return;
L_08A749D4:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A749E0u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74A08:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74A14u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74A38:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    goto L_08A74A40;
L_08A74A40:
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74A44u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74A58:
    if (aot_gpr[26] == aot_gpr[20]) {
    rt.unsupported(0x08A74A5Cu, 0x6B6E694Cu, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8879Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74A60;
L_08A74A60:
    ctx.execute_vfpu_vhdp(67u, 111u, 110u, 1u);
    aot_gpr[26] = (aot_gpr[9] & 26473u);
    // nop
    goto L_08A74A6C;
L_08A74A6C:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74A78u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74AA4:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74AB0u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74AD4:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74AE0u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74AFC:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74B08u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74B18:
    rt.unsupported(0x08A74B18u, 0x434E4157u, "unknown not lowered yet"); return;
L_08A74B30:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74B3Cu, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74B58:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74B64u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74B8C:
    aot_gpr[14] = (aot_gpr[19] ^ 29301u);
    ctx.execute_vfpu_vscl_ct<115u, 99u, 104u, 1u>();
    aot_gpr[19] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A74B98u, 0x706E7075u, "unknown not lowered yet"); return;
L_08A74BAC:
    rt.unsupported(0x08A74BACu, 0x746F6F72u, "unknown not lowered yet"); return;
L_08A74BB4:
    rt.unsupported(0x08A74BB4u, 0x6E6C6D78u, "vfpu3 not lowered yet"); return;
L_08A74BBC:
    rt.unsupported(0x08A74BBCu, 0x63657073u, "vfpu0 not lowered yet"); return;
L_08A74BC8:
    rt.unsupported(0x08A74BC8u, 0x76726573u, "unknown not lowered yet"); return;
L_08A74BD0:
    ctx.execute_vfpu_compare3(109u, 97u, 106u, 1u, 6u);
    rt.unsupported(0x08A74BD4u, 0x00000072u, "special? not lowered yet"); return;
L_08A74BD8:
    ctx.execute_vfpu_compare3(109u, 105u, 110u, 1u, 6u);
    rt.unsupported(0x08A74BDCu, 0x00000072u, "special? not lowered yet"); return;
L_08A74BE0:
    rt.unsupported(0x08A74BE0u, 0x424C5255u, "unknown not lowered yet"); return;
L_08A74BE8:
    rt.unsupported(0x08A74BE8u, 0x69766564u, "unknown not lowered yet"); return;
L_08A74BF4:
    ctx.execute_vfpu_vscl_ct<102u, 114u, 105u, 1u>();
    rt.unsupported(0x08A74BF8u, 0x796C646Eu, "unknown not lowered yet"); return;
L_08A74C04:
    rt.unsupported(0x08A74C04u, 0x756E616Du, "unknown not lowered yet"); return;
L_08A74C14:
    rt.unsupported(0x08A74C14u, 0x756E616Du, "unknown not lowered yet"); return;
L_08A74C24:
    ctx.execute_vfpu_vscl_ct<109u, 111u, 100u, 1u>();
    rt.unsupported(0x08A74C28u, 0x7365446Cu, "unknown not lowered yet"); return;
L_08A74C38:
    ctx.execute_vfpu_vscl_ct<109u, 111u, 100u, 1u>();
    ctx.execute_vfpu_vminmax(108u, 78u, 97u, 1u, false);
    (void)(0u | 0u);
    goto L_08A74C44;
L_08A74C44:
    ctx.execute_vfpu_vscl_ct<109u, 111u, 100u, 1u>();
    ctx.execute_vfpu_vminmax(108u, 78u, 117u, 1u, false);
    { const bool signed_ok = ctx.execute_signed_sub(12u, 3u, 18u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A74C4Cu, 0x00726562u); return; } }
    goto L_08A74C50;
L_08A74C50:
    ctx.execute_vfpu_vscl_ct<109u, 111u, 100u, 1u>();
    rt.unsupported(0x08A74C54u, 0x4C52556Cu, "unknown not lowered yet"); return;
L_08A74C5C:
    rt.unsupported(0x08A74C5Cu, 0x69726573u, "unknown not lowered yet"); return;
L_08A74C6C:
    rt.unsupported(0x08A74C6Cu, 0x004E4455u, "special? not lowered yet"); return;
L_08A74C70:
    rt.unsupported(0x08A74C70u, 0x00435055u, "special? not lowered yet"); return;
L_08A74C74:
    rt.unsupported(0x08A74C74u, 0x76726573u, "unknown not lowered yet"); return;
L_08A74C7C:
    rt.unsupported(0x08A74C7Cu, 0x00657079u, "special? not lowered yet"); return;
L_08A74C80:
    rt.unsupported(0x08A74C80u, 0x76726573u, "unknown not lowered yet"); return;
L_08A74C8C:
    rt.unsupported(0x08A74C8Cu, 0x746E6F63u, "unknown not lowered yet"); return;
L_08A74C98:
    rt.unsupported(0x08A74C98u, 0x6E657665u, "vfpu3 not lowered yet"); return;
L_08A74CA4:
    rt.unsupported(0x08A74CA4u, 0x44504353u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08A74CA8u, 0x004C5255u, "special? not lowered yet"); return;
L_08A74CAC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<99u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<112u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    // nop
    goto L_08A74CB4;
L_08A74CB4:
    rt.unsupported(0x08A74CB4u, 0x69746361u, "unknown not lowered yet"); return;
L_08A74CBC:
    rt.unsupported(0x08A74CBCu, 0x75677261u, "unknown not lowered yet"); return;
L_08A74CC8:
    rt.unsupported(0x08A74CC8u, 0x43746553u, "unknown not lowered yet"); return;
L_08A74CDC:
    rt.unsupported(0x08A74CDCu, 0x43746547u, "unknown not lowered yet"); return;
L_08A74CF4:
    rt.unsupported(0x08A74CF4u, 0x75716552u, "unknown not lowered yet"); return;
L_08A74D08:
    rt.unsupported(0x08A74D08u, 0x75716552u, "unknown not lowered yet"); return;
L_08A74D14:
    rt.unsupported(0x08A74D14u, 0x6974616Eu, "unknown not lowered yet"); return;
L_08A74D1C:
    rt.unsupported(0x08A74D1Cu, 0x63726F46u, "vfpu0 not lowered yet"); return;
L_08A74D30:
    rt.unsupported(0x08A74D30u, 0x41746553u, "unknown not lowered yet"); return;
L_08A74D48:
    rt.unsupported(0x08A74D48u, 0x49746553u, "cop2/vfpu not lowered yet"); return;
L_08A74D4C:
    rt.unsupported(0x08A74D4Cu, 0x44656C64u, "cop1? not lowered yet"); return;
L_08A74D60:
    if (aot_gpr[27] != aot_gpr[20]) {
    rt.unsupported(0x08A74D64u, 0x446E7261u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08A8E2B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74D68;
L_08A74D68:
    ctx.execute_vfpu_compare3(105u, 115u, 99u, 1u, 6u);
    rt.unsupported(0x08A74D6Cu, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08A74D78:
    if (aot_gpr[27] == aot_gpr[20]) {
    rt.unsupported(0x08A74D7Cu, 0x75746174u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8E298u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74D80;
L_08A74D80:
    ctx.execute_vfpu_vhdp(115u, 73u, 110u, 1u);
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A74D88;
L_08A74D88:
    rt.unsupported(0x08A74D88u, 0x41746547u, "unknown not lowered yet"); return;
L_08A74DA0:
    rt.unsupported(0x08A74DA0u, 0x49746547u, "cop2/vfpu not lowered yet"); return;
L_08A74DB4:
    (void)(0u | 0u);
    goto L_08A74DB8;
L_08A74DB8:
    if (aot_gpr[27] != aot_gpr[20]) {
    rt.unsupported(0x08A74DBCu, 0x446E7261u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08A8E2D8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74DC0;
L_08A74DC0:
    ctx.execute_vfpu_compare3(105u, 115u, 99u, 1u, 6u);
    rt.unsupported(0x08A74DC4u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08A74DD0:
    rt.unsupported(0x08A74DD0u, 0x4E746547u, "unknown not lowered yet"); return;
L_08A74DDC:
    rt.unsupported(0x08A74DDCu, 0x73757461u, "unknown not lowered yet"); return;
L_08A74DE4:
    rt.unsupported(0x08A74DE4u, 0x47746547u, "cop1? not lowered yet"); return;
L_08A74E00:
    if (aot_gpr[27] == aot_gpr[20]) {
    rt.unsupported(0x08A74E04u, 0x69636570u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8E320u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74E08;
L_08A74E08:
    if (aot_gpr[3] == aot_gpr[3]) {
    rt.unsupported(0x08A74E0Cu, 0x4D74726Fu, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8F3A4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74E10;
L_08A74E10:
    rt.unsupported(0x08A74E10u, 0x69707061u, "unknown not lowered yet"); return;
L_08A74E1C:
    if (aot_gpr[3] == aot_gpr[4]) {
    rt.unsupported(0x08A74E20u, 0x4D74726Fu, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8DF24u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74E24;
L_08A74E24:
    rt.unsupported(0x08A74E24u, 0x69707061u, "unknown not lowered yet"); return;
L_08A74E2C:
    ctx.execute_vfpu_vscl_ct<68u, 101u, 108u, 1u>();
    ctx.execute_vfpu_compare3(116u, 101u, 80u, 1u, 6u);
    rt.unsupported(0x08A74E34u, 0x614D7472u, "vfpu0 not lowered yet"); return;
L_08A74E40:
    rt.unsupported(0x08A74E40u, 0x45746547u, "cop1? not lowered yet"); return;
L_08A74E58:
    ctx.execute_vfpu_vhdp(67u, 111u, 110u, 1u);
    rt.unsupported(0x08A74E5Cu, 0x72756769u, "unknown not lowered yet"); return;
L_08A74E6C:
    rt.unsupported(0x08A74E6Cu, 0x4C746547u, "unknown not lowered yet"); return;
L_08A74E84:
    if (aot_gpr[3] == aot_gpr[20]) {
    rt.unsupported(0x08A74E88u, 0x6E455050u, "vfpu3 not lowered yet"); return;
        ctx.pc = 0x08A8E3A4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74E8C;
L_08A74E8C:
    rt.unsupported(0x08A74E8Cu, 0x70797263u, "unknown not lowered yet"); return;
L_08A74EA0:
    if (aot_gpr[3] == aot_gpr[20]) {
    ctx.execute_vfpu_compare3(80u, 80u, 67u, 1u, 6u);
        ctx.pc = 0x08A8E3C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74EA8;
L_08A74EA8:
    ctx.execute_vfpu_vscl_ct<109u, 112u, 114u, 1u>();
    ctx.execute_vfpu_compare3(115u, 115u, 105u, 1u, 6u);
    ctx.execute_vfpu_compare3(110u, 80u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(116u, 111u, 99u, 1u, 6u);
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A74EBC;
L_08A74EBC:
    if (aot_gpr[3] == aot_gpr[20]) {
    rt.unsupported(0x08A74EC0u, 0x75415050u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8E3DCu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74EC4;
L_08A74EC4:
    rt.unsupported(0x08A74EC4u, 0x6E656874u, "vfpu3 not lowered yet"); return;
L_08A74EDC:
    if (aot_gpr[11] != aot_gpr[20]) {
    rt.unsupported(0x08A74EE0u, 0x4E726573u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8E3FCu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74EE4;
L_08A74EE4:
    aot_gpr[13] = (aot_gpr[3] + aot_gpr[5]);
    goto L_08A74EE8;
L_08A74EE8:
    if (aot_gpr[3] == aot_gpr[20]) {
    rt.unsupported(0x08A74EECu, 0x77737361u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8E408u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A74EF0;
L_08A74EF0:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[3]) * static_cast<std::uint64_t>(aot_gpr[4]); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A74EF4;
L_08A74EF4:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    // nop
    goto L_08A74EFC;
L_08A74EFC:
    ctx.execute_vfpu_vscl_ct<69u, 110u, 118u, 1u>();
    ctx.execute_vfpu_vscl_ct<108u, 111u, 112u, 1u>();
    // nop
    goto L_08A74F08;
L_08A74F08:
    ctx.execute_vfpu_compare3(101u, 110u, 99u, 1u, 6u);
    rt.unsupported(0x08A74F0Cu, 0x676E6964u, "vfpu1 not lowered yet"); return;
L_08A74F34:
    rt.unsupported(0x08A74F34u, 0x75746572u, "unknown not lowered yet"); return;
L_08A74F3C:
    rt.unsupported(0x08A74F3Cu, 0x70736552u, "unknown not lowered yet"); return;
L_08A74F48:
    rt.unsupported(0x08A74F48u, 0x73507472u, "unknown not lowered yet"); return;
L_08A74F58:
    rt.unsupported(0x08A74F58u, 0x73507472u, "unknown not lowered yet"); return;
L_08A74F70:
    rt.unsupported(0x08A74F70u, 0x00000041u, "special? not lowered yet"); return;
L_08A74F74:
    aot_gpr[8] = (0u >> 9u);
    goto L_08A74F78;
L_08A74F78:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 13u));
    goto L_08A74F7C;
L_08A74F7C:
    rt.unsupported(0x08A74F7Cu, 0x44444444u, "unsupported CFC1 control register"); return;
    // nop
    aot_gpr[9] = (4058u << 16u);
    aot_gpr[2] = (aot_gpr[29] & 8552u);
    rt.unsupported(0x08A74F8Cu, 0x7149F2CAu, "unknown not lowered yet"); return;
L_08A74FB0:
    aot_gpr[18] = (18725u << 16u);
    aot_gpr[10] = (43691u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08A74FCCu, 0x7149F2CAu, "unknown not lowered yet"); return;
L_08A74FD0:
    rt.unsupported(0x08A74FD0u, 0x736F6361u, "unknown not lowered yet"); return;
L_08A74FDC:
    rt.unsupported(0x08A74FDCu, 0x6E697361u, "vfpu3 not lowered yet"); return;
L_08A74FE8:
    rt.unsupported(0x08A74FE8u, 0x6E617461u, "vfpu3 not lowered yet"); return;
L_08A74FF0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<102u, 1u>(vfpu_d); }
    (void)(0u ^ 0u);
    goto L_08A74FF8;
L_08A74FF8:
    ctx.execute_vfpu_vhdp(112u, 111u, 119u, 1u);
    // nop
    ctx.pc = 0x08A75000u; return;
}

void recomp_unit_0624(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0624_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_624(Runtime &runtime) {
    runtime.register_generated_unit(624u, 0x08A74000u, 4096u, &recomp_unit_0624, &recomp_unit_0624_entry);
    runtime.register_function(0x08A74000u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74078u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74080u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74088u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74170u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74180u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74194u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A741A4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A741ACu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A741B4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A741CCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A741ECu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74220u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74260u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A7426Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74310u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A7432Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74334u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74338u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A7433Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A7436Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74378u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A7438Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A743A8u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A743C0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A743ECu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74430u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74434u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74440u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A7444Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74464u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74478u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A7447Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A7448Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74518u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74564u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74568u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A7456Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74574u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74580u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A7458Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A745C0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A745CCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A745D0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A745E4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74600u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74604u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74634u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74638u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74668u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74698u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A746A8u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A746ACu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A746B4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A746B8u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A746C0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A746D4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A746DCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A746E4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A746F4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A746FCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74704u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74714u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74718u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74730u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74744u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74754u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A7475Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74760u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74764u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74774u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A747A4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A747CCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A747FCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74810u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74824u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74830u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74844u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74864u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74890u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A748BCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A748E0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74904u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74908u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A7493Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A7496Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A7499Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A749C4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A749D4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74A08u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74A38u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74A40u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74A58u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74A60u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74A6Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74AA4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74AD4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74AFCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74B18u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74B30u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74B58u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74B8Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74BACu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74BB4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74BBCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74BC8u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74BD0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74BD8u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74BE0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74BE8u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74BF4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74C04u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74C14u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74C24u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74C38u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74C44u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74C50u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74C5Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74C6Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74C70u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74C74u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74C7Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74C80u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74C8Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74C98u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74CA4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74CACu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74CB4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74CBCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74CC8u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74CDCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74CF4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74D08u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74D14u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74D1Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74D30u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74D48u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74D4Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74D60u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74D68u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74D78u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74D80u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74D88u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74DA0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74DB4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74DB8u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74DC0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74DD0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74DDCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74DE4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74E00u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74E08u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74E10u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74E1Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74E24u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74E2Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74E40u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74E58u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74E6Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74E84u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74E8Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74EA0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74EA8u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74EBCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74EC4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74EDCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74EE4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74EE8u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74EF0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74EF4u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74EFCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74F08u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74F34u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74F3Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74F48u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74F58u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74F70u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74F74u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74F78u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74F7Cu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74FB0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74FD0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74FDCu, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74FE8u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74FF0u, &recomp_unit_0624, "recomp_unit_0624");
    runtime.register_function(0x08A74FF8u, &recomp_unit_0624, "recomp_unit_0624");
}
} // namespace psprecomp
