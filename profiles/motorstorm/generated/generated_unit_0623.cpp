#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0623[1019] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 13, 14, 15, 0, 0, 0, 0, 0, 0, 0, 16, 17, 18, 19, 0, 20, 0, 21, 0,
    22, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0,
    36, 0, 37, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 40, 41, 42, 43, 44, 45, 0, 0, 46, 0, 0, 0, 47, 48, 0, 0,
    49, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    56, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 143, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 161, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0,
    0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0,
    186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 199, 0, 0, 0, 200, 201, 0, 0, 202, 0, 203, 204, 205, 0, 206,
    0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 209, 210, 0, 211, 212, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219,
};
void recomp_unit_0623_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A73000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0623[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A73000;
    case 2u: goto L_08A73014;
    case 3u: goto L_08A7302C;
    case 4u: goto L_08A7306C;
    case 5u: goto L_08A73088;
    case 6u: goto L_08A73098;
    case 7u: goto L_08A730B8;
    case 8u: goto L_08A730CC;
    case 9u: goto L_08A730D0;
    case 10u: goto L_08A730E8;
    case 11u: goto L_08A73124;
    case 12u: goto L_08A73130;
    case 13u: goto L_08A73134;
    case 14u: goto L_08A73138;
    case 15u: goto L_08A7313C;
    case 16u: goto L_08A7315C;
    case 17u: goto L_08A73160;
    case 18u: goto L_08A73164;
    case 19u: goto L_08A73168;
    case 20u: goto L_08A73170;
    case 21u: goto L_08A73178;
    case 22u: goto L_08A73180;
    case 23u: goto L_08A73188;
    case 24u: goto L_08A73194;
    case 25u: goto L_08A731A0;
    case 26u: goto L_08A731AC;
    case 27u: goto L_08A731B8;
    case 28u: goto L_08A731C0;
    case 29u: goto L_08A731C8;
    case 30u: goto L_08A731D0;
    case 31u: goto L_08A731D8;
    case 32u: goto L_08A731E0;
    case 33u: goto L_08A731E8;
    case 34u: goto L_08A731F0;
    case 35u: goto L_08A731F8;
    case 36u: goto L_08A73200;
    case 37u: goto L_08A73208;
    case 38u: goto L_08A7320C;
    case 39u: goto L_08A7323C;
    case 40u: goto L_08A73240;
    case 41u: goto L_08A73244;
    case 42u: goto L_08A73248;
    case 43u: goto L_08A7324C;
    case 44u: goto L_08A73250;
    case 45u: goto L_08A73254;
    case 46u: goto L_08A73260;
    case 47u: goto L_08A73270;
    case 48u: goto L_08A73274;
    case 49u: goto L_08A73280;
    case 50u: goto L_08A73284;
    case 51u: goto L_08A73290;
    case 52u: goto L_08A732AC;
    case 53u: goto L_08A732B4;
    case 54u: goto L_08A732D8;
    case 55u: goto L_08A732EC;
    case 56u: goto L_08A73300;
    case 57u: goto L_08A73304;
    case 58u: goto L_08A73318;
    case 59u: goto L_08A73328;
    case 60u: goto L_08A73340;
    case 61u: goto L_08A73358;
    case 62u: goto L_08A73374;
    case 63u: goto L_08A73388;
    case 64u: goto L_08A73398;
    case 65u: goto L_08A733A4;
    case 66u: goto L_08A733BC;
    case 67u: goto L_08A733D8;
    case 68u: goto L_08A733F8;
    case 69u: goto L_08A7340C;
    case 70u: goto L_08A7341C;
    case 71u: goto L_08A73428;
    case 72u: goto L_08A73440;
    case 73u: goto L_08A73460;
    case 74u: goto L_08A73474;
    case 75u: goto L_08A73490;
    case 76u: goto L_08A734A8;
    case 77u: goto L_08A734C4;
    case 78u: goto L_08A734F4;
    case 79u: goto L_08A73524;
    case 80u: goto L_08A73528;
    case 81u: goto L_08A73548;
    case 82u: goto L_08A73564;
    case 83u: goto L_08A7357C;
    case 84u: goto L_08A73594;
    case 85u: goto L_08A735B8;
    case 86u: goto L_08A735C0;
    case 87u: goto L_08A735D4;
    case 88u: goto L_08A735E4;
    case 89u: goto L_08A735F0;
    case 90u: goto L_08A73610;
    case 91u: goto L_08A73624;
    case 92u: goto L_08A73628;
    case 93u: goto L_08A73638;
    case 94u: goto L_08A73644;
    case 95u: goto L_08A73660;
    case 96u: goto L_08A73678;
    case 97u: goto L_08A73690;
    case 98u: goto L_08A736A8;
    case 99u: goto L_08A736BC;
    case 100u: goto L_08A736D8;
    case 101u: goto L_08A736F4;
    case 102u: goto L_08A73710;
    case 103u: goto L_08A73720;
    case 104u: goto L_08A73734;
    case 105u: goto L_08A73740;
    case 106u: goto L_08A73748;
    case 107u: goto L_08A73750;
    case 108u: goto L_08A73760;
    case 109u: goto L_08A73770;
    case 110u: goto L_08A73788;
    case 111u: goto L_08A7379C;
    case 112u: goto L_08A737BC;
    case 113u: goto L_08A737DC;
    case 114u: goto L_08A737FC;
    case 115u: goto L_08A73814;
    case 116u: goto L_08A7382C;
    case 117u: goto L_08A73844;
    case 118u: goto L_08A7385C;
    case 119u: goto L_08A73870;
    case 120u: goto L_08A73888;
    case 121u: goto L_08A738A0;
    case 122u: goto L_08A738B8;
    case 123u: goto L_08A738D0;
    case 124u: goto L_08A738E4;
    case 125u: goto L_08A738F8;
    case 126u: goto L_08A7390C;
    case 127u: goto L_08A73924;
    case 128u: goto L_08A7393C;
    case 129u: goto L_08A73950;
    case 130u: goto L_08A7395C;
    case 131u: goto L_08A7397C;
    case 132u: goto L_08A73994;
    case 133u: goto L_08A739AC;
    case 134u: goto L_08A739C4;
    case 135u: goto L_08A739E0;
    case 136u: goto L_08A739F8;
    case 137u: goto L_08A73A0C;
    case 138u: goto L_08A73A24;
    case 139u: goto L_08A73A3C;
    case 140u: goto L_08A73A50;
    case 141u: goto L_08A73A60;
    case 142u: goto L_08A73A78;
    case 143u: goto L_08A73A8C;
    case 144u: goto L_08A73A90;
    case 145u: goto L_08A73AA0;
    case 146u: goto L_08A73ABC;
    case 147u: goto L_08A73AD4;
    case 148u: goto L_08A73AF0;
    case 149u: goto L_08A73B04;
    case 150u: goto L_08A73B18;
    case 151u: goto L_08A73B2C;
    case 152u: goto L_08A73B38;
    case 153u: goto L_08A73B44;
    case 154u: goto L_08A73B4C;
    case 155u: goto L_08A73B58;
    case 156u: goto L_08A73B74;
    case 157u: goto L_08A73B94;
    case 158u: goto L_08A73BA8;
    case 159u: goto L_08A73BC4;
    case 160u: goto L_08A73BD8;
    case 161u: goto L_08A73BDC;
    case 162u: goto L_08A73BF0;
    case 163u: goto L_08A73C08;
    case 164u: goto L_08A73C24;
    case 165u: goto L_08A73C40;
    case 166u: goto L_08A73C54;
    case 167u: goto L_08A73C78;
    case 168u: goto L_08A73C98;
    case 169u: goto L_08A73CAC;
    case 170u: goto L_08A73CC8;
    case 171u: goto L_08A73CE0;
    case 172u: goto L_08A73CF0;
    case 173u: goto L_08A73D04;
    case 174u: goto L_08A73D14;
    case 175u: goto L_08A73D20;
    case 176u: goto L_08A73D28;
    case 177u: goto L_08A73D40;
    case 178u: goto L_08A73D64;
    case 179u: goto L_08A73D70;
    case 180u: goto L_08A73D80;
    case 181u: goto L_08A73D9C;
    case 182u: goto L_08A73DAC;
    case 183u: goto L_08A73DBC;
    case 184u: goto L_08A73DD4;
    case 185u: goto L_08A73DF4;
    case 186u: goto L_08A73E00;
    case 187u: goto L_08A73E10;
    case 188u: goto L_08A73E20;
    case 189u: goto L_08A73E28;
    case 190u: goto L_08A73E30;
    case 191u: goto L_08A73E40;
    case 192u: goto L_08A73E48;
    case 193u: goto L_08A73E58;
    case 194u: goto L_08A73E60;
    case 195u: goto L_08A73E7C;
    case 196u: goto L_08A73E94;
    case 197u: goto L_08A73EA8;
    case 198u: goto L_08A73EC0;
    case 199u: goto L_08A73EC4;
    case 200u: goto L_08A73ED4;
    case 201u: goto L_08A73ED8;
    case 202u: goto L_08A73EE4;
    case 203u: goto L_08A73EEC;
    case 204u: goto L_08A73EF0;
    case 205u: goto L_08A73EF4;
    case 206u: goto L_08A73EFC;
    case 207u: goto L_08A73F0C;
    case 208u: goto L_08A73F20;
    case 209u: goto L_08A73F30;
    case 210u: goto L_08A73F34;
    case 211u: goto L_08A73F3C;
    case 212u: goto L_08A73F40;
    case 213u: goto L_08A73F48;
    case 214u: goto L_08A73F50;
    case 215u: goto L_08A73F5C;
    case 216u: goto L_08A73F6C;
    case 217u: goto L_08A73F74;
    case 218u: goto L_08A73F80;
    case 219u: goto L_08A73FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A73000:
    rt.unsupported(0x08A73004u, 0x08A47E70u, "control flow in delay slot"); return;
L_08A73014:
    rt.unsupported(0x08A73018u, 0x08A48374u, "control flow in delay slot"); return;
L_08A7302C:
    rt.unsupported(0x08A73030u, 0x08A48448u, "control flow in delay slot"); return;
L_08A7306C:
    rt.unsupported(0x08A73070u, 0x08A48948u, "control flow in delay slot"); return;
L_08A73088:
    aot_gpr[14] = (aot_gpr[9] + static_cast<std::uint32_t>(25637));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(12848) ? 1u : 0u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<52u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    // nop
    goto L_08A73098;
L_08A73098:
    aot_gpr[14] = (aot_gpr[9] + static_cast<std::uint32_t>(25637));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(12848) ? 1u : 0u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<52u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    // nop
    (void)(0u << 16u);
    aot_gpr[25] = (39322u << 16u);
    aot_gpr[19] = (13107u << 16u);
    rt.unsupported(0x08A730B4u, 0x4F000000u, "unknown not lowered yet"); return;
L_08A730B8:
    rt.unsupported(0x08A730B8u, 0x635F7472u, "vfpu0 not lowered yet"); return;
L_08A730CC:
    (void)(aot_gpr[25] & 28271u);
    goto L_08A730D0;
L_08A730D0:
    aot_gpr[19] = (aot_gpr[17] < static_cast<std::uint32_t>(12334) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[9] ^ 12338u);
    aot_gpr[18] = (aot_gpr[25] | 13616u);
    aot_gpr[16] = (aot_gpr[1] & 13361u);
    // nop
    rt.unsupported(0x08A730E4u, 0x447A0000u, "cop1? not lowered yet"); return;
L_08A730E8:
    ctx.execute_vfpu_vminmax(114u, 116u, 95u, 1u, false);
    rt.unsupported(0x08A730ECu, 0x78657475u, "unknown not lowered yet"); return;
L_08A73124:
    rt.unsupported(0x08A73124u, 0x2054414Eu, "unknown not lowered yet"); return;
L_08A73130:
    aot_gpr[12] = (0u | 0u);
    goto L_08A73134;
L_08A73134:
    rt.unsupported(0x08A73134u, 0x4F525245u, "unknown not lowered yet"); return;
L_08A73138:
    (void)(ctx.lo);
    goto L_08A7313C;
L_08A7313C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<50u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<50u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<50u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<50u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<50u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<50u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    // nop
    aot_gpr[10] = (0u - 0u);
    goto L_08A7315C;
L_08A7315C:
    rt.unsupported(0x08A7315Cu, 0x00000001u, "special? not lowered yet"); return;
L_08A73160:
    (void)(0u >> 8u);
    goto L_08A73164;
L_08A73164:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 12u));
    goto L_08A73168;
