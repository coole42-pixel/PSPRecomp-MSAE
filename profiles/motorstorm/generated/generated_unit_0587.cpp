#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0587[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 7, 8, 0, 0, 0,
    9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 46, 47, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 55, 0, 0, 0,
    56, 0, 0, 57, 0, 58, 0, 59, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 68, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 94, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0,
    0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 117, 0, 118, 0, 0, 119,
    0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0,
    0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 160, 0, 0, 0, 0, 161, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0,
    173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191,
    0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201,
    0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 213,
};
void recomp_unit_0587_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A4F000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0587[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A4F000;
    case 2u: goto L_08A4F034;
    case 3u: goto L_08A4F03C;
    case 4u: goto L_08A4F048;
    case 5u: goto L_08A4F054;
    case 6u: goto L_08A4F064;
    case 7u: goto L_08A4F06C;
    case 8u: goto L_08A4F070;
    case 9u: goto L_08A4F080;
    case 10u: goto L_08A4F090;
    case 11u: goto L_08A4F0A0;
    case 12u: goto L_08A4F0A8;
    case 13u: goto L_08A4F0B8;
    case 14u: goto L_08A4F0C4;
    case 15u: goto L_08A4F0D0;
    case 16u: goto L_08A4F100;
    case 17u: goto L_08A4F128;
    case 18u: goto L_08A4F138;
    case 19u: goto L_08A4F144;
    case 20u: goto L_08A4F15C;
    case 21u: goto L_08A4F194;
    case 22u: goto L_08A4F1A4;
    case 23u: goto L_08A4F1B8;
    case 24u: goto L_08A4F1C0;
    case 25u: goto L_08A4F1CC;
    case 26u: goto L_08A4F1E4;
    case 27u: goto L_08A4F208;
    case 28u: goto L_08A4F228;
    case 29u: goto L_08A4F234;
    case 30u: goto L_08A4F24C;
    case 31u: goto L_08A4F25C;
    case 32u: goto L_08A4F274;
    case 33u: goto L_08A4F284;
    case 34u: goto L_08A4F294;
    case 35u: goto L_08A4F2A0;
    case 36u: goto L_08A4F2B0;
    case 37u: goto L_08A4F2D0;
    case 38u: goto L_08A4F2E0;
    case 39u: goto L_08A4F2EC;
    case 40u: goto L_08A4F2F4;
    case 41u: goto L_08A4F310;
    case 42u: goto L_08A4F328;
    case 43u: goto L_08A4F334;
    case 44u: goto L_08A4F33C;
    case 45u: goto L_08A4F34C;
    case 46u: goto L_08A4F358;
    case 47u: goto L_08A4F35C;
    case 48u: goto L_08A4F364;
    case 49u: goto L_08A4F384;
    case 50u: goto L_08A4F398;
    case 51u: goto L_08A4F3A4;
    case 52u: goto L_08A4F3C4;
    case 53u: goto L_08A4F3DC;
    case 54u: goto L_08A4F3E4;
    case 55u: goto L_08A4F3F0;
    case 56u: goto L_08A4F400;
    case 57u: goto L_08A4F40C;
    case 58u: goto L_08A4F414;
    case 59u: goto L_08A4F41C;
    case 60u: goto L_08A4F420;
    case 61u: goto L_08A4F438;
    case 62u: goto L_08A4F44C;
    case 63u: goto L_08A4F458;
    case 64u: goto L_08A4F460;
    case 65u: goto L_08A4F468;
    case 66u: goto L_08A4F4B4;
    case 67u: goto L_08A4F4C8;
    case 68u: goto L_08A4F4D0;
    case 69u: goto L_08A4F4D4;
    case 70u: goto L_08A4F504;
    case 71u: goto L_08A4F50C;
    case 72u: goto L_08A4F528;
    case 73u: goto L_08A4F550;
    case 74u: goto L_08A4F558;
    case 75u: goto L_08A4F568;
    case 76u: goto L_08A4F570;
    case 77u: goto L_08A4F5A0;
    case 78u: goto L_08A4F5CC;
    case 79u: goto L_08A4F60C;
    case 80u: goto L_08A4F630;
    case 81u: goto L_08A4F648;
    case 82u: goto L_08A4F650;
    case 83u: goto L_08A4F65C;
    case 84u: goto L_08A4F67C;
    case 85u: goto L_08A4F6B8;
    case 86u: goto L_08A4F6C4;
    case 87u: goto L_08A4F704;
    case 88u: goto L_08A4F714;
    case 89u: goto L_08A4F724;
    case 90u: goto L_08A4F730;
    case 91u: goto L_08A4F738;
    case 92u: goto L_08A4F758;
    case 93u: goto L_08A4F768;
    case 94u: goto L_08A4F788;
    case 95u: goto L_08A4F78C;
    case 96u: goto L_08A4F79C;
    case 97u: goto L_08A4F7BC;
    case 98u: goto L_08A4F7E0;
    case 99u: goto L_08A4F7F4;
    case 100u: goto L_08A4F800;
    case 101u: goto L_08A4F830;
    case 102u: goto L_08A4F838;
    case 103u: goto L_08A4F840;
    case 104u: goto L_08A4F84C;
    case 105u: goto L_08A4F854;
    case 106u: goto L_08A4F860;
    case 107u: goto L_08A4F868;
    case 108u: goto L_08A4F878;
    case 109u: goto L_08A4F884;
    case 110u: goto L_08A4F8A4;
    case 111u: goto L_08A4F8C8;
    case 112u: goto L_08A4F914;
    case 113u: goto L_08A4F91C;
    case 114u: goto L_08A4F944;
    case 115u: goto L_08A4F94C;
    case 116u: goto L_08A4F954;
    case 117u: goto L_08A4F968;
    case 118u: goto L_08A4F970;
    case 119u: goto L_08A4F97C;
    case 120u: goto L_08A4F984;
    case 121u: goto L_08A4F98C;
    case 122u: goto L_08A4F994;
    case 123u: goto L_08A4F99C;
    case 124u: goto L_08A4F9A4;
    case 125u: goto L_08A4F9AC;
    case 126u: goto L_08A4F9B4;
    case 127u: goto L_08A4F9BC;
    case 128u: goto L_08A4F9C4;
    case 129u: goto L_08A4F9CC;
    case 130u: goto L_08A4F9D4;
    case 131u: goto L_08A4F9DC;
    case 132u: goto L_08A4F9F0;
    case 133u: goto L_08A4FA0C;
    case 134u: goto L_08A4FA30;
    case 135u: goto L_08A4FA54;
    case 136u: goto L_08A4FA88;
    case 137u: goto L_08A4FA94;
    case 138u: goto L_08A4FA9C;
    case 139u: goto L_08A4FAB8;
    case 140u: goto L_08A4FADC;
    case 141u: goto L_08A4FB18;
    case 142u: goto L_08A4FB20;
    case 143u: goto L_08A4FB2C;
    case 144u: goto L_08A4FB38;
    case 145u: goto L_08A4FB48;
    case 146u: goto L_08A4FB50;
    case 147u: goto L_08A4FB64;
    case 148u: goto L_08A4FB74;
    case 149u: goto L_08A4FB84;
    case 150u: goto L_08A4FB8C;
    case 151u: goto L_08A4FB9C;
    case 152u: goto L_08A4FBA8;
    case 153u: goto L_08A4FBB4;
    case 154u: goto L_08A4FBE4;
    case 155u: goto L_08A4FC0C;
    case 156u: goto L_08A4FC1C;
    case 157u: goto L_08A4FC28;
    case 158u: goto L_08A4FC40;
    case 159u: goto L_08A4FC78;
    case 160u: goto L_08A4FC88;
    case 161u: goto L_08A4FC9C;
    case 162u: goto L_08A4FCA4;
    case 163u: goto L_08A4FCB0;
    case 164u: goto L_08A4FCC8;
    case 165u: goto L_08A4FCEC;
    case 166u: goto L_08A4FD0C;
    case 167u: goto L_08A4FD18;
    case 168u: goto L_08A4FD30;
    case 169u: goto L_08A4FD40;
    case 170u: goto L_08A4FD58;
    case 171u: goto L_08A4FD64;
    case 172u: goto L_08A4FD74;
    case 173u: goto L_08A4FD80;
    case 174u: goto L_08A4FD90;
    case 175u: goto L_08A4FD9C;
    case 176u: goto L_08A4FDA8;
    case 177u: goto L_08A4FDC8;
    case 178u: goto L_08A4FDD4;
    case 179u: goto L_08A4FDF0;
    case 180u: goto L_08A4FDFC;
    case 181u: goto L_08A4FE08;
    case 182u: goto L_08A4FE28;
    case 183u: goto L_08A4FE3C;
    case 184u: goto L_08A4FE44;
    case 185u: goto L_08A4FE4C;
    case 186u: goto L_08A4FE54;
    case 187u: goto L_08A4FE5C;
    case 188u: goto L_08A4FE64;
    case 189u: goto L_08A4FE6C;
    case 190u: goto L_08A4FE74;
    case 191u: goto L_08A4FE7C;
    case 192u: goto L_08A4FE84;
    case 193u: goto L_08A4FE8C;
    case 194u: goto L_08A4FE94;
    case 195u: goto L_08A4FE9C;
    case 196u: goto L_08A4FEAC;
    case 197u: goto L_08A4FEBC;
    case 198u: goto L_08A4FECC;
    case 199u: goto L_08A4FEDC;
    case 200u: goto L_08A4FEEC;
    case 201u: goto L_08A4FEFC;
    case 202u: goto L_08A4FF0C;
    case 203u: goto L_08A4FF1C;
    case 204u: goto L_08A4FF2C;
    case 205u: goto L_08A4FF8C;
    case 206u: goto L_08A4FFA0;
    case 207u: goto L_08A4FFA8;
    case 208u: goto L_08A4FFB0;
    case 209u: goto L_08A4FFC4;
    case 210u: goto L_08A4FFD0;
    case 211u: goto L_08A4FFE4;
    case 212u: goto L_08A4FFF0;
    case 213u: goto L_08A4FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A4F000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4F03C;
      }
      goto L_08A4F034;
    }
