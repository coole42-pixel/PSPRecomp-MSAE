#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0396[1024] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0,
    21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31,
    0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 46, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 59, 0,
    0, 0, 0, 0, 0, 60, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 88, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 92, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 96, 0, 0, 97, 0,
    98, 0, 99, 0, 100, 0, 101, 0, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 108, 0, 0, 0,
    0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 115, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119,
    0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 127, 0,
    0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 0, 136, 0, 0, 137,
    0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0,
    146, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0,
    156, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0,
    0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 167, 168, 169, 0, 170, 0, 0, 171, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0,
    0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194,
    0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 202, 203, 0, 0, 204, 0, 0,
    0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 0,
    0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 220, 221, 0, 0, 222, 0, 0, 223, 0, 224, 0, 225,
};
void recomp_unit_0396_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08990000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0396[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08990000;
    case 2u: goto L_08990008;
    case 3u: goto L_0899001C;
    case 4u: goto L_08990030;
    case 5u: goto L_08990038;
    case 6u: goto L_08990040;
    case 7u: goto L_08990048;
    case 8u: goto L_08990088;
    case 9u: goto L_0899008C;
    case 10u: goto L_08990094;
    case 11u: goto L_089900C4;
    case 12u: goto L_0899010C;
    case 13u: goto L_0899012C;
    case 14u: goto L_08990138;
    case 15u: goto L_08990140;
    case 16u: goto L_0899023C;
    case 17u: goto L_08990248;
    case 18u: goto L_0899025C;
    case 19u: goto L_08990270;
    case 20u: goto L_08990278;
    case 21u: goto L_08990280;
    case 22u: goto L_08990288;
    case 23u: goto L_089902C8;
    case 24u: goto L_089902CC;
    case 25u: goto L_089902D4;
    case 26u: goto L_089902E8;
    case 27u: goto L_0899031C;
    case 28u: goto L_08990324;
    case 29u: goto L_08990334;
    case 30u: goto L_08990374;
    case 31u: goto L_0899037C;
    case 32u: goto L_0899038C;
    case 33u: goto L_08990398;
    case 34u: goto L_089903A0;
    case 35u: goto L_089903A8;
    case 36u: goto L_089903B0;
    case 37u: goto L_089903D0;
    case 38u: goto L_089903D4;
    case 39u: goto L_089903DC;
    case 40u: goto L_089903F0;
    case 41u: goto L_08990404;
    case 42u: goto L_0899040C;
    case 43u: goto L_08990414;
    case 44u: goto L_0899041C;
    case 45u: goto L_0899045C;
    case 46u: goto L_08990460;
    case 47u: goto L_08990468;
    case 48u: goto L_0899049C;
    case 49u: goto L_089904B0;
    case 50u: goto L_089904B8;
    case 51u: goto L_089904F8;
    case 52u: goto L_08990500;
    case 53u: goto L_08990514;
    case 54u: goto L_0899052C;
    case 55u: goto L_08990534;
    case 56u: goto L_0899053C;
    case 57u: goto L_08990568;
    case 58u: goto L_08990574;
    case 59u: goto L_08990578;
    case 60u: goto L_08990594;
    case 61u: goto L_08990598;
    case 62u: goto L_089905DC;
    case 63u: goto L_089905F8;
    case 64u: goto L_089905FC;
    case 65u: goto L_08990644;
    case 66u: goto L_0899067C;
    case 67u: goto L_089906F0;
    case 68u: goto L_089906F8;
    case 69u: goto L_08990700;
    case 70u: goto L_08990790;
    case 71u: goto L_089907A4;
    case 72u: goto L_089907B0;
    case 73u: goto L_089907BC;
    case 74u: goto L_089907DC;
    case 75u: goto L_0899083C;
    case 76u: goto L_0899084C;
    case 77u: goto L_08990860;
    case 78u: goto L_08990878;
    case 79u: goto L_08990888;
    case 80u: goto L_08990890;
    case 81u: goto L_08990898;
    case 82u: goto L_089908AC;
    case 83u: goto L_089908C0;
    case 84u: goto L_089908D0;
    case 85u: goto L_089908D8;
    case 86u: goto L_089908E4;
    case 87u: goto L_089908EC;
    case 88u: goto L_089908F4;
    case 89u: goto L_08990908;
    case 90u: goto L_08990924;
    case 91u: goto L_08990934;
    case 92u: goto L_08990938;
    case 93u: goto L_08990950;
    case 94u: goto L_08990958;
    case 95u: goto L_08990960;
    case 96u: goto L_0899096C;
    case 97u: goto L_08990978;
    case 98u: goto L_08990980;
    case 99u: goto L_08990988;
    case 100u: goto L_08990990;
    case 101u: goto L_08990998;
    case 102u: goto L_089909A4;
    case 103u: goto L_089909AC;
    case 104u: goto L_089909B8;
    case 105u: goto L_089909C0;
    case 106u: goto L_089909DC;
    case 107u: goto L_089909EC;
    case 108u: goto L_089909F0;
    case 109u: goto L_08990A08;
    case 110u: goto L_08990A10;
    case 111u: goto L_08990A18;
    case 112u: goto L_08990A28;
    case 113u: goto L_08990A34;
    case 114u: goto L_08990A40;
    case 115u: goto L_08990A44;
    case 116u: goto L_08990A50;
    case 117u: goto L_08990A68;
    case 118u: goto L_08990A74;
    case 119u: goto L_08990A7C;
    case 120u: goto L_08990A84;
    case 121u: goto L_08990AB4;
    case 122u: goto L_08990ABC;
    case 123u: goto L_08990AC4;
    case 124u: goto L_08990ACC;
    case 125u: goto L_08990AE0;
    case 126u: goto L_08990AF0;
    case 127u: goto L_08990AF8;
    case 128u: goto L_08990B04;
    case 129u: goto L_08990B10;
    case 130u: goto L_08990B28;
    case 131u: goto L_08990B30;
    case 132u: goto L_08990B3C;
    case 133u: goto L_08990B48;
    case 134u: goto L_08990B5C;
    case 135u: goto L_08990B64;
    case 136u: goto L_08990B70;
    case 137u: goto L_08990B7C;
    case 138u: goto L_08990B94;
    case 139u: goto L_08990B9C;
    case 140u: goto L_08990BA4;
    case 141u: goto L_08990BB4;
    case 142u: goto L_08990BBC;
    case 143u: goto L_08990BE4;
    case 144u: goto L_08990BEC;
    case 145u: goto L_08990BF4;
    case 146u: goto L_08990C00;
    case 147u: goto L_08990C08;
    case 148u: goto L_08990C18;
    case 149u: goto L_08990C2C;
    case 150u: goto L_08990C34;
    case 151u: goto L_08990C3C;
    case 152u: goto L_08990C48;
    case 153u: goto L_08990C5C;
    case 154u: goto L_08990C64;
    case 155u: goto L_08990C6C;
    case 156u: goto L_08990C80;
    case 157u: goto L_08990C88;
    case 158u: goto L_08990C94;
    case 159u: goto L_08990CC0;
    case 160u: goto L_08990CCC;
    case 161u: goto L_08990CE4;
    case 162u: goto L_08990CF0;
    case 163u: goto L_08990D04;
    case 164u: goto L_08990D0C;
    case 165u: goto L_08990D14;
    case 166u: goto L_08990D20;
    case 167u: goto L_08990D30;
    case 168u: goto L_08990D34;
    case 169u: goto L_08990D38;
    case 170u: goto L_08990D40;
    case 171u: goto L_08990D4C;
    case 172u: goto L_08990D54;
    case 173u: goto L_08990D60;
    case 174u: goto L_08990D68;
    case 175u: goto L_08990D70;
    case 176u: goto L_08990D84;
    case 177u: goto L_08990DA4;
    case 178u: goto L_08990DB0;
    case 179u: goto L_08990DC4;
    case 180u: goto L_08990DD0;
    case 181u: goto L_08990DE4;
    case 182u: goto L_08990DEC;
    case 183u: goto L_08990DF8;
    case 184u: goto L_08990E04;
    case 185u: goto L_08990E0C;
    case 186u: goto L_08990E14;
    case 187u: goto L_08990E1C;
    case 188u: goto L_08990E24;
    case 189u: goto L_08990E2C;
    case 190u: goto L_08990E40;
    case 191u: goto L_08990E48;
    case 192u: goto L_08990E50;
    case 193u: goto L_08990E70;
    case 194u: goto L_08990E7C;
    case 195u: goto L_08990E90;
    case 196u: goto L_08990E9C;
    case 197u: goto L_08990EB0;
    case 198u: goto L_08990EB8;
    case 199u: goto L_08990EC4;
    case 200u: goto L_08990ED0;
    case 201u: goto L_08990EDC;
    case 202u: goto L_08990EE4;
    case 203u: goto L_08990EE8;
    case 204u: goto L_08990EF4;
    case 205u: goto L_08990F04;
    case 206u: goto L_08990F0C;
    case 207u: goto L_08990F14;
    case 208u: goto L_08990F28;
    case 209u: goto L_08990F30;
    case 210u: goto L_08990F38;
    case 211u: goto L_08990F58;
    case 212u: goto L_08990F64;
    case 213u: goto L_08990F78;
    case 214u: goto L_08990F84;
    case 215u: goto L_08990F98;
    case 216u: goto L_08990FA0;
    case 217u: goto L_08990FAC;
    case 218u: goto L_08990FBC;
    case 219u: goto L_08990FC8;
    case 220u: goto L_08990FD0;
    case 221u: goto L_08990FD4;
    case 222u: goto L_08990FE0;
    case 223u: goto L_08990FEC;
    case 224u: goto L_08990FF4;
    case 225u: goto L_08990FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08990000:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990008:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 8u));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08990030;
      }
      goto L_0899001C;
    }
