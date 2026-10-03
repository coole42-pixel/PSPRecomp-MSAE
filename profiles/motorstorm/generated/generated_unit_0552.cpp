#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0552[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13,
    0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0,
    0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0,
    0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0,
    0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0,
    55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62,
    0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 85,
    0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 99, 0, 100, 0, 0, 101, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 105, 0, 0, 0, 106, 0, 0, 0, 107,
    0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0,
    0, 133, 0, 134, 0, 0, 0, 0, 135, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 162,
};
void recomp_unit_0552_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A2C000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0552[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A2C000;
    case 2u: goto L_08A2C028;
    case 3u: goto L_08A2C038;
    case 4u: goto L_08A2C04C;
    case 5u: goto L_08A2C054;
    case 6u: goto L_08A2C080;
    case 7u: goto L_08A2C08C;
    case 8u: goto L_08A2C0A0;
    case 9u: goto L_08A2C0B4;
    case 10u: goto L_08A2C0C8;
    case 11u: goto L_08A2C0DC;
    case 12u: goto L_08A2C0EC;
    case 13u: goto L_08A2C0FC;
    case 14u: goto L_08A2C108;
    case 15u: goto L_08A2C110;
    case 16u: goto L_08A2C13C;
    case 17u: goto L_08A2C144;
    case 18u: goto L_08A2C158;
    case 19u: goto L_08A2C168;
    case 20u: goto L_08A2C178;
    case 21u: goto L_08A2C188;
    case 22u: goto L_08A2C198;
    case 23u: goto L_08A2C1A8;
    case 24u: goto L_08A2C1B4;
    case 25u: goto L_08A2C1BC;
    case 26u: goto L_08A2C1E8;
    case 27u: goto L_08A2C1F0;
    case 28u: goto L_08A2C204;
    case 29u: goto L_08A2C214;
    case 30u: goto L_08A2C224;
    case 31u: goto L_08A2C234;
    case 32u: goto L_08A2C244;
    case 33u: goto L_08A2C254;
    case 34u: goto L_08A2C25C;
    case 35u: goto L_08A2C2A0;
    case 36u: goto L_08A2C2B0;
    case 37u: goto L_08A2C2B8;
    case 38u: goto L_08A2C2E4;
    case 39u: goto L_08A2C2F0;
    case 40u: goto L_08A2C304;
    case 41u: goto L_08A2C314;
    case 42u: goto L_08A2C324;
    case 43u: goto L_08A2C334;
    case 44u: goto L_08A2C344;
    case 45u: goto L_08A2C354;
    case 46u: goto L_08A2C360;
    case 47u: goto L_08A2C368;
    case 48u: goto L_08A2C394;
    case 49u: goto L_08A2C39C;
    case 50u: goto L_08A2C3B0;
    case 51u: goto L_08A2C3C0;
    case 52u: goto L_08A2C3D0;
    case 53u: goto L_08A2C3E0;
    case 54u: goto L_08A2C3F0;
    case 55u: goto L_08A2C400;
    case 56u: goto L_08A2C40C;
    case 57u: goto L_08A2C414;
    case 58u: goto L_08A2C440;
    case 59u: goto L_08A2C448;
    case 60u: goto L_08A2C45C;
    case 61u: goto L_08A2C46C;
    case 62u: goto L_08A2C47C;
    case 63u: goto L_08A2C48C;
    case 64u: goto L_08A2C49C;
    case 65u: goto L_08A2C4AC;
    case 66u: goto L_08A2C4B8;
    case 67u: goto L_08A2C4E0;
    case 68u: goto L_08A2C534;
    case 69u: goto L_08A2C53C;
    case 70u: goto L_08A2C54C;
    case 71u: goto L_08A2C55C;
    case 72u: goto L_08A2C568;
    case 73u: goto L_08A2C5D8;
    case 74u: goto L_08A2C5E4;
    case 75u: goto L_08A2C608;
    case 76u: goto L_08A2C670;
    case 77u: goto L_08A2C680;
    case 78u: goto L_08A2C6B4;
    case 79u: goto L_08A2C6E4;
    case 80u: goto L_08A2C6E8;
    case 81u: goto L_08A2C7C8;
    case 82u: goto L_08A2C834;
    case 83u: goto L_08A2C844;
    case 84u: goto L_08A2C878;
    case 85u: goto L_08A2C87C;
    case 86u: goto L_08A2C884;
    case 87u: goto L_08A2C8B0;
    case 88u: goto L_08A2C8BC;
    case 89u: goto L_08A2C8E8;
    case 90u: goto L_08A2C8F0;
    case 91u: goto L_08A2C92C;
    case 92u: goto L_08A2C934;
    case 93u: goto L_08A2C93C;
    case 94u: goto L_08A2C948;
    case 95u: goto L_08A2C950;
    case 96u: goto L_08A2C978;
    case 97u: goto L_08A2C9D0;
    case 98u: goto L_08A2C9D8;
    case 99u: goto L_08A2C9DC;
    case 100u: goto L_08A2C9E4;
    case 101u: goto L_08A2C9F0;
    case 102u: goto L_08A2CA00;
    case 103u: goto L_08A2CA2C;
    case 104u: goto L_08A2CA58;
    case 105u: goto L_08A2CA5C;
    case 106u: goto L_08A2CA6C;
    case 107u: goto L_08A2CA7C;
    case 108u: goto L_08A2CA8C;
    case 109u: goto L_08A2CAC0;
    case 110u: goto L_08A2CB0C;
    case 111u: goto L_08A2CB58;
    case 112u: goto L_08A2CB60;
    case 113u: goto L_08A2CB98;
    case 114u: goto L_08A2CBD4;
    case 115u: goto L_08A2CBEC;
    case 116u: goto L_08A2CC0C;
    case 117u: goto L_08A2CC28;
    case 118u: goto L_08A2CC30;
    case 119u: goto L_08A2CC38;
    case 120u: goto L_08A2CC58;
    case 121u: goto L_08A2CC60;
    case 122u: goto L_08A2CC7C;
    case 123u: goto L_08A2CCD0;
    case 124u: goto L_08A2CCD8;
    case 125u: goto L_08A2CD1C;
    case 126u: goto L_08A2CD34;
    case 127u: goto L_08A2CD44;
    case 128u: goto L_08A2CD60;
    case 129u: goto L_08A2CD78;
    case 130u: goto L_08A2CDA4;
    case 131u: goto L_08A2CDE4;
    case 132u: goto L_08A2CDEC;
    case 133u: goto L_08A2CE04;
    case 134u: goto L_08A2CE0C;
    case 135u: goto L_08A2CE20;
    case 136u: goto L_08A2CE24;
    case 137u: goto L_08A2CE40;
    case 138u: goto L_08A2CE4C;
    case 139u: goto L_08A2CE60;
    case 140u: goto L_08A2CE8C;
    case 141u: goto L_08A2CEA4;
    case 142u: goto L_08A2CED0;
    case 143u: goto L_08A2CED8;
    case 144u: goto L_08A2CEF0;
    case 145u: goto L_08A2CF00;
    case 146u: goto L_08A2CF0C;
    case 147u: goto L_08A2CF2C;
    case 148u: goto L_08A2CF38;
    case 149u: goto L_08A2CF40;
    case 150u: goto L_08A2CF60;
    case 151u: goto L_08A2CF70;
    case 152u: goto L_08A2CF88;
    case 153u: goto L_08A2CF94;
    case 154u: goto L_08A2CFA0;
    case 155u: goto L_08A2CFAC;
    case 156u: goto L_08A2CFB8;
    case 157u: goto L_08A2CFC4;
    case 158u: goto L_08A2CFD0;
    case 159u: goto L_08A2CFDC;
    case 160u: goto L_08A2CFE8;
    case 161u: goto L_08A2CFF4;
    case 162u: goto L_08A2CFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A2C000:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(360)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2C028:
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x08A2C038u);
    aot_gpr[21] = (aot_gpr[19] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 27u, 0x0899C77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C038u) goto L_08A2C038;
    return;