L_08A73168:
    rt.unsupported(0x08A73168u, 0x04040404u, "regimm? not lowered yet"); return;
L_08A73170:
    rt.unsupported(0x08A73170u, 0x05050505u, "regimm? not lowered yet"); return;
L_08A73178:
    rt.unsupported(0x08A73178u, 0x06060606u, "regimm? not lowered yet"); return;
L_08A73180:
    rt.unsupported(0x08A73180u, 0x07070707u, "regimm? not lowered yet"); return;
L_08A73188:
    rt.unsupported(0x08A7318Cu, 0x08080808u, "control flow in delay slot"); return;
L_08A73194:
    rt.unsupported(0x08A73198u, 0x09090909u, "control flow in delay slot"); return;
L_08A731A0:
    rt.unsupported(0x08A731A4u, 0x0A0A0A0Au, "control flow in delay slot"); return;
L_08A731AC:
    rt.unsupported(0x08A731B0u, 0x0B0B0B0Bu, "control flow in delay slot"); return;
L_08A731B8:
    rt.unsupported(0x08A731BCu, 0x0C0C0C0Cu, "control flow in delay slot"); return;
L_08A731C0:
    aot_gpr[31] = (0x08A731C8u);
    // nop
    ctx.pc = 0x00303030u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A731C8u) goto L_08A731C8;
    return;
