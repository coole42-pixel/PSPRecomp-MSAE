#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0467[1022] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 6, 0, 7, 0, 8, 9, 0, 0, 0, 0,
    0, 0, 0, 10, 11, 0, 0, 12, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0,
    25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 35, 36, 0, 37, 38, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 46, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 54, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0,
    0, 61, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    69, 0, 70, 0, 0, 0, 71, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 83, 0, 0, 0,
    0, 0, 0, 84, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 91, 92, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 97, 98, 0, 0, 0, 0, 99,
    100, 0, 101, 0, 102, 103, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0,
    0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0,
    0, 117, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0,
    126, 0, 127, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 0, 132, 133, 134, 0, 135, 136, 137, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 0,
    162, 0, 163, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 169, 0, 0, 0, 0, 0, 0, 170, 0, 171,
    0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 178,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 181, 182, 183, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 0, 0, 0, 0, 0, 185, 186, 0, 187, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 193, 0,
    194, 0, 195, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 208, 209, 0, 210, 0, 0, 211,
    0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 226,
    0, 227, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 246, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 250,
};
void recomp_unit_0467_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089D7000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0467[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D7000;
    case 2u: goto L_089D7008;
    case 3u: goto L_089D7038;
    case 4u: goto L_089D7040;
    case 5u: goto L_089D7048;
    case 6u: goto L_089D7058;
    case 7u: goto L_089D7060;
    case 8u: goto L_089D7068;
    case 9u: goto L_089D706C;
    case 10u: goto L_089D708C;
    case 11u: goto L_089D7090;
    case 12u: goto L_089D709C;
    case 13u: goto L_089D70A0;
    case 14u: goto L_089D70A8;
    case 15u: goto L_089D7100;
    case 16u: goto L_089D7124;
    case 17u: goto L_089D7130;
    case 18u: goto L_089D7138;
    case 19u: goto L_089D7140;
    case 20u: goto L_089D7160;
    case 21u: goto L_089D71AC;
    case 22u: goto L_089D71B4;
    case 23u: goto L_089D71F0;
    case 24u: goto L_089D71F8;
    case 25u: goto L_089D7200;
    case 26u: goto L_089D7210;
    case 27u: goto L_089D7218;
    case 28u: goto L_089D7220;
    case 29u: goto L_089D7228;
    case 30u: goto L_089D7238;
    case 31u: goto L_089D7240;
    case 32u: goto L_089D7290;
    case 33u: goto L_089D72A0;
    case 34u: goto L_089D72AC;
    case 35u: goto L_089D72B0;
    case 36u: goto L_089D72B4;
    case 37u: goto L_089D72BC;
    case 38u: goto L_089D72C0;
    case 39u: goto L_089D72C4;
    case 40u: goto L_089D72E0;
    case 41u: goto L_089D72F0;
    case 42u: goto L_089D7300;
    case 43u: goto L_089D7308;
    case 44u: goto L_089D732C;
    case 45u: goto L_089D7340;
    case 46u: goto L_089D7348;
    case 47u: goto L_089D7354;
    case 48u: goto L_089D735C;
    case 49u: goto L_089D737C;
    case 50u: goto L_089D738C;
    case 51u: goto L_089D7394;
    case 52u: goto L_089D73A4;
    case 53u: goto L_089D73AC;
    case 54u: goto L_089D73B0;
    case 55u: goto L_089D73B8;
    case 56u: goto L_089D73C4;
    case 57u: goto L_089D73CC;
    case 58u: goto L_089D73E8;
    case 59u: goto L_089D73F0;
    case 60u: goto L_089D73F8;
    case 61u: goto L_089D7404;
    case 62u: goto L_089D7418;
    case 63u: goto L_089D7420;
    case 64u: goto L_089D7430;
    case 65u: goto L_089D743C;
    case 66u: goto L_089D744C;
    case 67u: goto L_089D7454;
    case 68u: goto L_089D7478;
    case 69u: goto L_089D7480;
    case 70u: goto L_089D7488;
    case 71u: goto L_089D7498;
    case 72u: goto L_089D749C;
    case 73u: goto L_089D74B4;
    case 74u: goto L_089D74D4;
    case 75u: goto L_089D74DC;
    case 76u: goto L_089D74F0;
    case 77u: goto L_089D74F8;
    case 78u: goto L_089D7500;
    case 79u: goto L_089D7524;
    case 80u: goto L_089D7554;
    case 81u: goto L_089D755C;
    case 82u: goto L_089D756C;
    case 83u: goto L_089D7570;
    case 84u: goto L_089D758C;
    case 85u: goto L_089D7598;
    case 86u: goto L_089D75A0;
    case 87u: goto L_089D75A8;
    case 88u: goto L_089D75B8;
    case 89u: goto L_089D75C4;
    case 90u: goto L_089D75CC;
    case 91u: goto L_089D7604;
    case 92u: goto L_089D7608;
    case 93u: goto L_089D760C;
    case 94u: goto L_089D7630;
    case 95u: goto L_089D7640;
    case 96u: goto L_089D7648;
    case 97u: goto L_089D7664;
    case 98u: goto L_089D7668;
    case 99u: goto L_089D767C;
    case 100u: goto L_089D7680;
    case 101u: goto L_089D7688;
    case 102u: goto L_089D7690;
    case 103u: goto L_089D7694;
    case 104u: goto L_089D76A0;
    case 105u: goto L_089D76AC;
    case 106u: goto L_089D76B8;
    case 107u: goto L_089D76C8;
    case 108u: goto L_089D76DC;
    case 109u: goto L_089D76E8;
    case 110u: goto L_089D76F8;
    case 111u: goto L_089D7708;
    case 112u: goto L_089D7714;
    case 113u: goto L_089D7724;
    case 114u: goto L_089D7730;
    case 115u: goto L_089D7738;
    case 116u: goto L_089D7778;
    case 117u: goto L_089D7784;
    case 118u: goto L_089D7788;
    case 119u: goto L_089D77B4;
    case 120u: goto L_089D77BC;
    case 121u: goto L_089D77CC;
    case 122u: goto L_089D77D4;
    case 123u: goto L_089D77E0;
    case 124u: goto L_089D77E8;
    case 125u: goto L_089D77F4;
    case 126u: goto L_089D7800;
    case 127u: goto L_089D7808;
    case 128u: goto L_089D7814;
    case 129u: goto L_089D781C;
    case 130u: goto L_089D7824;
    case 131u: goto L_089D782C;
    case 132u: goto L_089D7844;
    case 133u: goto L_089D7848;
    case 134u: goto L_089D784C;
    case 135u: goto L_089D7854;
    case 136u: goto L_089D7858;
    case 137u: goto L_089D785C;
    case 138u: goto L_089D7884;
    case 139u: goto L_089D78CC;
    case 140u: goto L_089D78D0;
    case 141u: goto L_089D78DC;
    case 142u: goto L_089D78E4;
    case 143u: goto L_089D78F0;
    case 144u: goto L_089D78F8;
    case 145u: goto L_089D7920;
    case 146u: goto L_089D7928;
    case 147u: goto L_089D7930;
    case 148u: goto L_089D7940;
    case 149u: goto L_089D7980;
    case 150u: goto L_089D7988;
    case 151u: goto L_089D7990;
    case 152u: goto L_089D7998;
    case 153u: goto L_089D79A0;
    case 154u: goto L_089D79AC;
    case 155u: goto L_089D79BC;
    case 156u: goto L_089D79C4;
    case 157u: goto L_089D79CC;
    case 158u: goto L_089D79D8;
    case 159u: goto L_089D79E0;
    case 160u: goto L_089D79E8;
    case 161u: goto L_089D79F0;
    case 162u: goto L_089D7A00;
    case 163u: goto L_089D7A08;
    case 164u: goto L_089D7A0C;
    case 165u: goto L_089D7A20;
    case 166u: goto L_089D7A28;
    case 167u: goto L_089D7A4C;
    case 168u: goto L_089D7A54;
    case 169u: goto L_089D7A58;
    case 170u: goto L_089D7A74;
    case 171u: goto L_089D7A7C;
    case 172u: goto L_089D7A84;
    case 173u: goto L_089D7A90;
    case 174u: goto L_089D7ABC;
    case 175u: goto L_089D7AC4;
    case 176u: goto L_089D7AE4;
    case 177u: goto L_089D7AF4;
    case 178u: goto L_089D7AFC;
    case 179u: goto L_089D7B30;
    case 180u: goto L_089D7B3C;
    case 181u: goto L_089D7B54;
    case 182u: goto L_089D7B58;
    case 183u: goto L_089D7B5C;
    case 184u: goto L_089D7B84;
    case 185u: goto L_089D7BA0;
    case 186u: goto L_089D7BA4;
    case 187u: goto L_089D7BAC;
    case 188u: goto L_089D7BB8;
    case 189u: goto L_089D7BC0;
    case 190u: goto L_089D7BCC;
    case 191u: goto L_089D7BE4;
    case 192u: goto L_089D7BF0;
    case 193u: goto L_089D7BF8;
    case 194u: goto L_089D7C00;
    case 195u: goto L_089D7C08;
    case 196u: goto L_089D7C10;
    case 197u: goto L_089D7C18;
    case 198u: goto L_089D7C24;
    case 199u: goto L_089D7C30;
    case 200u: goto L_089D7C3C;
    case 201u: goto L_089D7C64;
    case 202u: goto L_089D7C74;
    case 203u: goto L_089D7C90;
    case 204u: goto L_089D7C9C;
    case 205u: goto L_089D7CAC;
    case 206u: goto L_089D7CC4;
    case 207u: goto L_089D7CD8;
    case 208u: goto L_089D7CE4;
    case 209u: goto L_089D7CE8;
    case 210u: goto L_089D7CF0;
    case 211u: goto L_089D7CFC;
    case 212u: goto L_089D7D04;
    case 213u: goto L_089D7D10;
    case 214u: goto L_089D7D1C;
    case 215u: goto L_089D7D28;
    case 216u: goto L_089D7D34;
    case 217u: goto L_089D7D3C;
    case 218u: goto L_089D7D5C;
    case 219u: goto L_089D7D6C;
    case 220u: goto L_089D7D84;
    case 221u: goto L_089D7D98;
    case 222u: goto L_089D7DCC;
    case 223u: goto L_089D7DD8;
    case 224u: goto L_089D7DE8;
    case 225u: goto L_089D7DF4;
    case 226u: goto L_089D7DFC;
    case 227u: goto L_089D7E04;
    case 228u: goto L_089D7E18;
    case 229u: goto L_089D7E24;
    case 230u: goto L_089D7E38;
    case 231u: goto L_089D7E44;
    case 232u: goto L_089D7E78;
    case 233u: goto L_089D7E84;
    case 234u: goto L_089D7EB4;
    case 235u: goto L_089D7EB8;
    case 236u: goto L_089D7EE4;
    case 237u: goto L_089D7F14;
    case 238u: goto L_089D7F1C;
    case 239u: goto L_089D7F2C;
    case 240u: goto L_089D7F44;
    case 241u: goto L_089D7F5C;
    case 242u: goto L_089D7F6C;
    case 243u: goto L_089D7F7C;
    case 244u: goto L_089D7FA0;
    case 245u: goto L_089D7FAC;
    case 246u: goto L_089D7FC0;
    case 247u: goto L_089D7FC4;
    case 248u: goto L_089D7FE0;
    case 249u: goto L_089D7FEC;
    case 250u: goto L_089D7FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D7000:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    (void)rt.invoke_chained_direct<&recomp_unit_0466_entry, 466u, 191u, 0x089D6F3Cu>(ctx, &aot_mem); return;
L_089D7008:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[19]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[17]);
      if (branch_taken) {
          goto L_089D706C;
      }
      goto L_089D7038;
    }