L_08A4F034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F0D0;
      }
      goto L_08A4F03C;
    }
L_08A4F03C:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4F0D0;
      }
      goto L_08A4F048;
    }
L_08A4F048:
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(5))))));
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3))))));
    goto L_08A4F054;
L_08A4F054:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A4F064u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F064u) goto L_08A4F064;
    return;
L_08A4F064:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A4F0A8;
      }
      goto L_08A4F06C;
    }
L_08A4F06C:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_08A4F070;
L_08A4F070:
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A4F080u);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(4))))));
    goto L_08A4F44C;
L_08A4F080:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_08A4F0A0;
      }
      goto L_08A4F090;
    }
L_08A4F090:
    aot_gpr[4] = (aot_gpr[30] - aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A4F0A0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A4F0A0u) goto L_08A4F0A0;
    return;
L_08A4F0A0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
      if (branch_taken) {
          goto L_08A4F0B8;
      }
      goto L_08A4F0A8;
    }
L_08A4F0A8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4F0B8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0586_entry, 586u, 226u, 0x08A4EF70u>(ctx, &aot_mem) && ctx.pc == 0x08A4F0B8u) goto L_08A4F0B8;
    return;
L_08A4F0B8:
    aot_gpr[19] = (aot_gpr[30] | 0u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4F054;
      }
      goto L_08A4F0C4;
    }
