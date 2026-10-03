#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0355[1023] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 9, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 23, 0, 24, 25, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    28, 0, 29, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0, 38,
    0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 60,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79,
    0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0,
    0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 93, 0, 94, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 97, 0, 98, 0, 0, 99, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 102, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 106, 0, 107, 0, 108, 109, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0,
    115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0,
    121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 132,
    0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 147, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 0, 0, 161, 0, 162,
    0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0,
    171, 0, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0,
    182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 196,
    0, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 209,
    0, 0, 210, 0, 211, 0, 212, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0,
    220, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0,
    230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 251,
};
void recomp_unit_0355_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08967004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0355[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08967004;
    case 2u: goto L_08967010;
    case 3u: goto L_08967028;
    case 4u: goto L_08967030;
    case 5u: goto L_08967038;
    case 6u: goto L_08967040;
    case 7u: goto L_0896705C;
    case 8u: goto L_08967080;
    case 9u: goto L_08967088;
    case 10u: goto L_08967090;
    case 11u: goto L_089670A0;
    case 12u: goto L_089670AC;
    case 13u: goto L_089670B4;
    case 14u: goto L_089670C4;
    case 15u: goto L_089670CC;
    case 16u: goto L_089670D8;
    case 17u: goto L_089670F0;
    case 18u: goto L_089670F8;
    case 19u: goto L_08967108;
    case 20u: goto L_08967120;
    case 21u: goto L_0896712C;
    case 22u: goto L_08967138;
    case 23u: goto L_08967140;
    case 24u: goto L_08967148;
    case 25u: goto L_0896714C;
    case 26u: goto L_08967154;
    case 27u: goto L_08967168;
    case 28u: goto L_08967184;
    case 29u: goto L_0896718C;
    case 30u: goto L_08967190;
    case 31u: goto L_0896719C;
    case 32u: goto L_089671BC;
    case 33u: goto L_089671C4;
    case 34u: goto L_089671D4;
    case 35u: goto L_089671DC;
    case 36u: goto L_089671E8;
    case 37u: goto L_089671F0;
    case 38u: goto L_08967200;
    case 39u: goto L_08967208;
    case 40u: goto L_08967218;
    case 41u: goto L_08967220;
    case 42u: goto L_0896722C;
    case 43u: goto L_08967268;
    case 44u: goto L_08967274;
    case 45u: goto L_08967284;
    case 46u: goto L_08967294;
    case 47u: goto L_089672AC;
    case 48u: goto L_089672B4;
    case 49u: goto L_089672D4;
    case 50u: goto L_089672F0;
    case 51u: goto L_08967304;
    case 52u: goto L_08967318;
    case 53u: goto L_08967320;
    case 54u: goto L_08967328;
    case 55u: goto L_0896733C;
    case 56u: goto L_08967350;
    case 57u: goto L_0896735C;
    case 58u: goto L_08967368;
    case 59u: goto L_08967378;
    case 60u: goto L_08967380;
    case 61u: goto L_08967394;
    case 62u: goto L_089673AC;
    case 63u: goto L_089673B4;
    case 64u: goto L_089673BC;
    case 65u: goto L_089673C8;
    case 66u: goto L_089673D4;
    case 67u: goto L_08967414;
    case 68u: goto L_08967424;
    case 69u: goto L_0896743C;
    case 70u: goto L_08967444;
    case 71u: goto L_08967454;
    case 72u: goto L_08967458;
    case 73u: goto L_08967464;
    case 74u: goto L_0896749C;
    case 75u: goto L_089674A4;
    case 76u: goto L_089674C8;
    case 77u: goto L_089674E8;
    case 78u: goto L_089674F8;
    case 79u: goto L_08967500;
    case 80u: goto L_08967518;
    case 81u: goto L_0896752C;
    case 82u: goto L_08967534;
    case 83u: goto L_0896753C;
    case 84u: goto L_08967544;
    case 85u: goto L_0896754C;
    case 86u: goto L_0896756C;
    case 87u: goto L_0896757C;
    case 88u: goto L_08967588;
    case 89u: goto L_08967598;
    case 90u: goto L_089675A8;
    case 91u: goto L_089675B8;
    case 92u: goto L_089675C0;
    case 93u: goto L_089675C4;
    case 94u: goto L_089675CC;
    case 95u: goto L_089675D0;
    case 96u: goto L_089675DC;
    case 97u: goto L_08967608;
    case 98u: goto L_08967610;
    case 99u: goto L_0896761C;
    case 100u: goto L_08967628;
    case 101u: goto L_08967630;
    case 102u: goto L_08967648;
    case 103u: goto L_0896764C;
    case 104u: goto L_08967654;
    case 105u: goto L_0896767C;
    case 106u: goto L_08967688;
    case 107u: goto L_08967690;
    case 108u: goto L_08967698;
    case 109u: goto L_0896769C;
    case 110u: goto L_089676B4;
    case 111u: goto L_089676C0;
    case 112u: goto L_089676D8;
    case 113u: goto L_089676E4;
    case 114u: goto L_089676F8;
    case 115u: goto L_08967704;
    case 116u: goto L_08967710;
    case 117u: goto L_08967724;
    case 118u: goto L_08967744;
    case 119u: goto L_08967760;
    case 120u: goto L_08967778;
    case 121u: goto L_08967784;
    case 122u: goto L_0896778C;
    case 123u: goto L_089677A0;
    case 124u: goto L_089677D0;
    case 125u: goto L_089677E0;
    case 126u: goto L_089677F4;
    case 127u: goto L_0896780C;
    case 128u: goto L_08967820;
    case 129u: goto L_08967840;
    case 130u: goto L_0896785C;
    case 131u: goto L_08967874;
    case 132u: goto L_08967880;
    case 133u: goto L_08967888;
    case 134u: goto L_0896789C;
    case 135u: goto L_089678D8;
    case 136u: goto L_089678EC;
    case 137u: goto L_08967904;
    case 138u: goto L_08967918;
    case 139u: goto L_08967938;
    case 140u: goto L_08967954;
    case 141u: goto L_0896796C;
    case 142u: goto L_08967978;
    case 143u: goto L_08967980;
    case 144u: goto L_08967994;
    case 145u: goto L_089679BC;
    case 146u: goto L_089679CC;
    case 147u: goto L_089679D0;
    case 148u: goto L_089679E0;
    case 149u: goto L_089679E8;
    case 150u: goto L_089679F0;
    case 151u: goto L_08967A10;
    case 152u: goto L_08967A1C;
    case 153u: goto L_08967A2C;
    case 154u: goto L_08967A38;
    case 155u: goto L_08967A40;
    case 156u: goto L_08967A48;
    case 157u: goto L_08967A50;
    case 158u: goto L_08967A58;
    case 159u: goto L_08967A60;
    case 160u: goto L_08967A68;
    case 161u: goto L_08967A78;
    case 162u: goto L_08967A80;
    case 163u: goto L_08967A88;
    case 164u: goto L_08967AA8;
    case 165u: goto L_08967AB0;
    case 166u: goto L_08967AC0;
    case 167u: goto L_08967AD0;
    case 168u: goto L_08967AE8;
    case 169u: goto L_08967AF0;
    case 170u: goto L_08967AFC;
    case 171u: goto L_08967B04;
    case 172u: goto L_08967B14;
    case 173u: goto L_08967B1C;
    case 174u: goto L_08967B24;
    case 175u: goto L_08967B2C;
    case 176u: goto L_08967B34;
    case 177u: goto L_08967B44;
    case 178u: goto L_08967B4C;
    case 179u: goto L_08967B54;
    case 180u: goto L_08967B74;
    case 181u: goto L_08967B7C;
    case 182u: goto L_08967B84;
    case 183u: goto L_08967B8C;
    case 184u: goto L_08967BB0;
    case 185u: goto L_08967BB8;
    case 186u: goto L_08967BD0;
    case 187u: goto L_08967BE8;
    case 188u: goto L_08967BFC;
    case 189u: goto L_08967C18;
    case 190u: goto L_08967C24;
    case 191u: goto L_08967C34;
    case 192u: goto L_08967C48;
    case 193u: goto L_08967C50;
    case 194u: goto L_08967C64;
    case 195u: goto L_08967C70;
    case 196u: goto L_08967C80;
    case 197u: goto L_08967C8C;
    case 198u: goto L_08967CA0;
    case 199u: goto L_08967CA8;
    case 200u: goto L_08967CB4;
    case 201u: goto L_08967D2C;
    case 202u: goto L_08967D40;
    case 203u: goto L_08967D4C;
    case 204u: goto L_08967D5C;
    case 205u: goto L_08967D64;
    case 206u: goto L_08967D6C;
    case 207u: goto L_08967D74;
    case 208u: goto L_08967D7C;
    case 209u: goto L_08967D80;
    case 210u: goto L_08967D8C;
    case 211u: goto L_08967D94;
    case 212u: goto L_08967D9C;
    case 213u: goto L_08967DA0;
    case 214u: goto L_08967DBC;
    case 215u: goto L_08967DCC;
    case 216u: goto L_08967DD4;
    case 217u: goto L_08967DDC;
    case 218u: goto L_08967DE4;
    case 219u: goto L_08967DF0;
    case 220u: goto L_08967E04;
    case 221u: goto L_08967E10;
    case 222u: goto L_08967E18;
    case 223u: goto L_08967E28;
    case 224u: goto L_08967E34;
    case 225u: goto L_08967E3C;
    case 226u: goto L_08967E58;
    case 227u: goto L_08967E60;
    case 228u: goto L_08967E70;
    case 229u: goto L_08967E78;
    case 230u: goto L_08967E84;
    case 231u: goto L_08967E98;
    case 232u: goto L_08967EAC;
    case 233u: goto L_08967EBC;
    case 234u: goto L_08967EC8;
    case 235u: goto L_08967ED0;
    case 236u: goto L_08967EE0;
    case 237u: goto L_08967EE8;
    case 238u: goto L_08967EFC;
    case 239u: goto L_08967F14;
    case 240u: goto L_08967F1C;
    case 241u: goto L_08967F24;
    case 242u: goto L_08967F30;
    case 243u: goto L_08967F88;
    case 244u: goto L_08967F94;
    case 245u: goto L_08967FB8;
    case 246u: goto L_08967FC4;
    case 247u: goto L_08967FCC;
    case 248u: goto L_08967FDC;
    case 249u: goto L_08967FE8;
    case 250u: goto L_08967FF4;
    case 251u: goto L_08967FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08967004:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967028;
      }
      goto L_08967010;
    }