L_089D7038:
    aot_gpr[31] = (0x089D7040u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D7040u) goto L_089D7040;
    return;
L_089D7040:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D7068;
      }
      goto L_089D7048;
    }
L_089D7048:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[2] == aot_gpr[20]) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
        goto L_089D706C;
    }
    goto L_089D7058;
L_089D7058:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[16];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089D708C;
      }
      goto L_089D7060;
    }
L_089D7060:
    if (aot_gpr[16] == aot_gpr[3]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[20]);
        goto L_089D7090;
    }
    goto L_089D7068;
L_089D7068:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    goto L_089D706C;
L_089D706C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D708C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    goto L_089D7090;
L_089D7090:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1028)));
    if (aot_gpr[2] == aot_gpr[3]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089D7138;
    }
    goto L_089D709C;
L_089D709C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1248)));
    goto L_089D70A0;
L_089D70A0:
    if (aot_gpr[8] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_089D7124;
    }
    goto L_089D70A8;
L_089D70A8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(304)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1252)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089D7100u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D7100u) goto L_089D7100;
    return;
L_089D7100:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D7124:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089D7130u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 54u, 0x089D2320u>(ctx, &aot_mem) && ctx.pc == 0x089D7130u) goto L_089D7130;
    return;
L_089D7130:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    goto L_089D706C;
L_089D7138:
    aot_gpr[31] = (0x089D7140u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 4u, 0x089D202Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7140u) goto L_089D7140;
    return;
