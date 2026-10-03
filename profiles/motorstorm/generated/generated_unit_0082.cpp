#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0082[987] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 12, 0, 0, 0, 0, 13, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    17, 18, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0,
    0, 25, 26, 0, 0, 0, 27, 0, 28, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0,
    96, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0,
    0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0,
    0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0,
    0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0,
    166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0,
    174, 0, 175, 0, 176, 0, 177, 0, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 193, 0, 194, 0, 0, 0, 0, 195,
};
void recomp_unit_0082_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08856000u;
        entry_id = (entry_delta < 3948u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0082[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08856000;
    case 2u: goto L_08856038;
    case 3u: goto L_08856058;
    case 4u: goto L_08856080;
    case 5u: goto L_08856090;
    case 6u: goto L_08856098;
    case 7u: goto L_088560AC;
    case 8u: goto L_088560B8;
    case 9u: goto L_088560C4;
    case 10u: goto L_088560CC;
    case 11u: goto L_08856100;
    case 12u: goto L_08856108;
    case 13u: goto L_0885611C;
    case 14u: goto L_08856124;
    case 15u: goto L_08856128;
    case 16u: goto L_08856168;
    case 17u: goto L_08856180;
    case 18u: goto L_08856184;
    case 19u: goto L_0885618C;
    case 20u: goto L_088561A0;
    case 21u: goto L_088561C0;
    case 22u: goto L_088561D8;
    case 23u: goto L_088561E0;
    case 24u: goto L_088561F0;
    case 25u: goto L_08856204;
    case 26u: goto L_08856208;
    case 27u: goto L_08856218;
    case 28u: goto L_08856220;
    case 29u: goto L_08856224;
    case 30u: goto L_0885623C;
    case 31u: goto L_08856278;
    case 32u: goto L_08856284;
    case 33u: goto L_08856290;
    case 34u: goto L_0885629C;
    case 35u: goto L_088562A8;
    case 36u: goto L_088562C4;
    case 37u: goto L_088562E0;
    case 38u: goto L_08856304;
    case 39u: goto L_08856320;
    case 40u: goto L_08856350;
    case 41u: goto L_0885637C;
    case 42u: goto L_0885639C;
    case 43u: goto L_088563A4;
    case 44u: goto L_088563B8;
    case 45u: goto L_088563C4;
    case 46u: goto L_088563D4;
    case 47u: goto L_088563E0;
    case 48u: goto L_088563EC;
    case 49u: goto L_0885640C;
    case 50u: goto L_08856430;
    case 51u: goto L_0885645C;
    case 52u: goto L_08856468;
    case 53u: goto L_08856474;
    case 54u: goto L_08856480;
    case 55u: goto L_088564A8;
    case 56u: goto L_088564CC;
    case 57u: goto L_08856508;
    case 58u: goto L_08856514;
    case 59u: goto L_0885651C;
    case 60u: goto L_08856524;
    case 61u: goto L_0885652C;
    case 62u: goto L_08856534;
    case 63u: goto L_08856548;
    case 64u: goto L_08856550;
    case 65u: goto L_08856558;
    case 66u: goto L_08856568;
    case 67u: goto L_08856594;
    case 68u: goto L_088565A0;
    case 69u: goto L_088565C0;
    case 70u: goto L_088565D4;
    case 71u: goto L_088565DC;
    case 72u: goto L_088565E4;
    case 73u: goto L_088565F4;
    case 74u: goto L_0885660C;
    case 75u: goto L_08856634;
    case 76u: goto L_08856658;
    case 77u: goto L_08856664;
    case 78u: goto L_08856680;
    case 79u: goto L_08856690;
    case 80u: goto L_08856698;
    case 81u: goto L_088566B0;
    case 82u: goto L_088566C0;
    case 83u: goto L_088566C8;
    case 84u: goto L_088566D0;
    case 85u: goto L_088566E0;
    case 86u: goto L_088566E8;
    case 87u: goto L_088566F4;
    case 88u: goto L_08856708;
    case 89u: goto L_0885671C;
    case 90u: goto L_08856724;
    case 91u: goto L_0885673C;
    case 92u: goto L_08856748;
    case 93u: goto L_08856754;
    case 94u: goto L_08856770;
    case 95u: goto L_08856778;
    case 96u: goto L_08856780;
    case 97u: goto L_08856790;
    case 98u: goto L_0885679C;
    case 99u: goto L_088567A4;
    case 100u: goto L_088567AC;
    case 101u: goto L_088567C4;
    case 102u: goto L_088567D8;
    case 103u: goto L_088567E8;
    case 104u: goto L_088567F8;
    case 105u: goto L_08856804;
    case 106u: goto L_0885680C;
    case 107u: goto L_08856814;
    case 108u: goto L_0885682C;
    case 109u: goto L_08856834;
    case 110u: goto L_0885683C;
    case 111u: goto L_08856844;
    case 112u: goto L_08856860;
    case 113u: goto L_0885686C;
    case 114u: goto L_0885688C;
    case 115u: goto L_088568A4;
    case 116u: goto L_088568B0;
    case 117u: goto L_088568C8;
    case 118u: goto L_088568E0;
    case 119u: goto L_088568EC;
    case 120u: goto L_088568F8;
    case 121u: goto L_08856904;
    case 122u: goto L_0885690C;
    case 123u: goto L_0885691C;
    case 124u: goto L_0885692C;
    case 125u: goto L_0885693C;
    case 126u: goto L_08856944;
    case 127u: goto L_08856950;
    case 128u: goto L_088569A0;
    case 129u: goto L_088569E8;
    case 130u: goto L_088569F4;
    case 131u: goto L_08856A04;
    case 132u: goto L_08856A10;
    case 133u: goto L_08856A28;
    case 134u: goto L_08856A34;
    case 135u: goto L_08856A40;
    case 136u: goto L_08856A60;
    case 137u: goto L_08856A70;
    case 138u: goto L_08856A94;
    case 139u: goto L_08856AB4;
    case 140u: goto L_08856AD0;
    case 141u: goto L_08856AEC;
    case 142u: goto L_08856AF8;
    case 143u: goto L_08856B18;
    case 144u: goto L_08856B2C;
    case 145u: goto L_08856BA0;
    case 146u: goto L_08856BAC;
    case 147u: goto L_08856BB4;
    case 148u: goto L_08856BC4;
    case 149u: goto L_08856BF8;
    case 150u: goto L_08856C18;
    case 151u: goto L_08856C24;
    case 152u: goto L_08856C38;
    case 153u: goto L_08856C44;
    case 154u: goto L_08856C50;
    case 155u: goto L_08856C90;
    case 156u: goto L_08856CD4;
    case 157u: goto L_08856CF4;
    case 158u: goto L_08856D08;
    case 159u: goto L_08856D14;
    case 160u: goto L_08856D24;
    case 161u: goto L_08856D3C;
    case 162u: goto L_08856D60;
    case 163u: goto L_08856D68;
    case 164u: goto L_08856D70;
    case 165u: goto L_08856D78;
    case 166u: goto L_08856D80;
    case 167u: goto L_08856D8C;
    case 168u: goto L_08856D98;
    case 169u: goto L_08856DB0;
    case 170u: goto L_08856DD4;
    case 171u: goto L_08856DDC;
    case 172u: goto L_08856DE4;
    case 173u: goto L_08856DEC;
    case 174u: goto L_08856E00;
    case 175u: goto L_08856E08;
    case 176u: goto L_08856E10;
    case 177u: goto L_08856E18;
    case 178u: goto L_08856E28;
    case 179u: goto L_08856E30;
    case 180u: goto L_08856E38;
    case 181u: goto L_08856E40;
    case 182u: goto L_08856E6C;
    case 183u: goto L_08856E8C;
    case 184u: goto L_08856EAC;
    case 185u: goto L_08856EC4;
    case 186u: goto L_08856ED0;
    case 187u: goto L_08856EE0;
    case 188u: goto L_08856EEC;
    case 189u: goto L_08856EF8;
    case 190u: goto L_08856F08;
    case 191u: goto L_08856F38;
    case 192u: goto L_08856F48;
    case 193u: goto L_08856F4C;
    case 194u: goto L_08856F54;
    case 195u: goto L_08856F68;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08856000:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
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
L_08856038:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856058:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-336));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7288)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
      if (branch_taken) {
          goto L_08856098;
      }
      goto L_08856080;
    }
