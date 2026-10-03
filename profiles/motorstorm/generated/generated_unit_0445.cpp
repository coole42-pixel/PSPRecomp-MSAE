#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0445[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0,
    5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 9, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 31, 0, 0, 0, 0, 0,
    0, 0, 32, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 37, 38, 0, 39, 0, 40, 0, 41, 0, 0, 0, 42, 43,
    0, 44, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 59, 0, 0, 0, 60, 0, 61, 0, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 77, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 85, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 98, 99, 0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 103, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 124, 0, 125,
    0, 126, 0, 127, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 134, 0, 0, 135, 0, 136,
    0, 137, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0,
    147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0,
    161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    169, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0,
    193, 0, 0, 194, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199,
};
void recomp_unit_0445_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089C1000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0445[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C1000;
    case 2u: goto L_089C10C8;
    case 3u: goto L_089C10F0;
    case 4u: goto L_089C10F8;
    case 5u: goto L_089C1100;
    case 6u: goto L_089C1110;
    case 7u: goto L_089C1134;
    case 8u: goto L_089C113C;
    case 9u: goto L_089C1140;
    case 10u: goto L_089C1144;
    case 11u: goto L_089C1154;
    case 12u: goto L_089C1190;
    case 13u: goto L_089C1198;
    case 14u: goto L_089C11A8;
    case 15u: goto L_089C11B0;
    case 16u: goto L_089C11B8;
    case 17u: goto L_089C11C0;
    case 18u: goto L_089C11E8;
    case 19u: goto L_089C11FC;
    case 20u: goto L_089C1204;
    case 21u: goto L_089C1228;
    case 22u: goto L_089C1250;
    case 23u: goto L_089C1254;
    case 24u: goto L_089C1278;
    case 25u: goto L_089C12AC;
    case 26u: goto L_089C12B4;
    case 27u: goto L_089C12BC;
    case 28u: goto L_089C12C4;
    case 29u: goto L_089C12D0;
    case 30u: goto L_089C12E4;
    case 31u: goto L_089C12E8;
    case 32u: goto L_089C1308;
    case 33u: goto L_089C130C;
    case 34u: goto L_089C132C;
    case 35u: goto L_089C1334;
    case 36u: goto L_089C133C;
    case 37u: goto L_089C134C;
    case 38u: goto L_089C1350;
    case 39u: goto L_089C1358;
    case 40u: goto L_089C1360;
    case 41u: goto L_089C1368;
    case 42u: goto L_089C1378;
    case 43u: goto L_089C137C;
    case 44u: goto L_089C1384;
    case 45u: goto L_089C138C;
    case 46u: goto L_089C1394;
    case 47u: goto L_089C13A4;
    case 48u: goto L_089C13B0;
    case 49u: goto L_089C140C;
    case 50u: goto L_089C1414;
    case 51u: goto L_089C141C;
    case 52u: goto L_089C1424;
    case 53u: goto L_089C142C;
    case 54u: goto L_089C1434;
    case 55u: goto L_089C1450;
    case 56u: goto L_089C145C;
    case 57u: goto L_089C1474;
    case 58u: goto L_089C1498;
    case 59u: goto L_089C149C;
    case 60u: goto L_089C14AC;
    case 61u: goto L_089C14B4;
    case 62u: goto L_089C14C0;
    case 63u: goto L_089C14C4;
    case 64u: goto L_089C14F4;
    case 65u: goto L_089C150C;
    case 66u: goto L_089C1524;
    case 67u: goto L_089C1530;
    case 68u: goto L_089C1544;
    case 69u: goto L_089C1550;
    case 70u: goto L_089C1564;
    case 71u: goto L_089C1594;
    case 72u: goto L_089C159C;
    case 73u: goto L_089C15B8;
    case 74u: goto L_089C15EC;
    case 75u: goto L_089C161C;
    case 76u: goto L_089C167C;
    case 77u: goto L_089C1684;
    case 78u: goto L_089C1694;
    case 79u: goto L_089C169C;
    case 80u: goto L_089C16A4;
    case 81u: goto L_089C16AC;
    case 82u: goto L_089C16B4;
    case 83u: goto L_089C16E8;
    case 84u: goto L_089C1708;
    case 85u: goto L_089C1710;
    case 86u: goto L_089C1714;
    case 87u: goto L_089C1748;
    case 88u: goto L_089C178C;
    case 89u: goto L_089C1794;
    case 90u: goto L_089C17E8;
    case 91u: goto L_089C17EC;
    case 92u: goto L_089C1820;
    case 93u: goto L_089C1838;
    case 94u: goto L_089C1840;
    case 95u: goto L_089C184C;
    case 96u: goto L_089C1858;
    case 97u: goto L_089C1870;
    case 98u: goto L_089C1888;
    case 99u: goto L_089C188C;
    case 100u: goto L_089C1898;
    case 101u: goto L_089C18A0;
    case 102u: goto L_089C18B4;
    case 103u: goto L_089C18B8;
    case 104u: goto L_089C18C4;
    case 105u: goto L_089C18D0;
    case 106u: goto L_089C18D8;
    case 107u: goto L_089C18E4;
    case 108u: goto L_089C1900;
    case 109u: goto L_089C1910;
    case 110u: goto L_089C1918;
    case 111u: goto L_089C1924;
    case 112u: goto L_089C1944;
    case 113u: goto L_089C1954;
    case 114u: goto L_089C195C;
    case 115u: goto L_089C1968;
    case 116u: goto L_089C1994;
    case 117u: goto L_089C19A8;
    case 118u: goto L_089C19B4;
    case 119u: goto L_089C19C0;
    case 120u: goto L_089C19C8;
    case 121u: goto L_089C19D0;
    case 122u: goto L_089C19E0;
    case 123u: goto L_089C19EC;
    case 124u: goto L_089C19F4;
    case 125u: goto L_089C19FC;
    case 126u: goto L_089C1A04;
    case 127u: goto L_089C1A0C;
    case 128u: goto L_089C1A14;
    case 129u: goto L_089C1A20;
    case 130u: goto L_089C1A2C;
    case 131u: goto L_089C1A4C;
    case 132u: goto L_089C1A54;
    case 133u: goto L_089C1A64;
    case 134u: goto L_089C1A68;
    case 135u: goto L_089C1A74;
    case 136u: goto L_089C1A7C;
    case 137u: goto L_089C1A84;
    case 138u: goto L_089C1A8C;
    case 139u: goto L_089C1A94;
    case 140u: goto L_089C1AA4;
    case 141u: goto L_089C1ABC;
    case 142u: goto L_089C1AC8;
    case 143u: goto L_089C1AD0;
    case 144u: goto L_089C1ADC;
    case 145u: goto L_089C1AE8;
    case 146u: goto L_089C1AF0;
    case 147u: goto L_089C1B00;
    case 148u: goto L_089C1B0C;
    case 149u: goto L_089C1B30;
    case 150u: goto L_089C1B44;
    case 151u: goto L_089C1B4C;
    case 152u: goto L_089C1B54;
    case 153u: goto L_089C1B60;
    case 154u: goto L_089C1B7C;
    case 155u: goto L_089C1B94;
    case 156u: goto L_089C1BA4;
    case 157u: goto L_089C1BB8;
    case 158u: goto L_089C1BD4;
    case 159u: goto L_089C1BE8;
    case 160u: goto L_089C1BF4;
    case 161u: goto L_089C1C00;
    case 162u: goto L_089C1C08;
    case 163u: goto L_089C1C10;
    case 164u: goto L_089C1C28;
    case 165u: goto L_089C1C30;
    case 166u: goto L_089C1C38;
    case 167u: goto L_089C1C48;
    case 168u: goto L_089C1C6C;
    case 169u: goto L_089C1C80;
    case 170u: goto L_089C1C84;
    case 171u: goto L_089C1C94;
    case 172u: goto L_089C1CA0;
    case 173u: goto L_089C1CBC;
    case 174u: goto L_089C1CC8;
    case 175u: goto L_089C1CD4;
    case 176u: goto L_089C1CE8;
    case 177u: goto L_089C1D00;
    case 178u: goto L_089C1D10;
    case 179u: goto L_089C1D6C;
    case 180u: goto L_089C1DA4;
    case 181u: goto L_089C1DCC;
    case 182u: goto L_089C1DF8;
    case 183u: goto L_089C1E08;
    case 184u: goto L_089C1E74;
    case 185u: goto L_089C1E7C;
    case 186u: goto L_089C1E90;
    case 187u: goto L_089C1EC4;
    case 188u: goto L_089C1F1C;
    case 189u: goto L_089C1F30;
    case 190u: goto L_089C1F3C;
    case 191u: goto L_089C1F68;
    case 192u: goto L_089C1F70;
    case 193u: goto L_089C1F80;
    case 194u: goto L_089C1F8C;
    case 195u: goto L_089C1F90;
    case 196u: goto L_089C1FC0;
    case 197u: goto L_089C1FE4;
    case 198u: goto L_089C1FF0;
    case 199u: goto L_089C1FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C1000:
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18332));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(124), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(18836));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(128), aot_gpr[4]);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(132), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(20648));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2796), aot_gpr[5]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21228));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(136), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(18992));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(140), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19652));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(144), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(19644));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(148), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19076));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(152), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(24844));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(156), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24868));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(160), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-21412));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(164), aot_gpr[4]);
    aot_gpr[4] = (2205u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20720));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(168), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-20696));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(172), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24912));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(176), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(24940));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(180), aot_gpr[4]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(184), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C10C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
      if (branch_taken) {
          goto L_089C113C;
      }
      goto L_089C10F0;
    }