L_08967010:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08967028u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08967028u) goto L_08967028;
    return;
L_08967028:
    aot_gpr[31] = (0x08967030u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 234u, 0x08971E30u>(ctx, &aot_mem) && ctx.pc == 0x08967030u) goto L_08967030;
    return;
L_08967030:
    aot_gpr[31] = (0x08967038u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 234u, 0x08971E30u>(ctx, &aot_mem) && ctx.pc == 0x08967038u) goto L_08967038;
    return;
L_08967038:
    aot_gpr[31] = (0x08967040u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(376));
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 234u, 0x08971E30u>(ctx, &aot_mem) && ctx.pc == 0x08967040u) goto L_08967040;
    return;
L_08967040:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896705C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089670A0;
      }
      goto L_08967080;
    }
L_08967080:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08967108;
      }
      goto L_08967088;
    }
L_08967088:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089670C4;
      }
      goto L_08967090;
    }
L_08967090:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08967108;
      }
      goto L_089670A0;
    }
L_089670A0:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089670F8;
      }
      goto L_089670AC;
    }
L_089670AC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967108;
      }
      goto L_089670B4;
    }
L_089670B4:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(376));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08967108;
      }
      goto L_089670C4;
    }
L_089670C4:
    aot_gpr[31] = (0x089670CCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 54u, 0x08969378u>(ctx, &aot_mem) && ctx.pc == 0x089670CCu) goto L_089670CC;
    return;
