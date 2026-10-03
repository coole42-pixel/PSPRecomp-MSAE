#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0056[1019] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5,
    0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 19,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 28, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 30, 31, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 0,
    54, 0, 55, 0, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 0, 60, 0, 61, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72,
    0, 73, 0, 74, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 81, 0, 0, 82, 0, 0, 0, 83,
    0, 0, 0, 84, 0, 0, 0, 85, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 111,
    0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 118,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0,
    0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159,
    0, 160, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0,
    170, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0,
    180, 0, 181, 0, 0, 0, 0, 0, 182, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 0, 195,
    0, 0, 0, 196, 0, 0, 197, 198, 0, 0, 0, 199, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 204, 205,
};
void recomp_unit_0056_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0883C000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0056[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0883C000;
    case 2u: goto L_0883C01C;
    case 3u: goto L_0883C02C;
    case 4u: goto L_0883C074;
    case 5u: goto L_0883C07C;
    case 6u: goto L_0883C088;
    case 7u: goto L_0883C0A0;
    case 8u: goto L_0883C0A8;
    case 9u: goto L_0883C0BC;
    case 10u: goto L_0883C0D0;
    case 11u: goto L_0883C0DC;
    case 12u: goto L_0883C0E8;
    case 13u: goto L_0883C0F8;
    case 14u: goto L_0883C130;
    case 15u: goto L_0883C150;
    case 16u: goto L_0883C158;
    case 17u: goto L_0883C164;
    case 18u: goto L_0883C174;
    case 19u: goto L_0883C17C;
    case 20u: goto L_0883C190;
    case 21u: goto L_0883C1A4;
    case 22u: goto L_0883C1AC;
    case 23u: goto L_0883C1B8;
    case 24u: goto L_0883C1C8;
    case 25u: goto L_0883C1D4;
    case 26u: goto L_0883C1E0;
    case 27u: goto L_0883C1EC;
    case 28u: goto L_0883C1F4;
    case 29u: goto L_0883C208;
    case 30u: goto L_0883C21C;
    case 31u: goto L_0883C220;
    case 32u: goto L_0883C228;
    case 33u: goto L_0883C238;
    case 34u: goto L_0883C25C;
    case 35u: goto L_0883C28C;
    case 36u: goto L_0883C298;
    case 37u: goto L_0883C2B4;
    case 38u: goto L_0883C2C4;
    case 39u: goto L_0883C2D0;
    case 40u: goto L_0883C2EC;
    case 41u: goto L_0883C2FC;
    case 42u: goto L_0883C30C;
    case 43u: goto L_0883C328;
    case 44u: goto L_0883C344;
    case 45u: goto L_0883C360;
    case 46u: goto L_0883C36C;
    case 47u: goto L_0883C39C;
    case 48u: goto L_0883C3B4;
    case 49u: goto L_0883C3CC;
    case 50u: goto L_0883C3D8;
    case 51u: goto L_0883C3E0;
    case 52u: goto L_0883C3EC;
    case 53u: goto L_0883C3F4;
    case 54u: goto L_0883C400;
    case 55u: goto L_0883C408;
    case 56u: goto L_0883C414;
    case 57u: goto L_0883C41C;
    case 58u: goto L_0883C428;
    case 59u: goto L_0883C430;
    case 60u: goto L_0883C43C;
    case 61u: goto L_0883C444;
    case 62u: goto L_0883C450;
    case 63u: goto L_0883C458;
    case 64u: goto L_0883C464;
    case 65u: goto L_0883C470;
    case 66u: goto L_0883C4C4;
    case 67u: goto L_0883C4EC;
    case 68u: goto L_0883C510;
    case 69u: goto L_0883C540;
    case 70u: goto L_0883C550;
    case 71u: goto L_0883C56C;
    case 72u: goto L_0883C57C;
    case 73u: goto L_0883C584;
    case 74u: goto L_0883C58C;
    case 75u: goto L_0883C590;
    case 76u: goto L_0883C598;
    case 77u: goto L_0883C5AC;
    case 78u: goto L_0883C5BC;
    case 79u: goto L_0883C5CC;
    case 80u: goto L_0883C5DC;
    case 81u: goto L_0883C5E0;
    case 82u: goto L_0883C5EC;
    case 83u: goto L_0883C5FC;
    case 84u: goto L_0883C60C;
    case 85u: goto L_0883C61C;
    case 86u: goto L_0883C620;
    case 87u: goto L_0883C630;
    case 88u: goto L_0883C644;
    case 89u: goto L_0883C654;
    case 90u: goto L_0883C660;
    case 91u: goto L_0883C66C;
    case 92u: goto L_0883C698;
    case 93u: goto L_0883C6AC;
    case 94u: goto L_0883C6B4;
    case 95u: goto L_0883C6C0;
    case 96u: goto L_0883C6CC;
    case 97u: goto L_0883C6E0;
    case 98u: goto L_0883C70C;
    case 99u: goto L_0883C720;
    case 100u: goto L_0883C730;
    case 101u: goto L_0883C74C;
    case 102u: goto L_0883C75C;
    case 103u: goto L_0883C76C;
    case 104u: goto L_0883C778;
    case 105u: goto L_0883C7A8;
    case 106u: goto L_0883C808;
    case 107u: goto L_0883C818;
    case 108u: goto L_0883C83C;
    case 109u: goto L_0883C860;
    case 110u: goto L_0883C874;
    case 111u: goto L_0883C87C;
    case 112u: goto L_0883C888;
    case 113u: goto L_0883C890;
    case 114u: goto L_0883C8A0;
    case 115u: goto L_0883C8C0;
    case 116u: goto L_0883C8E0;
    case 117u: goto L_0883C8F4;
    case 118u: goto L_0883C8FC;
    case 119u: goto L_0883C908;
    case 120u: goto L_0883C924;
    case 121u: goto L_0883C954;
    case 122u: goto L_0883C9A0;
    case 123u: goto L_0883C9B4;
    case 124u: goto L_0883C9D0;
    case 125u: goto L_0883C9E0;
    case 126u: goto L_0883CA10;
    case 127u: goto L_0883CA40;
    case 128u: goto L_0883CA80;
    case 129u: goto L_0883CABC;
    case 130u: goto L_0883CAC4;
    case 131u: goto L_0883CAD0;
    case 132u: goto L_0883CB1C;
    case 133u: goto L_0883CB54;
    case 134u: goto L_0883CB68;
    case 135u: goto L_0883CB90;
    case 136u: goto L_0883CB9C;
    case 137u: goto L_0883CBC8;
    case 138u: goto L_0883CBE4;
    case 139u: goto L_0883CBEC;
    case 140u: goto L_0883CC04;
    case 141u: goto L_0883CC14;
    case 142u: goto L_0883CC1C;
    case 143u: goto L_0883CC30;
    case 144u: goto L_0883CC38;
    case 145u: goto L_0883CC48;
    case 146u: goto L_0883CC60;
    case 147u: goto L_0883CC78;
    case 148u: goto L_0883CC84;
    case 149u: goto L_0883CC8C;
    case 150u: goto L_0883CC9C;
    case 151u: goto L_0883CCAC;
    case 152u: goto L_0883CCB4;
    case 153u: goto L_0883CCBC;
    case 154u: goto L_0883CCD4;
    case 155u: goto L_0883CD08;
    case 156u: goto L_0883CD3C;
    case 157u: goto L_0883CD54;
    case 158u: goto L_0883CD74;
    case 159u: goto L_0883CD7C;
    case 160u: goto L_0883CD84;
    case 161u: goto L_0883CD88;
    case 162u: goto L_0883CD9C;
    case 163u: goto L_0883CDA4;
    case 164u: goto L_0883CDB0;
    case 165u: goto L_0883CDB8;
    case 166u: goto L_0883CDC8;
    case 167u: goto L_0883CDD4;
    case 168u: goto L_0883CDE0;
    case 169u: goto L_0883CDF0;
    case 170u: goto L_0883CE00;
    case 171u: goto L_0883CE0C;
    case 172u: goto L_0883CE18;
    case 173u: goto L_0883CE24;
    case 174u: goto L_0883CE34;
    case 175u: goto L_0883CE44;
    case 176u: goto L_0883CE50;
    case 177u: goto L_0883CE5C;
    case 178u: goto L_0883CE68;
    case 179u: goto L_0883CE74;
    case 180u: goto L_0883CE80;
    case 181u: goto L_0883CE88;
    case 182u: goto L_0883CEA0;
    case 183u: goto L_0883CEA4;
    case 184u: goto L_0883CEB8;
    case 185u: goto L_0883CEE0;
    case 186u: goto L_0883CEF4;
    case 187u: goto L_0883CF0C;
    case 188u: goto L_0883CF1C;
    case 189u: goto L_0883CF30;
    case 190u: goto L_0883CF38;
    case 191u: goto L_0883CF44;
    case 192u: goto L_0883CF54;
    case 193u: goto L_0883CF68;
    case 194u: goto L_0883CF70;
    case 195u: goto L_0883CF7C;
    case 196u: goto L_0883CF8C;
    case 197u: goto L_0883CF98;
    case 198u: goto L_0883CF9C;
    case 199u: goto L_0883CFAC;
    case 200u: goto L_0883CFB4;
    case 201u: goto L_0883CFC4;
    case 202u: goto L_0883CFCC;
    case 203u: goto L_0883CFD8;
    case 204u: goto L_0883CFE4;
    case 205u: goto L_0883CFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0883C000:
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[16] = (ctx.hi);
    aot_gpr[6] = (aot_gpr[16] < static_cast<std::uint32_t>(60) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0883C02C;
      }
      goto L_0883C01C;
    }