L_08856080:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x08856090u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 4u, 0x08924058u>(ctx, &aot_mem) && ctx.pc == 0x08856090u) goto L_08856090;
    return;
L_08856090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088560C4;
      }
      goto L_08856098;
    }
L_08856098:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088560ACu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 146u, 0x08933840u>(ctx, &aot_mem) && ctx.pc == 0x088560ACu) goto L_088560AC;
    return;
L_088560AC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_088560C4;
      }
      goto L_088560B8;
    }
L_088560B8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088560C4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 193u, 0x08933BA8u>(ctx, &aot_mem) && ctx.pc == 0x088560C4u) goto L_088560C4;
    return;
L_088560C4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_0885618C;
      }
      goto L_088560CC;
    }
L_088560CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(2404)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(2400)));
    aot_gpr[8] = (aot_gpr[7] ^ aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[8] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[9]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885618C;
      }
      goto L_08856100;
    }
L_08856100:
    aot_gpr[31] = (0x08856108u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 20u, 0x089343A0u>(ctx, &aot_mem) && ctx.pc == 0x08856108u) goto L_08856108;
    return;
L_08856108:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_08856128;
    }
    goto L_0885611C;
L_0885611C:
    aot_gpr[31] = (0x08856124u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 59u, 0x08927620u>(ctx, &aot_mem) && ctx.pc == 0x08856124u) goto L_08856124;
    return;