L_089D7140:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (0x089D7160u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7160u) goto L_089D7160;
    return;
L_089D7160:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(13));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(304)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(1084)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[7]);
    aot_gpr[31] = (0x089D71ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D71ACu) goto L_089D71AC;
    return;
L_089D71AC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1248)));
    goto L_089D70A0;
L_089D71B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D7308;
      }
      goto L_089D71F0;
    }
L_089D71F0:
    aot_gpr[31] = (0x089D71F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 31u, 0x089D2150u>(ctx, &aot_mem) && ctx.pc == 0x089D71F8u) goto L_089D71F8;
    return;
L_089D71F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D7300;
      }
      goto L_089D7200;
    }
L_089D7200:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D72B4;
      }
      goto L_089D7210;
    }
L_089D7210:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089D7290;
      }
      goto L_089D7218;
    }
L_089D7218:
    aot_gpr[31] = (0x089D7220u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(6)));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D7220u) goto L_089D7220;
    return;
L_089D7220:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D7394;
      }
      goto L_089D7228;
    }
L_089D7228:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(6)));
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089D7238u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 214u, 0x08A42BC0u>(ctx, &aot_mem) && ctx.pc == 0x089D7238u) goto L_089D7238;
    return;
L_089D7238:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D73F0;
      }
      goto L_089D7240;
    }
L_089D7240:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(6)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2)));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(1)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(3)));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (1u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 24464u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_089D7290;
L_089D7290:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089D72A0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 44u, 0x089D2260u>(ctx, &aot_mem) && ctx.pc == 0x089D72A0u) goto L_089D72A0;
    return;
