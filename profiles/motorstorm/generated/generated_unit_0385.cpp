#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0385[1008] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18,
    19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22,
    0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 30, 0, 31, 0,
    32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 37, 0, 38, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 43, 44, 0, 45, 0,
    0, 46, 0, 0, 47, 0, 48, 0, 0, 0, 49, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0,
    59, 0, 0, 0, 0, 0, 60, 61, 0, 0, 62, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0,
    0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78,
    0, 0, 79, 0, 0, 80, 81, 0, 82, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90,
    0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 101,
    0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112,
    0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 119, 0, 120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0,
    0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136,
    0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 0, 147, 0, 0, 148,
    149, 0, 150, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 155, 156, 0, 157, 0, 158, 0, 0, 159, 0, 0, 160, 0,
    0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0,
    172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0,
    183, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194,
    0, 0, 195, 0, 0, 196, 197, 0, 198, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 206, 0,
    0, 207, 0, 0, 208, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0,
    218, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 229, 0,
    0, 230, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0,
    241, 0, 0, 242, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 252, 0,
    0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 261, 0, 0, 262, 0, 0, 263, 0,
    0, 264, 0, 0, 265, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 275,
    0, 0, 276, 0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 280, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290, 0, 291,
};
void recomp_unit_0385_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08985000u;
        entry_id = (entry_delta < 4032u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0385[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08985000;
    case 2u: goto L_0898500C;
    case 3u: goto L_08985014;
    case 4u: goto L_08985028;
    case 5u: goto L_08985034;
    case 6u: goto L_08985040;
    case 7u: goto L_08985054;
    case 8u: goto L_0898505C;
    case 9u: goto L_08985074;
    case 10u: goto L_08985098;
    case 11u: goto L_089850E8;
    case 12u: goto L_08985118;
    case 13u: goto L_089851B4;
    case 14u: goto L_089851C4;
    case 15u: goto L_089851DC;
    case 16u: goto L_089851E4;
    case 17u: goto L_089851F4;
    case 18u: goto L_089851FC;
    case 19u: goto L_08985200;
    case 20u: goto L_08985208;
    case 21u: goto L_08985274;
    case 22u: goto L_0898527C;
    case 23u: goto L_08985284;
    case 24u: goto L_08985294;
    case 25u: goto L_089852A8;
    case 26u: goto L_089852C4;
    case 27u: goto L_089852D4;
    case 28u: goto L_089852E0;
    case 29u: goto L_089852EC;
    case 30u: goto L_089852F0;
    case 31u: goto L_089852F8;
    case 32u: goto L_08985300;
    case 33u: goto L_08985310;
    case 34u: goto L_08985324;
    case 35u: goto L_08985344;
    case 36u: goto L_08985358;
    case 37u: goto L_0898535C;
    case 38u: goto L_08985364;
    case 39u: goto L_08985388;
    case 40u: goto L_08985390;
    case 41u: goto L_089853D0;
    case 42u: goto L_089853DC;
    case 43u: goto L_089853EC;
    case 44u: goto L_089853F0;
    case 45u: goto L_089853F8;
    case 46u: goto L_08985404;
    case 47u: goto L_08985410;
    case 48u: goto L_08985418;
    case 49u: goto L_08985428;
    case 50u: goto L_0898542C;
    case 51u: goto L_08985448;
    case 52u: goto L_08985468;
    case 53u: goto L_0898548C;
    case 54u: goto L_08985494;
    case 55u: goto L_089854D4;
    case 56u: goto L_089854E0;
    case 57u: goto L_089854EC;
    case 58u: goto L_089854F4;
    case 59u: goto L_08985500;
    case 60u: goto L_08985518;
    case 61u: goto L_0898551C;
    case 62u: goto L_08985528;
    case 63u: goto L_0898552C;
    case 64u: goto L_08985548;
    case 65u: goto L_08985568;
    case 66u: goto L_08985570;
    case 67u: goto L_08985578;
    case 68u: goto L_08985584;
    case 69u: goto L_08985590;
    case 70u: goto L_0898559C;
    case 71u: goto L_089855A8;
    case 72u: goto L_089855B4;
    case 73u: goto L_089855C0;
    case 74u: goto L_089855CC;
    case 75u: goto L_089855D8;
    case 76u: goto L_089855E4;
    case 77u: goto L_089855F0;
    case 78u: goto L_089855FC;
    case 79u: goto L_08985608;
    case 80u: goto L_08985614;
    case 81u: goto L_08985618;
    case 82u: goto L_08985620;
    case 83u: goto L_08985628;
    case 84u: goto L_08985634;
    case 85u: goto L_08985640;
    case 86u: goto L_0898564C;
    case 87u: goto L_08985658;
    case 88u: goto L_08985664;
    case 89u: goto L_08985670;
    case 90u: goto L_0898567C;
    case 91u: goto L_08985688;
    case 92u: goto L_08985694;
    case 93u: goto L_089856A0;
    case 94u: goto L_089856A8;
    case 95u: goto L_089856B4;
    case 96u: goto L_089856C0;
    case 97u: goto L_089856CC;
    case 98u: goto L_089856D8;
    case 99u: goto L_089856E4;
    case 100u: goto L_089856F0;
    case 101u: goto L_089856FC;
    case 102u: goto L_08985708;
    case 103u: goto L_08985710;
    case 104u: goto L_0898571C;
    case 105u: goto L_08985728;
    case 106u: goto L_08985734;
    case 107u: goto L_08985740;
    case 108u: goto L_0898574C;
    case 109u: goto L_08985758;
    case 110u: goto L_08985764;
    case 111u: goto L_08985770;
    case 112u: goto L_0898577C;
    case 113u: goto L_08985784;
    case 114u: goto L_08985790;
    case 115u: goto L_0898579C;
    case 116u: goto L_089857A8;
    case 117u: goto L_089857B4;
    case 118u: goto L_089857C0;
    case 119u: goto L_089857C4;
    case 120u: goto L_089857CC;
    case 121u: goto L_089857D4;
    case 122u: goto L_089857E0;
    case 123u: goto L_089857EC;
    case 124u: goto L_089857F8;
    case 125u: goto L_08985804;
    case 126u: goto L_08985810;
    case 127u: goto L_08985818;
    case 128u: goto L_08985820;
    case 129u: goto L_08985828;
    case 130u: goto L_08985834;
    case 131u: goto L_08985840;
    case 132u: goto L_0898584C;
    case 133u: goto L_08985858;
    case 134u: goto L_08985864;
    case 135u: goto L_08985870;
    case 136u: goto L_0898587C;
    case 137u: goto L_08985884;
    case 138u: goto L_08985890;
    case 139u: goto L_0898589C;
    case 140u: goto L_089858A8;
    case 141u: goto L_089858B4;
    case 142u: goto L_089858C0;
    case 143u: goto L_089858CC;
    case 144u: goto L_089858D4;
    case 145u: goto L_089858DC;
    case 146u: goto L_089858E4;
    case 147u: goto L_089858F0;
    case 148u: goto L_089858FC;
    case 149u: goto L_08985900;
    case 150u: goto L_08985908;
    case 151u: goto L_08985910;
    case 152u: goto L_0898591C;
    case 153u: goto L_08985928;
    case 154u: goto L_08985934;
    case 155u: goto L_0898594C;
    case 156u: goto L_08985950;
    case 157u: goto L_08985958;
    case 158u: goto L_08985960;
    case 159u: goto L_0898596C;
    case 160u: goto L_08985978;
    case 161u: goto L_08985984;
    case 162u: goto L_08985990;
    case 163u: goto L_0898599C;
    case 164u: goto L_089859A8;
    case 165u: goto L_089859B0;
    case 166u: goto L_089859BC;
    case 167u: goto L_089859C8;
    case 168u: goto L_089859D4;
    case 169u: goto L_089859E0;
    case 170u: goto L_089859EC;
    case 171u: goto L_089859F4;
    case 172u: goto L_08985A00;
    case 173u: goto L_08985A0C;
    case 174u: goto L_08985A18;
    case 175u: goto L_08985A24;
    case 176u: goto L_08985A30;
    case 177u: goto L_08985A38;
    case 178u: goto L_08985A44;
    case 179u: goto L_08985A50;
    case 180u: goto L_08985A5C;
    case 181u: goto L_08985A68;
    case 182u: goto L_08985A74;
    case 183u: goto L_08985A80;
    case 184u: goto L_08985A88;
    case 185u: goto L_08985A94;
    case 186u: goto L_08985AA0;
    case 187u: goto L_08985AAC;
    case 188u: goto L_08985AB8;
    case 189u: goto L_08985AC4;
    case 190u: goto L_08985AD0;
    case 191u: goto L_08985AD8;
    case 192u: goto L_08985AE4;
    case 193u: goto L_08985AF0;
    case 194u: goto L_08985AFC;
    case 195u: goto L_08985B08;
    case 196u: goto L_08985B14;
    case 197u: goto L_08985B18;
    case 198u: goto L_08985B20;
    case 199u: goto L_08985B28;
    case 200u: goto L_08985B34;
    case 201u: goto L_08985B40;
    case 202u: goto L_08985B4C;
    case 203u: goto L_08985B58;
    case 204u: goto L_08985B60;
    case 205u: goto L_08985B6C;
    case 206u: goto L_08985B78;
    case 207u: goto L_08985B84;
    case 208u: goto L_08985B90;
    case 209u: goto L_08985B98;
    case 210u: goto L_08985BA4;
    case 211u: goto L_08985BB0;
    case 212u: goto L_08985BBC;
    case 213u: goto L_08985BC8;
    case 214u: goto L_08985BD0;
    case 215u: goto L_08985BDC;
    case 216u: goto L_08985BE8;
    case 217u: goto L_08985BF4;
    case 218u: goto L_08985C00;
    case 219u: goto L_08985C08;
    case 220u: goto L_08985C14;
    case 221u: goto L_08985C20;
    case 222u: goto L_08985C2C;
    case 223u: goto L_08985C38;
    case 224u: goto L_08985C40;
    case 225u: goto L_08985C4C;
    case 226u: goto L_08985C58;
    case 227u: goto L_08985C64;
    case 228u: goto L_08985C6C;
    case 229u: goto L_08985C78;
    case 230u: goto L_08985C84;
    case 231u: goto L_08985C90;
    case 232u: goto L_08985C9C;
    case 233u: goto L_08985CA4;
    case 234u: goto L_08985CB0;
    case 235u: goto L_08985CBC;
    case 236u: goto L_08985CC8;
    case 237u: goto L_08985CD4;
    case 238u: goto L_08985CDC;
    case 239u: goto L_08985CE8;
    case 240u: goto L_08985CF4;
    case 241u: goto L_08985D00;
    case 242u: goto L_08985D0C;
    case 243u: goto L_08985D14;
    case 244u: goto L_08985D20;
    case 245u: goto L_08985D2C;
    case 246u: goto L_08985D38;
    case 247u: goto L_08985D44;
    case 248u: goto L_08985D4C;
    case 249u: goto L_08985D58;
    case 250u: goto L_08985D64;
    case 251u: goto L_08985D70;
    case 252u: goto L_08985D78;
    case 253u: goto L_08985D84;
    case 254u: goto L_08985D94;
    case 255u: goto L_08985DA0;
    case 256u: goto L_08985DA8;
    case 257u: goto L_08985DB4;
    case 258u: goto L_08985DC0;
    case 259u: goto L_08985DCC;
    case 260u: goto L_08985DD8;
    case 261u: goto L_08985DE0;
    case 262u: goto L_08985DEC;
    case 263u: goto L_08985DF8;
    case 264u: goto L_08985E04;
    case 265u: goto L_08985E10;
    case 266u: goto L_08985E18;
    case 267u: goto L_08985E24;
    case 268u: goto L_08985E30;
    case 269u: goto L_08985E3C;
    case 270u: goto L_08985E44;
    case 271u: goto L_08985E50;
    case 272u: goto L_08985E5C;
    case 273u: goto L_08985E68;
    case 274u: goto L_08985E74;
    case 275u: goto L_08985E7C;
    case 276u: goto L_08985E88;
    case 277u: goto L_08985E94;
    case 278u: goto L_08985E9C;
    case 279u: goto L_08985EA8;
    case 280u: goto L_08985EB4;
    case 281u: goto L_08985EBC;
    case 282u: goto L_08985EC8;
    case 283u: goto L_08985ED4;
    case 284u: goto L_08985F34;
    case 285u: goto L_08985F44;
    case 286u: goto L_08985F50;
    case 287u: goto L_08985F7C;
    case 288u: goto L_08985FA4;
    case 289u: goto L_08985FAC;
    case 290u: goto L_08985FB4;
    case 291u: goto L_08985FBC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08985000:
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(148) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08985014;
      }
      goto L_0898500C;
    }