L_08856124:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_08856128;
L_08856128:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[11] << 2u);
    aot_gpr[8] = (aot_gpr[16] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (2181u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08856168u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(24992));
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 233u, 0x08933F88u>(ctx, &aot_mem) && ctx.pc == 0x08856168u) goto L_08856168;
    return;
L_08856168:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08856184;
      }
      goto L_08856180;
    }
L_08856180:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), 0u);
    goto L_08856184;
L_08856184:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0885618C;
L_0885618C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088561A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08856224;
      }
      goto L_088561C0;
    }
L_088561C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[18] + aot_gpr[17]);
      if (branch_taken) {
          goto L_088561E0;
      }
      goto L_088561D8;
    }
L_088561D8:
    aot_gpr[31] = (0x088561E0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 59u, 0x08927620u>(ctx, &aot_mem) && ctx.pc == 0x088561E0u) goto L_088561E0;
    return;
L_088561E0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[17]);
      if (branch_taken) {
          goto L_08856208;
      }
      goto L_088561F0;
    }
L_088561F0:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08856204u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 203u, 0x08943F50u>(ctx, &aot_mem) && ctx.pc == 0x08856204u) goto L_08856204;
    return;
L_08856204:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08856208;
L_08856208:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08856220;
      }
      goto L_08856218;
    }
L_08856218:
    aot_gpr[31] = (0x08856220u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 138u, 0x089337B8u>(ctx, &aot_mem) && ctx.pc == 0x08856220u) goto L_08856220;
    return;
L_08856220:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    goto L_08856224;
L_08856224:
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
L_0885623C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[18] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2392));
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8144));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08856278u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 50u, 0x089274DCu>(ctx, &aot_mem) && ctx.pc == 0x08856278u) goto L_08856278;
    return;
