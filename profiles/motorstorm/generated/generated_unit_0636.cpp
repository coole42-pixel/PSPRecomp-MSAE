#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0636[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0,
    0, 0, 37, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 55, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 61, 0, 0,
    62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 90,
};
void recomp_unit_0636_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A80000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0636[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A80000;
    case 2u: goto L_08A80030;
    case 3u: goto L_08A80080;
    case 4u: goto L_08A800B0;
    case 5u: goto L_08A800E8;
    case 6u: goto L_08A80110;
    case 7u: goto L_08A80148;
    case 8u: goto L_08A80170;
    case 9u: goto L_08A80198;
    case 10u: goto L_08A801C0;
    case 11u: goto L_08A801F8;
    case 12u: goto L_08A80220;
    case 13u: goto L_08A80260;
    case 14u: goto L_08A80298;
    case 15u: goto L_08A802D0;
    case 16u: goto L_08A802F0;
    case 17u: goto L_08A80328;
    case 18u: goto L_08A80350;
    case 19u: goto L_08A80388;
    case 20u: goto L_08A803B8;
    case 21u: goto L_08A803C8;
    case 22u: goto L_08A803D8;
    case 23u: goto L_08A80410;
    case 24u: goto L_08A80438;
    case 25u: goto L_08A80478;
    case 26u: goto L_08A80488;
    case 27u: goto L_08A804A8;
    case 28u: goto L_08A804B8;
    case 29u: goto L_08A80508;
    case 30u: goto L_08A80558;
    case 31u: goto L_08A805A8;
    case 32u: goto L_08A805F8;
    case 33u: goto L_08A80648;
    case 34u: goto L_08A80658;
    case 35u: goto L_08A80668;
    case 36u: goto L_08A80678;
    case 37u: goto L_08A80688;
    case 38u: goto L_08A8068C;
    case 39u: goto L_08A80698;
    case 40u: goto L_08A806A8;
    case 41u: goto L_08A806B8;
    case 42u: goto L_08A806E0;
    case 43u: goto L_08A80708;
    case 44u: goto L_08A80730;
    case 45u: goto L_08A80738;
    case 46u: goto L_08A80740;
    case 47u: goto L_08A80750;
    case 48u: goto L_08A80760;
    case 49u: goto L_08A80770;
    case 50u: goto L_08A807BC;
    case 51u: goto L_08A807CC;
    case 52u: goto L_08A80858;
    case 53u: goto L_08A80860;
    case 54u: goto L_08A80868;
    case 55u: goto L_08A80878;
    case 56u: goto L_08A80888;
    case 57u: goto L_08A808F0;
    case 58u: goto L_08A8091C;
    case 59u: goto L_08A8094C;
    case 60u: goto L_08A80970;
    case 61u: goto L_08A80974;
    case 62u: goto L_08A80980;
    case 63u: goto L_08A80990;
    case 64u: goto L_08A809A4;
    case 65u: goto L_08A809C0;
    case 66u: goto L_08A80A28;
    case 67u: goto L_08A80A54;
    case 68u: goto L_08A80AC0;
    case 69u: goto L_08A80AD8;
    case 70u: goto L_08A80B70;
    case 71u: goto L_08A80BA8;
    case 72u: goto L_08A80BB8;
    case 73u: goto L_08A80C28;
    case 74u: goto L_08A80C40;
    case 75u: goto L_08A80CAC;
    case 76u: goto L_08A80CF0;
    case 77u: goto L_08A80CF8;
    case 78u: goto L_08A80D90;
    case 79u: goto L_08A80E48;
    case 80u: goto L_08A80E60;
    case 81u: goto L_08A80E78;
    case 82u: goto L_08A80E84;
    case 83u: goto L_08A80ED8;
    case 84u: goto L_08A80EDC;
    case 85u: goto L_08A80F10;
    case 86u: goto L_08A80F28;
    case 87u: goto L_08A80F40;
    case 88u: goto L_08A80F50;
    case 89u: goto L_08A80FF8;
    case 90u: goto L_08A80FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A80000:
    // nop
    // nop
    rt.unsupported(0x08A80008u, 0x0000F430u, "special? not lowered yet"); return;
L_08A80030:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023E6F60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80080:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023EBE30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A800B0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023F87E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A800E8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023F8B20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80110:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023F9240u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80148:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0294B580u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80170:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0294B780u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80198:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0294B980u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A801C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023F9C20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A801F8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023F9F60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80220:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023FAD70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80260:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023FBD20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80298:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02411C90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A802D0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0241B450u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A802F0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0241C1A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80328:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0241CCE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80350:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0241D390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80388:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0294CD60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A803B8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x024427A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A803C8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0244D070u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A803D8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x024610B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80410:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x024618C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80438:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02461C40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80478:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02464930u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80488:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x024719E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A804A8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02475F70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A804B8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02476750u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80508:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02476A50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80558:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02477040u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A805A8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02477720u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A805F8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02477FA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80648:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02479FD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80658:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0247A240u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80668:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0247B2C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80678:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x024876B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80688:
    // nop
    goto L_08A8068C;
L_08A8068C:
    // nop
    // nop
    // nop
    ctx.pc = 0x0248CCC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80698:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02490B00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A806A8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x024922E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A806B8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02493EF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A806E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029593C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80708:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02959540u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80730:
    // nop
    // nop
    goto L_08A80738;
L_08A80738:
    // nop
    // nop
    ctx.pc = 0x024A3710u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80740:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x024A67F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80750:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x024D5AB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80760:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x024E16E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80770:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x024E9110u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A807BC:
    // nop
    ctx.pc = 0x024EBE40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A807CC:
    // nop
    ctx.pc = 0x024EB960u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80858:
    // nop
    // nop
    goto L_08A80860;
L_08A80860:
    // nop
    // nop
    ctx.pc = 0x024ED890u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80868:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025031D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80878:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02504600u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80888:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025050E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A808F0:
    // nop
    // nop
    ctx.pc = 0x02507400u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8091C:
    // nop
    ctx.pc = 0x02507540u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A8094C:
    // nop
    ctx.pc = 0x025076E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80970:
    // nop
    goto L_08A80974;
L_08A80974:
    // nop
    // nop
    // nop
    ctx.pc = 0x025098B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80980:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02510770u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80990:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0294BD60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A809A4:
    // nop
    ctx.pc = 0x02517330u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A809C0:
    // nop
    // nop
    ctx.pc = 0x025177C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80A28:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025185B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80A54:
    // nop
    ctx.pc = 0x02518590u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80AC0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02527A10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80AD8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02962960u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80B70:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0253A3C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80BA8:
    // nop
    // nop
    ctx.pc = 0x0253AE60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80BB8:
    // nop
    // nop
    ctx.pc = 0x0253B560u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80C28:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0253D2F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80C40:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02962B30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80CAC:
    // nop
    ctx.pc = 0x0253F120u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80CF0:
    // nop
    // nop
    ctx.pc = 0x0253BF00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80CF8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02962D00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80D90:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02962ED0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80E48:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0254CE10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80E60:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02557630u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80E78:
    // nop
    // nop
    // nop
    goto L_08A80E84;
L_08A80E84:
    // nop
    ctx.pc = 0x02963950u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80ED8:
    // nop
    goto L_08A80EDC;
L_08A80EDC:
    // nop
    ctx.pc = 0x02563510u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80F10:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02564C20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80F28:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02568680u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80F40:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02963B20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80F50:
    // nop
    // nop
    ctx.pc = 0x0253ACB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A80FF8:
    // nop
    goto L_08A80FFC;
L_08A80FFC:
    // nop
    ctx.pc = 0x08A81000u; return;
}