L_089D72A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == aot_gpr[3];
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089D73A4;
      }
      goto L_089D72AC;
    }
L_089D72AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    goto L_089D72B0;
L_089D72B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089D72B4;
L_089D72B4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089D732C;
      }
      goto L_089D72BC;
    }
L_089D72BC:
    aot_gpr[3] = (2217u << 16u);
    goto L_089D72C0;
L_089D72C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2800)));
    goto L_089D72C4;
L_089D72C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089D72F0;
      }
      goto L_089D72E0;
    }
L_089D72E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(10)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D72F0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D72F0u) goto L_089D72F0;
    return;
L_089D72F0:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    goto L_089D7300;
L_089D7300:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(10)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(12));
    goto L_089D7308;
L_089D7308:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
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
L_089D732C:
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(44));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089D7340u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 235u, 0x08A42D14u>(ctx, &aot_mem) && ctx.pc == 0x089D7340u) goto L_089D7340;
    return;
L_089D7340:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D72C0;
      }
      goto L_089D7348;
    }
L_089D7348:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D7404;
      }
      goto L_089D7354;
    }
L_089D7354:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          goto L_089D72C4;
      }
      goto L_089D735C;
    }
L_089D735C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(10)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[3] == 0u) aot_gpr[2] = (aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089D737Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 240u, 0x08A42D48u>(ctx, &aot_mem) && ctx.pc == 0x089D737Cu) goto L_089D737C;
    return;
L_089D737C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (0x089D738Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089D738Cu) goto L_089D738C;
    return;
L_089D738C:
    aot_gpr[3] = (2217u << 16u);
    goto L_089D72C0;
L_089D7394:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(10)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(12));
    goto L_089D7308;
L_089D73A4:
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(256));
    goto L_089D73B8;
L_089D73AC:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089D73B0;
L_089D73B0:
    if (aot_gpr[16] == aot_gpr[20]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089D72B4;
    }
    goto L_089D73B8;
L_089D73B8:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089D73C4u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D73C4u) goto L_089D73C4;
    return;
L_089D73C4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D73AC;
      }
      goto L_089D73CC;
    }
L_089D73CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089D73B0;
    }
    goto L_089D73E8;
L_089D73E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    goto L_089D72B0;
L_089D73F0:
    aot_gpr[31] = (0x089D73F8u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D73F8u) goto L_089D73F8;
    return;
L_089D73F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(10)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(12));
    goto L_089D7308;
L_089D7404:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(10)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089D7418u);
    aot_gpr[5] = (aot_gpr[2] - aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 47u, 0x08A4323Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7418u) goto L_089D7418;
    return;
L_089D7418:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (2217u << 16u);
        goto L_089D72C0;
    }
    goto L_089D7420;
L_089D7420:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(10)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D7430u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 240u, 0x08A42D48u>(ctx, &aot_mem) && ctx.pc == 0x089D7430u) goto L_089D7430;
    return;
L_089D7430:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089D743Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 25u, 0x08A4313Cu>(ctx, &aot_mem) && ctx.pc == 0x089D743Cu) goto L_089D743C;
    return;
L_089D743C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (0x089D744Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089D744Cu) goto L_089D744C;
    return;
L_089D744C:
    aot_gpr[3] = (2217u << 16u);
    goto L_089D72C0;
L_089D7454:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D749C;
      }
      goto L_089D7478;
    }
L_089D7478:
    aot_gpr[31] = (0x089D7480u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 31u, 0x089D2150u>(ctx, &aot_mem) && ctx.pc == 0x089D7480u) goto L_089D7480;
    return;
L_089D7480:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D7498;
      }
      goto L_089D7488;
    }
L_089D7488:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D74B4;
      }
      goto L_089D7498;
    }
L_089D7498:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089D749C;
L_089D749C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D74B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(3)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(368)));
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D74DC;
      }
      goto L_089D74D4;
    }
L_089D74D4:
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089D74DCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D74DCu) goto L_089D74DC;
    return;
L_089D74DC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089D7498;
      }
      goto L_089D74F0;
    }
L_089D74F0:
    aot_gpr[31] = (0x089D74F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D74F8u) goto L_089D74F8;
    return;
L_089D74F8:
    aot_gpr[31] = (0x089D7500u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 222u, 0x08A42C74u>(ctx, &aot_mem) && ctx.pc == 0x089D7500u) goto L_089D7500;
    return;
L_089D7500:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D7524:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
      if (branch_taken) {
          goto L_089D756C;
      }
      goto L_089D7554;
    }
L_089D7554:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D756C;
      }
      goto L_089D755C;
    }
L_089D755C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(304)));
    if (aot_gpr[16] == aot_gpr[4]) {
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1024)));
        goto L_089D758C;
    }
    goto L_089D756C;
L_089D756C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089D7570;
L_089D7570:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D758C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D756C;
      }
      goto L_089D7598;
    }
L_089D7598:
    aot_gpr[31] = (0x089D75A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 44u, 0x089D2260u>(ctx, &aot_mem) && ctx.pc == 0x089D75A0u) goto L_089D75A0;
    return;
