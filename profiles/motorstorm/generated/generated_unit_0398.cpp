#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0398[1022] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 14, 0, 0, 0, 0,
    0, 15, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 28, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 0, 30, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 35, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 43, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0,
    49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 57, 0,
    0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 65, 0,
    0, 0, 66, 0, 67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 71, 72, 0, 0, 73, 0, 74, 0, 75, 0, 0, 76, 0, 0, 77, 0, 78, 0,
    0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 88,
    0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 100,
    0, 101, 0, 0, 102, 103, 0, 104, 105, 0, 0, 0, 106, 107, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 123, 124, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0, 0, 129, 0, 130, 131, 0,
    0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0,
    145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 151, 0, 0,
    152, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162,
    0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180,
    181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0,
    199, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213,
};
void recomp_unit_0398_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08992004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0398[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08992004;
    case 2u: goto L_08992008;
    case 3u: goto L_08992050;
    case 4u: goto L_08992064;
    case 5u: goto L_08992068;
    case 6u: goto L_08992098;
    case 7u: goto L_089920A4;
    case 8u: goto L_089920B0;
    case 9u: goto L_089920FC;
    case 10u: goto L_08992104;
    case 11u: goto L_08992130;
    case 12u: goto L_08992134;
    case 13u: goto L_0899216C;
    case 14u: goto L_08992170;
    case 15u: goto L_08992188;
    case 16u: goto L_0899218C;
    case 17u: goto L_089921BC;
    case 18u: goto L_089921C4;
    case 19u: goto L_089921FC;
    case 20u: goto L_08992200;
    case 21u: goto L_08992238;
    case 22u: goto L_08992240;
    case 23u: goto L_08992298;
    case 24u: goto L_089922B4;
    case 25u: goto L_089922C0;
    case 26u: goto L_089922D0;
    case 27u: goto L_089922DC;
    case 28u: goto L_089922E0;
    case 29u: goto L_08992308;
    case 30u: goto L_08992314;
    case 31u: goto L_08992318;
    case 32u: goto L_08992320;
    case 33u: goto L_0899232C;
    case 34u: goto L_08992340;
    case 35u: goto L_08992344;
    case 36u: goto L_0899234C;
    case 37u: goto L_08992358;
    case 38u: goto L_089923D8;
    case 39u: goto L_089923E4;
    case 40u: goto L_089923F4;
    case 41u: goto L_08992418;
    case 42u: goto L_08992428;
    case 43u: goto L_0899242C;
    case 44u: goto L_08992430;
    case 45u: goto L_08992458;
    case 46u: goto L_08992460;
    case 47u: goto L_0899246C;
    case 48u: goto L_08992478;
    case 49u: goto L_08992484;
    case 50u: goto L_08992490;
    case 51u: goto L_0899249C;
    case 52u: goto L_089924A8;
    case 53u: goto L_089924B0;
    case 54u: goto L_089924C4;
    case 55u: goto L_089924E8;
    case 56u: goto L_089924F8;
    case 57u: goto L_089924FC;
    case 58u: goto L_08992508;
    case 59u: goto L_08992514;
    case 60u: goto L_08992520;
    case 61u: goto L_08992534;
    case 62u: goto L_08992544;
    case 63u: goto L_0899256C;
    case 64u: goto L_08992578;
    case 65u: goto L_0899257C;
    case 66u: goto L_0899258C;
    case 67u: goto L_08992594;
    case 68u: goto L_089925A0;
    case 69u: goto L_089925A8;
    case 70u: goto L_089925B4;
    case 71u: goto L_089925BC;
    case 72u: goto L_089925C0;
    case 73u: goto L_089925CC;
    case 74u: goto L_089925D4;
    case 75u: goto L_089925DC;
    case 76u: goto L_089925E8;
    case 77u: goto L_089925F4;
    case 78u: goto L_089925FC;
    case 79u: goto L_0899260C;
    case 80u: goto L_08992620;
    case 81u: goto L_08992628;
    case 82u: goto L_0899263C;
    case 83u: goto L_08992644;
    case 84u: goto L_0899264C;
    case 85u: goto L_08992664;
    case 86u: goto L_0899266C;
    case 87u: goto L_08992674;
    case 88u: goto L_08992680;
    case 89u: goto L_08992690;
    case 90u: goto L_08992698;
    case 91u: goto L_089926A0;
    case 92u: goto L_089926B0;
    case 93u: goto L_089926BC;
    case 94u: goto L_089926C8;
    case 95u: goto L_089926D0;
    case 96u: goto L_089926DC;
    case 97u: goto L_089926E4;
    case 98u: goto L_089926EC;
    case 99u: goto L_089926F4;
    case 100u: goto L_08992700;
    case 101u: goto L_08992708;
    case 102u: goto L_08992714;
    case 103u: goto L_08992718;
    case 104u: goto L_08992720;
    case 105u: goto L_08992724;
    case 106u: goto L_08992734;
    case 107u: goto L_08992738;
    case 108u: goto L_08992740;
    case 109u: goto L_0899274C;
    case 110u: goto L_08992754;
    case 111u: goto L_0899276C;
    case 112u: goto L_08992774;
    case 113u: goto L_0899277C;
    case 114u: goto L_089927A4;
    case 115u: goto L_089927C8;
    case 116u: goto L_089927D0;
    case 117u: goto L_089927DC;
    case 118u: goto L_089927E4;
    case 119u: goto L_089927EC;
    case 120u: goto L_08992810;
    case 121u: goto L_08992818;
    case 122u: goto L_08992824;
    case 123u: goto L_0899282C;
    case 124u: goto L_08992830;
    case 125u: goto L_08992848;
    case 126u: goto L_08992850;
    case 127u: goto L_08992858;
    case 128u: goto L_08992860;
    case 129u: goto L_08992870;
    case 130u: goto L_08992878;
    case 131u: goto L_0899287C;
    case 132u: goto L_0899288C;
    case 133u: goto L_0899289C;
    case 134u: goto L_089928B8;
    case 135u: goto L_089928CC;
    case 136u: goto L_089928E4;
    case 137u: goto L_0899290C;
    case 138u: goto L_08992914;
    case 139u: goto L_08992934;
    case 140u: goto L_0899293C;
    case 141u: goto L_08992944;
    case 142u: goto L_08992958;
    case 143u: goto L_08992974;
    case 144u: goto L_0899297C;
    case 145u: goto L_08992984;
    case 146u: goto L_089929A0;
    case 147u: goto L_089929C0;
    case 148u: goto L_089929D8;
    case 149u: goto L_089929E8;
    case 150u: goto L_089929F4;
    case 151u: goto L_089929F8;
    case 152u: goto L_08992A04;
    case 153u: goto L_08992A0C;
    case 154u: goto L_08992A14;
    case 155u: goto L_08992A20;
    case 156u: goto L_08992A28;
    case 157u: goto L_08992A44;
    case 158u: goto L_08992A4C;
    case 159u: goto L_08992A58;
    case 160u: goto L_08992A68;
    case 161u: goto L_08992A70;
    case 162u: goto L_08992A80;
    case 163u: goto L_08992A88;
    case 164u: goto L_08992AA0;
    case 165u: goto L_08992AA8;
    case 166u: goto L_08992AB0;
    case 167u: goto L_08992AC0;
    case 168u: goto L_08992AD8;
    case 169u: goto L_08992AE0;
    case 170u: goto L_08992AE8;
    case 171u: goto L_08992B00;
    case 172u: goto L_08992B1C;
    case 173u: goto L_08992B24;
    case 174u: goto L_08992B84;
    case 175u: goto L_08992BBC;
    case 176u: goto L_08992BC4;
    case 177u: goto L_08992BCC;
    case 178u: goto L_08992BE8;
    case 179u: goto L_08992BF0;
    case 180u: goto L_08992C00;
    case 181u: goto L_08992C04;
    case 182u: goto L_08992C14;
    case 183u: goto L_08992C24;
    case 184u: goto L_08992C2C;
    case 185u: goto L_08992C80;
    case 186u: goto L_08992C98;
    case 187u: goto L_08992CD0;
    case 188u: goto L_08992CE0;
    case 189u: goto L_08992D18;
    case 190u: goto L_08992D20;
    case 191u: goto L_08992DB0;
    case 192u: goto L_08992DB8;
    case 193u: goto L_08992DC0;
    case 194u: goto L_08992DE4;
    case 195u: goto L_08992E10;
    case 196u: goto L_08992E40;
    case 197u: goto L_08992E74;
    case 198u: goto L_08992E7C;
    case 199u: goto L_08992E84;
    case 200u: goto L_08992E8C;
    case 201u: goto L_08992E94;
    case 202u: goto L_08992E9C;
    case 203u: goto L_08992EB4;
    case 204u: goto L_08992EE4;
    case 205u: goto L_08992EEC;
    case 206u: goto L_08992F08;
    case 207u: goto L_08992F38;
    case 208u: goto L_08992F54;
    case 209u: goto L_08992F6C;
    case 210u: goto L_08992F88;
    case 211u: goto L_08992FB0;
    case 212u: goto L_08992FCC;
    case 213u: goto L_08992FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08992004:
    rt.unsupported(0x08992004u, 0x000001CDu, "special? not lowered yet"); return;
L_08992008:
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(15144)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(15144), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[18]));
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    aot_gpr[3] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[3] & 65535u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_08992130;
      }
      goto L_08992050;
    }