L_08A2C038:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(132));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x08A2C04Cu);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C04Cu) goto L_08A2C04C;
    return;
L_08A2C04C:
    aot_gpr[6] = (aot_gpr[23] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    goto L_08A2C054;
L_08A2C054:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[17];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2C054;
      }
      goto L_08A2C080;
    }
L_08A2C080:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(228));
    aot_gpr[31] = (0x08A2C08Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 130u, 0x08999DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C08Cu) goto L_08A2C08C;
    return;
L_08A2C08C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20336));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08A2C0A0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C0A0u) goto L_08A2C0A0;
    return;
L_08A2C0A0:
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(148));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08A2C0B4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C0B4u) goto L_08A2C0B4;
    return;
L_08A2C0B4:
    aot_gpr[20] = (aot_gpr[19] + static_cast<std::uint32_t>(116));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2C0C8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C0C8u) goto L_08A2C0C8;
    return;
L_08A2C0C8:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08A2C0DCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C0DCu) goto L_08A2C0DC;
    return;
L_08A2C0DC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A2C0ECu);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C0ECu) goto L_08A2C0EC;
    return;
L_08A2C0EC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08A2C0FCu);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C0FCu) goto L_08A2C0FC;
    return;
L_08A2C0FC:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(276));
    aot_gpr[31] = (0x08A2C108u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 46u, 0x0899C96Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C108u) goto L_08A2C108;
    return;
