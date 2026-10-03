#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0215[1020] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0,
    31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 47, 0, 48, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0,
    0, 55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 67, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0,
    0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 122,
    0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0,
    0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136,
    0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0,
    0, 0, 146, 147, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 151, 0, 152, 0, 0,
    0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181,
};
void recomp_unit_0215_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088DB000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0215[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088DB000;
    case 2u: goto L_088DB050;
    case 3u: goto L_088DB05C;
    case 4u: goto L_088DB064;
    case 5u: goto L_088DB08C;
    case 6u: goto L_088DB0DC;
    case 7u: goto L_088DB104;
    case 8u: goto L_088DB10C;
    case 9u: goto L_088DB12C;
    case 10u: goto L_088DB170;
    case 11u: goto L_088DB19C;
    case 12u: goto L_088DB1A4;
    case 13u: goto L_088DB1B0;
    case 14u: goto L_088DB1B8;
    case 15u: goto L_088DB1EC;
    case 16u: goto L_088DB204;
    case 17u: goto L_088DB220;
    case 18u: goto L_088DB230;
    case 19u: goto L_088DB238;
    case 20u: goto L_088DB26C;
    case 21u: goto L_088DB2AC;
    case 22u: goto L_088DB2B4;
    case 23u: goto L_088DB2C0;
    case 24u: goto L_088DB2D0;
    case 25u: goto L_088DB2E8;
    case 26u: goto L_088DB30C;
    case 27u: goto L_088DB31C;
    case 28u: goto L_088DB354;
    case 29u: goto L_088DB368;
    case 30u: goto L_088DB378;
    case 31u: goto L_088DB380;
    case 32u: goto L_088DB388;
    case 33u: goto L_088DB394;
    case 34u: goto L_088DB3AC;
    case 35u: goto L_088DB3B8;
    case 36u: goto L_088DB3E0;
    case 37u: goto L_088DB3EC;
    case 38u: goto L_088DB3F8;
    case 39u: goto L_088DB41C;
    case 40u: goto L_088DB424;
    case 41u: goto L_088DB448;
    case 42u: goto L_088DB46C;
    case 43u: goto L_088DB48C;
    case 44u: goto L_088DB498;
    case 45u: goto L_088DB4A4;
    case 46u: goto L_088DB4B0;
    case 47u: goto L_088DB4B8;
    case 48u: goto L_088DB4C0;
    case 49u: goto L_088DB4C4;
    case 50u: goto L_088DB4DC;
    case 51u: goto L_088DB548;
    case 52u: goto L_088DB55C;
    case 53u: goto L_088DB564;
    case 54u: goto L_088DB570;
    case 55u: goto L_088DB584;
    case 56u: goto L_088DB58C;
    case 57u: goto L_088DB598;
    case 58u: goto L_088DB5C8;
    case 59u: goto L_088DB5D0;
    case 60u: goto L_088DB5DC;
    case 61u: goto L_088DB600;
    case 62u: goto L_088DB608;
    case 63u: goto L_088DB610;
    case 64u: goto L_088DB628;
    case 65u: goto L_088DB640;
    case 66u: goto L_088DB650;
    case 67u: goto L_088DB654;
    case 68u: goto L_088DB660;
    case 69u: goto L_088DB668;
    case 70u: goto L_088DB670;
    case 71u: goto L_088DB678;
    case 72u: goto L_088DB684;
    case 73u: goto L_088DB694;
    case 74u: goto L_088DB6A0;
    case 75u: goto L_088DB6AC;
    case 76u: goto L_088DB6B4;
    case 77u: goto L_088DB6C8;
    case 78u: goto L_088DB6D0;
    case 79u: goto L_088DB6F8;
    case 80u: goto L_088DB708;
    case 81u: goto L_088DB710;
    case 82u: goto L_088DB720;
    case 83u: goto L_088DB72C;
    case 84u: goto L_088DB74C;
    case 85u: goto L_088DB780;
    case 86u: goto L_088DB7D8;
    case 87u: goto L_088DB818;
    case 88u: goto L_088DB820;
    case 89u: goto L_088DB82C;
    case 90u: goto L_088DB84C;
    case 91u: goto L_088DB858;
    case 92u: goto L_088DB868;
    case 93u: goto L_088DB87C;
    case 94u: goto L_088DB890;
    case 95u: goto L_088DB8A8;
    case 96u: goto L_088DB8CC;
    case 97u: goto L_088DB8D4;
    case 98u: goto L_088DB8D8;
    case 99u: goto L_088DB8FC;
    case 100u: goto L_088DB930;
    case 101u: goto L_088DB954;
    case 102u: goto L_088DB970;
    case 103u: goto L_088DB9A4;
    case 104u: goto L_088DB9AC;
    case 105u: goto L_088DB9C4;
    case 106u: goto L_088DB9D0;
    case 107u: goto L_088DB9E4;
    case 108u: goto L_088DBA00;
    case 109u: goto L_088DBA20;
    case 110u: goto L_088DBA28;
    case 111u: goto L_088DBA3C;
    case 112u: goto L_088DBA50;
    case 113u: goto L_088DBA5C;
    case 114u: goto L_088DBA64;
    case 115u: goto L_088DBA6C;
    case 116u: goto L_088DBA74;
    case 117u: goto L_088DBA88;
    case 118u: goto L_088DBAB0;
    case 119u: goto L_088DBABC;
    case 120u: goto L_088DBAD8;
    case 121u: goto L_088DBAF0;
    case 122u: goto L_088DBAFC;
    case 123u: goto L_088DBB04;
    case 124u: goto L_088DBB10;
    case 125u: goto L_088DBB18;
    case 126u: goto L_088DBB2C;
    case 127u: goto L_088DBB34;
    case 128u: goto L_088DBB44;
    case 129u: goto L_088DBB48;
    case 130u: goto L_088DBB58;
    case 131u: goto L_088DBB78;
    case 132u: goto L_088DBB84;
    case 133u: goto L_088DBB94;
    case 134u: goto L_088DBBAC;
    case 135u: goto L_088DBBEC;
    case 136u: goto L_088DBBFC;
    case 137u: goto L_088DBC0C;
    case 138u: goto L_088DBC24;
    case 139u: goto L_088DBC34;
    case 140u: goto L_088DBC5C;
    case 141u: goto L_088DBC9C;
    case 142u: goto L_088DBCB4;
    case 143u: goto L_088DBCC4;
    case 144u: goto L_088DBCE8;
    case 145u: goto L_088DBCF8;
    case 146u: goto L_088DBD08;
    case 147u: goto L_088DBD0C;
    case 148u: goto L_088DBD24;
    case 149u: goto L_088DBD2C;
    case 150u: goto L_088DBD68;
    case 151u: goto L_088DBD6C;
    case 152u: goto L_088DBD74;
    case 153u: goto L_088DBD84;
    case 154u: goto L_088DBD94;
    case 155u: goto L_088DBDA0;
    case 156u: goto L_088DBDA8;
    case 157u: goto L_088DBDB8;
    case 158u: goto L_088DBDDC;
    case 159u: goto L_088DBDFC;
    case 160u: goto L_088DBE30;
    case 161u: goto L_088DBE38;
    case 162u: goto L_088DBE48;
    case 163u: goto L_088DBE50;
    case 164u: goto L_088DBE64;
    case 165u: goto L_088DBE7C;
    case 166u: goto L_088DBEA8;
    case 167u: goto L_088DBEB4;
    case 168u: goto L_088DBEC4;
    case 169u: goto L_088DBEC8;
    case 170u: goto L_088DBEF4;
    case 171u: goto L_088DBF08;
    case 172u: goto L_088DBF10;
    case 173u: goto L_088DBF38;
    case 174u: goto L_088DBF44;
    case 175u: goto L_088DBF58;
    case 176u: goto L_088DBF60;
    case 177u: goto L_088DBF98;
    case 178u: goto L_088DBFBC;
    case 179u: goto L_088DBFCC;
    case 180u: goto L_088DBFE0;
    case 181u: goto L_088DBFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088DB000:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(972)));
    aot_gpr[7] = (aot_gpr[4] - aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (0u | 30u);
    aot_gpr[7] = (0u | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x088DB050u);
    aot_gpr[8] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DB050u) goto L_088DB050;
    return;