L_08992050:
    aot_gpr[21] = (aot_gpr[30] + static_cast<std::uint32_t>(32));
    aot_gpr[16] = (aot_gpr[30] + static_cast<std::uint32_t>(60));
    aot_gpr[18] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    aot_gpr[17] = (aot_gpr[30] + static_cast<std::uint32_t>(88));
    goto L_08992068;
L_08992064:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(160)));
    goto L_08992068;
L_08992068:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(15208)));
    aot_gpr[8] = (aot_gpr[7] - aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[30] + static_cast<std::uint32_t>(52));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-25));
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[8] ? 1u : 0u);
    if (aot_gpr[3] != 0u) aot_gpr[8] = (aot_gpr[2]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08992098u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x08992098u) goto L_08992098;
    return;
L_08992098:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089920A4u);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 214u, 0x08991E40u>(ctx, &aot_mem) && ctx.pc == 0x089920A4u) goto L_089920A4;
    return;
L_089920A4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089920B0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089920B0u) goto L_089920B0;
    return;
L_089920B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(14)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[19] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(20));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(22));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[23] + 0u);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(104), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(152), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(156), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(92), aot_gpr[7]);
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x089920FCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(96), aot_gpr[21]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089920FCu) goto L_089920FC;
    return;
L_089920FC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08992238;
      }
      goto L_08992104;
    }