L_0898500C:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(148));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(148));
    goto L_08985014;
L_08985014:
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[16]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08985028u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x08985028u) goto L_08985028;
    return;
L_08985028:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08985034u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 236u, 0x08983F50u>(ctx, &aot_mem) && ctx.pc == 0x08985034u) goto L_08985034;
    return;
L_08985034:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08985040u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x08985040u) goto L_08985040;
    return;
L_08985040:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
      if (branch_taken) {
          goto L_0898505C;
      }
      goto L_08985054;
    }
L_08985054:
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    goto L_0898505C;
L_0898505C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0384_entry, 384u, 145u, 0x08984F14u>(ctx, &aot_mem); return;
      }
      goto L_08985074;
    }
L_08985074:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12440));
    aot_gpr[8] = (aot_gpr[2] & 65535u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(212));
    aot_gpr[6] = (aot_gpr[2] >> 24u);
    aot_gpr[7] = ((aot_gpr[2] >> 16u) & 0x000000FFu);
    aot_gpr[31] = (0x08985098u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08985098u) goto L_08985098;
    return;
L_08985098:
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(92));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(268));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store_word_left(aot_gpr[21] + static_cast<std::uint32_t>(3), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[21] + static_cast<std::uint32_t>(7), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[21] + static_cast<std::uint32_t>(11), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[21] + static_cast<std::uint32_t>(15), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[21] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_089850E8;
L_089850E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(156));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089850E8;
      }
      goto L_08985118;
    }
