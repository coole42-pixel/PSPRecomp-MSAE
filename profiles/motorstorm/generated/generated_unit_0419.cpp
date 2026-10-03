#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0419[1022] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 10, 0, 11, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    20, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    27, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 36, 37, 38, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 45,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0,
    55, 0, 0, 56, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0,
    0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0,
    86, 0, 0, 0, 0, 0, 87, 88, 0, 0, 89, 0, 0, 90, 91, 0, 92, 0, 93, 94, 0, 0, 95, 0, 96, 97, 0, 98, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 108, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112,
    113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 118, 119, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 123, 124, 0, 0, 125, 126, 0, 0, 127, 128, 0, 0, 0, 129, 0, 0,
    130, 0, 0, 0, 131, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141,
    0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 147, 0, 148, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0,
    152, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 160, 0, 161, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 164, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 172, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184,
    0, 185, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0,
    0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 208,
};
void recomp_unit_0419_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089A7000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0419[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A7000;
    case 2u: goto L_089A7008;
    case 3u: goto L_089A7010;
    case 4u: goto L_089A7020;
    case 5u: goto L_089A7028;
    case 6u: goto L_089A7034;
    case 7u: goto L_089A7040;
    case 8u: goto L_089A704C;
    case 9u: goto L_089A7058;
    case 10u: goto L_089A705C;
    case 11u: goto L_089A7064;
    case 12u: goto L_089A7088;
    case 13u: goto L_089A7094;
    case 14u: goto L_089A709C;
    case 15u: goto L_089A70A4;
    case 16u: goto L_089A70AC;
    case 17u: goto L_089A70BC;
    case 18u: goto L_089A70D8;
    case 19u: goto L_089A70EC;
    case 20u: goto L_089A7100;
    case 21u: goto L_089A7108;
    case 22u: goto L_089A711C;
    case 23u: goto L_089A7124;
    case 24u: goto L_089A712C;
    case 25u: goto L_089A71C0;
    case 26u: goto L_089A71F4;
    case 27u: goto L_089A7200;
    case 28u: goto L_089A720C;
    case 29u: goto L_089A7214;
    case 30u: goto L_089A721C;
    case 31u: goto L_089A722C;
    case 32u: goto L_089A7234;
    case 33u: goto L_089A7240;
    case 34u: goto L_089A726C;
    case 35u: goto L_089A7288;
    case 36u: goto L_089A7294;
    case 37u: goto L_089A7298;
    case 38u: goto L_089A729C;
    case 39u: goto L_089A72AC;
    case 40u: goto L_089A72B4;
    case 41u: goto L_089A72C0;
    case 42u: goto L_089A72D8;
    case 43u: goto L_089A72E0;
    case 44u: goto L_089A72F0;
    case 45u: goto L_089A72FC;
    case 46u: goto L_089A7330;
    case 47u: goto L_089A7338;
    case 48u: goto L_089A734C;
    case 49u: goto L_089A735C;
    case 50u: goto L_089A7368;
    case 51u: goto L_089A7370;
    case 52u: goto L_089A7384;
    case 53u: goto L_089A73E0;
    case 54u: goto L_089A73F8;
    case 55u: goto L_089A7400;
    case 56u: goto L_089A740C;
    case 57u: goto L_089A7410;
    case 58u: goto L_089A7438;
    case 59u: goto L_089A743C;
    case 60u: goto L_089A7468;
    case 61u: goto L_089A7470;
    case 62u: goto L_089A7478;
    case 63u: goto L_089A7488;
    case 64u: goto L_089A7494;
    case 65u: goto L_089A74A4;
    case 66u: goto L_089A74AC;
    case 67u: goto L_089A74B4;
    case 68u: goto L_089A750C;
    case 69u: goto L_089A7514;
    case 70u: goto L_089A7544;
    case 71u: goto L_089A7550;
    case 72u: goto L_089A7560;
    case 73u: goto L_089A7574;
    case 74u: goto L_089A757C;
    case 75u: goto L_089A7588;
    case 76u: goto L_089A75D4;
    case 77u: goto L_089A75DC;
    case 78u: goto L_089A75E8;
    case 79u: goto L_089A760C;
    case 80u: goto L_089A762C;
    case 81u: goto L_089A7634;
    case 82u: goto L_089A7640;
    case 83u: goto L_089A765C;
    case 84u: goto L_089A7668;
    case 85u: goto L_089A7674;
    case 86u: goto L_089A7680;
    case 87u: goto L_089A7698;
    case 88u: goto L_089A769C;
    case 89u: goto L_089A76A8;
    case 90u: goto L_089A76B4;
    case 91u: goto L_089A76B8;
    case 92u: goto L_089A76C0;
    case 93u: goto L_089A76C8;
    case 94u: goto L_089A76CC;
    case 95u: goto L_089A76D8;
    case 96u: goto L_089A76E0;
    case 97u: goto L_089A76E4;
    case 98u: goto L_089A76EC;
    case 99u: goto L_089A76F4;
    case 100u: goto L_089A7718;
    case 101u: goto L_089A7760;
    case 102u: goto L_089A7770;
    case 103u: goto L_089A777C;
    case 104u: goto L_089A778C;
    case 105u: goto L_089A77AC;
    case 106u: goto L_089A77BC;
    case 107u: goto L_089A77C4;
    case 108u: goto L_089A77D0;
    case 109u: goto L_089A77D4;
    case 110u: goto L_089A77E0;
    case 111u: goto L_089A77EC;
    case 112u: goto L_089A77FC;
    case 113u: goto L_089A7800;
    case 114u: goto L_089A7810;
    case 115u: goto L_089A7844;
    case 116u: goto L_089A784C;
    case 117u: goto L_089A7858;
    case 118u: goto L_089A788C;
    case 119u: goto L_089A7890;
    case 120u: goto L_089A789C;
    case 121u: goto L_089A78AC;
    case 122u: goto L_089A78B4;
    case 123u: goto L_089A78C0;
    case 124u: goto L_089A78C4;
    case 125u: goto L_089A78D0;
    case 126u: goto L_089A78D4;
    case 127u: goto L_089A78E0;
    case 128u: goto L_089A78E4;
    case 129u: goto L_089A78F4;
    case 130u: goto L_089A7900;
    case 131u: goto L_089A7910;
    case 132u: goto L_089A7914;
    case 133u: goto L_089A795C;
    case 134u: goto L_089A7968;
    case 135u: goto L_089A7970;
    case 136u: goto L_089A79AC;
    case 137u: goto L_089A79B4;
    case 138u: goto L_089A79EC;
    case 139u: goto L_089A7A28;
    case 140u: goto L_089A7A6C;
    case 141u: goto L_089A7A7C;
    case 142u: goto L_089A7A84;
    case 143u: goto L_089A7A90;
    case 144u: goto L_089A7AA0;
    case 145u: goto L_089A7AAC;
    case 146u: goto L_089A7AC8;
    case 147u: goto L_089A7ACC;
    case 148u: goto L_089A7AD4;
    case 149u: goto L_089A7AD8;
    case 150u: goto L_089A7AE4;
    case 151u: goto L_089A7AF0;
    case 152u: goto L_089A7B00;
    case 153u: goto L_089A7B04;
    case 154u: goto L_089A7B14;
    case 155u: goto L_089A7B4C;
    case 156u: goto L_089A7B54;
    case 157u: goto L_089A7B7C;
    case 158u: goto L_089A7B9C;
    case 159u: goto L_089A7BA8;
    case 160u: goto L_089A7BAC;
    case 161u: goto L_089A7BB4;
    case 162u: goto L_089A7BB8;
    case 163u: goto L_089A7BE8;
    case 164u: goto L_089A7BEC;
    case 165u: goto L_089A7C28;
    case 166u: goto L_089A7C30;
    case 167u: goto L_089A7C38;
    case 168u: goto L_089A7C80;
    case 169u: goto L_089A7C88;
    case 170u: goto L_089A7C94;
    case 171u: goto L_089A7CA4;
    case 172u: goto L_089A7CAC;
    case 173u: goto L_089A7CB0;
    case 174u: goto L_089A7CB8;
    case 175u: goto L_089A7CF0;
    case 176u: goto L_089A7CFC;
    case 177u: goto L_089A7D40;
    case 178u: goto L_089A7D4C;
    case 179u: goto L_089A7D5C;
    case 180u: goto L_089A7D64;
    case 181u: goto L_089A7D94;
    case 182u: goto L_089A7DBC;
    case 183u: goto L_089A7DC4;
    case 184u: goto L_089A7DFC;
    case 185u: goto L_089A7E04;
    case 186u: goto L_089A7E08;
    case 187u: goto L_089A7E38;
    case 188u: goto L_089A7E70;
    case 189u: goto L_089A7E78;
    case 190u: goto L_089A7E84;
    case 191u: goto L_089A7E90;
    case 192u: goto L_089A7E9C;
    case 193u: goto L_089A7EB8;
    case 194u: goto L_089A7EC8;
    case 195u: goto L_089A7EE0;
    case 196u: goto L_089A7F0C;
    case 197u: goto L_089A7F20;
    case 198u: goto L_089A7F28;
    case 199u: goto L_089A7F54;
    case 200u: goto L_089A7F58;
    case 201u: goto L_089A7F84;
    case 202u: goto L_089A7FAC;
    case 203u: goto L_089A7FB8;
    case 204u: goto L_089A7FC0;
    case 205u: goto L_089A7FCC;
    case 206u: goto L_089A7FDC;
    case 207u: goto L_089A7FE8;
    case 208u: goto L_089A7FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A7000:
    if (aot_gpr[3] != aot_gpr[6]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(124)));
        (void)rt.invoke_chained_direct<&recomp_unit_0418_entry, 418u, 266u, 0x089A6FECu>(ctx, &aot_mem); return;
    }
    goto L_089A7008;