L_0899001C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_08990030;
L_08990030:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990038:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0899008C;
      }
      goto L_08990040;
    }
L_08990040:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_08990088;
      }
      goto L_08990048;
    }
L_08990048:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3)));
    aot_gpr[2] = (aot_gpr[2] << 24u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990088:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    goto L_0899008C;
L_0899008C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990094:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] << 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] << 24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_0899010C;
      }
      goto L_089900C4;
    }
L_089900C4:
    aot_gpr[10] = (aot_gpr[6] >> 8u);
    aot_gpr[12] = (aot_gpr[6] >> 16u);
    aot_gpr[8] = (aot_gpr[6] >> 24u);
    aot_gpr[10] = (aot_gpr[17] | aot_gpr[10]);
    aot_gpr[12] = (aot_gpr[19] | aot_gpr[12]);
    aot_gpr[8] = (aot_gpr[20] | aot_gpr[8]);
    aot_gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 8u));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 16u));
    aot_gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[14]));
    aot_gpr[18] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[10]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[24]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_0899010C;
L_0899010C:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899012C:
    aot_gpr[8] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_0899023C;
      }
      goto L_08990138;
    }
L_08990138:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_0899023C;
      }
      goto L_08990140;
    }
L_08990140:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (255u << 16u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(1)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[2] = (aot_gpr[2] & 65280u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(2)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(3)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 24u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x00FFFFFFu) | ((0u & 0x00FFFFFFu) << 0u));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (aot_gpr[3] & 255u);
    aot_gpr[2] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(5)));
    aot_gpr[3] = (aot_gpr[2] << 8u);
    aot_gpr[3] = (aot_gpr[3] & 65280u);
    aot_gpr[2] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(6)));
    aot_gpr[3] = (aot_gpr[2] << 16u);
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[7]);
    aot_gpr[2] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(7)));
    aot_gpr[3] = (aot_gpr[2] << 24u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x00FFFFFFu) | ((0u & 0x00FFFFFFu) << 0u));
    aot_gpr[2] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899023C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990248:
    aot_gpr[3] = (aot_gpr[5] >> 24u);
    aot_gpr[6] = (aot_gpr[5] >> 8u);
    aot_gpr[7] = (aot_gpr[5] >> 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08990270;
      }
      goto L_0899025C;
    }