L_08A2C108:
    aot_gpr[6] = (aot_gpr[23] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    goto L_08A2C110;
L_08A2C110:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[17];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2C110;
      }
      goto L_08A2C13C;
    }
L_08A2C13C:
    aot_gpr[31] = (0x08A2C144u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 130u, 0x08999DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C144u) goto L_08A2C144;
    return;
L_08A2C144:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20340));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x08A2C158u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C158u) goto L_08A2C158;
    return;
L_08A2C158:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08A2C168u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C168u) goto L_08A2C168;
    return;
L_08A2C168:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2C178u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C178u) goto L_08A2C178;
    return;
L_08A2C178:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08A2C188u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C188u) goto L_08A2C188;
    return;
L_08A2C188:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08A2C198u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C198u) goto L_08A2C198;
    return;
L_08A2C198:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08A2C1A8u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C1A8u) goto L_08A2C1A8;
    return;
L_08A2C1A8:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(292));
    aot_gpr[31] = (0x08A2C1B4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 46u, 0x0899C96Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C1B4u) goto L_08A2C1B4;
    return;
L_08A2C1B4:
    aot_gpr[6] = (aot_gpr[23] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    goto L_08A2C1BC;
L_08A2C1BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[17];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2C1BC;
      }
      goto L_08A2C1E8;
    }
L_08A2C1E8:
    aot_gpr[31] = (0x08A2C1F0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 130u, 0x08999DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C1F0u) goto L_08A2C1F0;
    return;
L_08A2C1F0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20344));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x08A2C204u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C204u) goto L_08A2C204;
    return;
L_08A2C204:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08A2C214u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C214u) goto L_08A2C214;
    return;
L_08A2C214:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2C224u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C224u) goto L_08A2C224;
    return;
L_08A2C224:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08A2C234u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C234u) goto L_08A2C234;
    return;
L_08A2C234:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08A2C244u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C244u) goto L_08A2C244;
    return;
L_08A2C244:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08A2C254u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C254u) goto L_08A2C254;
    return;
L_08A2C254:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    (void)rt.invoke_chained_direct<&recomp_unit_0551_entry, 551u, 195u, 0x08A2BE30u>(ctx, &aot_mem); return;
L_08A2C25C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-352));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(116));
    aot_gpr[31] = (0x08A2C2A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 27u, 0x0899C77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C2A0u) goto L_08A2C2A0;
    return;
L_08A2C2A0:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08A2C2B0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C2B0u) goto L_08A2C2B0;
    return;
L_08A2C2B0:
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    goto L_08A2C2B8;
L_08A2C2B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[17];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2C2B8;
      }
      goto L_08A2C2E4;
    }
L_08A2C2E4:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(212));
    aot_gpr[31] = (0x08A2C2F0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 130u, 0x08999DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C2F0u) goto L_08A2C2F0;
    return;
