#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0588[1024] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0,
    12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0,
    22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32,
    0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0,
    0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0,
    0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0,
    64, 0, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 74,
    0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0,
    0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92,
    0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 100, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0,
    112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    132, 0, 133, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    146, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0,
    0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 191, 192, 0, 193, 0, 194,
};
void recomp_unit_0588_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A50000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0588[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A50000;
    case 2u: goto L_08A50008;
    case 3u: goto L_08A50034;
    case 4u: goto L_08A50094;
    case 5u: goto L_08A500A8;
    case 6u: goto L_08A500B0;
    case 7u: goto L_08A500B8;
    case 8u: goto L_08A500CC;
    case 9u: goto L_08A500D8;
    case 10u: goto L_08A500EC;
    case 11u: goto L_08A500F8;
    case 12u: goto L_08A50100;
    case 13u: goto L_08A50110;
    case 14u: goto L_08A5013C;
    case 15u: goto L_08A5019C;
    case 16u: goto L_08A501B0;
    case 17u: goto L_08A501B8;
    case 18u: goto L_08A501C0;
    case 19u: goto L_08A501D4;
    case 20u: goto L_08A501E0;
    case 21u: goto L_08A501F4;
    case 22u: goto L_08A50200;
    case 23u: goto L_08A50208;
    case 24u: goto L_08A50218;
    case 25u: goto L_08A50244;
    case 26u: goto L_08A502A4;
    case 27u: goto L_08A502B8;
    case 28u: goto L_08A502C0;
    case 29u: goto L_08A502C8;
    case 30u: goto L_08A502DC;
    case 31u: goto L_08A502E8;
    case 32u: goto L_08A502FC;
    case 33u: goto L_08A50308;
    case 34u: goto L_08A50310;
    case 35u: goto L_08A50320;
    case 36u: goto L_08A5034C;
    case 37u: goto L_08A503AC;
    case 38u: goto L_08A503C0;
    case 39u: goto L_08A503C8;
    case 40u: goto L_08A503D0;
    case 41u: goto L_08A503E4;
    case 42u: goto L_08A503F0;
    case 43u: goto L_08A50404;
    case 44u: goto L_08A50410;
    case 45u: goto L_08A50418;
    case 46u: goto L_08A50428;
    case 47u: goto L_08A50454;
    case 48u: goto L_08A504B4;
    case 49u: goto L_08A504C8;
    case 50u: goto L_08A504D0;
    case 51u: goto L_08A504D8;
    case 52u: goto L_08A504EC;
    case 53u: goto L_08A504F8;
    case 54u: goto L_08A5050C;
    case 55u: goto L_08A50518;
    case 56u: goto L_08A50520;
    case 57u: goto L_08A50530;
    case 58u: goto L_08A5055C;
    case 59u: goto L_08A505BC;
    case 60u: goto L_08A505D0;
    case 61u: goto L_08A505D8;
    case 62u: goto L_08A505E0;
    case 63u: goto L_08A505F4;
    case 64u: goto L_08A50600;
    case 65u: goto L_08A50614;
    case 66u: goto L_08A50620;
    case 67u: goto L_08A50628;
    case 68u: goto L_08A50638;
    case 69u: goto L_08A50664;
    case 70u: goto L_08A506C4;
    case 71u: goto L_08A506D8;
    case 72u: goto L_08A506E0;
    case 73u: goto L_08A506E8;
    case 74u: goto L_08A506FC;
    case 75u: goto L_08A50708;
    case 76u: goto L_08A5071C;
    case 77u: goto L_08A50728;
    case 78u: goto L_08A50730;
    case 79u: goto L_08A50740;
    case 80u: goto L_08A5076C;
    case 81u: goto L_08A507CC;
    case 82u: goto L_08A507E0;
    case 83u: goto L_08A507E8;
    case 84u: goto L_08A507F0;
    case 85u: goto L_08A50804;
    case 86u: goto L_08A50810;
    case 87u: goto L_08A50824;
    case 88u: goto L_08A50830;
    case 89u: goto L_08A50838;
    case 90u: goto L_08A50848;
    case 91u: goto L_08A50874;
    case 92u: goto L_08A5087C;
    case 93u: goto L_08A50884;
    case 94u: goto L_08A5088C;
    case 95u: goto L_08A50894;
    case 96u: goto L_08A5089C;
    case 97u: goto L_08A508C4;
    case 98u: goto L_08A508DC;
    case 99u: goto L_08A508E4;
    case 100u: goto L_08A5090C;
    case 101u: goto L_08A50910;
    case 102u: goto L_08A50918;
    case 103u: goto L_08A50920;
    case 104u: goto L_08A50928;
    case 105u: goto L_08A50930;
    case 106u: goto L_08A50938;
    case 107u: goto L_08A50940;
    case 108u: goto L_08A50948;
    case 109u: goto L_08A50958;
    case 110u: goto L_08A50964;
    case 111u: goto L_08A50974;
    case 112u: goto L_08A50980;
    case 113u: goto L_08A5098C;
    case 114u: goto L_08A509AC;
    case 115u: goto L_08A509B8;
    case 116u: goto L_08A509C0;
    case 117u: goto L_08A509D0;
    case 118u: goto L_08A509DC;
    case 119u: goto L_08A509EC;
    case 120u: goto L_08A509F8;
    case 121u: goto L_08A50A04;
    case 122u: goto L_08A50A24;
    case 123u: goto L_08A50A30;
    case 124u: goto L_08A50A40;
    case 125u: goto L_08A50A4C;
    case 126u: goto L_08A50A5C;
    case 127u: goto L_08A50A68;
    case 128u: goto L_08A50A74;
    case 129u: goto L_08A50A94;
    case 130u: goto L_08A50AA0;
    case 131u: goto L_08A50AEC;
    case 132u: goto L_08A50B00;
    case 133u: goto L_08A50B08;
    case 134u: goto L_08A50B0C;
    case 135u: goto L_08A50B3C;
    case 136u: goto L_08A50B44;
    case 137u: goto L_08A50B60;
    case 138u: goto L_08A50B88;
    case 139u: goto L_08A50B90;
    case 140u: goto L_08A50BA0;
    case 141u: goto L_08A50BA8;
    case 142u: goto L_08A50BD8;
    case 143u: goto L_08A50C04;
    case 144u: goto L_08A50C44;
    case 145u: goto L_08A50C68;
    case 146u: goto L_08A50C80;
    case 147u: goto L_08A50C88;
    case 148u: goto L_08A50C94;
    case 149u: goto L_08A50CB4;
    case 150u: goto L_08A50CF0;
    case 151u: goto L_08A50CFC;
    case 152u: goto L_08A50D3C;
    case 153u: goto L_08A50D4C;
    case 154u: goto L_08A50D5C;
    case 155u: goto L_08A50D68;
    case 156u: goto L_08A50D70;
    case 157u: goto L_08A50D90;
    case 158u: goto L_08A50DA0;
    case 159u: goto L_08A50DC0;
    case 160u: goto L_08A50DC4;
    case 161u: goto L_08A50DD4;
    case 162u: goto L_08A50DF4;
    case 163u: goto L_08A50E18;
    case 164u: goto L_08A50E2C;
    case 165u: goto L_08A50E38;
    case 166u: goto L_08A50E68;
    case 167u: goto L_08A50E70;
    case 168u: goto L_08A50E78;
    case 169u: goto L_08A50E84;
    case 170u: goto L_08A50E8C;
    case 171u: goto L_08A50E98;
    case 172u: goto L_08A50EA0;
    case 173u: goto L_08A50EB0;
    case 174u: goto L_08A50EBC;
    case 175u: goto L_08A50EDC;
    case 176u: goto L_08A50F00;
    case 177u: goto L_08A50F4C;
    case 178u: goto L_08A50F54;
    case 179u: goto L_08A50F7C;
    case 180u: goto L_08A50F84;
    case 181u: goto L_08A50F8C;
    case 182u: goto L_08A50FA0;
    case 183u: goto L_08A50FA8;
    case 184u: goto L_08A50FB4;
    case 185u: goto L_08A50FBC;
    case 186u: goto L_08A50FC4;
    case 187u: goto L_08A50FCC;
    case 188u: goto L_08A50FD4;
    case 189u: goto L_08A50FDC;
    case 190u: goto L_08A50FE4;
    case 191u: goto L_08A50FE8;
    case 192u: goto L_08A50FEC;
    case 193u: goto L_08A50FF4;
    case 194u: goto L_08A50FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A50000:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 205u, 0x08A4FF8Cu>(ctx, &aot_mem); return;
      }
      goto L_08A50008;
    }
