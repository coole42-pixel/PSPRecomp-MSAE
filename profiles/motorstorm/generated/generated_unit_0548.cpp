#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0548[1024] = {
    1, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 6, 7, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0,
    13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0,
    20, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0,
    27, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0,
    0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 58, 59, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75,
    0, 76, 0, 77, 0, 78, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 81, 0, 82, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 86, 87,
    0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97,
    0, 98, 0, 0, 99, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103,
    0, 104, 0, 105, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0,
    0, 0, 0, 115, 0, 116, 117, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0,
    123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 135, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0,
    0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0,
    0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 165, 0, 0,
    0, 166, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 174,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0,
    0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190,
    0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200,
    0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 209,
    0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 218, 0, 219,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0,
    0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 0, 232, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 250, 251,
    0, 0, 0, 0, 0, 252, 253, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 260, 261,
};
void recomp_unit_0548_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A28000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0548[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A28000;
    case 2u: goto L_08A2800C;
    case 3u: goto L_08A28014;
    case 4u: goto L_08A2801C;
    case 5u: goto L_08A28030;
    case 6u: goto L_08A28038;
    case 7u: goto L_08A2803C;
    case 8u: goto L_08A28040;
    case 9u: goto L_08A28060;
    case 10u: goto L_08A28068;
    case 11u: goto L_08A28070;
    case 12u: goto L_08A28078;
    case 13u: goto L_08A28080;
    case 14u: goto L_08A2808C;
    case 15u: goto L_08A2809C;
    case 16u: goto L_08A280B8;
    case 17u: goto L_08A280D8;
    case 18u: goto L_08A280EC;
    case 19u: goto L_08A280F8;
    case 20u: goto L_08A28100;
    case 21u: goto L_08A28108;
    case 22u: goto L_08A28114;
    case 23u: goto L_08A28124;
    case 24u: goto L_08A2815C;
    case 25u: goto L_08A28164;
    case 26u: goto L_08A28174;
    case 27u: goto L_08A28180;
    case 28u: goto L_08A28188;
    case 29u: goto L_08A28194;
    case 30u: goto L_08A281A4;
    case 31u: goto L_08A281AC;
    case 32u: goto L_08A281B4;
    case 33u: goto L_08A281C4;
    case 34u: goto L_08A281CC;
    case 35u: goto L_08A281D8;
    case 36u: goto L_08A281E8;
    case 37u: goto L_08A281F8;
    case 38u: goto L_08A28204;
    case 39u: goto L_08A28214;
    case 40u: goto L_08A28238;
    case 41u: goto L_08A2827C;
    case 42u: goto L_08A28284;
    case 43u: goto L_08A28290;
    case 44u: goto L_08A282BC;
    case 45u: goto L_08A282DC;
    case 46u: goto L_08A28304;
    case 47u: goto L_08A28318;
    case 48u: goto L_08A2832C;
    case 49u: goto L_08A28334;
    case 50u: goto L_08A28340;
    case 51u: goto L_08A28350;
    case 52u: goto L_08A28364;
    case 53u: goto L_08A283B0;
    case 54u: goto L_08A283C0;
    case 55u: goto L_08A283CC;
    case 56u: goto L_08A283D8;
    case 57u: goto L_08A283E4;
    case 58u: goto L_08A283EC;
    case 59u: goto L_08A283F0;
    case 60u: goto L_08A2840C;
    case 61u: goto L_08A2841C;
    case 62u: goto L_08A28424;
    case 63u: goto L_08A28430;
    case 64u: goto L_08A28454;
    case 65u: goto L_08A28480;
    case 66u: goto L_08A28488;
    case 67u: goto L_08A28494;
    case 68u: goto L_08A2849C;
    case 69u: goto L_08A284AC;
    case 70u: goto L_08A284B8;
    case 71u: goto L_08A284C0;
    case 72u: goto L_08A284CC;
    case 73u: goto L_08A284E4;
    case 74u: goto L_08A284F0;
    case 75u: goto L_08A284FC;
    case 76u: goto L_08A28504;
    case 77u: goto L_08A2850C;
    case 78u: goto L_08A28514;
    case 79u: goto L_08A28518;
    case 80u: goto L_08A28540;
    case 81u: goto L_08A28544;
    case 82u: goto L_08A2854C;
    case 83u: goto L_08A28554;
    case 84u: goto L_08A2855C;
    case 85u: goto L_08A28568;
    case 86u: goto L_08A28578;
    case 87u: goto L_08A2857C;
    case 88u: goto L_08A28590;
    case 89u: goto L_08A2859C;
    case 90u: goto L_08A285A8;
    case 91u: goto L_08A285B4;
    case 92u: goto L_08A285BC;
    case 93u: goto L_08A285DC;
    case 94u: goto L_08A285E4;
    case 95u: goto L_08A285EC;
    case 96u: goto L_08A285F4;
    case 97u: goto L_08A285FC;
    case 98u: goto L_08A28604;
    case 99u: goto L_08A28610;
    case 100u: goto L_08A28614;
    case 101u: goto L_08A28630;
    case 102u: goto L_08A28674;
    case 103u: goto L_08A2867C;
    case 104u: goto L_08A28684;
    case 105u: goto L_08A2868C;
    case 106u: goto L_08A28690;
    case 107u: goto L_08A2869C;
    case 108u: goto L_08A286AC;
    case 109u: goto L_08A286BC;
    case 110u: goto L_08A286C4;
    case 111u: goto L_08A286CC;
    case 112u: goto L_08A286D8;
    case 113u: goto L_08A286EC;
    case 114u: goto L_08A286F8;
    case 115u: goto L_08A2870C;
    case 116u: goto L_08A28714;
    case 117u: goto L_08A28718;
    case 118u: goto L_08A28720;
    case 119u: goto L_08A2872C;
    case 120u: goto L_08A28758;
    case 121u: goto L_08A28768;
    case 122u: goto L_08A28778;
    case 123u: goto L_08A28780;
    case 124u: goto L_08A28788;
    case 125u: goto L_08A28790;
    case 126u: goto L_08A28798;
    case 127u: goto L_08A287A0;
    case 128u: goto L_08A287AC;
    case 129u: goto L_08A287B4;
    case 130u: goto L_08A287BC;
    case 131u: goto L_08A287C4;
    case 132u: goto L_08A287CC;
    case 133u: goto L_08A287D4;
    case 134u: goto L_08A287F0;
    case 135u: goto L_08A28804;
    case 136u: goto L_08A28814;
    case 137u: goto L_08A2881C;
    case 138u: goto L_08A28824;
    case 139u: goto L_08A2883C;
    case 140u: goto L_08A28844;
    case 141u: goto L_08A28854;
    case 142u: goto L_08A28864;
    case 143u: goto L_08A2886C;
    case 144u: goto L_08A28874;
    case 145u: goto L_08A28888;
    case 146u: goto L_08A28890;
    case 147u: goto L_08A28898;
    case 148u: goto L_08A288AC;
    case 149u: goto L_08A288B8;
    case 150u: goto L_08A288C8;
    case 151u: goto L_08A288D0;
    case 152u: goto L_08A288DC;
    case 153u: goto L_08A288EC;
    case 154u: goto L_08A288F8;
    case 155u: goto L_08A28908;
    case 156u: goto L_08A28918;
    case 157u: goto L_08A28920;
    case 158u: goto L_08A28930;
    case 159u: goto L_08A28940;
    case 160u: goto L_08A28948;
    case 161u: goto L_08A28950;
    case 162u: goto L_08A28958;
    case 163u: goto L_08A28960;
    case 164u: goto L_08A28968;
    case 165u: goto L_08A28974;
    case 166u: goto L_08A28984;
    case 167u: goto L_08A28990;
    case 168u: goto L_08A2899C;
    case 169u: goto L_08A289A4;
    case 170u: goto L_08A289BC;
    case 171u: goto L_08A289E0;
    case 172u: goto L_08A289E8;
    case 173u: goto L_08A289F0;
    case 174u: goto L_08A289FC;
    case 175u: goto L_08A28A24;
    case 176u: goto L_08A28A34;
    case 177u: goto L_08A28A44;
    case 178u: goto L_08A28A4C;
    case 179u: goto L_08A28A58;
    case 180u: goto L_08A28A74;
    case 181u: goto L_08A28A84;
    case 182u: goto L_08A28A8C;
    case 183u: goto L_08A28A9C;
    case 184u: goto L_08A28AAC;
    case 185u: goto L_08A28AB4;
    case 186u: goto L_08A28AC4;
    case 187u: goto L_08A28AD4;
    case 188u: goto L_08A28ADC;
    case 189u: goto L_08A28AEC;
    case 190u: goto L_08A28AFC;
    case 191u: goto L_08A28B04;
    case 192u: goto L_08A28B14;
    case 193u: goto L_08A28B24;
    case 194u: goto L_08A28B2C;
    case 195u: goto L_08A28B3C;
    case 196u: goto L_08A28B4C;
    case 197u: goto L_08A28B54;
    case 198u: goto L_08A28B5C;
    case 199u: goto L_08A28B6C;
    case 200u: goto L_08A28B7C;
    case 201u: goto L_08A28B84;
    case 202u: goto L_08A28B90;
    case 203u: goto L_08A28BA0;
    case 204u: goto L_08A28BB0;
    case 205u: goto L_08A28BB8;
    case 206u: goto L_08A28BCC;
    case 207u: goto L_08A28BD8;
    case 208u: goto L_08A28BEC;
    case 209u: goto L_08A28BFC;
    case 210u: goto L_08A28C08;
    case 211u: goto L_08A28C14;
    case 212u: goto L_08A28C24;
    case 213u: goto L_08A28C2C;
    case 214u: goto L_08A28C54;
    case 215u: goto L_08A28CB8;
    case 216u: goto L_08A28CE0;
    case 217u: goto L_08A28CE8;
    case 218u: goto L_08A28CF4;
    case 219u: goto L_08A28CFC;
    case 220u: goto L_08A28D10;
    case 221u: goto L_08A28D70;
    case 222u: goto L_08A28D78;
    case 223u: goto L_08A28D84;
    case 224u: goto L_08A28D90;
    case 225u: goto L_08A28DA0;
    case 226u: goto L_08A28DFC;
    case 227u: goto L_08A28E04;
    case 228u: goto L_08A28E3C;
    case 229u: goto L_08A28E48;
    case 230u: goto L_08A28E5C;
    case 231u: goto L_08A28E64;
    case 232u: goto L_08A28E70;
    case 233u: goto L_08A28E80;
    case 234u: goto L_08A28E98;
    case 235u: goto L_08A28EA0;
    case 236u: goto L_08A28EA8;
    case 237u: goto L_08A28EBC;
    case 238u: goto L_08A28EC4;
    case 239u: goto L_08A28ED0;
    case 240u: goto L_08A28ED8;
    case 241u: goto L_08A28EE8;
    case 242u: goto L_08A28F08;
    case 243u: goto L_08A28F10;
    case 244u: goto L_08A28F1C;
    case 245u: goto L_08A28F34;
    case 246u: goto L_08A28F40;
    case 247u: goto L_08A28F48;
    case 248u: goto L_08A28F54;
    case 249u: goto L_08A28F70;
    case 250u: goto L_08A28F78;
    case 251u: goto L_08A28F7C;
    case 252u: goto L_08A28F94;
    case 253u: goto L_08A28F98;
    case 254u: goto L_08A28FA0;
    case 255u: goto L_08A28FB4;
    case 256u: goto L_08A28FC8;
    case 257u: goto L_08A28FD8;
    case 258u: goto L_08A28FE4;
    case 259u: goto L_08A28FEC;
    case 260u: goto L_08A28FF8;
    case 261u: goto L_08A28FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A28000:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[31] = (0x08A2800Cu);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 87u, 0x089F0508u>(ctx, &aot_mem) && ctx.pc == 0x08A2800Cu) goto L_08A2800C;
    return;
