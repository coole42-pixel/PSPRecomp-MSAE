#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0451[1023] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21,
    0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 32, 0, 33, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0,
    0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 44, 45, 0, 0, 46, 0, 0, 0, 47, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51,
    0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61,
    0, 62, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 70, 0, 0, 0, 71, 0, 72, 0, 73, 0, 74, 75, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 0, 81, 0,
    82, 0, 83, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0,
    0, 100, 0, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0,
    0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 129, 0, 0, 130,
    131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148,
    0, 149, 150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 161, 162, 0, 163, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176,
    0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 191, 192, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195,
    0, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 203, 0, 0, 0,
    0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 226, 227,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 244, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 252, 253, 0, 0, 254, 255,
};
void recomp_unit_0451_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089C7000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0451[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C7000;
    case 2u: goto L_089C7008;
    case 3u: goto L_089C7010;
    case 4u: goto L_089C7024;
    case 5u: goto L_089C7034;
    case 6u: goto L_089C7058;
    case 7u: goto L_089C7078;
    case 8u: goto L_089C7084;
    case 9u: goto L_089C708C;
    case 10u: goto L_089C70A4;
    case 11u: goto L_089C70B4;
    case 12u: goto L_089C70D0;
    case 13u: goto L_089C70E4;
    case 14u: goto L_089C70F0;
    case 15u: goto L_089C712C;
    case 16u: goto L_089C7134;
    case 17u: goto L_089C713C;
    case 18u: goto L_089C7154;
    case 19u: goto L_089C715C;
    case 20u: goto L_089C7174;
    case 21u: goto L_089C717C;
    case 22u: goto L_089C7184;
    case 23u: goto L_089C7194;
    case 24u: goto L_089C71A8;
    case 25u: goto L_089C71D0;
    case 26u: goto L_089C7210;
    case 27u: goto L_089C7218;
    case 28u: goto L_089C7224;
    case 29u: goto L_089C725C;
    case 30u: goto L_089C7264;
    case 31u: goto L_089C7284;
    case 32u: goto L_089C7294;
    case 33u: goto L_089C729C;
    case 34u: goto L_089C72A0;
    case 35u: goto L_089C72BC;
    case 36u: goto L_089C72C4;
    case 37u: goto L_089C72CC;
    case 38u: goto L_089C72D4;
    case 39u: goto L_089C72E0;
    case 40u: goto L_089C72F4;
    case 41u: goto L_089C7304;
    case 42u: goto L_089C7314;
    case 43u: goto L_089C7320;
    case 44u: goto L_089C7328;
    case 45u: goto L_089C732C;
    case 46u: goto L_089C7338;
    case 47u: goto L_089C7348;
    case 48u: goto L_089C734C;
    case 49u: goto L_089C7354;
    case 50u: goto L_089C7374;
    case 51u: goto L_089C737C;
    case 52u: goto L_089C7388;
    case 53u: goto L_089C7398;
    case 54u: goto L_089C73A8;
    case 55u: goto L_089C73B0;
    case 56u: goto L_089C73C0;
    case 57u: goto L_089C73CC;
    case 58u: goto L_089C73D8;
    case 59u: goto L_089C73E4;
    case 60u: goto L_089C73F0;
    case 61u: goto L_089C73FC;
    case 62u: goto L_089C7404;
    case 63u: goto L_089C7410;
    case 64u: goto L_089C741C;
    case 65u: goto L_089C7424;
    case 66u: goto L_089C7434;
    case 67u: goto L_089C744C;
    case 68u: goto L_089C7458;
    case 69u: goto L_089C747C;
    case 70u: goto L_089C7484;
    case 71u: goto L_089C7494;
    case 72u: goto L_089C749C;
    case 73u: goto L_089C74A4;
    case 74u: goto L_089C74AC;
    case 75u: goto L_089C74B0;
    case 76u: goto L_089C74BC;
    case 77u: goto L_089C74C8;
    case 78u: goto L_089C74D0;
    case 79u: goto L_089C74D8;
    case 80u: goto L_089C74E4;
    case 81u: goto L_089C74F8;
    case 82u: goto L_089C7500;
    case 83u: goto L_089C7508;
    case 84u: goto L_089C750C;
    case 85u: goto L_089C7514;
    case 86u: goto L_089C7524;
    case 87u: goto L_089C7538;
    case 88u: goto L_089C7548;
    case 89u: goto L_089C7584;
    case 90u: goto L_089C758C;
    case 91u: goto L_089C7594;
    case 92u: goto L_089C75A0;
    case 93u: goto L_089C75A8;
    case 94u: goto L_089C75B0;
    case 95u: goto L_089C75B8;
    case 96u: goto L_089C75C4;
    case 97u: goto L_089C75E0;
    case 98u: goto L_089C75E8;
    case 99u: goto L_089C75F0;
    case 100u: goto L_089C7604;
    case 101u: goto L_089C7614;
    case 102u: goto L_089C761C;
    case 103u: goto L_089C7624;
    case 104u: goto L_089C762C;
    case 105u: goto L_089C7638;
    case 106u: goto L_089C7640;
    case 107u: goto L_089C7654;
    case 108u: goto L_089C765C;
    case 109u: goto L_089C7670;
    case 110u: goto L_089C7678;
    case 111u: goto L_089C7684;
    case 112u: goto L_089C768C;
    case 113u: goto L_089C7694;
    case 114u: goto L_089C76AC;
    case 115u: goto L_089C76C4;
    case 116u: goto L_089C76CC;
    case 117u: goto L_089C76D8;
    case 118u: goto L_089C76E8;
    case 119u: goto L_089C76F4;
    case 120u: goto L_089C7710;
    case 121u: goto L_089C7730;
    case 122u: goto L_089C7738;
    case 123u: goto L_089C774C;
    case 124u: goto L_089C775C;
    case 125u: goto L_089C77A4;
    case 126u: goto L_089C77B8;
    case 127u: goto L_089C77C4;
    case 128u: goto L_089C77EC;
    case 129u: goto L_089C77F0;
    case 130u: goto L_089C77FC;
    case 131u: goto L_089C7800;
    case 132u: goto L_089C7808;
    case 133u: goto L_089C7814;
    case 134u: goto L_089C7834;
    case 135u: goto L_089C7844;
    case 136u: goto L_089C784C;
    case 137u: goto L_089C7874;
    case 138u: goto L_089C7894;
    case 139u: goto L_089C789C;
    case 140u: goto L_089C78D4;
    case 141u: goto L_089C78E8;
    case 142u: goto L_089C790C;
    case 143u: goto L_089C791C;
    case 144u: goto L_089C7938;
    case 145u: goto L_089C7950;
    case 146u: goto L_089C795C;
    case 147u: goto L_089C7970;
    case 148u: goto L_089C797C;
    case 149u: goto L_089C7984;
    case 150u: goto L_089C7988;
    case 151u: goto L_089C7990;
    case 152u: goto L_089C799C;
    case 153u: goto L_089C79A4;
    case 154u: goto L_089C79D4;
    case 155u: goto L_089C79E8;
    case 156u: goto L_089C79EC;
    case 157u: goto L_089C7A18;
    case 158u: goto L_089C7A24;
    case 159u: goto L_089C7A2C;
    case 160u: goto L_089C7A34;
    case 161u: goto L_089C7A3C;
    case 162u: goto L_089C7A40;
    case 163u: goto L_089C7A48;
    case 164u: goto L_089C7A54;
    case 165u: goto L_089C7A5C;
    case 166u: goto L_089C7A68;
    case 167u: goto L_089C7A7C;
    case 168u: goto L_089C7A94;
    case 169u: goto L_089C7A9C;
    case 170u: goto L_089C7AC8;
    case 171u: goto L_089C7AD0;
    case 172u: goto L_089C7ADC;
    case 173u: goto L_089C7AE4;
    case 174u: goto L_089C7AEC;
    case 175u: goto L_089C7AF4;
    case 176u: goto L_089C7AFC;
    case 177u: goto L_089C7B04;
    case 178u: goto L_089C7B14;
    case 179u: goto L_089C7B20;
    case 180u: goto L_089C7B34;
    case 181u: goto L_089C7B40;
    case 182u: goto L_089C7B48;
    case 183u: goto L_089C7B58;
    case 184u: goto L_089C7B64;
    case 185u: goto L_089C7B7C;
    case 186u: goto L_089C7B94;
    case 187u: goto L_089C7BA4;
    case 188u: goto L_089C7BB4;
    case 189u: goto L_089C7BC0;
    case 190u: goto L_089C7BC8;
    case 191u: goto L_089C7BD0;
    case 192u: goto L_089C7BD4;
    case 193u: goto L_089C7BE0;
    case 194u: goto L_089C7BE8;
    case 195u: goto L_089C7BFC;
    case 196u: goto L_089C7C08;
    case 197u: goto L_089C7C1C;
    case 198u: goto L_089C7C24;
    case 199u: goto L_089C7C40;
    case 200u: goto L_089C7C4C;
    case 201u: goto L_089C7C5C;
    case 202u: goto L_089C7C6C;
    case 203u: goto L_089C7C70;
    case 204u: goto L_089C7C88;
    case 205u: goto L_089C7C90;
    case 206u: goto L_089C7CBC;
    case 207u: goto L_089C7CC4;
    case 208u: goto L_089C7CCC;
    case 209u: goto L_089C7CD0;
    case 210u: goto L_089C7CDC;
    case 211u: goto L_089C7D34;
    case 212u: goto L_089C7D3C;
    case 213u: goto L_089C7D44;
    case 214u: goto L_089C7D4C;
    case 215u: goto L_089C7D58;
    case 216u: goto L_089C7D84;
    case 217u: goto L_089C7D94;
    case 218u: goto L_089C7DA8;
    case 219u: goto L_089C7DB0;
    case 220u: goto L_089C7DBC;
    case 221u: goto L_089C7DC4;
    case 222u: goto L_089C7DCC;
    case 223u: goto L_089C7DD4;
    case 224u: goto L_089C7DE4;
    case 225u: goto L_089C7DF0;
    case 226u: goto L_089C7DF8;
    case 227u: goto L_089C7DFC;
    case 228u: goto L_089C7E10;
    case 229u: goto L_089C7E3C;
    case 230u: goto L_089C7E44;
    case 231u: goto L_089C7E4C;
    case 232u: goto L_089C7E54;
    case 233u: goto L_089C7E68;
    case 234u: goto L_089C7EAC;
    case 235u: goto L_089C7EB4;
    case 236u: goto L_089C7EBC;
    case 237u: goto L_089C7EC8;
    case 238u: goto L_089C7ED4;
    case 239u: goto L_089C7EF8;
    case 240u: goto L_089C7F38;
    case 241u: goto L_089C7F40;
    case 242u: goto L_089C7F50;
    case 243u: goto L_089C7F60;
    case 244u: goto L_089C7F68;
    case 245u: goto L_089C7F70;
    case 246u: goto L_089C7F94;
    case 247u: goto L_089C7F9C;
    case 248u: goto L_089C7FB8;
    case 249u: goto L_089C7FC4;
    case 250u: goto L_089C7FD0;
    case 251u: goto L_089C7FD8;
    case 252u: goto L_089C7FE4;
    case 253u: goto L_089C7FE8;
    case 254u: goto L_089C7FF4;
    case 255u: goto L_089C7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C7000:
    aot_gpr[31] = (0x089C7008u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 7u, 0x089CC06Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7008u) goto L_089C7008;
    return;
L_089C7008:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
      }
      goto L_089C7010;
    }