L_0883C01C:
    aot_gpr[16] = (0u | 59u);
    aot_gpr[18] = (aot_gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 99u);
      if (branch_taken) {
          goto L_0883C074;
      }
      goto L_0883C02C;
    }
L_0883C02C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 10u);
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[7] = (0u | 1000u);
    aot_gpr[8] = (0u | 100u);
    aot_gpr[9] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[9]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[17] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[18] = (ctx.hi);
    goto L_0883C074;
L_0883C074:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C0A8;
      }
      goto L_0883C07C;
    }
L_0883C07C:
    aot_gpr[4] = (0u | 110u);
    aot_gpr[31] = (0x0883C088u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C088u) goto L_0883C088;
    return;
L_0883C088:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883C0A0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0883C0A0u) goto L_0883C0A0;
    return;
L_0883C0A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C0BC;
      }
      goto L_0883C0A8;
    }
L_0883C0A8:
    aot_gpr[4] = (16191u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16191));
    aot_gpr[5] = (0u | 63u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_0883C0BC;
L_0883C0BC:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883C0D0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0883C0D0u) goto L_0883C0D0;
    return;
L_0883C0D0:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_0883C220;
      }
      goto L_0883C0DC;
    }
L_0883C0DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C1AC;
      }
      goto L_0883C0E8;
    }