L_08992104:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(18)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(14)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_08992064;
      }
      goto L_08992130;
    }
L_08992130:
    aot_gpr[3] = (0u + 0u);
    goto L_08992134;
L_08992134:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899216C:
    aot_gpr[2] = (2217u << 16u);
    goto L_08992170;
L_08992170:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(160)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15208)));
    aot_gpr[3] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 236u, 0x08991FF0u>(ctx, &aot_mem); return;
      }
      goto L_08992188;
    }
L_08992188:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_0899218C;
L_0899218C:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(152), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[23] + 0u);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    aot_gpr[4] = (aot_gpr[30] + static_cast<std::uint32_t>(88));
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[18]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(88), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(92), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(156), aot_gpr[2]);
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x089921BCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089921BCu) goto L_089921BC;
    return;
L_089921BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08992130;
      }
      goto L_089921C4;
    }
L_089921C4:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089921FC:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_08992200;
L_08992200:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992238:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08992134;
L_08992240:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-18604));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-18604)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08992430;
      }
      goto L_08992298;
    }
L_08992298:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[21] = (aot_gpr[7] + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089922B4u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089922B4u) goto L_089922B4;
    return;
L_089922B4:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089922C0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 214u, 0x08991E40u>(ctx, &aot_mem) && ctx.pc == 0x089922C0u) goto L_089922C0;
    return;
L_089922C0:
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089922D0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089922D0u) goto L_089922D0;
    return;