L_089C7010:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(30)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u | 54508u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
      }
      goto L_089C7024;
    }
L_089C7024:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[4] << 6u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
      }
      goto L_089C7034;
    }
L_089C7034:
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[5] << 3u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 88u, 0x089C6808u>(ctx, &aot_mem); return;
      }
      goto L_089C7058;
    }
L_089C7058:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 88u, 0x089C6808u>(ctx, &aot_mem); return;
      }
      goto L_089C7078;
    }
L_089C7078:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089C7084u);
    aot_gpr[7] = (0u | 54003u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 23u, 0x089C3188u>(ctx, &aot_mem) && ctx.pc == 0x089C7084u) goto L_089C7084;
    return;
L_089C7084:
    aot_gpr[6] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C708C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_gpr[22] = (aot_gpr[17] & 65535u);
    aot_gpr[31] = (0x089C70A4u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C70A4u) goto L_089C70A4;
    return;
L_089C70A4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (aot_gpr[17] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
      }
      goto L_089C70B4;
    }
L_089C70B4:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[17] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12816));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C70D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (aot_gpr[17] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
        (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
    }
    goto L_089C70E4;
L_089C70E4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089C70F0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089C70F0u) goto L_089C70F0;
    return;
L_089C70F0:
    aot_gpr[2] = (aot_gpr[17] << 6u);
    aot_gpr[3] = (aot_gpr[17] << 3u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(228)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C712Cu);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C712Cu) goto L_089C712C;
    return;