L_08985118:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[20] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[20] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[20] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[20] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[20] + static_cast<std::uint32_t>(19), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[20] + static_cast<std::uint32_t>(23), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[20] + static_cast<std::uint32_t>(27), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[20] + static_cast<std::uint32_t>(31), aot_gpr[9]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[20] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[20] + static_cast<std::uint32_t>(20), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[20] + static_cast<std::uint32_t>(24), aot_gpr[8]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[20] + static_cast<std::uint32_t>(28), aot_gpr[9]));
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(11), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(15), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(19), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(23), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(27), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[19] + static_cast<std::uint32_t>(31), aot_gpr[9]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0384_entry, 384u, 145u, 0x08984F14u>(ctx, &aot_mem); return;
L_089851B4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089851C4u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089851C4u) goto L_089851C4;
    return;
L_089851C4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(384));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(376), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0384_entry, 384u, 145u, 0x08984F14u>(ctx, &aot_mem); return;
L_089851DC:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0384_entry, 384u, 141u, 0x08984E9Cu>(ctx, &aot_mem); return;
      }
      goto L_089851E4;
    }
L_089851E4:
    aot_gpr[4] = (aot_gpr[30] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089851F4u);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0384_entry, 384u, 104u, 0x089849FCu>(ctx, &aot_mem) && ctx.pc == 0x089851F4u) goto L_089851F4;
    return;