L_08A4F0C4:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[21]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[23]));
    goto L_08A4F0D0;
L_08A4F0D0:
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
L_08A4F100:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4F144;
      }
      goto L_08A4F128;
    }
L_08A4F128:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4F138u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0586_entry, 586u, 226u, 0x08A4EF70u>(ctx, &aot_mem) && ctx.pc == 0x08A4F138u) goto L_08A4F138;
    return;
L_08A4F138:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4F128;
      }
      goto L_08A4F144;
    }
L_08A4F144:
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
L_08A4F15C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    aot_gpr[8] = (aot_gpr[8] >> 30u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4F1C0;
      }
      goto L_08A4F194;
    }
L_08A4F194:
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4F1A4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0586_entry, 586u, 231u, 0x08A4EFF8u>(ctx, &aot_mem) && ctx.pc == 0x08A4F1A4u) goto L_08A4F1A4;
    return;
L_08A4F1A4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A4F1B8u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A4F100;
L_08A4F1B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F1CC;
      }
      goto L_08A4F1C0;
    }
L_08A4F1C0:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4F1CCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0586_entry, 586u, 231u, 0x08A4EFF8u>(ctx, &aot_mem) && ctx.pc == 0x08A4F1CCu) goto L_08A4F1CC;
    return;
L_08A4F1CC:
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
L_08A4F1E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4F25C;
      }
      goto L_08A4F208;
    }
