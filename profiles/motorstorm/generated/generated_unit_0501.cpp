#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0501[1024] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0,
    15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 24,
    0, 25, 0, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 35, 36, 0, 37, 0,
    0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0,
    42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0,
    0, 50, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 56, 0, 57, 0, 0, 58, 0, 0,
    0, 0, 0, 59, 0, 0, 60, 0, 61, 62, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 68,
    0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 75, 0, 76, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 80, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 84, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 91, 0,
    0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 95, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 108, 0, 0,
    109, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    115, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0,
    122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 140, 0, 141,
    0, 0, 0, 0, 0, 142, 143, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148,
    0, 149, 0, 0, 0, 0, 0, 150, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 156,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 163, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 172, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0,
    0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0,
    187, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 200,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0,
    210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219, 0, 0, 220, 0, 221, 0, 0, 222, 0, 223, 0, 0, 224, 225, 0, 226, 0, 227,
};
void recomp_unit_0501_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089F9000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0501[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F9000;
    case 2u: goto L_089F900C;
    case 3u: goto L_089F9020;
    case 4u: goto L_089F9044;
    case 5u: goto L_089F9060;
    case 6u: goto L_089F9074;
    case 7u: goto L_089F909C;
    case 8u: goto L_089F90AC;
    case 9u: goto L_089F90B4;
    case 10u: goto L_089F90CC;
    case 11u: goto L_089F90D4;
    case 12u: goto L_089F90DC;
    case 13u: goto L_089F90E4;
    case 14u: goto L_089F90F8;
    case 15u: goto L_089F9100;
    case 16u: goto L_089F9114;
    case 17u: goto L_089F911C;
    case 18u: goto L_089F913C;
    case 19u: goto L_089F9144;
    case 20u: goto L_089F9150;
    case 21u: goto L_089F915C;
    case 22u: goto L_089F9168;
    case 23u: goto L_089F9174;
    case 24u: goto L_089F917C;
    case 25u: goto L_089F9184;
    case 26u: goto L_089F9190;
    case 27u: goto L_089F9198;
    case 28u: goto L_089F91A0;
    case 29u: goto L_089F91A8;
    case 30u: goto L_089F91B0;
    case 31u: goto L_089F91B8;
    case 32u: goto L_089F91C0;
    case 33u: goto L_089F91D8;
    case 34u: goto L_089F91E4;
    case 35u: goto L_089F91EC;
    case 36u: goto L_089F91F0;
    case 37u: goto L_089F91F8;
    case 38u: goto L_089F9204;
    case 39u: goto L_089F9214;
    case 40u: goto L_089F9268;
    case 41u: goto L_089F9274;
    case 42u: goto L_089F9280;
    case 43u: goto L_089F9290;
    case 44u: goto L_089F929C;
    case 45u: goto L_089F92A8;
    case 46u: goto L_089F92B0;
    case 47u: goto L_089F92E4;
    case 48u: goto L_089F92EC;
    case 49u: goto L_089F92F8;
    case 50u: goto L_089F9304;
    case 51u: goto L_089F9308;
    case 52u: goto L_089F9310;
    case 53u: goto L_089F9318;
    case 54u: goto L_089F934C;
    case 55u: goto L_089F935C;
    case 56u: goto L_089F9360;
    case 57u: goto L_089F9368;
    case 58u: goto L_089F9374;
    case 59u: goto L_089F938C;
    case 60u: goto L_089F9398;
    case 61u: goto L_089F93A0;
    case 62u: goto L_089F93A4;
    case 63u: goto L_089F93AC;
    case 64u: goto L_089F93B8;
    case 65u: goto L_089F93D4;
    case 66u: goto L_089F93DC;
    case 67u: goto L_089F93E4;
    case 68u: goto L_089F93FC;
    case 69u: goto L_089F9408;
    case 70u: goto L_089F9410;
    case 71u: goto L_089F9444;
    case 72u: goto L_089F9450;
    case 73u: goto L_089F945C;
    case 74u: goto L_089F9468;
    case 75u: goto L_089F946C;
    case 76u: goto L_089F9474;
    case 77u: goto L_089F947C;
    case 78u: goto L_089F94B0;
    case 79u: goto L_089F94C0;
    case 80u: goto L_089F94C4;
    case 81u: goto L_089F94CC;
    case 82u: goto L_089F94D4;
    case 83u: goto L_089F94FC;
    case 84u: goto L_089F9504;
    case 85u: goto L_089F9510;
    case 86u: goto L_089F9518;
    case 87u: goto L_089F954C;
    case 88u: goto L_089F9558;
    case 89u: goto L_089F9568;
    case 90u: goto L_089F9570;
    case 91u: goto L_089F9578;
    case 92u: goto L_089F9584;
    case 93u: goto L_089F958C;
    case 94u: goto L_089F95C0;
    case 95u: goto L_089F95C4;
    case 96u: goto L_089F95CC;
    case 97u: goto L_089F95DC;
    case 98u: goto L_089F95E4;
    case 99u: goto L_089F9604;
    case 100u: goto L_089F960C;
    case 101u: goto L_089F9640;
    case 102u: goto L_089F964C;
    case 103u: goto L_089F9660;
    case 104u: goto L_089F9668;
    case 105u: goto L_089F969C;
    case 106u: goto L_089F96E0;
    case 107u: goto L_089F96EC;
    case 108u: goto L_089F96F4;
    case 109u: goto L_089F9700;
    case 110u: goto L_089F9708;
    case 111u: goto L_089F971C;
    case 112u: goto L_089F9750;
    case 113u: goto L_089F9758;
    case 114u: goto L_089F9768;
    case 115u: goto L_089F9780;
    case 116u: goto L_089F9788;
    case 117u: goto L_089F9790;
    case 118u: goto L_089F97A4;
    case 119u: goto L_089F97D8;
    case 120u: goto L_089F97E4;
    case 121u: goto L_089F97F8;
    case 122u: goto L_089F9800;
    case 123u: goto L_089F9810;
    case 124u: goto L_089F9818;
    case 125u: goto L_089F982C;
    case 126u: goto L_089F9860;
    case 127u: goto L_089F9874;
    case 128u: goto L_089F9888;
    case 129u: goto L_089F98A0;
    case 130u: goto L_089F98CC;
    case 131u: goto L_089F98DC;
    case 132u: goto L_089F98F0;
    case 133u: goto L_089F9908;
    case 134u: goto L_089F9918;
    case 135u: goto L_089F9928;
    case 136u: goto L_089F9948;
    case 137u: goto L_089F9950;
    case 138u: goto L_089F9960;
    case 139u: goto L_089F9968;
    case 140u: goto L_089F9974;
    case 141u: goto L_089F997C;
    case 142u: goto L_089F9994;
    case 143u: goto L_089F9998;
    case 144u: goto L_089F99A4;
    case 145u: goto L_089F99AC;
    case 146u: goto L_089F99E0;
    case 147u: goto L_089F99E8;
    case 148u: goto L_089F99FC;
    case 149u: goto L_089F9A04;
    case 150u: goto L_089F9A1C;
    case 151u: goto L_089F9A20;
    case 152u: goto L_089F9A2C;
    case 153u: goto L_089F9A34;
    case 154u: goto L_089F9A68;
    case 155u: goto L_089F9A74;
    case 156u: goto L_089F9A7C;
    case 157u: goto L_089F9AB0;
    case 158u: goto L_089F9AB8;
    case 159u: goto L_089F9ACC;
    case 160u: goto L_089F9AD8;
    case 161u: goto L_089F9AE4;
    case 162u: goto L_089F9AF0;
    case 163u: goto L_089F9AF8;
    case 164u: goto L_089F9B2C;
    case 165u: goto L_089F9B3C;
    case 166u: goto L_089F9B44;
    case 167u: goto L_089F9B58;
    case 168u: goto L_089F9B60;
    case 169u: goto L_089F9B94;
    case 170u: goto L_089F9B9C;
    case 171u: goto L_089F9BB4;
    case 172u: goto L_089F9BB8;
    case 173u: goto L_089F9BC4;
    case 174u: goto L_089F9BCC;
    case 175u: goto L_089F9C00;
    case 176u: goto L_089F9C0C;
    case 177u: goto L_089F9C20;
    case 178u: goto L_089F9C50;
    case 179u: goto L_089F9C5C;
    case 180u: goto L_089F9C64;
    case 181u: goto L_089F9C74;
    case 182u: goto L_089F9C84;
    case 183u: goto L_089F9C8C;
    case 184u: goto L_089F9CC0;
    case 185u: goto L_089F9CEC;
    case 186u: goto L_089F9CF4;
    case 187u: goto L_089F9D00;
    case 188u: goto L_089F9D10;
    case 189u: goto L_089F9D24;
    case 190u: goto L_089F9D44;
    case 191u: goto L_089F9D50;
    case 192u: goto L_089F9D58;
    case 193u: goto L_089F9D8C;
    case 194u: goto L_089F9D98;
    case 195u: goto L_089F9DA4;
    case 196u: goto L_089F9DB8;
    case 197u: goto L_089F9DC8;
    case 198u: goto L_089F9DE4;
    case 199u: goto L_089F9DF4;
    case 200u: goto L_089F9DFC;
    case 201u: goto L_089F9E30;
    case 202u: goto L_089F9E38;
    case 203u: goto L_089F9E40;
    case 204u: goto L_089F9E50;
    case 205u: goto L_089F9E58;
    case 206u: goto L_089F9E8C;
    case 207u: goto L_089F9ED8;
    case 208u: goto L_089F9EE8;
    case 209u: goto L_089F9EF4;
    case 210u: goto L_089F9F00;
    case 211u: goto L_089F9F10;
    case 212u: goto L_089F9F2C;
    case 213u: goto L_089F9F30;
    case 214u: goto L_089F9F44;
    case 215u: goto L_089F9F6C;
    case 216u: goto L_089F9F80;
    case 217u: goto L_089F9F9C;
    case 218u: goto L_089F9FAC;
    case 219u: goto L_089F9FB4;
    case 220u: goto L_089F9FC0;
    case 221u: goto L_089F9FC8;
    case 222u: goto L_089F9FD4;
    case 223u: goto L_089F9FDC;
    case 224u: goto L_089F9FE8;
    case 225u: goto L_089F9FEC;
    case 226u: goto L_089F9FF4;
    case 227u: goto L_089F9FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F9000:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F900Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_089F9044;
L_089F900C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(60));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    goto L_089F9020;
L_089F9020:
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
L_089F9044:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[15]) < 1 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9204;
      }
      goto L_089F9060;
    }