L_08A2800C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 600u);
      if (branch_taken) {
          goto L_08A2803C;
      }
      goto L_08A28014;
    }
L_08A28014:
    aot_gpr[31] = (0x08A2801Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 99u, 0x08A39508u>(ctx, &aot_mem) && ctx.pc == 0x08A2801Cu) goto L_08A2801C;
    return;
L_08A2801C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1028), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 301u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28078;
      }
      goto L_08A28030;
    }
L_08A28030:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 302u);
      if (branch_taken) {
          goto L_08A28060;
      }
      goto L_08A28038;
    }
L_08A28038:
    aot_gpr[4] = (0u | 600u);
    goto L_08A2803C;
L_08A2803C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1028), aot_gpr[4]);
    goto L_08A28040;
L_08A28040:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28060:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 303u);
      if (branch_taken) {
          goto L_08A28078;
      }
      goto L_08A28068;
    }
L_08A28068:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 307u);
      if (branch_taken) {
          goto L_08A28078;
      }
      goto L_08A28070;
    }
L_08A28070:
    if (aot_gpr[4] != aot_gpr[5]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
        goto L_08A28080;
    }
    goto L_08A28078;
L_08A28078:
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    goto L_08A28080;
L_08A28080:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A2808Cu);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x08A2808Cu) goto L_08A2808C;
    return;