L_08A2C2F0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20336));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08A2C304u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C304u) goto L_08A2C304;
    return;
L_08A2C304:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2C314u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C314u) goto L_08A2C314;
    return;
L_08A2C314:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08A2C324u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C324u) goto L_08A2C324;
    return;
L_08A2C324:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08A2C334u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C334u) goto L_08A2C334;
    return;
L_08A2C334:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08A2C344u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C344u) goto L_08A2C344;
    return;
L_08A2C344:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08A2C354u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C354u) goto L_08A2C354;
    return;
L_08A2C354:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08A2C360u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 46u, 0x0899C96Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C360u) goto L_08A2C360;
    return;
L_08A2C360:
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    goto L_08A2C368;
L_08A2C368:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[17];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2C368;
      }
      goto L_08A2C394;
    }
L_08A2C394:
    aot_gpr[31] = (0x08A2C39Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 130u, 0x08999DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C39Cu) goto L_08A2C39C;
    return;
L_08A2C39C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20340));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x08A2C3B0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C3B0u) goto L_08A2C3B0;
    return;
L_08A2C3B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2C3C0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C3C0u) goto L_08A2C3C0;
    return;
L_08A2C3C0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08A2C3D0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C3D0u) goto L_08A2C3D0;
    return;
L_08A2C3D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08A2C3E0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C3E0u) goto L_08A2C3E0;
    return;
L_08A2C3E0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08A2C3F0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C3F0u) goto L_08A2C3F0;
    return;
L_08A2C3F0:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08A2C400u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C400u) goto L_08A2C400;
    return;
L_08A2C400:
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08A2C40Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 46u, 0x0899C96Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C40Cu) goto L_08A2C40C;
    return;
L_08A2C40C:
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    goto L_08A2C414;
L_08A2C414:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[17];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2C414;
      }
      goto L_08A2C440;
    }
L_08A2C440:
    aot_gpr[31] = (0x08A2C448u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 130u, 0x08999DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C448u) goto L_08A2C448;
    return;
L_08A2C448:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20344));
    aot_gpr[31] = (0x08A2C45Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C45Cu) goto L_08A2C45C;
    return;
L_08A2C45C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2C46Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C46Cu) goto L_08A2C46C;
    return;
L_08A2C46C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08A2C47Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C47Cu) goto L_08A2C47C;
    return;
L_08A2C47C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08A2C48Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C48Cu) goto L_08A2C48C;
    return;
L_08A2C48C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08A2C49Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C49Cu) goto L_08A2C49C;
    return;
L_08A2C49C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08A2C4ACu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C4ACu) goto L_08A2C4AC;
    return;
L_08A2C4AC:
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x08A2C4B8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 46u, 0x0899C96Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C4B8u) goto L_08A2C4B8;
    return;
L_08A2C4B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2C4E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(436));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[21] + static_cast<std::uint32_t>(340));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[21] + static_cast<std::uint32_t>(116));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[21] + static_cast<std::uint32_t>(148));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[31] = (0x08A2C534u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 27u, 0x0899C77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C534u) goto L_08A2C534;
    return;
L_08A2C534:
    aot_gpr[31] = (0x08A2C53Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 130u, 0x08999DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C53Cu) goto L_08A2C53C;
    return;
L_08A2C53C:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x08A2C54Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C54Cu) goto L_08A2C54C;
    return;
L_08A2C54C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x08A2C55Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C55Cu) goto L_08A2C55C;
    return;
L_08A2C55C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(80)));
    if (aot_gpr[3] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(64)));
        goto L_08A2C6B4;
    }
    goto L_08A2C568;
L_08A2C568:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(4916));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(4916)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-128));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(1)));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[17] = (aot_gpr[20] + static_cast<std::uint32_t>(14));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[30] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[23] = (aot_gpr[20] + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (aot_gpr[17] + 0u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    goto L_08A2C5D8;
L_08A2C5D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A2C5E4u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C5E4u) goto L_08A2C5E4;
    return;
L_08A2C5E4:
    aot_gpr[5] = (aot_gpr[2] >> 24u);
    aot_gpr[3] = (aot_gpr[2] >> 8u);
    aot_gpr[4] = (aot_gpr[2] >> 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A2C5D8;
      }
      goto L_08A2C608;
    }