L_089F9060:
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[24] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089F91F8;
      }
      goto L_089F9074;
    }
L_089F9074:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[3] = (0u | 10u);
    aot_gpr[2] = (0u | 13u);
    aot_gpr[12] = (0u | 239u);
    aot_gpr[11] = (0u | 1u);
    aot_gpr[10] = (0u | 187u);
    aot_gpr[9] = (0u | 191u);
    aot_gpr[8] = (0u | 190u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-9792));
    aot_gpr[25] = (aot_gpr[24] | 0u);
    goto L_089F909C;
L_089F909C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[25] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (static_cast<std::int32_t>(aot_gpr[16]) < 14 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F90CC;
      }
      goto L_089F90AC;
    }
L_089F90AC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089F91B8;
      }
      goto L_089F90B4;
    }
L_089F90B4:
    aot_gpr[16] = (aot_gpr[16] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[16]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-8616)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F90CC:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[12];
    // nop
      if (branch_taken) {
          goto L_089F913C;
      }
      goto L_089F90D4;
    }
L_089F90D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F91B8;
      }
      goto L_089F90DC;
    }
L_089F90DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9204;
      }
      goto L_089F90E4;
    }
L_089F90E4:
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
    aot_gpr[25] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[24] + static_cast<std::uint32_t>(0))))));
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[25] != aot_gpr[3];
    aot_gpr[13] = (0u | 0u);
      if (branch_taken) {
          goto L_089F91EC;
      }
      goto L_089F90F8;
    }