L_088DB050:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x088DB05Cu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB05Cu) goto L_088DB05C;
    return;
L_088DB05C:
    aot_gpr[31] = (0x088DB064u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 25u, 0x08A4C1DCu>(ctx, &aot_mem) && ctx.pc == 0x088DB064u) goto L_088DB064;
    return;
L_088DB064:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[31] = (0x088DB08Cu);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 179u, 0x0885AADCu>(ctx, &aot_mem) && ctx.pc == 0x088DB08Cu) goto L_088DB08C;
    return;
L_088DB08C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(972)));
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (0u | 31u);
    aot_gpr[7] = (0u | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x088DB0DCu);
    aot_gpr[8] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DB0DCu) goto L_088DB0DC;
    return;
L_088DB0DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(876)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[22] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DB19C;
      }
      goto L_088DB104;
    }
L_088DB104:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[23] = (2218u << 16u);
    goto L_088DB10C;
L_088DB10C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088DB12Cu);
    aot_gpr[21] = (aot_gpr[6] + aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB12Cu) goto L_088DB12C;
    return;
L_088DB12C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(14)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[31] = (0x088DB170u);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 183u, 0x088D7FA0u>(ctx, &aot_mem) && ctx.pc == 0x088DB170u) goto L_088DB170;
    return;
