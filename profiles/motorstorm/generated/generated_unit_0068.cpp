#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0068[1023] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 46, 0, 47,
    0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74,
    0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0,
    86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 102,
    0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 135, 0, 136,
    0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0,
    146, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 152, 0, 153, 0, 154, 0, 155, 0,
    0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0,
    165, 0, 0, 166, 0, 167, 0, 168, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210,
};
void recomp_unit_0068_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08848000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0068[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08848000;
    case 2u: goto L_08848008;
    case 3u: goto L_08848028;
    case 4u: goto L_08848040;
    case 5u: goto L_08848048;
    case 6u: goto L_08848054;
    case 7u: goto L_0884805C;
    case 8u: goto L_0884807C;
    case 9u: goto L_088480A0;
    case 10u: goto L_088480B8;
    case 11u: goto L_088480C0;
    case 12u: goto L_088480CC;
    case 13u: goto L_088480DC;
    case 14u: goto L_08848100;
    case 15u: goto L_0884810C;
    case 16u: goto L_0884812C;
    case 17u: goto L_0884814C;
    case 18u: goto L_08848164;
    case 19u: goto L_0884816C;
    case 20u: goto L_08848178;
    case 21u: goto L_08848180;
    case 22u: goto L_088481A0;
    case 23u: goto L_088481C0;
    case 24u: goto L_088481D8;
    case 25u: goto L_088481E0;
    case 26u: goto L_088481EC;
    case 27u: goto L_08848204;
    case 28u: goto L_08848220;
    case 29u: goto L_08848238;
    case 30u: goto L_08848240;
    case 31u: goto L_0884824C;
    case 32u: goto L_08848264;
    case 33u: goto L_08848288;
    case 34u: goto L_08848298;
    case 35u: goto L_088482B0;
    case 36u: goto L_088482BC;
    case 37u: goto L_088482C8;
    case 38u: goto L_088482D0;
    case 39u: goto L_088482F0;
    case 40u: goto L_08848314;
    case 41u: goto L_08848334;
    case 42u: goto L_0884833C;
    case 43u: goto L_08848354;
    case 44u: goto L_08848364;
    case 45u: goto L_0884836C;
    case 46u: goto L_08848374;
    case 47u: goto L_0884837C;
    case 48u: goto L_08848384;
    case 49u: goto L_088483B0;
    case 50u: goto L_088483D0;
    case 51u: goto L_088483F8;
    case 52u: goto L_08848400;
    case 53u: goto L_08848410;
    case 54u: goto L_0884841C;
    case 55u: goto L_0884843C;
    case 56u: goto L_08848448;
    case 57u: goto L_08848470;
    case 58u: goto L_08848478;
    case 59u: goto L_088484A4;
    case 60u: goto L_088484AC;
    case 61u: goto L_088484B4;
    case 62u: goto L_088484C0;
    case 63u: goto L_088484D4;
    case 64u: goto L_088484E4;
    case 65u: goto L_0884852C;
    case 66u: goto L_08848540;
    case 67u: goto L_08848554;
    case 68u: goto L_08848568;
    case 69u: goto L_08848588;
    case 70u: goto L_088485A4;
    case 71u: goto L_088485C0;
    case 72u: goto L_088485DC;
    case 73u: goto L_088485F4;
    case 74u: goto L_088485FC;
    case 75u: goto L_08848608;
    case 76u: goto L_08848610;
    case 77u: goto L_08848624;
    case 78u: goto L_0884862C;
    case 79u: goto L_0884863C;
    case 80u: goto L_08848644;
    case 81u: goto L_0884864C;
    case 82u: goto L_0884865C;
    case 83u: goto L_08848668;
    case 84u: goto L_08848670;
    case 85u: goto L_08848678;
    case 86u: goto L_08848680;
    case 87u: goto L_0884868C;
    case 88u: goto L_088486A0;
    case 89u: goto L_088486AC;
    case 90u: goto L_088486BC;
    case 91u: goto L_088486C4;
    case 92u: goto L_088486D8;
    case 93u: goto L_088486E8;
    case 94u: goto L_08848700;
    case 95u: goto L_08848720;
    case 96u: goto L_08848728;
    case 97u: goto L_0884873C;
    case 98u: goto L_08848748;
    case 99u: goto L_08848750;
    case 100u: goto L_08848758;
    case 101u: goto L_08848768;
    case 102u: goto L_0884877C;
    case 103u: goto L_08848788;
    case 104u: goto L_0884879C;
    case 105u: goto L_088487AC;
    case 106u: goto L_088487CC;
    case 107u: goto L_088487D4;
    case 108u: goto L_088487E4;
    case 109u: goto L_088487F0;
    case 110u: goto L_08848814;
    case 111u: goto L_08848828;
    case 112u: goto L_08848830;
    case 113u: goto L_08848844;
    case 114u: goto L_08848850;
    case 115u: goto L_08848860;
    case 116u: goto L_08848884;
    case 117u: goto L_088488A0;
    case 118u: goto L_088488BC;
    case 119u: goto L_088488EC;
    case 120u: goto L_08848900;
    case 121u: goto L_08848908;
    case 122u: goto L_08848918;
    case 123u: goto L_0884892C;
    case 124u: goto L_08848948;
    case 125u: goto L_08848954;
    case 126u: goto L_08848960;
    case 127u: goto L_08848984;
    case 128u: goto L_0884898C;
    case 129u: goto L_088489A0;
    case 130u: goto L_088489A8;
    case 131u: goto L_088489B8;
    case 132u: goto L_088489D4;
    case 133u: goto L_088489E0;
    case 134u: goto L_088489EC;
    case 135u: goto L_088489F4;
    case 136u: goto L_088489FC;
    case 137u: goto L_08848A14;
    case 138u: goto L_08848A24;
    case 139u: goto L_08848A2C;
    case 140u: goto L_08848A3C;
    case 141u: goto L_08848A44;
    case 142u: goto L_08848A5C;
    case 143u: goto L_08848A64;
    case 144u: goto L_08848A6C;
    case 145u: goto L_08848A78;
    case 146u: goto L_08848A80;
    case 147u: goto L_08848A88;
    case 148u: goto L_08848AA4;
    case 149u: goto L_08848AB0;
    case 150u: goto L_08848AD0;
    case 151u: goto L_08848ADC;
    case 152u: goto L_08848AE0;
    case 153u: goto L_08848AE8;
    case 154u: goto L_08848AF0;
    case 155u: goto L_08848AF8;
    case 156u: goto L_08848B08;
    case 157u: goto L_08848B18;
    case 158u: goto L_08848B28;
    case 159u: goto L_08848B34;
    case 160u: goto L_08848B3C;
    case 161u: goto L_08848B44;
    case 162u: goto L_08848B54;
    case 163u: goto L_08848B64;
    case 164u: goto L_08848B74;
    case 165u: goto L_08848B80;
    case 166u: goto L_08848B8C;
    case 167u: goto L_08848B94;
    case 168u: goto L_08848B9C;
    case 169u: goto L_08848BA8;
    case 170u: goto L_08848BBC;
    case 171u: goto L_08848BC4;
    case 172u: goto L_08848BCC;
    case 173u: goto L_08848BDC;
    case 174u: goto L_08848BF8;
    case 175u: goto L_08848C10;
    case 176u: goto L_08848C18;
    case 177u: goto L_08848C20;
    case 178u: goto L_08848C28;
    case 179u: goto L_08848C38;
    case 180u: goto L_08848C48;
    case 181u: goto L_08848C58;
    case 182u: goto L_08848C64;
    case 183u: goto L_08848C6C;
    case 184u: goto L_08848C9C;
    case 185u: goto L_08848CBC;
    case 186u: goto L_08848CD4;
    case 187u: goto L_08848CE8;
    case 188u: goto L_08848CF4;
    case 189u: goto L_08848D00;
    case 190u: goto L_08848D28;
    case 191u: goto L_08848D4C;
    case 192u: goto L_08848D70;
    case 193u: goto L_08848D94;
    case 194u: goto L_08848DB8;
    case 195u: goto L_08848DDC;
    case 196u: goto L_08848E00;
    case 197u: goto L_08848E24;
    case 198u: goto L_08848E48;
    case 199u: goto L_08848E6C;
    case 200u: goto L_08848E90;
    case 201u: goto L_08848EB4;
    case 202u: goto L_08848ED8;
    case 203u: goto L_08848EFC;
    case 204u: goto L_08848F20;
    case 205u: goto L_08848F44;
    case 206u: goto L_08848F68;
    case 207u: goto L_08848F8C;
    case 208u: goto L_08848FB0;
    case 209u: goto L_08848FD4;
    case 210u: goto L_08848FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08848000:
    aot_gpr[31] = (0x08848008u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08848008u) goto L_08848008;
    return;
L_08848008:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08848028u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08848028u) goto L_08848028;
    return;