L_089C712C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
      }
      goto L_089C7134;
    }
L_089C7134:
    aot_gpr[6] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C713C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(156)));
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C7154u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7154u) goto L_089C7154;
    return;
L_089C7154:
    aot_gpr[6] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C715C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(212)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C7174u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7174u) goto L_089C7174;
    return;
L_089C7174:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
      }
      goto L_089C717C;
    }
L_089C717C:
    aot_gpr[6] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C7184:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x089C7194u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089C7194u) goto L_089C7194;
    return;
L_089C7194:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-8));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[16] << 6u);
      if (branch_taken) {
          goto L_089C765C;
      }
      goto L_089C71A8;
    }
L_089C71A8:
    aot_gpr[2] = (aot_gpr[16] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(452), aot_gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C71D0:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[5] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089C7210u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 194u, 0x089C3F78u>(ctx, &aot_mem) && ctx.pc == 0x089C7210u) goto L_089C7210;
    return;
L_089C7210:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
      }
      goto L_089C7218;
    }
L_089C7218:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[31] = (0x089C7224u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C7224u) goto L_089C7224;
    return;
L_089C7224:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(30)));
    aot_gpr[8] = (aot_gpr[22] + 0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(178), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[31] = (0x089C725Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(182), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 95u, 0x089CC838u>(ctx, &aot_mem) && ctx.pc == 0x089C725Cu) goto L_089C725C;
    return;
L_089C725C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
      }
      goto L_089C7264;
    }
L_089C7264:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[3]);
      if (branch_taken) {
          goto L_089C7654;
      }
      goto L_089C7284;
    }
L_089C7284:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089C7294u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7294u) goto L_089C7294;
    return;
L_089C7294:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
      }
      goto L_089C729C;
    }
L_089C729C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(212)));
    goto L_089C72A0;
L_089C72A0:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C72BCu);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C72BCu) goto L_089C72BC;
    return;
L_089C72BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
      }
      goto L_089C72C4;
    }
L_089C72C4:
    aot_gpr[6] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C72CC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C72D4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x089C72E0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C72E0u) goto L_089C72E0;
    return;
L_089C72E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[6]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C76E8;
      }
      goto L_089C72F4;
    }
L_089C72F4:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[31] = (0x089C7304u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089C7304u) goto L_089C7304;
    return;
L_089C7304:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089C76AC;
      }
      goto L_089C7314;
    }
L_089C7314:
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_089C768C;
      }
      goto L_089C7320;
    }
L_089C7320:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[21]);
      if (branch_taken) {
          goto L_089C741C;
      }
      goto L_089C7328;
    }
L_089C7328:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    goto L_089C732C;
L_089C732C:
    aot_gpr[20] = (0u + 0u);
    aot_gpr[19] = (0u + 0u);
    aot_gpr[5] = (0u | 65535u);
    goto L_089C7338;