L_088DB170:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(876)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[22] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DB10C;
      }
      goto L_088DB19C;
    }
L_088DB19C:
    aot_gpr[31] = (0x088DB1A4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 47u, 0x088D92DCu>(ctx, &aot_mem) && ctx.pc == 0x088DB1A4u) goto L_088DB1A4;
    return;
L_088DB1A4:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088DB1B0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB1B0u) goto L_088DB1B0;
    return;
L_088DB1B0:
    aot_gpr[31] = (0x088DB1B8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 190u, 0x088D9D48u>(ctx, &aot_mem) && ctx.pc == 0x088DB1B8u) goto L_088DB1B8;
    return;
L_088DB1B8:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[4] = (16253u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (aot_gpr[4] | 28836u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[18] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088DB1ECu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 93u, 0x088D96D0u>(ctx, &aot_mem) && ctx.pc == 0x088DB1ECu) goto L_088DB1EC;
    return;
L_088DB1EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[6] = (ctx.lo);
    aot_gpr[31] = (0x088DB204u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088DB204u) goto L_088DB204;
    return;
L_088DB204:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x088DB220u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 95u, 0x088E682Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB220u) goto L_088DB220;
    return;
L_088DB220:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(1960), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088DB230u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 205u, 0x088DAD24u>(ctx, &aot_mem) && ctx.pc == 0x088DB230u) goto L_088DB230;
    return;
L_088DB230:
    aot_gpr[31] = (0x088DB238u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2232)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 158u, 0x088C5AF8u>(ctx, &aot_mem) && ctx.pc == 0x088DB238u) goto L_088DB238;
    return;
L_088DB238:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB26C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2172)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2182), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2180), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088DB2ACu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x088DB2ACu) goto L_088DB2AC;
    return;
L_088DB2AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB2D0;
      }
      goto L_088DB2B4;
    }
L_088DB2B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2172)));
    aot_gpr[31] = (0x088DB2C0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x088DB2C0u) goto L_088DB2C0;
    return;
L_088DB2C0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(11))))));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2182), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_088DB2D0;
L_088DB2D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1944)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x088DB2E8u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 95u, 0x088D77F0u>(ctx, &aot_mem) && ctx.pc == 0x088DB2E8u) goto L_088DB2E8;
    return;
L_088DB2E8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2182))))));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x088DB30Cu);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 115u, 0x088D79B8u>(ctx, &aot_mem) && ctx.pc == 0x088DB30Cu) goto L_088DB30C;
    return;
L_088DB30C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB31C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2172)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088DB354u);
    aot_gpr[18] = (aot_gpr[7] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x088DB354u) goto L_088DB354;
    return;