L_08A4F208:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4F234;
      }
      goto L_08A4F228;
    }
L_08A4F228:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4F228;
      }
      goto L_08A4F234;
    }
L_08A4F234:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A4F24Cu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0586_entry, 586u, 202u, 0x08A4EDE4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F24Cu) goto L_08A4F24C;
    return;
L_08A4F24C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4F25Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4F15C;
L_08A4F25C:
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
L_08A4F274:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A4F284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08A4F284u) goto L_08A4F284;
    return;
L_08A4F284:
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F294:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F2EC;
      }
      goto L_08A4F2A0;
    }
L_08A4F2A0:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F2D0;
      }
      goto L_08A4F2B0;
    }
L_08A4F2B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A4F2E0;
      }
      goto L_08A4F2D0;
    }
L_08A4F2D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08A4F2E0;
L_08A4F2E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A4F2EC;
L_08A4F2EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F2F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4F384;
      }
      goto L_08A4F310;
    }
L_08A4F310:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4936));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x08A4F328u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 160u, 0x08A4CA78u>(ctx, &aot_mem) && ctx.pc == 0x08A4F328u) goto L_08A4F328;
    return;
L_08A4F328:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x08A4F334u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 160u, 0x08A4CA78u>(ctx, &aot_mem) && ctx.pc == 0x08A4F334u) goto L_08A4F334;
    return;
L_08A4F334:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A4F35C;
      }
      goto L_08A4F33C;
    }
L_08A4F33C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3104));
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A4F358;
      }
      goto L_08A4F34C;
    }
L_08A4F34C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A4F358;
L_08A4F358:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A4F35C;
L_08A4F35C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4F384;
      }
      goto L_08A4F364;
    }
L_08A4F364:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4F384u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F384u) goto L_08A4F384;
    return;
L_08A4F384:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F398:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F3C4;
      }
      goto L_08A4F3A4;
    }
L_08A4F3A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4F3DC;
      }
      goto L_08A4F3C4;
    }
L_08A4F3C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A4F3DC;
L_08A4F3DC:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F3E4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4F400;
      }
      goto L_08A4F3F0;
    }
L_08A4F3F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4F40C;
      }
      goto L_08A4F400;
    }
L_08A4F400:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A4F40C;
L_08A4F40C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F41C;
      }
      goto L_08A4F414;
    }
L_08A4F414:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A4F420;
      }
      goto L_08A4F41C;
    }
L_08A4F41C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_08A4F420;
L_08A4F420:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F438:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F44C:
    aot_gpr[4] = (0u << 24u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F458:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F460:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F468:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[20] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A4F504;
      }
      goto L_08A4F4B4;
    }
L_08A4F4B4:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A4F4C8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F4C8u) goto L_08A4F4C8;
    return;
L_08A4F4C8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F4D4;
      }
      goto L_08A4F4D0;
    }
L_08A4F4D0:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A4F4D4;
L_08A4F4D4:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F4B4;
      }
      goto L_08A4F504;
    }
L_08A4F504:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A4F528;
      }
      goto L_08A4F50C;
    }
L_08A4F50C:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A4F528;
L_08A4F528:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[4] << 2u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    goto L_08A4F550;
L_08A4F550:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[17] << 2u);
      if (branch_taken) {
          goto L_08A4F5A0;
      }
      goto L_08A4F558;
    }
L_08A4F558:
    aot_gpr[22] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A4F568u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F568u) goto L_08A4F568;
    return;
L_08A4F568:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A4F5A0;
      }
      goto L_08A4F570;
    }
L_08A4F570:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
      if (branch_taken) {
          goto L_08A4F550;
      }
      goto L_08A4F5A0;
    }
L_08A4F5A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A4F5CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < 2 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4F65C;
      }
      goto L_08A4F60C;
    }
L_08A4F60C:
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 1u));
    aot_gpr[18] = (aot_gpr[19] << 2u);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A4F630;