L_089922D0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(15204)));
    if (aot_gpr[8] == 0u) {
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(15204));
        goto L_089925CC;
    }
    goto L_089922DC;
L_089922DC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089922E0;
L_089922E0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(21)));
    aot_gpr[3] = (aot_gpr[8] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    goto L_08992320;
L_08992308:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[17] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28)));
        goto L_08992458;
    }
    goto L_08992314;
L_08992314:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08992318;
L_08992318:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08992340;
      }
      goto L_08992320;
    }
L_08992320:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_08992308;
      }
      goto L_0899232C;
    }
L_0899232C:
    aot_gpr[2] = (aot_gpr[5] ^ aot_gpr[7]);
    if (aot_gpr[2] == 0u) aot_gpr[5] = (aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08992320;
      }
      goto L_08992340;
    }
L_08992340:
    aot_gpr[16] = (0u + 0u);
    goto L_08992344;
L_08992344:
    if (aot_gpr[16] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_089924B0;
    }
    goto L_0899234C;
L_0899234C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[3] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_08992428;
      }
      goto L_08992358;
    }
L_08992358:
    aot_gpr[2] = (aot_gpr[5] << 4u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[16] = (aot_gpr[2] + aot_gpr[8]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(21)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x089923D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089923D8u) goto L_089923D8;
    return;
L_089923D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089925F4;
      }
      goto L_089923E4;
    }
L_089923E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(22)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089923F4u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089923F4u) goto L_089923F4;
    return;
L_089923F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[31] = (0x08992418u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    goto L_089927E4;
L_08992418:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_089924FC;
    }
    goto L_08992428;
L_08992428:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(22)));
    goto L_0899242C;
L_0899242C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    goto L_08992430;
L_08992430:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992458:
    if (aot_gpr[18] != aot_gpr[2]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08992318;
    }
    goto L_08992460;
L_08992460:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[19] != aot_gpr[2]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08992318;
    }
    goto L_0899246C;
L_0899246C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] != aot_gpr[9]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08992318;
    }
    goto L_08992478;
L_08992478:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] != aot_gpr[10]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08992318;
    }
    goto L_08992484;
L_08992484:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[2] != aot_gpr[11]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08992318;
    }
    goto L_08992490;
L_08992490:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(44)));
    if (aot_gpr[2] != aot_gpr[12]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08992318;
    }
    goto L_0899249C;
L_0899249C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(45)));
    if (aot_gpr[2] != aot_gpr[13]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08992318;
    }
    goto L_089924A8;
L_089924A8:
    // nop
    goto L_08992344;
L_089924B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(22)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089924C4u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089924C4u) goto L_089924C4;
    return;
L_089924C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[31] = (0x089924E8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    goto L_089927E4;
L_089924E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(22)));
      if (branch_taken) {
          goto L_0899242C;
      }
      goto L_089924F8;
    }
L_089924F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_089924FC;
L_089924FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(45)));
    aot_gpr[31] = (0x08992508u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 146u, 0x0899197Cu>(ctx, &aot_mem) && ctx.pc == 0x08992508u) goto L_08992508;
    return;
L_08992508:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089925A0;
      }
      goto L_08992514;
    }
L_08992514:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08992644;
      }
      goto L_08992520;
    }
L_08992520:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08992534u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x08992534u) goto L_08992534;
    return;
L_08992534:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08992544u);
    aot_gpr[5] = (aot_gpr[5] << 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x08992544u) goto L_08992544;
    return;
L_08992544:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] << 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0899256Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899256Cu) goto L_0899256C;
    return;
L_0899256C:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08992578u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x08992578u) goto L_08992578;
    return;
L_08992578:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0899257C;
L_0899257C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_08992628;
    }
    goto L_0899258C;
L_0899258C:
    if (aot_gpr[4] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_0899260C;
    }
    goto L_08992594;
L_08992594:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
        goto L_0899264C;
    }
    goto L_089925A0;
L_089925A0:
    aot_gpr[31] = (0x089925A8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089925A8u) goto L_089925A8;
    return;
L_089925A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[3] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
        goto L_089925C0;
    }
    goto L_089925B4;
