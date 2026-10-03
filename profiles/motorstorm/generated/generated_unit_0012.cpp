#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0012[1022] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0,
    7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 32, 33, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0,
    0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82,
    0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 96, 0, 0, 97,
    0, 98, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 104, 0, 0, 105, 0, 0, 106, 107, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 112, 0, 0, 113, 0, 0, 114, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    123, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128, 129, 0, 0, 0, 130, 0, 131, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 141, 0, 0, 142, 0, 0, 143, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 147, 0, 148, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0,
    0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 163, 0, 164, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    188, 0, 189, 0, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 201,
    0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 205, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0,
    0, 210, 211, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 232, 233,
};
void recomp_unit_0012_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08810000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0012[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08810000;
    case 2u: goto L_08810010;
    case 3u: goto L_0881003C;
    case 4u: goto L_0881005C;
    case 5u: goto L_0881006C;
    case 6u: goto L_08810074;
    case 7u: goto L_08810080;
    case 8u: goto L_08810094;
    case 9u: goto L_088100B4;
    case 10u: goto L_088100BC;
    case 11u: goto L_088100C4;
    case 12u: goto L_088100C8;
    case 13u: goto L_088100E0;
    case 14u: goto L_08810104;
    case 15u: goto L_0881011C;
    case 16u: goto L_08810128;
    case 17u: goto L_08810130;
    case 18u: goto L_08810138;
    case 19u: goto L_08810140;
    case 20u: goto L_0881015C;
    case 21u: goto L_08810164;
    case 22u: goto L_0881016C;
    case 23u: goto L_08810188;
    case 24u: goto L_088101D4;
    case 25u: goto L_088101DC;
    case 26u: goto L_088101EC;
    case 27u: goto L_088101F4;
    case 28u: goto L_08810200;
    case 29u: goto L_0881021C;
    case 30u: goto L_0881022C;
    case 31u: goto L_08810234;
    case 32u: goto L_0881023C;
    case 33u: goto L_08810240;
    case 34u: goto L_08810244;
    case 35u: goto L_08810288;
    case 36u: goto L_088102A0;
    case 37u: goto L_088102AC;
    case 38u: goto L_088102CC;
    case 39u: goto L_088102D4;
    case 40u: goto L_088102E4;
    case 41u: goto L_088102F4;
    case 42u: goto L_0881031C;
    case 43u: goto L_08810324;
    case 44u: goto L_0881034C;
    case 45u: goto L_08810358;
    case 46u: goto L_08810368;
    case 47u: goto L_08810370;
    case 48u: goto L_0881038C;
    case 49u: goto L_088103A8;
    case 50u: goto L_088103B0;
    case 51u: goto L_088103C0;
    case 52u: goto L_088103CC;
    case 53u: goto L_088103DC;
    case 54u: goto L_088103E8;
    case 55u: goto L_088103F8;
    case 56u: goto L_08810404;
    case 57u: goto L_08810424;
    case 58u: goto L_0881042C;
    case 59u: goto L_08810434;
    case 60u: goto L_0881043C;
    case 61u: goto L_08810444;
    case 62u: goto L_0881044C;
    case 63u: goto L_08810454;
    case 64u: goto L_0881045C;
    case 65u: goto L_08810464;
    case 66u: goto L_08810474;
    case 67u: goto L_08810484;
    case 68u: goto L_088104A8;
    case 69u: goto L_088104B4;
    case 70u: goto L_08810518;
    case 71u: goto L_08810528;
    case 72u: goto L_08810538;
    case 73u: goto L_0881053C;
    case 74u: goto L_08810558;
    case 75u: goto L_08810574;
    case 76u: goto L_08810590;
    case 77u: goto L_08810598;
    case 78u: goto L_088105A8;
    case 79u: goto L_088105B0;
    case 80u: goto L_088105D0;
    case 81u: goto L_088105E4;
    case 82u: goto L_088105FC;
    case 83u: goto L_08810604;
    case 84u: goto L_0881060C;
    case 85u: goto L_08810614;
    case 86u: goto L_0881061C;
    case 87u: goto L_08810624;
    case 88u: goto L_08810644;
    case 89u: goto L_08810688;
    case 90u: goto L_08810694;
    case 91u: goto L_088106A4;
    case 92u: goto L_088106BC;
    case 93u: goto L_088106DC;
    case 94u: goto L_088106E4;
    case 95u: goto L_088106EC;
    case 96u: goto L_088106F0;
    case 97u: goto L_088106FC;
    case 98u: goto L_08810704;
    case 99u: goto L_08810708;
    case 100u: goto L_0881071C;
    case 101u: goto L_0881073C;
    case 102u: goto L_08810744;
    case 103u: goto L_0881074C;
    case 104u: goto L_08810750;
    case 105u: goto L_0881075C;
    case 106u: goto L_08810768;
    case 107u: goto L_0881076C;
    case 108u: goto L_08810780;
    case 109u: goto L_088107A0;
    case 110u: goto L_088107A8;
    case 111u: goto L_088107B0;
    case 112u: goto L_088107B4;
    case 113u: goto L_088107C0;
    case 114u: goto L_088107CC;
    case 115u: goto L_088107D0;
    case 116u: goto L_088107F0;
    case 117u: goto L_08810804;
    case 118u: goto L_08810810;
    case 119u: goto L_08810820;
    case 120u: goto L_08810830;
    case 121u: goto L_08810858;
    case 122u: goto L_08810864;
    case 123u: goto L_08810880;
    case 124u: goto L_08810884;
    case 125u: goto L_0881089C;
    case 126u: goto L_088108C4;
    case 127u: goto L_088108D0;
    case 128u: goto L_088108D8;
    case 129u: goto L_088108DC;
    case 130u: goto L_088108EC;
    case 131u: goto L_088108F4;
    case 132u: goto L_0881091C;
    case 133u: goto L_08810928;
    case 134u: goto L_08810930;
    case 135u: goto L_08810934;
    case 136u: goto L_08810940;
    case 137u: goto L_08810974;
    case 138u: goto L_08810994;
    case 139u: goto L_0881099C;
    case 140u: goto L_088109A4;
    case 141u: goto L_088109A8;
    case 142u: goto L_088109B4;
    case 143u: goto L_088109C0;
    case 144u: goto L_088109C4;
    case 145u: goto L_088109D4;
    case 146u: goto L_08810A08;
    case 147u: goto L_08810A14;
    case 148u: goto L_08810A1C;
    case 149u: goto L_08810A20;
    case 150u: goto L_08810A38;
    case 151u: goto L_08810A4C;
    case 152u: goto L_08810A54;
    case 153u: goto L_08810A64;
    case 154u: goto L_08810A6C;
    case 155u: goto L_08810A78;
    case 156u: goto L_08810A88;
    case 157u: goto L_08810A90;
    case 158u: goto L_08810A9C;
    case 159u: goto L_08810ABC;
    case 160u: goto L_08810AC8;
    case 161u: goto L_08810ADC;
    case 162u: goto L_08810B04;
    case 163u: goto L_08810B10;
    case 164u: goto L_08810B18;
    case 165u: goto L_08810B1C;
    case 166u: goto L_08810B40;
    case 167u: goto L_08810B50;
    case 168u: goto L_08810B58;
    case 169u: goto L_08810B7C;
    case 170u: goto L_08810B90;
    case 171u: goto L_08810B98;
    case 172u: goto L_08810BA0;
    case 173u: goto L_08810BA8;
    case 174u: goto L_08810BB8;
    case 175u: goto L_08810BC4;
    case 176u: goto L_08810BD0;
    case 177u: goto L_08810BE0;
    case 178u: goto L_08810BF0;
    case 179u: goto L_08810C18;
    case 180u: goto L_08810C20;
    case 181u: goto L_08810C28;
    case 182u: goto L_08810C30;
    case 183u: goto L_08810C38;
    case 184u: goto L_08810C40;
    case 185u: goto L_08810C50;
    case 186u: goto L_08810C60;
    case 187u: goto L_08810C70;
    case 188u: goto L_08810C80;
    case 189u: goto L_08810C88;
    case 190u: goto L_08810CA0;
    case 191u: goto L_08810CA8;
    case 192u: goto L_08810CB0;
    case 193u: goto L_08810CC0;
    case 194u: goto L_08810CD8;
    case 195u: goto L_08810CF0;
    case 196u: goto L_08810D34;
    case 197u: goto L_08810D44;
    case 198u: goto L_08810D64;
    case 199u: goto L_08810D6C;
    case 200u: goto L_08810D74;
    case 201u: goto L_08810D7C;
    case 202u: goto L_08810D94;
    case 203u: goto L_08810DA0;
    case 204u: goto L_08810DA8;
    case 205u: goto L_08810DB0;
    case 206u: goto L_08810DBC;
    case 207u: goto L_08810DC4;
    case 208u: goto L_08810DCC;
    case 209u: goto L_08810DE4;
    case 210u: goto L_08810E04;
    case 211u: goto L_08810E08;
    case 212u: goto L_08810E10;
    case 213u: goto L_08810E24;
    case 214u: goto L_08810E50;
    case 215u: goto L_08810E5C;
    case 216u: goto L_08810E90;
    case 217u: goto L_08810E9C;
    case 218u: goto L_08810EAC;
    case 219u: goto L_08810EB8;
    case 220u: goto L_08810F00;
    case 221u: goto L_08810F10;
    case 222u: goto L_08810F24;
    case 223u: goto L_08810F40;
    case 224u: goto L_08810F60;
    case 225u: goto L_08810F84;
    case 226u: goto L_08810F94;
    case 227u: goto L_08810FA8;
    case 228u: goto L_08810FB0;
    case 229u: goto L_08810FC0;
    case 230u: goto L_08810FCC;
    case 231u: goto L_08810FD4;
    case 232u: goto L_08810FF0;
    case 233u: goto L_08810FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08810000:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810010:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_0881006C;
      }
      goto L_0881003C;
    }