L_089851F4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        (void)rt.invoke_chained_direct<&recomp_unit_0384_entry, 384u, 141u, 0x08984E9Cu>(ctx, &aot_mem); return;
    }
    goto L_089851FC;
L_089851FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08985200;
L_08985200:
    aot_gpr[2] = (aot_gpr[5] & 65535u);
    (void)rt.invoke_chained_direct<&recomp_unit_0384_entry, 384u, 141u, 0x08984E9Cu>(ctx, &aot_mem); return;
L_08985208:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(2812), 0u);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(2808), 0u);
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(2804), 0u);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(2800), 0u);
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(2796), 0u);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(2792), 0u);
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(14476), 0u);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(2784), 0u);
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(2780), 0u);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(2776), 0u);
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(2772), 0u);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(2768), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(2788), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985274:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089852EC;
      }
      goto L_0898527C;
    }
L_0898527C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089852EC;
      }
      goto L_08985284;
    }
L_08985284:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
        goto L_089852F0;
    }
    goto L_08985294;
L_08985294:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (aot_gpr[2] - aot_gpr[5]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[3] < static_cast<std::uint32_t>(257) ? 1u : 0u);
      if (branch_taken) {
          goto L_089852EC;
      }
      goto L_089852A8;
    }
L_089852A8:
    aot_gpr[3] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[3] >> 5u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[3] = (aot_gpr[4] << (aot_gpr[3] & 31u));
      if (branch_taken) {
          goto L_089852EC;
      }
      goto L_089852C4;
    }
L_089852C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] & aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089852E0;
      }
      goto L_089852D4;
    }
L_089852D4:
    aot_gpr[5] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089852E0:
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089852EC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    goto L_089852F0;
L_089852F0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089852F8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_08985358;
      }
      goto L_08985300;
    }
L_08985300:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
        goto L_0898535C;
    }
    goto L_08985310;
L_08985310:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (aot_gpr[2] - aot_gpr[5]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[3] < static_cast<std::uint32_t>(257) ? 1u : 0u);
      if (branch_taken) {
          goto L_08985358;
      }
      goto L_08985324;
    }
L_08985324:
    aot_gpr[2] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[2] >> 5u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] << (aot_gpr[2] & 31u));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_08985358;
      }
      goto L_08985344;
    }
L_08985344:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985358:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    goto L_0898535C;
L_0898535C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985364:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08985448;
      }
      goto L_08985388;
    }
L_08985388:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_08985448;
      }
      goto L_08985390;
    }
L_08985390:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1084)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0898542C;
      }
      goto L_089853D0;
    }
L_089853D0:
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[18] = (0u + 0u);
    goto L_089853EC;
L_089853DC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0898542C;
      }
      goto L_089853EC;
    }
L_089853EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089853F0;
L_089853F0:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089853DC;
      }
      goto L_089853F8;
    }
L_089853F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089853DC;
      }
      goto L_08985404;
    }
L_08985404:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089853DC;
      }
      goto L_08985410;
    }
L_08985410:
    aot_gpr[31] = (0x08985418u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089852F8;
L_08985418:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1084)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089853F0;
    }
    goto L_08985428;
L_08985428:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0898542C;
L_0898542C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985448:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985468:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08985548;
      }
      goto L_0898548C;
    }
L_0898548C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_08985548;
      }
      goto L_08985494;
    }
L_08985494:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1084)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0898552C;
      }
      goto L_089854D4;
    }
L_089854D4:
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[18] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089854E0;
L_089854E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08985518;
      }
      goto L_089854EC;
    }
L_089854EC:
    if (aot_gpr[3] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0898551C;
    }
    goto L_089854F4;
L_089854F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0898551C;
    }
    goto L_08985500;
L_08985500:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08985568;
      }
      goto L_08985518;
    }
L_08985518:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0898551C;
L_0898551C:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089854E0;
    }
    goto L_08985528;
L_08985528:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0898552C;
L_0898552C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985548:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985568:
    aot_gpr[31] = (0x08985570u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089852F8;
L_08985570:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1084)));
    goto L_0898551C;
L_08985578:
    aot_gpr[2] = (0u | 53023u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5019));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985584;
    }
L_08985584:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 52002u);
      if (branch_taken) {
          goto L_08985620;
      }
      goto L_08985590;
    }
L_08985590:
    aot_gpr[2] = (0u | 54014u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(501));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_0898559C;
    }
L_0898559C:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 53041u);
      if (branch_taken) {
          goto L_089856A0;
      }
      goto L_089855A8;
    }