L_08848028:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08848040u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2952));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08848040u) goto L_08848040;
    return;
L_08848040:
    aot_gpr[31] = (0x08848048u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x08848048u) goto L_08848048;
    return;
L_08848048:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08848054u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08848054u) goto L_08848054;
    return;
L_08848054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884810C;
      }
      goto L_0884805C;
    }
L_0884805C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-3032));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2964));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884807Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884807Cu) goto L_0884807C;
    return;
L_0884807C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088480A0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088480A0u) goto L_088480A0;
    return;
L_088480A0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088480B8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2952));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088480B8u) goto L_088480B8;
    return;
L_088480B8:
    aot_gpr[31] = (0x088480C0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x088480C0u) goto L_088480C0;
    return;
L_088480C0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088480CCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x088480CCu) goto L_088480CC;
    return;
L_088480CC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088480DCu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088480DCu) goto L_088480DC;
    return;
L_088480DC:
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
          goto L_0884810C;
      }
      goto L_08848100;
    }
L_08848100:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0884810Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 26u, 0x088A21C0u>(ctx, &aot_mem) && ctx.pc == 0x0884810Cu) goto L_0884810C;
    return;
L_0884810C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-3032));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2932));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884812Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884812Cu) goto L_0884812C;
    return;
L_0884812C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884814Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884814Cu) goto L_0884814C;
    return;