L_089D75A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D756C;
      }
      goto L_089D75A8;
    }
L_089D75A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089D756C;
      }
      goto L_089D75B8;
    }
L_089D75B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D75C4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 11u, 0x089870C0u>(ctx, &aot_mem) && ctx.pc == 0x089D75C4u) goto L_089D75C4;
    return;
L_089D75C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089D7570;
L_089D75CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(248)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089D7630;
      }
      goto L_089D7604;
    }
L_089D7604:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D7608;
L_089D7608:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_089D760C;
L_089D760C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
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
L_089D7630:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(304)));
    aot_gpr[17] = (0u + 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[21] = (0u + 0u);
      if (branch_taken) {
          goto L_089D7604;
      }
      goto L_089D7640;
    }
L_089D7640:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1084)));
    goto L_089D7680;
L_089D7648:
    aot_gpr[3] = (aot_gpr[21] << 2u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(372)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089D76E8;
      }
      goto L_089D7664;
    }
L_089D7664:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    goto L_089D7668;
L_089D7668:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(248)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089D7604;
      }
      goto L_089D767C;
    }
L_089D767C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1084)));
    goto L_089D7680;
L_089D7680:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          goto L_089D7648;
      }
      goto L_089D7688;
    }
L_089D7688:
    aot_gpr[19] = (0u + 0u);
    goto L_089D76A0;
L_089D7690:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1084)));
    goto L_089D7694;
L_089D7694:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          goto L_089D7648;
      }
      goto L_089D76A0;
    }
L_089D76A0:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089D76ACu);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D76ACu) goto L_089D76AC;
    return;
L_089D76AC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D7690;
      }
      goto L_089D76B8;
    }
L_089D76B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1084)));
        goto L_089D7694;
    }
    goto L_089D76C8;
L_089D76C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1084)));
        goto L_089D7694;
    }
    goto L_089D76DC;
L_089D76DC:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[4] + 0u);
    goto L_089D7664;
L_089D76E8:
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[4] << 2u);
      if (branch_taken) {
          goto L_089D7608;
      }
      goto L_089D76F8;
    }
L_089D76F8:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[21] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089D7664;
      }
      goto L_089D7708;
    }
L_089D7708:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    goto L_089D7714;
L_089D7714:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[5];
    aot_gpr[2] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089D760C;
      }
      goto L_089D7724;
    }
L_089D7724:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D7714;
      }
      goto L_089D7730;
    }
L_089D7730:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    goto L_089D7668;
L_089D7738:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[21]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
      if (branch_taken) {
          goto L_089D7784;
      }
      goto L_089D7778;
    }
L_089D7778:
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089D77B4;
      }
      goto L_089D7784;
    }
L_089D7784:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    goto L_089D7788;
L_089D7788:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D77B4:
    aot_gpr[31] = (0x089D77BCu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 44u, 0x089D2260u>(ctx, &aot_mem) && ctx.pc == 0x089D77BCu) goto L_089D77BC;
    return;
L_089D77BC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(256) ? 1u : 0u);
      if (branch_taken) {
          goto L_089D7784;
      }
      goto L_089D77CC;
    }
L_089D77CC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          goto L_089D7788;
      }
      goto L_089D77D4;
    }
L_089D77D4:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D77E0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x089D77E0u) goto L_089D77E0;
    return;
L_089D77E0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D7784;
      }
      goto L_089D77E8;
    }
L_089D77E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          goto L_089D7788;
      }
      goto L_089D77F4;
    }
L_089D77F4:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D7800u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D7800u) goto L_089D7800;
    return;
L_089D7800:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          goto L_089D7788;
      }
      goto L_089D7808;
    }
L_089D7808:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D7814u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 18u, 0x089D914Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7814u) goto L_089D7814;
    return;
L_089D7814:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D7784;
      }
      goto L_089D781C;
    }
L_089D781C:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D79E8;
      }
      goto L_089D7824;
    }
L_089D7824:
    if (aot_gpr[17] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
        goto L_089D785C;
    }
    goto L_089D782C;
L_089D782C:
    aot_gpr[30] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(260)));
    aot_gpr[3] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D7988;
      }
      goto L_089D7844;
    }
L_089D7844:
    aot_gpr[4] = (0u | 65535u);
    goto L_089D7848;
L_089D7848:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D784C;
L_089D784C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_089D7858;
      }
      goto L_089D7854;
    }
L_089D7854:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    goto L_089D7858;
L_089D7858:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    goto L_089D785C;
L_089D785C:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[17] = (0u + 0u);
    aot_gpr[31] = (0x089D7884u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7884u) goto L_089D7884;
    return;
L_089D7884:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[16] = (0u + 0u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    aot_gpr[31] = (0x089D78CCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D78CCu) goto L_089D78CC;
    return;
L_089D78CC:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089D78D0;
L_089D78D0:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D78DCu);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x089D78DCu) goto L_089D78DC;
    return;
L_089D78DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D78F0;
      }
      goto L_089D78E4;
    }