L_089C10F0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089C1140;
      }
      goto L_089C10F8;
    }
L_089C10F8:
    if (aot_gpr[5] == 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_089C1144;
    }
    goto L_089C1100;
L_089C1100:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(188)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C1110u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(428)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C1110u) goto L_089C1110;
    return;
L_089C1110:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(428), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(432), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C1134u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C1134u) goto L_089C1134;
    return;
L_089C1134:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(440), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), 0u);
    goto L_089C113C;
L_089C113C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089C1140;
L_089C1140:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089C1144;
L_089C1144:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1154:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (2217u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_089C1204;
      }
      goto L_089C1190;
    }
L_089C1190:
    if (aot_gpr[4] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_089C1254;
    }
    goto L_089C1198;
L_089C1198:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 54502u);
      if (branch_taken) {
          goto L_089C1204;
      }
      goto L_089C11A8;
    }
L_089C11A8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089C1254;
      }
      goto L_089C11B0;
    }
L_089C11B0:
    aot_gpr[31] = (0x089C11B8u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089C11B8u) goto L_089C11B8;
    return;
L_089C11B8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[2] = (aot_gpr[16] << 3u);
      if (branch_taken) {
          goto L_089C1250;
      }
      goto L_089C11C0;
    }
L_089C11C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (aot_gpr[16] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2792)));
      if (branch_taken) {
          goto L_089C1228;
      }
      goto L_089C11E8;
    }