L_08A2808C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[2] = (0u | 0u);
    if (aot_gpr[17] != 0u) {
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A2809C;
    }
    goto L_08A2809C;
L_08A2809C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A280B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 809u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A280D8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2376));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A280D8u) goto L_08A280D8;
    return;
L_08A280D8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A280ECu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3108));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08A280ECu) goto L_08A280EC;
    return;
L_08A280EC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08A280F8;
    }
    goto L_08A280F8;
L_08A280F8:
    aot_gpr[31] = (0x08A28100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A28100u) goto L_08A28100;
    return;
L_08A28100:
    aot_gpr[31] = (0x08A28108u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28108u) goto L_08A28108;
    return;
L_08A28108:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A28114u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A28114u) goto L_08A28114;
    return;
L_08A28114:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28124:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[20]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[31]);
    aot_gpr[31] = (0x08A2815Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 171u, 0x08A44D78u>(ctx, &aot_mem) && ctx.pc == 0x08A2815Cu) goto L_08A2815C;
    return;
L_08A2815C:
    aot_gpr[31] = (0x08A28164u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28164u) goto L_08A28164;
    return;
L_08A28164:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A28174u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 172u, 0x08A44DB4u>(ctx, &aot_mem) && ctx.pc == 0x08A28174u) goto L_08A28174;
    return;
L_08A28174:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A281A4;
      }
      goto L_08A28180;
    }
L_08A28180:
    aot_gpr[31] = (0x08A28188u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3160));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28188u) goto L_08A28188;
    return;
L_08A28188:
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[31] = (0x08A28194u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28194u) goto L_08A28194;
    return;
L_08A28194:
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A281A4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 172u, 0x08A44DB4u>(ctx, &aot_mem) && ctx.pc == 0x08A281A4u) goto L_08A281A4;
    return;
L_08A281A4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A281C4;
      }
      goto L_08A281AC;
    }
L_08A281AC:
    aot_gpr[31] = (0x08A281B4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A281B4u) goto L_08A281B4;
    return;
L_08A281B4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A281C4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 172u, 0x08A44DB4u>(ctx, &aot_mem) && ctx.pc == 0x08A281C4u) goto L_08A281C4;
    return;
L_08A281C4:
    aot_gpr[31] = (0x08A281CCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0547_entry, 547u, 185u, 0x08A27A38u>(ctx, &aot_mem) && ctx.pc == 0x08A281CCu) goto L_08A281CC;
    return;
L_08A281CC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A281D8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A281D8u) goto L_08A281D8;
    return;
L_08A281D8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A281E8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 172u, 0x08A44DB4u>(ctx, &aot_mem) && ctx.pc == 0x08A281E8u) goto L_08A281E8;
    return;
L_08A281E8:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(88));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A281F8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0577_entry, 577u, 2u, 0x08A45DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A281F8u) goto L_08A281F8;
    return;
L_08A281F8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A28204u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 185u, 0x08A44EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A28204u) goto L_08A28204;
    return;
L_08A28204:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A28214u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0547_entry, 547u, 239u, 0x08A27D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28214u) goto L_08A28214;
    return;
L_08A28214:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28238:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1044)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(1044), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[19] + static_cast<std::uint32_t>(1008));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A2827Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2827Cu) goto L_08A2827C;
    return;