L_0899025C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_08990270;
L_08990270:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990278:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089902CC;
      }
      goto L_08990280;
    }
L_08990280:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089902C8;
      }
      goto L_08990288;
    }
L_08990288:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3)));
    aot_gpr[2] = (aot_gpr[2] << 24u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089902C8:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    goto L_089902CC;
L_089902CC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089902D4:
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[6] + 0u);
    aot_gpr[8] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_0899031C;
      }
      goto L_089902E8;
    }
L_089902E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-4));
    aot_gpr[6] = (aot_gpr[9] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[2] >> 24u);
    aot_gpr[3] = (aot_gpr[2] >> 8u);
    aot_gpr[4] = (aot_gpr[2] >> 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089902E8;
      }
      goto L_0899031C;
    }
L_0899031C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990324:
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_08990374;
      }
      goto L_08990334;
    }
L_08990334:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(3)));
    aot_gpr[3] = (aot_gpr[3] << 8u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08990334;
      }
      goto L_08990374;
    }
L_08990374:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899037C:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[3] = (aot_gpr[5] >> 8u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08990398;
      }
      goto L_0899038C;
    }
L_0899038C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    goto L_08990398;
L_08990398:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089903A0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089903D4;
      }
      goto L_089903A8;
    }
L_089903A8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089903D0;
      }
      goto L_089903B0;
    }