L_08856278:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(204));
    aot_gpr[31] = (0x08856284u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08856284u) goto L_08856284;
    return;
L_08856284:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    aot_gpr[31] = (0x08856290u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08856290u) goto L_08856290;
    return;
L_08856290:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(460));
    aot_gpr[31] = (0x0885629Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0885629Cu) goto L_0885629C;
    return;
L_0885629C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(588));
    aot_gpr[31] = (0x088562A8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088562A8u) goto L_088562A8;
    return;
L_088562A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(716), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(720), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(721), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6144));
    goto L_088562C4;
L_088562C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088562E0u);
    aot_gpr[5] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088562E0u) goto L_088562E0;
    return;
L_088562E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6144));
      if (branch_taken) {
          goto L_088562C4;
      }
      goto L_08856304;
    }
L_08856304:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x08856320u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08856320u) goto L_08856320;
    return;
L_08856320:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856350:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0885640C;
      }
      goto L_0885637C;
    }
L_0885637C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8144));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088563A4;
      }
      goto L_0885639C;
    }
L_0885639C:
    aot_gpr[31] = (0x088563A4u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 59u, 0x08927620u>(ctx, &aot_mem) && ctx.pc == 0x088563A4u) goto L_088563A4;
    return;
L_088563A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[18] = (2216u << 16u);
    goto L_088563B8;
L_088563B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088563C4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088563C4u) goto L_088563C4;
    return;
L_088563C4:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088563B8;
      }
      goto L_088563D4;
    }
L_088563D4:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088563E0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 63u, 0x08927680u>(ctx, &aot_mem) && ctx.pc == 0x088563E0u) goto L_088563E0;
    return;
L_088563E0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0885640C;
      }
      goto L_088563EC;
    }
L_088563EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0885640Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885640Cu) goto L_0885640C;
    return;
L_0885640C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856430:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(2392));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(204));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0885645Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0885645Cu) goto L_0885645C;
    return;
L_0885645C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    aot_gpr[31] = (0x08856468u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08856468u) goto L_08856468;
    return;
L_08856468:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(460));
    aot_gpr[31] = (0x08856474u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08856474u) goto L_08856474;
    return;
L_08856474:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(588));
    aot_gpr[31] = (0x08856480u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08856480u) goto L_08856480;
    return;
L_08856480:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(716), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(720), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(721), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2408));
    aot_gpr[31] = (0x088564A8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2424));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088564A8u) goto L_088564A8;
    return;
L_088564A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088564CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(724)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856860;
      }
      goto L_08856508;
    }
L_08856508:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088566D0;
      }
      goto L_08856514;
    }
L_08856514:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08856724;
      }
      goto L_0885651C;
    }
L_0885651C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08856780;
      }
      goto L_08856524;
    }
L_08856524:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08856814;
      }
      goto L_0885652C;
    }
L_0885652C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08856844;
      }
      goto L_08856534;
    }
L_08856534:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7923)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088565C0;
      }
      goto L_08856548;
    }
L_08856548:
    aot_gpr[31] = (0x08856550u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 56u, 0x0886D384u>(ctx, &aot_mem) && ctx.pc == 0x08856550u) goto L_08856550;
    return;
L_08856550:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088565C0;
      }
      goto L_08856558;
    }
L_08856558:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08856568u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2436));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08856568u) goto L_08856568;
    return;
L_08856568:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(2492));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (aot_gpr[2] | 0u);
    aot_gpr[10] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08856594u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2456));
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 18u, 0x0884A104u>(ctx, &aot_mem) && ctx.pc == 0x08856594u) goto L_08856594;
    return;
L_08856594:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088565A0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088565A0u) goto L_088565A0;
    return;
L_088565A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(7923), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088566C8;
      }
      goto L_088565C0;
    }
L_088565C0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8002)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08856680;
      }
      goto L_088565D4;
    }