L_089F90F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F91EC;
      }
      goto L_089F9100;
    }
L_089F9100:
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
    aot_gpr[25] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[24] + static_cast<std::uint32_t>(0))))));
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[25] != aot_gpr[2];
    aot_gpr[13] = (0u | 0u);
      if (branch_taken) {
          goto L_089F91EC;
      }
      goto L_089F9114;
    }
L_089F9114:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F91EC;
      }
      goto L_089F911C;
    }
L_089F911C:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[13]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[15]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[13] = (ctx.lo);
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[13] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F91EC;
      }
      goto L_089F913C;
    }
L_089F913C:
    if (aot_gpr[6] != aot_gpr[11]) {
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
        goto L_089F91B0;
    }
    goto L_089F9144;
L_089F9144:
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[24] + static_cast<std::uint32_t>(1))))));
    if (aot_gpr[16] == 0u) {
    aot_gpr[25] = (aot_gpr[24] < aot_gpr[5] ? 1u : 0u);
        goto L_089F91F0;
    }
    goto L_089F9150;
L_089F9150:
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[24] + static_cast<std::uint32_t>(2))))));
    if (aot_gpr[16] == 0u) {
    aot_gpr[25] = (aot_gpr[24] < aot_gpr[5] ? 1u : 0u);
        goto L_089F91F0;
    }
    goto L_089F915C;
L_089F915C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[25] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[10];
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089F917C;
      }
      goto L_089F9168;
    }
L_089F9168:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[25] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_089F917C;
      }
      goto L_089F9174;
    }
L_089F9174:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[25] = (aot_gpr[24] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089F91F0;
      }
      goto L_089F917C;
    }
L_089F917C:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_089F91A8;
      }
      goto L_089F9184;
    }
L_089F9184:
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD8(aot_gpr[25] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[25] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_089F9198;
      }
      goto L_089F9190;
    }
L_089F9190:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[25] = (aot_gpr[24] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089F91F0;
      }
      goto L_089F9198;
    }
L_089F9198:
    { const bool branch_taken = aot_gpr[25] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_089F91A8;
      }
      goto L_089F91A0;
    }