L_089903B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 8u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089903D0:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    goto L_089903D4;
L_089903D4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089903DC:
    aot_gpr[3] = (aot_gpr[5] >> 24u);
    aot_gpr[6] = (aot_gpr[5] >> 16u);
    aot_gpr[7] = (aot_gpr[5] >> 8u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08990404;
      }
      goto L_089903F0;
    }
L_089903F0:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[7]));
    goto L_08990404;
L_08990404:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899040C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08990460;
      }
      goto L_08990414;
    }
L_08990414:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_0899045C;
      }
      goto L_0899041C;
    }
L_0899041C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] << 24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3)));
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899045C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    goto L_08990460;
L_08990460:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990468:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[4] | 1u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(623));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-26160));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2500), aot_gpr[2]);
    aot_gpr[2] = (1u << 16u);
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 3533u);
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-26156));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26160), aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-23664));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_0899049C;
L_0899049C:
    aot_gpr[6] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
      if (branch_taken) {
          goto L_0899049C;
      }
      goto L_089904B0;
    }
L_089904B0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089904B8:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(623));
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(-26160));
    aot_gpr[7] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(624) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(2500), aot_gpr[3]);
    if (aot_gpr[5] == 0u) aot_gpr[7] = (aot_gpr[3]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-26160), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[3] + static_cast<std::uint32_t>(-26156));
    aot_gpr[2] = (1u << 16u);
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[8] = (aot_gpr[2] | 3533u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-23660));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089904F8;
L_089904F8:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (std::rotr(aot_gpr[5], 27));
      if (branch_taken) {
          goto L_08990514;
      }
      goto L_08990500;
    }
L_08990500:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[2]);
    aot_gpr[2] = (std::rotr(aot_gpr[5], 27));
    goto L_08990514;
L_08990514:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_089904F8;
      }
      goto L_0899052C;
    }
L_0899052C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990534:
    // nop
    goto L_08990790;
L_0899053C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(-26160));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2500)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[2]) < 624 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2500), aot_gpr[2]);
      if (branch_taken) {
          goto L_0899067C;
      }
      goto L_08990568;
    }
L_08990568:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < 625 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (13689u << 16u);
      if (branch_taken) {
          goto L_089906F0;
      }
      goto L_08990574;
    }
L_08990574:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26160)));
    goto L_08990578;
L_08990578:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[9] = (aot_gpr[16] + 0u);
    aot_gpr[11] = (aot_gpr[2] + static_cast<std::uint32_t>(-25252));
    aot_gpr[10] = (39176u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2500), 0u);
    goto L_08990598;
L_08990594:
    aot_gpr[7] = (aot_gpr[6] + 0u);
    goto L_08990598;
L_08990598:
    aot_gpr[2] = (aot_gpr[7] + 0u);
    aot_gpr[5] = ((aot_gpr[5] & ~0x7FFFFFFFu) | ((0u & 0x7FFFFFFFu) << 0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(1588)));
    aot_gpr[2] = ((aot_gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[2] = (aot_gpr[5] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] >> 1u);
    aot_gpr[5] = (aot_gpr[7] & 1u);
    aot_gpr[3] = (aot_gpr[10] | 45279u);
    if (aot_gpr[5] == 0u) aot_gpr[3] = (0u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] ^ aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[11];
    aot_gpr[9] = (aot_gpr[8] + 0u);
      if (branch_taken) {
          goto L_08990594;
      }
      goto L_089905DC;
    }