L_0884814C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08848164u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2924));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08848164u) goto L_08848164;
    return;
L_08848164:
    aot_gpr[31] = (0x0884816Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x0884816Cu) goto L_0884816C;
    return;
L_0884816C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08848178u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08848178u) goto L_08848178;
    return;
L_08848178:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884824C;
      }
      goto L_08848180;
    }
L_08848180:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-3032));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2932));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088481A0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088481A0u) goto L_088481A0;
    return;
L_088481A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088481C0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088481C0u) goto L_088481C0;
    return;
L_088481C0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088481D8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2924));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088481D8u) goto L_088481D8;
    return;
L_088481D8:
    aot_gpr[31] = (0x088481E0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x088481E0u) goto L_088481E0;
    return;
L_088481E0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088481ECu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x088481ECu) goto L_088481EC;
    return;
L_088481EC:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2964));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08848204u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08848204u) goto L_08848204;
    return;
L_08848204:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08848220u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08848220u) goto L_08848220;
    return;
L_08848220:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08848238u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2952));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08848238u) goto L_08848238;
    return;
L_08848238:
    aot_gpr[31] = (0x08848240u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x08848240u) goto L_08848240;
    return;
L_08848240:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884824Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x0884824Cu) goto L_0884824C;
    return;
L_0884824C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3032));
    aot_gpr[31] = (0x08848264u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2792));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08848264u) goto L_08848264;
    return;
L_08848264:
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
          goto L_088482B0;
      }
      goto L_08848288;
    }
L_08848288:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08848298u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2820));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08848298u) goto L_08848298;
    return;