L_08A4F630:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4F648u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4F468;
L_08A4F648:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A4F65C;
      }
      goto L_08A4F650;
    }
L_08A4F650:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4F630;
      }
      goto L_08A4F65C;
    }
L_08A4F65C:
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
L_08A4F67C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[4]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[10] >> 30u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A4F6B8u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    goto L_08A4F468;
L_08A4F6B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F6C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4F704u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4F5CC;
L_08A4F704:
    aot_gpr[21] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
      if (branch_taken) {
          goto L_08A4F768;
      }
      goto L_08A4F714;
    }
L_08A4F714:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    goto L_08A4F724;
L_08A4F724:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4F730u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F730u) goto L_08A4F730;
    return;
L_08A4F730:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F758;
      }
      goto L_08A4F738;
    }
L_08A4F738:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4F758u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4F468;
L_08A4F758:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F724;
      }
      goto L_08A4F768;
    }
L_08A4F768:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F7BC;
      }
      goto L_08A4F788;
    }
L_08A4F788:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A4F78C;
L_08A4F78C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4F79Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4F67C;
L_08A4F79C:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A4F78C;
      }
      goto L_08A4F7BC;
    }
L_08A4F7BC:
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
L_08A4F7E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A4F7F4u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A4F6C4;
L_08A4F7F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4F800:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A4F830;
L_08A4F830:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4F838u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F838u) goto L_08A4F838;
    return;
L_08A4F838:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F84C;
      }
      goto L_08A4F840;
    }
L_08A4F840:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4F830;
      }
      goto L_08A4F84C;
    }
L_08A4F84C:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A4F854;
L_08A4F854:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4F860u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F860u) goto L_08A4F860;
    return;
L_08A4F860:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F878;
      }
      goto L_08A4F868;
    }
L_08A4F868:
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    aot_gpr[18] = (aot_gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4F854;
      }
      goto L_08A4F878;
    }
L_08A4F878:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F8A4;
      }
      goto L_08A4F884;
    }
L_08A4F884:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A4F830;
      }
      goto L_08A4F8A4;
    }
L_08A4F8A4:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08A4F8C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] - aot_gpr[16]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[4] = (aot_gpr[4] >> 30u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[19] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A4FA30;
      }
      goto L_08A4F914;
    }
L_08A4F914:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 3u));
      if (branch_taken) {
          goto L_08A4F954;
      }
      goto L_08A4F91C;
    }
L_08A4F91C:
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[20] = (aot_gpr[4] << 2u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4F944u);
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F944u) goto L_08A4F944;
    return;
L_08A4F944:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4F970;
      }
      goto L_08A4F94C;
    }
L_08A4F94C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4F9AC;
      }
      goto L_08A4F954;
    }
L_08A4F954:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4F968u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A4F7E0;
L_08A4F968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FA30;
      }
      goto L_08A4F970;
    }
L_08A4F970:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4F97Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F97Cu) goto L_08A4F97C;
    return;
L_08A4F97C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A4F98C;
    }
    goto L_08A4F984;
L_08A4F984:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4F9DC;
      }
      goto L_08A4F98C;
    }
L_08A4F98C:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4F994u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F994u) goto L_08A4F994;
    return;
L_08A4F994:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F9A4;
      }
      goto L_08A4F99C;
    }
L_08A4F99C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4F9DC;
      }
      goto L_08A4F9A4;
    }
L_08A4F9A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4F9DC;
      }
      goto L_08A4F9AC;
    }
L_08A4F9AC:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4F9B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F9B4u) goto L_08A4F9B4;
    return;
L_08A4F9B4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A4F9C4;
    }
    goto L_08A4F9BC;
L_08A4F9BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4F9DC;
      }
      goto L_08A4F9C4;
    }
L_08A4F9C4:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4F9CCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4F9CCu) goto L_08A4F9CC;
    return;
L_08A4F9CC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A4F9DC;
    }
    goto L_08A4F9D4;
L_08A4F9D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4F9DC;
      }
      goto L_08A4F9DC;
    }