L_089C7338:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (aot_gpr[4] & 65535u);
    if (aot_gpr[2] == aot_gpr[3]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(60)));
        goto L_089C75B0;
    }
    goto L_089C7348;
L_089C7348:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(164)));
    goto L_089C734C;
L_089C734C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(18)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 88u, 0x089C6808u>(ctx, &aot_mem); return;
      }
      goto L_089C7354;
    }
L_089C7354:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[11] = (aot_gpr[20] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C7374u);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7374u) goto L_089C7374;
    return;
L_089C7374:
    aot_gpr[6] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C737C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x089C7388u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7388u) goto L_089C7388;
    return;
L_089C7388:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[6]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C744C;
      }
      goto L_089C7398;
    }
L_089C7398:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[31] = (0x089C73A8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089C73A8u) goto L_089C73A8;
    return;
L_089C73A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    goto L_089C732C;
L_089C73B0:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x089C73C0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089C73C0u) goto L_089C73C0;
    return;
L_089C73C0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089C76CC;
      }
      goto L_089C73CC;
    }
L_089C73CC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089C7410;
      }
      goto L_089C73D8;
    }
L_089C73D8:
    aot_gpr[20] = (0u + 0u);
    aot_gpr[5] = (0u | 65535u);
    goto L_089C7338;
L_089C73E4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x089C73F0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089C73F0u) goto L_089C73F0;
    return;
L_089C73F0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x089C73FCu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 38u, 0x0899326Cu>(ctx, &aot_mem) && ctx.pc == 0x089C73FCu) goto L_089C73FC;
    return;
L_089C73FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 113u, 0x089C6980u>(ctx, &aot_mem); return;
      }
      goto L_089C7404;
    }
L_089C7404:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u | 65535u);
    goto L_089C7338;
L_089C7410:
    aot_gpr[20] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[4] & 65535u);
    goto L_089C7338;
L_089C741C:
    aot_gpr[31] = (0x089C7424u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089C7424u) goto L_089C7424;
    return;
L_089C7424:
    aot_gpr[3] = (aot_gpr[21] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089C7738;
      }
      goto L_089C7434;
    }
L_089C7434:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (0u + 0u);
    aot_gpr[5] = (0u | 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089C7338;
L_089C744C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089C7458u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089C7458u) goto L_089C7458;
    return;
L_089C7458:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] & 127u);
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x089C747Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089C747Cu) goto L_089C747C;
    return;
L_089C747C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    goto L_089C732C;
L_089C7484:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[10] + 0u);
    aot_gpr[31] = (0x089C7494u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0448_entry, 448u, 196u, 0x089C4E30u>(ctx, &aot_mem) && ctx.pc == 0x089C7494u) goto L_089C7494;
    return;
L_089C7494:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
      }
      goto L_089C749C;
    }
L_089C749C:
    aot_gpr[6] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C74A4:
    aot_gpr[6] = (0u | 54502u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C74AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089C74B0;
L_089C74B0:
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(30)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 88u, 0x089C6808u>(ctx, &aot_mem); return;
      }
      goto L_089C74BC;
    }
L_089C74BC:
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089C74A4;
      }
      goto L_089C74C8;
    }
L_089C74C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[6] << 3u);
      if (branch_taken) {
          goto L_089C7710;
      }
      goto L_089C74D0;
    }
L_089C74D0:
    aot_gpr[31] = (0x089C74D8u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 11u, 0x089C605Cu>(ctx, &aot_mem) && ctx.pc == 0x089C74D8u) goto L_089C74D8;
    return;
L_089C74D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u | 54501u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
      }
      goto L_089C74E4;
    }
L_089C74E4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    aot_gpr[4] = (0u | 65535u);
    aot_gpr[5] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C74F8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C74F8u) goto L_089C74F8;
    return;
L_089C74F8:
    aot_gpr[6] = (0u | 54501u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C7500:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 179u, 0x089C6E30u>(ctx, &aot_mem); return;
L_089C7508:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089C750C;
L_089C750C:
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[2]));
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 141u, 0x089C6B8Cu>(ctx, &aot_mem); return;
L_089C7514:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(54)));
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(aot_gpr[2]));
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C7524:
    aot_gpr[2] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(212)));
        (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 167u, 0x089C6D64u>(ctx, &aot_mem); return;
    }
    goto L_089C7538;
L_089C7538:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (0u | 54508u);
        (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
    }
    goto L_089C7548;
L_089C7548:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089C7584u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 194u, 0x089C3F78u>(ctx, &aot_mem) && ctx.pc == 0x089C7584u) goto L_089C7584;
    return;
L_089C7584:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 166u, 0x089C6D60u>(ctx, &aot_mem); return;
      }
      goto L_089C758C;
    }
L_089C758C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2236)));
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 90u, 0x089C6810u>(ctx, &aot_mem); return;
L_089C7594:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089C75A0u);
    aot_gpr[7] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 147u, 0x089C5C1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C75A0u) goto L_089C75A0;
    return;
L_089C75A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 104u, 0x089C6914u>(ctx, &aot_mem); return;
      }
      goto L_089C75A8;
    }