L_089925B4:
    aot_gpr[31] = (0x089925BCu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089925BCu) goto L_089925BC;
    return;
L_089925BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_089925C0;
L_089925C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    goto L_08992430;
L_089925CC:
    aot_gpr[31] = (0x089925D4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(13312));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089925D4u) goto L_089925D4;
    return;
L_089925D4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(22)));
        goto L_0899242C;
    }
    goto L_089925DC;
L_089925DC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(15204)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089922E0;
      }
      goto L_089925E8;
    }
L_089925E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    goto L_08992430;
L_089925F4:
    aot_gpr[31] = (0x089925FCu);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089925FCu) goto L_089925FC;
    return;
L_089925FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    goto L_08992430;
L_0899260C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08992620u);
    aot_gpr[4] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08992620u) goto L_08992620;
    return;
L_08992620:
    // nop
    goto L_089925A0;
L_08992628:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0899263Cu);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899263Cu) goto L_0899263C;
    return;
L_0899263C:
    // nop
    goto L_089925A0;
L_08992644:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_0899257C;
L_0899264C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08992664u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08992664u) goto L_08992664;
    return;
L_08992664:
    // nop
    goto L_089925A0;
L_0899266C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[3] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08992698;
      }
      goto L_08992674;
    }
L_08992674:
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08992680;
L_08992680:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08992698;
      }
      goto L_08992690;
    }
L_08992690:
    if (aot_gpr[3] != aot_gpr[6]) {
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08992680;
    }
    goto L_08992698;
L_08992698:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089926A0:
    aot_gpr[3] = (aot_gpr[4] + 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089926EC;
      }
      goto L_089926B0;
    }
L_089926B0:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089926E4;
      }
      goto L_089926BC;
    }
L_089926BC:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089926E4;
      }
      goto L_089926C8;
    }
L_089926C8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089926DC;
      }
      goto L_089926D0;
    }
L_089926D0:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_089926C8;
    }
    goto L_089926DC;
L_089926DC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089926E4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089926EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089926F4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08992738;
      }
      goto L_08992700;
    }
L_08992700:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08992738;
      }
      goto L_08992708;
    }
L_08992708:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (aot_gpr[8] + 0u);
      if (branch_taken) {
          goto L_08992734;
      }
      goto L_08992714;
    }
L_08992714:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08992718;
L_08992718:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_0899274C;
      }
      goto L_08992720;
    }
L_08992720:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08992724;
L_08992724:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[6] != 0u) {
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08992718;
    }
    goto L_08992734;
L_08992734:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08992738;
L_08992738:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992740:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[2] == 0u) {
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
        goto L_08992724;
    }
    goto L_0899274C;
L_0899274C:
    if (aot_gpr[6] != aot_gpr[2]) {
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
        goto L_08992740;
    }
    goto L_08992754;
L_08992754:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899276C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089927D0;
      }
      goto L_08992774;
    }
L_08992774:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1601));
      if (branch_taken) {
          goto L_089927D0;
      }
      goto L_0899277C;
    }
L_0899277C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] << 2u);
    aot_gpr[3] = (aot_gpr[4] << 7u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[2] = (65u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 35125u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089927C8;
      }
      goto L_089927A4;
    }
L_089927A4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (4194u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 19923u);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[3]) * static_cast<std::uint64_t>(aot_gpr[2]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[8] = (0u + 0u);
    aot_gpr[3] = (ctx.hi);
    aot_gpr[3] = (aot_gpr[3] >> 6u);
    aot_gpr[3] = (aot_gpr[7] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089927C8;
L_089927C8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089927D0:
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089927DC:
    // nop
    goto L_08992BCC;
L_089927E4:
    // nop
    goto L_089927DC;
L_089927EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1600));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(15224)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_08992830;
      }
      goto L_08992810;
    }
L_08992810:
    aot_gpr[31] = (0x08992818u);
    // nop
    goto L_08992BC4;
L_08992818:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[31] = (0x08992824u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15240));
    goto L_089927DC;
L_08992824:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08992830;
      }
      goto L_0899282C;
    }