L_0883C0E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0883C220;
      }
      goto L_0883C0F8;
    }
L_0883C0F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 60000u);
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 60u);
    aot_gpr[16] = (0u | 59u);
    aot_gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[6] = (ctx.hi);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(60) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0883C150;
      }
      goto L_0883C130;
    }
L_0883C130:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[16] = (ctx.hi);
    goto L_0883C150;
L_0883C150:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C17C;
      }
      goto L_0883C158;
    }
L_0883C158:
    aot_gpr[4] = (0u | 103u);
    aot_gpr[31] = (0x0883C164u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C164u) goto L_0883C164;
    return;
L_0883C164:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883C174u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0883C174u) goto L_0883C174;
    return;
L_0883C174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C190;
      }
      goto L_0883C17C;
    }
L_0883C17C:
    aot_gpr[4] = (16191u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16191));
    aot_gpr[5] = (0u | 63u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_0883C190;
L_0883C190:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883C1A4u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0883C1A4u) goto L_0883C1A4;
    return;
L_0883C1A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0883C220;
      }
      goto L_0883C1AC;
    }
L_0883C1AC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C220;
      }
      goto L_0883C1B8;
    }
L_0883C1B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0883C220;
      }
      goto L_0883C1C8;
    }
L_0883C1C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C1F4;
      }
      goto L_0883C1D4;
    }
L_0883C1D4:
    aot_gpr[4] = (0u | 101u);
    aot_gpr[31] = (0x0883C1E0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C1E0u) goto L_0883C1E0;
    return;
L_0883C1E0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0883C1ECu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0883C1ECu) goto L_0883C1EC;
    return;
L_0883C1EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C208;
      }
      goto L_0883C1F4;
    }
L_0883C1F4:
    aot_gpr[4] = (16191u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16191));
    aot_gpr[5] = (0u | 63u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_0883C208;
L_0883C208:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883C21Cu);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0883C21Cu) goto L_0883C21C;
    return;