L_0881003C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 16u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0881005Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881005Cu) goto L_0881005C;
    return;
L_0881005C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] << 2u);
      if (branch_taken) {
          goto L_08810080;
      }
      goto L_0881006C;
    }
L_0881006C:
    aot_gpr[31] = (0x08810074u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08810074u) goto L_08810074;
    return;
L_08810074:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    goto L_08810080;
L_08810080:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088100BC;
      }
      goto L_08810094;
    }
L_08810094:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 16u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088100B4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088100B4u) goto L_088100B4;
    return;
L_088100B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088100C8;
      }
      goto L_088100BC;
    }
L_088100BC:
    aot_gpr[31] = (0x088100C4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088100C4u) goto L_088100C4;
    return;
L_088100C4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088100C8;
L_088100C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088100E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08810128;
      }
      goto L_08810104;
    }
L_08810104:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0881011Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881011Cu) goto L_0881011C;
    return;
L_0881011C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08810138;
      }
      goto L_08810128;
    }
L_08810128:
    aot_gpr[31] = (0x08810130u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08810130u) goto L_08810130;
    return;
L_08810130:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08810138;
L_08810138:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08810164;
      }
      goto L_08810140;
    }
L_08810140:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0881015Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881015Cu) goto L_0881015C;
    return;
L_0881015C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881016C;
      }
      goto L_08810164;
    }