L_088DB354:
    aot_gpr[7] = (aot_gpr[17] << 2u);
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(1948)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DB448;
      }
      goto L_088DB368;
    }
L_088DB368:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(12))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(11))))));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DB41C;
      }
      goto L_088DB378;
    }
L_088DB378:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088DB41C;
      }
      goto L_088DB380;
    }
L_088DB380:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DB41C;
      }
      goto L_088DB388;
    }
L_088DB388:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088DB394u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088DB394u) goto L_088DB394;
    return;
L_088DB394:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(22)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(12))))));
    aot_gpr[21] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[21];
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_088DB3B8;
      }
      goto L_088DB3AC;
    }
L_088DB3AC:
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(8))))));
    goto L_088DB3B8;
L_088DB3B8:
    aot_gpr[8] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(1948)));
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088DB3E0u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 106u, 0x088D78E4u>(ctx, &aot_mem) && ctx.pc == 0x088DB3E0u) goto L_088DB3E0;
    return;
L_088DB3E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[21];
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_088DB3F8;
      }
      goto L_088DB3EC;
    }
L_088DB3EC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(8))))));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088DB3F8;
L_088DB3F8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[31] = (0x088DB41Cu);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 115u, 0x088D79B8u>(ctx, &aot_mem) && ctx.pc == 0x088DB41Cu) goto L_088DB41C;
    return;
L_088DB41C:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB448;
      }
      goto L_088DB424;
    }
L_088DB424:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(11))))));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[31] = (0x088DB448u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 115u, 0x088D79B8u>(ctx, &aot_mem) && ctx.pc == 0x088DB448u) goto L_088DB448;
    return;
L_088DB448:
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
L_088DB46C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    goto L_088DB48C;
L_088DB48C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088DB498u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 182u, 0x08872D68u>(ctx, &aot_mem) && ctx.pc == 0x088DB498u) goto L_088DB498;
    return;
L_088DB498:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB4B0;
      }
      goto L_088DB4A4;
    }
L_088DB4A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088DB4C0;
      }
      goto L_088DB4B0;
    }
L_088DB4B0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DB48C;
      }
      goto L_088DB4B8;
    }
L_088DB4B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088DB4C4;
      }
      goto L_088DB4C0;
    }
L_088DB4C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    goto L_088DB4C4;
L_088DB4C4:
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
L_088DB4DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (256u << 16u);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[5] & aot_gpr[7]);
    aot_gpr[6] = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr[7]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[6] = (65280u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] >> 24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[18] << 3u);
    aot_gpr[6] = (0u + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[17] = (aot_gpr[17] & 255u);
    aot_gpr[5] = (0u | 81u);
    aot_gpr[19] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[5];
    aot_gpr[19] = (aot_gpr[7] - aot_gpr[19]);
      if (branch_taken) {
          goto L_088DB564;
      }
      goto L_088DB548;
    }
L_088DB548:
    aot_gpr[20] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088DB55Cu);
    aot_gpr[6] = (0u | 2u);
    goto L_088DB46C;
L_088DB55C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DB654;
      }
      goto L_088DB564;
    }
L_088DB564:
    aot_gpr[4] = (0u | 91u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DB58C;
      }
      goto L_088DB570;
    }
L_088DB570:
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088DB584u);
    aot_gpr[6] = (0u | 2u);
    goto L_088DB46C;
L_088DB584:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DB654;
      }
      goto L_088DB58C;
    }
L_088DB58C:
    aot_gpr[4] = (0u | 99u);
    { const bool branch_taken = aot_gpr[17] != aot_gpr[4];
    aot_gpr[4] = (0u | 100u);
      if (branch_taken) {
          goto L_088DB5D0;
      }
      goto L_088DB598;
    }
L_088DB598:
    { const std::uint32_t dividend = aot_gpr[19]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 3u);
    aot_gpr[7] = (ctx.lo);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-3));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[7]);
    aot_gpr[31] = (0x088DB5C8u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(24));
    goto L_088DB46C;
L_088DB5C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DB654;
      }
      goto L_088DB5D0;
    }
L_088DB5D0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 101 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB608;
      }
      goto L_088DB5DC;
    }