L_0899282C:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(15224), static_cast<std::uint8_t>(aot_gpr[16]));
    goto L_08992830;
L_08992830:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992848:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
        goto L_0899290C;
    }
    goto L_08992850;
L_08992850:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
        goto L_0899290C;
    }
    goto L_08992858;
L_08992858:
    if (aot_gpr[6] == 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
        goto L_0899290C;
    }
    goto L_08992860;
L_08992860:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[3];
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[3] ? 1u : 0u);
      if (branch_taken) {
          goto L_089928B8;
      }
      goto L_08992870;
    }
L_08992870:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_0899288C;
    }
    goto L_08992878;
L_08992878:
    aot_gpr[4] = (0u + 0u);
    goto L_0899287C;
L_0899287C:
    aot_gpr[2] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899288C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[7]);
        goto L_089928E4;
    }
    goto L_0899289C;
L_0899289C:
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089928B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (0u + 0u);
        goto L_0899287C;
    }
    goto L_089928CC;
L_089928CC:
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089928E4:
    aot_gpr[3] = (15u << 16u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] | 16960u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899290C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992914:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089929A0;
      }
      goto L_08992934;
    }
L_08992934:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089929A0;
      }
      goto L_0899293C;
    }
L_0899293C:
    aot_gpr[31] = (0x08992944u);
    // nop
    goto L_089927DC;
L_08992944:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08992974;
      }
      goto L_08992958;
    }
L_08992958:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992974:
    aot_gpr[31] = (0x0899297Cu);
    // nop
    goto L_08992848;
L_0899297C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08992958;
      }
      goto L_08992984;
    }
L_08992984:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089929A0:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089929C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_089929F4;
      }
      goto L_089929D8;
    }
L_089929D8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(15224)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (2217u << 16u);
      if (branch_taken) {
          goto L_08992A04;
      }
      goto L_089929E8;
    }
L_089929E8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15240));
    aot_gpr[31] = (0x089929F4u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_08992914;
L_089929F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089929F8;
L_089929F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992A04:
    aot_gpr[31] = (0x08992A0Cu);
    // nop
    goto L_089927EC;
L_08992A0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2217u << 16u);
      if (branch_taken) {
          goto L_089929F4;
      }
      goto L_08992A14;
    }
L_08992A14:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15240));
    aot_gpr[31] = (0x08992A20u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_08992914;
L_08992A20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089929F8;
L_08992A28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08992A58;
      }
      goto L_08992A44;
    }
L_08992A44:
    aot_gpr[31] = (0x08992A4Cu);
    // nop
    goto L_089929C0;
L_08992A4C:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08992A68;
      }
      goto L_08992A58;
    }
L_08992A58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992A68:
    aot_gpr[31] = (0x08992A70u);
    // nop
    goto L_0899276C;
L_08992A70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992A80:
    // nop
    goto L_08992A28;
L_08992A88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_08992B00;
      }
      goto L_08992AA0;
    }
L_08992AA0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08992B00;
      }
      goto L_08992AA8;
    }
L_08992AA8:
    aot_gpr[31] = (0x08992AB0u);
    // nop
    goto L_08992914;
L_08992AB0:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08992AD8;
      }
      goto L_08992AC0;
    }
L_08992AC0:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992AD8:
    aot_gpr[31] = (0x08992AE0u);
    // nop
    goto L_0899276C;
L_08992AE0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08992AC0;
      }
      goto L_08992AE8;
    }
L_08992AE8:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992B00:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992B1C:
    // nop
    goto L_08992A88;
L_08992B24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (4194u << 16u);
    aot_gpr[3] = (aot_gpr[3] | 19923u);
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[8]) >> 31u));
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[7] << 2u);
    aot_gpr[2] = (aot_gpr[7] << 7u);
    aot_gpr[3] = (ctx.hi);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 6u));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[4] = (0u + 0u);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[3]) > static_cast<std::int32_t>(aot_gpr[4]) ? aot_gpr[3] : aot_gpr[4]);
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992B84:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[2]);
    aot_gpr[2] = (15u << 16u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] | 16960u);
    ctx.lo = aot_gpr[3];
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2]))); const std::uint64_t result = accumulator + product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    aot_gpr[2] = (0u + 0u);
    aot_gpr[3] = (ctx.lo);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992BBC:
    // nop
    goto L_08992E8C;