L_089A7008:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A7010:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 204u, 0x0898DE3Cu>(ctx, &aot_mem); return;
L_089A7020:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089A705C;
      }
      goto L_089A7028;
    }
L_089A7028:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A705C;
      }
      goto L_089A7034;
    }
L_089A7034:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A705C;
      }
      goto L_089A7040;
    }
L_089A7040:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A7058;
      }
      goto L_089A704C;
    }
L_089A704C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A705C;
      }
      goto L_089A7058;
    }
L_089A7058:
    aot_gpr[3] = (0u + 0u);
    goto L_089A705C;
L_089A705C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A7064:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[5] + 0u);
    aot_gpr[9] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-2));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089A70BC;
      }
      goto L_089A7088;
    }
L_089A7088:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089A70BC;
      }
      goto L_089A7094;
    }
L_089A7094:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089A70BC;
      }
      goto L_089A709C;
    }
L_089A709C:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089A70BC;
      }
      goto L_089A70A4;
    }
L_089A70A4:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A70EC;
      }
      goto L_089A70AC;
    }
L_089A70AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A70BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(116)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(72)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(100)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089A70D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A70D8u) goto L_089A70D8;
    return;
L_089A70D8:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A70EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089A70AC;
      }
      goto L_089A7100;
    }
L_089A7100:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A7108u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(68)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A7108u) goto L_089A7108;
    return;