L_089C75A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2236)));
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 90u, 0x089C6810u>(ctx, &aot_mem); return;
L_089C75B0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(164)));
        goto L_089C734C;
    }
    goto L_089C75B8;
L_089C75B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(18)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 88u, 0x089C6808u>(ctx, &aot_mem); return;
      }
      goto L_089C75C4;
    }
L_089C75C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[9] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C75E0u);
    aot_gpr[10] = (aot_gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C75E0u) goto L_089C75E0;
    return;
L_089C75E0:
    aot_gpr[6] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C75E8:
    aot_gpr[31] = (0x089C75F0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 204u, 0x08992EE4u>(ctx, &aot_mem) && ctx.pc == 0x089C75F0u) goto L_089C75F0;
    return;
L_089C75F0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
      if (branch_taken) {
          goto L_089C7678;
      }
      goto L_089C7604;
    }
L_089C7604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089C7614u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 207u, 0x08992F38u>(ctx, &aot_mem) && ctx.pc == 0x089C7614u) goto L_089C7614;
    return;
L_089C7614:
    aot_gpr[6] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C761C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 120u, 0x089C6A08u>(ctx, &aot_mem); return;
L_089C7624:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
      }
      goto L_089C762C;
    }
L_089C762C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_089C7640;
      }
      goto L_089C7638;
    }
L_089C7638:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_089C7640;
L_089C7640:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(220)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[6] = (aot_gpr[20] + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 109u, 0x089C6948u>(ctx, &aot_mem); return;
    }
    goto L_089C7654;
L_089C7654:
    aot_gpr[6] = (0u | 54509u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C765C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(152)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C7670u);
    aot_gpr[5] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7670u) goto L_089C7670;
    return;
L_089C7670:
    aot_gpr[6] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C7678:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[31] = (0x089C7684u);
    aot_gpr[4] = (aot_gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 209u, 0x08992F6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7684u) goto L_089C7684;
    return;
L_089C7684:
    aot_gpr[6] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C768C:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089C732C;
      }
      goto L_089C7694;
    }
L_089C7694:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (0u + 0u);
    aot_gpr[5] = (0u | 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089C7338;
L_089C76AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (0u + 0u);
    aot_gpr[5] = (0u | 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_089C7338;
L_089C76C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 120u, 0x089C6A08u>(ctx, &aot_mem); return;
L_089C76CC:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089C76D8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089C76D8u) goto L_089C76D8;
    return;
L_089C76D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (0u + 0u);
    goto L_089C7338;
L_089C76E8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089C76F4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089C76F4u) goto L_089C76F4;
    return;
L_089C76F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[2] = (aot_gpr[6] & 127u);
    aot_gpr[6] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089C72F4;
L_089C7710:
    aot_gpr[2] = (aot_gpr[6] << 6u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[31] = (0x089C7730u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 137u, 0x089C5AECu>(ctx, &aot_mem) && ctx.pc == 0x089C7730u) goto L_089C7730;
    return;
L_089C7730:
    aot_gpr[6] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 89u, 0x089C680Cu>(ctx, &aot_mem); return;
L_089C7738:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr[31] = (0x089C774Cu);
    aot_gpr[6] = (aot_gpr[20] << 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089C774Cu) goto L_089C774C;
    return;
L_089C774C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (0u + 0u);
    aot_gpr[5] = (0u | 65535u);
    goto L_089C7338;
L_089C775C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[10] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[8] + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
      if (branch_taken) {
          goto L_089C77EC;
      }
      goto L_089C77A4;
    }
L_089C77A4:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089C77B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C77B8u) goto L_089C77B8;
    return;
L_089C77B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[17] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
        goto L_089C77F0;
    }
    goto L_089C77C4;
L_089C77C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C77EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089C77F0;
L_089C77F0:
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[16] << 3u);
      if (branch_taken) {
          goto L_089C7874;
      }
      goto L_089C77FC;
    }
L_089C77FC:
    aot_gpr[16] = (aot_gpr[16] & 65535u);
    goto L_089C7800;
L_089C7800:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089C7808;
L_089C7808:
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089C7814u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 130u, 0x089C29A0u>(ctx, &aot_mem) && ctx.pc == 0x089C7814u) goto L_089C7814;
    return;
L_089C7814:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[9] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089C7834u);
    aot_gpr[10] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 74u, 0x089C66ECu>(ctx, &aot_mem) && ctx.pc == 0x089C7834u) goto L_089C7834;
    return;
L_089C7834:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[20] - aot_gpr[3]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089C77C4;
      }
      goto L_089C7844;
    }
L_089C7844:
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089C7808;
      }
      goto L_089C784C;
    }
L_089C784C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7874:
    aot_gpr[3] = (aot_gpr[16] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[31] = (0x089C7894u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(464));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 162u, 0x08992A80u>(ctx, &aot_mem) && ctx.pc == 0x089C7894u) goto L_089C7894;
    return;
L_089C7894:
    aot_gpr[16] = (aot_gpr[16] & 65535u);
    goto L_089C7800;
L_089C789C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[19]);
    aot_gpr[31] = (0x089C78D4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 147u, 0x089C2BCCu>(ctx, &aot_mem) && ctx.pc == 0x089C78D4u) goto L_089C78D4;
    return;
L_089C78D4:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089C79D4;
      }
      goto L_089C78E8;
    }
