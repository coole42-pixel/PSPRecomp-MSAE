#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0502[1022] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 20, 0, 21, 0, 22, 23, 0, 24, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 41, 42, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 0, 57, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0,
    0, 69, 70, 0, 0, 71, 0, 72, 0, 73, 0, 0, 74, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    78, 0, 79, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0,
    90, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0,
    107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0,
    122, 123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 129,
    130, 0, 131, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145,
    0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 149, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0,
    0, 154, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 159, 0, 160, 0, 0, 161,
    0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 167, 0, 168, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187,
    0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0,
    204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0,
    0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223,
};
void recomp_unit_0502_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089FA000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0502[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089FA000;
    case 2u: goto L_089FA010;
    case 3u: goto L_089FA028;
    case 4u: goto L_089FA050;
    case 5u: goto L_089FA058;
    case 6u: goto L_089FA064;
    case 7u: goto L_089FA070;
    case 8u: goto L_089FA07C;
    case 9u: goto L_089FA0A0;
    case 10u: goto L_089FA0B0;
    case 11u: goto L_089FA0B8;
    case 12u: goto L_089FA0D0;
    case 13u: goto L_089FA0D8;
    case 14u: goto L_089FA0F0;
    case 15u: goto L_089FA104;
    case 16u: goto L_089FA11C;
    case 17u: goto L_089FA124;
    case 18u: goto L_089FA13C;
    case 19u: goto L_089FA144;
    case 20u: goto L_089FA148;
    case 21u: goto L_089FA150;
    case 22u: goto L_089FA158;
    case 23u: goto L_089FA15C;
    case 24u: goto L_089FA164;
    case 25u: goto L_089FA178;
    case 26u: goto L_089FA1A0;
    case 27u: goto L_089FA1C8;
    case 28u: goto L_089FA1E0;
    case 29u: goto L_089FA1F8;
    case 30u: goto L_089FA208;
    case 31u: goto L_089FA228;
    case 32u: goto L_089FA23C;
    case 33u: goto L_089FA264;
    case 34u: goto L_089FA274;
    case 35u: goto L_089FA288;
    case 36u: goto L_089FA2A8;
    case 37u: goto L_089FA2B4;
    case 38u: goto L_089FA2D4;
    case 39u: goto L_089FA2DC;
    case 40u: goto L_089FA2E4;
    case 41u: goto L_089FA2F0;
    case 42u: goto L_089FA2F4;
    case 43u: goto L_089FA308;
    case 44u: goto L_089FA320;
    case 45u: goto L_089FA33C;
    case 46u: goto L_089FA358;
    case 47u: goto L_089FA360;
    case 48u: goto L_089FA36C;
    case 49u: goto L_089FA374;
    case 50u: goto L_089FA388;
    case 51u: goto L_089FA39C;
    case 52u: goto L_089FA3A4;
    case 53u: goto L_089FA3C0;
    case 54u: goto L_089FA3D0;
    case 55u: goto L_089FA3E4;
    case 56u: goto L_089FA3EC;
    case 57u: goto L_089FA3F8;
    case 58u: goto L_089FA408;
    case 59u: goto L_089FA424;
    case 60u: goto L_089FA438;
    case 61u: goto L_089FA464;
    case 62u: goto L_089FA488;
    case 63u: goto L_089FA4A0;
    case 64u: goto L_089FA4BC;
    case 65u: goto L_089FA4C4;
    case 66u: goto L_089FA4E8;
    case 67u: goto L_089FA4F0;
    case 68u: goto L_089FA4F8;
    case 69u: goto L_089FA504;
    case 70u: goto L_089FA508;
    case 71u: goto L_089FA514;
    case 72u: goto L_089FA51C;
    case 73u: goto L_089FA524;
    case 74u: goto L_089FA530;
    case 75u: goto L_089FA534;
    case 76u: goto L_089FA544;
    case 77u: goto L_089FA574;
    case 78u: goto L_089FA580;
    case 79u: goto L_089FA588;
    case 80u: goto L_089FA594;
    case 81u: goto L_089FA59C;
    case 82u: goto L_089FA5A4;
    case 83u: goto L_089FA5AC;
    case 84u: goto L_089FA5D0;
    case 85u: goto L_089FA5D8;
    case 86u: goto L_089FA5E0;
    case 87u: goto L_089FA5E8;
    case 88u: goto L_089FA5F0;
    case 89u: goto L_089FA5F8;
    case 90u: goto L_089FA600;
    case 91u: goto L_089FA608;
    case 92u: goto L_089FA614;
    case 93u: goto L_089FA628;
    case 94u: goto L_089FA644;
    case 95u: goto L_089FA64C;
    case 96u: goto L_089FA66C;
    case 97u: goto L_089FA688;
    case 98u: goto L_089FA694;
    case 99u: goto L_089FA6A0;
    case 100u: goto L_089FA6A8;
    case 101u: goto L_089FA6C0;
    case 102u: goto L_089FA6C8;
    case 103u: goto L_089FA6D0;
    case 104u: goto L_089FA6D8;
    case 105u: goto L_089FA6E4;
    case 106u: goto L_089FA6F4;
    case 107u: goto L_089FA700;
    case 108u: goto L_089FA718;
    case 109u: goto L_089FA73C;
    case 110u: goto L_089FA748;
    case 111u: goto L_089FA750;
    case 112u: goto L_089FA758;
    case 113u: goto L_089FA778;
    case 114u: goto L_089FA79C;
    case 115u: goto L_089FA7B0;
    case 116u: goto L_089FA7B8;
    case 117u: goto L_089FA7C4;
    case 118u: goto L_089FA7D0;
    case 119u: goto L_089FA7DC;
    case 120u: goto L_089FA7F0;
    case 121u: goto L_089FA7F8;
    case 122u: goto L_089FA800;
    case 123u: goto L_089FA804;
    case 124u: goto L_089FA810;
    case 125u: goto L_089FA818;
    case 126u: goto L_089FA834;
    case 127u: goto L_089FA85C;
    case 128u: goto L_089FA864;
    case 129u: goto L_089FA87C;
    case 130u: goto L_089FA880;
    case 131u: goto L_089FA888;
    case 132u: goto L_089FA894;
    case 133u: goto L_089FA89C;
    case 134u: goto L_089FA8A4;
    case 135u: goto L_089FA8AC;
    case 136u: goto L_089FA8B8;
    case 137u: goto L_089FA8C4;
    case 138u: goto L_089FA8D8;
    case 139u: goto L_089FA8FC;
    case 140u: goto L_089FA904;
    case 141u: goto L_089FA948;
    case 142u: goto L_089FA954;
    case 143u: goto L_089FA95C;
    case 144u: goto L_089FA970;
    case 145u: goto L_089FA97C;
    case 146u: goto L_089FA988;
    case 147u: goto L_089FA990;
    case 148u: goto L_089FA9BC;
    case 149u: goto L_089FA9C0;
    case 150u: goto L_089FA9C8;
    case 151u: goto L_089FA9DC;
    case 152u: goto L_089FA9E8;
    case 153u: goto L_089FA9F4;
    case 154u: goto L_089FAA04;
    case 155u: goto L_089FAA08;
    case 156u: goto L_089FAA18;
    case 157u: goto L_089FAA3C;
    case 158u: goto L_089FAA64;
    case 159u: goto L_089FAA68;
    case 160u: goto L_089FAA70;
    case 161u: goto L_089FAA7C;
    case 162u: goto L_089FAA88;
    case 163u: goto L_089FAA94;
    case 164u: goto L_089FAAA8;
    case 165u: goto L_089FAAC4;
    case 166u: goto L_089FAB00;
    case 167u: goto L_089FAB0C;
    case 168u: goto L_089FAB14;
    case 169u: goto L_089FAB1C;
    case 170u: goto L_089FAB28;
    case 171u: goto L_089FAB34;
    case 172u: goto L_089FAB40;
    case 173u: goto L_089FAB74;
    case 174u: goto L_089FABB0;
    case 175u: goto L_089FABBC;
    case 176u: goto L_089FABD0;
    case 177u: goto L_089FABE4;
    case 178u: goto L_089FAC10;
    case 179u: goto L_089FAC34;
    case 180u: goto L_089FAC5C;
    case 181u: goto L_089FAC6C;
    case 182u: goto L_089FAC78;
    case 183u: goto L_089FAC8C;
    case 184u: goto L_089FACA0;
    case 185u: goto L_089FACE4;
    case 186u: goto L_089FACEC;
    case 187u: goto L_089FACFC;
    case 188u: goto L_089FAD04;
    case 189u: goto L_089FAD0C;
    case 190u: goto L_089FAD2C;
    case 191u: goto L_089FAD44;
    case 192u: goto L_089FAD60;
    case 193u: goto L_089FAD80;
    case 194u: goto L_089FAD90;
    case 195u: goto L_089FADC0;
    case 196u: goto L_089FADF0;
    case 197u: goto L_089FAE08;
    case 198u: goto L_089FAE18;
    case 199u: goto L_089FAE20;
    case 200u: goto L_089FAE30;
    case 201u: goto L_089FAE4C;
    case 202u: goto L_089FAE58;
    case 203u: goto L_089FAE78;
    case 204u: goto L_089FAE80;
    case 205u: goto L_089FAE9C;
    case 206u: goto L_089FAEA8;
    case 207u: goto L_089FAEB8;
    case 208u: goto L_089FAEC0;
    case 209u: goto L_089FAEC8;
    case 210u: goto L_089FAED0;
    case 211u: goto L_089FAEE4;
    case 212u: goto L_089FAEF4;
    case 213u: goto L_089FAF04;
    case 214u: goto L_089FAF14;
    case 215u: goto L_089FAF24;
    case 216u: goto L_089FAF2C;
    case 217u: goto L_089FAF34;
    case 218u: goto L_089FAF48;
    case 219u: goto L_089FAF50;
    case 220u: goto L_089FAF58;
    case 221u: goto L_089FAFE4;
    case 222u: goto L_089FAFEC;
    case 223u: goto L_089FAFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089FA000:
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-8632));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-8624));
      if (branch_taken) {
          goto L_089FA050;
      }
      goto L_089FA010;
    }