L_08848298:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088482B0;
L_088482B0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088482BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 19u, 0x088A2134u>(ctx, &aot_mem) && ctx.pc == 0x088482BCu) goto L_088482BC;
    return;
L_088482BC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(15001) ? 1u : 0u);
      if (branch_taken) {
          goto L_0884833C;
      }
      goto L_088482C8;
    }
L_088482C8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884833C;
      }
      goto L_088482D0;
    }
L_088482D0:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-3032));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2892));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088482F0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088482F0u) goto L_088482F0;
    return;
L_088482F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08848314u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08848314u) goto L_08848314;
    return;
L_08848314:
    aot_gpr[4] = (0u | 15000u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[16]);
    aot_gpr[5] = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[31] = (0x08848334u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08848334u) goto L_08848334;
    return;
L_08848334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08848364;
      }
      goto L_0884833C;
    }
L_0884833C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3032));
    aot_gpr[31] = (0x08848354u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2892));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08848354u) goto L_08848354;
    return;
L_08848354:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08848364;
L_08848364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884837C;
      }
      goto L_0884836C;
    }
L_0884836C:
    aot_gpr[31] = (0x08848374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 96u, 0x08887C58u>(ctx, &aot_mem) && ctx.pc == 0x08848374u) goto L_08848374;
    return;
L_08848374:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884837C;
L_0884837C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 154u, 0x08847AB4u>(ctx, &aot_mem); return;
      }
      goto L_08848384;
    }
L_08848384:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088483B0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23944), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088483D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088483F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2776));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088483F8u) goto L_088483F8;
    return;
L_088483F8:
    aot_gpr[31] = (0x08848400u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 2u, 0x0889B00Cu>(ctx, &aot_mem) && ctx.pc == 0x08848400u) goto L_08848400;
    return;
L_08848400:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08848410u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2760));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08848410u) goto L_08848410;
    return;
L_08848410:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884841Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x0884841Cu) goto L_0884841C;
    return;
L_0884841C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[31] = (0x0884843Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x0884843Cu) goto L_0884843C;
    return;
L_0884843C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08848448u);
    aot_gpr[5] = (1u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x08848448u) goto L_08848448;
    return;
L_08848448:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848470:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848478:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2776));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088484A4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2760));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088484A4u) goto L_088484A4;
    return;
L_088484A4:
    aot_gpr[31] = (0x088484ACu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x088484ACu) goto L_088484AC;
    return;
L_088484AC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088484D4;
      }
      goto L_088484B4;
    }
L_088484B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088484D4;
      }
      goto L_088484C0;
    }
L_088484C0:
    aot_gpr[4] = (17174u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17096u << 16u);
    aot_gpr[31] = (0x088484D4u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 103u, 0x0889A594u>(ctx, &aot_mem) && ctx.pc == 0x088484D4u) goto L_088484D4;
    return;
L_088484D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088484E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2776));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x0884852Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884852Cu) goto L_0884852C;
    return;
L_0884852C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08848540u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2760));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08848540u) goto L_08848540;
    return;
L_08848540:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08848554u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2752));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08848554u) goto L_08848554;
    return;
L_08848554:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08848568u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2740));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08848568u) goto L_08848568;
    return;
L_08848568:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08848588u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2728));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08848588u) goto L_08848588;
    return;
L_08848588:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x088485A4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2708));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088485A4u) goto L_088485A4;
    return;
L_088485A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x088485C0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2696));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088485C0u) goto L_088485C0;
    return;
L_088485C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08848C6C;
      }
      goto L_088485DC;
    }
L_088485DC:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-2632)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088485F4:
    aot_gpr[31] = (0x088485FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x088485FCu) goto L_088485FC;
    return;
L_088485FC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08848624;
    }
    goto L_08848608;
L_08848608:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0884863C;
      }
      goto L_08848610;
    }
L_08848610:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884863C;
      }
      goto L_08848624;
    }
L_08848624:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884863C;
      }
      goto L_0884862C;
    }
L_0884862C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884863C;
L_0884863C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08848C6C;
      }
      goto L_08848644;
    }