L_089855A8:
    aot_gpr[2] = (0u | 54510u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6010));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089855B4;
    }
L_089855B4:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 54500u);
      if (branch_taken) {
          goto L_08985820;
      }
      goto L_089855C0;
    }
L_089855C0:
    aot_gpr[2] = (0u | 55006u);
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(500));
        goto L_08985950;
    }
    goto L_089855CC;
L_089855CC:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 56001u);
      if (branch_taken) {
          goto L_08985908;
      }
      goto L_089855D8;
    }
L_089855D8:
    aot_gpr[2] = (0u | 55001u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(503));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089855E4;
    }
L_089855E4:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 55004u);
      if (branch_taken) {
          goto L_08985D78;
      }
      goto L_089855F0;
    }
L_089855F0:
    aot_gpr[2] = (0u | 54512u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(13));
      if (branch_taken) {
          goto L_089857C4;
      }
      goto L_089855FC;
    }
L_089855FC:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985608;
    }
L_08985608:
    aot_gpr[2] = (0u | 55000u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089858D4;
      }
      goto L_08985614;
    }
L_08985614:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
    goto L_08985618;
L_08985618:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985620:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4502));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985628;
    }
L_08985628:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1003));
      if (branch_taken) {
          goto L_08985708;
      }
      goto L_08985634;
    }
L_08985634:
    aot_gpr[2] = (0u | 53004u);
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
        goto L_08985900;
    }
    goto L_08985640;
L_08985640:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 52011u);
      if (branch_taken) {
          goto L_0898577C;
      }
      goto L_0898564C;
    }
L_0898564C:
    aot_gpr[2] = (0u | 53013u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5009));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985658;
    }
L_08985658:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 53018u);
      if (branch_taken) {
          goto L_08985A30;
      }
      goto L_08985664;
    }
L_08985664:
    aot_gpr[2] = (0u | 53008u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5004));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985670;
    }
L_08985670:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 53010u);
      if (branch_taken) {
          goto L_08985C00;
      }
      goto L_0898567C;
    }
L_0898567C:
    aot_gpr[2] = (0u | 53006u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5002));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985688;
    }
L_08985688:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5003));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985694;
    }
L_08985694:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5001));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089856A0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5037));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089856A8;
    }
L_089856A8:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 53032u);
      if (branch_taken) {
          goto L_0898587C;
      }
      goto L_089856B4;
    }
L_089856B4:
    aot_gpr[2] = (0u | 54000u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5500));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089856C0;
    }
L_089856C0:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 54006u);
      if (branch_taken) {
          goto L_089859EC;
      }
      goto L_089856CC;
    }
L_089856CC:
    aot_gpr[2] = (0u | 53045u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5041));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089856D8;
    }
L_089856D8:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 53047u);
      if (branch_taken) {
          goto L_08985DD8;
      }
      goto L_089856E4;
    }
L_089856E4:
    aot_gpr[2] = (0u | 53043u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5039));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089856F0;
    }
L_089856F0:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5040));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089856FC;
    }
L_089856FC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5038));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985708:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2502));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985710;
    }
L_08985710:
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(1004) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(201));
      if (branch_taken) {
          goto L_089857CC;
      }
      goto L_0898571C;
    }
L_0898571C:
    aot_gpr[2] = (0u | 50005u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3503));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985728;
    }
L_08985728:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 50010u);
      if (branch_taken) {
          goto L_08985A80;
      }
      goto L_08985734;
    }
L_08985734:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1602));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3002));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985740;
    }
L_08985740:
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(1603) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 50001u);
      if (branch_taken) {
          goto L_08985C38;
      }
      goto L_0898574C;
    }
L_0898574C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1600));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3000));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985758;
    }
L_08985758:
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(1601) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3001));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985764;
    }
L_08985764:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1004));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985770;
    }
L_08985770:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2503));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898577C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4509));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985784;
    }
L_08985784:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 52016u);
      if (branch_taken) {
          goto L_08985AD0;
      }
      goto L_08985790;
    }
L_08985790:
    aot_gpr[2] = (0u | 52006u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4505));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_0898579C;
    }
L_0898579C:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 52008u);
      if (branch_taken) {
          goto L_08985CD4;
      }
      goto L_089857A8;
    }
L_089857A8:
    aot_gpr[2] = (0u | 52004u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4504));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089857B4;
    }
L_089857B4:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4503));
      if (branch_taken) {
          goto L_089858CC;
      }
      goto L_089857C0;
    }
L_089857C0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(13));
    goto L_089857C4;
L_089857C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089857CC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1501));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089857D4;
    }
L_089857D4:
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(202) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(901));
      if (branch_taken) {
          goto L_089859A8;
      }
      goto L_089857E0;
    }
L_089857E0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089857EC;
    }
L_089857EC:
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089858DC;
      }
      goto L_089857F8;
    }
L_089857F8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985804;
    }
L_08985804:
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985810;
    }
L_08985810:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08985614;
      }
      goto L_08985818;
    }
L_08985818:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985820:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6000));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985828;
    }
L_08985828:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 54505u);
      if (branch_taken) {
          goto L_08985958;
      }
      goto L_08985834;
    }