L_0883C21C:
    aot_gpr[5] = (0u | 1u);
    goto L_0883C220;
L_0883C220:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0883C2FC;
      }
      goto L_0883C228;
    }
L_0883C228:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883C238u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C238u) goto L_0883C238;
    return;
L_0883C238:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[23] = (57344u << 16u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883C25Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C25Cu) goto L_0883C25C;
    return;
L_0883C25C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1596)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1616)));
    aot_gpr[6] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0883C2C4;
      }
      goto L_0883C28C;
    }
L_0883C28C:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883C298u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C298u) goto L_0883C298;
    return;
L_0883C298:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883C2B4u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C2B4u) goto L_0883C2B4;
    return;
L_0883C2B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[23]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883C36C;
      }
      goto L_0883C2C4;
    }
L_0883C2C4:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883C2D0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C2D0u) goto L_0883C2D0;
    return;
L_0883C2D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883C2ECu);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C2ECu) goto L_0883C2EC;
    return;
L_0883C2EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883C36C;
      }
      goto L_0883C2FC;
    }
L_0883C2FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883C30Cu);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C30Cu) goto L_0883C30C;
    return;
L_0883C30C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883C328u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C328u) goto L_0883C328;
    return;
L_0883C328:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883C344u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C344u) goto L_0883C344;
    return;
L_0883C344:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883C360u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C360u) goto L_0883C360;
    return;
L_0883C360:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0883C36C;
L_0883C36C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883C39C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C458;
      }
      goto L_0883C3B4;
    }
L_0883C3B4:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-6776)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883C3CC:
    aot_gpr[4] = (0u | 77u);
    aot_gpr[31] = (0x0883C3D8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C3D8u) goto L_0883C3D8;
    return;
L_0883C3D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C464;
      }
      goto L_0883C3E0;
    }
L_0883C3E0:
    aot_gpr[4] = (0u | 73u);
    aot_gpr[31] = (0x0883C3ECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C3ECu) goto L_0883C3EC;
    return;
L_0883C3EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C464;
      }
      goto L_0883C3F4;
    }
L_0883C3F4:
    aot_gpr[4] = (0u | 76u);
    aot_gpr[31] = (0x0883C400u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C400u) goto L_0883C400;
    return;
L_0883C400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C464;
      }
      goto L_0883C408;
    }
L_0883C408:
    aot_gpr[4] = (0u | 79u);
    aot_gpr[31] = (0x0883C414u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C414u) goto L_0883C414;
    return;
L_0883C414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C464;
      }
      goto L_0883C41C;
    }
L_0883C41C:
    aot_gpr[4] = (0u | 74u);
    aot_gpr[31] = (0x0883C428u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C428u) goto L_0883C428;
    return;
L_0883C428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C464;
      }
      goto L_0883C430;
    }
L_0883C430:
    aot_gpr[4] = (0u | 78u);
    aot_gpr[31] = (0x0883C43Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C43Cu) goto L_0883C43C;
    return;
L_0883C43C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C464;
      }
      goto L_0883C444;
    }
L_0883C444:
    aot_gpr[4] = (0u | 75u);
    aot_gpr[31] = (0x0883C450u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C450u) goto L_0883C450;
    return;
L_0883C450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C464;
      }
      goto L_0883C458;
    }
L_0883C458:
    aot_gpr[4] = (0u | 80u);
    aot_gpr[31] = (0x0883C464u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C464u) goto L_0883C464;
    return;
L_0883C464:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883C470:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[30]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[23]);
    aot_gpr[23] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-7628));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-7848));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[31]);
    aot_gpr[31] = (0x0883C4C4u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C4C4u) goto L_0883C4C4;
    return;
L_0883C4C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    aot_gpr[16] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-7600));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0883C4ECu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C4ECu) goto L_0883C4EC;
    return;
L_0883C4EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    aot_gpr[17] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-7580));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0883C510u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C510u) goto L_0883C510;
    return;
L_0883C510:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1596)));
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1616)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C778;
      }
      goto L_0883C540;
    }
L_0883C540:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(25)));
    aot_gpr[20] = (57344u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0883C654;
      }
      goto L_0883C550;
    }
L_0883C550:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[17] | 0u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[21] = (0u | 1u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0883C56C;
L_0883C56C:
    aot_gpr[4] = (aot_gpr[21] << (aot_gpr[16] & 31u));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[22]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C590;
      }
      goto L_0883C57C;
    }