L_08810164:
    aot_gpr[31] = (0x0881016Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0881016Cu) goto L_0881016C;
    return;
L_0881016C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810188:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x088101D4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x088101D4u) goto L_088101D4;
    return;
L_088101D4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08810244;
    }
    goto L_088101DC;
L_088101DC:
    aot_gpr[19] = (4096u << 16u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (61440u << 16u);
    goto L_088101EC;
L_088101EC:
    aot_gpr[31] = (0x088101F4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x088101F4u) goto L_088101F4;
    return;
L_088101F4:
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08810234;
      }
      goto L_08810200;
    }
L_08810200:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[21]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0881022C;
      }
      goto L_0881021C;
    }
L_0881021C:
    aot_gpr[4] = (aot_gpr[4] >> 24u);
    aot_gpr[4] = (aot_gpr[5] ^ aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0881022C;
L_0881022C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088101EC;
      }
      goto L_08810234;
    }
L_08810234:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08810240;
      }
      goto L_0881023C;
    }
L_0881023C:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08810240;
L_08810240:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08810244;
L_08810244:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810288:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088102A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 30u, 0x08918368u>(ctx, &aot_mem) && ctx.pc == 0x088102A0u) goto L_088102A0;
    return;
L_088102A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088102AC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22200), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088102CC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088102D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088102E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088102E4u) goto L_088102E4;
    return;
L_088102E4:
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088102F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0881031Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0881031Cu) goto L_0881031C;
    return;
L_0881031C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0881038C;
      }
      goto L_08810324;
    }
L_08810324:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0881034Cu);
    aot_gpr[6] = (0u | 40u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881034Cu) goto L_0881034C;
    return;
L_0881034C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08810370;
      }
      goto L_08810358;
    }
L_08810358:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08810368u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088104B4;
L_08810368:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08810370;
L_08810370:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0881038C;
L_0881038C:
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
L_088103A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088103B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088103C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 91u, 0x088C0738u>(ctx, &aot_mem) && ctx.pc == 0x088103C0u) goto L_088103C0;
    return;
L_088103C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088103CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088103DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 95u, 0x088C07A4u>(ctx, &aot_mem) && ctx.pc == 0x088103DCu) goto L_088103DC;
    return;
L_088103DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088103E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088103F8u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x088103F8u) goto L_088103F8;
    return;
L_088103F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810404:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22208), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810424:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881042C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810434:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881043C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810444:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881044C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810454:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881045C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810464:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_088104A8;
      }
      goto L_08810474;
    }
L_08810474:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24568));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[6]);
      if (branch_taken) {
          goto L_088104A8;
      }
      goto L_08810484;
    }
L_08810484:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088104A8u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088104A8u) goto L_088104A8;
    return;
L_088104A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088104B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-14272));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08810518u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x08810518u) goto L_08810518;
    return;
L_08810518:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0881053C;
      }
      goto L_08810528;
    }