L_08A50008:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A50034:
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
          goto L_08A50110;
      }
      goto L_08A50094;
    }
L_08A50094:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A500A8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 195u, 0x08A4FE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A500A8u) goto L_08A500A8;
    return;
L_08A500A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A500CC;
      }
      goto L_08A500B0;
    }
L_08A500B0:
    aot_gpr[31] = (0x08A500B8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A500B8u) goto L_08A500B8;
    return;
L_08A500B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A50100;
      }
      goto L_08A500CC;
    }
L_08A500CC:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A500F8;
      }
      goto L_08A500D8;
    }
L_08A500D8:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A500ECu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 179u, 0x088BDFD8u>(ctx, &aot_mem) && ctx.pc == 0x08A500ECu) goto L_08A500EC;
    return;
L_08A500EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A500F8;
L_08A500F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A50100;
L_08A50100:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A50094;
      }
      goto L_08A50110;
    }
L_08A50110:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A5013C:
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
          goto L_08A50218;
      }
      goto L_08A5019C;
    }
L_08A5019C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A501B0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 196u, 0x08A4FEACu>(ctx, &aot_mem) && ctx.pc == 0x08A501B0u) goto L_08A501B0;
    return;
L_08A501B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A501D4;
      }
      goto L_08A501B8;
    }