L_089FA010:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089FA028u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089FA028u) goto L_089FA028;
    return;
L_089FA028:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA050:
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089FA15C;
    }
    goto L_089FA058;
L_089FA058:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089FA158;
      }
      goto L_089FA064;
    }
L_089FA064:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FA070u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 201u, 0x089F7BF4u>(ctx, &aot_mem) && ctx.pc == 0x089FA070u) goto L_089FA070;
    return;
L_089FA070:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (aot_gpr[18] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089FA15C;
    }
    goto L_089FA07C;
L_089FA07C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089FA0A0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FA0A0u) goto L_089FA0A0;
    return;
L_089FA0A0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089FA0B0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 231u, 0x089F4E6Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA0B0u) goto L_089FA0B0;
    return;
L_089FA0B0:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089FA148;
      }
      goto L_089FA0B8;
    }
L_089FA0B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FA0D0u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FA0D0u) goto L_089FA0D0;
    return;
L_089FA0D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089FA148;
      }
      goto L_089FA0D8;
    }
L_089FA0D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FA0F0u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FA0F0u) goto L_089FA0F0;
    return;
L_089FA0F0:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089FA144;
      }
      goto L_089FA104;
    }
L_089FA104:
    aot_gpr[19] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x089FA11Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 142u, 0x089F7900u>(ctx, &aot_mem) && ctx.pc == 0x089FA11Cu) goto L_089FA11C;
    return;