L_089670CC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089670F0;
      }
      goto L_089670D8;
    }
L_089670D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089670F0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089670F0u) goto L_089670F0;
    return;
L_089670F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08967108;
      }
      goto L_089670F8;
    }
L_089670F8:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(204));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08967108;
      }
      goto L_08967108;
    }
L_08967108:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967120:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967140;
      }
      goto L_0896712C;
    }
L_0896712C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967148;
      }
      goto L_08967138;
    }
L_08967138:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
      if (branch_taken) {
          goto L_0896714C;
      }
      goto L_08967140;
    }
L_08967140:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896714C;
      }
      goto L_08967148;
    }
L_08967148:
    aot_gpr[2] = (0u | 5u);
    goto L_0896714C;
L_0896714C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967154:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896718C;
      }
      goto L_08967168;
    }
L_08967168:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08967184u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08967184u) goto L_08967184;
    return;
L_08967184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967190;
      }
      goto L_0896718C;
    }
L_0896718C:
    aot_gpr[2] = (0u | 0u);
    goto L_08967190;
L_08967190:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896719C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < 2 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089671DC;
      }
      goto L_089671BC;
    }
L_089671BC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08967220;
      }
      goto L_089671C4;
    }
L_089671C4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x089671D4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 232u, 0x08971E14u>(ctx, &aot_mem) && ctx.pc == 0x089671D4u) goto L_089671D4;
    return;
L_089671D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967220;
      }
      goto L_089671DC;
    }
L_089671DC:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08967208;
      }
      goto L_089671E8;
    }
L_089671E8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967220;
      }
      goto L_089671F0;
    }
L_089671F0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(376));
    aot_gpr[31] = (0x08967200u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 232u, 0x08971E14u>(ctx, &aot_mem) && ctx.pc == 0x08967200u) goto L_08967200;
    return;