L_0883C57C:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0883C58C;
      }
      goto L_0883C584;
    }
L_0883C584:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0883C590;
      }
      goto L_0883C58C;
    }
L_0883C58C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0883C590;
L_0883C590:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0883C5EC;
      }
      goto L_0883C598;
    }
L_0883C598:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[20]);
    aot_gpr[4] = (0u | 290u);
    aot_gpr[31] = (0x0883C5ACu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C5ACu) goto L_0883C5AC;
    return;
L_0883C5AC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883C5BCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0883C39C;
L_0883C5BC:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883C5CCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_0883C39C;
L_0883C5CC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0883C5E0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0883C5E0u) goto L_0883C5E0;
    return;
L_0883C5DC:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    goto L_0883C5E0;
L_0883C5E0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_0883C620;
      }
      goto L_0883C5EC;
    }
L_0883C5EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[20]);
    aot_gpr[4] = (0u | 289u);
    aot_gpr[31] = (0x0883C5FCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C5FCu) goto L_0883C5FC;
    return;
L_0883C5FC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883C60Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0883C39C;
L_0883C60C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0883C61Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0883C61Cu) goto L_0883C61C;
    return;
L_0883C61C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    goto L_0883C620;
L_0883C620:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C56C;
      }
      goto L_0883C630;
    }
L_0883C630:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0883C644u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0883C644u) goto L_0883C644;
    return;
L_0883C644:
    aot_gpr[20] = (57344u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0883C75C;
      }
      goto L_0883C654;
    }
L_0883C654:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_0883C6B4;
      }
      goto L_0883C660;
    }
L_0883C660:
    aot_gpr[4] = (0u | 291u);
    aot_gpr[31] = (0x0883C66Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C66Cu) goto L_0883C66C;
    return;
L_0883C66C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1596)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1616)));
    aot_gpr[6] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0883C698u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0883C698u) goto L_0883C698;
    return;
L_0883C698:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0883C6ACu);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0883C6ACu) goto L_0883C6AC;
    return;
L_0883C6AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0883C75C;
      }
      goto L_0883C6B4;
    }
L_0883C6B4:
    aot_gpr[4] = (0u | 285u);
    aot_gpr[31] = (0x0883C6C0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883C6C0u) goto L_0883C6C0;
    return;
L_0883C6C0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0883C6CCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0883C6CCu) goto L_0883C6CC;
    return;
L_0883C6CC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0883C6E0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0883C6E0u) goto L_0883C6E0;
    return;
L_0883C6E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1596)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1616)));
    aot_gpr[6] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0883C70Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7552));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0883C70Cu) goto L_0883C70C;
    return;
L_0883C70C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0883C720u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0883C720u) goto L_0883C720;
    return;
L_0883C720:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0883C730u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C730u) goto L_0883C730;
    return;
L_0883C730:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883C74Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C74Cu) goto L_0883C74C;
    return;
L_0883C74C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    goto L_0883C75C;
L_0883C75C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883C76Cu);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C76Cu) goto L_0883C76C;
    return;
L_0883C76C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0883C778;
L_0883C778:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883C7A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1596)));
    aot_gpr[6] = (aot_gpr[5] << 5u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1616)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[17] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2214u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-7848));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7544));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-7536));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-7524));
      if (branch_taken) {
          goto L_0883C890;
      }
      goto L_0883C808;
    }
L_0883C808:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0883C818u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C818u) goto L_0883C818;
    return;
L_0883C818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883C83Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C83Cu) goto L_0883C83C;
    return;
L_0883C83C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883C860u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C860u) goto L_0883C860;
    return;
L_0883C860:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883C874u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C874u) goto L_0883C874;
    return;
L_0883C874:
    aot_gpr[31] = (0x0883C87Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C87Cu) goto L_0883C87C;
    return;
L_0883C87C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0883C888u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x0883C888u) goto L_0883C888;
    return;
L_0883C888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C908;
      }
      goto L_0883C890;
    }
L_0883C890:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0883C8A0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C8A0u) goto L_0883C8A0;
    return;
L_0883C8A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883C8C0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C8C0u) goto L_0883C8C0;
    return;
L_0883C8C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883C8E0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C8E0u) goto L_0883C8E0;
    return;