L_089FA11C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA144;
      }
      goto L_089FA124;
    }
L_089FA124:
    aot_gpr[19] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x089FA13Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 142u, 0x089F7900u>(ctx, &aot_mem) && ctx.pc == 0x089FA13Cu) goto L_089FA13C;
    return;
L_089FA13C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[19] = (0u | 1u);
        goto L_089FA144;
    }
    goto L_089FA144;
L_089FA144:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089FA148;
L_089FA148:
    aot_gpr[31] = (0x089FA150u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 29u, 0x089F7298u>(ctx, &aot_mem) && ctx.pc == 0x089FA150u) goto L_089FA150;
    return;
L_089FA150:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089FA050;
      }
      goto L_089FA158;
    }
L_089FA158:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089FA15C;
L_089FA15C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089FA1A0;
      }
      goto L_089FA164;
    }
L_089FA164:
    aot_gpr[5] = (0u | 13u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089FA178u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089FA178u) goto L_089FA178;
    return;
L_089FA178:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA1A0:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA1C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-18664)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (0u | 64u);
      if (branch_taken) {
          goto L_089FA1F8;
      }
      goto L_089FA1E0;
    }
L_089FA1E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u | 5120u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-18664));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[31] = (0x089FA1F8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_089FADF0;
L_089FA1F8:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA208:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-18664)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FA228u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FA228u) goto L_089FA228;
    return;