L_088565D4:
    aot_gpr[31] = (0x088565DCu);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 56u, 0x0886D384u>(ctx, &aot_mem) && ctx.pc == 0x088565DCu) goto L_088565DC;
    return;
L_088565DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856680;
      }
      goto L_088565E4;
    }
L_088565E4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088565F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2436));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088565F4u) goto L_088565F4;
    return;
L_088565F4:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(2508));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0885660Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0885660Cu) goto L_0885660C;
    return;
L_0885660C:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[7] + static_cast<std::uint32_t>(2532));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08856634u);
    aot_gpr[10] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 18u, 0x0884A104u>(ctx, &aot_mem) && ctx.pc == 0x08856634u) goto L_08856634;
    return;
L_08856634:
    aot_gpr[21] = (0u | 1u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08856658u);
    aot_gpr[10] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 18u, 0x0884A104u>(ctx, &aot_mem) && ctx.pc == 0x08856658u) goto L_08856658;
    return;
L_08856658:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08856664u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08856664u) goto L_08856664;
    return;
L_08856664:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8002), static_cast<std::uint8_t>(aot_gpr[21]));
      if (branch_taken) {
          goto L_088566C8;
      }
      goto L_08856680;
    }
L_08856680:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(204));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08856690u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 113u, 0x08876620u>(ctx, &aot_mem) && ctx.pc == 0x08856690u) goto L_08856690;
    return;
L_08856690:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088566C0;
      }
      goto L_08856698;
    }
L_08856698:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088566B0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2408));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088566B0u) goto L_088566B0;
    return;
L_088566B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088566C8;
      }
      goto L_088566C0;
    }
L_088566C0:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088566C8;
L_088566C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856860;
      }
      goto L_088566D0;
    }
L_088566D0:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(204));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088566E0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 113u, 0x08876620u>(ctx, &aot_mem) && ctx.pc == 0x088566E0u) goto L_088566E0;
    return;
L_088566E0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088566F4;
      }
      goto L_088566E8;
    }
L_088566E8:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0885671C;
      }
      goto L_088566F4;
    }
L_088566F4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08856708u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2436));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08856708u) goto L_08856708;
    return;
L_08856708:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0885671C;
L_0885671C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856860;
      }
      goto L_08856724;
    }
L_08856724:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6976));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08856748;
      }
      goto L_0885673C;
    }
L_0885673C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26500)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856778;
      }
      goto L_08856748;
    }
L_08856748:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08856754u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08856754u) goto L_08856754;
    return;
L_08856754:
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x08856770u);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x08856770u) goto L_08856770;
    return;
L_08856770:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08856778;
L_08856778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856860;
      }
      goto L_08856780;
    }
L_08856780:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08856790u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2408));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08856790u) goto L_08856790;
    return;
L_08856790:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0885679Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 228u, 0x08889DD0u>(ctx, &aot_mem) && ctx.pc == 0x0885679Cu) goto L_0885679C;
    return;
L_0885679C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885680C;
      }
      goto L_088567A4;
    }
L_088567A4:
    aot_gpr[31] = (0x088567ACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 20u, 0x089343A0u>(ctx, &aot_mem) && ctx.pc == 0x088567ACu) goto L_088567AC;
    return;
L_088567AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x088567C4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2392));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088567C4u) goto L_088567C4;
    return;
L_088567C4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08856804;
      }
      goto L_088567D8;
    }
L_088567D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856804;
      }
      goto L_088567E8;
    }
L_088567E8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[31] = (0x088567F8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 148u, 0x08888EB4u>(ctx, &aot_mem) && ctx.pc == 0x088567F8u) goto L_088567F8;
    return;
L_088567F8:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0885680C;
      }
      goto L_08856804;
    }
L_08856804:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0885680C;
L_0885680C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856860;
      }
      goto L_08856814;
    }
L_08856814:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_0885683C;
      }
      goto L_0885682C;
    }