L_0883C8E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883C8F4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C8F4u) goto L_0883C8F4;
    return;
L_0883C8F4:
    aot_gpr[31] = (0x0883C8FCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C8FCu) goto L_0883C8FC;
    return;
L_0883C8FC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0883C908u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x0883C908u) goto L_0883C908;
    return;
L_0883C908:
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
L_0883C924:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[18] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0883C954u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C954u) goto L_0883C954;
    return;
L_0883C954:
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (16281u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16576u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7324)));
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0883C9D0;
      }
      goto L_0883C9A0;
    }
L_0883C9A0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0883C9B4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C9B4u) goto L_0883C9B4;
    return;
L_0883C9B4:
    aot_gpr[4] = (49416u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[20] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    goto L_0883C9D0;
L_0883C9D0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0883C9E0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C9E0u) goto L_0883C9E0;
    return;
L_0883C9E0:
    aot_gpr[4] = (16025u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x0883CA10u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CA10u) goto L_0883CA10;
    return;
L_0883CA10:
    aot_gpr[4] = (15235u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 4719u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (47875u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 4719u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x0883CA40u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CA40u) goto L_0883CA40;
    return;
L_0883CA40:
    aot_gpr[4] = (48588u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52430u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (48460u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CA80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    aot_gpr[6] = (49184u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0883CAC4;
      }
      goto L_0883CABC;
    }
L_0883CABC:
    aot_gpr[31] = (0x0883CAC4u);
    aot_gpr[5] = (0u | 1u);
    goto L_0883C924;
L_0883CAC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CAD0:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (15488u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16252u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CB1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x0883CB54u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(1608), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x0881C1D8u>(ctx, &aot_mem) && ctx.pc == 0x0883CB54u) goto L_0883CB54;
    return;
L_0883CB54:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1572), aot_gpr[2]);
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x0883CB68u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 18u, 0x0881C17Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CB68u) goto L_0883CB68;
    return;
L_0883CB68:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-7848));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1576), aot_gpr[2]);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-7828));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883CB90u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CB90u) goto L_0883CB90;
    return;
L_0883CB90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1572)));
    aot_gpr[31] = (0x0883CB9Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x0883CB9Cu) goto L_0883CB9C;
    return;
L_0883CB9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1580), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3304)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
      if (branch_taken) {
          goto L_0883CC38;
      }
      goto L_0883CBC8;
    }
L_0883CBC8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1584), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (2215u << 16u);
      if (branch_taken) {
          goto L_0883CC30;
      }
      goto L_0883CBE4;
    }
L_0883CBE4:
    aot_gpr[31] = (0x0883CBECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 74u, 0x0881C544u>(ctx, &aot_mem) && ctx.pc == 0x0883CBECu) goto L_0883CBEC;
    return;
L_0883CBEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CC1C;
      }
      goto L_0883CC04;
    }
L_0883CC04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1584)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CC1C;
      }
      goto L_0883CC14;
    }
L_0883CC14:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1584), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1604), aot_gpr[16]);
    goto L_0883CC1C;
L_0883CC1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883CBE4;
      }
      goto L_0883CC30;
    }
L_0883CC30:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0883CC48;
      }
      goto L_0883CC38;
    }
L_0883CC38:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1584), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-5944)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1604), aot_gpr[4]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    goto L_0883CC48;
L_0883CC48:
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883CC60u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7504));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CC60u) goto L_0883CC60;
    return;
L_0883CC60:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883CC78u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7484));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CC78u) goto L_0883CC78;
    return;
L_0883CC78:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[19] = (2215u << 16u);
      if (branch_taken) {
          goto L_0883CD3C;
      }
      goto L_0883CC84;
    }
L_0883CC84:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CD3C;
      }
      goto L_0883CC8C;
    }
L_0883CC8C:
    aot_gpr[21] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883CC9Cu);
    aot_gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883CC9Cu) goto L_0883CC9C;
    return;
L_0883CC9C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0883CCACu);
    aot_gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883CCACu) goto L_0883CCAC;
    return;
L_0883CCAC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0883CD3C;
      }
      goto L_0883CCB4;
    }
L_0883CCB4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CD3C;
      }
      goto L_0883CCBC;
    }
L_0883CCBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3304)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0883CD08;
      }
      goto L_0883CCD4;
    }