L_089FA228:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-18664), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA23C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18664)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FA264u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FA264u) goto L_089FA264;
    return;
L_089FA264:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18664)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FA274u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FA274u) goto L_089FA274;
    return;
L_089FA274:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA288:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-18664)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FA2A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FA2A8u) goto L_089FA2A8;
    return;
L_089FA2A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA2B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FA2F4;
      }
      goto L_089FA2D4;
    }
L_089FA2D4:
    aot_gpr[31] = (0x089FA2DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FA2DCu) goto L_089FA2DC;
    return;
L_089FA2DC:
    aot_gpr[31] = (0x089FA2E4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA2E4u) goto L_089FA2E4;
    return;
L_089FA2E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089FA2F0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FA2F0u) goto L_089FA2F0;
    return;
L_089FA2F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_089FA2F4;
L_089FA2F4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 94u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089FA308u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8560));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x089FA308u) goto L_089FA308;
    return;
L_089FA308:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA320:
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA33C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FA374;
      }
      goto L_089FA358;
    }
L_089FA358:
    aot_gpr[31] = (0x089FA360u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089FA4C4;
L_089FA360:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA374;
      }
      goto L_089FA36C;
    }
L_089FA36C:
    aot_gpr[31] = (0x089FA374u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089FA3D0;
L_089FA374:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA388:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FA39Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FA39Cu) goto L_089FA39C;
    return;
L_089FA39C:
    aot_gpr[31] = (0x089FA3A4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA3A4u) goto L_089FA3A4;
    return;
L_089FA3A4:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 30u);
    aot_gpr[31] = (0x089FA3C0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8560));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089FA3C0u) goto L_089FA3C0;
    return;
L_089FA3C0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA3D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FA3E4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FA3E4u) goto L_089FA3E4;
    return;
L_089FA3E4:
    aot_gpr[31] = (0x089FA3ECu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA3ECu) goto L_089FA3EC;
    return;
L_089FA3EC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FA3F8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FA3F8u) goto L_089FA3F8;
    return;
L_089FA3F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA408:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089FA424u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    goto L_089FA4C4;
L_089FA424:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 42u);
    aot_gpr[31] = (0x089FA438u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8560));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x089FA438u) goto L_089FA438;
    return;
L_089FA438:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_089FA464:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089FA488u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    goto L_089FA4C4;
L_089FA488:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[5] = (0u | 54u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089FA4A0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8560));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x089FA4A0u) goto L_089FA4A0;
    return;
L_089FA4A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
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
L_089FA4BC:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA4C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FA508;
      }
      goto L_089FA4E8;
    }
L_089FA4E8:
    aot_gpr[31] = (0x089FA4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FA4F0u) goto L_089FA4F0;
    return;
L_089FA4F0:
    aot_gpr[31] = (0x089FA4F8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA4F8u) goto L_089FA4F8;
    return;
L_089FA4F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FA504u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FA504u) goto L_089FA504;
    return;
L_089FA504:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_089FA508;
L_089FA508:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA534;
      }
      goto L_089FA514;
    }
L_089FA514:
    aot_gpr[31] = (0x089FA51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FA51Cu) goto L_089FA51C;
    return;
L_089FA51C:
    aot_gpr[31] = (0x089FA524u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA524u) goto L_089FA524;
    return;
L_089FA524:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089FA530u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FA530u) goto L_089FA530;
    return;
L_089FA530:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_089FA534;
L_089FA534:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA544:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089FA5AC;
      }
      goto L_089FA574;
    }