L_088DB5DC:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-696));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088DB600u);
    aot_gpr[6] = (0u | 2u);
    goto L_088DB46C;
L_088DB600:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DB654;
      }
      goto L_088DB608;
    }
L_088DB608:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB628;
      }
      goto L_088DB610;
    }
L_088DB610:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_088DB640;
      }
      goto L_088DB628;
    }
L_088DB628:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(84));
    goto L_088DB640;
L_088DB640:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088DB650u);
    aot_gpr[6] = (0u | 10u);
    goto L_088DB46C;
L_088DB650:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    goto L_088DB654;
L_088DB654:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DB670;
      }
      goto L_088DB660;
    }
L_088DB660:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB678;
      }
      goto L_088DB668;
    }
L_088DB668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB72C;
      }
      goto L_088DB670;
    }
L_088DB670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB72C;
      }
      goto L_088DB678;
    }
L_088DB678:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_088DB6C8;
      }
      goto L_088DB684;
    }
L_088DB684:
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB6C8;
      }
      goto L_088DB694;
    }
L_088DB694:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088DB6A0u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088DB6A0u) goto L_088DB6A0;
    return;
L_088DB6A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088DB6B4;
      }
      goto L_088DB6AC;
    }
L_088DB6AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088DB6C8;
      }
      goto L_088DB6B4;
    }
L_088DB6B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB694;
      }
      goto L_088DB6C8;
    }
L_088DB6C8:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB72C;
      }
      goto L_088DB6D0;
    }
L_088DB6D0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(952)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(948)));
    aot_gpr[6] = (aot_gpr[5] << 3u);
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[6]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(952), aot_gpr[5]);
      if (branch_taken) {
          goto L_088DB710;
      }
      goto L_088DB6F8;
    }
L_088DB6F8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088DB708u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 77u, 0x088FF820u>(ctx, &aot_mem) && ctx.pc == 0x088DB708u) goto L_088DB708;
    return;
L_088DB708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB720;
      }
      goto L_088DB710;
    }
L_088DB710:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088DB720u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 77u, 0x088FF820u>(ctx, &aot_mem) && ctx.pc == 0x088DB720u) goto L_088DB720;
    return;
L_088DB720:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088DB72Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0590_entry, 590u, 5u, 0x08A52040u>(ctx, &aot_mem) && ctx.pc == 0x088DB72Cu) goto L_088DB72C;
    return;
L_088DB72C:
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
L_088DB74C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2172)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(52));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[31]);
    aot_gpr[31] = (0x088DB780u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 158u, 0x08918FB8u>(ctx, &aot_mem) && ctx.pc == 0x088DB780u) goto L_088DB780;
    return;
L_088DB780:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[16] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2172)));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(52));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(52));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x088DB7D8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 100u, 0x08944F38u>(ctx, &aot_mem) && ctx.pc == 0x088DB7D8u) goto L_088DB7D8;
    return;
L_088DB7D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 0u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 36u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 40u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<11u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088DB818u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 156u, 0x08918F68u>(ctx, &aot_mem) && ctx.pc == 0x088DB818u) goto L_088DB818;
    return;
L_088DB818:
    aot_gpr[31] = (0x088DB820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 17u, 0x0893F128u>(ctx, &aot_mem) && ctx.pc == 0x088DB820u) goto L_088DB820;
    return;
L_088DB820:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x088DB82Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x088DB82Cu) goto L_088DB82C;
    return;
L_088DB82C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x088DB84Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x088DB84Cu) goto L_088DB84C;
    return;
L_088DB84C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2160)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB868;
      }
      goto L_088DB858;
    }
L_088DB858:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088DB868u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x088DB868u) goto L_088DB868;
    return;
L_088DB868:
    aot_gpr[5] = (16204u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[31] = (0x088DB87Cu);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 158u, 0x08918FB8u>(ctx, &aot_mem) && ctx.pc == 0x088DB87Cu) goto L_088DB87C;
    return;
L_088DB87C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[31] = (0x088DB890u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28788)));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 156u, 0x08918F68u>(ctx, &aot_mem) && ctx.pc == 0x088DB890u) goto L_088DB890;
    return;