L_0885682C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885683C;
      }
      goto L_08856834;
    }
L_08856834:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0885683C;
L_0885683C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856860;
      }
      goto L_08856844;
    }
L_08856844:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25237)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08856860;
      }
      goto L_08856860;
    }
L_08856860:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(720)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856A10;
      }
      goto L_0885686C;
    }
L_0885686C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(2408));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(204));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0885688Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2552));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0885688Cu) goto L_0885688C;
    return;
L_0885688C:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088568A4u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2576));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x088568A4u) goto L_088568A4;
    return;
L_088568A4:
    aot_gpr[4] = (0u | 261u);
    aot_gpr[31] = (0x088568B0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088568B0u) goto L_088568B0;
    return;
L_088568B0:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088568C8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2600));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x088568C8u) goto L_088568C8;
    return;
L_088568C8:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(460));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088568E0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2624));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x088568E0u) goto L_088568E0;
    return;
L_088568E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(716)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), aot_gpr[4]);
      if (branch_taken) {
          goto L_088568F8;
      }
      goto L_088568EC;
    }
L_088568EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
      if (branch_taken) {
          goto L_08856A10;
      }
      goto L_088568F8;
    }
L_088568F8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x08856904u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(588));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08856904u) goto L_08856904;
    return;
L_08856904:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856A10;
      }
      goto L_0885690C;
    }
L_0885690C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08856A10;
      }
      goto L_0885691C;
    }
L_0885691C:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(588));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x0885692Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0885692Cu) goto L_0885692C;
    return;
L_0885692C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0885693Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2392));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0885693Cu) goto L_0885693C;
    return;
L_0885693C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856A10;
      }
      goto L_08856944;
    }
L_08856944:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(721)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (24948u << 16u);
      if (branch_taken) {
          goto L_088569A0;
      }
      goto L_08856950;
    }
L_08856950:
    aot_gpr[4] = (24948u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24932));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (28787u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28767));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (24936u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17244));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (23667u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28265));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (28524u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28245));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (23667u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(27491));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088569E8;
      }
      goto L_088569A0;
    }
L_088569A0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24932));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (28787u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28767));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (28261u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19804));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (18012u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29557));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (29806u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28530));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (23652u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28261));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    goto L_088569E8;
L_088569E8:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x088569F4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088569F4u) goto L_088569F4;
    return;
L_088569F4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08856A04u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2652));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x08856A04u) goto L_08856A04;
    return;
L_08856A04:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08856A10u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_08856058;
L_08856A10:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2408));
    aot_gpr[31] = (0x08856A28u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2424));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08856A28u) goto L_08856A28;
    return;
L_08856A28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08856A60;
      }
      goto L_08856A34;
    }
L_08856A34:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08856A40u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08856A40u) goto L_08856A40;
    return;
L_08856A40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (57344u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08856A70;
      }
      goto L_08856A60;
    }
L_08856A60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08856A70;
L_08856A70:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856A94:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856AB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08856B18;
      }
      goto L_08856AD0;
    }
L_08856AD0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8080));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08856AECu);
    aot_gpr[5] = (0u | 3u);
    goto L_08856AB4;
L_08856AEC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08856B18;
      }
      goto L_08856AF8;
    }
L_08856AF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08856B18u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08856B18u) goto L_08856B18;
    return;
L_08856B18:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856B2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[9] & 255u);
    aot_gpr[23] = (aot_gpr[10] & 255u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08856BA0u);
    aot_gpr[6] = (0u | 68u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08856BA0u) goto L_08856BA0;
    return;
L_08856BA0:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08856BC4;
      }
      goto L_08856BAC;
    }
L_08856BAC:
    aot_gpr[31] = (0x08856BB4u);
    aot_gpr[5] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 12u, 0x08A2D0B8u>(ctx, &aot_mem) && ctx.pc == 0x08856BB4u) goto L_08856BB4;
    return;