L_089F91A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[25] = (aot_gpr[24] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089F91F0;
      }
      goto L_089F91A8;
    }
L_089F91A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F91EC;
      }
      goto L_089F91B0;
    }
L_089F91B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F91EC;
      }
      goto L_089F91B8;
    }
L_089F91B8:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[11];
    aot_gpr[25] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F91E4;
      }
      goto L_089F91C0;
    }
L_089F91C0:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[24] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[13] << 2u);
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[7]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[13] == 0u) {
    aot_gpr[13] = (aot_gpr[11] | 0u);
        goto L_089F91D8;
    }
    goto L_089F91D8;
L_089F91D8:
    aot_gpr[24] = (aot_gpr[24] + aot_gpr[13]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[13] = (aot_gpr[25] | 0u);
      if (branch_taken) {
          goto L_089F91EC;
      }
      goto L_089F91E4;
    }
L_089F91E4:
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
    aot_gpr[13] = (aot_gpr[25] | 0u);
    goto L_089F91EC;
L_089F91EC:
    aot_gpr[25] = (aot_gpr[24] < aot_gpr[5] ? 1u : 0u);
    goto L_089F91F0;
L_089F91F0:
    { const bool branch_taken = aot_gpr[25] != 0u;
    aot_gpr[25] = (aot_gpr[24] | 0u);
      if (branch_taken) {
          goto L_089F909C;
      }
      goto L_089F91F8;
    }
L_089F91F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[24]);
    goto L_089F9204;
L_089F9204:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9214:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-18744));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(1))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[5] | 0u);
    aot_gpr[23] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
      if (branch_taken) {
          goto L_089F95C0;
      }
      goto L_089F9268;
    }
L_089F9268:
    aot_gpr[18] = (0u | 35u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    aot_gpr[17] = (2216u << 16u);
      if (branch_taken) {
          goto L_089F95C4;
      }
      goto L_089F9274;
    }
L_089F9274:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2216u << 16u);
      if (branch_taken) {
          goto L_089F95C4;
      }
      goto L_089F9280;
    }
L_089F9280:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[19] = (0u | 120u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089F9444;
      }
      goto L_089F9290;
    }
L_089F9290:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089F92E4;
      }
      goto L_089F929C;
    }
L_089F929C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_089F92B0;
      }
      goto L_089F92A8;
    }
L_089F92A8:
    aot_gpr[31] = (0x089F92B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F92B0u) goto L_089F92B0;
    return;
L_089F92B0:
    aot_gpr[2] = (0u | 0u);
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
L_089F92E4:
    aot_gpr[31] = (0x089F92ECu);
    aot_gpr[5] = (0u | 59u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x089F92ECu) goto L_089F92EC;
    return;
L_089F92EC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089F9308;
    }
    goto L_089F92F8;
L_089F92F8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[22] = (aot_gpr[4] - aot_gpr[20]);
      if (branch_taken) {
          goto L_089F934C;
      }
      goto L_089F9304;
    }
L_089F9304:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089F9308;
L_089F9308:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_089F9318;
      }
      goto L_089F9310;
    }
L_089F9310:
    aot_gpr[31] = (0x089F9318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F9318u) goto L_089F9318;
    return;
L_089F9318:
    aot_gpr[2] = (0u | 0u);
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
L_089F934C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[5] == aot_gpr[19]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_089F954C;
    }
    goto L_089F935C;
L_089F935C:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 48 ? 1u : 0u);
    goto L_089F9360;
L_089F9360:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 97 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F93A4;
      }
      goto L_089F9368;
    }
L_089F9368:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 58 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 97 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F93A4;
      }
      goto L_089F9374;
    }
L_089F9374:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-48));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[16] << 4u);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[5]);
    goto L_089F938C;
L_089F938C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[19];
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F9360;
      }
      goto L_089F9398;
    }
L_089F9398:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089F954C;
      }
      goto L_089F93A0;
    }
L_089F93A0:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 97 ? 1u : 0u);
    goto L_089F93A4;
L_089F93A4:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F93D4;
      }
      goto L_089F93AC;
    }
L_089F93AC:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 103 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F93D4;
      }
      goto L_089F93B8;
    }
L_089F93B8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-87));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[16] << 4u);
    aot_gpr[5] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[5]);
      if (branch_taken) {
          goto L_089F938C;
      }
      goto L_089F93D4;
    }
L_089F93D4:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 71 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F93FC;
      }
      goto L_089F93DC;
    }
L_089F93DC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-55));
      if (branch_taken) {
          goto L_089F93FC;
      }
      goto L_089F93E4;
    }
L_089F93E4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[16] << 4u);
    aot_gpr[5] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[5]);
      if (branch_taken) {
          goto L_089F938C;
      }
      goto L_089F93FC;
    }
L_089F93FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_089F9410;
      }
      goto L_089F9408;
    }