L_08992BC4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992BCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08992C04;
      }
      goto L_08992BE8;
    }
L_08992BE8:
    aot_gpr[31] = (0x08992BF0u);
    // nop
    ctx.pc = 0x08A5AFCCu;
    return;
L_08992BF0:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08992C00u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08A5B15Cu;
    return;
L_08992C00:
    aot_gpr[2] = (0u + 0u);
    goto L_08992C04;
L_08992C04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992C14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08992C24u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 23u, 0x08A3C0FCu>(ctx, &aot_mem) && ctx.pc == 0x08992C24u) goto L_08992C24;
    return;
L_08992C24:
    aot_gpr[31] = (0x08992C2Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 25u, 0x08A3C120u>(ctx, &aot_mem) && ctx.pc == 0x08992C2Cu) goto L_08992C2C;
    return;
L_08992C2C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (2217u << 16u);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(15252));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1900));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15284));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[31] = (0x08992C80u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(15252), 0u);
    goto L_08992A28;
L_08992C80:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1600));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[2] == 0u) aot_gpr[3] = (0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992C98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
      if (branch_taken) {
          goto L_08992E10;
      }
      goto L_08992CD0;
    }
L_08992CD0:
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(15248)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08992E74;
      }
      goto L_08992CE0;
    }
L_08992CE0:
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[16] = (aot_gpr[21] + static_cast<std::uint32_t>(15252));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08992D18u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(15252)));
    goto L_08992A28;
L_08992D18:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08992E40;
      }
      goto L_08992D20;
    }
L_08992D20:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (34952u << 16u);
    aot_gpr[3] = (aot_gpr[3] | 34953u);
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[2]);
    aot_gpr[2] = (4194u << 16u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[18]);
    aot_gpr[2] = (aot_gpr[2] | 19923u);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[7]) * static_cast<std::uint64_t>(aot_gpr[2]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[2] = (ctx.hi);
    aot_gpr[2] = (aot_gpr[2] >> 6u);
    aot_gpr[10] = (aot_gpr[2] + aot_gpr[19]);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[10]) * static_cast<std::uint64_t>(aot_gpr[3]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[11] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] << 7u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[5]);
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[4] >> 5u);
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[20]);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[9]) * static_cast<std::uint64_t>(aot_gpr[3]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[8] = (aot_gpr[4] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[11]);
    aot_gpr[6] = (aot_gpr[4] << 6u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[8]);
    aot_gpr[3] = (ctx.hi);
    aot_gpr[3] = (aot_gpr[3] >> 5u);
    aot_gpr[4] = (aot_gpr[3] << 2u);
    aot_gpr[5] = (aot_gpr[3] << 6u);
    aot_gpr[12] = (aot_gpr[3] + aot_gpr[22]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[12] < static_cast<std::uint32_t>(24) ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[7] - aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[10] - aot_gpr[6]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (aot_gpr[9] - aot_gpr[5]);
      if (branch_taken) {
          goto L_08992DE4;
      }
      goto L_08992DB0;
    }
L_08992DB0:
    aot_gpr[31] = (0x08992DB8u);
    // nop
    goto L_08992C14;
L_08992DB8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(15252)));
      if (branch_taken) {
          goto L_08992E40;
      }
      goto L_08992DC0;
    }
L_08992DC0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    goto L_08992DE4;
L_08992DE4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[23]);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[30]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    goto L_08992E10;
L_08992E10:
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
L_08992E40:
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
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1600));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992E74:
    aot_gpr[31] = (0x08992E7Cu);
    // nop
    goto L_08992C14;
L_08992E7C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08992E40;
      }
      goto L_08992E84;
    }
L_08992E84:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(15248), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_08992CE0;
L_08992E8C:
    // nop
    goto L_08992C98;
L_08992E94:
    // nop
    goto L_08992A88;
L_08992E9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08992EB4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08992A80;
L_08992EB4:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(15296)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(15292)));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992EE4:
    // nop
    goto L_08992A80;