L_08856BB4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8080));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[21] | 0u);
    goto L_08856BC4;
L_08856BC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(64), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (aot_gpr[30] | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08856BF8u);
    aot_gpr[10] = (aot_gpr[23] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08856BF8u) goto L_08856BF8;
    return;
L_08856BF8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(2672));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08856C18u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2684));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08856C18u) goto L_08856C18;
    return;
L_08856C18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x08856C24u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x08856C24u) goto L_08856C24;
    return;
L_08856C24:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08856C38u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2700));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08856C38u) goto L_08856C38;
    return;
L_08856C38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x08856C44u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x08856C44u) goto L_08856C44;
    return;
L_08856C44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08856C50u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08856C50u) goto L_08856C50;
    return;
L_08856C50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(620), aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(624), aot_gpr[5]);
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
L_08856C90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[23] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x08856CD4u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08856CD4u) goto L_08856CD4;
    return;
L_08856CD4:
    aot_gpr[20] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(2672));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08856CF4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08856CF4u) goto L_08856CF4;
    return;
L_08856CF4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08856D08u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 196u, 0x08858D30u>(ctx, &aot_mem) && ctx.pc == 0x08856D08u) goto L_08856D08;
    return;
L_08856D08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856D78;
      }
      goto L_08856D14;
    }
L_08856D14:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x08856D24u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 223u, 0x088B7EE8u>(ctx, &aot_mem) && ctx.pc == 0x08856D24u) goto L_08856D24;
    return;
L_08856D24:
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08856D3Cu);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 201u, 0x08858DC0u>(ctx, &aot_mem) && ctx.pc == 0x08856D3Cu) goto L_08856D3C;
    return;
L_08856D3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (65280u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08856D70;
      }
      goto L_08856D60;
    }
L_08856D60:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08856D70;
      }
      goto L_08856D68;
    }
L_08856D68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08856E40;
      }
      goto L_08856D70;
    }
L_08856D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856DEC;
      }
      goto L_08856D78;
    }
L_08856D78:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08856DDC;
      }
      goto L_08856D80;
    }
L_08856D80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08856D8Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 8u, 0x088570C0u>(ctx, &aot_mem) && ctx.pc == 0x08856D8Cu) goto L_08856D8C;
    return;
L_08856D8C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856DDC;
      }
      goto L_08856D98;
    }
L_08856D98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08856DB0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 201u, 0x08858DC0u>(ctx, &aot_mem) && ctx.pc == 0x08856DB0u) goto L_08856DB0;
    return;
L_08856DB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (65280u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08856DE4;
      }
      goto L_08856DD4;
    }
L_08856DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856DEC;
      }
      goto L_08856DDC;
    }
L_08856DDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08856E40;
      }
      goto L_08856DE4;
    }
L_08856DE4:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08856E10;
      }
      goto L_08856DEC;
    }
L_08856DEC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08856E00u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2700));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08856E00u) goto L_08856E00;
    return;
L_08856E00:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    aot_gpr[6] = (2214u << 16u);
      if (branch_taken) {
          goto L_08856E18;
      }
      goto L_08856E08;
    }
L_08856E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856E38;
      }
      goto L_08856E10;
    }
L_08856E10:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08856E40;
      }
      goto L_08856E18;
    }
L_08856E18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08856E28u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2720));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08856E28u) goto L_08856E28;
    return;
L_08856E28:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08856E38;
      }
      goto L_08856E30;
    }
L_08856E30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    goto L_08856E38;
L_08856E38:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    goto L_08856E40;
L_08856E40:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856E6C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24160), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856E8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856EF8;
      }
      goto L_08856EAC;
    }
L_08856EAC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26500)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_08856EE0;
      }
      goto L_08856EC4;
    }
L_08856EC4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08856ED0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2744));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08856ED0u) goto L_08856ED0;
    return;
L_08856ED0:
    aot_gpr[4] = (aot_gpr[2] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(25237), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08856EF8;
      }
      goto L_08856EE0;
    }