L_089F9408:
    aot_gpr[31] = (0x089F9410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F9410u) goto L_089F9410;
    return;
L_089F9410:
    aot_gpr[2] = (0u | 0u);
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
L_089F9444:
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089F9450u);
    aot_gpr[5] = (0u | 59u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x089F9450u) goto L_089F9450;
    return;
L_089F9450:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089F946C;
    }
    goto L_089F945C;
L_089F945C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[22] = (aot_gpr[4] - aot_gpr[20]);
      if (branch_taken) {
          goto L_089F94B0;
      }
      goto L_089F9468;
    }
L_089F9468:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089F946C;
L_089F946C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_089F947C;
      }
      goto L_089F9474;
    }
L_089F9474:
    aot_gpr[31] = (0x089F947Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F947Cu) goto L_089F947C;
    return;
L_089F947C:
    aot_gpr[2] = (0u | 0u);
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
L_089F94B0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[5] == aot_gpr[18]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_089F954C;
    }
    goto L_089F94C0;
L_089F94C0:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 48 ? 1u : 0u);
    goto L_089F94C4;
L_089F94C4:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F9504;
      }
      goto L_089F94CC;
    }
L_089F94CC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_089F9504;
      }
      goto L_089F94D4;
    }
L_089F94D4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (aot_gpr[16] << 3u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (ctx.lo);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[18];
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F94C4;
      }
      goto L_089F94FC;
    }
L_089F94FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089F954C;
      }
      goto L_089F9504;
    }
L_089F9504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_089F9518;
      }
      goto L_089F9510;
    }
L_089F9510:
    aot_gpr[31] = (0x089F9518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F9518u) goto L_089F9518;
    return;
L_089F9518:
    aot_gpr[2] = (0u | 0u);
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
L_089F954C:
    aot_gpr[4] = (0u | 1u);
    if (aot_gpr[5] != aot_gpr[4]) {
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[17]));
        goto L_089F9570;
    }
    goto L_089F9558;
L_089F9558:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089F9568u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 181u, 0x089F7AB4u>(ctx, &aot_mem) && ctx.pc == 0x089F9568u) goto L_089F9568;
    return;
L_089F9568:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F9578;
      }
      goto L_089F9570;
    }
L_089F9570:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089F9578;
L_089F9578:
    aot_gpr[20] = (aot_gpr[22] + aot_gpr[20]);
    { const bool branch_taken = aot_gpr[30] == aot_gpr[21];
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F958C;
      }
      goto L_089F9584;
    }
L_089F9584:
    aot_gpr[31] = (0x089F958Cu);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F958Cu) goto L_089F958C;
    return;
L_089F958C:
    aot_gpr[2] = (aot_gpr[20] | 0u);
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
L_089F95C0:
    aot_gpr[17] = (2216u << 16u);
    goto L_089F95C4;
L_089F95C4:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-18728));
    goto L_089F95CC;
L_089F95CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089F95DCu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089F95DCu) goto L_089F95DC;
    return;
L_089F95DC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F9640;
      }
      goto L_089F95E4;
    }
L_089F95E4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8))))));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[5]);
      if (branch_taken) {
          goto L_089F960C;
      }
      goto L_089F9604;
    }
L_089F9604:
    aot_gpr[31] = (0x089F960Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F960Cu) goto L_089F960C;
    return;
L_089F960C:
    aot_gpr[2] = (aot_gpr[20] | 0u);
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
L_089F9640:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F95CC;
      }
      goto L_089F964C;
    }
L_089F964C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F9668;
      }
      goto L_089F9660;
    }
L_089F9660:
    aot_gpr[31] = (0x089F9668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F9668u) goto L_089F9668;
    return;
L_089F9668:
    aot_gpr[2] = (aot_gpr[20] | 0u);
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
L_089F969C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[31] = (0x089F96E0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 29u, 0x089F7298u>(ctx, &aot_mem) && ctx.pc == 0x089F96E0u) goto L_089F96E0;
    return;
L_089F96E0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F96ECu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 250u, 0x089F4FA4u>(ctx, &aot_mem) && ctx.pc == 0x089F96ECu) goto L_089F96EC;
    return;
L_089F96EC:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F9700;
      }
      goto L_089F96F4;
    }
L_089F96F4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9750;
      }
      goto L_089F9700;
    }
L_089F9700:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F971C;
      }
      goto L_089F9708;
    }
L_089F9708:
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089F971Cu);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089F971Cu) goto L_089F971C;
    return;
L_089F971C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9750:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[5] = (0u | 60u);
      if (branch_taken) {
          goto L_089F9780;
      }
      goto L_089F9758;
    }
L_089F9758:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F9768u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    goto L_089F9044;
L_089F9768:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 60u);
    goto L_089F9780;