L_088DB890:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB8A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088DB8D4;
      }
      goto L_088DB8CC;
    }
L_088DB8CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(1492));
      if (branch_taken) {
          goto L_088DB8D8;
      }
      goto L_088DB8D4;
    }
L_088DB8D4:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(1476));
    goto L_088DB8D8;
L_088DB8D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(868)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DB954;
      }
      goto L_088DB8FC;
    }
L_088DB8FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088DB930u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 100u, 0x088DE784u>(ctx, &aot_mem) && ctx.pc == 0x088DB930u) goto L_088DB930;
    return;
L_088DB930:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(868)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DB8FC;
      }
      goto L_088DB954;
    }
L_088DB954:
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
L_088DB970:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_088DB9E4;
      }
      goto L_088DB9A4;
    }
L_088DB9A4:
    aot_gpr[31] = (0x088DB9ACu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x0881C710u>(ctx, &aot_mem) && ctx.pc == 0x088DB9ACu) goto L_088DB9AC;
    return;
L_088DB9AC:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1104)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB9D0;
      }
      goto L_088DB9C4;
    }
L_088DB9C4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088DB9D0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5104)));
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 116u, 0x088CD96Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB9D0u) goto L_088DB9D0;
    return;
L_088DB9D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB9A4;
      }
      goto L_088DB9E4;
    }
L_088DB9E4:
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
L_088DBA00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088DBA20u);
    aot_gpr[5] = (aot_gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 104u, 0x0881C784u>(ctx, &aot_mem) && ctx.pc == 0x088DBA20u) goto L_088DBA20;
    return;
L_088DBA20:
    aot_gpr[31] = (0x088DBA28u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x0881C710u>(ctx, &aot_mem) && ctx.pc == 0x088DBA28u) goto L_088DBA28;
    return;
L_088DBA28:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x088DBA3Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 229u, 0x088B7F30u>(ctx, &aot_mem) && ctx.pc == 0x088DBA3Cu) goto L_088DBA3C;
    return;
L_088DBA3C:
    aot_gpr[4] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1204)));
      if (branch_taken) {
          goto L_088DBA64;
      }
      goto L_088DBA50;
    }
L_088DBA50:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBA6C;
      }
      goto L_088DBA5C;
    }
L_088DBA5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBA74;
      }
      goto L_088DBA64;
    }
L_088DBA64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBA74;
      }
      goto L_088DBA6C;
    }
L_088DBA6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1104)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_088DBA74;
L_088DBA74:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBA88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2178)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(5104)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1204)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088DBAB0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 157u, 0x088CDC7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBAB0u) goto L_088DBAB0;
    return;
L_088DBAB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBABC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2197))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBB48;
      }
      goto L_088DBAD8;
    }
L_088DBAD8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1456)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DBB48;
      }
      goto L_088DBAF0;
    }
L_088DBAF0:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DBB10;
      }
      goto L_088DBAFC;
    }
L_088DBAFC:
    aot_gpr[31] = (0x088DBB04u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 82u, 0x088DD67Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBB04u) goto L_088DBB04;
    return;
L_088DBB04:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2197))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088DBB44;
      }
      goto L_088DBB10;
    }
L_088DBB10:
    aot_gpr[31] = (0x088DBB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 97u, 0x088DD808u>(ctx, &aot_mem) && ctx.pc == 0x088DBB18u) goto L_088DBB18;
    return;
L_088DBB18:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5104)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x088DBB2Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 94u, 0x088DD7C4u>(ctx, &aot_mem) && ctx.pc == 0x088DBB2Cu) goto L_088DBB2C;
    return;
L_088DBB2C:
    aot_gpr[31] = (0x088DBB34u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088DBA88;
L_088DBB34:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2197))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2200), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_088DBB44;
L_088DBB44:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2197), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088DBB48;
L_088DBB48:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBB58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(1204));
    aot_gpr[16] = (2216u << 16u);
    goto L_088DBB78;
L_088DBB78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DBB84u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DBB84u) goto L_088DBB84;
    return;
L_088DBB84:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 26 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DBB78;
      }
      goto L_088DBB94;
    }