L_089C11E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C11FCu);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C11FCu) goto L_089C11FC;
    return;
L_089C11FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C1228;
      }
      goto L_089C1204;
    }
L_089C1204:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1228:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1250:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089C1254;
L_089C1254:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1278:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089C12E8;
      }
      goto L_089C12AC;
    }
L_089C12AC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089C130C;
      }
      goto L_089C12B4;
    }
L_089C12B4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089C130C;
      }
      goto L_089C12BC;
    }
L_089C12BC:
    aot_gpr[31] = (0x089C12C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089C12C4u) goto L_089C12C4;
    return;
L_089C12C4:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[6] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089C1308;
      }
      goto L_089C12D0;
    }
L_089C12D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C12E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C12E4u) goto L_089C12E4;
    return;
L_089C12E4:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089C12E8;
L_089C12E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1308:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089C130C;
L_089C130C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C132C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C1350;
      }
      goto L_089C1334;
    }
L_089C1334:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089C134C;
      }
      goto L_089C133C;
    }
L_089C133C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C134C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C1350;
L_089C1350:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1358:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C137C;
      }
      goto L_089C1360;
    }
L_089C1360:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089C1378;
      }
      goto L_089C1368;
    }
L_089C1368:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1378:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C137C;
L_089C137C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1384:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089C13A4;
      }
      goto L_089C138C;
    }
L_089C138C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089C13A4;
      }
      goto L_089C1394;
    }
L_089C1394:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(78)));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C13A4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C13B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[23] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_089C14C4;
      }
      goto L_089C140C;
    }
L_089C140C:
    if (aot_gpr[4] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089C15EC;
    }
    goto L_089C1414;
L_089C1414:
    if (aot_gpr[5] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089C15EC;
    }
    goto L_089C141C;
L_089C141C:
    if (aot_gpr[6] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089C15EC;
    }
    goto L_089C1424;
L_089C1424:
    if (aot_gpr[7] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089C15EC;
    }
    goto L_089C142C;