L_08967200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967220;
      }
      goto L_08967208;
    }
L_08967208:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(204));
    aot_gpr[31] = (0x08967218u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 232u, 0x08971E14u>(ctx, &aot_mem) && ctx.pc == 0x08967218u) goto L_08967218;
    return;
L_08967218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967220;
      }
      goto L_08967220;
    }
L_08967220:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896722C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[6]) < 48 ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[4] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_089672B4;
      }
      goto L_08967268;
    }
L_08967268:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089672B4;
      }
      goto L_08967274;
    }
L_08967274:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08967284u);
    aot_gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08967284u) goto L_08967284;
    return;
L_08967284:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08967294u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08967294u) goto L_08967294;
    return;
L_08967294:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089672ACu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    goto L_0896719C;
L_089672AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089672D4;
      }
      goto L_089672B4;
    }
L_089672B4:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089672D4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28640));
    goto L_089673D4;
L_089672D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089672F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08967304u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x08967304u) goto L_08967304;
    return;
L_08967304:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[31] = (0x08967318u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 3u, 0x08969018u>(ctx, &aot_mem) && ctx.pc == 0x08967318u) goto L_08967318;
    return;
L_08967318:
    aot_gpr[31] = (0x08967320u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(204));
    goto L_0896780C;
L_08967320:
    aot_gpr[31] = (0x08967328u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(376));
    goto L_08967710;
L_08967328:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896733C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08967350u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24824));
    goto L_089672F0;
L_08967350:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0896735Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26848));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0896735Cu) goto L_0896735C;
    return;
L_0896735C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967368:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_089673BC;
      }
      goto L_08967378;
    }
L_08967378:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089673BC;
      }
      goto L_08967380;
    }
L_08967380:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089673B4;
      }
      goto L_08967394;
    }
L_08967394:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089673ACu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089673ACu) goto L_089673AC;
    return;
L_089673AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089673BC;
      }
      goto L_089673B4;
    }
L_089673B4:
    aot_gpr[31] = (0x089673BCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x089673BCu) goto L_089673BC;
    return;
L_089673BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089673C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089673D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-304));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[21]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[21] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[31]);
    aot_gpr[31] = (0x08967414u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 140u, 0x08983720u>(ctx, &aot_mem) && ctx.pc == 0x08967414u) goto L_08967414;
    return;
L_08967414:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08967424u);
    aot_gpr[6] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08967424u) goto L_08967424;
    return;
L_08967424:
    aot_gpr[4] = (2198u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30400));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967458;
      }
      goto L_0896743C;
    }
L_0896743C:
    aot_gpr[31] = (0x08967444u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 144u, 0x08983750u>(ctx, &aot_mem) && ctx.pc == 0x08967444u) goto L_08967444;
    return;
L_08967444:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 8u);
    aot_gpr[31] = (0x08967454u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 161u, 0x08962BC4u>(ctx, &aot_mem) && ctx.pc == 0x08967454u) goto L_08967454;
    return;
L_08967454:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_08967458;
L_08967458:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089674A4;
      }
      goto L_08967464;
    }
L_08967464:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 205u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x0896749Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-21760));
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 252u, 0x0895EFDCu>(ctx, &aot_mem) && ctx.pc == 0x0896749Cu) goto L_0896749C;
    return;
L_0896749C:
    aot_gpr[31] = (0x089674A4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 254u, 0x0895EFECu>(ctx, &aot_mem) && ctx.pc == 0x089674A4u) goto L_089674A4;
    return;
L_089674A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089674C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08967500;
      }
      goto L_089674E8;
    }
L_089674E8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    aot_gpr[31] = (0x089674F8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 255u, 0x0895EFF4u>(ctx, &aot_mem) && ctx.pc == 0x089674F8u) goto L_089674F8;
    return;
L_089674F8:
    aot_gpr[31] = (0x08967500u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 253u, 0x0895EFE4u>(ctx, &aot_mem) && ctx.pc == 0x08967500u) goto L_08967500;
    return;
L_08967500:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967518:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) > 0;
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0896753C;
      }
      goto L_0896752C;
    }
L_0896752C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_089675C0;
      }
      goto L_08967534;
    }
L_08967534:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089675C4;
      }
      goto L_0896753C;
    }
L_0896753C:
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0896757C;
      }
      goto L_08967544;
    }
L_08967544:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089675C0;
      }
      goto L_0896754C;
    }
L_0896754C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 8u);
    aot_gpr[31] = (0x0896756Cu);
    aot_gpr[6] = (0u | 4000u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 146u, 0x08962A68u>(ctx, &aot_mem) && ctx.pc == 0x0896756Cu) goto L_0896756C;
    return;