L_089FA574:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA5AC;
      }
      goto L_089FA580;
    }
L_089FA580:
    aot_gpr[31] = (0x089FA588u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_089FA66C;
L_089FA588:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089FA5AC;
      }
      goto L_089FA594;
    }
L_089FA594:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089FA5AC;
      }
      goto L_089FA59C;
    }
L_089FA59C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (0u | 38u);
      if (branch_taken) {
          goto L_089FA5D0;
      }
      goto L_089FA5A4;
    }
L_089FA5A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089FA5D8;
      }
      goto L_089FA5AC;
    }
L_089FA5AC:
    aot_gpr[2] = (0u | 0u);
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
L_089FA5D0:
    aot_gpr[16] = (0u | 63u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089FA5D8;
L_089FA5D8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA5F0;
      }
      goto L_089FA5E0;
    }
L_089FA5E0:
    aot_gpr[31] = (0x089FA5E8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FA5E8u) goto L_089FA5E8;
    return;
L_089FA5E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA644;
      }
      goto L_089FA5F0;
    }
L_089FA5F0:
    aot_gpr[31] = (0x089FA5F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FA5F8u) goto L_089FA5F8;
    return;
L_089FA5F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA644;
      }
      goto L_089FA600;
    }
L_089FA600:
    aot_gpr[31] = (0x089FA608u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FA608u) goto L_089FA608;
    return;
L_089FA608:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089FA614u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FA614u) goto L_089FA614;
    return;
L_089FA614:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA644;
      }
      goto L_089FA628;
    }
L_089FA628:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089FA644u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8524));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089FA644u) goto L_089FA644;
    return;
L_089FA644:
    aot_gpr[31] = (0x089FA64Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FA64Cu) goto L_089FA64C;
    return;
L_089FA64C:
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
L_089FA66C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FA6A8;
      }
      goto L_089FA688;
    }
L_089FA688:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA6A8;
      }
      goto L_089FA694;
    }
L_089FA694:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089FA6D0;
      }
      goto L_089FA6A0;
    }
L_089FA6A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA6C0;
      }
      goto L_089FA6A8;
    }
L_089FA6A8:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA6C0:
    aot_gpr[31] = (0x089FA6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FA6C8u) goto L_089FA6C8;
    return;
L_089FA6C8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA700;
      }
      goto L_089FA6D0;
    }
L_089FA6D0:
    aot_gpr[31] = (0x089FA6D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FA6D8u) goto L_089FA6D8;
    return;
L_089FA6D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FA6E4u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FA6E4u) goto L_089FA6E4;
    return;
L_089FA6E4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FA6F4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8516));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FA6F4u) goto L_089FA6F4;
    return;
L_089FA6F4:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089FA700;
L_089FA700:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA718:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089FA73Cu);
    aot_gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 136u, 0x089F3978u>(ctx, &aot_mem) && ctx.pc == 0x089FA73Cu) goto L_089FA73C;
    return;
L_089FA73C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (aot_gpr[17] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
        goto L_089FA758;
    }
    goto L_089FA748;
L_089FA748:
    aot_gpr[31] = (0x089FA750u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 130u, 0x089F391Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA750u) goto L_089FA750;
    return;
L_089FA750:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    goto L_089FA758;
L_089FA758:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_089FA778:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FA818;
      }
      goto L_089FA79C;
    }
L_089FA79C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089FA7F0;
      }
      goto L_089FA7B0;
    }
L_089FA7B0:
    aot_gpr[31] = (0x089FA7B8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x089FA7B8u) goto L_089FA7B8;
    return;
L_089FA7B8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FA7C4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_089FA4C4;
L_089FA7C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FA7D0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 159u, 0x089F3AE4u>(ctx, &aot_mem) && ctx.pc == 0x089FA7D0u) goto L_089FA7D0;
    return;
L_089FA7D0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089FA7DCu);
    aot_gpr[5] = (0u | 3u);
    goto L_089FA33C;
L_089FA7DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089FA7B0;
      }
      goto L_089FA7F0;
    }
L_089FA7F0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089FA804;
      }
      goto L_089FA7F8;
    }
L_089FA7F8:
    aot_gpr[31] = (0x089FA800u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 131u, 0x089F392Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA800u) goto L_089FA800;
    return;