L_089C142C:
    if (aot_gpr[8] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089C15EC;
    }
    goto L_089C1434;
L_089C1434:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C14F4;
      }
      goto L_089C1450;
    }
L_089C1450:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    goto L_089C145C;
L_089C145C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[3] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), 0u);
        goto L_089C14B4;
    }
    goto L_089C1474;
L_089C1474:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] << 4u);
    aot_gpr[2] = (aot_gpr[10] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089C149C;
      }
      goto L_089C1498;
    }
L_089C1498:
    rt.unsupported(0x089C1498u, 0x000001CDu, "special? not lowered yet"); return;
L_089C149C:
    aot_gpr[2] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(101) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089C14B4;
      }
      goto L_089C14AC;
    }
L_089C14AC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089C14B4;
L_089C14B4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089C15B8;
      }
      goto L_089C14C0;
    }
L_089C14C0:
    aot_gpr[2] = (0u + 0u);
    goto L_089C14C4;
L_089C14C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C14F4:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    goto L_089C1524;
L_089C150C:
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[4] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C145C;
      }
      goto L_089C1524;
    }
L_089C1524:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089C150C;
      }
      goto L_089C1530;
    }
L_089C1530:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(440)));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[9] = (aot_gpr[30] + 0u);
      if (branch_taken) {
          goto L_089C150C;
      }
      goto L_089C1544;
    }
L_089C1544:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C1550u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C1550u) goto L_089C1550;
    return;
L_089C1550:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[9] = (aot_gpr[30] + 0u);
      if (branch_taken) {
          goto L_089C14C0;
      }
      goto L_089C1564;
    }
L_089C1564:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[10]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C1594u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C1594u) goto L_089C1594;
    return;
L_089C1594:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089C14C0;
      }
      goto L_089C159C;
    }
L_089C159C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    goto L_089C150C;
L_089C15B8:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C15EC:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C161C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[21] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[20] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_089C1714;
      }
      goto L_089C167C;
    }
L_089C167C:
    if (aot_gpr[4] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_089C17EC;
    }
    goto L_089C1684;
L_089C1684:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_089C17EC;
    }
    goto L_089C1694;
L_089C1694:
    if (aot_gpr[18] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_089C17EC;
    }
    goto L_089C169C;
L_089C169C:
    if (aot_gpr[8] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_089C17EC;
    }
    goto L_089C16A4;
L_089C16A4:
    if (aot_gpr[7] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_089C17EC;
    }
    goto L_089C16AC;
L_089C16AC:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[2] = (aot_gpr[5] << 3u);
      if (branch_taken) {
          goto L_089C17E8;
      }
      goto L_089C16B4;
    }
L_089C16B4:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[23] = (aot_gpr[2] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[23]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C1710;
      }
      goto L_089C16E8;
    }
L_089C16E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (aot_gpr[22] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C1708u);
    aot_gpr[9] = (aot_gpr[30] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C1708u) goto L_089C1708;
    return;
L_089C1708:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C1748;
      }
      goto L_089C1710;
    }
L_089C1710:
    aot_gpr[6] = (0u + 0u);
    goto L_089C1714;
L_089C1714:
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
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1748:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[22] + 0u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[30] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[23] + aot_gpr[3]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C178Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(436)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C178Cu) goto L_089C178C;
    return;
L_089C178C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C1710;
      }
      goto L_089C1794;
    }
L_089C1794:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] + 0u);
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
L_089C17E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089C17EC;
L_089C17EC:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1820:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089C184C;
      }
      goto L_089C1838;
    }
L_089C1838:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C184C;
      }
      goto L_089C1840;
    }
L_089C1840:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C184Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C184Cu) goto L_089C184C;
    return;
L_089C184C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1858:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089C18D0;
      }
      goto L_089C1870;
    }
L_089C1870:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-7));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089C18B8;
      }
      goto L_089C1888;
    }
L_089C1888:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(584));
    goto L_089C188C;
L_089C188C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C18C4;
      }
      goto L_089C1898;
    }
L_089C1898:
    { const bool branch_taken = aot_gpr[8] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_089C18D0;
      }
      goto L_089C18A0;
    }
L_089C18A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-7));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C188C;
      }
      goto L_089C18B4;
    }
L_089C18B4:
    aot_gpr[7] = (aot_gpr[7] & 65535u);
    goto L_089C18B8;