L_0896756C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089675C4;
      }
      goto L_0896757C;
    }
L_0896757C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089675B8;
      }
      goto L_08967588;
    }
L_08967588:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (0x08967598u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 101u, 0x08983560u>(ctx, &aot_mem) && ctx.pc == 0x08967598u) goto L_08967598;
    return;
L_08967598:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089675A8u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 161u, 0x08962BC4u>(ctx, &aot_mem) && ctx.pc == 0x089675A8u) goto L_089675A8;
    return;
L_089675A8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089675B8;
L_089675B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089675C4;
      }
      goto L_089675C0;
    }
L_089675C0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_089675C4;
L_089675C4:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089675D0;
      }
      goto L_089675CC;
    }
L_089675CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_089675D0;
L_089675D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089675DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08967608u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 255u, 0x0895EFF4u>(ctx, &aot_mem) && ctx.pc == 0x08967608u) goto L_08967608;
    return;
L_08967608:
    aot_gpr[31] = (0x08967610u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 253u, 0x0895EFE4u>(ctx, &aot_mem) && ctx.pc == 0x08967610u) goto L_08967610;
    return;
L_08967610:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967628;
      }
      goto L_0896761C;
    }
L_0896761C:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896769C;
      }
      goto L_08967628;
    }
L_08967628:
    aot_gpr[31] = (0x08967630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 113u, 0x08A3A594u>(ctx, &aot_mem) && ctx.pc == 0x08967630u) goto L_08967630;
    return;
L_08967630:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(256)));
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[18] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896764C;
      }
      goto L_08967648;
    }
L_08967648:
    aot_gpr[18] = (0u | 0u);
    goto L_0896764C;
L_0896764C:
    aot_gpr[31] = (0x08967654u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x08967654u) goto L_08967654;
    return;
L_08967654:
    aot_gpr[6] = (aot_gpr[18] << 4u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0896767Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24824));
    goto L_0896722C;
L_0896767C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967690;
      }
      goto L_08967688;
    }
L_08967688:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08967690;
L_08967690:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896769C;
      }
      goto L_08967698;
    }
L_08967698:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_0896769C;
L_0896769C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089676B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089676C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089676D8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28640));
    goto L_089675DC;
L_089676D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089676E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089676F8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28640));
    goto L_089676B4;
L_089676F8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08967704u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26832));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08967704u) goto L_08967704;
    return;
L_08967704:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967710:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08967724u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08967904;
L_08967724:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5296));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967744:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896778C;
      }
      goto L_08967760;
    }
L_08967760:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5296));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08967778u);
    aot_gpr[5] = (0u | 0u);
    goto L_08967938;
L_08967778:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896778C;
      }
      goto L_08967784;
    }
L_08967784:
    aot_gpr[31] = (0x0896778Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 224u, 0x08971D78u>(ctx, &aot_mem) && ctx.pc == 0x0896778Cu) goto L_0896778C;
    return;
L_0896778C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089677A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[31]);
    aot_gpr[31] = (0x089677D0u);
    aot_gpr[6] = (0u | 296u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089677D0u) goto L_089677D0;
    return;
L_089677D0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089677E0u);
    aot_gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089677E0u) goto L_089677E0;
    return;
L_089677E0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089677F4u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08967CB4;
L_089677F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896780C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08967820u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08967904;
L_08967820:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5360));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967840:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08967888;
      }
      goto L_0896785C;
    }
L_0896785C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5360));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08967874u);
    aot_gpr[5] = (0u | 0u);
    goto L_08967938;
L_08967874:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967888;
      }
      goto L_08967880;
    }
L_08967880:
    aot_gpr[31] = (0x08967888u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 224u, 0x08971D78u>(ctx, &aot_mem) && ctx.pc == 0x08967888u) goto L_08967888;
    return;
L_08967888:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896789C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[31]);
    aot_gpr[31] = (0x089678D8u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 72u, 0x089AB63Cu>(ctx, &aot_mem) && ctx.pc == 0x089678D8u) goto L_089678D8;
    return;
L_089678D8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089678ECu);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    goto L_08967CB4;
L_089678EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967904:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08967918u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 226u, 0x08971D94u>(ctx, &aot_mem) && ctx.pc == 0x08967918u) goto L_08967918;
    return;
L_08967918:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5424));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967938:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08967980;
      }
      goto L_08967954;
    }
L_08967954:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5424));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896796Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 228u, 0x08971DE0u>(ctx, &aot_mem) && ctx.pc == 0x0896796Cu) goto L_0896796C;
    return;