L_08810528:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08810538u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 181u, 0x08A4AD70u>(ctx, &aot_mem) && ctx.pc == 0x08810538u) goto L_08810538;
    return;
L_08810538:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0881053C;
L_0881053C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810558:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088105D0;
      }
      goto L_08810574;
    }
L_08810574:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-14272));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08810590u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x08810590u) goto L_08810590;
    return;
L_08810590:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_088105A8;
      }
      goto L_08810598;
    }
L_08810598:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_088105A8;
L_088105A8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088105D0;
      }
      goto L_088105B0;
    }
L_088105B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088105D0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088105D0u) goto L_088105D0;
    return;
L_088105D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088105E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088105FC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810604:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881060C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810614:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881061C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810624:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22216), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810644:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7192), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28668)));
    aot_gpr[5] = (0u | 4352u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08810688u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 90u, 0x0891D5E4u>(ctx, &aot_mem) && ctx.pc == 0x08810688u) goto L_08810688;
    return;
L_08810688:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[31] = (0x08810694u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 31u, 0x0891D244u>(ctx, &aot_mem) && ctx.pc == 0x08810694u) goto L_08810694;
    return;
L_08810694:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (0u | 64u);
    aot_gpr[31] = (0x088106A4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-16216));
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 103u, 0x089334ECu>(ctx, &aot_mem) && ctx.pc == 0x088106A4u) goto L_088106A4;
    return;
L_088106A4:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[20] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[21] = (2218u << 16u);
      if (branch_taken) {
          goto L_088106E4;
      }
      goto L_088106BC;
    }
L_088106BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088106DCu);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088106DCu) goto L_088106DC;
    return;
L_088106DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088106F0;
      }
      goto L_088106E4;
    }
L_088106E4:
    aot_gpr[31] = (0x088106ECu);
    aot_gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088106ECu) goto L_088106EC;
    return;
L_088106EC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_088106F0;
L_088106F0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08810708;
      }
      goto L_088106FC;
    }
L_088106FC:
    aot_gpr[31] = (0x08810704u);
    aot_gpr[5] = (0u | 123u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 14u, 0x08927220u>(ctx, &aot_mem) && ctx.pc == 0x08810704u) goto L_08810704;
    return;
L_08810704:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    goto L_08810708;
L_08810708:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7320), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08810744;
      }
      goto L_0881071C;
    }
L_0881071C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0881073Cu);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881073Cu) goto L_0881073C;
    return;
L_0881073C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08810750;
      }
      goto L_08810744;
    }
L_08810744:
    aot_gpr[31] = (0x0881074Cu);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x0881074Cu) goto L_0881074C;
    return;
L_0881074C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_08810750;
L_08810750:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (564u << 16u);
      if (branch_taken) {
          goto L_0881076C;
      }
      goto L_0881075C;
    }
L_0881075C:
    aot_gpr[5] = (0u | 256u);
    aot_gpr[31] = (0x08810768u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(21590));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 31u, 0x08927358u>(ctx, &aot_mem) && ctx.pc == 0x08810768u) goto L_08810768;
    return;
L_08810768:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    goto L_0881076C;
L_0881076C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7324), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088107A8;
      }
      goto L_08810780;
    }
L_08810780:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088107A0u);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088107A0u) goto L_088107A0;
    return;
L_088107A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088107B4;
      }
      goto L_088107A8;
    }
L_088107A8:
    aot_gpr[31] = (0x088107B0u);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088107B0u) goto L_088107B0;
    return;
L_088107B0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_088107B4;
L_088107B4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (641u << 16u);
      if (branch_taken) {
          goto L_088107D0;
      }
      goto L_088107C0;
    }
L_088107C0:
    aot_gpr[5] = (0u | 256u);
    aot_gpr[31] = (0x088107CCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9075));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 31u, 0x08927358u>(ctx, &aot_mem) && ctx.pc == 0x088107CCu) goto L_088107CC;
    return;
L_088107CC:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    goto L_088107D0;
L_088107D0:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7516), aot_gpr[18]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7316), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7312), 0u);
    aot_gpr[31] = (0x088107F0u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 30u, 0x0893032Cu>(ctx, &aot_mem) && ctx.pc == 0x088107F0u) goto L_088107F0;
    return;
L_088107F0:
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08810804u);
    aot_gpr[4] = (4u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 22u, 0x089321B8u>(ctx, &aot_mem) && ctx.pc == 0x08810804u) goto L_08810804;
    return;
L_08810804:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08810810u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7290), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 89u, 0x0891ACE0u>(ctx, &aot_mem) && ctx.pc == 0x08810810u) goto L_08810810;
    return;
L_08810810:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08810820u);
    aot_gpr[6] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0309_entry, 309u, 96u, 0x08939D30u>(ctx, &aot_mem) && ctx.pc == 0x08810820u) goto L_08810820;
    return;