L_089D78E4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] != 0u) aot_gpr[17] = (aot_gpr[3]);
    goto L_089D78F0;
L_089D78F0:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[20];
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D78D0;
      }
      goto L_089D78F8;
    }
L_089D78F8:
    aot_gpr[3] = (4095u << 16u);
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] | 65534u);
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[3] != 0u) aot_gpr[2] = (aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D7920u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7920u) goto L_089D7920;
    return;
L_089D7920:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D7930;
      }
      goto L_089D7928;
    }
L_089D7928:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_089D7930;
L_089D7930:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089D7940u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7940u) goto L_089D7940;
    return;
L_089D7940:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(23));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    aot_gpr[31] = (0x089D7980u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7980u) goto L_089D7980;
    return;
L_089D7980:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    goto L_089D7788;
L_089D7988:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[17];
    aot_gpr[20] = (0u + 0u);
      if (branch_taken) {
          goto L_089D7844;
      }
      goto L_089D7990;
    }
L_089D7990:
    aot_gpr[31] = (0x089D7998u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 42u, 0x089D2244u>(ctx, &aot_mem) && ctx.pc == 0x089D7998u) goto L_089D7998;
    return;
L_089D7998:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[22] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D7A08;
      }
      goto L_089D79A0;
    }
L_089D79A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          goto L_089D7A0C;
      }
      goto L_089D79AC;
    }
L_089D79AC:
    aot_gpr[3] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] & 65535u);
      if (branch_taken) {
          goto L_089D7848;
      }
      goto L_089D79BC;
    }
L_089D79BC:
    aot_gpr[23] = (aot_gpr[3] + 0u);
    aot_gpr[16] = (aot_gpr[22] + 0u);
    goto L_089D79C4;
L_089D79C4:
    aot_gpr[31] = (0x089D79CCu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 42u, 0x089D2244u>(ctx, &aot_mem) && ctx.pc == 0x089D79CCu) goto L_089D79CC;
    return;
L_089D79CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D7A08;
      }
      goto L_089D79D8;
    }
L_089D79D8:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[23];
    aot_gpr[4] = (aot_gpr[20] & 65535u);
      if (branch_taken) {
          goto L_089D79C4;
      }
      goto L_089D79E0;
    }
L_089D79E0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D784C;
L_089D79E8:
    aot_gpr[31] = (0x089D79F0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089D75CC;
L_089D79F0:
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D7824;
      }
      goto L_089D7A00;
    }
L_089D7A00:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    goto L_089D7824;
L_089D7A08:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2800)));
    goto L_089D7A0C;
L_089D7A0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(260)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[22] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_089D7844;
      }
      goto L_089D7A20;
    }
L_089D7A20:
    // nop
    goto L_089D7990;
L_089D7A28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
      if (branch_taken) {
          goto L_089D7A54;
      }
      goto L_089D7A4C;
    }
L_089D7A4C:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D7A74;
      }
      goto L_089D7A54;
    }
L_089D7A54:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D7A58;
L_089D7A58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D7A74:
    aot_gpr[31] = (0x089D7A7Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1)));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7A7Cu) goto L_089D7A7C;
    return;
L_089D7A7C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D7A54;
      }
      goto L_089D7A84;
    }
L_089D7A84:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D7A58;
      }
      goto L_089D7A90;
    }
L_089D7A90:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D7A54;
      }
      goto L_089D7ABC;
    }
L_089D7ABC:
    aot_gpr[31] = (0x089D7AC4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1)));
    if (rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 11u, 0x089870C0u>(ctx, &aot_mem) && ctx.pc == 0x089D7AC4u) goto L_089D7AC4;
    return;
L_089D7AC4:
    aot_gpr[2] = (aot_gpr[18] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_089D7A58;
      }
      goto L_089D7AE4;
    }
L_089D7AE4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1)));
    aot_gpr[31] = (0x089D7AF4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    goto L_089D7738;
L_089D7AF4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6));
    goto L_089D7A58;
L_089D7AFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D7B54;
      }
      goto L_089D7B30;
    }
L_089D7B30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1080)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[30] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D7B54;
      }
      goto L_089D7B3C;
    }
L_089D7B3C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(308)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (0u + 0u);
      if (branch_taken) {
          goto L_089D7B84;
      }
      goto L_089D7B54;
    }
L_089D7B54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089D7B58;
L_089D7B58:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089D7B5C;
L_089D7B5C:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D7B84:
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[16] = (0u + 0u);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(4));
    goto L_089D7BAC;
L_089D7BA0:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089D7BA4;
L_089D7BA4:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_089D7C10;
      }
      goto L_089D7BAC;
    }
L_089D7BAC:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D7BB8u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7BB8u) goto L_089D7BB8;
    return;
L_089D7BB8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D7BA0;
      }
      goto L_089D7BC0;
    }
L_089D7BC0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089D7BA4;
    }
    goto L_089D7BCC;
L_089D7BCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[4] ^ aot_gpr[21]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
      if (branch_taken) {
          goto L_089D7B54;
      }
      goto L_089D7BE4;
    }