L_089905DC:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[10] = (aot_gpr[2] + static_cast<std::uint32_t>(-25244));
    aot_gpr[12] = (aot_gpr[3] + static_cast<std::uint32_t>(-24576));
    aot_gpr[9] = (aot_gpr[17] + static_cast<std::uint32_t>(-26160));
    aot_gpr[11] = (39176u << 16u);
    goto L_089905FC;
L_089905F8:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    goto L_089905FC;
L_089905FC:
    aot_gpr[2] = (aot_gpr[6] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = ((aot_gpr[7] & ~0x7FFFFFFFu) | ((0u & 0x7FFFFFFFu) << 0u));
    aot_gpr[2] = ((aot_gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[2] = (aot_gpr[7] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] >> 1u);
    aot_gpr[5] = (aot_gpr[6] & 1u);
    aot_gpr[3] = (aot_gpr[11] | 45279u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[2]);
    if (aot_gpr[5] == 0u) aot_gpr[3] = (0u);
    aot_gpr[3] = (aot_gpr[3] ^ aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[6] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[12];
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089905F8;
      }
      goto L_08990644;
    }
L_08990644:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26160)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = ((aot_gpr[6] & ~0x7FFFFFFFu) | ((0u & 0x7FFFFFFFu) << 0u));
    aot_gpr[3] = (aot_gpr[4] + 0u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[3] = (aot_gpr[6] | aot_gpr[3]);
    aot_gpr[2] = (39176u << 16u);
    aot_gpr[3] = (aot_gpr[3] >> 1u);
    aot_gpr[4] = (aot_gpr[4] & 1u);
    aot_gpr[2] = (aot_gpr[2] | 45279u);
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[3]);
    if (aot_gpr[4] == 0u) aot_gpr[2] = (0u);
    aot_gpr[2] = (aot_gpr[2] ^ aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_0899067C;
L_0899067C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(-26160));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2500)));
    aot_gpr[8] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-26164)));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26168)));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-26172)));
    aot_gpr[3] = (aot_gpr[3] ^ aot_gpr[5]);
    aot_gpr[5] = (std::rotr(aot_gpr[3], 25));
    aot_gpr[4] = (std::rotr(aot_gpr[4], 7));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[3] ^ aot_gpr[4]);
    aot_gpr[2] = (~(0u | aot_gpr[3]));
    aot_gpr[2] = (aot_gpr[5] & aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-26168), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-26172), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-26164), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089906F0:
    aot_gpr[31] = (0x089906F8u);
    aot_gpr[4] = (aot_gpr[4] | 43981u);
    goto L_08990534;
L_089906F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26160)));
    goto L_08990578;
L_08990700:
    // nop
    aot_gpr[1] = (aot_gpr[1] ^ aot_gpr[3]);
    // nop
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[1]);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (aot_gpr[1] ^ aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[1]);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[1]);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[1]);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[1]);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[1]);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[1]);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[1]);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[1]);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[1]);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[1]);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[1]);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[1]);
    // nop
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[1]);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990790:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[4]);
    aot_gpr[31] = (0x089907A4u);
    // nop
    ctx.pc = 0x08A5B0B4u;
    return;
L_089907A4:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(0));
    aot_gpr[31] = (0x089907B0u);
    // nop
    goto L_08990700;
L_089907B0:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (0x089907BCu);
    // nop
    ctx.pc = 0x08A5AFCCu;
    return;
L_089907BC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[1]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899083C;
      }
      goto L_089907DC;
    }
L_089907DC:
    aot_gpr[1] = (4096u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[1]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[1] = (4096u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(2048)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[1]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[1] = (4096u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(4096)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[1]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[1] = (4096u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(6144)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[1]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    goto L_0899083C;
L_0899083C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(0));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x0899084Cu);
    // nop
    goto L_089904B8;
L_0899084C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990860:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_08990898;
      }
      goto L_08990878;
    }
L_08990878:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x08990888u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_08990A84;
L_08990888:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08990898;
      }
      goto L_08990890;
    }
L_08990890:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_08990898;
L_08990898:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089908AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_089908D0;
      }
      goto L_089908C0;
    }
L_089908C0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089908E4;
      }
      goto L_089908D0;
    }
L_089908D0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089908D8;
L_089908D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089908E4:
    aot_gpr[31] = (0x089908ECu);
    // nop
    goto L_08990AE0;
L_089908EC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089908D8;
      }
      goto L_089908F4;
    }