L_08810820:
    aot_gpr[4] = (0u | 287u);
    aot_gpr[5] = (0u | 256u);
    aot_gpr[31] = (0x08810830u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0314_entry, 314u, 60u, 0x0893EDF8u>(ctx, &aot_mem) && ctx.pc == 0x08810830u) goto L_08810830;
    return;
L_08810830:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08810858u);
    aot_gpr[6] = (0u | 28u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08810858u) goto L_08810858;
    return;
L_08810858:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08810884;
      }
      goto L_08810864;
    }
L_08810864:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7056)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7052)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08810880u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 49u, 0x08945ABCu>(ctx, &aot_mem) && ctx.pc == 0x08810880u) goto L_08810880;
    return;
L_08810880:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    goto L_08810884;
L_08810884:
    aot_gpr[4] = (16355u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 36409u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7332), aot_gpr[18]);
    aot_gpr[31] = (0x0881089Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 56u, 0x08945B60u>(ctx, &aot_mem) && ctx.pc == 0x0881089Cu) goto L_0881089C;
    return;
L_0881089C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088108C4u);
    aot_gpr[6] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088108C4u) goto L_088108C4;
    return;
L_088108C4:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088108DC;
      }
      goto L_088108D0;
    }
L_088108D0:
    aot_gpr[31] = (0x088108D8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 148u, 0x08918E1Cu>(ctx, &aot_mem) && ctx.pc == 0x088108D8u) goto L_088108D8;
    return;
L_088108D8:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    goto L_088108DC;
L_088108DC:
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7332)));
    aot_gpr[31] = (0x088108ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-7328), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 16u, 0x08940218u>(ctx, &aot_mem) && ctx.pc == 0x088108ECu) goto L_088108EC;
    return;
L_088108EC:
    aot_gpr[31] = (0x088108F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7328)));
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 36u, 0x08940310u>(ctx, &aot_mem) && ctx.pc == 0x088108F4u) goto L_088108F4;
    return;
L_088108F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0881091Cu);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881091Cu) goto L_0881091C;
    return;
L_0881091C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08810934;
      }
      goto L_08810928;
    }
L_08810928:
    aot_gpr[31] = (0x08810930u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 144u, 0x08918D58u>(ctx, &aot_mem) && ctx.pc == 0x08810930u) goto L_08810930;
    return;
L_08810930:
    aot_gpr[20] = (aot_gpr[18] | 0u);
    goto L_08810934;
L_08810934:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08810940u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7308), aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0290_entry, 290u, 105u, 0x08926A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08810940u) goto L_08810940;
    return;
L_08810940:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7300), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7296), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-7292), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7291), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881099C;
      }
      goto L_08810974;
    }
L_08810974:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08810994u);
    aot_gpr[6] = (0u | 32u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08810994u) goto L_08810994;
    return;
L_08810994:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088109A8;
      }
      goto L_0881099C;
    }
L_0881099C:
    aot_gpr[31] = (0x088109A4u);
    aot_gpr[4] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088109A4u) goto L_088109A4;
    return;
L_088109A4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_088109A8;
L_088109A8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (3u << 16u);
      if (branch_taken) {
          goto L_088109C4;
      }
      goto L_088109B4;
    }
L_088109B4:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088109C0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12288));
    if (rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 182u, 0x0892EE2Cu>(ctx, &aot_mem) && ctx.pc == 0x088109C0u) goto L_088109C0;
    return;
L_088109C0:
    aot_gpr[20] = (aot_gpr[18] | 0u);
    goto L_088109C4;
L_088109C4:
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-7304), aot_gpr[20]);
    aot_gpr[31] = (0x088109D4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 38u, 0x089303E0u>(ctx, &aot_mem) && ctx.pc == 0x088109D4u) goto L_088109D4;
    return;
L_088109D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7304)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-29132), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08810A08u);
    aot_gpr[6] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08810A08u) goto L_08810A08;
    return;
L_08810A08:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08810A20;
      }
      goto L_08810A14;
    }
L_08810A14:
    aot_gpr[31] = (0x08810A1Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 76u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08810A1Cu) goto L_08810A1C;
    return;
L_08810A1C:
    aot_gpr[20] = (aot_gpr[18] | 0u);
    goto L_08810A20;
L_08810A20:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7336), aot_gpr[20]);
    aot_gpr[4] = (16879u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 49807u);
    aot_gpr[31] = (0x08810A38u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 192u, 0x0891BF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08810A38u) goto L_08810A38;
    return;
L_08810A38:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08810A4Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7264), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 122u, 0x08934A34u>(ctx, &aot_mem) && ctx.pc == 0x08810A4Cu) goto L_08810A4C;
    return;
L_08810A4C:
    aot_gpr[31] = (0x08810A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 81u, 0x0893582Cu>(ctx, &aot_mem) && ctx.pc == 0x08810A54u) goto L_08810A54;
    return;