L_08A2C608:
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[2] = (aot_gpr[21] + static_cast<std::uint32_t>(132));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(30));
    aot_gpr[17] = (aot_gpr[4] - aot_gpr[23]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[19] = (aot_gpr[4] - aot_gpr[20]);
    aot_gpr[22] = (aot_gpr[23] + 0u);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[31] = (0x08A2C670u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C670u) goto L_08A2C670;
    return;
L_08A2C670:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08A2C680u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C680u) goto L_08A2C680;
    return;
L_08A2C680:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
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
L_08A2C6B4:
    aot_gpr[16] = (aot_gpr[21] + static_cast<std::uint32_t>(120));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[17] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[2] >> 16u);
    aot_gpr[2] = (aot_gpr[2] >> 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (aot_gpr[2] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_08A2C878;
      }
      goto L_08A2C6E4;
    }
L_08A2C6E4:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    goto L_08A2C6E8;
L_08A2C6E8:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(22));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[2] = (aot_gpr[20] + static_cast<std::uint32_t>(11));
    aot_gpr[16] = (aot_gpr[20] + static_cast<std::uint32_t>(44));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[17] = (aot_gpr[20] + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[22] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[19] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[19] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[19] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[19] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[19] + static_cast<std::uint32_t>(19), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[19] + static_cast<std::uint32_t>(23), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_left(aot_gpr[19] + static_cast<std::uint32_t>(27), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_left(aot_gpr[19] + static_cast<std::uint32_t>(31), aot_gpr[11]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[19] + static_cast<std::uint32_t>(20), aot_gpr[9]));
    aot_gpr[11] = (rt.memory().aot_load_word_right(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[11]));
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[10]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[8]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(19), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(23), aot_gpr[9]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(27), aot_gpr[10]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(31), aot_gpr[11]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[11]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (aot_gpr[21] - aot_gpr[6]);
    aot_gpr[31] = (0x08A2C7C8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A2C7C8u) goto L_08A2C7C8;
    return;
L_08A2C7C8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4916));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(6));
    aot_gpr[17] = (aot_gpr[4] - aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(1)));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[7] = (aot_gpr[17] >> 8u);
    aot_gpr[8] = (aot_gpr[5] >> 8u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[19] = (aot_gpr[4] - aot_gpr[20]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[18]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[31] = (0x08A2C834u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C834u) goto L_08A2C834;
    return;
L_08A2C834:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x08A2C844u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C844u) goto L_08A2C844;
    return;
L_08A2C844:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
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
L_08A2C878:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(76)));
    goto L_08A2C87C;
L_08A2C87C:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A2C884u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C884u) goto L_08A2C884;
    return;
L_08A2C884:
    aot_gpr[5] = (aot_gpr[2] >> 24u);
    aot_gpr[3] = (aot_gpr[2] >> 8u);
    aot_gpr[4] = (aot_gpr[2] >> 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2C6E8;
      }
      goto L_08A2C8B0;
    }
L_08A2C8B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A2C8BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C8BCu) goto L_08A2C8BC;
    return;
L_08A2C8BC:
    aot_gpr[5] = (aot_gpr[2] >> 24u);
    aot_gpr[3] = (aot_gpr[2] >> 8u);
    aot_gpr[4] = (aot_gpr[2] >> 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[17] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(76)));
        goto L_08A2C87C;
    }
    goto L_08A2C8E8;
L_08A2C8E8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    goto L_08A2C6E8;
L_08A2C8F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A2CB60;
      }
      goto L_08A2C92C;
    }
L_08A2C92C:
    aot_gpr[31] = (0x08A2C934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 4u, 0x0899901Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C934u) goto L_08A2C934;
    return;
L_08A2C934:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A2CB60;
      }
      goto L_08A2C93C;
    }
L_08A2C93C:
    aot_gpr[16] = (aot_gpr[17] + 0u);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    goto L_08A2C948;