L_089908F4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990908:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
      if (branch_taken) {
          goto L_08990934;
      }
      goto L_08990924;
    }
L_08990924:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08990950;
      }
      goto L_08990934;
    }
L_08990934:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_08990938;
L_08990938:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990950:
    aot_gpr[31] = (0x08990958u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08990B7C;
L_08990958:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08990938;
      }
      goto L_08990960;
    }
L_08990960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08990978;
      }
      goto L_0899096C;
    }
L_0899096C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089909B8;
      }
      goto L_08990978;
    }
L_08990978:
    aot_gpr[31] = (0x08990980u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08990B10;
L_08990980:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08990938;
      }
      goto L_08990988;
    }
L_08990988:
    aot_gpr[31] = (0x08990990u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    goto L_08990B7C;
L_08990990:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08990938;
      }
      goto L_08990998;
    }
L_08990998:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089909A4;
L_089909A4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08990938;
      }
      goto L_089909AC;
    }
L_089909AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08990938;
L_089909B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089909A4;
L_089909C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
      if (branch_taken) {
          goto L_089909EC;
      }
      goto L_089909DC;
    }
L_089909DC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08990A08;
      }
      goto L_089909EC;
    }
L_089909EC:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    goto L_089909F0;
L_089909F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990A08:
    aot_gpr[31] = (0x08990A10u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08990B7C;
L_08990A10:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089909F0;
      }
      goto L_08990A18;
    }
L_08990A18:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(901));
      if (branch_taken) {
          goto L_089909F0;
      }
      goto L_08990A28;
    }
L_08990A28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(902));
      if (branch_taken) {
          goto L_089909F0;
      }
      goto L_08990A34;
    }
L_08990A34:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08990A44;
      }
      goto L_08990A40;
    }
L_08990A40:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08990A44;
L_08990A44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08990A68;
      }
      goto L_08990A50;
    }
L_08990A50:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990A68:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08990A74u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_08990B48;
L_08990A74:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089909F0;
      }
      goto L_08990A7C;
    }
L_08990A7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08990A50;
L_08990A84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12520));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08990ACC;
      }
      goto L_08990AB4;
    }
L_08990AB4:
    aot_gpr[31] = (0x08990ABCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.pc = 0x08A5AFC4u;
    return;
L_08990ABC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(900));
      if (branch_taken) {
          goto L_08990ACC;
      }
      goto L_08990AC4;
    }
L_08990AC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[3] = (0u + 0u);
    goto L_08990ACC;
L_08990ACC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990AE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08990B04;
      }
      goto L_08990AF0;
    }
L_08990AF0:
    aot_gpr[31] = (0x08990AF8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08A5B014u;
    return;
L_08990AF8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(900));
    if (aot_gpr[2] == 0u) aot_gpr[3] = (0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    goto L_08990B04;
L_08990B04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990B10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08990B3C;
      }
      goto L_08990B28;
    }
L_08990B28:
    aot_gpr[31] = (0x08990B30u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08A5B064u;
    return;
L_08990B30:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(900));
    if (aot_gpr[2] == 0u) aot_gpr[3] = (0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    goto L_08990B3C;
L_08990B3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990B48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08990B70;
      }
      goto L_08990B5C;
    }
L_08990B5C:
    aot_gpr[31] = (0x08990B64u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08A5B04Cu;
    return;
L_08990B64:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(900));
    if (aot_gpr[2] == 0u) aot_gpr[3] = (0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    goto L_08990B70;
L_08990B70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990B7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_08990BA4;
      }
      goto L_08990B94;
    }
L_08990B94:
    aot_gpr[31] = (0x08990B9Cu);
    // nop
    ctx.pc = 0x08A5B01Cu;
    return;
L_08990B9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    goto L_08990BA4;
L_08990BA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990BB4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08990C00;
      }
      goto L_08990BBC;
    }
L_08990BBC:
    aot_gpr[2] = (43981u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 48314u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08990C08;
      }
      goto L_08990BE4;
    }
L_08990BE4:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08990C08;
      }
      goto L_08990BEC;
    }
L_08990BEC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08990C00;
      }
      goto L_08990BF4;
    }
L_08990BF4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[3] = (0u + 0u);
    goto L_08990C00;
L_08990C00:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990C08:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990C18:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (43981u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 48314u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08990C3C;
      }
      goto L_08990C2C;
    }