L_08A501B8:
    aot_gpr[31] = (0x08A501C0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A501C0u) goto L_08A501C0;
    return;
L_08A501C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A50208;
      }
      goto L_08A501D4;
    }
L_08A501D4:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A50200;
      }
      goto L_08A501E0;
    }
L_08A501E0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A501F4u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 166u, 0x088BE6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A501F4u) goto L_08A501F4;
    return;
L_08A501F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A50200;
L_08A50200:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A50208;
L_08A50208:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5019C;
      }
      goto L_08A50218;
    }
L_08A50218:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A50244:
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
          goto L_08A50320;
      }
      goto L_08A502A4;
    }
L_08A502A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A502B8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 197u, 0x08A4FEBCu>(ctx, &aot_mem) && ctx.pc == 0x08A502B8u) goto L_08A502B8;
    return;
L_08A502B8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A502DC;
      }
      goto L_08A502C0;
    }
L_08A502C0:
    aot_gpr[31] = (0x08A502C8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A502C8u) goto L_08A502C8;
    return;
L_08A502C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A50310;
      }
      goto L_08A502DC;
    }
L_08A502DC:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A50308;
      }
      goto L_08A502E8;
    }
L_08A502E8:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A502FCu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x088BECCCu>(ctx, &aot_mem) && ctx.pc == 0x08A502FCu) goto L_08A502FC;
    return;
L_08A502FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A50308;
L_08A50308:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A50310;
L_08A50310:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A502A4;
      }
      goto L_08A50320;
    }
L_08A50320:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A5034C:
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
          goto L_08A50428;
      }
      goto L_08A503AC;
    }
L_08A503AC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A503C0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 198u, 0x08A4FECCu>(ctx, &aot_mem) && ctx.pc == 0x08A503C0u) goto L_08A503C0;
    return;
L_08A503C0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A503E4;
      }
      goto L_08A503C8;
    }
L_08A503C8:
    aot_gpr[31] = (0x08A503D0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A503D0u) goto L_08A503D0;
    return;
L_08A503D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A50418;
      }
      goto L_08A503E4;
    }
L_08A503E4:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A50410;
      }
      goto L_08A503F0;
    }
L_08A503F0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A50404u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0268_entry, 268u, 83u, 0x08910A68u>(ctx, &aot_mem) && ctx.pc == 0x08A50404u) goto L_08A50404;
    return;
L_08A50404:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A50410;
L_08A50410:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A50418;
L_08A50418:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A503AC;
      }
      goto L_08A50428;
    }
L_08A50428:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A50454:
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
          goto L_08A50530;
      }
      goto L_08A504B4;
    }
L_08A504B4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A504C8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 199u, 0x08A4FEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A504C8u) goto L_08A504C8;
    return;
L_08A504C8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A504EC;
      }
      goto L_08A504D0;
    }
L_08A504D0:
    aot_gpr[31] = (0x08A504D8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A504D8u) goto L_08A504D8;
    return;
L_08A504D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A50520;
      }
      goto L_08A504EC;
    }
L_08A504EC:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A50518;
      }
      goto L_08A504F8;
    }
L_08A504F8:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A5050Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 84u, 0x088B987Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5050Cu) goto L_08A5050C;
    return;