L_089FA800:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_089FA804;
L_089FA804:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA818;
      }
      goto L_089FA810;
    }
L_089FA810:
    aot_gpr[31] = (0x089FA818u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089FA818u) goto L_089FA818;
    return;
L_089FA818:
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
L_089FA834:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FA8D8;
      }
      goto L_089FA85C;
    }
L_089FA85C:
    aot_gpr[31] = (0x089FA864u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089FAA3C;
L_089FA864:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA8D8;
      }
      goto L_089FA87C;
    }
L_089FA87C:
    aot_gpr[19] = (0u | 0u);
    goto L_089FA880;
L_089FA880:
    aot_gpr[31] = (0x089FA888u);
    aot_gpr[4] = (0u | 16u);
    goto L_089FA388;
L_089FA888:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (aot_gpr[18] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089FA8A4;
    }
    goto L_089FA894;
L_089FA894:
    aot_gpr[31] = (0x089FA89Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_089FA320;
L_089FA89C:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089FA8A4;
L_089FA8A4:
    aot_gpr[31] = (0x089FA8ACu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x089FA8ACu) goto L_089FA8AC;
    return;
L_089FA8AC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089FA8B8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_089FA408;
L_089FA8B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FA8C4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 144u, 0x089F39F8u>(ctx, &aot_mem) && ctx.pc == 0x089FA8C4u) goto L_089FA8C4;
    return;
L_089FA8C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089FA880;
      }
      goto L_089FA8D8;
    }
L_089FA8D8:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_089FA8FC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA904:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[19] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089FA970;
      }
      goto L_089FA948;
    }
L_089FA948:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FA954u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x089FA954u) goto L_089FA954;
    return;
L_089FA954:
    aot_gpr[31] = (0x089FA95Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_089FA66C;
L_089FA95C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089FA948;
      }
      goto L_089FA970;
    }
L_089FA970:
    aot_gpr[5] = (aot_gpr[20] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_089FA990;
      }
      goto L_089FA97C;
    }
L_089FA97C:
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089FA9BC;
      }
      goto L_089FA988;
    }
L_089FA988:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089FAA08;
      }
      goto L_089FA990;
    }
L_089FA990:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (0u | 0u);
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
L_089FA9BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089FA9C0;
L_089FA9C0:
    aot_gpr[31] = (0x089FA9C8u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x089FA9C8u) goto L_089FA9C8;
    return;
L_089FA9C8:
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[20]);
    aot_gpr[6] = (aot_gpr[18] - aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FA9DCu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_089FA544;
L_089FA9DC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089FA9F4;
    }
    goto L_089FA9E8;
L_089FA9E8:
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089FA9F4;
L_089FA9F4:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089FA9C0;
    }
    goto L_089FAA04;
L_089FAA04:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_089FAA08;
L_089FAA08:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x089FAA18u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FAA18u) goto L_089FAA18;
    return;
L_089FAA18:
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
L_089FAA3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FAAA8;
      }
      goto L_089FAA64;
    }
L_089FAA64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089FAA68;
L_089FAA68:
    aot_gpr[31] = (0x089FAA70u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x089FAA70u) goto L_089FAA70;
    return;
L_089FAA70:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FAA7Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_089FA4C4;
L_089FAA7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FAA88u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 159u, 0x089F3AE4u>(ctx, &aot_mem) && ctx.pc == 0x089FAA88u) goto L_089FAA88;
    return;
L_089FAA88:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089FAA94u);
    aot_gpr[5] = (0u | 3u);
    goto L_089FA33C;
L_089FAA94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089FAA68;
    }
    goto L_089FAAA8;
L_089FAAA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
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
L_089FAAC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[21] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x089FAB00u);
    aot_gpr[4] = (0u | 16u);
    goto L_089FA388;
L_089FAB00:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_089FAB1C;
      }
      goto L_089FAB0C;
    }
L_089FAB0C:
    aot_gpr[31] = (0x089FAB14u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_089FA320;
L_089FAB14:
    aot_gpr[21] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_089FAB1C;
L_089FAB1C:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089FAB28u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_089FA464;
L_089FAB28:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089FAB34u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_089FA4BC;
L_089FAB34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FAB40u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 144u, 0x089F39F8u>(ctx, &aot_mem) && ctx.pc == 0x089FAB40u) goto L_089FAB40;
    return;