L_08A4F9DC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4F9F0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A4F800;
L_08A4F9F0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4FA0Cu);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_08A4F8C8;
L_08A4FA0C:
    aot_gpr[4] = (aot_gpr[20] - aot_gpr[16]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[17] = (aot_gpr[20] | 0u);
    aot_gpr[20] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F914;
      }
      goto L_08A4FA30;
    }
L_08A4FA30:
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
L_08A4FA54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A4FA88;
L_08A4FA88:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4FA94u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4FA94u) goto L_08A4FA94;
    return;
L_08A4FA94:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FAB8;
      }
      goto L_08A4FA9C;
    }
L_08A4FA9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (aot_gpr[20] + static_cast<std::uint32_t>(-4));
    aot_gpr[20] = (aot_gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4FA88;
      }
      goto L_08A4FAB8;
    }
L_08A4FAB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[17]);
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
L_08A4FADC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4FB20;
      }
      goto L_08A4FB18;
    }
L_08A4FB18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FBB4;
      }
      goto L_08A4FB20;
    }
L_08A4FB20:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4FBB4;
      }
      goto L_08A4FB2C;
    }
L_08A4FB2C:
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(5))))));
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3))))));
    goto L_08A4FB38;
L_08A4FB38:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A4FB48u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4FB48u) goto L_08A4FB48;
    return;
L_08A4FB48:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A4FB8C;
      }
      goto L_08A4FB50;
    }
L_08A4FB50:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A4FB64u);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(4))))));
    goto L_08A4FD58;
L_08A4FB64:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_08A4FB84;
      }
      goto L_08A4FB74;
    }
L_08A4FB74:
    aot_gpr[4] = (aot_gpr[30] - aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A4FB84u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A4FB84u) goto L_08A4FB84;
    return;
L_08A4FB84:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
      if (branch_taken) {
          goto L_08A4FB9C;
      }
      goto L_08A4FB8C;
    }
L_08A4FB8C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4FB9Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A4FA54;
L_08A4FB9C:
    aot_gpr[19] = (aot_gpr[30] | 0u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4FB38;
      }
      goto L_08A4FBA8;
    }
L_08A4FBA8:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[21]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[23]));
    goto L_08A4FBB4;
L_08A4FBB4:
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
L_08A4FBE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4FC28;
      }
      goto L_08A4FC0C;
    }
L_08A4FC0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4FC1Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4FA54;
L_08A4FC1C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4FC0C;
      }
      goto L_08A4FC28;
    }
L_08A4FC28:
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
L_08A4FC40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    aot_gpr[8] = (aot_gpr[8] >> 30u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4FCA4;
      }
      goto L_08A4FC78;
    }
L_08A4FC78:
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4FC88u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4FADC;
L_08A4FC88:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A4FC9Cu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A4FBE4;
L_08A4FC9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FCB0;
      }
      goto L_08A4FCA4;
    }
L_08A4FCA4:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4FCB0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4FADC;
L_08A4FCB0:
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
L_08A4FCC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4FD40;
      }
      goto L_08A4FCEC;
    }
L_08A4FCEC:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4FD18;
      }
      goto L_08A4FD0C;
    }
L_08A4FD0C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4FD0C;
      }
      goto L_08A4FD18;
    }
L_08A4FD18:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A4FD30u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4F8C8;
L_08A4FD30:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4FD40u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4FC40;
L_08A4FD40:
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
L_08A4FD58:
    aot_gpr[4] = (0u << 24u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FD64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4FDC8;
      }
      goto L_08A4FD74;
    }
L_08A4FD74:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3712));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4FD9C;
      }
      goto L_08A4FD80;
    }
L_08A4FD80:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3104));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4FD9C;
      }
      goto L_08A4FD90;
    }
L_08A4FD90:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A4FD9C;
L_08A4FD9C:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4FDC8;
      }
      goto L_08A4FDA8;
    }
L_08A4FDA8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4FDC8u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4FDC8u) goto L_08A4FDC8;
    return;
L_08A4FDC8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FDD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4FE28;
      }
      goto L_08A4FDF0;
    }
L_08A4FDF0:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x08A4FDFCu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 160u, 0x08A4CA78u>(ctx, &aot_mem) && ctx.pc == 0x08A4FDFCu) goto L_08A4FDFC;
    return;
L_08A4FDFC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4FE28;
      }
      goto L_08A4FE08;
    }