L_08A2827C:
    aot_gpr[31] = (0x08A28284u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 18u, 0x08A460F8u>(ctx, &aot_mem) && ctx.pc == 0x08A28284u) goto L_08A28284;
    return;
L_08A28284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1000)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A282BC;
      }
      goto L_08A28290;
    }
L_08A28290:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1004)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A282BCu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A282BCu) goto L_08A282BC;
    return;
L_08A282BC:
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
L_08A282DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(996)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A283EC;
      }
      goto L_08A28304;
    }
L_08A28304:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(88));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A28318u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28318u) goto L_08A28318;
    return;
L_08A28318:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(104));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A2832Cu);
    aot_gpr[6] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2832Cu) goto L_08A2832C;
    return;
L_08A2832C:
    aot_gpr[31] = (0x08A28334u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 171u, 0x08A44D78u>(ctx, &aot_mem) && ctx.pc == 0x08A28334u) goto L_08A28334;
    return;
L_08A28334:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x08A28340u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28340u) goto L_08A28340;
    return;
L_08A28340:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A28350u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 172u, 0x08A44DB4u>(ctx, &aot_mem) && ctx.pc == 0x08A28350u) goto L_08A28350;
    return;
L_08A28350:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(140));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A28364u);
    aot_gpr[6] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28364u) goto L_08A28364;
    return;
L_08A28364:
    aot_gpr[4] = (25401u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28787));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (13363u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12395));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (25708u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29496));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (12336u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12336));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A283B0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A283B0u) goto L_08A283B0;
    return;
L_08A283B0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A283C0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 172u, 0x08A44DB4u>(ctx, &aot_mem) && ctx.pc == 0x08A283C0u) goto L_08A283C0;
    return;
L_08A283C0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A283CCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0577_entry, 577u, 2u, 0x08A45DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A283CCu) goto L_08A283CC;
    return;
L_08A283CC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A283D8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 185u, 0x08A44EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A283D8u) goto L_08A283D8;
    return;
L_08A283D8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A283E4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A283E4u) goto L_08A283E4;
    return;
L_08A283E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A283F0;
      }
      goto L_08A283EC;
    }
L_08A283EC:
    aot_gpr[2] = (0u | 1u);
    goto L_08A283F0;
L_08A283F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2840C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A2841Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x08A2841Cu) goto L_08A2841C;
    return;
L_08A2841C:
    aot_gpr[31] = (0x08A28424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 19u, 0x0898E12Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28424u) goto L_08A28424;
    return;
L_08A28424:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28430:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1000)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28614;
      }
      goto L_08A28454;
    }
L_08A28454:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1004)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A28480u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A28480u) goto L_08A28480;
    return;
L_08A28480:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1048)));
        goto L_08A285FC;
    }
    goto L_08A28488;
L_08A28488:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[18] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_08A2849C;
      }
      goto L_08A28494;
    }
L_08A28494:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28614;
      }
      goto L_08A2849C;
    }
L_08A2849C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1040)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A284F0;
      }
      goto L_08A284AC;
    }
L_08A284AC:
    aot_gpr[6] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A284C0;
      }
      goto L_08A284B8;
    }
L_08A284B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A284C0;
      }
      goto L_08A284C0;
    }
L_08A284C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1020)));
    aot_gpr[31] = (0x08A284CCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A284CCu) goto L_08A284CC;
    return;
L_08A284CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1040)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1020)));
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1040), aot_gpr[6]);
    aot_gpr[31] = (0x08A284E4u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A284E4u) goto L_08A284E4;
    return;
L_08A284E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28544;
      }
      goto L_08A284F0;
    }
L_08A284F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1048)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A28514;
      }
      goto L_08A284FC;
    }
L_08A284FC:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2850C;
      }
      goto L_08A28504;
    }
L_08A28504:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2850C;
      }
      goto L_08A2850C;
    }
L_08A2850C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A28518;
      }
      goto L_08A28514;
    }
L_08A28514:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_08A28518;
L_08A28518:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A28540u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A28540u) goto L_08A28540;
    return;
L_08A28540:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_08A28544;
L_08A28544:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A2855C;
      }
      goto L_08A2854C;
    }
L_08A2854C:
    aot_gpr[31] = (0x08A28554u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 225u, 0x08A26F98u>(ctx, &aot_mem) && ctx.pc == 0x08A28554u) goto L_08A28554;
    return;
L_08A28554:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A2857C;
      }
      goto L_08A2855C;
    }
L_08A2855C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2857C;
      }
      goto L_08A28568;
    }
L_08A28568:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A28578u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A28238;
L_08A28578:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A2857C;
L_08A2857C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1052)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1052), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A285E4;
      }
      goto L_08A28590;
    }
L_08A28590:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1048)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1000)));
        goto L_08A285B4;
    }
    goto L_08A2859C;
L_08A2859C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1052)));
    if (aot_gpr[6] != aot_gpr[4]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1000)));
        goto L_08A285B4;
    }
    goto L_08A285A8;
L_08A285A8:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A285E4;
      }
      goto L_08A285B4;
    }
L_08A285B4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A285E4;
      }
      goto L_08A285BC;
    }
L_08A285BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1004)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(72));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A285DCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A285DCu) goto L_08A285DC;
    return;
L_08A285DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08A285E4;
L_08A285E4:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A285F4;
      }
      goto L_08A285EC;
    }
L_08A285EC:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28614;
      }
      goto L_08A285F4;
    }
L_08A285F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28614;
      }
      goto L_08A285FC;
    }
L_08A285FC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28614;
      }
      goto L_08A28604;
    }
L_08A28604:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1044)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A28614;
      }
      goto L_08A28610;
    }