L_0883CCD4:
    aot_gpr[4] = (65280u << 16u);
    aot_gpr[5] = (aot_gpr[17] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883CD3C;
      }
      goto L_0883CD08;
    }
L_0883CD08:
    aot_gpr[4] = (256u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[17] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0883CD3C;
L_0883CD3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1572)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[5]);
      if (branch_taken) {
          goto L_0883CD7C;
      }
      goto L_0883CD54;
    }
L_0883CD54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0883CD74u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883CD74u) goto L_0883CD74;
    return;
L_0883CD74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0883CD88;
      }
      goto L_0883CD7C;
    }
L_0883CD7C:
    aot_gpr[31] = (0x0883CD84u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x0883CD84u) goto L_0883CD84;
    return;
L_0883CD84:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_0883CD88;
L_0883CD88:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1616), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1612), 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[18] = (0u | 0u);
    goto L_0883CD9C;
L_0883CD9C:
    aot_gpr[31] = (0x0883CDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x0881C1D8u>(ctx, &aot_mem) && ctx.pc == 0x0883CDA4u) goto L_0883CDA4;
    return;
L_0883CDA4:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CE88;
      }
      goto L_0883CDB0;
    }
L_0883CDB0:
    aot_gpr[31] = (0x0883CDB8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x0881C224u>(ctx, &aot_mem) && ctx.pc == 0x0883CDB8u) goto L_0883CDB8;
    return;
L_0883CDB8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CE00;
      }
      goto L_0883CDC8;
    }
L_0883CDC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883CDF0;
      }
      goto L_0883CDD4;
    }
L_0883CDD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0883CDE0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 140u, 0x08874838u>(ctx, &aot_mem) && ctx.pc == 0x0883CDE0u) goto L_0883CDE0;
    return;
L_0883CDE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CE80;
      }
      goto L_0883CDF0;
    }
L_0883CDF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1612)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1612), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883CE80;
      }
      goto L_0883CE00;
    }
L_0883CE00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CE44;
      }
      goto L_0883CE0C;
    }
L_0883CE0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883CE34;
      }
      goto L_0883CE18;
    }
L_0883CE18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0883CE24u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 147u, 0x08874884u>(ctx, &aot_mem) && ctx.pc == 0x0883CE24u) goto L_0883CE24;
    return;
L_0883CE24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883CE80;
      }
      goto L_0883CE34;
    }
L_0883CE34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1612)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1612), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883CE80;
      }
      goto L_0883CE44;
    }
L_0883CE44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CE80;
      }
      goto L_0883CE50;
    }
L_0883CE50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883CE74;
      }
      goto L_0883CE5C;
    }
L_0883CE5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0883CE68u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 133u, 0x088747ECu>(ctx, &aot_mem) && ctx.pc == 0x0883CE68u) goto L_0883CE68;
    return;
L_0883CE68:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883CE80;
      }
      goto L_0883CE74;
    }
L_0883CE74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1612)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(1612), aot_gpr[4]);
    goto L_0883CE80;
L_0883CE80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883CD9C;
      }
      goto L_0883CE88;
    }
L_0883CE88:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1572)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 26u, 0x0883D180u>(ctx, &aot_mem); return;
      }
      goto L_0883CEA0;
    }
L_0883CEA0:
    aot_gpr[30] = (0u | 0u);
    goto L_0883CEA4;
L_0883CEA4:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1616)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[30]);
    aot_gpr[31] = (0x0883CEB8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x0881C224u>(ctx, &aot_mem) && ctx.pc == 0x0883CEB8u) goto L_0883CEB8;
    return;
L_0883CEB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1616)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[31] = (0x0883CEE0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x0881C224u>(ctx, &aot_mem) && ctx.pc == 0x0883CEE0u) goto L_0883CEE0;
    return;
L_0883CEE0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0883CF9C;
      }
      goto L_0883CEF4;
    }
L_0883CEF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1616)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[30]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CF38;
      }
      goto L_0883CF0C;
    }
L_0883CF0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0883CF1Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 140u, 0x08874838u>(ctx, &aot_mem) && ctx.pc == 0x0883CF1Cu) goto L_0883CF1C;
    return;
L_0883CF1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883CF9C;
      }
      goto L_0883CF30;
    }
L_0883CF30:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[23]));
      if (branch_taken) {
          goto L_0883CF9C;
      }
      goto L_0883CF38;
    }