L_089A7108:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A711C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A7124:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A712C:
    aot_gpr[2] = (2203u << 16u);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-32296));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(29120));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(176), aot_gpr[2]);
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30220));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(29964));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30488));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(140), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(29972));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), aot_gpr[2]);
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(31272));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(32644));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), aot_gpr[2]);
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(32312));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(28704));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), aot_gpr[2]);
    aot_gpr[2] = (2203u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-32496));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(164), aot_gpr[3]);
    aot_gpr[3] = (2203u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-32412));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(168), aot_gpr[2]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(172), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A71C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089A7438;
      }
      goto L_089A71F4;
    }
L_089A71F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A7438;
      }
      goto L_089A7200;
    }
L_089A7200:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_089A743C;
      }
      goto L_089A720C;
    }
L_089A720C:
    aot_gpr[31] = (0x089A7214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 158u, 0x0899FCD4u>(ctx, &aot_mem) && ctx.pc == 0x089A7214u) goto L_089A7214;
    return;
L_089A7214:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A7438;
      }
      goto L_089A721C;
    }
L_089A721C:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[31] = (0x089A722Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089A722Cu) goto L_089A722C;
    return;
L_089A722C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A740C;
      }
      goto L_089A7234;
    }
L_089A7234:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    goto L_089A7240;
L_089A7240:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089A7240;
      }
      goto L_089A726C;
    }
L_089A726C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), 0u);
        goto L_089A7298;
    }
    goto L_089A7288;
L_089A7288:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7468;
      }
      goto L_089A7294;
    }
L_089A7294:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), 0u);
    goto L_089A7298;