L_08A28610:
    aot_gpr[17] = (0u | 1u);
    goto L_08A28614;
L_08A28614:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28630:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-544));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(532), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 13u);
    aot_gpr[6] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(536), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(540), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[19] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A2867C;
      }
      goto L_08A28674;
    }
L_08A28674:
    if (aot_gpr[4] != aot_gpr[6]) {
    aot_gpr[4] = (2215u << 16u);
        goto L_08A2869C;
    }
    goto L_08A2867C;
L_08A2867C:
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A28690;
    }
    goto L_08A28684;
L_08A28684:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A28C2C;
      }
      goto L_08A2868C;
    }
L_08A2868C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A28690;
L_08A28690:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A2867C;
      }
      goto L_08A2869C;
    }
L_08A2869C:
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(3172));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A286ACu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3184));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A286ACu) goto L_08A286AC;
    return;
L_08A286AC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A286BCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A286BCu) goto L_08A286BC;
    return;
L_08A286BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A28758;
      }
      goto L_08A286C4;
    }
L_08A286C4:
    aot_gpr[31] = (0x08A286CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 137u, 0x089F4820u>(ctx, &aot_mem) && ctx.pc == 0x08A286CCu) goto L_08A286CC;
    return;
L_08A286CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1068)));
    aot_gpr[31] = (0x08A286D8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 158u, 0x089F49A4u>(ctx, &aot_mem) && ctx.pc == 0x08A286D8u) goto L_08A286D8;
    return;
L_08A286D8:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A286ECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 237u, 0x089F0D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A286ECu) goto L_08A286EC;
    return;
L_08A286EC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A286F8u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A286F8u) goto L_08A286F8;
    return;
L_08A286F8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A2870Cu);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 20u, 0x089F4190u>(ctx, &aot_mem) && ctx.pc == 0x08A2870Cu) goto L_08A2870C;
    return;
L_08A2870C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C2C;
      }
      goto L_08A28714;
    }
L_08A28714:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A28718;
L_08A28718:
    aot_gpr[31] = (0x08A28720u);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x08A28720u) goto L_08A28720;
    return;
L_08A28720:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A28C2C;
      }
      goto L_08A2872C;
    }
L_08A2872C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28758:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(3196));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A28768u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28768u) goto L_08A28768;
    return;
L_08A28768:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A28778u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A28778u) goto L_08A28778;
    return;
L_08A28778:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A287F0;
      }
      goto L_08A28780;
    }
L_08A28780:
    aot_gpr[31] = (0x08A28788u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28788u) goto L_08A28788;
    return;
L_08A28788:
    aot_gpr[20] = (aot_gpr[21] + aot_gpr[2]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_08A28790;
L_08A28790:
    aot_gpr[31] = (0x08A28798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 97u, 0x089F057Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28798u) goto L_08A28798;
    return;
L_08A28798:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A287AC;
      }
      goto L_08A287A0;
    }
L_08A287A0:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A28790;
      }
      goto L_08A287AC;
    }
L_08A287AC:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    goto L_08A287B4;
L_08A287B4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[16]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A28714;
      }
      goto L_08A287BC;
    }
L_08A287BC:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A28718;
    }
    goto L_08A287C4;
L_08A287C4:
    aot_gpr[31] = (0x08A287CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 91u, 0x089F052Cu>(ctx, &aot_mem) && ctx.pc == 0x08A287CCu) goto L_08A287CC;
    return;
L_08A287CC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A28718;
    }
    goto L_08A287D4;
L_08A287D4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A287B4;
      }
      goto L_08A287F0;
    }
L_08A287F0:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(3208));
    aot_gpr[31] = (0x08A28804u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3224));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28804u) goto L_08A28804;
    return;
L_08A28804:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A28814u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A28814u) goto L_08A28814;
    return;
L_08A28814:
    if (aot_gpr[2] != 0u) {
    aot_gpr[19] = (2215u << 16u);
        goto L_08A28844;
    }
    goto L_08A2881C;
L_08A2881C:
    aot_gpr[31] = (0x08A28824u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28824u) goto L_08A28824;
    return;
L_08A28824:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08A2883Cu);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2883Cu) goto L_08A2883C;
    return;
L_08A2883C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1048), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A28714;
      }
      goto L_08A28844;
    }
L_08A28844:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(3240));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A28854u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28854u) goto L_08A28854;
    return;
L_08A28854:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A28864u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A28864u) goto L_08A28864;
    return;
L_08A28864:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A288F8;
      }
      goto L_08A2886C;
    }
L_08A2886C:
    aot_gpr[31] = (0x08A28874u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28874u) goto L_08A28874;
    return;
L_08A28874:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08A28888;
L_08A28888:
    aot_gpr[31] = (0x08A28890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 97u, 0x089F057Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28890u) goto L_08A28890;
    return;
L_08A28890:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A288AC;
      }
      goto L_08A28898;
    }
L_08A28898:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A28888;
      }
      goto L_08A288AC;
    }
L_08A288AC:
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(258) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(732));
      if (branch_taken) {
          goto L_08A28714;
      }
      goto L_08A288B8;
    }
L_08A288B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A288C8u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A288C8u) goto L_08A288C8;
    return;
L_08A288C8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(728));
      if (branch_taken) {
          goto L_08A28714;
      }
      goto L_08A288D0;
    }
L_08A288D0:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A288DCu);
    aot_gpr[6] = (0u | 264u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A288DCu) goto L_08A288DC;
    return;
L_08A288DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A288ECu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A288ECu) goto L_08A288EC;
    return;
L_08A288EC:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(732), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A28714;
      }
      goto L_08A288F8;
    }