L_08848644:
    aot_gpr[31] = (0x0884864Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x0884864Cu) goto L_0884864C;
    return;
L_0884864C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_08848670;
      }
      goto L_0884865C;
    }
L_0884865C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08848680;
      }
      goto L_08848668;
    }
L_08848668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08848C6C;
      }
      goto L_08848670;
    }
L_08848670:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08848668;
      }
      goto L_08848678;
    }
L_08848678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088486AC;
      }
      goto L_08848680;
    }
L_08848680:
    aot_gpr[4] = (0u | 292u);
    aot_gpr[31] = (0x0884868Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884868Cu) goto L_0884868C;
    return;
L_0884868C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088486A0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088486A0u) goto L_088486A0;
    return;
L_088486A0:
    aot_gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08848668;
      }
      goto L_088486AC;
    }
L_088486AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088486BCu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 6u, 0x0889B04Cu>(ctx, &aot_mem) && ctx.pc == 0x088486BCu) goto L_088486BC;
    return;
L_088486BC:
    aot_gpr[31] = (0x088486C4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x088486C4u) goto L_088486C4;
    return;
L_088486C4:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08848768;
      }
      goto L_088486D8;
    }
L_088486D8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088486E8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 193u, 0x0888CCBCu>(ctx, &aot_mem) && ctx.pc == 0x088486E8u) goto L_088486E8;
    return;
L_088486E8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0884873C;
      }
      goto L_08848700;
    }
L_08848700:
    aot_gpr[7] = (aot_gpr[6] << 6u);
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08848728;
      }
      goto L_08848720;
    }
L_08848720:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0884873C;
      }
      goto L_08848728;
    }
L_08848728:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08848700;
      }
      goto L_0884873C;
    }
L_0884873C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08848758;
      }
      goto L_08848748;
    }
L_08848748:
    aot_gpr[31] = (0x08848750u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08848750u) goto L_08848750;
    return;
L_08848750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08848768;
      }
      goto L_08848758;
    }
L_08848758:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088486D8;
      }
      goto L_08848768;
    }
L_08848768:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08848844;
      }
      goto L_0884877C;
    }
L_0884877C:
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08848788u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08848788u) goto L_08848788;
    return;
L_08848788:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[30] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[30] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088487E4;
      }
      goto L_0884879C;
    }
L_0884879C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088487ACu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 193u, 0x0888CCBCu>(ctx, &aot_mem) && ctx.pc == 0x088487ACu) goto L_088487AC;
    return;
L_088487AC:
    aot_gpr[4] = (aot_gpr[21] << 6u);
    aot_gpr[5] = (aot_gpr[21] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088487D4;
      }
      goto L_088487CC;
    }
L_088487CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_088487E4;
      }
      goto L_088487D4;
    }
L_088487D4:
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[30] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884879C;
      }
      goto L_088487E4;
    }
L_088487E4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[22] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08848830;
      }
      goto L_088487F0;
    }
L_088487F0:
    aot_gpr[4] = (aot_gpr[21] << 6u);
    aot_gpr[5] = (aot_gpr[21] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[22]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08848814u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 114u, 0x0888C6E4u>(ctx, &aot_mem) && ctx.pc == 0x08848814u) goto L_08848814;
    return;
L_08848814:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[22]);
    aot_gpr[31] = (0x08848828u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08848828u) goto L_08848828;
    return;
L_08848828:
    aot_gpr[31] = (0x08848830u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08848830u) goto L_08848830;
    return;
L_08848830:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884877C;
      }
      goto L_08848844;
    }
L_08848844:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08848A14;
      }
      goto L_08848850;
    }
L_08848850:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08848860u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2740));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08848860u) goto L_08848860;
    return;
L_08848860:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[21] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08848884u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2728));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08848884u) goto L_08848884;
    return;
L_08848884:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x088488A0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2708));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088488A0u) goto L_088488A0;
    return;
L_088488A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x088488BCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2696));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088488BCu) goto L_088488BC;
    return;