L_089FAB40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[4]);
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
L_089FAB74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[9] ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_089FAC10;
      }
      goto L_089FABB0;
    }
L_089FABB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FABBCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x089FABBCu) goto L_089FABBC;
    return;
L_089FABBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x089FABD0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x089FABD0u) goto L_089FABD0;
    return;
L_089FABD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x089FABE4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x089FABE4u) goto L_089FABE4;
    return;
L_089FABE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
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
L_089FAC10:
    aot_gpr[2] = (0u | 0u);
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
L_089FAC34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089FAC8C;
      }
      goto L_089FAC5C;
    }
L_089FAC5C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x089FAC6Cu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x089FAC6Cu) goto L_089FAC6C;
    return;
L_089FAC6C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FAC78u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_089FA2B4;
L_089FAC78:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FAC8C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FACA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[8] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089FADC0;
      }
      goto L_089FACE4;
    }
L_089FACE4:
    aot_gpr[31] = (0x089FACECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089FAA3C;
L_089FACEC:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u | 3u);
      if (branch_taken) {
          goto L_089FAD90;
      }
      goto L_089FACFC;
    }
L_089FACFC:
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089FAD04;
L_089FAD04:
    aot_gpr[31] = (0x089FAD0Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FAD0Cu) goto L_089FAD0C;
    return;
L_089FAD0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
      if (branch_taken) {
          goto L_089FADC0;
      }
      goto L_089FAD2C;
    }
L_089FAD2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089FAD44u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089FAD44u) goto L_089FAD44;
    return;
L_089FAD44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x089FAD60u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089FAD60u) goto L_089FAD60;
    return;
L_089FAD60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089FAD80u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_089FAAC4;
L_089FAD80:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[19] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089FAD04;
    }
    goto L_089FAD90;
L_089FAD90:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FADC0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FADF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089FAE18;
      }
      goto L_089FAE08;
    }
L_089FAE08:
    aot_gpr[2] = (0u | 2u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FAE18:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FAE30;
      }
      goto L_089FAE20;
    }
L_089FAE20:
    aot_gpr[2] = (0u | 2u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FAE30:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089FAE4Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_089FAE58;
L_089FAE4C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FAE58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089FAE78u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FAE78u) goto L_089FAE78;
    return;
L_089FAE78:
    aot_gpr[31] = (0x089FAE80u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FAE80u) goto L_089FAE80;
    return;
L_089FAE80:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 112u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[7] = (0u | 32u);
    aot_gpr[31] = (0x089FAE9Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8512));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089FAE9Cu) goto L_089FAE9C;
    return;
L_089FAE9C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089FAEC0;
      }
      goto L_089FAEA8;
    }
L_089FAEA8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089FAEB8u);
    aot_gpr[6] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FAEB8u) goto L_089FAEB8;
    return;
L_089FAEB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089FAEC0;
      }
      goto L_089FAEC0;
    }
L_089FAEC0:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (0u | 12u);
        goto L_089FAED0;
    }
    goto L_089FAEC8;
L_089FAEC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FAFE4;
      }
      goto L_089FAED0;
    }
L_089FAED0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[4]);
      if (branch_taken) {
          goto L_089FAEF4;
      }
      goto L_089FAEE4;
    }
L_089FAEE4:
    aot_gpr[6] = (0u | 4u);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    goto L_089FAEF4;
L_089FAEF4:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
      if (branch_taken) {
          goto L_089FAF14;
      }
      goto L_089FAF04;
    }
L_089FAF04:
    aot_gpr[6] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    goto L_089FAF14;
L_089FAF14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089FAF24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 66u, 0x089FB498u>(ctx, &aot_mem) && ctx.pc == 0x089FAF24u) goto L_089FAF24;
    return;
L_089FAF24:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[2]);
      if (branch_taken) {
          goto L_089FAF34;
      }
      goto L_089FAF2C;
    }
L_089FAF2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 100u);
      if (branch_taken) {
          goto L_089FAFE4;
      }
      goto L_089FAF34;
    }