L_08A731C8:
    rt.unsupported(0x08A731CCu, 0x0D0D0D0Du, "control flow in delay slot"); return;
L_08A731D0:
    aot_gpr[31] = (0x08A731D8u);
    rt.unsupported(0x08A731D4u, 0x0000000Du, "special? not lowered yet"); return;
    ctx.pc = 0x04343434u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A731D8u) goto L_08A731D8;
    return;
L_08A731D8:
    rt.unsupported(0x08A731DCu, 0x0E0E0E0Eu, "control flow in delay slot"); return;
L_08A731E0:
    aot_gpr[31] = (0x08A731E8u);
    rt.unsupported(0x08A731E4u, 0x00000E0Eu, "special? not lowered yet"); return;
    ctx.pc = 0x08383838u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A731E8u) goto L_08A731E8;
    return;
L_08A731E8:
    rt.unsupported(0x08A731ECu, 0x0F0F0F0Fu, "control flow in delay slot"); return;
L_08A731F0:
    aot_gpr[31] = (0x08A731F8u);
    rt.memory().memory_barrier();
    ctx.pc = 0x0C3C3C3Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A731F8u) goto L_08A731F8;
    return;
L_08A731F8:
    rt.unsupported(0x08A731FCu, 0x10101010u, "control flow in delay slot"); return;