L_08810A54:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08810A64u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x08810A64u) goto L_08810A64;
    return;
L_08810A64:
    aot_gpr[31] = (0x08810A6Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x08810A6Cu) goto L_08810A6C;
    return;
L_08810A6C:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08810A78u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x08810A78u) goto L_08810A78;
    return;
L_08810A78:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08810A88u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x08810A88u) goto L_08810A88;
    return;
L_08810A88:
    aot_gpr[31] = (0x08810A90u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x08810A90u) goto L_08810A90;
    return;
L_08810A90:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08810A9Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x08810A9Cu) goto L_08810A9C;
    return;
L_08810A9C:
    aot_gpr[4] = (0u | 256u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 26u);
    aot_gpr[9] = (0u | 26u);
    aot_gpr[31] = (0x08810ABCu);
    aot_gpr[10] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0295_entry, 295u, 176u, 0x0892BC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08810ABCu) goto L_08810ABC;
    return;
L_08810ABC:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(-7288));
    goto L_08810AC8;
L_08810AC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[20] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08810AC8;
      }
      goto L_08810ADC;
    }
L_08810ADC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (0u | 8u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08810B04u);
    aot_gpr[6] = (0u | 368u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08810B04u) goto L_08810B04;
    return;
L_08810B04:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08810B1C;
      }
      goto L_08810B10;
    }
L_08810B10:
    aot_gpr[31] = (0x08810B18u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0287_entry, 287u, 126u, 0x089237B8u>(ctx, &aot_mem) && ctx.pc == 0x08810B18u) goto L_08810B18;
    return;
L_08810B18:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_08810B1C;
L_08810B1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-7288), aot_gpr[17]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7268), 0u);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-16208));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08810B40u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08810B40u) goto L_08810B40;
    return;
L_08810B40:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08810B50u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7224));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08810B50u) goto L_08810B50;
    return;
L_08810B50:
    aot_gpr[31] = (0x08810B58u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 31u, 0x0891D244u>(ctx, &aot_mem) && ctx.pc == 0x08810B58u) goto L_08810B58;
    return;
L_08810B58:
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
L_08810B7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08810B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 60u, 0x0892C490u>(ctx, &aot_mem) && ctx.pc == 0x08810B90u) goto L_08810B90;
    return;
L_08810B90:
    aot_gpr[31] = (0x08810B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 82u, 0x08935848u>(ctx, &aot_mem) && ctx.pc == 0x08810B98u) goto L_08810B98;
    return;
L_08810B98:
    aot_gpr[31] = (0x08810BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 123u, 0x08934A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08810BA0u) goto L_08810BA0;
    return;
L_08810BA0:
    aot_gpr[31] = (0x08810BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 193u, 0x0891BF80u>(ctx, &aot_mem) && ctx.pc == 0x08810BA8u) goto L_08810BA8;
    return;
L_08810BA8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7336)));
    aot_gpr[31] = (0x08810BB8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 78u, 0x08944B90u>(ctx, &aot_mem) && ctx.pc == 0x08810BB8u) goto L_08810BB8;
    return;
L_08810BB8:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[31] = (0x08810BC4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7304)));
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 49u, 0x08930470u>(ctx, &aot_mem) && ctx.pc == 0x08810BC4u) goto L_08810BC4;
    return;
L_08810BC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7304)));
    aot_gpr[31] = (0x08810BD0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 185u, 0x0892EE94u>(ctx, &aot_mem) && ctx.pc == 0x08810BD0u) goto L_08810BD0;
    return;
L_08810BD0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7328)));
    aot_gpr[31] = (0x08810BE0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 150u, 0x08918ED8u>(ctx, &aot_mem) && ctx.pc == 0x08810BE0u) goto L_08810BE0;
    return;
L_08810BE0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7332)));
    aot_gpr[31] = (0x08810BF0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 50u, 0x08945AF0u>(ctx, &aot_mem) && ctx.pc == 0x08810BF0u) goto L_08810BF0;
    return;
L_08810BF0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7308)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08810C18u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08810C18u) goto L_08810C18;
    return;
L_08810C18:
    aot_gpr[31] = (0x08810C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 8u, 0x0893F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08810C20u) goto L_08810C20;
    return;
L_08810C20:
    aot_gpr[31] = (0x08810C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0309_entry, 309u, 102u, 0x08939E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08810C28u) goto L_08810C28;
    return;
L_08810C28:
    aot_gpr[31] = (0x08810C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 95u, 0x0891AE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08810C30u) goto L_08810C30;
    return;
L_08810C30:
    aot_gpr[31] = (0x08810C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 125u, 0x08930C40u>(ctx, &aot_mem) && ctx.pc == 0x08810C38u) goto L_08810C38;
    return;