L_089F9780:
    if (aot_gpr[4] == aot_gpr[5]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
        goto L_089F97D8;
    }
    goto L_089F9788;
L_089F9788:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F97A4;
      }
      goto L_089F9790;
    }
L_089F9790:
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F97A4u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089F97A4u) goto L_089F97A4;
    return;
L_089F97A4:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F97D8:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089F97E4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 29u, 0x089F7298u>(ctx, &aot_mem) && ctx.pc == 0x089F97E4u) goto L_089F97E4;
    return;
L_089F97E4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F97F8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 59u, 0x089F742Cu>(ctx, &aot_mem) && ctx.pc == 0x089F97F8u) goto L_089F97F8;
    return;
L_089F97F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F9810;
      }
      goto L_089F9800;
    }
L_089F9800:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
      if (branch_taken) {
          goto L_089F9860;
      }
      goto L_089F9810;
    }
L_089F9810:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F982C;
      }
      goto L_089F9818;
    }
L_089F9818:
    aot_gpr[5] = (0u | 5u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F982Cu);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089F982Cu) goto L_089F982C;
    return;
L_089F982C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9860:
    aot_gpr[30] = (2215u << 16u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-8684));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x089F9874u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F9874u) goto L_089F9874;
    return;
L_089F9874:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18744));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089F98CC;
      }
      goto L_089F9888;
    }
L_089F9888:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    aot_gpr[31] = (0x089F98A0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 32u, 0x089FA23Cu>(ctx, &aot_mem) && ctx.pc == 0x089F98A0u) goto L_089F98A0;
    return;
L_089F98A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F98DC;
      }
      goto L_089F98CC;
    }
L_089F98CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    goto L_089F98DC;
L_089F98DC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[31] = (0x089F98F0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F98F0u) goto L_089F98F0;
    return;
L_089F98F0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F9908u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F9908u) goto L_089F9908;
    return;
L_089F9908:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-8636));
    aot_gpr[31] = (0x089F9918u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F9918u) goto L_089F9918;
    return;
L_089F9918:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F9928u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F9928u) goto L_089F9928;
    return;
L_089F9928:
    aot_gpr[23] = (2216u << 16u);
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[30] = (0u | 47u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(44));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(26144));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(10984));
    goto L_089F9948;
L_089F9948:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089F9E40;
      }
      goto L_089F9950;
    }
L_089F9950:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F9960u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 29u, 0x089F7298u>(ctx, &aot_mem) && ctx.pc == 0x089F9960u) goto L_089F9960;
    return;
L_089F9960:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F9974;
      }
      goto L_089F9968;
    }
L_089F9968:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F99E0;
      }
      goto L_089F9974;
    }
L_089F9974:
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089F9998;
    }
    goto L_089F997C;
L_089F997C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 7u);
    aot_gpr[31] = (0x089F9994u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089F9994u) goto L_089F9994;
    return;
L_089F9994:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089F9998;
L_089F9998:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F99AC;
      }
      goto L_089F99A4;
    }
L_089F99A4:
    aot_gpr[31] = (0x089F99ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F99ACu) goto L_089F99AC;
    return;
L_089F99AC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F99E0:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[30];
    aot_gpr[5] = (0u | 62u);
      if (branch_taken) {
          goto L_089F9AB0;
      }
      goto L_089F99E8;
    }
L_089F99E8:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 62u);
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089F9A68;
    }
    goto L_089F99FC;
L_089F99FC:
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089F9A20;
    }
    goto L_089F9A04;
L_089F9A04:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[31] = (0x089F9A1Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089F9A1Cu) goto L_089F9A1C;
    return;
L_089F9A1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089F9A20;
L_089F9A20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F9A34;
      }
      goto L_089F9A2C;
    }
L_089F9A2C:
    aot_gpr[31] = (0x089F9A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F9A34u) goto L_089F9A34;
    return;
L_089F9A34:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9A68:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F9A7C;
      }
      goto L_089F9A74;
    }
L_089F9A74:
    aot_gpr[31] = (0x089F9A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F9A7Cu) goto L_089F9A7C;
    return;
L_089F9A7C:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9AB0:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
      if (branch_taken) {
          goto L_089F9C00;
      }
      goto L_089F9AB8;
    }
L_089F9AB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089F9ACCu);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 38u, 0x089F8248u>(ctx, &aot_mem) && ctx.pc == 0x089F9ACCu) goto L_089F9ACC;
    return;
L_089F9ACC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F9AE4;
      }
      goto L_089F9AD8;
    }
L_089F9AD8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F9B2C;
      }
      goto L_089F9AE4;
    }
L_089F9AE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F9AF8;
      }
      goto L_089F9AF0;
    }
L_089F9AF0:
    aot_gpr[31] = (0x089F9AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F9AF8u) goto L_089F9AF8;
    return;