L_08A288F8:
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(3248));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A28908u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28908u) goto L_08A28908;
    return;
L_08A28908:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A28918u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A28918u) goto L_08A28918;
    return;
L_08A28918:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A28714;
      }
      goto L_08A28920;
    }
L_08A28920:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(3272));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A28930u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28930u) goto L_08A28930;
    return;
L_08A28930:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A28940u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A28940u) goto L_08A28940;
    return;
L_08A28940:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A28A24;
      }
      goto L_08A28948;
    }
L_08A28948:
    aot_gpr[31] = (0x08A28950u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28950u) goto L_08A28950;
    return;
L_08A28950:
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    goto L_08A28958;
L_08A28958:
    aot_gpr[31] = (0x08A28960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 97u, 0x089F057Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28960u) goto L_08A28960;
    return;
L_08A28960:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A28974;
      }
      goto L_08A28968;
    }
L_08A28968:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A28958;
      }
      goto L_08A28974;
    }
L_08A28974:
    aot_gpr[5] = (0u | 1043u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A28984u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2376));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A28984u) goto L_08A28984;
    return;
L_08A28984:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[17]);
    goto L_08A28990;
L_08A28990:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08A2899Cu);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 97u, 0x089F057Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2899Cu) goto L_08A2899C;
    return;
L_08A2899C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08A28990;
      }
      goto L_08A289A4;
    }
L_08A289A4:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1000)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A289E0;
      }
      goto L_08A289BC;
    }
L_08A289BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1004)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A289E0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A289E0u) goto L_08A289E0;
    return;
L_08A289E0:
    aot_gpr[31] = (0x08A289E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A289E8u) goto L_08A289E8;
    return;
L_08A289E8:
    aot_gpr[31] = (0x08A289F0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A289F0u) goto L_08A289F0;
    return;
L_08A289F0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A289FCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A289FCu) goto L_08A289FC;
    return;
L_08A289FC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28A24:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(3284));
    aot_gpr[31] = (0x08A28A34u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28A34u) goto L_08A28A34;
    return;
L_08A28A34:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A28A44u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A28A44u) goto L_08A28A44;
    return;
L_08A28A44:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A28B5C;
      }
      goto L_08A28A4C;
    }
L_08A28A4C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A28A58u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3300));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28A58u) goto L_08A28A58;
    return;
L_08A28A58:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(3316));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[31] = (0x08A28A74u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28A74u) goto L_08A28A74;
    return;
L_08A28A74:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A28A84u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A28A84u) goto L_08A28A84;
    return;
L_08A28A84:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A28B54;
      }
      goto L_08A28A8C;
    }
L_08A28A8C:
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(3328));
    aot_gpr[19] = (0u | 2u);
    aot_gpr[31] = (0x08A28A9Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28A9Cu) goto L_08A28A9C;
    return;
L_08A28A9C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A28AACu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A28AACu) goto L_08A28AAC;
    return;
L_08A28AAC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A28B54;
      }
      goto L_08A28AB4;
    }
L_08A28AB4:
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(3340));
    aot_gpr[19] = (0u | 3u);
    aot_gpr[31] = (0x08A28AC4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28AC4u) goto L_08A28AC4;
    return;
L_08A28AC4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A28AD4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A28AD4u) goto L_08A28AD4;
    return;
L_08A28AD4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A28B54;
      }
      goto L_08A28ADC;
    }
L_08A28ADC:
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(3352));
    aot_gpr[19] = (0u | 5u);
    aot_gpr[31] = (0x08A28AECu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28AECu) goto L_08A28AEC;
    return;
L_08A28AEC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A28AFCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A28AFCu) goto L_08A28AFC;
    return;
L_08A28AFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A28B54;
      }
      goto L_08A28B04;
    }
L_08A28B04:
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(3360));
    aot_gpr[19] = (0u | 4u);
    aot_gpr[31] = (0x08A28B14u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28B14u) goto L_08A28B14;
    return;
L_08A28B14:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A28B24u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A28B24u) goto L_08A28B24;
    return;
L_08A28B24:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A28B54;
      }
      goto L_08A28B2C;
    }
L_08A28B2C:
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(3376));
    aot_gpr[19] = (0u | 7u);
    aot_gpr[31] = (0x08A28B3Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28B3Cu) goto L_08A28B3C;
    return;
L_08A28B3C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A28B4Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A28B4Cu) goto L_08A28B4C;
    return;
L_08A28B4C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[19] = (0u | 6u);
        goto L_08A28B54;
    }
    goto L_08A28B54;
L_08A28B54:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[19]);
      if (branch_taken) {
          goto L_08A28714;
      }
      goto L_08A28B5C;
    }
L_08A28B5C:
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(3404));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A28B6Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28B6Cu) goto L_08A28B6C;
    return;
L_08A28B6C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A28B7Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A28B7Cu) goto L_08A28B7C;
    return;
L_08A28B7C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A28B90;
      }
      goto L_08A28B84;
    }
L_08A28B84:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1080), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A28714;
      }
      goto L_08A28B90;
    }
L_08A28B90:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(3424));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A28BA0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28BA0u) goto L_08A28BA0;
    return;
L_08A28BA0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A28BB0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A28BB0u) goto L_08A28BB0;
    return;
L_08A28BB0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A28714;
      }
      goto L_08A28BB8;
    }
L_08A28BB8:
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A28BCCu);
    aot_gpr[6] = (0u | 513u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28BCCu) goto L_08A28BCC;
    return;
L_08A28BCC:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A28BD8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28BD8u) goto L_08A28BD8;
    return;