L_08A2C948:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A2C950u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C950u) goto L_08A2C950;
    return;
L_08A2C950:
    aot_gpr[5] = (aot_gpr[2] >> 24u);
    aot_gpr[3] = (aot_gpr[2] >> 8u);
    aot_gpr[4] = (aot_gpr[2] >> 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(226), static_cast<std::uint8_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-4));
    if (aot_gpr[16] != aot_gpr[18]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
        goto L_08A2C948;
    }
    goto L_08A2C978;
L_08A2C978:
    aot_gpr[23] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(22));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[4] = (aot_gpr[23] >> 8u);
    aot_gpr[5] = (aot_gpr[21] >> 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (aot_gpr[21] >> 8u);
    aot_gpr[19] = (aot_gpr[21] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[30] = (aot_gpr[20] + static_cast<std::uint32_t>(5));
    aot_gpr[22] = (aot_gpr[20] + static_cast<std::uint32_t>(9));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[23]));
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[21]));
      if (branch_taken) {
          goto L_08A2CA00;
      }
      goto L_08A2C9D0;
    }
L_08A2C9D0:
    aot_gpr[16] = (aot_gpr[22] + aot_gpr[19]);
    aot_gpr[18] = (0u + 0u);
    goto L_08A2C9D8;
L_08A2C9D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    goto L_08A2C9DC;
L_08A2C9DC:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A2C9E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C9E4u) goto L_08A2C9E4;
    return;
L_08A2C9E4:
    aot_gpr[2] = (aot_gpr[2] & 255u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
        goto L_08A2C9DC;
    }
    goto L_08A2C9F0;
L_08A2C9F0:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[19];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A2C9D8;
      }
      goto L_08A2CA00;
    }
L_08A2CA00:
    aot_gpr[9] = (aot_gpr[22] + aot_gpr[21]);
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(180));
    aot_gpr[6] = (aot_gpr[9] + static_cast<std::uint32_t>(-48));
    aot_gpr[3] = (aot_gpr[7] | aot_gpr[6]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (aot_gpr[3] & 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(228));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(-49), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2CAC0;
      }
      goto L_08A2CA2C;
    }
L_08A2CA2C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2CA2C;
      }
      goto L_08A2CA58;
    }
L_08A2CA58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_08A2CA5C;
L_08A2CA5C:
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08A2CA6Cu);
    aot_gpr[16] = (aot_gpr[9] - aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 5u, 0x08999024u>(ctx, &aot_mem) && ctx.pc == 0x08A2CA6Cu) goto L_08A2CA6C;
    return;
L_08A2CA6C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(436));
    aot_gpr[5] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (0x08A2CA7Cu);
    aot_gpr[6] = (aot_gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2CA7Cu) goto L_08A2CA7C;
    return;
L_08A2CA7C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(340));
    aot_gpr[5] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (0x08A2CA8Cu);
    aot_gpr[6] = (aot_gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2CA8Cu) goto L_08A2CA8C;
    return;
L_08A2CA8C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CAC0:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-1), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2CA58;
      }
      goto L_08A2CB0C;
    }
L_08A2CB0C:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-1), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2CAC0;
      }
      goto L_08A2CB58;
    }
L_08A2CB58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_08A2CA5C;
L_08A2CB60:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CB98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(20));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A2CBEC;
      }
      goto L_08A2CBD4;
    }
L_08A2CBD4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(180));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(116));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(148));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(228));
      if (branch_taken) {
          goto L_08A2CC28;
      }
      goto L_08A2CBEC;
    }
L_08A2CBEC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(532));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(308));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A2CC58;
      }
      goto L_08A2CC0C;
    }
L_08A2CC0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CC28:
    aot_gpr[31] = (0x08A2CC30u);
    // nop
    goto L_08A2C25C;
L_08A2CC30:
    aot_gpr[31] = (0x08A2CC38u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0551_entry, 551u, 194u, 0x08A2BDF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2CC38u) goto L_08A2CC38;
    return;
L_08A2CC38:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(532));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(308));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A2CC0C;
      }
      goto L_08A2CC58;
    }