L_089C78E8:
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x089C790Cu);
    aot_gpr[18] = (aot_gpr[5] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089C790Cu) goto L_089C790C;
    return;
L_089C790C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C7AFC;
      }
      goto L_089C791C;
    }
L_089C791C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C7938u);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 147u, 0x089C2BCCu>(ctx, &aot_mem) && ctx.pc == 0x089C7938u) goto L_089C7938;
    return;
L_089C7938:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
      if (branch_taken) {
          goto L_089C7AD0;
      }
      goto L_089C7950;
    }
L_089C7950:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C7B04;
      }
      goto L_089C795C;
    }
L_089C795C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[2] = (aot_gpr[3] ^ 2u);
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_089C7A18;
    }
    goto L_089C7970;
L_089C7970:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_089C7A18;
    }
    goto L_089C797C;
L_089C797C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7A24;
      }
      goto L_089C7984;
    }
L_089C7984:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_089C7988;
L_089C7988:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_089C79E8;
      }
      goto L_089C7990;
    }
L_089C7990:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_089C79EC;
      }
      goto L_089C799C;
    }
L_089C799C:
    aot_gpr[31] = (0x089C79A4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 111u, 0x089C3708u>(ctx, &aot_mem) && ctx.pc == 0x089C79A4u) goto L_089C79A4;
    return;
L_089C79A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C79D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C79E8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C79E8u) goto L_089C79E8;
    return;
L_089C79E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    goto L_089C79EC;
L_089C79EC:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7A18:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C797C;
      }
      goto L_089C7A24;
    }
L_089C7A24:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089C7AE4;
      }
      goto L_089C7A2C;
    }
L_089C7A2C:
    aot_gpr[31] = (0x089C7A34u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 162u, 0x089C2CC4u>(ctx, &aot_mem) && ctx.pc == 0x089C7A34u) goto L_089C7A34;
    return;
L_089C7A34:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_089C7988;
    }
    goto L_089C7A3C;
L_089C7A3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(172)));
    goto L_089C7A40;
L_089C7A40:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7A54;
      }
      goto L_089C7A48;
    }
L_089C7A48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C7A54u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7A54u) goto L_089C7A54;
    return;
L_089C7A54:
    if (aot_gpr[23] != aot_gpr[22]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_089C7988;
    }
    goto L_089C7A5C;
L_089C7A5C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(10));
    aot_gpr[31] = (0x089C7A68u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C7A68u) goto L_089C7A68;
    return;
L_089C7A68:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[31] = (0x089C7A7Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 202u, 0x08992E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7A7Cu) goto L_089C7A7C;
    return;
L_089C7A7C:
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(14));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089C7A94u);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 147u, 0x089CCC34u>(ctx, &aot_mem) && ctx.pc == 0x089C7A94u) goto L_089C7A94;
    return;
L_089C7A94:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_089C7988;
    }
    goto L_089C7A9C;
L_089C7A9C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[7]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C7AC8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7AC8u) goto L_089C7AC8;
    return;
L_089C7AC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_089C7988;
L_089C7AD0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[23] == aot_gpr[22];
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089C7B14;
      }
      goto L_089C7ADC;
    }
L_089C7ADC:
    aot_gpr[5] = (0u + 0u);
    goto L_089C795C;
L_089C7AE4:
    aot_gpr[31] = (0x089C7AECu);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 162u, 0x089C2CC4u>(ctx, &aot_mem) && ctx.pc == 0x089C7AECu) goto L_089C7AEC;
    return;
L_089C7AEC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_089C7988;
    }
    goto L_089C7AF4;
L_089C7AF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(172)));
    goto L_089C7A40;
L_089C7AFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(440), aot_gpr[2]);
    goto L_089C791C;
L_089C7B04:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089C795C;
L_089C7B14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(468)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089C7B34;
      }
      goto L_089C7B20;
    }
L_089C7B20:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089C7B34;
L_089C7B34:
    aot_gpr[5] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x089C7B40u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 155u, 0x089C2C30u>(ctx, &aot_mem) && ctx.pc == 0x089C7B40u) goto L_089C7B40;
    return;
L_089C7B40:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_089C7988;
    }
    goto L_089C7B48;
L_089C7B48:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), 0u);
      if (branch_taken) {
          goto L_089C7BD0;
      }
      goto L_089C7B58;
    }
L_089C7B58:
    aot_gpr[19] = (0u + 0u);
    aot_gpr[20] = (0u + 0u);
    goto L_089C7B7C;
L_089C7B64:
    aot_gpr[3] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (aot_gpr[19] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089C7BD4;
      }
      goto L_089C7B7C;
    }
L_089C7B7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[3] = (aot_gpr[20] & 65535u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(584));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C7B64;
      }
      goto L_089C7B94;
    }
L_089C7B94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[23] == aot_gpr[3];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[2]);
      if (branch_taken) {
          goto L_089C7B64;
      }
      goto L_089C7BA4;
    }
L_089C7BA4:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[21] == aot_gpr[3];
    aot_gpr[6] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089C7B64;
      }
      goto L_089C7BB4;
    }
L_089C7BB4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(224)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C7BC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7BC0u) goto L_089C7BC0;
    return;
L_089C7BC0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_089C7988;
    }
    goto L_089C7BC8;