L_08810C38:
    aot_gpr[31] = (0x08810C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 35u, 0x08930388u>(ctx, &aot_mem) && ctx.pc == 0x08810C40u) goto L_08810C40;
    return;
L_08810C40:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x08810C50u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 38u, 0x08927400u>(ctx, &aot_mem) && ctx.pc == 0x08810C50u) goto L_08810C50;
    return;
L_08810C50:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[31] = (0x08810C60u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 38u, 0x08927400u>(ctx, &aot_mem) && ctx.pc == 0x08810C60u) goto L_08810C60;
    return;
L_08810C60:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7320)));
    aot_gpr[31] = (0x08810C70u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 17u, 0x08927270u>(ctx, &aot_mem) && ctx.pc == 0x08810C70u) goto L_08810C70;
    return;
L_08810C70:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7288)));
    aot_gpr[31] = (0x08810C80u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0287_entry, 287u, 127u, 0x089237C4u>(ctx, &aot_mem) && ctx.pc == 0x08810C80u) goto L_08810C80;
    return;
L_08810C80:
    aot_gpr[31] = (0x08810C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 119u, 0x08933698u>(ctx, &aot_mem) && ctx.pc == 0x08810C88u) goto L_08810C88;
    return;
L_08810C88:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08810CA0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-16204));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x08810CA0u) goto L_08810CA0;
    return;
L_08810CA0:
    aot_gpr[31] = (0x08810CA8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 31u, 0x0891D244u>(ctx, &aot_mem) && ctx.pc == 0x08810CA8u) goto L_08810CA8;
    return;
L_08810CA8:
    aot_gpr[31] = (0x08810CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 104u, 0x0891D750u>(ctx, &aot_mem) && ctx.pc == 0x08810CB0u) goto L_08810CB0;
    return;
L_08810CB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810CC0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7316)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7516)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810CD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08810CF0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7048)));
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 194u, 0x0891BF8Cu>(ctx, &aot_mem) && ctx.pc == 0x08810CF0u) goto L_08810CF0;
    return;
L_08810CF0:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7300), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7296), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-7292), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7048)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7291), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7264), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x08810D34u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_08810CC0;
L_08810D34:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810D44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08810D6C;
      }
      goto L_08810D64;
    }
L_08810D64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08810D7C;
      }
      goto L_08810D6C;
    }
L_08810D6C:
    aot_gpr[31] = (0x08810D74u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08810D74u) goto L_08810D74;
    return;
L_08810D74:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[16] = (0u | 1u);
    goto L_08810D7C;
L_08810D7C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7290), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08810D94u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x08810D94u) goto L_08810D94;
    return;
L_08810D94:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08810DA0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7336)));
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 82u, 0x08944BD4u>(ctx, &aot_mem) && ctx.pc == 0x08810DA0u) goto L_08810DA0;
    return;
L_08810DA0:
    aot_gpr[31] = (0x08810DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 76u, 0x08894638u>(ctx, &aot_mem) && ctx.pc == 0x08810DA8u) goto L_08810DA8;
    return;
L_08810DA8:
    aot_gpr[31] = (0x08810DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 57u, 0x088886DCu>(ctx, &aot_mem) && ctx.pc == 0x08810DB0u) goto L_08810DB0;
    return;
L_08810DB0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08810DBCu);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7264)));
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 194u, 0x0891BF8Cu>(ctx, &aot_mem) && ctx.pc == 0x08810DBCu) goto L_08810DBC;
    return;
L_08810DBC:
    aot_gpr[31] = (0x08810DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 124u, 0x08934A44u>(ctx, &aot_mem) && ctx.pc == 0x08810DC4u) goto L_08810DC4;
    return;
L_08810DC4:
    aot_gpr[31] = (0x08810DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 65u, 0x088825E8u>(ctx, &aot_mem) && ctx.pc == 0x08810DCCu) goto L_08810DCC;
    return;
L_08810DCC:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7296)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08810E08;
      }
      goto L_08810DE4;
    }
L_08810DE4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7300)));
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7300), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08810E08;
      }
      goto L_08810E04;
    }
L_08810E04:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7300), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08810E08;
L_08810E08:
    aot_gpr[31] = (0x08810E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 13u, 0x0889A0E4u>(ctx, &aot_mem) && ctx.pc == 0x08810E10u) goto L_08810E10;
    return;
L_08810E10:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810E24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08810E50u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 36u, 0x08A4A22Cu>(ctx, &aot_mem) && ctx.pc == 0x08810E50u) goto L_08810E50;
    return;
L_08810E50:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08810F10;
      }
      goto L_08810E5C;
    }
L_08810E5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28792)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_08810E9C;
      }
      goto L_08810E90;
    }
L_08810E90:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    goto L_08810E9C;
L_08810E9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08810EB8;
      }
      goto L_08810EAC;
    }