L_089FAF34:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089FAF48u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 66u, 0x089FB498u>(ctx, &aot_mem) && ctx.pc == 0x089FAF48u) goto L_089FAF48;
    return;
L_089FAF48:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[2]);
      if (branch_taken) {
          goto L_089FAF58;
      }
      goto L_089FAF50;
    }
L_089FAF50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 100u);
      if (branch_taken) {
          goto L_089FAFE4;
      }
      goto L_089FAF58;
    }
L_089FAF58:
    aot_gpr[4] = (2208u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20464));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2208u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20280));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2208u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18624));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2208u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20028));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (2208u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20168));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (2208u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-19804));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2208u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-19756));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (2208u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-19536));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (2208u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-19512));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (0u | 0u);
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
L_089FAFE4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAFF4;
      }
      goto L_089FAFEC;
    }
L_089FAFEC:
    aot_gpr[31] = (0x089FAFF4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 2u, 0x089FB010u>(ctx, &aot_mem) && ctx.pc == 0x089FAFF4u) goto L_089FAFF4;
    return;
L_089FAFF4:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x089FB000u; return;
}

void recomp_unit_0502(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0502_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_502(Runtime &runtime) {
    runtime.register_generated_unit(502u, 0x089FA000u, 4096u, &recomp_unit_0502, &recomp_unit_0502_entry);
    runtime.register_function(0x089FA000u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA010u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA028u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA050u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA058u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA064u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA070u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA07Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA0A0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA0B0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA0B8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA0D0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA0D8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA0F0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA104u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA11Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA124u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA13Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA144u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA148u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA150u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA158u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA15Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA164u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA178u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA1A0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA1C8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA1E0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA1F8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA208u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA228u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA23Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA264u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA274u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA288u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA2A8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA2B4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA2D4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA2DCu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA2E4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA2F0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA2F4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA308u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA320u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA33Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA358u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA360u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA36Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA374u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA388u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA39Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA3A4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA3C0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA3D0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA3E4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA3ECu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA3F8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA408u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA424u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA438u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA464u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA488u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA4A0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA4BCu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA4C4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA4E8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA4F0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA4F8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA504u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA508u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA514u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA51Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA524u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA530u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA534u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA544u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA574u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA580u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA588u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA594u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA59Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA5A4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA5ACu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA5D0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA5D8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA5E0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA5E8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA5F0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA5F8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA600u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA608u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA614u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA628u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA644u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA64Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA66Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA688u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA694u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA6A0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA6A8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA6C0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA6C8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA6D0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA6D8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA6E4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA6F4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA700u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA718u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA73Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA748u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA750u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA758u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA778u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA79Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA7B0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA7B8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA7C4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA7D0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA7DCu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA7F0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA7F8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA800u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA804u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA810u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA818u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA834u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA85Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA864u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA87Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA880u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA888u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA894u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA89Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA8A4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA8ACu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA8B8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA8C4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA8D8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA8FCu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA904u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA948u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA954u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA95Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA970u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA97Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA988u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA990u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA9BCu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA9C0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA9C8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA9DCu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA9E8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FA9F4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAA04u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAA08u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAA18u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAA3Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAA64u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAA68u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAA70u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAA7Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAA88u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAA94u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAAA8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAAC4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAB00u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAB0Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAB14u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAB1Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAB28u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAB34u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAB40u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAB74u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FABB0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FABBCu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FABD0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FABE4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAC10u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAC34u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAC5Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAC6Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAC78u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAC8Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FACA0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FACE4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FACECu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FACFCu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAD04u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAD0Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAD2Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAD44u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAD60u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAD80u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAD90u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FADC0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FADF0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAE08u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAE18u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAE20u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAE30u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAE4Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAE58u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAE78u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAE80u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAE9Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAEA8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAEB8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAEC0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAEC8u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAED0u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAEE4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAEF4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAF04u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAF14u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAF24u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAF2Cu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAF34u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAF48u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAF50u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAF58u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAFE4u, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAFECu, &recomp_unit_0502, "recomp_unit_0502");
    runtime.register_function(0x089FAFF4u, &recomp_unit_0502, "recomp_unit_0502");
}
} // namespace psprecomp