L_089C7BC8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089C7B64;
L_089C7BD0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089C7BD4;
L_089C7BD4:
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089C7BE0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 155u, 0x089C2C30u>(ctx, &aot_mem) && ctx.pc == 0x089C7BE0u) goto L_089C7BE0;
    return;
L_089C7BE0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_089C7988;
    }
    goto L_089C7BE8;
L_089C7BE8:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(100));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089C7BFCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7BFCu) goto L_089C7BFC;
    return;
L_089C7BFC:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089C7C08u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(71));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C7C08u) goto L_089C7C08;
    return;
L_089C7C08:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[31] = (0x089C7C1Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(aot_gpr[3]));
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 40u, 0x089C61D0u>(ctx, &aot_mem) && ctx.pc == 0x089C7C1Cu) goto L_089C7C1C;
    return;
L_089C7C1C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_089C7988;
    }
    goto L_089C7C24;
L_089C7C24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(102), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089C7CCC;
      }
      goto L_089C7C40;
    }
L_089C7C40:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
      if (branch_taken) {
          goto L_089C7CD0;
      }
      goto L_089C7C4C;
    }
L_089C7C4C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(172));
      if (branch_taken) {
          goto L_089C7C70;
      }
      goto L_089C7C5C;
    }
L_089C7C5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(216)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C7C6Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(108));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7C6Cu) goto L_089C7C6C;
    return;
L_089C7C6C:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(172));
    goto L_089C7C70;
L_089C7C70:
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(244));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089C7C88u);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 108u, 0x089CC94Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7C88u) goto L_089C7C88;
    return;
L_089C7C88:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_089C7988;
    }
    goto L_089C7C90;
L_089C7C90:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[7]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C7CBCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7CBCu) goto L_089C7CBC;
    return;
L_089C7CBC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_089C7988;
    }
    goto L_089C7CC4;
L_089C7CC4:
    aot_gpr[5] = (0u + 0u);
    goto L_089C795C;
L_089C7CCC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    goto L_089C7CD0;
L_089C7CD0:
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089C7C4C;
L_089C7CDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[22] = (aot_gpr[9] + 0u);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = aot_gpr[8] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089C7D58;
      }
      goto L_089C7D34;
    }
L_089C7D34:
    if (aot_gpr[4] == 0u) {
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
        goto L_089C7D58;
    }
    goto L_089C7D3C;
L_089C7D3C:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C7E44;
      }
      goto L_089C7D44;
    }
L_089C7D44:
    aot_gpr[31] = (0x089C7D4Cu);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089C7D4Cu) goto L_089C7D4C;
    return;
L_089C7D4C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 54503u);
      if (branch_taken) {
          goto L_089C7D84;
      }
      goto L_089C7D58;
    }
L_089C7D58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7D84:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C7D94u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 137u, 0x089C5AECu>(ctx, &aot_mem) && ctx.pc == 0x089C7D94u) goto L_089C7D94;
    return;
L_089C7D94:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(140), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    aot_gpr[31] = (0x089C7DA8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(104), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 40u, 0x089C61D0u>(ctx, &aot_mem) && ctx.pc == 0x089C7DA8u) goto L_089C7DA8;
    return;
L_089C7DA8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C7D58;
      }
      goto L_089C7DB0;
    }
L_089C7DB0:
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(460), static_cast<std::uint16_t>(aot_gpr[18]));
    { const bool branch_taken = aot_gpr[20] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[22]);
      if (branch_taken) {
          goto L_089C7E4C;
      }
      goto L_089C7DBC;
    }
L_089C7DBC:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C7D58;
      }
      goto L_089C7DC4;
    }
L_089C7DC4:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[16] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089C7D58;
      }
      goto L_089C7DCC;
    }
L_089C7DCC:
    aot_gpr[18] = (0u + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    goto L_089C7DD4;
L_089C7DD4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089C7DE4u);
    aot_gpr[7] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 139u, 0x089CA8C4u>(ctx, &aot_mem) && ctx.pc == 0x089C7DE4u) goto L_089C7DE4;
    return;
L_089C7DE4:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089C7E3C;
      }
      goto L_089C7DF0;
    }
L_089C7DF0:
    { const bool branch_taken = aot_gpr[20] != aot_gpr[18];
    aot_gpr[6] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089C7DD4;
      }
      goto L_089C7DF8;
    }
L_089C7DF8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089C7DFC;
L_089C7DFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (0u | 54509u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    if (aot_gpr[2] == 0u) aot_gpr[3] = (0u);
    goto L_089C7E10;
L_089C7E10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7E3C:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089C7D58;
L_089C7E44:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C7D58;
L_089C7E4C:
    { const bool branch_taken = aot_gpr[22] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C7DFC;
      }
      goto L_089C7E54;
    }
L_089C7E54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u | 54509u);
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    if (aot_gpr[2] == 0u) aot_gpr[3] = (0u);
    goto L_089C7E10;
L_089C7E68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (2217u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089C7ED4;
      }
      goto L_089C7EAC;
    }
L_089C7EAC:
    if (aot_gpr[6] == 0u) {
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
        goto L_089C7ED4;
    }
    goto L_089C7EB4;
L_089C7EB4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089C7F94;
      }
      goto L_089C7EBC;
    }
L_089C7EBC:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089C7EC8u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089C7EC8u) goto L_089C7EC8;
    return;