L_0896796C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967980;
      }
      goto L_08967978;
    }
L_08967978:
    aot_gpr[31] = (0x08967980u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 224u, 0x08971D78u>(ctx, &aot_mem) && ctx.pc == 0x08967980u) goto L_08967980;
    return;
L_08967980:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967994:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089679D0;
      }
      goto L_089679BC;
    }
L_089679BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(164)));
    aot_gpr[5] = (0u | 10u);
    aot_gpr[31] = (0x089679CCu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 161u, 0x08962BC4u>(ctx, &aot_mem) && ctx.pc == 0x089679CCu) goto L_089679CC;
    return;
L_089679CC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089679D0;
L_089679D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(164), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] != 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_089679F0;
    }
    goto L_089679E0;
L_089679E0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967BB8;
      }
      goto L_089679E8;
    }
L_089679E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967A1C;
      }
      goto L_089679F0;
    }
L_089679F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(168)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08967A10u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08967A10u) goto L_08967A10;
    return;
L_08967A10:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08967BB8;
      }
      goto L_08967A1C;
    }
L_08967A1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(156)));
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967B84;
      }
      goto L_08967A2C;
    }
L_08967A2C:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08967A88;
      }
      goto L_08967A38;
    }
L_08967A38:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08967AB0;
      }
      goto L_08967A40;
    }
L_08967A40:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08967B24;
      }
      goto L_08967A48;
    }
L_08967A48:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08967B54;
      }
      goto L_08967A50;
    }
L_08967A50:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08967B7C;
      }
      goto L_08967A58;
    }
L_08967A58:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967A80;
      }
      goto L_08967A60;
    }
L_08967A60:
    aot_gpr[31] = (0x08967A68u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 224u, 0x089ACFB8u>(ctx, &aot_mem) && ctx.pc == 0x08967A68u) goto L_08967A68;
    return;
L_08967A68:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 10u);
    aot_gpr[31] = (0x08967A78u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08967A78u) goto L_08967A78;
    return;
L_08967A78:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08967A80;
L_08967A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967B84;
      }
      goto L_08967A88;
    }
L_08967A88:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(156), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 9u);
    aot_gpr[31] = (0x08967AA8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 144u, 0x08962A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08967AA8u) goto L_08967AA8;
    return;
L_08967AA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08967B84;
      }
      goto L_08967AB0;
    }
L_08967AB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(160)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x08967AC0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 81u, 0x08983414u>(ctx, &aot_mem) && ctx.pc == 0x08967AC0u) goto L_08967AC0;
    return;
L_08967AC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08967AF0;
      }
      goto L_08967AD0;
    }
L_08967AD0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 10u);
    aot_gpr[31] = (0x08967AE8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-16));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 144u, 0x08962A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08967AE8u) goto L_08967AE8;
    return;
L_08967AE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08967B1C;
      }
      goto L_08967AF0;
    }
L_08967AF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967B1C;
      }
      goto L_08967AFC;
    }
L_08967AFC:
    aot_gpr[31] = (0x08967B04u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 224u, 0x089ACFB8u>(ctx, &aot_mem) && ctx.pc == 0x08967B04u) goto L_08967B04;
    return;
L_08967B04:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 10u);
    aot_gpr[31] = (0x08967B14u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08967B14u) goto L_08967B14;
    return;
L_08967B14:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08967B1C;
L_08967B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967B84;
      }
      goto L_08967B24;
    }
L_08967B24:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967B4C;
      }
      goto L_08967B2C;
    }
L_08967B2C:
    aot_gpr[31] = (0x08967B34u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 224u, 0x089ACFB8u>(ctx, &aot_mem) && ctx.pc == 0x08967B34u) goto L_08967B34;
    return;
L_08967B34:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 10u);
    aot_gpr[31] = (0x08967B44u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08967B44u) goto L_08967B44;
    return;
L_08967B44:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08967B4C;
L_08967B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967B84;
      }
      goto L_08967B54;
    }
L_08967B54:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(156), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 11u);
    aot_gpr[31] = (0x08967B74u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 144u, 0x08962A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08967B74u) goto L_08967B74;
    return;
L_08967B74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08967B84;
      }
      goto L_08967B7C;
    }
L_08967B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967B84;
      }
      goto L_08967B84;
    }
L_08967B84:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967BB8;
      }
      goto L_08967B8C;
    }
L_08967B8C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(168)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08967BB0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08967BB0u) goto L_08967BB0;
    return;
L_08967BB0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08967BB8;
L_08967BB8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967BD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[8] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08967CA8;
      }
      goto L_08967BE8;
    }