L_08A73200:
    rt.unsupported(0x08A73204u, 0x10101010u, "control flow in delay slot"); return;
L_08A73208:
    // nop
    goto L_08A7320C;
L_08A7320C:
    ctx.execute_vfpu_vminmax(114u, 116u, 95u, 1u, false);
    rt.unsupported(0x08A73210u, 0x635F6773u, "vfpu0 not lowered yet"); return;
L_08A7323C:
    rt.unsupported(0x08A7323Cu, 0x00000034u, "special? not lowered yet"); return;
L_08A73240:
    rt.unsupported(0x08A73240u, 0x00000035u, "special? not lowered yet"); return;
L_08A73244:
    rt.unsupported(0x08A73244u, 0x00000033u, "special? not lowered yet"); return;
L_08A73248:
    rt.unsupported(0x08A73248u, 0x00000032u, "special? not lowered yet"); return;
L_08A7324C:
    rt.unsupported(0x08A7324Cu, 0x00000030u, "special? not lowered yet"); return;
L_08A73250:
    rt.unsupported(0x08A73250u, 0x00000031u, "special? not lowered yet"); return;
L_08A73254:
    rt.unsupported(0x08A73254u, 0x61666564u, "vfpu0 not lowered yet"); return;
L_08A73260:
    rt.unsupported(0x08A73260u, 0x705F7265u, "unknown not lowered yet"); return;
L_08A73270:
    rt.unsupported(0x08A73270u, 0x0000676Eu, "special? not lowered yet"); return;
L_08A73274:
    rt.unsupported(0x08A73274u, 0x6E6B6E55u, "vfpu3 not lowered yet"); return;
L_08A73280:
    aot_gpr[12] = (0u | 0u);
    goto L_08A73284;
L_08A73284:
    rt.unsupported(0x08A73284u, 0x70736552u, "unknown not lowered yet"); return;
L_08A73290:
    ctx.execute_vfpu_vscl_ct<117u, 114u, 110u, 1u>();
    rt.unsupported(0x08A73294u, 0x72652064u, "unknown not lowered yet"); return;