L_089D7BE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[20] ^ aot_gpr[18]);
      if (branch_taken) {
          goto L_089D7BF8;
      }
      goto L_089D7BF0;
    }
L_089D7BF0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089D7B58;
      }
      goto L_089D7BF8;
    }
L_089D7BF8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[23];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089D7B58;
      }
      goto L_089D7C00;
    }
L_089D7C00:
    if (aot_gpr[4] == aot_gpr[22]) {
    if (aot_gpr[3] == 0u) aot_gpr[20] = (aot_gpr[16]);
        goto L_089D7BA0;
    }
    goto L_089D7C08;
L_089D7C08:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089D7BA4;
L_089D7C10:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089D7B58;
      }
      goto L_089D7C18;
    }
L_089D7C18:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1028)));
    if (aot_gpr[21] != aot_gpr[20]) {
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089D7B5C;
    }
    goto L_089D7C24;
L_089D7C24:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089D7C30u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D7C30u) goto L_089D7C30;
    return;
L_089D7C30:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[21] << 2u);
      if (branch_taken) {
          goto L_089D7D3C;
      }
      goto L_089D7C3C;
    }
L_089D7C3C:
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D7C64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 132u, 0x089D284Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7C64u) goto L_089D7C64;
    return;
L_089D7C64:
    aot_gpr[6] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089D7C74u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 11u, 0x089870C0u>(ctx, &aot_mem) && ctx.pc == 0x089D7C74u) goto L_089D7C74;
    return;
L_089D7C74:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2800)));
    aot_gpr[31] = (0x089D7C90u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(284), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 67u, 0x08988540u>(ctx, &aot_mem) && ctx.pc == 0x089D7C90u) goto L_089D7C90;
    return;
L_089D7C90:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089D7C9Cu);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0463_entry, 463u, 162u, 0x089D3BACu>(ctx, &aot_mem) && ctx.pc == 0x089D7C9Cu) goto L_089D7C9C;
    return;
L_089D7C9C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(312)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (0u + 0u);
        goto L_089D7CD8;
    }
    goto L_089D7CAC;
L_089D7CAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(316)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(312)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089D7CC4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D7CC4u) goto L_089D7CC4;
    return;
L_089D7CC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(312), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(316), 0u);
    aot_gpr[16] = (0u + 0u);
    goto L_089D7CD8;
L_089D7CD8:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(256));
    goto L_089D7CF0;
L_089D7CE4:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089D7CE8;
L_089D7CE8:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[18];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089D7B58;
      }
      goto L_089D7CF0;
    }
L_089D7CF0:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D7CFCu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7CFCu) goto L_089D7CFC;
    return;
L_089D7CFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D7CE4;
      }
      goto L_089D7D04;
    }
L_089D7D04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089D7CE8;
    }
    goto L_089D7D10;
L_089D7D10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[2] != aot_gpr[19]) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089D7CE8;
    }
    goto L_089D7D1C;
L_089D7D1C:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[21] == aot_gpr[16];
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089D7CE4;
      }
      goto L_089D7D28;
    }
L_089D7D28:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x089D7D34u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    goto L_089D7738;
L_089D7D34:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089D7CE8;
L_089D7D3C:
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x089D7D5Cu);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 11u, 0x089870C0u>(ctx, &aot_mem) && ctx.pc == 0x089D7D5Cu) goto L_089D7D5C;
    return;
L_089D7D5C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089D7C3C;
      }
      goto L_089D7D6C;
    }
L_089D7D6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(316)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(312)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089D7D84u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D7D84u) goto L_089D7D84;
    return;
L_089D7D84:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(312), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(316), 0u);
    goto L_089D7B54;
L_089D7D98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
      if (branch_taken) {
          goto L_089D7EB4;
      }
      goto L_089D7DCC;
    }
L_089D7DCC:
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D7EB4;
      }
      goto L_089D7DD8;
    }
L_089D7DD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_089D7EE4;
      }
      goto L_089D7DE8;
    }
L_089D7DE8:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D7EB8;
      }
      goto L_089D7DF4;
    }
L_089D7DF4:
    aot_gpr[31] = (0x089D7DFCu);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D7DFCu) goto L_089D7DFC;
    return;
L_089D7DFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D7EB4;
      }
      goto L_089D7E04;
    }
L_089D7E04:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_089D7F14;
      }
      goto L_089D7E18;
    }
L_089D7E18:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D7EB4;
      }
      goto L_089D7E24;
    }
L_089D7E24:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D7E38u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 11u, 0x089870C0u>(ctx, &aot_mem) && ctx.pc == 0x089D7E38u) goto L_089D7E38;
    return;
L_089D7E38:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D7E44u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 132u, 0x089D284Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7E44u) goto L_089D7E44;
    return;
L_089D7E44:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(284), aot_gpr[22]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(2)));
    aot_gpr[31] = (0x089D7E78u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 67u, 0x08988540u>(ctx, &aot_mem) && ctx.pc == 0x089D7E78u) goto L_089D7E78;
    return;