L_08A5050C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A50518;
L_08A50518:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A50520;
L_08A50520:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A504B4;
      }
      goto L_08A50530;
    }
L_08A50530:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A5055C:
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
          goto L_08A50638;
      }
      goto L_08A505BC;
    }
L_08A505BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A505D0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 200u, 0x08A4FEECu>(ctx, &aot_mem) && ctx.pc == 0x08A505D0u) goto L_08A505D0;
    return;
L_08A505D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A505F4;
      }
      goto L_08A505D8;
    }
L_08A505D8:
    aot_gpr[31] = (0x08A505E0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A505E0u) goto L_08A505E0;
    return;
L_08A505E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A50628;
      }
      goto L_08A505F4;
    }
L_08A505F4:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A50620;
      }
      goto L_08A50600;
    }
L_08A50600:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A50614u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 146u, 0x088B8BE4u>(ctx, &aot_mem) && ctx.pc == 0x08A50614u) goto L_08A50614;
    return;
L_08A50614:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A50620;
L_08A50620:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A50628;
L_08A50628:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A505BC;
      }
      goto L_08A50638;
    }
L_08A50638:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A50664:
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
          goto L_08A50740;
      }
      goto L_08A506C4;
    }
L_08A506C4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A506D8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 201u, 0x08A4FEFCu>(ctx, &aot_mem) && ctx.pc == 0x08A506D8u) goto L_08A506D8;
    return;
L_08A506D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A506FC;
      }
      goto L_08A506E0;
    }
L_08A506E0:
    aot_gpr[31] = (0x08A506E8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A506E8u) goto L_08A506E8;
    return;
L_08A506E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A50730;
      }
      goto L_08A506FC;
    }
L_08A506FC:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A50728;
      }
      goto L_08A50708;
    }
L_08A50708:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A5071Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 76u, 0x088B97B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5071Cu) goto L_08A5071C;
    return;
L_08A5071C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A50728;
L_08A50728:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A50730;
L_08A50730:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A506C4;
      }
      goto L_08A50740;
    }
L_08A50740:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A5076C:
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
          goto L_08A50848;
      }
      goto L_08A507CC;
    }
L_08A507CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A507E0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 202u, 0x08A4FF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A507E0u) goto L_08A507E0;
    return;
L_08A507E0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50804;
      }
      goto L_08A507E8;
    }
L_08A507E8:
    aot_gpr[31] = (0x08A507F0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A507F0u) goto L_08A507F0;
    return;
L_08A507F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A50838;
      }
      goto L_08A50804;
    }
L_08A50804:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A50830;
      }
      goto L_08A50810;
    }
L_08A50810:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A50824u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 137u, 0x088B8B14u>(ctx, &aot_mem) && ctx.pc == 0x08A50824u) goto L_08A50824;
    return;
L_08A50824:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A50830;
L_08A50830:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A50838;
L_08A50838:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A507CC;
      }
      goto L_08A50848;
    }
L_08A50848:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A50874:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5087C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50884:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5088C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50894:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5089C:
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(15));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5090C;
      }
      goto L_08A508C4;
    }
L_08A508C4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A508E4;
    }
    goto L_08A508DC;
L_08A508DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A508E4;
L_08A508E4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A50910;
      }
      goto L_08A5090C;
    }
L_08A5090C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A50910;
L_08A50910:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50918:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50920:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50928:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50930:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50938:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50940:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50948:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A509AC;
      }
      goto L_08A50958;
    }
L_08A50958:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3368));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A50980;
      }
      goto L_08A50964;
    }
L_08A50964:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3104));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A50980;
      }
      goto L_08A50974;
    }
L_08A50974:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A50980;
L_08A50980:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A509AC;
      }
      goto L_08A5098C;
    }
L_08A5098C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A509ACu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A509ACu) goto L_08A509AC;
    return;
L_08A509AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A509B8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A509C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A50A24;
      }
      goto L_08A509D0;
    }
L_08A509D0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2968));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A509F8;
      }
      goto L_08A509DC;
    }
L_08A509DC:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3104));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A509F8;
      }
      goto L_08A509EC;
    }
L_08A509EC:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A509F8;
L_08A509F8:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A50A24;
      }
      goto L_08A50A04;
    }
L_08A50A04:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A50A24u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A50A24u) goto L_08A50A24;
    return;
L_08A50A24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50A30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A50A94;
      }
      goto L_08A50A40;
    }