L_089F9AF8:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9B2C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F9B3Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 142u, 0x089F7900u>(ctx, &aot_mem) && ctx.pc == 0x089F9B3Cu) goto L_089F9B3C;
    return;
L_089F9B3C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9B94;
      }
      goto L_089F9B44;
    }
L_089F9B44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[6]);
      if (branch_taken) {
          goto L_089F9B60;
      }
      goto L_089F9B58;
    }
L_089F9B58:
    aot_gpr[31] = (0x089F9B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F9B60u) goto L_089F9B60;
    return;
L_089F9B60:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9B94:
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089F9BB8;
    }
    goto L_089F9B9C;
L_089F9B9C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 9u);
    aot_gpr[31] = (0x089F9BB4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089F9BB4u) goto L_089F9BB4;
    return;
L_089F9BB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089F9BB8;
L_089F9BB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F9BCC;
      }
      goto L_089F9BC4;
    }
L_089F9BC4:
    aot_gpr[31] = (0x089F9BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F9BCCu) goto L_089F9BCC;
    return;
L_089F9BCC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9C00:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x089F9C0Cu);
    aot_gpr[4] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F9C0Cu) goto L_089F9C0C;
    return;
L_089F9C0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089F9C50;
      }
      goto L_089F9C20;
    }
L_089F9C20:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[23]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_089F9C50;
L_089F9C50:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089F9CC0;
    }
    goto L_089F9C5C;
L_089F9C5C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[8] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F9C74;
      }
      goto L_089F9C64;
    }
L_089F9C64:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x089F9C74u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089F9C74u) goto L_089F9C74;
    return;
L_089F9C74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F9C8C;
      }
      goto L_089F9C84;
    }
L_089F9C84:
    aot_gpr[31] = (0x089F9C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F9C8Cu) goto L_089F9C8C;
    return;
L_089F9C8C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9CC0:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x089F9CECu);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F9CECu) goto L_089F9CEC;
    return;
L_089F9CEC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F9D00;
      }
      goto L_089F9CF4;
    }
L_089F9CF4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_089F9D8C;
    }
    goto L_089F9D00;
L_089F9D00:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089F9D24;
      }
      goto L_089F9D10;
    }
L_089F9D10:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x089F9D24u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089F9D24u) goto L_089F9D24;
    return;
L_089F9D24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F9D44u);
    aot_gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F9D44u) goto L_089F9D44;
    return;
L_089F9D44:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_089F9D58;
      }
      goto L_089F9D50;
    }
L_089F9D50:
    aot_gpr[31] = (0x089F9D58u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F9D58u) goto L_089F9D58;
    return;
L_089F9D58:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9D8C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F9D98u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 66u, 0x089F548Cu>(ctx, &aot_mem) && ctx.pc == 0x089F9D98u) goto L_089F9D98;
    return;
L_089F9D98:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[20] | 0u);
        goto L_089F9E30;
    }
    goto L_089F9DA4;
L_089F9DA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F9DB8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F9DB8u) goto L_089F9DB8;
    return;
L_089F9DB8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F9DC8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F9DC8u) goto L_089F9DC8;
    return;
L_089F9DC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F9DE4u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F9DE4u) goto L_089F9DE4;
    return;
L_089F9DE4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_089F9DFC;
      }
      goto L_089F9DF4;
    }
L_089F9DF4:
    aot_gpr[31] = (0x089F9DFCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F9DFCu) goto L_089F9DFC;
    return;
L_089F9DFC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9E30:
    aot_gpr[31] = (0x089F9E38u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 60u, 0x089F5430u>(ctx, &aot_mem) && ctx.pc == 0x089F9E38u) goto L_089F9E38;
    return;
L_089F9E38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089F9948;
      }
      goto L_089F9E40;
    }
L_089F9E40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F9E58;
      }
      goto L_089F9E50;
    }
L_089F9E50:
    aot_gpr[31] = (0x089F9E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F9E58u) goto L_089F9E58;
    return;
L_089F9E58:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9E8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-8728));
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x089F9ED8u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F9ED8u) goto L_089F9ED8;
    return;
L_089F9ED8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089F9EE8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F9EE8u) goto L_089F9EE8;
    return;
L_089F9EE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
      if (branch_taken) {
          goto L_089F9F2C;
      }
      goto L_089F9EF4;
    }
L_089F9EF4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F9F30;
      }
      goto L_089F9F00;
    }
L_089F9F00:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_089F9F6C;
      }
      goto L_089F9F10;
    }
L_089F9F10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[18]);
      if (branch_taken) {
          goto L_089F9F80;
      }
      goto L_089F9F2C;
    }
L_089F9F2C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F9F30;
L_089F9F30:
    aot_gpr[5] = (0u | 13u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089F9F44u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089F9F44u) goto L_089F9F44;
    return;