L_08992EEC:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15308));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08992F08u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(408));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08992F08u) goto L_08992F08;
    return;
L_08992F08:
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(15300));
    aot_gpr[4] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(15292), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(15300), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(15296), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992F38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08992F54u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15296));
    goto L_08992A80;
L_08992F54:
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(15292), aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08992F6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-416));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[13] = (aot_gpr[5] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15288)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 11u, 0x08993094u>(ctx, &aot_mem); return;
      }
      goto L_08992F88;
    }
L_08992F88:
    aot_gpr[9] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[9] + static_cast<std::uint32_t>(15308));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(404)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(400)));
    aot_gpr[12] = (aot_gpr[4] >> 1u);
    aot_gpr[2] = (aot_gpr[7] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[6] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[12]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 12u, 0x089930A4u>(ctx, &aot_mem); return;
      }
      goto L_08992FB0;
    }
L_08992FB0:
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(404), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(400));
    goto L_08992FCC;
L_08992FCC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08992FCC;
      }
      goto L_08992FF8;
    }
L_08992FF8:
    aot_gpr[2] = (aot_gpr[9] + static_cast<std::uint32_t>(15308));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(400)));
    ctx.pc = 0x08993000u; return;
}

void recomp_unit_0398(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0398_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_398(Runtime &runtime) {
    runtime.register_generated_unit(398u, 0x08992000u, 4096u, &recomp_unit_0398, &recomp_unit_0398_entry);
    runtime.register_function(0x08992004u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992008u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992050u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992064u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992068u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992098u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089920A4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089920B0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089920FCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992104u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992130u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992134u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899216Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992170u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992188u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899218Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089921BCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089921C4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089921FCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992200u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992238u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992240u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992298u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089922B4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089922C0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089922D0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089922DCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089922E0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992308u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992314u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992318u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992320u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899232Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992340u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992344u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899234Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992358u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089923D8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089923E4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089923F4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992418u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992428u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899242Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992430u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992458u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992460u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899246Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992478u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992484u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992490u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899249Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089924A8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089924B0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089924C4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089924E8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089924F8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089924FCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992508u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992514u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992520u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992534u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992544u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899256Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992578u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899257Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899258Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992594u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089925A0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089925A8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089925B4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089925BCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089925C0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089925CCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089925D4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089925DCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089925E8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089925F4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089925FCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899260Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992620u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992628u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899263Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992644u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899264Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992664u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899266Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992674u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992680u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992690u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992698u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089926A0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089926B0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089926BCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089926C8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089926D0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089926DCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089926E4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089926ECu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089926F4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992700u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992708u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992714u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992718u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992720u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992724u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992734u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992738u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992740u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899274Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992754u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899276Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992774u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899277Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089927A4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089927C8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089927D0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089927DCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089927E4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089927ECu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992810u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992818u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992824u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899282Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992830u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992848u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992850u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992858u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992860u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992870u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992878u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899287Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899288Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899289Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089928B8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089928CCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089928E4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899290Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992914u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992934u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899293Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992944u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992958u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992974u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x0899297Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992984u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089929A0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089929C0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089929D8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089929E8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089929F4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x089929F8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992A04u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992A0Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992A14u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992A20u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992A28u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992A44u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992A4Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992A58u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992A68u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992A70u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992A80u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992A88u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992AA0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992AA8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992AB0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992AC0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992AD8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992AE0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992AE8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992B00u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992B1Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992B24u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992B84u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992BBCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992BC4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992BCCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992BE8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992BF0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992C00u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992C04u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992C14u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992C24u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992C2Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992C80u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992C98u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992CD0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992CE0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992D18u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992D20u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992DB0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992DB8u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992DC0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992DE4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992E10u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992E40u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992E74u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992E7Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992E84u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992E8Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992E94u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992E9Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992EB4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992EE4u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992EECu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992F08u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992F38u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992F54u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992F6Cu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992F88u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992FB0u, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992FCCu, &recomp_unit_0398, "recomp_unit_0398");
    runtime.register_function(0x08992FF8u, &recomp_unit_0398, "recomp_unit_0398");
}
} // namespace psprecomp