L_08A50A40:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1888));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A50A68;
      }
      goto L_08A50A4C;
    }
L_08A50A4C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3104));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A50A68;
      }
      goto L_08A50A5C;
    }
L_08A50A5C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A50A68;
L_08A50A68:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A50A94;
      }
      goto L_08A50A74;
    }
L_08A50A74:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A50A94u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A50A94u) goto L_08A50A94;
    return;
L_08A50A94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50AA0:
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
          goto L_08A50B3C;
      }
      goto L_08A50AEC;
    }
L_08A50AEC:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A50B00u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A50B00u) goto L_08A50B00;
    return;
L_08A50B00:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50B0C;
      }
      goto L_08A50B08;
    }
L_08A50B08:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A50B0C;
L_08A50B0C:
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
          goto L_08A50AEC;
      }
      goto L_08A50B3C;
    }
L_08A50B3C:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A50B60;
      }
      goto L_08A50B44;
    }
L_08A50B44:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A50B60;
L_08A50B60:
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
    goto L_08A50B88;
L_08A50B88:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[17] << 2u);
      if (branch_taken) {
          goto L_08A50BD8;
      }
      goto L_08A50B90;
    }
L_08A50B90:
    aot_gpr[22] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A50BA0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A50BA0u) goto L_08A50BA0;
    return;
L_08A50BA0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A50BD8;
      }
      goto L_08A50BA8;
    }
L_08A50BA8:
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
          goto L_08A50B88;
      }
      goto L_08A50BD8;
    }
L_08A50BD8:
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
L_08A50C04:
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
          goto L_08A50C94;
      }
      goto L_08A50C44;
    }
L_08A50C44:
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 1u));
    aot_gpr[18] = (aot_gpr[19] << 2u);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A50C68;
L_08A50C68:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A50C80u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A50AA0;
L_08A50C80:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A50C94;
      }
      goto L_08A50C88;
    }
L_08A50C88:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A50C68;
      }
      goto L_08A50C94;
    }
L_08A50C94:
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
L_08A50CB4:
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
    aot_gpr[31] = (0x08A50CF0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    goto L_08A50AA0;
L_08A50CF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50CFC:
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
    aot_gpr[31] = (0x08A50D3Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A50C04;
L_08A50D3C:
    aot_gpr[21] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
      if (branch_taken) {
          goto L_08A50DA0;
      }
      goto L_08A50D4C;
    }
L_08A50D4C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    goto L_08A50D5C;
L_08A50D5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A50D68u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A50D68u) goto L_08A50D68;
    return;
L_08A50D68:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50D90;
      }
      goto L_08A50D70;
    }
L_08A50D70:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A50D90u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A50AA0;
L_08A50D90:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50D5C;
      }
      goto L_08A50DA0;
    }
L_08A50DA0:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50DF4;
      }
      goto L_08A50DC0;
    }
L_08A50DC0:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A50DC4;
L_08A50DC4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A50DD4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A50CB4;
L_08A50DD4:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A50DC4;
      }
      goto L_08A50DF4;
    }
L_08A50DF4:
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
L_08A50E18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A50E2Cu);
    aot_gpr[7] = (0u | 0u);
    goto L_08A50CFC;
L_08A50E2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50E38:
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
    goto L_08A50E68;
L_08A50E68:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A50E70u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A50E70u) goto L_08A50E70;
    return;
L_08A50E70:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50E84;
      }
      goto L_08A50E78;
    }
L_08A50E78:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A50E68;
      }
      goto L_08A50E84;
    }
L_08A50E84:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A50E8C;
L_08A50E8C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A50E98u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A50E98u) goto L_08A50E98;
    return;
L_08A50E98:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50EB0;
      }
      goto L_08A50EA0;
    }
L_08A50EA0:
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    aot_gpr[18] = (aot_gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A50E8C;
      }
      goto L_08A50EB0;
    }
L_08A50EB0:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50EDC;
      }
      goto L_08A50EBC;
    }
L_08A50EBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A50E68;
      }
      goto L_08A50EDC;
    }
L_08A50EDC:
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
L_08A50F00:
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
          (void)rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 6u, 0x08A51068u>(ctx, &aot_mem); return;
      }
      goto L_08A50F4C;
    }
L_08A50F4C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 3u));
      if (branch_taken) {
          goto L_08A50F8C;
      }
      goto L_08A50F54;
    }