void recomp_unit_0636(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0636_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_636(Runtime &runtime) {
    runtime.register_generated_unit(636u, 0x08A80000u, 4096u, &recomp_unit_0636, &recomp_unit_0636_entry);
    runtime.register_function(0x08A80000u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80030u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80080u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A800B0u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A800E8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80110u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80148u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80170u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80198u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A801C0u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A801F8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80220u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80260u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80298u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A802D0u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A802F0u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80328u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80350u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80388u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A803B8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A803C8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A803D8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80410u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80438u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80478u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80488u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A804A8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A804B8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80508u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80558u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A805A8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A805F8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80648u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80658u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80668u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80678u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80688u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A8068Cu, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80698u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A806A8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A806B8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A806E0u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80708u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80730u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80738u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80740u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80750u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80760u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80770u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A807BCu, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A807CCu, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80858u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80860u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80868u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80878u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80888u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A808F0u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A8091Cu, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A8094Cu, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80970u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80974u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80980u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80990u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A809A4u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A809C0u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80A28u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80A54u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80AC0u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80AD8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80B70u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80BA8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80BB8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80C28u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80C40u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80CACu, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80CF0u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80CF8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80D90u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80E48u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80E60u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80E78u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80E84u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80ED8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80EDCu, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80F10u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80F28u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80F40u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80F50u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80FF8u, &recomp_unit_0636, "recomp_unit_0636");
    runtime.register_function(0x08A80FFCu, &recomp_unit_0636, "recomp_unit_0636");
}
} // namespace psprecomp