L_089F9F44:
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
L_089F9F6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_089F9F80;
L_089F9F80:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[19] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[18]);
      if (branch_taken) {
          goto L_089F9FE8;
      }
      goto L_089F9F9C;
    }
L_089F9F9C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u | 239u);
      if (branch_taken) {
          goto L_089F9FE8;
      }
      goto L_089F9FAC;
    }
L_089F9FAC:
    if (aot_gpr[5] != aot_gpr[6]) {
    aot_gpr[4] = (aot_gpr[17] | 0u);
        goto L_089F9FEC;
    }
    goto L_089F9FB4;
L_089F9FB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u | 187u);
      if (branch_taken) {
          goto L_089F9FE8;
      }
      goto L_089F9FC0;
    }
L_089F9FC0:
    if (aot_gpr[5] != aot_gpr[6]) {
    aot_gpr[4] = (aot_gpr[17] | 0u);
        goto L_089F9FEC;
    }
    goto L_089F9FC8;
L_089F9FC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 191u);
      if (branch_taken) {
          goto L_089F9FE8;
      }
      goto L_089F9FD4;
    }
L_089F9FD4:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F9FEC;
      }
      goto L_089F9FDC;
    }
L_089F9FDC:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[19] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_089F9FE8;
L_089F9FE8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F9FEC;
L_089F9FEC:
    aot_gpr[31] = (0x089F9FF4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 29u, 0x089F7298u>(ctx, &aot_mem) && ctx.pc == 0x089F9FF4u) goto L_089F9FF4;
    return;
L_089F9FF4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 2u, 0x089FA010u>(ctx, &aot_mem); return;
      }
      goto L_089F9FFC;
    }
L_089F9FFC:
    aot_gpr[20] = (2215u << 16u);
    ctx.pc = 0x089FA000u; return;
}

void recomp_unit_0501(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0501_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_501(Runtime &runtime) {
    runtime.register_generated_unit(501u, 0x089F9000u, 4096u, &recomp_unit_0501, &recomp_unit_0501_entry);
    runtime.register_function(0x089F9000u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F900Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9020u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9044u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9060u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9074u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F909Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F90ACu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F90B4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F90CCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F90D4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F90DCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F90E4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F90F8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9100u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9114u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F911Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F913Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9144u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9150u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F915Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9168u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9174u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F917Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9184u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9190u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9198u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F91A0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F91A8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F91B0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F91B8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F91C0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F91D8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F91E4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F91ECu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F91F0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F91F8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9204u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9214u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9268u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9274u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9280u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9290u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F929Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F92A8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F92B0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F92E4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F92ECu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F92F8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9304u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9308u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9310u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9318u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F934Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F935Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9360u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9368u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9374u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F938Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9398u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F93A0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F93A4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F93ACu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F93B8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F93D4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F93DCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F93E4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F93FCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9408u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9410u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9444u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9450u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F945Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9468u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F946Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9474u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F947Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F94B0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F94C0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F94C4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F94CCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F94D4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F94FCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9504u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9510u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9518u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F954Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9558u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9568u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9570u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9578u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9584u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F958Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F95C0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F95C4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F95CCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F95DCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F95E4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9604u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F960Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9640u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F964Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9660u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9668u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F969Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F96E0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F96ECu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F96F4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9700u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9708u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F971Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9750u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9758u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9768u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9780u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9788u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9790u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F97A4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F97D8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F97E4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F97F8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9800u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9810u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9818u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F982Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9860u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9874u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9888u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F98A0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F98CCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F98DCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F98F0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9908u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9918u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9928u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9948u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9950u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9960u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9968u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9974u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F997Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9994u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9998u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F99A4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F99ACu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F99E0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F99E8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F99FCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9A04u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9A1Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9A20u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9A2Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9A34u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9A68u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9A74u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9A7Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9AB0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9AB8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9ACCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9AD8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9AE4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9AF0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9AF8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9B2Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9B3Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9B44u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9B58u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9B60u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9B94u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9B9Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9BB4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9BB8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9BC4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9BCCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9C00u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9C0Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9C20u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9C50u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9C5Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9C64u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9C74u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9C84u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9C8Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9CC0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9CECu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9CF4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9D00u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9D10u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9D24u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9D44u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9D50u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9D58u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9D8Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9D98u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9DA4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9DB8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9DC8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9DE4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9DF4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9DFCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9E30u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9E38u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9E40u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9E50u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9E58u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9E8Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9ED8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9EE8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9EF4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9F00u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9F10u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9F2Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9F30u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9F44u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9F6Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9F80u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9F9Cu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9FACu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9FB4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9FC0u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9FC8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9FD4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9FDCu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9FE8u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9FECu, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9FF4u, &recomp_unit_0501, "recomp_unit_0501");
    runtime.register_function(0x089F9FFCu, &recomp_unit_0501, "recomp_unit_0501");
}
} // namespace psprecomp