L_08967BE8:
    aot_gpr[7] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967C48;
      }
      goto L_08967BFC;
    }
L_08967BFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08967C18u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x08967C18u) goto L_08967C18;
    return;
L_08967C18:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08967C24u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 103u, 0x089ADA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08967C24u) goto L_08967C24;
    return;
L_08967C24:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08967C34u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08967C34u) goto L_08967C34;
    return;
L_08967C34:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08967C48;
L_08967C48:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967C80;
      }
      goto L_08967C50;
    }
L_08967C50:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[31] = (0x08967C64u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 156u, 0x08962B94u>(ctx, &aot_mem) && ctx.pc == 0x08967C64u) goto L_08967C64;
    return;
L_08967C64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08967C80;
      }
      goto L_08967C70;
    }
L_08967C70:
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08967C80;
L_08967C80:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967CA0;
      }
      goto L_08967C8C;
    }
L_08967C8C:
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08967CA0;
L_08967CA0:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967CA8;
      }
      goto L_08967CA8;
    }
L_08967CA8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967CB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2199u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(164), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7744));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(276), aot_gpr[4]);
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7808));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(280), aot_gpr[4]);
    aot_gpr[4] = (2198u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32316));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(288), aot_gpr[4]);
    aot_gpr[4] = (2198u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32408));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(284), aot_gpr[4]);
    aot_gpr[4] = (0u | 256u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(272), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(292), aot_gpr[19]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08967D2Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x08967D2Cu) goto L_08967D2C;
    return;
L_08967D2C:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08967D64;
      }
      goto L_08967D40;
    }
L_08967D40:
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08967D4Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 79u, 0x089AD73Cu>(ctx, &aot_mem) && ctx.pc == 0x08967D4Cu) goto L_08967D4C;
    return;
L_08967D4C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 9u);
    aot_gpr[31] = (0x08967D5Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08967D5Cu) goto L_08967D5C;
    return;
L_08967D5C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08967D64;
L_08967D64:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08967D80;
      }
      goto L_08967D6C;
    }
L_08967D6C:
    aot_gpr[31] = (0x08967D74u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 156u, 0x08962B94u>(ctx, &aot_mem) && ctx.pc == 0x08967D74u) goto L_08967D74;
    return;
L_08967D74:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967D80;
      }
      goto L_08967D7C;
    }
L_08967D7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(160), 0u);
    goto L_08967D80;
L_08967D80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967D94;
      }
      goto L_08967D8C;
    }
L_08967D8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(160), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08967D94;
L_08967D94:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967DA0;
      }
      goto L_08967D9C;
    }
L_08967D9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(156), 0u);
    goto L_08967DA0;
L_08967DA0:
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
L_08967DBC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08967DD4;
      }
      goto L_08967DCC;
    }
L_08967DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967DDC;
      }
      goto L_08967DD4;
    }
L_08967DD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(164), aot_gpr[5]);
    goto L_08967DDC;
L_08967DDC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967DE4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967E04;
      }
      goto L_08967DF0;
    }
L_08967DF0:
    aot_gpr[6] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), aot_gpr[5]);
      if (branch_taken) {
          goto L_08967E10;
      }
      goto L_08967E04;
    }
L_08967E04:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), 0u);
    goto L_08967E10;
L_08967E10:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967E18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08967E34;
      }
      goto L_08967E28;
    }
L_08967E28:
    aot_gpr[5] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), 0u);
    goto L_08967E34;
L_08967E34:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967E3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08967E58u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 132u, 0x0896292Cu>(ctx, &aot_mem) && ctx.pc == 0x08967E58u) goto L_08967E58;
    return;
L_08967E58:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08967E84;
      }
      goto L_08967E60;
    }
L_08967E60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08967E84;
      }
      goto L_08967E70;
    }
L_08967E70:
    aot_gpr[31] = (0x08967E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 2u, 0x0896000Cu>(ctx, &aot_mem) && ctx.pc == 0x08967E78u) goto L_08967E78;
    return;
L_08967E78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08967E84u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 80u, 0x08960488u>(ctx, &aot_mem) && ctx.pc == 0x08967E84u) goto L_08967E84;
    return;
L_08967E84:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967E98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967EBC;
      }
      goto L_08967EAC;
    }
L_08967EAC:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08967EBCu);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_08967DBC;
L_08967EBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967EC8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967ED0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08967F24;
      }
      goto L_08967EE0;
    }
L_08967EE0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F24;
      }
      goto L_08967EE8;
    }
L_08967EE8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F1C;
      }
      goto L_08967EFC;
    }
L_08967EFC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08967F14u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08967F14u) goto L_08967F14;
    return;
L_08967F14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F24;
      }
      goto L_08967F1C;
    }