L_08985834:
    aot_gpr[2] = (0u | 54020u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5512));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985840;
    }
L_08985840:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 54022u);
      if (branch_taken) {
          goto L_08985DA0;
      }
      goto L_0898584C;
    }
L_0898584C:
    aot_gpr[2] = (0u | 54017u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5510));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985858;
    }
L_08985858:
    aot_gpr[2] = (0u | 54019u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5511));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985864;
    }
L_08985864:
    aot_gpr[2] = (0u | 54015u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985870;
    }
L_08985870:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(502));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898587C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5028));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985884;
    }
L_08985884:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 53036u);
      if (branch_taken) {
          goto L_08985B20;
      }
      goto L_08985890;
    }
L_08985890:
    aot_gpr[2] = (0u | 53027u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5023));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_0898589C;
    }
L_0898589C:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 53029u);
      if (branch_taken) {
          goto L_08985B58;
      }
      goto L_089858A8;
    }
L_089858A8:
    aot_gpr[2] = (0u | 53025u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5021));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089858B4;
    }
L_089858B4:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5022));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089858C0;
    }
L_089858C0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5020));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089858CC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089858D4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089858DC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089858D4;
      }
      goto L_089858E4;
    }
L_089858E4:
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08985E74;
      }
      goto L_089858F0;
    }
L_089858F0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089858FC;
    }
L_089858FC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_08985900;
L_08985900:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985908:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1000));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985910;
    }
L_08985910:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 56003u);
      if (branch_taken) {
          goto L_08985D44;
      }
      goto L_0898591C;
    }
L_0898591C:
    aot_gpr[2] = (0u | 55008u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(506));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985928;
    }
L_08985928:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(505));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985934;
    }
L_08985934:
    aot_gpr[2] = (65535u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 10036u);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_0898594C;
    }
L_0898594C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(500));
    goto L_08985950;
L_08985950:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985958:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6005));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985960;
    }
L_08985960:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 54507u);
      if (branch_taken) {
          goto L_08985E3C;
      }
      goto L_0898596C;
    }
L_0898596C:
    aot_gpr[2] = (0u | 54502u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6002));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985978;
    }
L_08985978:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6001));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985984;
    }
L_08985984:
    aot_gpr[2] = (0u | 54503u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6003));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985990;
    }
L_08985990:
    aot_gpr[2] = (0u | 54504u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_0898599C;
    }
L_0898599C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6004));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089859A8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2001));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089859B0;
    }
L_089859B0:
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(902) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(1002) ? 1u : 0u);
      if (branch_taken) {
          goto L_08985E10;
      }
      goto L_089859BC;
    }
L_089859BC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(301));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1503));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089859C8;
    }
L_089859C8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(900));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2000));
      if (branch_taken) {
          goto L_08985B18;
      }
      goto L_089859D4;
    }
L_089859D4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(300));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089859E0;
    }
L_089859E0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1502));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089859EC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5505));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_089859F4;
    }
L_089859F4:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 54008u);
      if (branch_taken) {
          goto L_08985C9C;
      }
      goto L_08985A00;
    }
L_08985A00:
    aot_gpr[2] = (0u | 54003u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5502));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985A0C;
    }
L_08985A0C:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 54004u);
      if (branch_taken) {
          goto L_08985EB4;
      }
      goto L_08985A18;
    }
L_08985A18:
    aot_gpr[2] = (0u | 54002u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985A24;
    }
L_08985A24:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5501));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985A30:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5014));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985A38;
    }
L_08985A38:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 53020u);
      if (branch_taken) {
          goto L_08985C64;
      }
      goto L_08985A44;
    }
L_08985A44:
    aot_gpr[2] = (0u | 53015u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5011));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985A50;
    }
L_08985A50:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5010));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985A5C;
    }
L_08985A5C:
    aot_gpr[2] = (0u | 53016u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5012));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985A68;
    }
L_08985A68:
    aot_gpr[2] = (0u | 53017u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985A74;
    }
L_08985A74:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5013));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985A80:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4003));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985A88;
    }
L_08985A88:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 50012u);
      if (branch_taken) {
          goto L_08985D0C;
      }
      goto L_08985A94;
    }
L_08985A94:
    aot_gpr[2] = (0u | 50007u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(21));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985AA0;
    }
L_08985AA0:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3505));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985AAC;
    }
L_08985AAC:
    aot_gpr[2] = (0u | 50008u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(13));
      if (branch_taken) {
          goto L_089857C4;
      }
      goto L_08985AB8;
    }
L_08985AB8:
    aot_gpr[2] = (0u | 50009u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985AC4;
    }
L_08985AC4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4000));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985AD0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4513));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985AD8;
    }
L_08985AD8:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 52018u);
      if (branch_taken) {
          goto L_08985BC8;
      }
      goto L_08985AE4;
    }
L_08985AE4:
    aot_gpr[2] = (0u | 52013u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4511));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985AF0;
    }
L_08985AF0:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4510));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985AFC;
    }
L_08985AFC:
    aot_gpr[2] = (0u | 52014u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4512));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985B08;
    }