L_08990C2C:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08990C34;
L_08990C34:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990C3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08990C34;
      }
      goto L_08990C48;
    }
L_08990C48:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
        goto L_08990C88;
    }
    goto L_08990C5C;
L_08990C5C:
    if (aot_gpr[6] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
        goto L_08990C88;
    }
    goto L_08990C64;
L_08990C64:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08990C80;
      }
      goto L_08990C6C;
    }
L_08990C6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[6] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990C80:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_08990C88;
L_08990C88:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990C94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (43981u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 48314u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[17] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_08990CE4;
      }
      goto L_08990CC0;
    }
L_08990CC0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08990CCC;
L_08990CCC:
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
L_08990CE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08990CCC;
      }
      goto L_08990CF0;
    }
L_08990CF0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08990D34;
      }
      goto L_08990D04;
    }
L_08990D04:
    if (aot_gpr[4] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_08990D38;
    }
    goto L_08990D0C;
L_08990D0C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08990D30;
      }
      goto L_08990D14;
    }
L_08990D14:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08990D40;
    }
    goto L_08990D20;
L_08990D20:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08990CCC;
L_08990D30:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_08990D34;
L_08990D34:
    aot_gpr[3] = (0u + 0u);
    goto L_08990D38;
L_08990D38:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08990CCC;
L_08990D40:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08990D68;
      }
      goto L_08990D4C;
    }
L_08990D4C:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08990D60;
      }
      goto L_08990D54;
    }
L_08990D54:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_08990CCC;
L_08990D60:
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    goto L_08990D68;
L_08990D68:
    aot_gpr[31] = (0x08990D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08990D70u) goto L_08990D70;
    return;
L_08990D70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_08990CCC;
L_08990D84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (43981u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 48314u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08990DC4;
      }
      goto L_08990DA4;
    }
L_08990DA4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08990DB0;
L_08990DB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990DC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08990DB0;
      }
      goto L_08990DD0;
    }
L_08990DD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08990E14;
      }
      goto L_08990DE4;
    }
L_08990DE4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08990E0C;
      }
      goto L_08990DEC;
    }
L_08990DEC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08990E40;
      }
      goto L_08990DF8;
    }
L_08990DF8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08990E1C;
      }
      goto L_08990E04;
    }
L_08990E04:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_08990DB0;
L_08990E0C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (0u + 0u);
    goto L_08990E14;
L_08990E14:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08990DB0;
L_08990E1C:
    aot_gpr[31] = (0x08990E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 234u, 0x0898FED4u>(ctx, &aot_mem) && ctx.pc == 0x08990E24u) goto L_08990E24;
    return;
L_08990E24:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_08990E04;
    }
    goto L_08990E2C;
L_08990E2C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_08990DB0;
L_08990E40:
    aot_gpr[31] = (0x08990E48u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 231u, 0x0898FEB8u>(ctx, &aot_mem) && ctx.pc == 0x08990E48u) goto L_08990E48;
    return;
L_08990E48:
    // nop
    goto L_08990E24;
L_08990E50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (43981u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 48314u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08990E90;
      }
      goto L_08990E70;
    }
L_08990E70:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08990E7C;
L_08990E7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990E90:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08990E7C;
      }
      goto L_08990E9C;
    }
L_08990E9C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08990EE8;
      }
      goto L_08990EB0;
    }
L_08990EB0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08990EE4;
      }
      goto L_08990EB8;
    }
L_08990EB8:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08990EF4;
      }
      goto L_08990EC4;
    }
L_08990EC4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08990F28;
      }
      goto L_08990ED0;
    }
L_08990ED0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08990F04;
      }
      goto L_08990EDC;
    }
L_08990EDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_08990E7C;
L_08990EE4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_08990EE8;
L_08990EE8:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08990E7C;
L_08990EF4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08990E7C;
L_08990F04:
    aot_gpr[31] = (0x08990F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 250u, 0x0898FF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08990F0Cu) goto L_08990F0C;
    return;
L_08990F0C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_08990EDC;
    }
    goto L_08990F14;
L_08990F14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_08990E7C;
L_08990F28:
    aot_gpr[31] = (0x08990F30u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 247u, 0x0898FF48u>(ctx, &aot_mem) && ctx.pc == 0x08990F30u) goto L_08990F30;
    return;