L_089D7E78:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D7E84u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0463_entry, 463u, 162u, 0x089D3BACu>(ctx, &aot_mem) && ctx.pc == 0x089D7E84u) goto L_089D7E84;
    return;
L_089D7E84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D7EB4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D7EB8;
L_089D7EB8:
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
L_089D7EE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D7F14:
    aot_gpr[31] = (0x089D7F1Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0463_entry, 463u, 126u, 0x089D38E4u>(ctx, &aot_mem) && ctx.pc == 0x089D7F1Cu) goto L_089D7F1C;
    return;
L_089D7F1C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089D7EE4;
      }
      goto L_089D7F2C;
    }
L_089D7F2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(316)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(312)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089D7F44u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D7F44u) goto L_089D7F44;
    return;
L_089D7F44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(312), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(316), 0u);
    goto L_089D7EB8;
L_089D7F5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089D7F6Cu);
    aot_gpr[5] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 46u, 0x089D459Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7F6Cu) goto L_089D7F6C;
    return;
L_089D7F6C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D7F7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
      if (branch_taken) {
          goto L_089D7FC0;
      }
      goto L_089D7FA0;
    }
L_089D7FA0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089D7FC4;
      }
      goto L_089D7FAC;
    }
L_089D7FAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_089D7FE0;
    }
    goto L_089D7FC0;
L_089D7FC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089D7FC4;
L_089D7FC4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D7FE0:
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089D7FC0;
      }
      goto L_089D7FEC;
    }
L_089D7FEC:
    aot_gpr[31] = (0x089D7FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D7FF4u) goto L_089D7FF4;
    return;
L_089D7FF4:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0468_entry, 468u, 5u, 0x089D8058u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0468_entry, 468u, 1u, 0x089D8004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0467(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0467_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_467(Runtime &runtime) {
    runtime.register_generated_unit(467u, 0x089D7000u, 4096u, &recomp_unit_0467, &recomp_unit_0467_entry);
    runtime.register_function(0x089D7000u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7008u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7038u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7040u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7048u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7058u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7060u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7068u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D706Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D708Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7090u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D709Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D70A0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D70A8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7100u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7124u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7130u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7138u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7140u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7160u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D71ACu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D71B4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D71F0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D71F8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7200u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7210u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7218u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7220u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7228u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7238u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7240u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7290u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D72A0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D72ACu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D72B0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D72B4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D72BCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D72C0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D72C4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D72E0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D72F0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7300u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7308u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D732Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7340u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7348u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7354u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D735Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D737Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D738Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7394u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D73A4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D73ACu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D73B0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D73B8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D73C4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D73CCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D73E8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D73F0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D73F8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7404u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7418u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7420u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7430u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D743Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D744Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7454u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7478u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7480u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7488u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7498u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D749Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D74B4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D74D4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D74DCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D74F0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D74F8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7500u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7524u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7554u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D755Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D756Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7570u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D758Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7598u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D75A0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D75A8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D75B8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D75C4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D75CCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7604u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7608u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D760Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7630u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7640u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7648u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7664u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7668u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D767Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7680u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7688u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7690u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7694u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D76A0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D76ACu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D76B8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D76C8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D76DCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D76E8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D76F8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7708u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7714u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7724u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7730u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7738u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7778u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7784u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7788u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D77B4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D77BCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D77CCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D77D4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D77E0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D77E8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D77F4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7800u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7808u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7814u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D781Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7824u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D782Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7844u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7848u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D784Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7854u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7858u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D785Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7884u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D78CCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D78D0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D78DCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D78E4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D78F0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D78F8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7920u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7928u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7930u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7940u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7980u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7988u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7990u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7998u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D79A0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D79ACu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D79BCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D79C4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D79CCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D79D8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D79E0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D79E8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D79F0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7A00u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7A08u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7A0Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7A20u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7A28u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7A4Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7A54u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7A58u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7A74u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7A7Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7A84u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7A90u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7ABCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7AC4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7AE4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7AF4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7AFCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7B30u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7B3Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7B54u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7B58u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7B5Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7B84u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7BA0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7BA4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7BACu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7BB8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7BC0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7BCCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7BE4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7BF0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7BF8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7C00u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7C08u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7C10u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7C18u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7C24u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7C30u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7C3Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7C64u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7C74u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7C90u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7C9Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7CACu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7CC4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7CD8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7CE4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7CE8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7CF0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7CFCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7D04u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7D10u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7D1Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7D28u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7D34u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7D3Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7D5Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7D6Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7D84u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7D98u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7DCCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7DD8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7DE8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7DF4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7DFCu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7E04u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7E18u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7E24u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7E38u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7E44u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7E78u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7E84u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7EB4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7EB8u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7EE4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7F14u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7F1Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7F2Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7F44u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7F5Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7F6Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7F7Cu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7FA0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7FACu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7FC0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7FC4u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7FE0u, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7FECu, &recomp_unit_0467, "recomp_unit_0467");
    runtime.register_function(0x089D7FF4u, &recomp_unit_0467, "recomp_unit_0467");
}
} // namespace psprecomp