L_089A7298:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), 0u);
    goto L_089A729C;
L_089A729C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(120));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[31] = (0x089A72ACu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089A72ACu) goto L_089A72AC;
    return;
L_089A72AC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A740C;
      }
      goto L_089A72B4;
    }
L_089A72B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089A74AC;
      }
      goto L_089A72C0;
    }
L_089A72C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(124), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(128), 0u);
    aot_gpr[31] = (0x089A72D8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089A72D8u) goto L_089A72D8;
    return;
L_089A72D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A740C;
      }
      goto L_089A72E0;
    }
L_089A72E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(120)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[20] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A74AC;
      }
      goto L_089A72F0;
    }
L_089A72F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089A740C;
      }
      goto L_089A72FC;
    }
L_089A72FC:
    aot_gpr[21] = (2203u << 16u);
    aot_gpr[22] = (2203u << 16u);
    aot_gpr[2] = (aot_gpr[21] + static_cast<std::uint32_t>(-32168));
    aot_gpr[3] = (aot_gpr[22] + static_cast<std::uint32_t>(-31436));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[16] = (0u + 0u);
    aot_gpr[19] = (0u | 54017u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    goto L_089A7330;
L_089A7330:
    aot_gpr[31] = (0x089A7338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x089A7338u) goto L_089A7338;
    return;
L_089A7338:
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089A7330;
      }
      goto L_089A734C;
    }
L_089A734C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(124)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A735Cu);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A735Cu) goto L_089A735C;
    return;
L_089A735C:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[19];
    aot_gpr[2] = (aot_gpr[16] < static_cast<std::uint32_t>(10) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A7494;
      }
      goto L_089A7368;
    }
L_089A7368:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7330;
      }
      goto L_089A7370;
    }
L_089A7370:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089A7384u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A7384u) goto L_089A7384;
    return;
L_089A7384:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(-32168));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[22] + static_cast<std::uint32_t>(-31436));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089A74B4;
    }
    goto L_089A73E0;
L_089A73E0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A73F8u);
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A73F8u) goto L_089A73F8;
    return;
L_089A73F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A740C;
      }
      goto L_089A7400;
    }
L_089A7400:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089A740C;
L_089A740C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    goto L_089A7410;
L_089A7410:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A7438:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    goto L_089A743C;
L_089A743C:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A7468:
    aot_gpr[31] = (0x089A7470u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089A7470u) goto L_089A7470;
    return;
L_089A7470:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A740C;
      }
      goto L_089A7478;
    }
L_089A7478:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x089A7488u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A7488u) goto L_089A7488;
    return;
L_089A7488:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    goto L_089A729C;
L_089A7494:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[3] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089A7370;
      }
      goto L_089A74A4;
    }
L_089A74A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    goto L_089A7410;
L_089A74AC:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    goto L_089A740C;
L_089A74B4:
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[8]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_089A73E0;
L_089A750C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A7514:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    aot_gpr[31] = (0x089A7544u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    goto L_089A7020;
L_089A7544:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A75E8;
      }
      goto L_089A7550;
    }
L_089A7550:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (2217u << 16u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A75E8;
      }
      goto L_089A7560;
    }
L_089A7560:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2792)));
    aot_gpr[5] = (aot_gpr[18] & 255u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089A75E8;
      }
      goto L_089A7574;
    }
L_089A7574:
    aot_gpr[31] = (0x089A757Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A757Cu) goto L_089A757C;
    return;
L_089A757C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A7588u);
    aot_gpr[5] = (aot_gpr[17] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A7588u) goto L_089A7588;
    return;
L_089A7588:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    aot_gpr[6] = (0u | 57344u);
    aot_gpr[7] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[29]);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[3]);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A75D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A75D4u) goto L_089A75D4;
    return;
L_089A75D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A75E8;
      }
      goto L_089A75DC;
    }
L_089A75DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(301));
    if (aot_gpr[2] != 0u) aot_gpr[6] = (0u);
    goto L_089A75E8;
L_089A75E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A760C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[31] = (0x089A762Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 158u, 0x0899FCD4u>(ctx, &aot_mem) && ctx.pc == 0x089A762Cu) goto L_089A762C;
    return;
L_089A762C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A76F4;
      }
      goto L_089A7634;
    }
L_089A7634:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089A76CC;
      }
      goto L_089A7640;
    }