L_08856EE0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08856EECu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2760));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08856EECu) goto L_08856EEC;
    return;
L_08856EEC:
    aot_gpr[4] = (aot_gpr[2] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(25237), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08856EF8;
L_08856EF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856F08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(26492)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08856F4C;
      }
      goto L_08856F38;
    }
L_08856F38:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    aot_gpr[31] = (0x08856F48u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(105))))));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 189u, 0x088A0C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08856F48u) goto L_08856F48;
    return;
L_08856F48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(708)));
    goto L_08856F4C;
L_08856F4C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 6u, 0x08857080u>(ctx, &aot_mem); return;
      }
      goto L_08856F54;
    }
L_08856F54:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08856F68u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2776));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08856F68u) goto L_08856F68;
    return;
L_08856F68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(512)));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] << (aot_gpr[7] & 31u));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(27980)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2248));
    aot_gpr[9] = (aot_gpr[7] & 255u);
    aot_gpr[9] = (aot_gpr[9] << 2u);
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[8] = (aot_gpr[7] & 255u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(2264));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[9] = (aot_gpr[7] & 255u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6824));
    aot_gpr[5] = (aot_gpr[9] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(512)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(51)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1104)));
    aot_gpr[5] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (2218u << 16u);
    ctx.pc = 0x08857000u; return;
}

void recomp_unit_0082(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0082_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_82(Runtime &runtime) {
    runtime.register_generated_unit(82u, 0x08856000u, 4096u, &recomp_unit_0082, &recomp_unit_0082_entry);
    runtime.register_function(0x08856000u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856038u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856058u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856080u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856090u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856098u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088560ACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088560B8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088560C4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088560CCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856100u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856108u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885611Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856124u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856128u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856168u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856180u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856184u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885618Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088561A0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088561C0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088561D8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088561E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088561F0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856204u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856208u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856218u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856220u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856224u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885623Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856278u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856284u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856290u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885629Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088562A8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088562C4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088562E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856304u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856320u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856350u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885637Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885639Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088563A4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088563B8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088563C4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088563D4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088563E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088563ECu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885640Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856430u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885645Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856468u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856474u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856480u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088564A8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088564CCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856508u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856514u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885651Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856524u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885652Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856534u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856548u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856550u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856558u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856568u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856594u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088565A0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088565C0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088565D4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088565DCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088565E4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088565F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885660Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856634u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856658u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856664u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856680u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856690u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856698u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088566B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088566C0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088566C8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088566D0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088566E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088566E8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088566F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856708u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885671Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856724u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885673Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856748u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856754u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856770u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856778u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856780u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856790u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885679Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088567A4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088567ACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088567C4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088567D8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088567E8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088567F8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856804u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885680Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856814u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885682Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856834u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885683Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856844u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856860u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885686Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885688Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088568A4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088568B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088568C8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088568E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088568ECu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088568F8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856904u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885690Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885691Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885692Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0885693Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856944u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856950u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088569A0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088569E8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x088569F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856A04u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856A10u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856A28u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856A34u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856A40u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856A60u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856A70u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856A94u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856AB4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856AD0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856AECu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856AF8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856B18u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856B2Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856BA0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856BACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856BB4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856BC4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856BF8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856C18u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856C24u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856C38u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856C44u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856C50u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856C90u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856CD4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856CF4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856D08u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856D14u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856D24u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856D3Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856D60u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856D68u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856D70u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856D78u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856D80u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856D8Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856D98u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856DB0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856DD4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856DDCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856DE4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856DECu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856E00u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856E08u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856E10u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856E18u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856E28u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856E30u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856E38u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856E40u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856E6Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856E8Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856EACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856EC4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856ED0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856EE0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856EECu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856EF8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856F08u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856F38u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856F48u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856F4Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856F54u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x08856F68u, &recomp_unit_0082, "recomp_unit_0082");
}
} // namespace psprecomp