L_088488BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08848900;
      }
      goto L_088488EC;
    }
L_088488EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7968)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08848960;
      }
      goto L_08848900;
    }
L_08848900:
    aot_gpr[31] = (0x08848908u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x08848908u) goto L_08848908;
    return;
L_08848908:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08848918u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 193u, 0x0888CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08848918u) goto L_08848918;
    return;
L_08848918:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884892Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(7968), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 8u, 0x0889B080u>(ctx, &aot_mem) && ctx.pc == 0x0884892Cu) goto L_0884892C;
    return;
L_0884892C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[31] = (0x08848948u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08848948u) goto L_08848948;
    return;
L_08848948:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08848954u);
    aot_gpr[5] = (1u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08848954u) goto L_08848954;
    return;
L_08848954:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088489FC;
      }
      goto L_08848960;
    }
L_08848960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088489FC;
      }
      goto L_08848984;
    }
L_08848984:
    aot_gpr[31] = (0x0884898Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x0884898Cu) goto L_0884898C;
    return;
L_0884898C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088489A0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2676));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088489A0u) goto L_088489A0;
    return;
L_088489A0:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088489EC;
      }
      goto L_088489A8;
    }
L_088489A8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x088489B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7968)));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 8u, 0x0889B080u>(ctx, &aot_mem) && ctx.pc == 0x088489B8u) goto L_088489B8;
    return;
L_088489B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[31] = (0x088489D4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x088489D4u) goto L_088489D4;
    return;
L_088489D4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088489E0u);
    aot_gpr[5] = (1u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x088489E0u) goto L_088489E0;
    return;
L_088489E0:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088489FC;
      }
      goto L_088489EC;
    }
L_088489EC:
    aot_gpr[31] = (0x088489F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 4u, 0x0889B030u>(ctx, &aot_mem) && ctx.pc == 0x088489F4u) goto L_088489F4;
    return;
L_088489F4:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088489FC;
L_088489FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08848A24;
      }
      goto L_08848A14;
    }
L_08848A14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08848A24;
L_08848A24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08848668;
      }
      goto L_08848A2C;
    }
L_08848A2C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08848A5C;
      }
      goto L_08848A3C;
    }
L_08848A3C:
    aot_gpr[31] = (0x08848A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 12u, 0x0889B0BCu>(ctx, &aot_mem) && ctx.pc == 0x08848A44u) goto L_08848A44;
    return;
L_08848A44:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(7968), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_08848A5C;
L_08848A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08848C6C;
      }
      goto L_08848A64;
    }
L_08848A64:
    aot_gpr[31] = (0x08848A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x08848A6Cu) goto L_08848A6C;
    return;
L_08848A6C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08848AE0;
      }
      goto L_08848A78;
    }
L_08848A78:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08848AE0;
      }
      goto L_08848A80;
    }
L_08848A80:
    aot_gpr[31] = (0x08848A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 2u, 0x0889B00Cu>(ctx, &aot_mem) && ctx.pc == 0x08848A88u) goto L_08848A88;
    return;
L_08848A88:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2776));
    aot_gpr[31] = (0x08848AA4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2760));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08848AA4u) goto L_08848AA4;
    return;
L_08848AA4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08848AB0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08848AB0u) goto L_08848AB0;
    return;
L_08848AB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[31] = (0x08848AD0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x08848AD0u) goto L_08848AD0;
    return;
L_08848AD0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08848ADCu);
    aot_gpr[5] = (1u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x08848ADCu) goto L_08848ADC;
    return;
L_08848ADC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_08848AE0;
L_08848AE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08848C6C;
      }
      goto L_08848AE8;
    }
L_08848AE8:
    aot_gpr[31] = (0x08848AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 11u, 0x0889A0BCu>(ctx, &aot_mem) && ctx.pc == 0x08848AF0u) goto L_08848AF0;
    return;
L_08848AF0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08848B8C;
      }
      goto L_08848AF8;
    }
L_08848AF8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08848B34;
      }
      goto L_08848B08;
    }