L_089A7640:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089A765Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[17]));
    goto L_089A7514;
L_089A765C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A76C0;
      }
      goto L_089A7668;
    }
L_089A7668:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A76B8;
      }
      goto L_089A7674;
    }
L_089A7674:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089A769C;
      }
      goto L_089A7680;
    }
L_089A7680:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A7698u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A7698u) goto L_089A7698;
    return;
L_089A7698:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_089A769C;
L_089A769C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2792)));
      if (branch_taken) {
          goto L_089A76B8;
      }
      goto L_089A76A8;
    }
L_089A76A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A76B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A76B4u) goto L_089A76B4;
    return;
L_089A76B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_089A76B8;
L_089A76B8:
    aot_gpr[31] = (0x089A76C0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089A76C0u) goto L_089A76C0;
    return;
L_089A76C0:
    aot_gpr[31] = (0x089A76C8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(120));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089A76C8u) goto L_089A76C8;
    return;
L_089A76C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(124), 0u);
    goto L_089A76CC;
L_089A76CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089A76E4;
    }
    goto L_089A76D8;
L_089A76D8:
    aot_gpr[31] = (0x089A76E0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089A76E0u) goto L_089A76E0;
    return;
L_089A76E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089A76E4;
L_089A76E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
      if (branch_taken) {
          goto L_089A76F4;
      }
      goto L_089A76EC;
    }
L_089A76EC:
    aot_gpr[31] = (0x089A76F4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089A76F4u) goto L_089A76F4;
    return;
L_089A76F4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_089A7718:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[30]);
    aot_gpr[31] = (0x089A7760u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[21]);
    goto L_089A7020;
L_089A7760:
    aot_gpr[23] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[23] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A7858;
      }
      goto L_089A7770;
    }
L_089A7770:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A7858;
      }
      goto L_089A777C;
    }
L_089A777C:
    aot_gpr[30] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089A7858;
      }
      goto L_089A778C;
    }
L_089A778C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[20] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[31] = (0x089A77ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A77ACu) goto L_089A77AC;
    return;
L_089A77AC:
    aot_gpr[3] = (aot_gpr[19] ^ 51u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A788C;
      }
      goto L_089A77BC;
    }
L_089A77BC:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A7890;
      }
      goto L_089A77C4;
    }
L_089A77C4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(50));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089A78D4;
      }
      goto L_089A77D0;
    }
L_089A77D0:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_089A77D4;
L_089A77D4:
    aot_gpr[5] = (aot_gpr[19] & 255u);
    aot_gpr[31] = (0x089A77E0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A77E0u) goto L_089A77E0;
    return;
L_089A77E0:
    aot_gpr[5] = (aot_gpr[17] & 65535u);
    aot_gpr[31] = (0x089A77ECu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A77ECu) goto L_089A77EC;
    return;
L_089A77EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089A7914;
      }
      goto L_089A77FC;
    }
L_089A77FC:
    aot_gpr[3] = (aot_gpr[20] & 64u);
    goto L_089A7800;
L_089A7800:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(16384));
    aot_gpr[2] = (aot_gpr[20] & 16u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    if (aot_gpr[3] == 0u) aot_gpr[7] = (0u);
      if (branch_taken) {
          goto L_089A795C;
      }
      goto L_089A7810;
    }
L_089A7810:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2792)));
    aot_gpr[3] = (aot_gpr[7] | 4096u);
    aot_gpr[6] = (aot_gpr[20] & 128u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[6] != 0u) aot_gpr[7] = (aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[7] | 32768u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A7844u);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A7844u) goto L_089A7844;
    return;
L_089A7844:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A7858;
      }
      goto L_089A784C;
    }
L_089A784C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(301));
    if (aot_gpr[2] != 0u) aot_gpr[3] = (0u);
    goto L_089A7858;
L_089A7858:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A788C:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    goto L_089A7890;
L_089A7890:
    aot_gpr[5] = (aot_gpr[22] & 65535u);
    aot_gpr[31] = (0x089A789Cu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A789Cu) goto L_089A789C;
    return;
L_089A789C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089A7970;
      }
      goto L_089A78AC;
    }
L_089A78AC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A7968;
      }
      goto L_089A78B4;
    }
L_089A78B4:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089A79B4;
      }
      goto L_089A78C0;
    }
L_089A78C0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(3));
    goto L_089A78C4;