L_088DBB94:
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
L_088DBBAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2178)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(2000));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    aot_gpr[31] = (0x088DBBECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DBBECu) goto L_088DBBEC;
    return;
L_088DBBEC:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088DBBFCu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 29u, 0x088CD228u>(ctx, &aot_mem) && ctx.pc == 0x088DBBFCu) goto L_088DBBFC;
    return;
L_088DBBFC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088DBC0Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32664));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088DBC0Cu) goto L_088DBC0C;
    return;
L_088DBC0C:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (0u | 306u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x088DBC24u);
    aot_gpr[20] = (aot_gpr[6] + static_cast<std::uint32_t>(-32652));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088DBC24u) goto L_088DBC24;
    return;
L_088DBC24:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088DBC34u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088DBC34u) goto L_088DBC34;
    return;
L_088DBC34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2178)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1204)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088DBC5Cu);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 124u, 0x08888C78u>(ctx, &aot_mem) && ctx.pc == 0x088DBC5Cu) goto L_088DBC5C;
    return;
L_088DBC5C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32728)));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(25988), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32732)));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(25992), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBC9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088DBCB4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 96u, 0x0881C72Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBCB4u) goto L_088DBCB4;
    return;
L_088DBCB4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DBCF8;
      }
      goto L_088DBCC4;
    }
L_088DBCC4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5672));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(50)));
    aot_gpr[31] = (0x088DBCE8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    goto L_088DBA00;
L_088DBCE8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5104)));
    aot_gpr[31] = (0x088DBCF8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 153u, 0x088CDC18u>(ctx, &aot_mem) && ctx.pc == 0x088DBCF8u) goto L_088DBCF8;
    return;
L_088DBCF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBD08:
    aot_gpr[5] = (0u | 0u);
    goto L_088DBD0C;
L_088DBD0C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1204)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 25 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DBD0C;
      }
      goto L_088DBD24;
    }
L_088DBD24:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBD2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 3u);
      if (branch_taken) {
          goto L_088DBDB8;
      }
      goto L_088DBD68;
    }
L_088DBD68:
    aot_gpr[18] = (2215u << 16u);
    goto L_088DBD6C;
L_088DBD6C:
    aot_gpr[31] = (0x088DBD74u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x0881C710u>(ctx, &aot_mem) && ctx.pc == 0x088DBD74u) goto L_088DBD74;
    return;
L_088DBD74:
    aot_gpr[21] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x088DBD84u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 229u, 0x088B7F30u>(ctx, &aot_mem) && ctx.pc == 0x088DBD84u) goto L_088DBD84;
    return;
L_088DBD84:
    aot_gpr[4] = (aot_gpr[21] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1204)));
      if (branch_taken) {
          goto L_088DBDA0;
      }
      goto L_088DBD94;
    }
L_088DBD94:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[17]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-5680)));
      if (branch_taken) {
          goto L_088DBDA8;
      }
      goto L_088DBDA0;
    }
L_088DBDA0:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-5680)));
    goto L_088DBDA8;
L_088DBDA8:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBD6C;
      }
      goto L_088DBDB8;
    }
L_088DBDB8:
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
L_088DBDDC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32680), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBDFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088DBE30u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088DBE30u) goto L_088DBE30;
    return;
L_088DBE30:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBE50;
      }
      goto L_088DBE38;
    }
L_088DBE38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_gpr[6] = (aot_gpr[18] & 255u);
    aot_gpr[31] = (0x088DBE48u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 46u, 0x088C0344u>(ctx, &aot_mem) && ctx.pc == 0x088DBE48u) goto L_088DBE48;
    return;
L_088DBE48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBF98;
      }
      goto L_088DBE50;
    }
L_088DBE50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[20] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088DBF08;
      }
      goto L_088DBE64;
    }
L_088DBE64:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[20] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBEF4;
      }
      goto L_088DBE7C;
    }
L_088DBE7C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088DBEA8u);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DBEA8u) goto L_088DBEA8;
    return;
L_088DBEA8:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_088DBEC8;
      }
      goto L_088DBEB4;
    }