L_08A4FE08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4FE28u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4FE28u) goto L_08A4FE28;
    return;
L_08A4FE28:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FE3C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FE44:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FE4C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FE54:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FE5C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FE64:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FE6C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FE74:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FE7C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FE84:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FE8C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FE94:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FE9C:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FEAC:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FEBC:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FECC:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FEDC:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FEEC:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FEFC:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FF0C:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FF1C:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4FF2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 2u, 0x08A50008u>(ctx, &aot_mem); return;
      }
      goto L_08A4FF8C;
    }
L_08A4FF8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A4FFA0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_08A4FF1C;
L_08A4FFA0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FFC4;
      }
      goto L_08A4FFA8;
    }
L_08A4FFA8:
    aot_gpr[31] = (0x08A4FFB0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A4FFB0u) goto L_08A4FFB0;
    return;
L_08A4FFB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A4FFF8;
      }
      goto L_08A4FFC4;
    }
L_08A4FFC4:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4FFF0;
      }
      goto L_08A4FFD0;
    }
L_08A4FFD0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4FFE4u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 199u, 0x088BBE74u>(ctx, &aot_mem) && ctx.pc == 0x08A4FFE4u) goto L_08A4FFE4;
    return;
L_08A4FFE4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A4FFF0;
L_08A4FFF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A4FFF8;
L_08A4FFF8:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    ctx.pc = 0x08A50000u; return;
}

void recomp_unit_0587(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0587_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_587(Runtime &runtime) {
    runtime.register_generated_unit(587u, 0x08A4F000u, 4096u, &recomp_unit_0587, &recomp_unit_0587_entry);
    runtime.register_function(0x08A4F000u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F034u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F03Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F048u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F054u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F064u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F06Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F070u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F080u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F090u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F0A0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F0A8u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F0B8u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F0C4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F0D0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F100u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F128u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F138u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F144u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F15Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F194u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F1A4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F1B8u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F1C0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F1CCu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F1E4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F208u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F228u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F234u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F24Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F25Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F274u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F284u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F294u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F2A0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F2B0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F2D0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F2E0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F2ECu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F2F4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F310u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F328u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F334u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F33Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F34Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F358u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F35Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F364u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F384u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F398u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F3A4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F3C4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F3DCu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F3E4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F3F0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F400u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F40Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F414u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F41Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F420u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F438u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F44Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F458u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F460u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F468u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F4B4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F4C8u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F4D0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F4D4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F504u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F50Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F528u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F550u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F558u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F568u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F570u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F5A0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F5CCu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F60Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F630u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F648u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F650u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F65Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F67Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F6B8u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F6C4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F704u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F714u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F724u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F730u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F738u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F758u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F768u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F788u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F78Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F79Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F7BCu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F7E0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F7F4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F800u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F830u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F838u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F840u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F84Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F854u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F860u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F868u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F878u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F884u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F8A4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F8C8u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F914u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F91Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F944u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F94Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F954u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F968u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F970u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F97Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F984u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F98Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F994u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F99Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F9A4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F9ACu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F9B4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F9BCu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F9C4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F9CCu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F9D4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F9DCu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4F9F0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FA0Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FA30u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FA54u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FA88u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FA94u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FA9Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FAB8u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FADCu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FB18u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FB20u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FB2Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FB38u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FB48u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FB50u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FB64u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FB74u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FB84u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FB8Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FB9Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FBA8u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FBB4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FBE4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FC0Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FC1Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FC28u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FC40u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FC78u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FC88u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FC9Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FCA4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FCB0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FCC8u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FCECu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FD0Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FD18u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FD30u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FD40u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FD58u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FD64u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FD74u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FD80u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FD90u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FD9Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FDA8u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FDC8u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FDD4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FDF0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FDFCu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE08u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE28u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE3Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE44u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE4Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE54u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE5Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE64u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE6Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE74u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE7Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE84u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE8Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE94u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FE9Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FEACu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FEBCu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FECCu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FEDCu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FEECu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FEFCu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FF0Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FF1Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FF2Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FF8Cu, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FFA0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FFA8u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FFB0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FFC4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FFD0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FFE4u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FFF0u, &recomp_unit_0587, "recomp_unit_0587");
    runtime.register_function(0x08A4FFF8u, &recomp_unit_0587, "recomp_unit_0587");
}
} // namespace psprecomp