L_08848B08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08848B34;
      }
      goto L_08848B18;
    }
L_08848B18:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[31] = (0x08848B28u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 148u, 0x08888EB4u>(ctx, &aot_mem) && ctx.pc == 0x08848B28u) goto L_08848B28;
    return;
L_08848B28:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08848BC4;
      }
      goto L_08848B34;
    }
L_08848B34:
    aot_gpr[31] = (0x08848B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 52u, 0x0889B3D4u>(ctx, &aot_mem) && ctx.pc == 0x08848B3Cu) goto L_08848B3C;
    return;
L_08848B3C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08848B64;
      }
      goto L_08848B44;
    }
L_08848B44:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08848B54u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2660));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08848B54u) goto L_08848B54;
    return;
L_08848B54:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08848B80;
      }
      goto L_08848B64;
    }
L_08848B64:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08848B74u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2676));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08848B74u) goto L_08848B74;
    return;
L_08848B74:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_08848B80;
L_08848B80:
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08848BC4;
      }
      goto L_08848B8C;
    }
L_08848B8C:
    aot_gpr[31] = (0x08848B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 12u, 0x0889A0D0u>(ctx, &aot_mem) && ctx.pc == 0x08848B94u) goto L_08848B94;
    return;
L_08848B94:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08848BC4;
      }
      goto L_08848B9C;
    }
L_08848B9C:
    aot_gpr[4] = (0u | 292u);
    aot_gpr[31] = (0x08848BA8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08848BA8u) goto L_08848BA8;
    return;
L_08848BA8:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08848BBCu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08848BBCu) goto L_08848BBC;
    return;
L_08848BBC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08848BC4;
L_08848BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08848C6C;
      }
      goto L_08848BCC;
    }
L_08848BCC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08848BDCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2648));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08848BDCu) goto L_08848BDC;
    return;
L_08848BDC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08848C6C;
      }
      goto L_08848BF8;
    }
L_08848BF8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_08848C6C;
      }
      goto L_08848C10;
    }
L_08848C10:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08848C6C;
      }
      goto L_08848C18;
    }
L_08848C18:
    aot_gpr[31] = (0x08848C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 52u, 0x0889B3D4u>(ctx, &aot_mem) && ctx.pc == 0x08848C20u) goto L_08848C20;
    return;
L_08848C20:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08848C48;
      }
      goto L_08848C28;
    }
L_08848C28:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08848C38u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2660));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08848C38u) goto L_08848C38;
    return;
L_08848C38:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08848C64;
      }
      goto L_08848C48;
    }
L_08848C48:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08848C58u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2676));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08848C58u) goto L_08848C58;
    return;
L_08848C58:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_08848C64;
L_08848C64:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08848C6C;
L_08848C6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848C9C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23952), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08848CBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08848CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 42u, 0x0886D27Cu>(ctx, &aot_mem) && ctx.pc == 0x08848CD4u) goto L_08848CD4;
    return;
L_08848CD4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6988), 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08848CE8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 206u, 0x088C5E1Cu>(ctx, &aot_mem) && ctx.pc == 0x08848CE8u) goto L_08848CE8;
    return;
L_08848CE8:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[31] = (0x08848CF4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 206u, 0x088C5E1Cu>(ctx, &aot_mem) && ctx.pc == 0x08848CF4u) goto L_08848CF4;
    return;
L_08848CF4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08848D00u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3472)));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 15u, 0x0886F138u>(ctx, &aot_mem) && ctx.pc == 0x08848D00u) goto L_08848D00;
    return;
L_08848D00:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3104)));
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848D28u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848D28u) goto L_08848D28;
    return;
L_08848D28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3108)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848D4Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848D4Cu) goto L_08848D4C;
    return;
L_08848D4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3112)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848D70u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848D70u) goto L_08848D70;
    return;
L_08848D70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3116)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848D94u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848D94u) goto L_08848D94;
    return;
L_08848D94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3120)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848DB8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848DB8u) goto L_08848DB8;
    return;