L_08990F30:
    // nop
    goto L_08990F0C;
L_08990F38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (43981u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 48314u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08990F78;
      }
      goto L_08990F58;
    }
L_08990F58:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08990F64;
L_08990F64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990F78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08990F64;
      }
      goto L_08990F84;
    }
L_08990F84:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08990FD4;
      }
      goto L_08990F98;
    }
L_08990F98:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08990FD0;
      }
      goto L_08990FA0;
    }
L_08990FA0:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08990FE0;
      }
      goto L_08990FAC;
    }
L_08990FAC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
        (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 2u, 0x08991010u>(ctx, &aot_mem); return;
    }
    goto L_08990FBC;
L_08990FBC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08990FEC;
      }
      goto L_08990FC8;
    }
L_08990FC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_08990F64;
L_08990FD0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_08990FD4;
L_08990FD4:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08990F64;
L_08990FE0:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08990F64;
L_08990FEC:
    aot_gpr[31] = (0x08990FF4u);
    // nop
    goto L_0899012C;
L_08990FF4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_08990FC8;
    }
    goto L_08990FFC;
L_08990FFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08991000u; return;
}

void recomp_unit_0396(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0396_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_396(Runtime &runtime) {
    runtime.register_generated_unit(396u, 0x08990000u, 4096u, &recomp_unit_0396, &recomp_unit_0396_entry);
    runtime.register_function(0x08990000u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990008u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899001Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990030u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990038u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990040u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990048u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990088u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899008Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990094u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089900C4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899010Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899012Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990138u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990140u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899023Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990248u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899025Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990270u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990278u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990280u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990288u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089902C8u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089902CCu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089902D4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089902E8u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899031Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990324u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990334u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990374u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899037Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899038Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990398u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089903A0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089903A8u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089903B0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089903D0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089903D4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089903DCu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089903F0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990404u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899040Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990414u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899041Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899045Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990460u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990468u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899049Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089904B0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089904B8u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089904F8u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990500u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990514u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899052Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990534u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899053Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990568u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990574u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990578u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990594u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990598u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089905DCu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089905F8u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089905FCu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990644u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899067Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089906F0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089906F8u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990700u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990790u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089907A4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089907B0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089907BCu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089907DCu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899083Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899084Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990860u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990878u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990888u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990890u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990898u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089908ACu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089908C0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089908D0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089908D8u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089908E4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089908ECu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089908F4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990908u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990924u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990934u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990938u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990950u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990958u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990960u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x0899096Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990978u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990980u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990988u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990990u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990998u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089909A4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089909ACu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089909B8u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089909C0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089909DCu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089909ECu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x089909F0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990A08u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990A10u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990A18u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990A28u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990A34u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990A40u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990A44u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990A50u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990A68u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990A74u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990A7Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990A84u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990AB4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990ABCu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990AC4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990ACCu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990AE0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990AF0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990AF8u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990B04u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990B10u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990B28u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990B30u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990B3Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990B48u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990B5Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990B64u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990B70u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990B7Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990B94u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990B9Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990BA4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990BB4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990BBCu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990BE4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990BECu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990BF4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990C00u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990C08u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990C18u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990C2Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990C34u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990C3Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990C48u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990C5Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990C64u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990C6Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990C80u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990C88u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990C94u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990CC0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990CCCu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990CE4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990CF0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990D04u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990D0Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990D14u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990D20u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990D30u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990D34u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990D38u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990D40u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990D4Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990D54u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990D60u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990D68u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990D70u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990D84u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990DA4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990DB0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990DC4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990DD0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990DE4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990DECu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990DF8u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990E04u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990E0Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990E14u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990E1Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990E24u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990E2Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990E40u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990E48u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990E50u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990E70u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990E7Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990E90u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990E9Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990EB0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990EB8u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990EC4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990ED0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990EDCu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990EE4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990EE8u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990EF4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990F04u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990F0Cu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990F14u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990F28u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990F30u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990F38u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990F58u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990F64u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990F78u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990F84u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990F98u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990FA0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990FACu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990FBCu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990FC8u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990FD0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990FD4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990FE0u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990FECu, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990FF4u, &recomp_unit_0396, "recomp_unit_0396");
    runtime.register_function(0x08990FFCu, &recomp_unit_0396, "recomp_unit_0396");
}
} // namespace psprecomp