L_089C18B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[7]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C18C4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C18D0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C18D8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    if (aot_gpr[4] != 0u) aot_gpr[2] = (0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C18E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C1918;
      }
      goto L_089C1900;
    }
L_089C1900:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(192)));
    aot_gpr[6] = (aot_gpr[6] | 32768u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u | 54509u);
      if (branch_taken) {
          goto L_089C1918;
      }
      goto L_089C1910;
    }
L_089C1910:
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089C1918u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C1918u) goto L_089C1918;
    return;
L_089C1918:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1924:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[8] = (aot_gpr[8] & 65535u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C195C;
      }
      goto L_089C1944;
    }
L_089C1944:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[8] = (aot_gpr[8] | 32768u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u | 54509u);
      if (branch_taken) {
          goto L_089C195C;
      }
      goto L_089C1954;
    }
L_089C1954:
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089C195Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C195Cu) goto L_089C195C;
    return;
L_089C195C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1968:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[8] = (aot_gpr[7] + 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
      if (branch_taken) {
          goto L_089C19B4;
      }
      goto L_089C1994;
    }
L_089C1994:
    aot_gpr[7] = (aot_gpr[6] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C19B4;
      }
      goto L_089C19A8;
    }
L_089C19A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C19B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C19B4u) goto L_089C19B4;
    return;
L_089C19B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C19C0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089C19E0;
      }
      goto L_089C19C8;
    }
L_089C19C8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089C19E0;
      }
      goto L_089C19D0;
    }
L_089C19D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C19E0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C19EC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C19FC;
      }
      goto L_089C19F4;
    }
L_089C19F4:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[2] = (0u + 0u);
    goto L_089C19FC;
L_089C19FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1A04:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1A7C;
      }
      goto L_089C1A0C;
    }
L_089C1A0C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089C1A7C;
      }
      goto L_089C1A14;
    }
L_089C1A14:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_089C1A74;
      }
      goto L_089C1A20;
    }
L_089C1A20:
    aot_gpr[7] = (0u + 0u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089C1A2C;
L_089C1A2C:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(584));
    aot_gpr[2] = (aot_gpr[9] << (aot_gpr[3] & 31u));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[2] & 134u);
      if (branch_taken) {
          goto L_089C1A64;
      }
      goto L_089C1A4C;
    }
L_089C1A4C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[6] & 65535u);
      if (branch_taken) {
          goto L_089C1A68;
      }
      goto L_089C1A54;
    }
L_089C1A54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089C1A64;
L_089C1A64:
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    goto L_089C1A68;
L_089C1A68:
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_089C1A2C;
    }
    goto L_089C1A74;
L_089C1A74:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1A7C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1A84:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[3] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_089C1AD0;
      }
      goto L_089C1A8C;
    }
L_089C1A8C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089C1AD0;
      }
      goto L_089C1A94;
    }
L_089C1A94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089C1AD0;
      }
      goto L_089C1AA4;
    }
L_089C1AA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[3] << 4u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[4]);
      if (branch_taken) {
          goto L_089C1AC8;
      }
      goto L_089C1ABC;
    }
L_089C1ABC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089C1AC8;
L_089C1AC8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1AD0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1ADC:
    aot_gpr[3] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[6] & 65535u);
      if (branch_taken) {
          goto L_089C1B54;
      }
      goto L_089C1AE8;
    }
L_089C1AE8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089C1B54;
      }
      goto L_089C1AF0;
    }
L_089C1AF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089C1B54;
      }
      goto L_089C1B00;
    }
L_089C1B00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1B4C;
      }
      goto L_089C1B0C;
    }
L_089C1B0C:
    aot_gpr[2] = (aot_gpr[3] << 4u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[6] << 2u);
      if (branch_taken) {
          goto L_089C1B54;
      }
      goto L_089C1B30;
    }
L_089C1B30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1B4C;
      }
      goto L_089C1B44;
    }
L_089C1B44:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089C1B4C;
L_089C1B4C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1B54:
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1B60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[30]);
    aot_gpr[7] = (aot_gpr[7] & 65535u);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (aot_gpr[8] & 255u);
      if (branch_taken) {
          goto L_089C1C48;
      }
      goto L_089C1B7C;
    }
L_089C1B7C:
    aot_gpr[2] = (aot_gpr[6] << 2u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[25] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089C1C30;
      }
      goto L_089C1B94;
    }