L_08848DB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3124)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848DDCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848DDCu) goto L_08848DDC;
    return;
L_08848DDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3132)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848E00u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848E00u) goto L_08848E00;
    return;
L_08848E00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3136)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848E24u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848E24u) goto L_08848E24;
    return;
L_08848E24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3128)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848E48u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848E48u) goto L_08848E48;
    return;
L_08848E48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3140)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848E6Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848E6Cu) goto L_08848E6C;
    return;
L_08848E6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3164)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848E90u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848E90u) goto L_08848E90;
    return;
L_08848E90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3168)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848EB4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848EB4u) goto L_08848EB4;
    return;
L_08848EB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3464)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848ED8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848ED8u) goto L_08848ED8;
    return;
L_08848ED8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3460)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848EFCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848EFCu) goto L_08848EFC;
    return;
L_08848EFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3468)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848F20u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848F20u) goto L_08848F20;
    return;
L_08848F20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3444)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848F44u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848F44u) goto L_08848F44;
    return;
L_08848F44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3448)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848F68u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848F68u) goto L_08848F68;
    return;
L_08848F68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3456)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848F8Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848F8Cu) goto L_08848F8C;
    return;
L_08848F8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3452)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848FB0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848FB0u) goto L_08848FB0;
    return;
L_08848FB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3440)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848FD4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848FD4u) goto L_08848FD4;
    return;
L_08848FD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3380)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08848FF8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08848FF8u) goto L_08848FF8;
    return;
L_08848FF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (2218u << 16u);
    ctx.pc = 0x08849000u; return;
}

void recomp_unit_0068(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0068_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_68(Runtime &runtime) {
    runtime.register_generated_unit(68u, 0x08848000u, 4096u, &recomp_unit_0068, &recomp_unit_0068_entry);
    runtime.register_function(0x08848000u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848008u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848028u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848040u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848048u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848054u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884805Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884807Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088480A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088480B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088480C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088480CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088480DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848100u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884810Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884812Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884814Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848164u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884816Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848178u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848180u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088481A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088481C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088481D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088481E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088481ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848204u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848220u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848238u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848240u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884824Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848264u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848288u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848298u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088482B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088482BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088482C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088482D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088482F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848314u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848334u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884833Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848354u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848364u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884836Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848374u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884837Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848384u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088483B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088483D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088483F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848400u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848410u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884841Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884843Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848448u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848470u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848478u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088484A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088484ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088484B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088484C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088484D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088484E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884852Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848540u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848554u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848568u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848588u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088485A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088485C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088485DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088485F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088485FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848608u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848610u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848624u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884862Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884863Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848644u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884864Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884865Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848668u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848670u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848678u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848680u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884868Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088486A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088486ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088486BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088486C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088486D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088486E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848700u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848720u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848728u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884873Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848748u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848750u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848758u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848768u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884877Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848788u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884879Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088487ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088487CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088487D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088487E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088487F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848814u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848828u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848830u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848844u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848850u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848860u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848884u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088488A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088488BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088488ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848900u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848908u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848918u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884892Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848948u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848954u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848960u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848984u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0884898Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088489A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088489A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088489B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088489D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088489E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088489ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088489F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x088489FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848A14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848A24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848A2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848A3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848A44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848A5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848A64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848A6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848A78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848A80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848A88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848AA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848AB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848AD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848ADCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848AE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848AE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848AF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848AF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848B08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848B18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848B28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848B34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848B3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848B44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848B54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848B64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848B74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848B80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848B8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848B94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848B9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848BA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848BBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848BC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848BCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848BDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848BF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848C10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848C18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848C20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848C28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848C38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848C48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848C58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848C64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848C6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848C9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848CBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848CD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848CE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848CF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848D00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848D28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848D4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848D70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848D94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848DB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848DDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848E00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848E24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848E48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848E6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848E90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848EB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848ED8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848EFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848F20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848F44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848F68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848F8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848FB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848FD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08848FF8u, &recomp_unit_0068, "recomp_unit_0068");
}
} // namespace psprecomp
