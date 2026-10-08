#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0602[1024] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0,
    0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 18, 0, 0, 0, 19, 20, 0, 0, 0, 21, 22, 0, 0, 0, 23, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    29, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 33, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0,
    39, 40, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0,
    48, 0, 0, 49, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 55, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0,
    58, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0, 0, 62, 63, 0, 0, 0, 64, 0, 0, 65, 66, 0, 0, 0, 67, 0, 68, 69, 70,
    0, 0, 0, 71, 0, 0, 72, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0,
    0, 81, 82, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0, 86, 87, 0, 0, 0, 88, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0,
    0, 99, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0,
    0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120,
    0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 130,
    0, 0, 0, 131, 0, 0, 0, 132, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0,
    145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 152, 0, 0, 153, 0, 154, 0,
    0, 155, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0,
    162, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 170, 0,
    0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179,
    0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 184, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 207, 208, 0, 209, 0, 210, 0, 0,
    0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226,
    0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239,
};
void recomp_unit_0602_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A5E000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0602[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A5E000;
    case 2u: goto L_08A5E00C;
    case 3u: goto L_08A5E02C;
    case 4u: goto L_08A5E04C;
    case 5u: goto L_08A5E060;
    case 6u: goto L_08A5E078;
    case 7u: goto L_08A5E084;
    case 8u: goto L_08A5E090;
    case 9u: goto L_08A5E09C;
    case 10u: goto L_08A5E0A8;
    case 11u: goto L_08A5E0B4;
    case 12u: goto L_08A5E158;
    case 13u: goto L_08A5E16C;
    case 14u: goto L_08A5E178;
    case 15u: goto L_08A5E188;
    case 16u: goto L_08A5E1A0;
    case 17u: goto L_08A5E1B0;
    case 18u: goto L_08A5E1B4;
    case 19u: goto L_08A5E1C4;
    case 20u: goto L_08A5E1C8;
    case 21u: goto L_08A5E1D8;
    case 22u: goto L_08A5E1DC;
    case 23u: goto L_08A5E1EC;
    case 24u: goto L_08A5E1F8;
    case 25u: goto L_08A5E218;
    case 26u: goto L_08A5E234;
    case 27u: goto L_08A5E250;
    case 28u: goto L_08A5E264;
    case 29u: goto L_08A5E280;
    case 30u: goto L_08A5E288;
    case 31u: goto L_08A5E290;
    case 32u: goto L_08A5E29C;
    case 33u: goto L_08A5E2AC;
    case 34u: goto L_08A5E2B0;
    case 35u: goto L_08A5E2C4;
    case 36u: goto L_08A5E2D4;
    case 37u: goto L_08A5E2E4;
    case 38u: goto L_08A5E2F0;
    case 39u: goto L_08A5E300;
    case 40u: goto L_08A5E304;
    case 41u: goto L_08A5E30C;
    case 42u: goto L_08A5E31C;
    case 43u: goto L_08A5E328;
    case 44u: goto L_08A5E340;
    case 45u: goto L_08A5E354;
    case 46u: goto L_08A5E360;
    case 47u: goto L_08A5E374;
    case 48u: goto L_08A5E380;
    case 49u: goto L_08A5E38C;
    case 50u: goto L_08A5E394;
    case 51u: goto L_08A5E3A0;
    case 52u: goto L_08A5E3AC;
    case 53u: goto L_08A5E3C0;
    case 54u: goto L_08A5E3CC;
    case 55u: goto L_08A5E3D0;
    case 56u: goto L_08A5E3E4;
    case 57u: goto L_08A5E3F4;
    case 58u: goto L_08A5E400;
    case 59u: goto L_08A5E410;
    case 60u: goto L_08A5E41C;
    case 61u: goto L_08A5E42C;
    case 62u: goto L_08A5E438;
    case 63u: goto L_08A5E43C;
    case 64u: goto L_08A5E44C;
    case 65u: goto L_08A5E458;
    case 66u: goto L_08A5E45C;
    case 67u: goto L_08A5E46C;
    case 68u: goto L_08A5E474;
    case 69u: goto L_08A5E478;
    case 70u: goto L_08A5E47C;
    case 71u: goto L_08A5E48C;
    case 72u: goto L_08A5E498;
    case 73u: goto L_08A5E49C;
    case 74u: goto L_08A5E4AC;
    case 75u: goto L_08A5E4B4;
    case 76u: goto L_08A5E4C4;
    case 77u: goto L_08A5E4D0;
    case 78u: goto L_08A5E4E0;
    case 79u: goto L_08A5E4E8;
    case 80u: goto L_08A5E4F8;
    case 81u: goto L_08A5E504;
    case 82u: goto L_08A5E508;
    case 83u: goto L_08A5E518;
    case 84u: goto L_08A5E520;
    case 85u: goto L_08A5E530;
    case 86u: goto L_08A5E53C;
    case 87u: goto L_08A5E540;
    case 88u: goto L_08A5E550;
    case 89u: goto L_08A5E554;
    case 90u: goto L_08A5E564;
    case 91u: goto L_08A5E56C;
    case 92u: goto L_08A5E5A8;
    case 93u: goto L_08A5E5B4;
    case 94u: goto L_08A5E5BC;
    case 95u: goto L_08A5E5C8;
    case 96u: goto L_08A5E5D4;
    case 97u: goto L_08A5E5E8;
    case 98u: goto L_08A5E5F4;
    case 99u: goto L_08A5E604;
    case 100u: goto L_08A5E608;
    case 101u: goto L_08A5E610;
    case 102u: goto L_08A5E624;
    case 103u: goto L_08A5E630;
    case 104u: goto L_08A5E644;
    case 105u: goto L_08A5E664;
    case 106u: goto L_08A5E674;
    case 107u: goto L_08A5E688;
    case 108u: goto L_08A5E698;
    case 109u: goto L_08A5E6AC;
    case 110u: goto L_08A5E6C4;
    case 111u: goto L_08A5E6E0;
    case 112u: goto L_08A5E6F8;
    case 113u: goto L_08A5E708;
    case 114u: goto L_08A5E71C;
    case 115u: goto L_08A5E73C;
    case 116u: goto L_08A5E748;
    case 117u: goto L_08A5E754;
    case 118u: goto L_08A5E764;
    case 119u: goto L_08A5E770;
    case 120u: goto L_08A5E77C;
    case 121u: goto L_08A5E784;
    case 122u: goto L_08A5E790;
    case 123u: goto L_08A5E79C;
    case 124u: goto L_08A5E7A8;
    case 125u: goto L_08A5E7BC;
    case 126u: goto L_08A5E7C8;
    case 127u: goto L_08A5E7D8;
    case 128u: goto L_08A5E7E0;
    case 129u: goto L_08A5E7F0;
    case 130u: goto L_08A5E7FC;
    case 131u: goto L_08A5E80C;
    case 132u: goto L_08A5E81C;
    case 133u: goto L_08A5E820;
    case 134u: goto L_08A5E82C;
    case 135u: goto L_08A5E840;
    case 136u: goto L_08A5E84C;
    case 137u: goto L_08A5E85C;
    case 138u: goto L_08A5E86C;
    case 139u: goto L_08A5E878;
    case 140u: goto L_08A5E888;
    case 141u: goto L_08A5E950;
    case 142u: goto L_08A5E960;
    case 143u: goto L_08A5E96C;
    case 144u: goto L_08A5E978;
    case 145u: goto L_08A5E980;
    case 146u: goto L_08A5E98C;
    case 147u: goto L_08A5E998;
    case 148u: goto L_08A5E9A8;
    case 149u: goto L_08A5E9AC;
    case 150u: goto L_08A5E9B4;
    case 151u: goto L_08A5E9E0;
    case 152u: goto L_08A5E9E4;
    case 153u: goto L_08A5E9F0;
    case 154u: goto L_08A5E9F8;
    case 155u: goto L_08A5EA04;
    case 156u: goto L_08A5EA10;
    case 157u: goto L_08A5EA24;
    case 158u: goto L_08A5EA3C;
    case 159u: goto L_08A5EA54;
    case 160u: goto L_08A5EA64;
    case 161u: goto L_08A5EA74;
    case 162u: goto L_08A5EA80;
    case 163u: goto L_08A5EA8C;
    case 164u: goto L_08A5EA98;
    case 165u: goto L_08A5EAB0;
    case 166u: goto L_08A5EAC4;
    case 167u: goto L_08A5EACC;
    case 168u: goto L_08A5EAD8;
    case 169u: goto L_08A5EAEC;
    case 170u: goto L_08A5EAF8;
    case 171u: goto L_08A5EB08;
    case 172u: goto L_08A5EB1C;
    case 173u: goto L_08A5EB28;
    case 174u: goto L_08A5EB34;
    case 175u: goto L_08A5EB40;
    case 176u: goto L_08A5EB50;
    case 177u: goto L_08A5EB5C;
    case 178u: goto L_08A5EB68;
    case 179u: goto L_08A5EB7C;
    case 180u: goto L_08A5EB8C;
    case 181u: goto L_08A5EBA4;
    case 182u: goto L_08A5EBB8;
    case 183u: goto L_08A5EBC0;
    case 184u: goto L_08A5EBC4;
    case 185u: goto L_08A5EBC8;
    case 186u: goto L_08A5EC88;
    case 187u: goto L_08A5EC8C;
    case 188u: goto L_08A5ECA0;
    case 189u: goto L_08A5ECA8;
    case 190u: goto L_08A5ECB4;
    case 191u: goto L_08A5ECC0;
    case 192u: goto L_08A5ECD8;
    case 193u: goto L_08A5ECF0;
    case 194u: goto L_08A5ED00;
    case 195u: goto L_08A5ED10;
    case 196u: goto L_08A5ED1C;
    case 197u: goto L_08A5ED28;
    case 198u: goto L_08A5ED34;
    case 199u: goto L_08A5ED48;
    case 200u: goto L_08A5ED5C;
    case 201u: goto L_08A5ED6C;
    case 202u: goto L_08A5ED78;
    case 203u: goto L_08A5ED98;
    case 204u: goto L_08A5EDAC;
    case 205u: goto L_08A5EDBC;
    case 206u: goto L_08A5EDD4;
    case 207u: goto L_08A5EDE0;
    case 208u: goto L_08A5EDE4;
    case 209u: goto L_08A5EDEC;
    case 210u: goto L_08A5EDF4;
    case 211u: goto L_08A5EE04;
    case 212u: goto L_08A5EE18;
    case 213u: goto L_08A5EE28;
    case 214u: goto L_08A5EE30;
    case 215u: goto L_08A5EE38;
    case 216u: goto L_08A5EE40;
    case 217u: goto L_08A5EE4C;
    case 218u: goto L_08A5EE54;
    case 219u: goto L_08A5EE64;
    case 220u: goto L_08A5EE7C;
    case 221u: goto L_08A5EE8C;
    case 222u: goto L_08A5EEA4;
    case 223u: goto L_08A5EEB8;
    case 224u: goto L_08A5EED4;
    case 225u: goto L_08A5EEE4;
    case 226u: goto L_08A5EEFC;
    case 227u: goto L_08A5EF08;
    case 228u: goto L_08A5EF1C;
    case 229u: goto L_08A5EF28;
    case 230u: goto L_08A5EF3C;
    case 231u: goto L_08A5EF50;
    case 232u: goto L_08A5EF6C;
    case 233u: goto L_08A5EF80;
    case 234u: goto L_08A5EF9C;
    case 235u: goto L_08A5EFAC;
    case 236u: goto L_08A5EFC4;
    case 237u: goto L_08A5EFD4;
    case 238u: goto L_08A5EFE8;
    case 239u: goto L_08A5EFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A5E000:
    rt.unsupported(0x08A5E000u, 0x73756A64u, "unknown not lowered yet"); return;
L_08A5E00C:
    rt.unsupported(0x08A5E00Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5E02C:
    rt.unsupported(0x08A5E02Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5E04C:
    rt.unsupported(0x08A5E04Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5E060:
    rt.unsupported(0x08A5E060u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5E078:
    rt.unsupported(0x08A5E078u, 0x75626544u, "unknown not lowered yet"); return;
L_08A5E084:
    rt.unsupported(0x08A5E084u, 0x69686556u, "unknown not lowered yet"); return;
L_08A5E090:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A5E094u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5E09C:
    ctx.execute_vfpu_vscl_ct<77u, 111u, 100u, 1u>();
    rt.unsupported(0x08A5E0A0u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5E0A8:
    rt.unsupported(0x08A5E0A8u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5E0B4:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A5E0BCu, 0x7461446Eu, "unknown not lowered yet"); return;
L_08A5E158:
    rt.unsupported(0x08A5E158u, 0x74736546u, "unknown not lowered yet"); return;
L_08A5E16C:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A5E170u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5E178:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A5E17Cu, 0x6B6E6152u, "unknown not lowered yet"); return;
L_08A5E188:
    rt.unsupported(0x08A5E188u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E1A0:
    rt.unsupported(0x08A5E1A0u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E1B0:
    // nop
    goto L_08A5E1B4;
L_08A5E1B4:
    rt.unsupported(0x08A5E1B4u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E1C4:
    aot_gpr[14] = (0u | 0u);
    goto L_08A5E1C8;
L_08A5E1C8:
    rt.unsupported(0x08A5E1C8u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E1D8:
    rt.unsupported(0x08A5E1D8u, 0x0000657Au, "special? not lowered yet"); return;
L_08A5E1DC:
    rt.unsupported(0x08A5E1DCu, 0x74786554u, "unknown not lowered yet"); return;
L_08A5E1EC:
    ctx.execute_vfpu_compare3(97u, 108u, 67u, 1u, 6u);
    rt.unsupported(0x08A5E1F0u, 0x7469646Eu, "unknown not lowered yet"); return;
L_08A5E1F8:
    rt.unsupported(0x08A5E1F8u, 0x63657053u, "vfpu0 not lowered yet"); return;
L_08A5E218:
    rt.unsupported(0x08A5E218u, 0x63657053u, "vfpu0 not lowered yet"); return;
L_08A5E234:
    rt.unsupported(0x08A5E234u, 0x74786554u, "unknown not lowered yet"); return;
L_08A5E250:
    rt.unsupported(0x08A5E250u, 0x6B636F4Cu, "unknown not lowered yet"); return;
L_08A5E264:
    rt.unsupported(0x08A5E264u, 0x6B636F4Cu, "unknown not lowered yet"); return;
L_08A5E280:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<120u, 1u>(vfpu_d); }
    // nop
    goto L_08A5E288;
L_08A5E288:
    rt.unsupported(0x08A5E288u, 0x74496F47u, "unknown not lowered yet"); return;
L_08A5E290:
    rt.unsupported(0x08A5E290u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5E29C:
    rt.unsupported(0x08A5E29Cu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5E2AC:
    rt.unsupported(0x08A5E2ACu, 0x00657275u, "special? not lowered yet"); return;
L_08A5E2B0:
    rt.unsupported(0x08A5E2B0u, 0x7478654Eu, "unknown not lowered yet"); return;
L_08A5E2C4:
    rt.unsupported(0x08A5E2C4u, 0x7478654Eu, "unknown not lowered yet"); return;
L_08A5E2D4:
    rt.unsupported(0x08A5E2D4u, 0x696C6548u, "unknown not lowered yet"); return;
L_08A5E2E4:
    rt.unsupported(0x08A5E2E4u, 0x756E654Du, "unknown not lowered yet"); return;
L_08A5E2F0:
    rt.unsupported(0x08A5E2F0u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E300:
    aot_gpr[14] = (0u | 0u);
    goto L_08A5E304;
L_08A5E304:
    rt.unsupported(0x08A5E304u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E30C:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A5E310u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5E31C:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A5E320u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5E328:
    rt.unsupported(0x08A5E328u, 0x696C6548u, "unknown not lowered yet"); return;
L_08A5E340:
    ctx.execute_vfpu_vcmp_ct<104u, 97u, 1u, 3u>();
    rt.unsupported(0x08A5E344u, 0x676E656Cu, "vfpu1 not lowered yet"); return;
L_08A5E354:
    rt.unsupported(0x08A5E354u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E360:
    rt.unsupported(0x08A5E360u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E374:
    rt.unsupported(0x08A5E374u, 0x6E696F50u, "vfpu3 not lowered yet"); return;
L_08A5E380:
    rt.unsupported(0x08A5E380u, 0x6B6E6152u, "unknown not lowered yet"); return;
L_08A5E38C:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    // nop
    goto L_08A5E394;
L_08A5E394:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A5E398u, 0x6B6E6152u, "unknown not lowered yet"); return;
L_08A5E3A0:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    (void)(0u | 0u);
    goto L_08A5E3AC;
L_08A5E3AC:
    rt.unsupported(0x08A5E3ACu, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E3C0:
    rt.unsupported(0x08A5E3C0u, 0x72617453u, "unknown not lowered yet"); return;
L_08A5E3CC:
    aot_gpr[12] = (0u | 0u);
    goto L_08A5E3D0;
L_08A5E3D0:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A5E3D4u, 0x6B6E6152u, "unknown not lowered yet"); return;
L_08A5E3E4:
    rt.unsupported(0x08A5E3E4u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E3F4:
    ctx.execute_vfpu_vcmp_ct<109u, 97u, 1u, 3u>();
    ctx.execute_vfpu_vscl_ct<108u, 95u, 84u, 1u>();
    rt.unsupported(0x08A5E3FCu, 0x00317478u, "special? not lowered yet"); return;
L_08A5E400:
    rt.unsupported(0x08A5E400u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E410:
    ctx.execute_vfpu_vcmp_ct<109u, 97u, 1u, 3u>();
    ctx.execute_vfpu_vscl_ct<108u, 95u, 84u, 1u>();
    rt.unsupported(0x08A5E418u, 0x00327478u, "special? not lowered yet"); return;
L_08A5E41C:
    rt.unsupported(0x08A5E41Cu, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E42C:
    ctx.execute_vfpu_vminmax(101u, 114u, 83u, 1u, false);
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5E434u, 0x74786554u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 17u, 0x08A795B8u>(ctx, &aot_mem); return;
    }
    goto L_08A5E438;
L_08A5E438:
    rt.unsupported(0x08A5E438u, 0x00000031u, "special? not lowered yet"); return;
L_08A5E43C:
    rt.unsupported(0x08A5E43Cu, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E44C:
    ctx.execute_vfpu_vminmax(101u, 114u, 83u, 1u, false);
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5E454u, 0x74786554u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 19u, 0x08A795D8u>(ctx, &aot_mem); return;
    }
    goto L_08A5E458;
L_08A5E458:
    rt.unsupported(0x08A5E458u, 0x00000032u, "special? not lowered yet"); return;
L_08A5E45C:
    rt.unsupported(0x08A5E45Cu, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E46C:
    ctx.execute_vfpu_vminmax(122u, 101u, 83u, 1u, false);
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5E474u, 0x74786554u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 23u, 0x08A795F8u>(ctx, &aot_mem); return;
    }
    goto L_08A5E478;
L_08A5E474:
    rt.unsupported(0x08A5E474u, 0x74786554u, "unknown not lowered yet"); return;
L_08A5E478:
    rt.unsupported(0x08A5E478u, 0x00000031u, "special? not lowered yet"); return;
L_08A5E47C:
    rt.unsupported(0x08A5E47Cu, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E48C:
    ctx.execute_vfpu_vminmax(122u, 101u, 83u, 1u, false);
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5E494u, 0x74786554u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 25u, 0x08A79618u>(ctx, &aot_mem); return;
    }
    goto L_08A5E498;
L_08A5E498:
    rt.unsupported(0x08A5E498u, 0x00000032u, "special? not lowered yet"); return;
L_08A5E49C:
    rt.unsupported(0x08A5E49Cu, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E4AC:
    ctx.execute_vfpu_vcmp_ct<109u, 97u, 1u, 3u>();
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A5E4B4;
L_08A5E4B4:
    rt.unsupported(0x08A5E4B4u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E4C4:
    ctx.execute_vfpu_vcmp_ct<109u, 97u, 1u, 3u>();
    rt.unsupported(0x08A5E4C8u, 0x69545F6Cu, "unknown not lowered yet"); return;
L_08A5E4D0:
    rt.unsupported(0x08A5E4D0u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E4E0:
    ctx.execute_vfpu_vminmax(101u, 114u, 83u, 1u, false);
    aot_gpr[13] = (aot_gpr[3] + aot_gpr[12]);
    goto L_08A5E4E8;
L_08A5E4E8:
    rt.unsupported(0x08A5E4E8u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E4F8:
    ctx.execute_vfpu_vminmax(101u, 114u, 83u, 1u, false);
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5E500u, 0x6B636954u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 27u, 0x08A79684u>(ctx, &aot_mem); return;
    }
    goto L_08A5E504;
L_08A5E504:
    // nop
    goto L_08A5E508;
L_08A5E508:
    rt.unsupported(0x08A5E508u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E518:
    ctx.execute_vfpu_vminmax(122u, 101u, 83u, 1u, false);
    aot_gpr[13] = (aot_gpr[3] + aot_gpr[12]);
    goto L_08A5E520;
L_08A5E520:
    rt.unsupported(0x08A5E520u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E530:
    ctx.execute_vfpu_vminmax(122u, 101u, 83u, 1u, false);
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5E538u, 0x6B636954u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 29u, 0x08A796BCu>(ctx, &aot_mem); return;
    }
    goto L_08A5E53C;
L_08A5E53C:
    // nop
    goto L_08A5E540;
L_08A5E540:
    rt.unsupported(0x08A5E540u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E550:
    rt.unsupported(0x08A5E550u, 0x006B6369u, "special? not lowered yet"); return;
L_08A5E554:
    rt.unsupported(0x08A5E554u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5E564:
    aot_gpr[13] = (aot_gpr[3] - aot_gpr[5]);
    rt.unsupported(0x08A5E568u, 0x00000075u, "special? not lowered yet"); return;
L_08A5E56C:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 9u>();
    rt.unsupported(0x08A5E570u, 0x6853776Fu, "unknown not lowered yet"); return;
L_08A5E5A8:
    ctx.execute_vfpu_vscl_ct<70u, 114u, 105u, 1u>();
    ctx.execute_vfpu_vscl_ct<110u, 100u, 77u, 1u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A5E5B4;
L_08A5E5B4:
    rt.unsupported(0x08A5E5B4u, 0x7473694Cu, "unknown not lowered yet"); return;
L_08A5E5BC:
    rt.unsupported(0x08A5E5BCu, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5E5C8:
    rt.unsupported(0x08A5E5C8u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5E5D4:
    rt.unsupported(0x08A5E5D4u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5E5E8:
    rt.unsupported(0x08A5E5E8u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5E5F4:
    rt.unsupported(0x08A5E5F4u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5E604:
    rt.unsupported(0x08A5E604u, 0x00657275u, "special? not lowered yet"); return;
L_08A5E608:
    rt.unsupported(0x08A5E608u, 0x73257325u, "unknown not lowered yet"); return;
L_08A5E610:
    rt.unsupported(0x08A5E610u, 0x74736546u, "unknown not lowered yet"); return;
L_08A5E624:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A5E628u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5E630:
    rt.unsupported(0x08A5E630u, 0x63657257u, "vfpu0 not lowered yet"); return;
L_08A5E644:
    rt.unsupported(0x08A5E644u, 0x63657257u, "vfpu0 not lowered yet"); return;
L_08A5E664:
    rt.unsupported(0x08A5E664u, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A5E674:
    rt.unsupported(0x08A5E674u, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A5E688:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A5E690u, 0x7461446Eu, "unknown not lowered yet"); return;
L_08A5E698:
    rt.unsupported(0x08A5E698u, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A5E6AC:
    rt.unsupported(0x08A5E6ACu, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A5E6C4:
    rt.unsupported(0x08A5E6C4u, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A5E6E0:
    rt.unsupported(0x08A5E6E0u, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A5E6F8:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A5E6FCu, 0x61747441u, "vfpu0 not lowered yet"); return;
L_08A5E708:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A5E70Cu, 0x61747441u, "vfpu0 not lowered yet"); return;
L_08A5E71C:
    rt.unsupported(0x08A5E71Cu, 0x63657257u, "vfpu0 not lowered yet"); return;
L_08A5E73C:
    rt.unsupported(0x08A5E73Cu, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5E748:
    rt.unsupported(0x08A5E748u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A5E754:
    rt.unsupported(0x08A5E754u, 0x706F7254u, "unknown not lowered yet"); return;
L_08A5E764:
    rt.unsupported(0x08A5E764u, 0x74617453u, "unknown not lowered yet"); return;
L_08A5E770:
    ctx.execute_vfpu_compare3(73u, 103u, 110u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 101u, 77u, 1u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A5E77C;
L_08A5E77C:
    rt.unsupported(0x08A5E77Cu, 0x7473694Cu, "unknown not lowered yet"); return;
L_08A5E784:
    rt.unsupported(0x08A5E784u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5E790:
    rt.unsupported(0x08A5E790u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5E79C:
    ctx.execute_vfpu_vscl_ct<70u, 114u, 105u, 1u>();
    ctx.execute_vfpu_vscl_ct<110u, 100u, 77u, 1u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A5E7A8;
L_08A5E7A8:
    rt.unsupported(0x08A5E7A8u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5E7BC:
    rt.unsupported(0x08A5E7BCu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5E7C8:
    rt.unsupported(0x08A5E7C8u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5E7D8:
    rt.unsupported(0x08A5E7D8u, 0x00657275u, "special? not lowered yet"); return;
L_08A5E7E0:
    rt.unsupported(0x08A5E7E0u, 0x6E696F4Au, "vfpu3 not lowered yet"); return;
L_08A5E7F0:
    rt.unsupported(0x08A5E7F0u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5E7FC:
    rt.unsupported(0x08A5E7FCu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5E80C:
    rt.unsupported(0x08A5E80Cu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5E81C:
    rt.unsupported(0x08A5E81Cu, 0x00657275u, "special? not lowered yet"); return;
L_08A5E820:
    rt.unsupported(0x08A5E820u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5E82C:
    rt.unsupported(0x08A5E82Cu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5E840:
    rt.unsupported(0x08A5E840u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A5E84C:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<77u, 111u, 100u, 1u>();
    rt.unsupported(0x08A5E854u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5E85C:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A5E864u, 0x7461446Eu, "unknown not lowered yet"); return;
L_08A5E86C:
    rt.unsupported(0x08A5E86Cu, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5E878:
    rt.unsupported(0x08A5E878u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A5E888:
    rt.unsupported(0x08A5E888u, 0x69686556u, "unknown not lowered yet"); return;
L_08A5E950:
    rt.unsupported(0x08A5E950u, 0x6E696F4Au, "vfpu3 not lowered yet"); return;
L_08A5E960:
    rt.unsupported(0x08A5E960u, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08A5E96C:
    rt.unsupported(0x08A5E96Cu, 0x72616553u, "unknown not lowered yet"); return;
L_08A5E978:
    rt.unsupported(0x08A5E978u, 0x61476F4Eu, "vfpu0 not lowered yet"); return;
L_08A5E980:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08A5E984u, 0x7473694Cu, "unknown not lowered yet"); return;
L_08A5E98C:
    rt.unsupported(0x08A5E98Cu, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5E998:
    rt.unsupported(0x08A5E998u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A5E9A8:
    aot_gpr[12] = (0u | 0u);
    goto L_08A5E9AC;
L_08A5E9AC:
    aot_gpr[15] = (aot_gpr[9] + static_cast<std::uint32_t>(25637));
    (void)(0u & 0u);
    goto L_08A5E9B4;
L_08A5E9B4:
    rt.unsupported(0x08A5E9B4u, 0x69686556u, "unknown not lowered yet"); return;
L_08A5E9E0:
    aot_gpr[12] = (0u | 0u);
    goto L_08A5E9E4;
L_08A5E9E4:
    rt.unsupported(0x08A5E9E4u, 0x6152424Cu, "vfpu0 not lowered yet"); return;
L_08A5E9F0:
    rt.unsupported(0x08A5E9F0u, 0x7473694Cu, "unknown not lowered yet"); return;
L_08A5E9F8:
    rt.unsupported(0x08A5E9F8u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5EA04:
    rt.unsupported(0x08A5EA04u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5EA10:
    rt.unsupported(0x08A5EA10u, 0x6954424Cu, "unknown not lowered yet"); return;
L_08A5EA24:
    rt.unsupported(0x08A5EA24u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5EA3C:
    rt.unsupported(0x08A5EA3Cu, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5EA54:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<110u, 73u, 116u, 1u>();
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A5EA64;
L_08A5EA64:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A5EA6Cu, 0x7461446Eu, "unknown not lowered yet"); return;
L_08A5EA74:
    rt.unsupported(0x08A5EA74u, 0x746C6946u, "unknown not lowered yet"); return;
L_08A5EA80:
    rt.unsupported(0x08A5EA80u, 0x746C6946u, "unknown not lowered yet"); return;
L_08A5EA8C:
    rt.unsupported(0x08A5EA8Cu, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5EA98:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(101u, 114u, 98u, 1u, 6u);
    rt.unsupported(0x08A5EAA0u, 0x73647261u, "unknown not lowered yet"); return;
L_08A5EAB0:
    rt.unsupported(0x08A5EAB0u, 0x6954424Cu, "unknown not lowered yet"); return;
L_08A5EAC4:
    rt.unsupported(0x08A5EAC4u, 0x7473694Cu, "unknown not lowered yet"); return;
L_08A5EACC:
    rt.unsupported(0x08A5EACCu, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5EAD8:
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(29477));
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(8307));
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(10611));
    rt.unsupported(0x08A5EAE4u, 0x73250A73u, "unknown not lowered yet"); return;
L_08A5EAEC:
    rt.unsupported(0x08A5EAECu, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5EAF8:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A5EB00u, 0x7461446Eu, "unknown not lowered yet"); return;
L_08A5EB08:
    rt.unsupported(0x08A5EB08u, 0x69686556u, "unknown not lowered yet"); return;
L_08A5EB1C:
    rt.unsupported(0x08A5EB1Cu, 0x746C6946u, "unknown not lowered yet"); return;
L_08A5EB28:
    rt.unsupported(0x08A5EB28u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5EB34:
    rt.unsupported(0x08A5EB34u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5EB40:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<110u, 73u, 116u, 1u>();
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A5EB50;
L_08A5EB50:
    rt.unsupported(0x08A5EB50u, 0x69686556u, "unknown not lowered yet"); return;
L_08A5EB5C:
    rt.unsupported(0x08A5EB5Cu, 0x746C6946u, "unknown not lowered yet"); return;
L_08A5EB68:
    rt.unsupported(0x08A5EB68u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5EB7C:
    rt.unsupported(0x08A5EB7Cu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5EB8C:
    rt.unsupported(0x08A5EB8Cu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5EBA4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(101u, 114u, 98u, 1u, 6u);
    rt.unsupported(0x08A5EBACu, 0x73647261u, "unknown not lowered yet"); return;
L_08A5EBB8:
    if (aot_gpr[26] == aot_gpr[15]) {
    rt.unsupported(0x08A5EBBCu, 0x49422E54u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0620_entry, 620u, 254u, 0x08A70CD8u>(ctx, &aot_mem); return;
    }
    goto L_08A5EBC0;
L_08A5EBC0:
    rt.unsupported(0x08A5EBC0u, 0x0000004Eu, "special? not lowered yet"); return;
L_08A5EBC4:
    // nop
    goto L_08A5EBC8;
L_08A5EBC8:
    aot_gpr[14] = (0u | aot_gpr[10]);
    // nop
    rt.unsupported(0x08A5EBD4u, 0x088432CCu, "control flow in delay slot"); return;
L_08A5EC88:
    aot_gpr[12] = (0u | 0u);
    goto L_08A5EC8C;
L_08A5EC8C:
    rt.unsupported(0x08A5EC8Cu, 0x6954424Cu, "unknown not lowered yet"); return;
L_08A5ECA0:
    rt.unsupported(0x08A5ECA0u, 0x7473694Cu, "unknown not lowered yet"); return;
L_08A5ECA8:
    rt.unsupported(0x08A5ECA8u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5ECB4:
    rt.unsupported(0x08A5ECB4u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5ECC0:
    rt.unsupported(0x08A5ECC0u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5ECD8:
    rt.unsupported(0x08A5ECD8u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5ECF0:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<110u, 73u, 116u, 1u>();
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A5ED00;
L_08A5ED00:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A5ED08u, 0x7461446Eu, "unknown not lowered yet"); return;
L_08A5ED10:
    rt.unsupported(0x08A5ED10u, 0x746C6946u, "unknown not lowered yet"); return;
L_08A5ED1C:
    rt.unsupported(0x08A5ED1Cu, 0x746C6946u, "unknown not lowered yet"); return;
L_08A5ED28:
    rt.unsupported(0x08A5ED28u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5ED34:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(101u, 114u, 98u, 1u, 6u);
    rt.unsupported(0x08A5ED3Cu, 0x73647261u, "unknown not lowered yet"); return;
L_08A5ED48:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(101u, 114u, 98u, 1u, 6u);
    rt.unsupported(0x08A5ED50u, 0x73647261u, "unknown not lowered yet"); return;
L_08A5ED5C:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A5ED60u, 0x61747441u, "vfpu0 not lowered yet"); return;
L_08A5ED6C:
    rt.unsupported(0x08A5ED6Cu, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5ED78:
    rt.unsupported(0x08A5ED78u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5ED98:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5ED9Cu, 0x43676E69u, "unknown not lowered yet"); return;
L_08A5EDAC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5EDB0u, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08A5EDBC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5EDC0u, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08A5EDD4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    if (aot_gpr[19] == aot_gpr[7]) {
    rt.unsupported(0x08A5EDDCu, 0x4D656361u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0630_entry, 630u, 59u, 0x08A7A780u>(ctx, &aot_mem); return;
    }
    goto L_08A5EDE0;
L_08A5EDE0:
    aot_gpr[13] = (aot_gpr[3] | aot_gpr[21]);
    goto L_08A5EDE4;
L_08A5EDE4:
    (void)(aot_gpr[9] < static_cast<std::uint32_t>(29477) ? 1u : 0u);
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A5EDE8u, 0x00000020u); return; } }
    goto L_08A5EDEC;
L_08A5EDEC:
    (void)(aot_gpr[9] < static_cast<std::uint32_t>(29477) ? 1u : 0u);
    { const bool signed_ok = ctx.execute_signed_add(4u, 3u, 19u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A5EDF0u, 0x00732520u); return; } }
    goto L_08A5EDF4;
L_08A5EDF4:
    rt.unsupported(0x08A5EDF4u, 0x7466654Cu, "unknown not lowered yet"); return;
L_08A5EE04:
    rt.unsupported(0x08A5EE04u, 0x7466654Cu, "unknown not lowered yet"); return;
L_08A5EE18:
    ctx.execute_vfpu_vscl_ct<77u, 111u, 118u, 1u>();
    ctx.execute_vfpu_vscl_ct<67u, 97u, 109u, 1u>();
    rt.unsupported(0x08A5EE20u, 0x4D5F6172u, "unknown not lowered yet"); return;
L_08A5EE28:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 101u, 1u>();
    rt.unsupported(0x08A5EE2Cu, 0x00000072u, "special? not lowered yet"); return;
L_08A5EE30:
    rt.unsupported(0x08A5EE30u, 0x6B617242u, "unknown not lowered yet"); return;
L_08A5EE38:
    rt.unsupported(0x08A5EE38u, 0x6E726F48u, "vfpu3 not lowered yet"); return;
L_08A5EE40:
    ctx.execute_vfpu_vscl_ct<65u, 99u, 99u, 1u>();
    rt.unsupported(0x08A5EE44u, 0x6172656Cu, "vfpu0 not lowered yet"); return;
L_08A5EE4C:
    rt.unsupported(0x08A5EE4Cu, 0x736F6F42u, "unknown not lowered yet"); return;
L_08A5EE54:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    ctx.execute_vfpu_vscl_ct<101u, 95u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    aot_gpr[14] = (0u | 0u);
    goto L_08A5EE64;
L_08A5EE64:
    rt.unsupported(0x08A5EE64u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5EE7C:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    rt.unsupported(0x08A5EE80u, 0x75535F65u, "unknown not lowered yet"); return;
L_08A5EE8C:
    rt.unsupported(0x08A5EE8Cu, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5EEA4:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    rt.unsupported(0x08A5EEA8u, 0x61525F65u, "vfpu0 not lowered yet"); return;
L_08A5EEB8:
    rt.unsupported(0x08A5EEB8u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5EED4:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    rt.unsupported(0x08A5EED8u, 0x61525F65u, "vfpu0 not lowered yet"); return;
L_08A5EEE4:
    rt.unsupported(0x08A5EEE4u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5EEFC:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    rt.unsupported(0x08A5EF00u, 0x69425F65u, "unknown not lowered yet"); return;
L_08A5EF08:
    rt.unsupported(0x08A5EF08u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5EF1C:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    if (aot_gpr[2] != aot_gpr[1]) {
    (void)(static_cast<std::uint32_t>(std::countl_zero(0u)));
        (void)rt.invoke_chained_direct<&recomp_unit_0626_entry, 626u, 69u, 0x08A76CB8u>(ctx, &aot_mem); return;
    }
    goto L_08A5EF28;
L_08A5EF28:
    rt.unsupported(0x08A5EF28u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5EF3C:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    rt.unsupported(0x08A5EF40u, 0x6E535F65u, "vfpu3 not lowered yet"); return;
L_08A5EF50:
    rt.unsupported(0x08A5EF50u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5EF6C:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    rt.unsupported(0x08A5EF70u, 0x6E535F65u, "vfpu3 not lowered yet"); return;
L_08A5EF80:
    rt.unsupported(0x08A5EF80u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5EF9C:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    rt.unsupported(0x08A5EFA0u, 0x6E535F65u, "vfpu3 not lowered yet"); return;
L_08A5EFAC:
    rt.unsupported(0x08A5EFACu, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5EFC4:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    rt.unsupported(0x08A5EFC8u, 0x69425F65u, "unknown not lowered yet"); return;
L_08A5EFD4:
    rt.unsupported(0x08A5EFD4u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5EFE8:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    ctx.execute_vfpu_compare3(101u, 95u, 66u, 1u, 6u);
    rt.unsupported(0x08A5EFF0u, 0x4374736Fu, "unknown not lowered yet"); return;
L_08A5EFFC:
    rt.unsupported(0x08A5EFFCu, 0x6E69614Du, "vfpu3 not lowered yet"); return;
}

void recomp_unit_0602(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0602_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_602(Runtime &runtime) {
    runtime.register_generated_unit(602u, 0x08A5E000u, 4096u, &recomp_unit_0602, &recomp_unit_0602_entry);
    runtime.register_function(0x08A5E000u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E00Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E02Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E04Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E060u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E078u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E084u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E090u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E09Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E0A8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E0B4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E158u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E16Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E178u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E188u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E1A0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E1B0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E1B4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E1C4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E1C8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E1D8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E1DCu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E1ECu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E1F8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E218u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E234u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E250u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E264u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E280u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E288u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E290u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E29Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E2ACu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E2B0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E2C4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E2D4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E2E4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E2F0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E300u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E304u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E30Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E31Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E328u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E340u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E354u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E360u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E374u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E380u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E38Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E394u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E3A0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E3ACu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E3C0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E3CCu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E3D0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E3E4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E3F4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E400u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E410u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E41Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E42Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E438u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E43Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E44Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E458u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E45Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E46Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E474u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E478u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E47Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E48Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E498u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E49Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E4ACu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E4B4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E4C4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E4D0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E4E0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E4E8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E4F8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E504u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E508u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E518u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E520u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E530u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E53Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E540u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E550u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E554u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E564u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E56Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E5A8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E5B4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E5BCu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E5C8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E5D4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E5E8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E5F4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E604u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E608u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E610u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E624u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E630u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E644u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E664u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E674u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E688u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E698u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E6ACu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E6C4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E6E0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E6F8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E708u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E71Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E73Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E748u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E754u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E764u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E770u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E77Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E784u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E790u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E79Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E7A8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E7BCu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E7C8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E7D8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E7E0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E7F0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E7FCu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E80Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E81Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E820u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E82Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E840u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E84Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E85Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E86Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E878u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E888u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E950u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E960u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E96Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E978u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E980u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E98Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E998u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E9A8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E9ACu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E9B4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E9E0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E9E4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E9F0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5E9F8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EA04u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EA10u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EA24u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EA3Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EA54u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EA64u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EA74u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EA80u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EA8Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EA98u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EAB0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EAC4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EACCu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EAD8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EAECu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EAF8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EB08u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EB1Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EB28u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EB34u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EB40u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EB50u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EB5Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EB68u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EB7Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EB8Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EBA4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EBB8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EBC0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EBC4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EBC8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EC88u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EC8Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ECA0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ECA8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ECB4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ECC0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ECD8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ECF0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ED00u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ED10u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ED1Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ED28u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ED34u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ED48u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ED5Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ED6Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ED78u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5ED98u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EDACu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EDBCu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EDD4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EDE0u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EDE4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EDECu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EDF4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EE04u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EE18u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EE28u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EE30u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EE38u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EE40u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EE4Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EE54u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EE64u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EE7Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EE8Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EEA4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EEB8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EED4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EEE4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EEFCu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EF08u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EF1Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EF28u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EF3Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EF50u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EF6Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EF80u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EF9Cu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EFACu, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EFC4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EFD4u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EFE8u, &recomp_unit_0602, "recomp_unit_0602");
    runtime.register_function(0x08A5EFFCu, &recomp_unit_0602, "recomp_unit_0602");
}
} // namespace psprecomp