L_0883CF38:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CF70;
      }
      goto L_0883CF44;
    }
L_0883CF44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0883CF54u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 147u, 0x08874884u>(ctx, &aot_mem) && ctx.pc == 0x0883CF54u) goto L_0883CF54;
    return;
L_0883CF54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CF9C;
      }
      goto L_0883CF68;
    }
L_0883CF68:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[23]));
      if (branch_taken) {
          goto L_0883CF9C;
      }
      goto L_0883CF70;
    }
L_0883CF70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CF9C;
      }
      goto L_0883CF7C;
    }
L_0883CF7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0883CF8Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 133u, 0x088747ECu>(ctx, &aot_mem) && ctx.pc == 0x0883CF8Cu) goto L_0883CF8C;
    return;
L_0883CF8C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883CF9C;
      }
      goto L_0883CF98;
    }
L_0883CF98:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[23]));
    goto L_0883CF9C;
L_0883CF9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883CFC4;
      }
      goto L_0883CFAC;
    }
L_0883CFAC:
    aot_gpr[31] = (0x0883CFB4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 76u, 0x0881C57Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CFB4u) goto L_0883CFB4;
    return;
L_0883CFB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883CFE8;
      }
      goto L_0883CFC4;
    }
L_0883CFC4:
    aot_gpr[31] = (0x0883CFCCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 155u, 0x0881BD88u>(ctx, &aot_mem) && ctx.pc == 0x0883CFCCu) goto L_0883CFCC;
    return;
L_0883CFCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x0883CFD8u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 4u, 0x0881C058u>(ctx, &aot_mem) && ctx.pc == 0x0883CFD8u) goto L_0883CFD8;
    return;
L_0883CFD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[31] = (0x0883CFE4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 182u, 0x0881BFE8u>(ctx, &aot_mem) && ctx.pc == 0x0883CFE4u) goto L_0883CFE4;
    return;
L_0883CFE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_0883CFE8;
L_0883CFE8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1576)));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 22u, 0x0883D140u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 1u, 0x0883D004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0056(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0056_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_56(Runtime &runtime) {
    runtime.register_generated_unit(56u, 0x0883C000u, 4096u, &recomp_unit_0056, &recomp_unit_0056_entry);
    runtime.register_function(0x0883C000u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C01Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C02Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C074u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C07Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C088u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C0A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C0A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C0BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C0D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C0DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C0E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C0F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C130u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C150u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C158u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C164u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C174u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C17Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C190u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C1A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C1ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C1B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C1C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C1D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C1E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C1ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C1F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C208u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C21Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C220u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C228u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C238u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C25Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C28Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C298u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C2B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C2C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C2D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C2ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C2FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C30Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C328u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C344u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C360u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C36Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C39Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C3B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C3CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C3D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C3E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C3ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C3F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C400u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C408u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C414u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C41Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C428u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C430u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C43Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C444u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C450u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C458u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C464u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C470u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C4C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C4ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C510u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C540u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C550u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C56Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C57Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C584u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C58Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C590u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C598u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C5ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C5BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C5CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C5DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C5E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C5ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C5FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C60Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C61Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C620u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C630u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C644u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C654u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C660u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C66Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C698u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C6ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C6B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C6C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C6CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C6E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C70Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C720u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C730u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C74Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C75Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C76Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C778u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C7A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C808u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C818u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C83Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C860u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C874u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C87Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C888u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C890u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C8A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C8C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C8E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C8F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C8FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C908u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C924u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C954u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C9A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C9B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C9D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883C9E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CA10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CA40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CA80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CABCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CAC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CAD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CB1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CB54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CB68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CB90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CB9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CBC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CBE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CBECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CC04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CC14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CC1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CC30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CC38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CC48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CC60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CC78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CC84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CC8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CC9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CCACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CCB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CCBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CCD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CD08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CD3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CD54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CD74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CD7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CD84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CD88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CD9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CDA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CDB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CDB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CDC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CDD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CDE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CDF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CE00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CE0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CE18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CE24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CE34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CE44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CE50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CE5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CE68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CE74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CE80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CE88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CEA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CEA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CEB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CEE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CEF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CF0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CF1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CF30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CF38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CF44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CF54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CF68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CF70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CF7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CF8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CF98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CF9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CFACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CFB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CFC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CFCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CFD8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CFE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x0883CFE8u, &recomp_unit_0056, "recomp_unit_0056");
}
} // namespace psprecomp