L_089C7EC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u | 54503u);
      if (branch_taken) {
          goto L_089C7EF8;
      }
      goto L_089C7ED4;
    }
L_089C7ED4:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7EF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(436), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    aot_gpr[31] = (0x089C7F38u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 40u, 0x089C61D0u>(ctx, &aot_mem) && ctx.pc == 0x089C7F38u) goto L_089C7F38;
    return;
L_089C7F38:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C7ED4;
      }
      goto L_089C7F40;
    }
L_089C7F40:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2792)));
      if (branch_taken) {
          goto L_089C7F60;
      }
      goto L_089C7F50;
    }
L_089C7F50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(212)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C7F60u);
    aot_gpr[5] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7F60u) goto L_089C7F60;
    return;
L_089C7F60:
    aot_gpr[31] = (0x089C7F68u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 108u, 0x089C280Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7F68u) goto L_089C7F68;
    return;
L_089C7F68:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089C7ED4;
      }
      goto L_089C7F70;
    }
L_089C7F70:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7F94:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C7ED4;
L_089C7F9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0452_entry, 452u, 15u, 0x089C80B0u>(ctx, &aot_mem); return;
      }
      goto L_089C7FB8;
    }
L_089C7FB8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089C7FE8;
    }
    goto L_089C7FC4;
L_089C7FC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0452_entry, 452u, 16u, 0x089C80C4u>(ctx, &aot_mem); return;
      }
      goto L_089C7FD0;
    }
L_089C7FD0:
    aot_gpr[31] = (0x089C7FD8u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089C7FD8u) goto L_089C7FD8;
    return;
L_089C7FD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C7FE4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089C7FE4u) goto L_089C7FE4;
    return;
L_089C7FE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089C7FE8;
L_089C7FE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0452_entry, 452u, 8u, 0x089C8048u>(ctx, &aot_mem); return;
      }
      goto L_089C7FF4;
    }
L_089C7FF4:
    aot_gpr[17] = (0u + 0u);
    goto L_089C7FF8;
L_089C7FF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    ctx.pc = 0x089C8000u; return;
}

void recomp_unit_0451(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0451_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_451(Runtime &runtime) {
    runtime.register_generated_unit(451u, 0x089C7000u, 4096u, &recomp_unit_0451, &recomp_unit_0451_entry);
    runtime.register_function(0x089C7000u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7008u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7010u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7024u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7034u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7058u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7078u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7084u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C708Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C70A4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C70B4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C70D0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C70E4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C70F0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C712Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7134u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C713Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7154u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C715Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7174u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C717Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7184u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7194u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C71A8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C71D0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7210u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7218u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7224u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C725Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7264u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7284u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7294u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C729Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C72A0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C72BCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C72C4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C72CCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C72D4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C72E0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C72F4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7304u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7314u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7320u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7328u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C732Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7338u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7348u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C734Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7354u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7374u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C737Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7388u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7398u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C73A8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C73B0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C73C0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C73CCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C73D8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C73E4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C73F0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C73FCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7404u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7410u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C741Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7424u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7434u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C744Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7458u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C747Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7484u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7494u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C749Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C74A4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C74ACu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C74B0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C74BCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C74C8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C74D0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C74D8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C74E4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C74F8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7500u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7508u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C750Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7514u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7524u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7538u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7548u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7584u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C758Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7594u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C75A0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C75A8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C75B0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C75B8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C75C4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C75E0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C75E8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C75F0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7604u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7614u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C761Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7624u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C762Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7638u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7640u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7654u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C765Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7670u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7678u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7684u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C768Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7694u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C76ACu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C76C4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C76CCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C76D8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C76E8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C76F4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7710u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7730u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7738u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C774Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C775Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C77A4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C77B8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C77C4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C77ECu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C77F0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C77FCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7800u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7808u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7814u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7834u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7844u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C784Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7874u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7894u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C789Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C78D4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C78E8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C790Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C791Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7938u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7950u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C795Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7970u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C797Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7984u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7988u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7990u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C799Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C79A4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C79D4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C79E8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C79ECu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7A18u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7A24u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7A2Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7A34u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7A3Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7A40u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7A48u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7A54u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7A5Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7A68u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7A7Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7A94u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7A9Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7AC8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7AD0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7ADCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7AE4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7AECu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7AF4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7AFCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7B04u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7B14u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7B20u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7B34u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7B40u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7B48u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7B58u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7B64u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7B7Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7B94u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7BA4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7BB4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7BC0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7BC8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7BD0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7BD4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7BE0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7BE8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7BFCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7C08u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7C1Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7C24u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7C40u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7C4Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7C5Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7C6Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7C70u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7C88u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7C90u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7CBCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7CC4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7CCCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7CD0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7CDCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7D34u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7D3Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7D44u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7D4Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7D58u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7D84u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7D94u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7DA8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7DB0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7DBCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7DC4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7DCCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7DD4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7DE4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7DF0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7DF8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7DFCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7E10u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7E3Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7E44u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7E4Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7E54u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7E68u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7EACu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7EB4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7EBCu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7EC8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7ED4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7EF8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7F38u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7F40u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7F50u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7F60u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7F68u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7F70u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7F94u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7F9Cu, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7FB8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7FC4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7FD0u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7FD8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7FE4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7FE8u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7FF4u, &recomp_unit_0451, "recomp_unit_0451");
    runtime.register_function(0x089C7FF8u, &recomp_unit_0451, "recomp_unit_0451");
}
} // namespace psprecomp