L_08985B08:
    aot_gpr[2] = (0u | 52015u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985B14;
    }
L_08985B14:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2000));
    goto L_08985B18;
L_08985B18:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985B20:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5032));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985B28;
    }
L_08985B28:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 53038u);
      if (branch_taken) {
          goto L_08985B90;
      }
      goto L_08985B34;
    }
L_08985B34:
    aot_gpr[2] = (0u | 53034u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5030));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985B40;
    }
L_08985B40:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5031));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985B4C;
    }
L_08985B4C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5029));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985B58:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5025));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985B60;
    }
L_08985B60:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5024));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985B6C;
    }
L_08985B6C:
    aot_gpr[2] = (0u | 53030u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5026));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985B78;
    }
L_08985B78:
    aot_gpr[2] = (0u | 53031u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985B84;
    }
L_08985B84:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5027));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985B90:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5034));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985B98;
    }
L_08985B98:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5033));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985BA4;
    }
L_08985BA4:
    aot_gpr[2] = (0u | 53039u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5035));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985BB0;
    }
L_08985BB0:
    aot_gpr[2] = (0u | 53040u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985BBC;
    }
L_08985BBC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5036));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985BC8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4515));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985BD0;
    }
L_08985BD0:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4514));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985BDC;
    }
L_08985BDC:
    aot_gpr[2] = (0u | 52019u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4516));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985BE8;
    }
L_08985BE8:
    aot_gpr[2] = (0u | 53000u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985BF4;
    }
L_08985BF4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5000));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985C00:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5006));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985C08;
    }
L_08985C08:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5005));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985C14;
    }
L_08985C14:
    aot_gpr[2] = (0u | 53011u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5007));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985C20;
    }
L_08985C20:
    aot_gpr[2] = (0u | 53012u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985C2C;
    }
L_08985C2C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5008));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985C38:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3501));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985C40;
    }
L_08985C40:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 50002u);
      if (branch_taken) {
          goto L_08985E94;
      }
      goto L_08985C4C;
    }
L_08985C4C:
    aot_gpr[2] = (0u | 50000u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985C58;
    }
L_08985C58:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3500));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985C64:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5016));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985C6C;
    }
L_08985C6C:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5015));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985C78;
    }
L_08985C78:
    aot_gpr[2] = (0u | 53021u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5017));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985C84;
    }
L_08985C84:
    aot_gpr[2] = (0u | 53022u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985C90;
    }
L_08985C90:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5018));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985C9C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5507));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985CA4;
    }
L_08985CA4:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5506));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985CB0;
    }
L_08985CB0:
    aot_gpr[2] = (0u | 54012u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5508));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985CBC;
    }
L_08985CBC:
    aot_gpr[2] = (0u | 54013u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985CC8;
    }
L_08985CC8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5509));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985CD4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4507));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985CDC;
    }
L_08985CDC:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4506));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985CE8;
    }
L_08985CE8:
    aot_gpr[2] = (0u | 52009u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08985900;
      }
      goto L_08985CF4;
    }
L_08985CF4:
    aot_gpr[2] = (0u | 52010u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985D00;
    }
L_08985D00:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4508));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985D0C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4002));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985D14;
    }
L_08985D14:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4001));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985D20;
    }
L_08985D20:
    aot_gpr[2] = (0u | 52000u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4500));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985D2C;
    }
L_08985D2C:
    aot_gpr[2] = (0u | 52001u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985D38;
    }
L_08985D38:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4501));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985D44:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1002));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985D4C;
    }
L_08985D4C:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1001));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985D58;
    }
L_08985D58:
    aot_gpr[2] = (0u | 56004u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1003));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985D64;
    }
L_08985D64:
    aot_gpr[2] = (0u | 59000u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6501));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985D70;
    }
L_08985D70:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
    goto L_08985618;
L_08985D78:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089858D4;
      }
      goto L_08985D84;
    }
L_08985D84:
    aot_gpr[2] = (0u | 55003u);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(500));
      if (branch_taken) {
          goto L_08985950;
      }
      goto L_08985D94;
    }
L_08985D94:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(504));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985DA0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5514));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985DA8;
    }
L_08985DA8:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5513));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985DB4;
    }
L_08985DB4:
    aot_gpr[2] = (0u | 54023u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5515));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985DC0;
    }
L_08985DC0:
    aot_gpr[2] = (0u | 54024u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985DCC;
    }
L_08985DCC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5516));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985DD8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5043));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985DE0;
    }
L_08985DE0:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5042));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985DEC;
    }
L_08985DEC:
    aot_gpr[2] = (0u | 53048u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5044));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985DF8;
    }
L_08985DF8:
    aot_gpr[2] = (0u | 53049u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985E04;
    }
L_08985E04:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5045));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985E10:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2501));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985E18;
    }
L_08985E18:
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2500));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985E24;
    }
L_08985E24:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(902));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985E30;
    }
L_08985E30:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2002));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985E3C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6007));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985E44;
    }
L_08985E44:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6006));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985E50;
    }
L_08985E50:
    aot_gpr[2] = (0u | 54508u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6008));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985E5C;
    }