L_08A732AC:
    rt.unsupported(0x08A732ACu, 0x6E617254u, "vfpu3 not lowered yet"); return;
L_08A732B4:
    rt.unsupported(0x08A732B4u, 0x206E6F69u, "unknown not lowered yet"); return;
L_08A732D8:
    rt.unsupported(0x08A732D8u, 0x694C2074u, "unknown not lowered yet"); return;
L_08A732EC:
    aot_gpr[16] = (aot_gpr[25] & 11827u);
    aot_gpr[16] = (aot_gpr[1] & 12846u);
    aot_gpr[21] = (aot_gpr[17] & 12345u);
    aot_gpr[20] = (aot_gpr[1] & 12599u);
    rt.unsupported(0x08A732FCu, 0x00000030u, "special? not lowered yet"); return;
L_08A73300:
    rt.unsupported(0x08A73300u, 0x73627553u, "unknown not lowered yet"); return;
L_08A73304:
    rt.unsupported(0x08A73304u, 0x70697263u, "unknown not lowered yet"); return;
L_08A73318:
    rt.unsupported(0x08A73318u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73328:
    rt.unsupported(0x08A73328u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73340:
    rt.unsupported(0x08A73340u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73358:
    rt.unsupported(0x08A73358u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73374:
    rt.unsupported(0x08A73374u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73388:
    rt.unsupported(0x08A73388u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73398:
    ctx.execute_vfpu_vscl_ct<110u, 103u, 77u, 1u>();
    rt.unsupported(0x08A7339Cu, 0x67617373u, "vfpu1 not lowered yet"); return;
L_08A733A4:
    rt.unsupported(0x08A733A4u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A733BC:
    rt.unsupported(0x08A733BCu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A733D8:
    rt.unsupported(0x08A733D8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A733F8:
    rt.unsupported(0x08A733F8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A7340C:
    rt.unsupported(0x08A7340Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A7341C:
    rt.unsupported(0x08A7341Cu, 0x6E496E6Fu, "vfpu3 not lowered yet"); return;
L_08A73428:
    rt.unsupported(0x08A73428u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73440:
    rt.unsupported(0x08A73440u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73460:
    rt.unsupported(0x08A73460u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73474:
    rt.unsupported(0x08A73474u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73490:
    rt.unsupported(0x08A73490u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A734A8:
    rt.unsupported(0x08A734A8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A734C4:
    rt.unsupported(0x08A734C4u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A734F4:
    rt.unsupported(0x08A734F4u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73524:
    rt.unsupported(0x08A73524u, 0x0000676Eu, "special? not lowered yet"); return;
L_08A73528:
    rt.unsupported(0x08A73528u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73548:
    rt.unsupported(0x08A73548u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73564:
    rt.unsupported(0x08A73564u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A7357C:
    rt.unsupported(0x08A7357Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73594:
    rt.unsupported(0x08A73594u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A735B8:
    rt.unsupported(0x08A735B8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A735C0:
    rt.unsupported(0x08A735C0u, 0x4F726F72u, "unknown not lowered yet"); return;
L_08A735D4:
    rt.unsupported(0x08A735D4u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A735E4:
    rt.unsupported(0x08A735E4u, 0x6E496E6Fu, "vfpu3 not lowered yet"); return;
L_08A735F0:
    rt.unsupported(0x08A735F0u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73610:
    rt.unsupported(0x08A73610u, 0x4E4B4E55u, "unknown not lowered yet"); return;
L_08A73624:
    rt.memory().memory_barrier();
    goto L_08A73628;
L_08A73628:
    rt.unsupported(0x08A73628u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73638:
    rt.unsupported(0x08A73638u, 0x61466E6Fu, "vfpu0 not lowered yet"); return;
L_08A73644:
    rt.unsupported(0x08A73644u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73660:
    rt.unsupported(0x08A73660u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73678:
    rt.unsupported(0x08A73678u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73690:
    rt.unsupported(0x08A73690u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A736A8:
    rt.unsupported(0x08A736A8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A736BC:
    rt.unsupported(0x08A736BCu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A736D8:
    rt.unsupported(0x08A736D8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A736F4:
    rt.unsupported(0x08A736F4u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73710:
    rt.unsupported(0x08A73710u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73720:
    rt.unsupported(0x08A73720u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73734:
    rt.unsupported(0x08A73734u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73740:
    if (aot_gpr[3] == aot_gpr[20]) {
    rt.unsupported(0x08A73744u, 0x69766972u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8F47Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A73748;
L_08A73748:
    ctx.execute_vfpu_vscl_ct<108u, 101u, 103u, 1u>();
    (void)(0u & 0u);
    goto L_08A73750;
L_08A73750:
    rt.unsupported(0x08A73750u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73760:
    rt.unsupported(0x08A73760u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73770:
    rt.unsupported(0x08A73770u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73788:
    rt.unsupported(0x08A73788u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A7379C:
    rt.unsupported(0x08A7379Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A737BC:
    rt.unsupported(0x08A737BCu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A737DC:
    rt.unsupported(0x08A737DCu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A737FC:
    rt.unsupported(0x08A737FCu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73814:
    rt.unsupported(0x08A73814u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A7382C:
    rt.unsupported(0x08A7382Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73844:
    rt.unsupported(0x08A73844u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A7385C:
    rt.unsupported(0x08A7385Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73870:
    rt.unsupported(0x08A73870u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73888:
    rt.unsupported(0x08A73888u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A738A0:
    rt.unsupported(0x08A738A0u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A738B8:
    rt.unsupported(0x08A738B8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A738D0:
    rt.unsupported(0x08A738D0u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A738E4:
    rt.unsupported(0x08A738E4u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A738F8:
    rt.unsupported(0x08A738F8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A7390C:
    rt.unsupported(0x08A7390Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73924:
    rt.unsupported(0x08A73924u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A7393C:
    rt.unsupported(0x08A7393Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73950:
    rt.unsupported(0x08A73950u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A7395C:
    rt.unsupported(0x08A7395Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A7397C:
    rt.unsupported(0x08A7397Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73994:
    rt.unsupported(0x08A73994u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A739AC:
    rt.unsupported(0x08A739ACu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A739C4:
    rt.unsupported(0x08A739C4u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A739E0:
    rt.unsupported(0x08A739E0u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A739F8:
    rt.unsupported(0x08A739F8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73A0C:
    rt.unsupported(0x08A73A0Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73A24:
    rt.unsupported(0x08A73A24u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73A3C:
    rt.unsupported(0x08A73A3Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73A50:
    rt.unsupported(0x08A73A50u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73A60:
    rt.unsupported(0x08A73A60u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73A78:
    rt.unsupported(0x08A73A78u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73A8C:
    rt.unsupported(0x08A73A8Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73A90:
    rt.unsupported(0x08A73A90u, 0x614D7375u, "vfpu0 not lowered yet"); return;
L_08A73AA0:
    rt.unsupported(0x08A73AA0u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73ABC:
    rt.unsupported(0x08A73ABCu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73AD4:
    rt.unsupported(0x08A73AD4u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73AF0:
    rt.unsupported(0x08A73AF0u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73B04:
    rt.unsupported(0x08A73B04u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73B18:
    rt.unsupported(0x08A73B18u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73B2C:
    rt.unsupported(0x08A73B2Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73B38:
    rt.unsupported(0x08A73B38u, 0x726F5765u, "unknown not lowered yet"); return;
L_08A73B44:
    if (aot_gpr[27] != aot_gpr[25]) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<111u, 1u>(vfpu_d); }
        ctx.pc = 0x08A8C4D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A73B4C;
L_08A73B4C:
    ctx.execute_vfpu_vscl_ct<69u, 120u, 99u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<101u, 1u>(vfpu_d); }
    // nop
    goto L_08A73B58;
L_08A73B58:
    rt.unsupported(0x08A73B58u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73B74:
    rt.unsupported(0x08A73B74u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73B94:
    rt.unsupported(0x08A73B94u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73BA8:
    rt.unsupported(0x08A73BA8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73BC4:
    rt.unsupported(0x08A73BC4u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73BD8:
    rt.unsupported(0x08A73BD8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73BDC:
    ctx.execute_vfpu_compare3(117u, 115u, 84u, 1u, 6u);
    rt.unsupported(0x08A73BE0u, 0x416E656Bu, "unknown not lowered yet"); return;
L_08A73BF0:
    rt.unsupported(0x08A73BF0u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73C08:
    rt.unsupported(0x08A73C08u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73C24:
    rt.unsupported(0x08A73C24u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73C40:
    rt.unsupported(0x08A73C40u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73C54:
    rt.unsupported(0x08A73C54u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73C78:
    rt.unsupported(0x08A73C78u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73C98:
    rt.unsupported(0x08A73C98u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73CAC:
    rt.unsupported(0x08A73CACu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73CC8:
    rt.unsupported(0x08A73CC8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73CE0:
    rt.unsupported(0x08A73CE0u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73CF0:
    rt.unsupported(0x08A73CF0u, 0x74614D6Fu, "unknown not lowered yet"); return;
L_08A73D04:
    rt.unsupported(0x08A73D04u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73D14:
    rt.unsupported(0x08A73D14u, 0x746F4E72u, "unknown not lowered yet"); return;
L_08A73D20:
    rt.unsupported(0x08A73D20u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73D28:
    rt.unsupported(0x08A73D28u, 0x47686374u, "cop1? not lowered yet"); return;
L_08A73D40:
    rt.unsupported(0x08A73D40u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73D64:
    rt.unsupported(0x08A73D64u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73D70:
    rt.unsupported(0x08A73D70u, 0x69724374u, "unknown not lowered yet"); return;
L_08A73D80:
    rt.unsupported(0x08A73D80u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73D9C:
    rt.unsupported(0x08A73D9Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73DAC:
    rt.unsupported(0x08A73DACu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73DBC:
    rt.unsupported(0x08A73DBCu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73DD4:
    rt.unsupported(0x08A73DD4u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73DF4:
    rt.unsupported(0x08A73DF4u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73E00:
    rt.unsupported(0x08A73E00u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73E10:
    rt.unsupported(0x08A73E10u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73E20:
    if (aot_gpr[27] == aot_gpr[14]) {
    rt.unsupported(0x08A73E24u, 0x69636570u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8E3E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A73E28;
L_08A73E28:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<102u, 1u>(vfpu_d); }
    // nop
    goto L_08A73E30;
L_08A73E30:
    rt.unsupported(0x08A73E30u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73E40:
    rt.unsupported(0x08A73E40u, 0x4774736Fu, "cop1? not lowered yet"); return;
L_08A73E48:
    rt.unsupported(0x08A73E48u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A73E58:
    rt.unsupported(0x08A73E58u, 0x72656665u, "unknown not lowered yet"); return;
L_08A73E60:
    rt.unsupported(0x08A73E60u, 0x4E4B4E55u, "unknown not lowered yet"); return;
L_08A73E7C:
    // nop
    rt.unsupported(0x08A73E80u, 0x40800000u, "unknown not lowered yet"); return;
L_08A73E94:
    rt.unsupported(0x08A73E94u, 0x755F7472u, "unknown not lowered yet"); return;
L_08A73EA8:
    (void)(aot_gpr[25] & 28271u);
    aot_gpr[19] = (aot_gpr[17] < static_cast<std::uint32_t>(12334) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[9] ^ 12338u);
    aot_gpr[18] = (aot_gpr[25] | 13616u);
    aot_gpr[16] = (aot_gpr[1] & 13361u);
    // nop
    goto L_08A73EC0;
L_08A73EC0:
    rt.unsupported(0x08A73EC0u, 0x0000003Au, "special? not lowered yet"); return;
L_08A73EC4:
    rt.unsupported(0x08A73EC4u, 0x68636143u, "unknown not lowered yet"); return;
L_08A73ED4:
    rt.unsupported(0x08A73ED4u, 0x004E5355u, "special? not lowered yet"); return;
L_08A73ED8:
    rt.unsupported(0x08A73ED8u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08A73EE4:
    rt.unsupported(0x08A73EE4u, 0x76726553u, "unknown not lowered yet"); return;
L_08A73EEC:
    ctx.lo = 0u;
    goto L_08A73EF0;
L_08A73EF0:
    rt.unsupported(0x08A73EF0u, 0x00545845u, "special? not lowered yet"); return;
L_08A73EF4:
    ctx.execute_vfpu_vscl_ct<68u, 97u, 116u, 1u>();
    // nop
    goto L_08A73EFC;
L_08A73EFC:
    rt.unsupported(0x08A73EFCu, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A73F0C:
    rt.unsupported(0x08A73F0Cu, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A73F20:
    rt.unsupported(0x08A73F20u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A73F30:
    rt.unsupported(0x08A73F30u, 0x00000A0Du, "special? not lowered yet"); return;
L_08A73F34:
    rt.unsupported(0x08A73F34u, 0x70747468u, "unknown not lowered yet"); return;
L_08A73F3C:
    rt.unsupported(0x08A73F3Cu, 0x0000003Du, "special? not lowered yet"); return;
L_08A73F40:
    aot_gpr[24] = (aot_gpr[11] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    aot_gpr[12] = (aot_gpr[3] + aot_gpr[5]);
    goto L_08A73F48;
L_08A73F48:
    rt.unsupported(0x08A73F48u, 0x70747468u, "unknown not lowered yet"); return;
L_08A73F50:
    // nop
    ctx.pc = 0x08342834u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A73F5C:
    rt.unsupported(0x08A73F5Cu, 0x494E4157u, "cop2/vfpu not lowered yet"); return;
L_08A73F6C:
    if (aot_gpr[2] == aot_gpr[14]) {
    ctx.execute_vfpu_compare3(80u, 80u, 67u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0640_entry, 640u, 35u, 0x08A844CCu>(ctx, &aot_mem); return;
    }
    goto L_08A73F74;
L_08A73F74:
    rt.unsupported(0x08A73F74u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08A73F80:
    rt.unsupported(0x08A73F80u, 0x453A733Cu, "cop1? not lowered yet"); return;
L_08A73FE8:
    aot_gpr[19] = (aot_gpr[19] < static_cast<std::uint32_t>(24941) ? 1u : 0u);
    rt.unsupported(0x08A73FECu, 0x736C6D78u, "unknown not lowered yet"); return;
}

void recomp_unit_0623(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0623_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_623(Runtime &runtime) {
    runtime.register_generated_unit(623u, 0x08A73000u, 4096u, &recomp_unit_0623, &recomp_unit_0623_entry);
    runtime.register_function(0x08A73000u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73014u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7302Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7306Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73088u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73098u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A730B8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A730CCu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A730D0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A730E8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73124u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73130u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73134u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73138u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7313Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7315Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73160u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73164u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73168u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73170u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73178u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73180u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73188u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73194u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A731A0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A731ACu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A731B8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A731C0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A731C8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A731D0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A731D8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A731E0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A731E8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A731F0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A731F8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73200u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73208u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7320Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7323Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73240u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73244u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73248u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7324Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73250u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73254u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73260u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73270u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73274u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73280u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73284u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73290u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A732ACu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A732B4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A732D8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A732ECu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73300u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73304u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73318u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73328u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73340u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73358u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73374u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73388u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73398u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A733A4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A733BCu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A733D8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A733F8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7340Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7341Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73428u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73440u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73460u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73474u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73490u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A734A8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A734C4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A734F4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73524u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73528u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73548u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73564u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7357Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73594u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A735B8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A735C0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A735D4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A735E4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A735F0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73610u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73624u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73628u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73638u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73644u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73660u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73678u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73690u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A736A8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A736BCu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A736D8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A736F4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73710u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73720u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73734u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73740u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73748u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73750u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73760u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73770u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73788u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7379Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A737BCu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A737DCu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A737FCu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73814u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7382Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73844u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7385Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73870u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73888u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A738A0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A738B8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A738D0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A738E4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A738F8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7390Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73924u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7393Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73950u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7395Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A7397Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73994u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A739ACu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A739C4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A739E0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A739F8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73A0Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73A24u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73A3Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73A50u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73A60u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73A78u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73A8Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73A90u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73AA0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73ABCu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73AD4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73AF0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73B04u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73B18u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73B2Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73B38u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73B44u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73B4Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73B58u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73B74u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73B94u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73BA8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73BC4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73BD8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73BDCu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73BF0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73C08u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73C24u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73C40u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73C54u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73C78u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73C98u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73CACu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73CC8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73CE0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73CF0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73D04u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73D14u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73D20u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73D28u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73D40u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73D64u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73D70u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73D80u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73D9Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73DACu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73DBCu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73DD4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73DF4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73E00u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73E10u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73E20u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73E28u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73E30u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73E40u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73E48u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73E58u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73E60u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73E7Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73E94u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73EA8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73EC0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73EC4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73ED4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73ED8u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73EE4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73EECu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73EF0u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73EF4u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73EFCu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73F0Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73F20u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73F30u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73F34u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73F3Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73F40u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73F48u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73F50u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73F5Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73F6Cu, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73F74u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73F80u, &recomp_unit_0623, "recomp_unit_0623");
    runtime.register_function(0x08A73FE8u, &recomp_unit_0623, "recomp_unit_0623");
}
} // namespace psprecomp