L_08A28BD8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[31] = (0x08A28BECu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3440));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08A28BECu) goto L_08A28BEC;
    return;
L_08A28BEC:
    aot_gpr[4] = (aot_gpr[2] - aot_gpr[19]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 512 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A28C24;
      }
      goto L_08A28BFC;
    }
L_08A28BFC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A28C08u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A28C08u) goto L_08A28C08;
    return;
L_08A28C08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C24;
      }
      goto L_08A28C14;
    }
L_08A28C14:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A28C24u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0547_entry, 547u, 180u, 0x08A279E8u>(ctx, &aot_mem) && ctx.pc == 0x08A28C24u) goto L_08A28C24;
    return;
L_08A28C24:
    if (aot_gpr[18] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A28718;
    }
    goto L_08A28C2C;
L_08A28C2C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28C54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16528));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16384), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16496), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16388), 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1000)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16492), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16500), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16504), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16508), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16468), aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[21] = (aot_gpr[18] + static_cast<std::uint32_t>(60));
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16484), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16488), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16512), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16516), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16520), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16524), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16476), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A28CE0;
      }
      goto L_08A28CB8;
    }
L_08A28CB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1004)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16384));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(16388));
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A28CE0u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A28CE0u) goto L_08A28CE0;
    return;
L_08A28CE0:
    aot_gpr[31] = (0x08A28CE8u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 240u, 0x089F0D54u>(ctx, &aot_mem) && ctx.pc == 0x08A28CE8u) goto L_08A28CE8;
    return;
L_08A28CE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(992)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[22] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A28D78;
      }
      goto L_08A28CF4;
    }
L_08A28CF4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[30] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A28E04;
      }
      goto L_08A28CFC;
    }
L_08A28CFC:
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(3444));
    aot_gpr[31] = (0x08A28D10u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(3448));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28D10u) goto L_08A28D10;
    return;
L_08A28D10:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3624));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(3640));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16460), aot_gpr[6]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16456), aot_gpr[7]);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3660));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(3684));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16452), aot_gpr[6]);
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16448), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3736));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(3440));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16464), aot_gpr[6]);
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(3528));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16472), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A28E3C;
      }
      goto L_08A28D70;
    }
L_08A28D70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A28E48;
      }
      goto L_08A28D78;
    }
L_08A28D78:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[30] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A28E04;
      }
      goto L_08A28D84;
    }
L_08A28D84:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A28D90u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(3460));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28D90u) goto L_08A28D90;
    return;
L_08A28D90:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A28DA0u);
    aot_gpr[6] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A28DA0u) goto L_08A28DA0;
    return;
L_08A28DA0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3624));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3640));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16460), aot_gpr[4]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16456), aot_gpr[5]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3660));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3684));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16452), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16448), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3736));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3440));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16464), aot_gpr[4]);
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[16] = (0u | 1u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(3528));
    { const bool branch_taken = aot_gpr[22] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16472), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A28E64;
      }
      goto L_08A28DFC;
    }
L_08A28DFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1072)));
      if (branch_taken) {
          goto L_08A28EBC;
      }
      goto L_08A28E04;
    }
L_08A28E04:
    aot_gpr[2] = (0u | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16484)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16488)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16492)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16496)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16500)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16504)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16508)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16512)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16516)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16520)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16524)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28E3C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3456));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    goto L_08A28E48;
L_08A28E48:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 16384u);
    aot_gpr[31] = (0x08A28E5Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A28E5Cu) goto L_08A28E5C;
    return;
L_08A28E5C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1072)));
      if (branch_taken) {
          goto L_08A28EBC;
      }
      goto L_08A28E64;
    }
L_08A28E64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16384)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A28EA0;
      }
      goto L_08A28E70;
    }
L_08A28E70:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16468), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A28E80u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(3448));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28E80u) goto L_08A28E80;
    return;
L_08A28E80:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 16384u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A28E98u);
    aot_gpr[8] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A28E98u) goto L_08A28E98;
    return;
L_08A28E98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1072)));
      if (branch_taken) {
          goto L_08A28EBC;
      }
      goto L_08A28EA0;
    }
L_08A28EA0:
    aot_gpr[31] = (0x08A28EA8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A28EA8u) goto L_08A28EA8;
    return;
L_08A28EA8:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16384), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3468));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16388), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1072)));
    goto L_08A28EBC;
L_08A28EBC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28ED0;
      }
      goto L_08A28EC4;
    }
L_08A28EC4:
    aot_gpr[4] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3504));
      if (branch_taken) {
          goto L_08A28ED8;
      }
      goto L_08A28ED0;
    }
L_08A28ED0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3404));
    goto L_08A28ED8;
L_08A28ED8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16480), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A28EE8u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 237u, 0x089F0D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28EE8u) goto L_08A28EE8;
    return;
L_08A28EE8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    aot_gpr[9] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A28F08u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A28F08u) goto L_08A28F08;
    return;
L_08A28F08:
    aot_gpr[31] = (0x08A28F10u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 137u, 0x089F4820u>(ctx, &aot_mem) && ctx.pc == 0x08A28F10u) goto L_08A28F10;
    return;
L_08A28F10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1068)));
    aot_gpr[31] = (0x08A28F1Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 158u, 0x089F49A4u>(ctx, &aot_mem) && ctx.pc == 0x08A28F1Cu) goto L_08A28F1C;
    return;
L_08A28F1C:
    aot_gpr[6] = (aot_gpr[17] - aot_gpr[19]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (aot_gpr[20] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A28F34u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 244u, 0x089F3FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A28F34u) goto L_08A28F34;
    return;
L_08A28F34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(992)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16480)));
      if (branch_taken) {
          goto L_08A28F78;
      }
      goto L_08A28F40;
    }