L_08A2CC58:
    aot_gpr[31] = (0x08A2CC60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 160u, 0x08A44C68u>(ctx, &aot_mem) && ctx.pc == 0x08A2CC60u) goto L_08A2CC60;
    return;
L_08A2CC60:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CC7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(36));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(60));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    aot_gpr[20] = (aot_gpr[19] + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(9));
    aot_gpr[6] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2CCD8;
      }
      goto L_08A2CCD0;
    }
L_08A2CCD0:
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(56));
    goto L_08A2CCD8;
L_08A2CCD8:
    aot_gpr[18] = (aot_gpr[11] - aot_gpr[22]);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(22));
    aot_gpr[10] = (aot_gpr[8] >> 8u);
    aot_gpr[9] = (aot_gpr[8] >> 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[10]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[11]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A2CD1Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 234u, 0x08A2AED4u>(ctx, &aot_mem) && ctx.pc == 0x08A2CD1Cu) goto L_08A2CD1C;
    return;
L_08A2CD1C:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[17] - aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(436));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08A2CD34u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2CD34u) goto L_08A2CD34;
    return;
L_08A2CD34:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08A2CD44u);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(340));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2CD44u) goto L_08A2CD44;
    return;
L_08A2CD44:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    aot_gpr[9] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2CD60u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0551_entry, 551u, 46u, 0x08A2B328u>(ctx, &aot_mem) && ctx.pc == 0x08A2CD60u) goto L_08A2CD60;
    return;
L_08A2CD60:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (aot_gpr[22] + aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(532));
    aot_gpr[31] = (0x08A2CD78u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 167u, 0x08A44CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2CD78u) goto L_08A2CD78;
    return;
L_08A2CD78:
    aot_gpr[2] = (aot_gpr[17] - aot_gpr[19]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08A2CDA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[6] + 0u);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[9] = (aot_gpr[3] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A2CE4C;
      }
      goto L_08A2CDE4;
    }
L_08A2CDE4:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A2CE40;
      }
      goto L_08A2CDEC;
    }
L_08A2CDEC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[2] - aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[9] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08A2CE24;
      }
      goto L_08A2CE04;
    }
L_08A2CE04:
    aot_gpr[31] = (0x08A2CE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0551_entry, 551u, 46u, 0x08A2B328u>(ctx, &aot_mem) && ctx.pc == 0x08A2CE0Cu) goto L_08A2CE0C;
    return;
L_08A2CE0C:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[16]);
    aot_gpr[31] = (0x08A2CE20u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 158u, 0x08A3A7ECu>(ctx, &aot_mem) && ctx.pc == 0x08A2CE20u) goto L_08A2CE20;
    return;
L_08A2CE20:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08A2CE24;
L_08A2CE24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CE40:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A2CDEC;
      }
      goto L_08A2CE4C;
    }
L_08A2CE4C:
    aot_gpr[10] = (0u + 0u);
    goto L_08A2CDEC;
L_08A2CE60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-17700)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-17700), aot_gpr[29]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    aot_gpr[31] = (0x08A2CE8Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A2CEA4;
L_08A2CE8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-17700), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CEA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-17700)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-17700), aot_gpr[29]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08A2CED8;
      }
      goto L_08A2CED0;
    }
L_08A2CED0:
    aot_gpr[31] = (0x08A2CED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A2CED8u) goto L_08A2CED8;
    return;
L_08A2CED8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-17700), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CEF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A2CF00u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 5u, 0x08A2D068u>(ctx, &aot_mem) && ctx.pc == 0x08A2CF00u) goto L_08A2CF00;
    return;
L_08A2CF00:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CF0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (2217u << 16u);
      if (branch_taken) {
          goto L_08A2CF38;
      }
      goto L_08A2CF2C;
    }
L_08A2CF2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(30392)));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2CF40;
      }
      goto L_08A2CF38;
    }
L_08A2CF38:
    aot_gpr[31] = (0x08A2CF40u);
    // nop
    goto L_08A2CEF0;
L_08A2CF40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(30392)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(30392), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CF60:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2CFF4;
      }
      goto L_08A2CF70;
    }