L_089C1B94:
    aot_gpr[24] = (0u + 0u);
    aot_gpr[14] = (0u + 0u);
    aot_gpr[15] = (aot_gpr[29] + 0u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089C1BA4;
L_089C1BA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[12] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C1C00;
      }
      goto L_089C1BB8;
    }
L_089C1BB8:
    aot_gpr[3] = (aot_gpr[12] << 6u);
    aot_gpr[2] = (aot_gpr[12] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[12]);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[12];
    aot_gpr[13] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089C1C00;
      }
      goto L_089C1BD4;
    }
L_089C1BD4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[13]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1C00;
      }
      goto L_089C1BE8;
    }
L_089C1BE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1C00;
      }
      goto L_089C1BF4;
    }
L_089C1BF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    goto L_089C1C00;
L_089C1C00:
    if (aot_gpr[6] != aot_gpr[14]) {
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_089C1BA4;
    }
    goto L_089C1C08;
L_089C1C08:
    { const bool branch_taken = aot_gpr[24] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089C1C30;
      }
      goto L_089C1C10;
    }
L_089C1C10:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[25] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C1C28u);
    aot_gpr[6] = (aot_gpr[24] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C1C28u) goto L_089C1C28;
    return;
L_089C1C28:
    if (aot_gpr[2] != 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089C1C38;
    }
    goto L_089C1C30;
L_089C1C30:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089C1C38;
L_089C1C38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1C48:
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[14] & 65535u);
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[25] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089C1C30;
      }
      goto L_089C1C6C;
    }
L_089C1C6C:
    aot_gpr[24] = (0u + 0u);
    aot_gpr[12] = (0u + 0u);
    aot_gpr[13] = (0u + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    goto L_089C1C94;
L_089C1C80:
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    goto L_089C1C84;
L_089C1C84:
    aot_gpr[2] = (aot_gpr[14] & 65535u);
    aot_gpr[2] = (aot_gpr[12] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C1C08;
      }
      goto L_089C1C94;
    }
L_089C1C94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[12] == aot_gpr[2]) {
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
        goto L_089C1C84;
    }
    goto L_089C1CA0;
L_089C1CA0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[13]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
        goto L_089C1C84;
    }
    goto L_089C1CBC;
L_089C1CBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(436)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
        goto L_089C1C84;
    }
    goto L_089C1CC8;
L_089C1CC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(440)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
        goto L_089C1C84;
    }
    goto L_089C1CD4;
L_089C1CD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089C1C80;
L_089C1CE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (aot_gpr[4] & 31u);
    aot_gpr[5] = ((aot_gpr[5] & ~0xFFFFF800u) | ((aot_gpr[4] & 0x001FFFFFu) << 11u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089C1D00u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089C1D00u) goto L_089C1D00;
    return;
L_089C1D00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1D10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x089C1D6Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_089C1858;
L_089C1D6C:
    aot_gpr[3] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[17] << 4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[9] = (0u | 54509u);
    aot_gpr[7] = (aot_gpr[4] << 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089C1DCC;
      }
      goto L_089C1DA4;
    }
L_089C1DA4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(10));
    aot_gpr[3] = (aot_gpr[8] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[3];
    aot_gpr[9] = (0u | 54510u);
      if (branch_taken) {
          goto L_089C1DF8;
      }
      goto L_089C1DCC;
    }
L_089C1DCC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[9] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1DF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089C1E08u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    goto L_089C1CE8;
L_089C1E08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[20] << 1u);
    aot_gpr[4] = (aot_gpr[5] << 6u);
    aot_gpr[3] = (aot_gpr[5] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(12));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(478)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE16(aot_gpr[9] + static_cast<std::uint32_t>(478), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[31] = (0x089C1E74u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 192u, 0x089CBDF0u>(ctx, &aot_mem) && ctx.pc == 0x089C1E74u) goto L_089C1E74;
    return;
L_089C1E74:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[9] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C1DCC;
      }
      goto L_089C1E7C;
    }
L_089C1E7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[18]);
      if (branch_taken) {
          goto L_089C1DCC;
      }
      goto L_089C1E90;
    }
L_089C1E90:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    goto L_089C1DCC;
L_089C1EC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[30] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    aot_gpr[31] = (0x089C1F1Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), 0u);
    goto L_089C1858;