L_08A50F54:
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[20] = (aot_gpr[4] << 2u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A50F7Cu);
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A50F7Cu) goto L_08A50F7C;
    return;
L_08A50F7C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A50FA8;
      }
      goto L_08A50F84;
    }
L_08A50F84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A50FE4;
      }
      goto L_08A50F8C;
    }
L_08A50F8C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A50FA0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A50E18;
L_08A50FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 6u, 0x08A51068u>(ctx, &aot_mem); return;
      }
      goto L_08A50FA8;
    }
L_08A50FA8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A50FB4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A50FB4u) goto L_08A50FB4;
    return;
L_08A50FB4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A50FC4;
    }
    goto L_08A50FBC;
L_08A50FBC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 3u, 0x08A51014u>(ctx, &aot_mem); return;
      }
      goto L_08A50FC4;
    }
L_08A50FC4:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A50FCCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A50FCCu) goto L_08A50FCC;
    return;
L_08A50FCC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50FDC;
      }
      goto L_08A50FD4;
    }
L_08A50FD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 3u, 0x08A51014u>(ctx, &aot_mem); return;
      }
      goto L_08A50FDC;
    }
L_08A50FDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 3u, 0x08A51014u>(ctx, &aot_mem); return;
      }
      goto L_08A50FE4;
    }
L_08A50FE4:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A50FECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A50FECu) goto L_08A50FEC;
    return;
L_08A50FE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A50FEC;
L_08A50FEC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A50FFC;
    }
    goto L_08A50FF4;
L_08A50FF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 3u, 0x08A51014u>(ctx, &aot_mem); return;
      }
      goto L_08A50FFC;
    }
L_08A50FFC:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A51004u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0588(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0588_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_588(Runtime &runtime) {
    runtime.register_generated_unit(588u, 0x08A50000u, 4096u, &recomp_unit_0588, &recomp_unit_0588_entry);
    runtime.register_function(0x08A50000u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50008u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50034u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50094u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A500A8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A500B0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A500B8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A500CCu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A500D8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A500ECu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A500F8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50100u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50110u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A5013Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A5019Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A501B0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A501B8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A501C0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A501D4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A501E0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A501F4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50200u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50208u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50218u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50244u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A502A4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A502B8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A502C0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A502C8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A502DCu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A502E8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A502FCu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50308u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50310u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50320u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A5034Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A503ACu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A503C0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A503C8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A503D0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A503E4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A503F0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50404u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50410u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50418u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50428u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50454u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A504B4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A504C8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A504D0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A504D8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A504ECu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A504F8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A5050Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50518u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50520u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50530u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A5055Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A505BCu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A505D0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A505D8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A505E0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A505F4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50600u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50614u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50620u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50628u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50638u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50664u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A506C4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A506D8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A506E0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A506E8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A506FCu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50708u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A5071Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50728u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50730u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50740u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A5076Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A507CCu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A507E0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A507E8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A507F0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50804u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50810u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50824u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50830u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50838u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50848u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50874u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A5087Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50884u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A5088Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50894u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A5089Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A508C4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A508DCu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A508E4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A5090Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50910u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50918u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50920u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50928u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50930u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50938u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50940u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50948u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50958u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50964u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50974u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50980u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A5098Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A509ACu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A509B8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A509C0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A509D0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A509DCu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A509ECu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A509F8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50A04u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50A24u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50A30u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50A40u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50A4Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50A5Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50A68u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50A74u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50A94u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50AA0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50AECu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50B00u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50B08u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50B0Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50B3Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50B44u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50B60u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50B88u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50B90u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50BA0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50BA8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50BD8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50C04u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50C44u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50C68u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50C80u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50C88u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50C94u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50CB4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50CF0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50CFCu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50D3Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50D4Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50D5Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50D68u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50D70u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50D90u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50DA0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50DC0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50DC4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50DD4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50DF4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50E18u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50E2Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50E38u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50E68u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50E70u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50E78u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50E84u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50E8Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50E98u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50EA0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50EB0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50EBCu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50EDCu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50F00u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50F4Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50F54u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50F7Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50F84u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50F8Cu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50FA0u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50FA8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50FB4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50FBCu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50FC4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50FCCu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50FD4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50FDCu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50FE4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50FE8u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50FECu, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50FF4u, &recomp_unit_0588, "recomp_unit_0588");
    runtime.register_function(0x08A50FFCu, &recomp_unit_0588, "recomp_unit_0588");
}
} // namespace psprecomp