L_08967F1C:
    aot_gpr[31] = (0x08967F24u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08967F24u) goto L_08967F24;
    return;
L_08967F24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967F30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[5] = (2217u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-5148), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[5] = (2199u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29044));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29052));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29060));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10240));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08967F88u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 160u, 0x089ADEE4u>(ctx, &aot_mem) && ctx.pc == 0x08967F88u) goto L_08967F88;
    return;
L_08967F88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967F94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-24824));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08967FB8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08967154;
L_08967FB8:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08967FF4;
      }
      goto L_08967FC4;
    }
L_08967FC4:
    aot_gpr[31] = (0x08967FCCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08967120;
L_08967FCC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_08967FFC;
      }
      goto L_08967FDC;
    }
L_08967FDC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0356_entry, 356u, 2u, 0x0896800Cu>(ctx, &aot_mem); return;
      }
      goto L_08967FE8;
    }
L_08967FE8:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0356_entry, 356u, 2u, 0x0896800Cu>(ctx, &aot_mem); return;
      }
      goto L_08967FF4;
    }
L_08967FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0356_entry, 356u, 2u, 0x0896800Cu>(ctx, &aot_mem); return;
      }
      goto L_08967FFC;
    }
L_08967FFC:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0356_entry, 356u, 2u, 0x0896800Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0356_entry, 356u, 1u, 0x08968004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0355(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0355_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_355(Runtime &runtime) {
    runtime.register_generated_unit(355u, 0x08967000u, 4096u, &recomp_unit_0355, &recomp_unit_0355_entry);
    runtime.register_function(0x08967004u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967010u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967028u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967030u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967038u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967040u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896705Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967080u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967088u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967090u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089670A0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089670ACu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089670B4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089670C4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089670CCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089670D8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089670F0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089670F8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967108u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967120u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896712Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967138u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967140u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967148u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896714Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967154u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967168u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967184u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896718Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967190u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896719Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089671BCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089671C4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089671D4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089671DCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089671E8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089671F0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967200u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967208u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967218u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967220u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896722Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967268u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967274u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967284u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967294u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089672ACu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089672B4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089672D4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089672F0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967304u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967318u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967320u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967328u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896733Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967350u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896735Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967368u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967378u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967380u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967394u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089673ACu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089673B4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089673BCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089673C8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089673D4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967414u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967424u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896743Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967444u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967454u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967458u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967464u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896749Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089674A4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089674C8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089674E8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089674F8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967500u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967518u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896752Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967534u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896753Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967544u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896754Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896756Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896757Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967588u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967598u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089675A8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089675B8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089675C0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089675C4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089675CCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089675D0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089675DCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967608u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967610u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896761Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967628u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967630u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967648u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896764Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967654u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896767Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967688u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967690u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967698u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896769Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089676B4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089676C0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089676D8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089676E4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089676F8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967704u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967710u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967724u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967744u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967760u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967778u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967784u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896778Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089677A0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089677D0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089677E0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089677F4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896780Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967820u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967840u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896785Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967874u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967880u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967888u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896789Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089678D8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089678ECu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967904u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967918u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967938u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967954u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x0896796Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967978u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967980u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967994u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089679BCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089679CCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089679D0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089679E0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089679E8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x089679F0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967A10u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967A1Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967A2Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967A38u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967A40u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967A48u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967A50u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967A58u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967A60u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967A68u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967A78u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967A80u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967A88u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967AA8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967AB0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967AC0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967AD0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967AE8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967AF0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967AFCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967B04u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967B14u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967B1Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967B24u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967B2Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967B34u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967B44u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967B4Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967B54u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967B74u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967B7Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967B84u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967B8Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967BB0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967BB8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967BD0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967BE8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967BFCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967C18u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967C24u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967C34u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967C48u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967C50u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967C64u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967C70u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967C80u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967C8Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967CA0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967CA8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967CB4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967D2Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967D40u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967D4Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967D5Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967D64u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967D6Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967D74u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967D7Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967D80u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967D8Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967D94u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967D9Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967DA0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967DBCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967DCCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967DD4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967DDCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967DE4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967DF0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967E04u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967E10u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967E18u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967E28u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967E34u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967E3Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967E58u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967E60u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967E70u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967E78u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967E84u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967E98u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967EACu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967EBCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967EC8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967ED0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967EE0u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967EE8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967EFCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967F14u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967F1Cu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967F24u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967F30u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967F88u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967F94u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967FB8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967FC4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967FCCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967FDCu, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967FE8u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967FF4u, &recomp_unit_0355, "recomp_unit_0355");
    runtime.register_function(0x08967FFCu, &recomp_unit_0355, "recomp_unit_0355");
}
} // namespace psprecomp