L_08A28F40:
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(16392));
      if (branch_taken) {
          goto L_08A28F7C;
      }
      goto L_08A28F48;
    }
L_08A28F48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16468)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(16392));
      if (branch_taken) {
          goto L_08A28F7C;
      }
      goto L_08A28F54;
    }
L_08A28F54:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(16392));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A28F70u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    goto L_08A28124;
L_08A28F70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A28F98;
      }
      goto L_08A28F78;
    }
L_08A28F78:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(16392));
    goto L_08A28F7C;
L_08A28F7C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08A28F94u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    goto L_08A28124;
L_08A28F94:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A28F98;
L_08A28F98:
    aot_gpr[31] = (0x08A28FA0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x08A28FA0u) goto L_08A28FA0;
    return;
L_08A28FA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16428), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16432), 0u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A28FB4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16436), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A28FB4u) goto L_08A28FB4;
    return;
L_08A28FB4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16428));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16432));
    aot_gpr[31] = (0x08A28FC8u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(16436));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 3u, 0x089F002Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28FC8u) goto L_08A28FC8;
    return;
L_08A28FC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16428)));
    aot_gpr[16] = (aot_gpr[17] - aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[20] - aot_gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0549_entry, 549u, 5u, 0x08A2905Cu>(ctx, &aot_mem); return;
      }
      goto L_08A28FD8;
    }
L_08A28FD8:
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A28FFC;
      }
      goto L_08A28FE4;
    }
L_08A28FE4:
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16456)));
        (void)rt.invoke_chained_direct<&recomp_unit_0549_entry, 549u, 6u, 0x08A29060u>(ctx, &aot_mem); return;
    }
    goto L_08A28FEC;
L_08A28FEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16456)));
        (void)rt.invoke_chained_direct<&recomp_unit_0549_entry, 549u, 6u, 0x08A29060u>(ctx, &aot_mem); return;
    }
    goto L_08A28FF8;
L_08A28FF8:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    goto L_08A28FFC;
L_08A28FFC:
    aot_gpr[6] = (2215u << 16u);
    ctx.pc = 0x08A29000u; return;
}

void recomp_unit_0548(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0548_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_548(Runtime &runtime) {
    runtime.register_generated_unit(548u, 0x08A28000u, 4096u, &recomp_unit_0548, &recomp_unit_0548_entry);
    runtime.register_function(0x08A28000u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2800Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28014u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2801Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28030u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28038u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2803Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28040u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28060u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28068u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28070u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28078u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28080u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2808Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2809Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A280B8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A280D8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A280ECu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A280F8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28100u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28108u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28114u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28124u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2815Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28164u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28174u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28180u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28188u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28194u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A281A4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A281ACu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A281B4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A281C4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A281CCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A281D8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A281E8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A281F8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28204u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28214u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28238u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2827Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28284u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28290u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A282BCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A282DCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28304u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28318u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2832Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28334u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28340u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28350u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28364u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A283B0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A283C0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A283CCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A283D8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A283E4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A283ECu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A283F0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2840Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2841Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28424u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28430u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28454u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28480u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28488u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28494u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2849Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A284ACu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A284B8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A284C0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A284CCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A284E4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A284F0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A284FCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28504u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2850Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28514u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28518u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28540u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28544u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2854Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28554u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2855Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28568u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28578u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2857Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28590u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2859Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A285A8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A285B4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A285BCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A285DCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A285E4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A285ECu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A285F4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A285FCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28604u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28610u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28614u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28630u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28674u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2867Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28684u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2868Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28690u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2869Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A286ACu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A286BCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A286C4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A286CCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A286D8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A286ECu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A286F8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2870Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28714u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28718u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28720u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2872Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28758u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28768u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28778u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28780u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28788u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28790u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28798u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A287A0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A287ACu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A287B4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A287BCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A287C4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A287CCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A287D4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A287F0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28804u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28814u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2881Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28824u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2883Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28844u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28854u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28864u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2886Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28874u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28888u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28890u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28898u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A288ACu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A288B8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A288C8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A288D0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A288DCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A288ECu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A288F8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28908u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28918u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28920u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28930u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28940u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28948u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28950u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28958u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28960u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28968u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28974u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28984u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28990u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A2899Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A289A4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A289BCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A289E0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A289E8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A289F0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A289FCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28A24u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28A34u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28A44u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28A4Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28A58u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28A74u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28A84u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28A8Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28A9Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28AACu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28AB4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28AC4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28AD4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28ADCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28AECu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28AFCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28B04u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28B14u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28B24u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28B2Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28B3Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28B4Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28B54u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28B5Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28B6Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28B7Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28B84u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28B90u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28BA0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28BB0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28BB8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28BCCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28BD8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28BECu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28BFCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28C08u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28C14u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28C24u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28C2Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28C54u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28CB8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28CE0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28CE8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28CF4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28CFCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28D10u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28D70u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28D78u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28D84u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28D90u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28DA0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28DFCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28E04u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28E3Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28E48u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28E5Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28E64u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28E70u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28E80u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28E98u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28EA0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28EA8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28EBCu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28EC4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28ED0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28ED8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28EE8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28F08u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28F10u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28F1Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28F34u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28F40u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28F48u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28F54u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28F70u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28F78u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28F7Cu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28F94u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28F98u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28FA0u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28FB4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28FC8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28FD8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28FE4u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28FECu, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28FF8u, &recomp_unit_0548, "recomp_unit_0548");
    runtime.register_function(0x08A28FFCu, &recomp_unit_0548, "recomp_unit_0548");
}
} // namespace psprecomp