L_089A78C4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(50));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[2];
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A77D4;
      }
      goto L_089A78D0;
    }
L_089A78D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_089A78D4;
L_089A78D4:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089A79EC;
      }
      goto L_089A78E0;
    }
L_089A78E0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089A78E4;
L_089A78E4:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[19] & 255u);
    aot_gpr[31] = (0x089A78F4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A78F4u) goto L_089A78F4;
    return;
L_089A78F4:
    aot_gpr[5] = (aot_gpr[17] & 65535u);
    aot_gpr[31] = (0x089A7900u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A7900u) goto L_089A7900;
    return;
L_089A7900:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (aot_gpr[20] & 64u);
        goto L_089A7800;
    }
    goto L_089A7910;
L_089A7910:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    goto L_089A7914;
L_089A7914:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(16384));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[20] & 64u);
    if (aot_gpr[3] == 0u) aot_gpr[7] = (0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[20] & 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
      if (branch_taken) {
          goto L_089A7810;
      }
      goto L_089A795C;
    }
L_089A795C:
    aot_gpr[2] = (aot_gpr[7] | 8192u);
    aot_gpr[7] = (aot_gpr[2] & 65535u);
    goto L_089A7810;
L_089A7968:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    goto L_089A77C4;
L_089A7970:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[16] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
      if (branch_taken) {
          goto L_089A78B4;
      }
      goto L_089A79AC;
    }
L_089A79AC:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    goto L_089A77C4;
L_089A79B4:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[29]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(3));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[23]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    goto L_089A78C4;
L_089A79EC:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[29]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    goto L_089A78E4;
L_089A7A28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    aot_gpr[31] = (0x089A7A6Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    goto L_089A7020;
L_089A7A6C:
    aot_gpr[22] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[22] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089A7E04;
      }
      goto L_089A7A7C;
    }
L_089A7A7C:
    if (aot_gpr[16] == 0u) {
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089A7E08;
    }
    goto L_089A7A84;
L_089A7A84:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A7BB8;
      }
      goto L_089A7A90;
    }
L_089A7A90:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089A7BB8;
      }
      goto L_089A7AA0;
    }
L_089A7AA0:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089A7AACu);
    aot_gpr[5] = (aot_gpr[18] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A7AACu) goto L_089A7AAC;
    return;
L_089A7AAC:
    aot_gpr[3] = (aot_gpr[20] ^ 51u);
    aot_gpr[2] = (aot_gpr[20] ^ 3u);
    aot_gpr[23] = (aot_gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[30] = (aot_gpr[23] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[30] != 0u;
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A7C88;
      }
      goto L_089A7AC8;
    }
L_089A7AC8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(50));
    goto L_089A7ACC;
L_089A7ACC:
    if (aot_gpr[20] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_089A7CF0;
    }
    goto L_089A7AD4;
L_089A7AD4:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_089A7AD8;
L_089A7AD8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A7AE4u);
    aot_gpr[5] = (aot_gpr[20] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A7AE4u) goto L_089A7AE4;
    return;
L_089A7AE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x089A7AF0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A7AF0u) goto L_089A7AF0;
    return;
L_089A7AF0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089A7C38;
      }
      goto L_089A7B00;
    }
L_089A7B00:
    aot_gpr[3] = (aot_gpr[18] & 64u);
    goto L_089A7B04;
L_089A7B04:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(16384));
    aot_gpr[2] = (aot_gpr[18] & 16u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    if (aot_gpr[3] == 0u) aot_gpr[7] = (0u);
      if (branch_taken) {
          goto L_089A7BE8;
      }
      goto L_089A7B14;
    }
L_089A7B14:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[3] = (aot_gpr[7] | 4096u);
    aot_gpr[6] = (aot_gpr[18] & 128u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[6] != 0u) aot_gpr[7] = (aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[7] | 32768u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A7B4Cu);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A7B4Cu) goto L_089A7B4C;
    return;
L_089A7B4C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A7BB4;
      }
      goto L_089A7B54;
    }
L_089A7B54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[5] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] - aot_gpr[4]);
    { const bool branch_taken = aot_gpr[30] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
      if (branch_taken) {
          goto L_089A7B9C;
      }
      goto L_089A7B7C;
    }