L_08810EAC:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_08810EB8;
L_08810EB8:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[31] = (0x08810F00u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[8]));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x08810F00u) goto L_08810F00;
    return;
L_08810F00:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08810F10u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 51u, 0x0892F518u>(ctx, &aot_mem) && ctx.pc == 0x08810F10u) goto L_08810F10;
    return;
L_08810F10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810F24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08810F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 33u, 0x08933178u>(ctx, &aot_mem) && ctx.pc == 0x08810F40u) goto L_08810F40;
    return;
L_08810F40:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7296)));
    aot_fpr[16] = __builtin_bit_cast(float, 0u);
    aot_gpr[17] = (2218u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[16] = (2218u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 7u, 0x08811068u>(ctx, &aot_mem); return;
      }
      goto L_08810F60;
    }
L_08810F60:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-7292)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7300)));
    aot_gpr[4] = (17279u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-7291)));
      if (branch_taken) {
          goto L_08810F94;
      }
      goto L_08810F84;
    }
L_08810F84:
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] / aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08810FA8;
      }
      goto L_08810F94;
    }
L_08810F94:
    aot_fpr[12] = aot_fpr[15] / aot_fpr[12];
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_08810FA8;
L_08810FA8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08810FF4;
      }
      goto L_08810FB0;
    }
L_08810FB0:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08810FCC;
      }
      goto L_08810FC0;
    }
L_08810FC0:
    aot_gpr[4] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22228), 0u);
      if (branch_taken) {
          goto L_08810FF4;
      }
      goto L_08810FCC;
    }
L_08810FCC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08810FF4;
      }
      goto L_08810FD4;
    }
L_08810FD4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(22228)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22228), aot_gpr[6]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08810FF4;
      }
      goto L_08810FF0;
    }
L_08810FF0:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-7291), static_cast<std::uint8_t>(0u));
    goto L_08810FF4;
L_08810FF4:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 7u, 0x08811068u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 1u, 0x08811004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0012(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0012_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_12(Runtime &runtime) {
    runtime.register_generated_unit(12u, 0x08810000u, 4096u, &recomp_unit_0012, &recomp_unit_0012_entry);
    runtime.register_function(0x08810000u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810010u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881003Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881005Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881006Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810074u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810080u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810094u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088100B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088100BCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088100C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088100C8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088100E0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810104u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881011Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810128u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810130u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810138u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810140u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881015Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810164u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881016Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810188u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088101D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088101DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088101ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088101F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810200u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881021Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881022Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810234u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881023Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810240u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810244u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810288u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088102A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088102ACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088102CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088102D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088102E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088102F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881031Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810324u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881034Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810358u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810368u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810370u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881038Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088103A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088103B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088103C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088103CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088103DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088103E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088103F8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810404u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810424u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881042Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810434u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881043Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810444u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881044Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810454u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881045Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810464u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810474u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810484u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088104A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088104B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810518u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810528u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810538u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881053Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810558u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810574u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810590u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810598u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088105A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088105B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088105D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088105E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088105FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810604u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881060Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810614u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881061Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810624u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810644u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810688u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810694u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088106A4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088106BCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088106DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088106E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088106ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088106F0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088106FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810704u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810708u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881071Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881073Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810744u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881074Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810750u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881075Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810768u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881076Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810780u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088107A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088107A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088107B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088107B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088107C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088107CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088107D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088107F0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810804u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810810u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810820u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810830u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810858u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810864u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810880u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810884u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881089Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088108C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088108D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088108D8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088108DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088108ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088108F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881091Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810928u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810930u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810934u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810940u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810974u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810994u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0881099Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088109A4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088109A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088109B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088109C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088109C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088109D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810A08u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810A14u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810A1Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810A20u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810A38u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810A4Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810A54u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810A64u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810A6Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810A78u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810A88u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810A90u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810A9Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810ABCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810AC8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810ADCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810B04u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810B10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810B18u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810B1Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810B40u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810B50u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810B58u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810B7Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810B90u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810B98u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810BA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810BA8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810BB8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810BC4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810BD0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810BE0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810BF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810C18u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810C20u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810C28u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810C30u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810C38u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810C40u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810C50u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810C60u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810C70u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810C80u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810C88u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810CA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810CA8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810CB0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810CC0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810CD8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810CF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810D34u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810D44u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810D64u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810D6Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810D74u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810D7Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810D94u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810DA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810DA8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810DB0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810DBCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810DC4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810DCCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810DE4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810E04u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810E08u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810E10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810E24u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810E50u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810E5Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810E90u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810E9Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810EACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810EB8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810F00u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810F10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810F24u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810F40u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810F60u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810F84u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810F94u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810FA8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810FB0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810FC0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810FCCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810FD4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810FF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08810FF4u, &recomp_unit_0012, "recomp_unit_0012");
}
} // namespace psprecomp