L_088DBEB4:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088DBEC4u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0245_entry, 245u, 160u, 0x088F9E90u>(ctx, &aot_mem) && ctx.pc == 0x088DBEC4u) goto L_088DBEC4;
    return;
L_088DBEC4:
    aot_gpr[19] = (aot_gpr[21] | 0u);
    goto L_088DBEC8;
L_088DBEC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[20] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[6]));
      if (branch_taken) {
          goto L_088DBF08;
      }
      goto L_088DBEF4;
    }
L_088DBEF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[20] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBE64;
      }
      goto L_088DBF08;
    }
L_088DBF08:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088DBF98;
      }
      goto L_088DBF10;
    }
L_088DBF10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088DBF38u);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DBF38u) goto L_088DBF38;
    return;
L_088DBF38:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (aot_gpr[19] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_088DBF60;
    }
    goto L_088DBF44;
L_088DBF44:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088DBF58u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0245_entry, 245u, 160u, 0x088F9E90u>(ctx, &aot_mem) && ctx.pc == 0x088DBF58u) goto L_088DBF58;
    return;
L_088DBF58:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088DBF60;
L_088DBF60:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088DBF98;
L_088DBF98:
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
L_088DBFBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 7u, 0x088DC070u>(ctx, &aot_mem); return;
      }
      goto L_088DBFCC;
    }
L_088DBFCC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 7u, 0x088DC070u>(ctx, &aot_mem); return;
      }
      goto L_088DBFE0;
    }
L_088DBFE0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 6u, 0x088DC05Cu>(ctx, &aot_mem); return;
      }
      goto L_088DBFEC;
    }
L_088DBFEC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 6u, 0x088DC05Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 1u, 0x088DC004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0215(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0215_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_215(Runtime &runtime) {
    runtime.register_generated_unit(215u, 0x088DB000u, 4096u, &recomp_unit_0215, &recomp_unit_0215_entry);
    runtime.register_function(0x088DB000u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB050u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB05Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB064u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB08Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB0DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB104u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB10Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB12Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB170u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB19Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB1A4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB1B0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB1B8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB1ECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB204u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB220u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB230u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB238u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB26Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB2ACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB2B4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB2C0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB2D0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB2E8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB30Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB31Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB354u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB368u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB378u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB380u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB388u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB394u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB3ACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB3B8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB3E0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB3ECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB3F8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB41Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB424u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB448u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB46Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB48Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB498u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB4A4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB4B0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB4B8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB4C0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB4C4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB4DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB548u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB55Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB564u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB570u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB584u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB58Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB598u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB5C8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB5D0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB5DCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB600u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB608u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB610u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB628u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB640u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB650u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB654u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB660u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB668u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB670u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB678u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB684u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB694u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB6A0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB6ACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB6B4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB6C8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB6D0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB6F8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB708u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB710u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB720u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB72Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB74Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB780u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB7D8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB818u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB820u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB82Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB84Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB858u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB868u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB87Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB890u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB8A8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB8CCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB8D4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB8D8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB8FCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB930u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB954u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB970u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB9A4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB9ACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB9C4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB9D0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DB9E4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBA00u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBA20u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBA28u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBA3Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBA50u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBA5Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBA64u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBA6Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBA74u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBA88u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBAB0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBABCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBAD8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBAF0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBAFCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBB04u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBB10u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBB18u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBB2Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBB34u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBB44u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBB48u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBB58u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBB78u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBB84u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBB94u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBBACu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBBECu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBBFCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBC0Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBC24u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBC34u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBC5Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBC9Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBCB4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBCC4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBCE8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBCF8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBD08u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBD0Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBD24u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBD2Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBD68u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBD6Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBD74u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBD84u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBD94u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBDA0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBDA8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBDB8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBDDCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBDFCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBE30u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBE38u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBE48u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBE50u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBE64u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBE7Cu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBEA8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBEB4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBEC4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBEC8u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBEF4u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBF08u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBF10u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBF38u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBF44u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBF58u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBF60u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBF98u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBFBCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBFCCu, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBFE0u, &recomp_unit_0215, "recomp_unit_0215");
    runtime.register_function(0x088DBFECu, &recomp_unit_0215, "recomp_unit_0215");
}
} // namespace psprecomp