L_089A7B7C:
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-2));
    aot_gpr[2] = (aot_gpr[5] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[3]);
    { const bool branch_taken = aot_gpr[23] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
      if (branch_taken) {
          goto L_089A7D94;
      }
      goto L_089A7B9C;
    }
L_089A7B9C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(50));
    if (aot_gpr[20] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_089A7D64;
    }
    goto L_089A7BA8;
L_089A7BA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089A7BAC;
L_089A7BAC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(301));
    if (aot_gpr[2] != 0u) aot_gpr[3] = (0u);
    goto L_089A7BB4;
L_089A7BB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089A7BB8;
L_089A7BB8:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A7BE8:
    aot_gpr[2] = (aot_gpr[7] | 8192u);
    goto L_089A7BEC;
L_089A7BEC:
    aot_gpr[7] = (aot_gpr[2] & 65535u);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[3] = (aot_gpr[7] | 4096u);
    aot_gpr[6] = (aot_gpr[18] & 128u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[6] != 0u) aot_gpr[7] = (aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[7] | 32768u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A7C28u);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A7C28u) goto L_089A7C28;
    return;
L_089A7C28:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A7B54;
      }
      goto L_089A7C30;
    }
L_089A7C30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089A7BB8;
L_089A7C38:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(16384));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[18] & 64u);
    if (aot_gpr[3] == 0u) aot_gpr[7] = (0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[18] & 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[5]);
      if (branch_taken) {
          goto L_089A7B14;
      }
      goto L_089A7C80;
    }
L_089A7C80:
    aot_gpr[2] = (aot_gpr[7] | 8192u);
    goto L_089A7BEC;
L_089A7C88:
    aot_gpr[5] = (aot_gpr[21] & 65535u);
    aot_gpr[31] = (0x089A7C94u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A7C94u) goto L_089A7C94;
    return;
L_089A7C94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[5] << 3u);
      if (branch_taken) {
          goto L_089A7DC4;
      }
      goto L_089A7CA4;
    }
L_089A7CA4:
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_089A7ACC;
      }
      goto L_089A7CAC;
    }
L_089A7CAC:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    goto L_089A7CB0;
L_089A7CB0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_089A7ACC;
      }
      goto L_089A7CB8;
    }
L_089A7CB8:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[29]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[22]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    goto L_089A7AC8;
L_089A7CF0:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A7AD8;
      }
      goto L_089A7CFC;
    }
L_089A7CFC:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[29]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    aot_gpr[31] = (0x089A7D40u);
    aot_gpr[5] = (aot_gpr[20] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A7D40u) goto L_089A7D40;
    return;
L_089A7D40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x089A7D4Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A7D4Cu) goto L_089A7D4C;
    return;
L_089A7D4C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (aot_gpr[18] & 64u);
        goto L_089A7B04;
    }
    goto L_089A7D5C;
L_089A7D5C:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    goto L_089A7C38;
L_089A7D64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[3] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(301));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] != 0u) aot_gpr[3] = (0u);
    goto L_089A7BB4;
L_089A7D94:
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-3));
    aot_gpr[3] = (aot_gpr[5] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(50));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089A7BAC;
      }
      goto L_089A7DBC;
    }
L_089A7DBC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_089A7D64;
L_089A7DC4:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[23] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[5]);
      if (branch_taken) {
          goto L_089A7AC8;
      }
      goto L_089A7DFC;
    }
L_089A7DFC:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    goto L_089A7CB0;
L_089A7E04:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089A7E08;
L_089A7E08:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A7E38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[31] = (0x089A7E70u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A7E70u) goto L_089A7E70;
    return;
L_089A7E70:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A7F54;
      }
      goto L_089A7E78;
    }
L_089A7E78:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(120)));
    aot_gpr[31] = (0x089A7E84u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089A7020;
L_089A7E84:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[2] != aot_gpr[3]) {
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
        goto L_089A7F58;
    }
    goto L_089A7E90;
L_089A7E90:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[22] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A7EE0;
      }
      goto L_089A7E9C;
    }
L_089A7E9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2792)));
    aot_gpr[8] = (aot_gpr[19] + 0u);
    aot_gpr[9] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089A7EE0;
      }
      goto L_089A7EB8;
    }
L_089A7EB8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A7EC8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A7EC8u) goto L_089A7EC8;
    return;
L_089A7EC8:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[8] = (aot_gpr[21] + 0u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089A7F0C;
      }
      goto L_089A7EE0;
    }