L_08985E5C:
    aot_gpr[2] = (0u | 54509u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985E68;
    }
L_08985E68:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6009));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985E74:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985E7C;
    }
L_08985E7C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985E88;
    }
L_08985E88:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1500));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985E94:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3502));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985E9C;
    }
L_08985E9C:
    aot_gpr[2] = (0u | 50003u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985EA8;
    }
L_08985EA8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3504));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985EB4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5503));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985EBC;
    }
L_08985EBC:
    aot_gpr[2] = (0u | 54005u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_08985618;
      }
      goto L_08985EC8;
    }
L_08985EC8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5504));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985ED4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 2u, 0x0898600Cu>(ctx, &aot_mem); return;
      }
      goto L_08985F34;
    }
L_08985F34:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 11u, 0x0898610Cu>(ctx, &aot_mem); return;
      }
      goto L_08985F44;
    }
L_08985F44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08985FA4;
      }
      goto L_08985F50;
    }
L_08985F50:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    goto L_08985F7C;
L_08985F7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985FA4:
    aot_gpr[31] = (0x08985FACu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 202u, 0x0898DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08985FACu) goto L_08985FAC;
    return;
L_08985FAC:
    aot_gpr[31] = (0x08985FB4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_08985578;
L_08985FB4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08985F7C;
      }
      goto L_08985FBC;
    }
L_08985FBC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    aot_gpr[7] = (0u + 0u);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.pc = 0x08986000u; return;
}

void recomp_unit_0385(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0385_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_385(Runtime &runtime) {
    runtime.register_generated_unit(385u, 0x08985000u, 4096u, &recomp_unit_0385, &recomp_unit_0385_entry);
    runtime.register_function(0x08985000u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898500Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985014u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985028u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985034u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985040u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985054u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898505Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985074u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985098u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089850E8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985118u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089851B4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089851C4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089851DCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089851E4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089851F4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089851FCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985200u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985208u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985274u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898527Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985284u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985294u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089852A8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089852C4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089852D4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089852E0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089852ECu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089852F0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089852F8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985300u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985310u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985324u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985344u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985358u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898535Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985364u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985388u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985390u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089853D0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089853DCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089853ECu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089853F0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089853F8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985404u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985410u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985418u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985428u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898542Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985448u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985468u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898548Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985494u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089854D4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089854E0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089854ECu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089854F4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985500u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985518u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898551Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985528u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898552Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985548u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985568u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985570u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985578u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985584u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985590u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898559Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089855A8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089855B4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089855C0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089855CCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089855D8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089855E4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089855F0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089855FCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985608u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985614u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985618u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985620u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985628u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985634u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985640u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898564Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985658u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985664u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985670u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898567Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985688u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985694u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089856A0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089856A8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089856B4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089856C0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089856CCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089856D8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089856E4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089856F0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089856FCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985708u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985710u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898571Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985728u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985734u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985740u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898574Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985758u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985764u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985770u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898577Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985784u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985790u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898579Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089857A8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089857B4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089857C0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089857C4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089857CCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089857D4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089857E0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089857ECu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089857F8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985804u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985810u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985818u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985820u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985828u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985834u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985840u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898584Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985858u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985864u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985870u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898587Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985884u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985890u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898589Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089858A8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089858B4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089858C0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089858CCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089858D4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089858DCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089858E4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089858F0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089858FCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985900u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985908u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985910u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898591Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985928u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985934u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898594Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985950u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985958u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985960u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898596Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985978u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985984u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985990u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x0898599Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089859A8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089859B0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089859BCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089859C8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089859D4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089859E0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089859ECu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x089859F4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985A00u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985A0Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985A18u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985A24u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985A30u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985A38u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985A44u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985A50u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985A5Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985A68u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985A74u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985A80u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985A88u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985A94u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985AA0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985AACu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985AB8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985AC4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985AD0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985AD8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985AE4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985AF0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985AFCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B08u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B14u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B18u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B20u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B28u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B34u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B40u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B4Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B58u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B60u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B6Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B78u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B84u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B90u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985B98u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985BA4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985BB0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985BBCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985BC8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985BD0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985BDCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985BE8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985BF4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C00u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C08u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C14u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C20u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C2Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C38u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C40u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C4Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C58u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C64u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C6Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C78u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C84u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C90u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985C9Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985CA4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985CB0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985CBCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985CC8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985CD4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985CDCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985CE8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985CF4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985D00u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985D0Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985D14u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985D20u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985D2Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985D38u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985D44u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985D4Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985D58u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985D64u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985D70u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985D78u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985D84u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985D94u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985DA0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985DA8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985DB4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985DC0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985DCCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985DD8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985DE0u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985DECu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985DF8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E04u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E10u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E18u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E24u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E30u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E3Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E44u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E50u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E5Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E68u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E74u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E7Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E88u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E94u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985E9Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985EA8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985EB4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985EBCu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985EC8u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985ED4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985F34u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985F44u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985F50u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985F7Cu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985FA4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985FACu, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985FB4u, &recomp_unit_0385, "recomp_unit_0385");
    runtime.register_function(0x08985FBCu, &recomp_unit_0385, "recomp_unit_0385");
}
} // namespace psprecomp