L_089C1F1C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 54509u);
      if (branch_taken) {
          goto L_089C1F90;
      }
      goto L_089C1F30;
    }
L_089C1F30:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[2] = (aot_gpr[16] << 4u);
      if (branch_taken) {
          goto L_089C1F8C;
      }
      goto L_089C1F3C;
    }
L_089C1F3C:
    aot_gpr[3] = (aot_gpr[16] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[9] = (aot_gpr[21] + 0u);
    aot_gpr[10] = (aot_gpr[30] + static_cast<std::uint32_t>(14));
    aot_gpr[31] = (0x089C1F68u);
    aot_gpr[16] = (aot_gpr[11] + aot_gpr[3]);
    goto L_089C1D10;
L_089C1F68:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C1F90;
      }
      goto L_089C1F70;
    }
L_089C1F70:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 7u, 0x089C204Cu>(ctx, &aot_mem); return;
      }
      goto L_089C1F80;
    }
L_089C1F80:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_089C1FC0;
    }
    goto L_089C1F8C;
L_089C1F8C:
    aot_gpr[4] = (0u + 0u);
    goto L_089C1F90;
L_089C1F90:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1FC0:
    aot_gpr[6] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[8] & 65535u);
    aot_gpr[2] = (aot_gpr[3] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 5u, 0x089C2030u>(ctx, &aot_mem); return;
      }
      goto L_089C1FE4;
    }
L_089C1FE4:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    goto L_089C1FF0;
L_089C1FF0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (aot_gpr[4] << 2u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 3u, 0x089C201Cu>(ctx, &aot_mem); return;
      }
      goto L_089C1FF8;
    }
L_089C1FF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    ctx.pc = 0x089C2000u; return;
}

void recomp_unit_0445(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0445_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_445(Runtime &runtime) {
    runtime.register_generated_unit(445u, 0x089C1000u, 4096u, &recomp_unit_0445, &recomp_unit_0445_entry);
    runtime.register_function(0x089C1000u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C10C8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C10F0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C10F8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1100u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1110u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1134u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C113Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1140u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1144u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1154u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1190u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1198u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C11A8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C11B0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C11B8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C11C0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C11E8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C11FCu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1204u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1228u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1250u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1254u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1278u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C12ACu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C12B4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C12BCu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C12C4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C12D0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C12E4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C12E8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1308u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C130Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C132Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1334u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C133Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C134Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1350u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1358u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1360u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1368u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1378u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C137Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1384u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C138Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1394u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C13A4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C13B0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C140Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1414u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C141Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1424u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C142Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1434u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1450u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C145Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1474u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1498u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C149Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C14ACu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C14B4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C14C0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C14C4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C14F4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C150Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1524u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1530u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1544u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1550u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1564u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1594u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C159Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C15B8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C15ECu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C161Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C167Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1684u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1694u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C169Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C16A4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C16ACu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C16B4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C16E8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1708u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1710u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1714u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1748u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C178Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1794u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C17E8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C17ECu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1820u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1838u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1840u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C184Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1858u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1870u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1888u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C188Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1898u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C18A0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C18B4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C18B8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C18C4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C18D0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C18D8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C18E4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1900u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1910u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1918u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1924u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1944u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1954u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C195Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1968u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1994u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C19A8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C19B4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C19C0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C19C8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C19D0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C19E0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C19ECu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C19F4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C19FCu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1A04u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1A0Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1A14u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1A20u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1A2Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1A4Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1A54u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1A64u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1A68u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1A74u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1A7Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1A84u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1A8Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1A94u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1AA4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1ABCu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1AC8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1AD0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1ADCu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1AE8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1AF0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1B00u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1B0Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1B30u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1B44u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1B4Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1B54u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1B60u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1B7Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1B94u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1BA4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1BB8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1BD4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1BE8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1BF4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1C00u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1C08u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1C10u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1C28u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1C30u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1C38u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1C48u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1C6Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1C80u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1C84u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1C94u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1CA0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1CBCu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1CC8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1CD4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1CE8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1D00u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1D10u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1D6Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1DA4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1DCCu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1DF8u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1E08u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1E74u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1E7Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1E90u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1EC4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1F1Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1F30u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1F3Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1F68u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1F70u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1F80u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1F8Cu, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1F90u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1FC0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1FE4u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1FF0u, &recomp_unit_0445, "recomp_unit_0445");
    runtime.register_function(0x089C1FF8u, &recomp_unit_0445, "recomp_unit_0445");
}
} // namespace psprecomp