L_089A7EE0:
    aot_gpr[2] = (aot_gpr[17] + 0u);
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
L_089A7F0C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2792)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A7F20u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A7F20u) goto L_089A7F20;
    return;
L_089A7F20:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089A7EE0;
      }
      goto L_089A7F28;
    }
L_089A7F28:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[17] + 0u);
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
L_089A7F54:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A7F58;
L_089A7F58:
    aot_gpr[2] = (aot_gpr[17] + 0u);
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
L_089A7F84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x089A7FACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    goto L_089A7020;
L_089A7FAC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 11u, 0x089A80F0u>(ctx, &aot_mem); return;
      }
      goto L_089A7FB8;
    }
L_089A7FB8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 12u, 0x089A80F4u>(ctx, &aot_mem); return;
      }
      goto L_089A7FC0;
    }
L_089A7FC0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 7u, 0x089A806Cu>(ctx, &aot_mem); return;
      }
      goto L_089A7FCC;
    }
L_089A7FCC:
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 6u, 0x089A8068u>(ctx, &aot_mem); return;
      }
      goto L_089A7FDC;
    }
L_089A7FDC:
    aot_gpr[5] = (aot_gpr[18] & 255u);
    aot_gpr[31] = (0x089A7FE8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A7FE8u) goto L_089A7FE8;
    return;
L_089A7FE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x089A7FF4u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A7FF4u) goto L_089A7FF4;
    return;
L_089A7FF4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 8u, 0x089A8084u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 1u, 0x089A8004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0419(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0419_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_419(Runtime &runtime) {
    runtime.register_generated_unit(419u, 0x089A7000u, 4096u, &recomp_unit_0419, &recomp_unit_0419_entry);
    runtime.register_function(0x089A7000u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7008u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7010u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7020u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7028u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7034u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7040u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A704Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7058u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A705Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7064u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7088u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7094u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A709Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A70A4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A70ACu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A70BCu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A70D8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A70ECu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7100u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7108u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A711Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7124u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A712Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A71C0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A71F4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7200u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A720Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7214u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A721Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A722Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7234u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7240u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A726Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7288u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7294u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7298u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A729Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A72ACu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A72B4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A72C0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A72D8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A72E0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A72F0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A72FCu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7330u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7338u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A734Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A735Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7368u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7370u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7384u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A73E0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A73F8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7400u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A740Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7410u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7438u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A743Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7468u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7470u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7478u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7488u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7494u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A74A4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A74ACu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A74B4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A750Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7514u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7544u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7550u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7560u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7574u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A757Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7588u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A75D4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A75DCu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A75E8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A760Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A762Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7634u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7640u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A765Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7668u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7674u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7680u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7698u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A769Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A76A8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A76B4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A76B8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A76C0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A76C8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A76CCu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A76D8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A76E0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A76E4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A76ECu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A76F4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7718u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7760u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7770u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A777Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A778Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A77ACu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A77BCu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A77C4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A77D0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A77D4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A77E0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A77ECu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A77FCu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7800u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7810u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7844u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A784Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7858u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A788Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7890u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A789Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A78ACu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A78B4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A78C0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A78C4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A78D0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A78D4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A78E0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A78E4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A78F4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7900u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7910u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7914u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A795Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7968u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7970u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A79ACu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A79B4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A79ECu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7A28u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7A6Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7A7Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7A84u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7A90u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7AA0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7AACu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7AC8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7ACCu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7AD4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7AD8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7AE4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7AF0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7B00u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7B04u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7B14u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7B4Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7B54u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7B7Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7B9Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7BA8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7BACu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7BB4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7BB8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7BE8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7BECu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7C28u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7C30u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7C38u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7C80u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7C88u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7C94u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7CA4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7CACu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7CB0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7CB8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7CF0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7CFCu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7D40u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7D4Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7D5Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7D64u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7D94u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7DBCu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7DC4u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7DFCu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7E04u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7E08u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7E38u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7E70u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7E78u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7E84u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7E90u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7E9Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7EB8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7EC8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7EE0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7F0Cu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7F20u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7F28u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7F54u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7F58u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7F84u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7FACu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7FB8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7FC0u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7FCCu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7FDCu, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7FE8u, &recomp_unit_0419, "recomp_unit_0419");
    runtime.register_function(0x089A7FF4u, &recomp_unit_0419, "recomp_unit_0419");
}
} // namespace psprecomp