L_08A2CF70:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(5608)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CF88:
    aot_gpr[2] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5224));
      if (branch_taken) {
          goto L_08A2CFF4;
      }
      goto L_08A2CF94;
    }
L_08A2CF94:
    aot_gpr[2] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5244));
      if (branch_taken) {
          goto L_08A2CFF4;
      }
      goto L_08A2CFA0;
    }
L_08A2CFA0:
    aot_gpr[2] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5300));
      if (branch_taken) {
          goto L_08A2CFF4;
      }
      goto L_08A2CFAC;
    }
L_08A2CFAC:
    aot_gpr[2] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5352));
      if (branch_taken) {
          goto L_08A2CFF4;
      }
      goto L_08A2CFB8;
    }
L_08A2CFB8:
    aot_gpr[2] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5420));
      if (branch_taken) {
          goto L_08A2CFF4;
      }
      goto L_08A2CFC4;
    }
L_08A2CFC4:
    aot_gpr[2] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5452));
      if (branch_taken) {
          goto L_08A2CFF4;
      }
      goto L_08A2CFD0;
    }
L_08A2CFD0:
    aot_gpr[2] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5488));
      if (branch_taken) {
          goto L_08A2CFF4;
      }
      goto L_08A2CFDC;
    }
L_08A2CFDC:
    aot_gpr[2] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5512));
      if (branch_taken) {
          goto L_08A2CFF4;
      }
      goto L_08A2CFE8;
    }
L_08A2CFE8:
    aot_gpr[2] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5540));
      if (branch_taken) {
          goto L_08A2CFF4;
      }
      goto L_08A2CFF4;
    }
L_08A2CFF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CFFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.pc = 0x08A2D000u; return;
}

void recomp_unit_0552(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0552_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_552(Runtime &runtime) {
    runtime.register_generated_unit(552u, 0x08A2C000u, 4096u, &recomp_unit_0552, &recomp_unit_0552_entry);
    runtime.register_function(0x08A2C000u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C028u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C038u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C04Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C054u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C080u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C08Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C0A0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C0B4u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C0C8u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C0DCu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C0ECu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C0FCu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C108u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C110u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C13Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C144u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C158u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C168u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C178u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C188u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C198u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C1A8u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C1B4u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C1BCu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C1E8u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C1F0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C204u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C214u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C224u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C234u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C244u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C254u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C25Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C2A0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C2B0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C2B8u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C2E4u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C2F0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C304u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C314u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C324u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C334u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C344u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C354u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C360u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C368u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C394u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C39Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C3B0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C3C0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C3D0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C3E0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C3F0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C400u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C40Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C414u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C440u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C448u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C45Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C46Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C47Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C48Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C49Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C4ACu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C4B8u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C4E0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C534u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C53Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C54Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C55Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C568u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C5D8u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C5E4u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C608u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C670u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C680u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C6B4u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C6E4u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C6E8u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C7C8u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C834u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C844u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C878u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C87Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C884u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C8B0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C8BCu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C8E8u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C8F0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C92Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C934u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C93Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C948u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C950u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C978u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C9D0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C9D8u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C9DCu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C9E4u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2C9F0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CA00u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CA2Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CA58u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CA5Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CA6Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CA7Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CA8Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CAC0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CB0Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CB58u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CB60u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CB98u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CBD4u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CBECu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CC0Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CC28u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CC30u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CC38u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CC58u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CC60u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CC7Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CCD0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CCD8u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CD1Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CD34u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CD44u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CD60u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CD78u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CDA4u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CDE4u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CDECu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CE04u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CE0Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CE20u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CE24u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CE40u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CE4Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CE60u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CE8Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CEA4u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CED0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CED8u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CEF0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CF00u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CF0Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CF2Cu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CF38u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CF40u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CF60u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CF70u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CF88u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CF94u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CFA0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CFACu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CFB8u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CFC4u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CFD0u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CFDCu, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CFE8u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CFF4u, &recomp_unit_0552, "recomp_unit_0552");
    runtime.register_function(0x08A2CFFCu, &recomp_unit_0552, "recomp_unit_0552");
}
} // namespace psprecomp
