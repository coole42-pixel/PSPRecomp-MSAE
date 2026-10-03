#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0576[967] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 20, 21, 0, 0, 0, 22, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 32, 33, 0, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 42, 0,
    43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 52, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 62,
    0, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90,
    91, 0, 0, 92, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 105,
    106, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 114, 0, 0, 0, 0, 0, 0, 0, 115, 116, 0, 0, 0, 117, 0, 0,
    0, 0, 118, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 134, 135, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 142, 0, 0,
    0, 143, 144, 0, 0, 145, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0,
    0, 152, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 157, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 161,
    0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 164, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0,
    0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 179, 0, 180, 0, 0, 181, 0, 0, 0, 182,
    0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 189,
};
void recomp_unit_0576_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A44000u;
        entry_id = (entry_delta < 3868u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0576[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A44000;
    case 2u: goto L_08A440A8;
    case 3u: goto L_08A440B0;
    case 4u: goto L_08A440B8;
    case 5u: goto L_08A440D0;
    case 6u: goto L_08A440F0;
    case 7u: goto L_08A44104;
    case 8u: goto L_08A4410C;
    case 9u: goto L_08A44138;
    case 10u: goto L_08A44140;
    case 11u: goto L_08A44168;
    case 12u: goto L_08A44170;
    case 13u: goto L_08A44178;
    case 14u: goto L_08A441A0;
    case 15u: goto L_08A441A8;
    case 16u: goto L_08A441C8;
    case 17u: goto L_08A441D4;
    case 18u: goto L_08A441E0;
    case 19u: goto L_08A441F4;
    case 20u: goto L_08A44214;
    case 21u: goto L_08A44218;
    case 22u: goto L_08A44228;
    case 23u: goto L_08A4422C;
    case 24u: goto L_08A44234;
    case 25u: goto L_08A44274;
    case 26u: goto L_08A4427C;
    case 27u: goto L_08A442B4;
    case 28u: goto L_08A442CC;
    case 29u: goto L_08A442D4;
    case 30u: goto L_08A442E0;
    case 31u: goto L_08A442E8;
    case 32u: goto L_08A44308;
    case 33u: goto L_08A4430C;
    case 34u: goto L_08A4431C;
    case 35u: goto L_08A44324;
    case 36u: goto L_08A4432C;
    case 37u: goto L_08A44334;
    case 38u: goto L_08A44340;
    case 39u: goto L_08A44358;
    case 40u: goto L_08A44360;
    case 41u: goto L_08A44370;
    case 42u: goto L_08A44378;
    case 43u: goto L_08A44380;
    case 44u: goto L_08A44388;
    case 45u: goto L_08A443A4;
    case 46u: goto L_08A443D4;
    case 47u: goto L_08A443F8;
    case 48u: goto L_08A44404;
    case 49u: goto L_08A44410;
    case 50u: goto L_08A44428;
    case 51u: goto L_08A44444;
    case 52u: goto L_08A44448;
    case 53u: goto L_08A4444C;
    case 54u: goto L_08A4445C;
    case 55u: goto L_08A44464;
    case 56u: goto L_08A44474;
    case 57u: goto L_08A444A0;
    case 58u: goto L_08A444BC;
    case 59u: goto L_08A444C4;
    case 60u: goto L_08A444D0;
    case 61u: goto L_08A444F8;
    case 62u: goto L_08A444FC;
    case 63u: goto L_08A44508;
    case 64u: goto L_08A44510;
    case 65u: goto L_08A44524;
    case 66u: goto L_08A44540;
    case 67u: goto L_08A44554;
    case 68u: goto L_08A44578;
    case 69u: goto L_08A44588;
    case 70u: goto L_08A445AC;
    case 71u: goto L_08A445B8;
    case 72u: goto L_08A445E0;
    case 73u: goto L_08A445E8;
    case 74u: goto L_08A445FC;
    case 75u: goto L_08A44618;
    case 76u: goto L_08A4462C;
    case 77u: goto L_08A4466C;
    case 78u: goto L_08A44674;
    case 79u: goto L_08A44694;
    case 80u: goto L_08A446A0;
    case 81u: goto L_08A446C8;
    case 82u: goto L_08A446D0;
    case 83u: goto L_08A446F4;
    case 84u: goto L_08A44714;
    case 85u: goto L_08A44738;
    case 86u: goto L_08A44740;
    case 87u: goto L_08A4474C;
    case 88u: goto L_08A44754;
    case 89u: goto L_08A44774;
    case 90u: goto L_08A4477C;
    case 91u: goto L_08A44780;
    case 92u: goto L_08A4478C;
    case 93u: goto L_08A44790;
    case 94u: goto L_08A44798;
    case 95u: goto L_08A447B4;
    case 96u: goto L_08A447D0;
    case 97u: goto L_08A447D8;
    case 98u: goto L_08A44814;
    case 99u: goto L_08A44818;
    case 100u: goto L_08A44828;
    case 101u: goto L_08A4484C;
    case 102u: goto L_08A44854;
    case 103u: goto L_08A44864;
    case 104u: goto L_08A44874;
    case 105u: goto L_08A4487C;
    case 106u: goto L_08A44880;
    case 107u: goto L_08A44884;
    case 108u: goto L_08A4489C;
    case 109u: goto L_08A448A4;
    case 110u: goto L_08A448AC;
    case 111u: goto L_08A448F0;
    case 112u: goto L_08A448F8;
    case 113u: goto L_08A4493C;
    case 114u: goto L_08A44940;
    case 115u: goto L_08A44960;
    case 116u: goto L_08A44964;
    case 117u: goto L_08A44974;
    case 118u: goto L_08A44988;
    case 119u: goto L_08A4498C;
    case 120u: goto L_08A449A0;
    case 121u: goto L_08A449CC;
    case 122u: goto L_08A44A30;
    case 123u: goto L_08A44A38;
    case 124u: goto L_08A44A40;
    case 125u: goto L_08A44A48;
    case 126u: goto L_08A44A50;
    case 127u: goto L_08A44AAC;
    case 128u: goto L_08A44AB8;
    case 129u: goto L_08A44AC0;
    case 130u: goto L_08A44AC8;
    case 131u: goto L_08A44AD0;
    case 132u: goto L_08A44AEC;
    case 133u: goto L_08A44B10;
    case 134u: goto L_08A44B20;
    case 135u: goto L_08A44B24;
    case 136u: goto L_08A44B30;
    case 137u: goto L_08A44B40;
    case 138u: goto L_08A44B48;
    case 139u: goto L_08A44B50;
    case 140u: goto L_08A44B60;
    case 141u: goto L_08A44B68;
    case 142u: goto L_08A44B74;
    case 143u: goto L_08A44B84;
    case 144u: goto L_08A44B88;
    case 145u: goto L_08A44B94;
    case 146u: goto L_08A44B98;
    case 147u: goto L_08A44BD0;
    case 148u: goto L_08A44BD8;
    case 149u: goto L_08A44BE0;
    case 150u: goto L_08A44BE8;
    case 151u: goto L_08A44BF0;
    case 152u: goto L_08A44C04;
    case 153u: goto L_08A44C08;
    case 154u: goto L_08A44C14;
    case 155u: goto L_08A44C38;
    case 156u: goto L_08A44C40;
    case 157u: goto L_08A44C44;
    case 158u: goto L_08A44C58;
    case 159u: goto L_08A44C60;
    case 160u: goto L_08A44C68;
    case 161u: goto L_08A44C7C;
    case 162u: goto L_08A44C8C;
    case 163u: goto L_08A44CA4;
    case 164u: goto L_08A44CB0;
    case 165u: goto L_08A44CB4;
    case 166u: goto L_08A44CEC;
    case 167u: goto L_08A44CF4;
    case 168u: goto L_08A44D08;
    case 169u: goto L_08A44D10;
    case 170u: goto L_08A44D6C;
    case 171u: goto L_08A44D78;
    case 172u: goto L_08A44DB4;
    case 173u: goto L_08A44DE0;
    case 174u: goto L_08A44E1C;
    case 175u: goto L_08A44E28;
    case 176u: goto L_08A44E3C;
    case 177u: goto L_08A44E48;
    case 178u: goto L_08A44E54;
    case 179u: goto L_08A44E58;
    case 180u: goto L_08A44E60;
    case 181u: goto L_08A44E6C;
    case 182u: goto L_08A44E7C;
    case 183u: goto L_08A44E84;
    case 184u: goto L_08A44E94;
    case 185u: goto L_08A44EB4;
    case 186u: goto L_08A44EC8;
    case 187u: goto L_08A44ED0;
    case 188u: goto L_08A44F0C;
    case 189u: goto L_08A44F18;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A44000:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (2212u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(15552));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (2212u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(16760));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[3] = (2212u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(17748));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (2212u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(15668));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (2212u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(17216));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (2212u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(17524));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[2] = (2212u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(17264));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[3] = (2212u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(18128));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A440A8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A440B8;
      }
      goto L_08A440B0;
    }
L_08A440B0:
    aot_gpr[31] = (0x08A440B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 214u, 0x08A43C24u>(ctx, &aot_mem) && ctx.pc == 0x08A440B8u) goto L_08A440B8;
    return;
L_08A440B8:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A440D0:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A440F0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 227u, 0x08A43DC0u>(ctx, &aot_mem) && ctx.pc == 0x08A440F0u) goto L_08A440F0;
    return;
L_08A440F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
        (void)rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 253u, 0x08A43FD4u>(ctx, &aot_mem); return;
    }
    goto L_08A44104;
L_08A44104:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(100));
    goto L_08A440B0;
L_08A4410C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (aot_gpr[3] & 3u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        (void)rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 250u, 0x08A43FACu>(ctx, &aot_mem); return;
    }
    goto L_08A44138;
L_08A44138:
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[2]);
    goto L_08A440D0;
L_08A44140:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (aot_gpr[3] & 3u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
        (void)rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 248u, 0x08A43F8Cu>(ctx, &aot_mem); return;
    }
    goto L_08A44168;
L_08A44168:
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[2]);
    goto L_08A4410C;
L_08A44170:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(100));
    goto L_08A440B0;
L_08A44178:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (aot_gpr[5] & 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A441A8;
      }
      goto L_08A441A0;
    }
L_08A441A0:
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    goto L_08A441A8;
L_08A441A8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[6]);
      if (branch_taken) {
          goto L_08A442D4;
      }
      goto L_08A441C8;
    }
L_08A441C8:
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[17] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_08A44234;
    }
    goto L_08A441D4;
L_08A441D4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44324;
      }
      goto L_08A441E0;
    }
L_08A441E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
        goto L_08A441F4;
    }
    goto L_08A441F4;
L_08A441F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A44218;
      }
      goto L_08A44214;
    }
L_08A44214:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(108), aot_gpr[4]);
    goto L_08A44218;
L_08A44218:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A4422C;
      }
      goto L_08A44228;
    }
L_08A44228:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    goto L_08A4422C;
L_08A4422C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_08A44234;
L_08A44234:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[3] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A442CC;
      }
      goto L_08A44274;
    }
L_08A44274:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_08A4427C;
L_08A4427C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (32768u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    goto L_08A442B4;
L_08A442B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A442CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), aot_gpr[3]);
    goto L_08A44274;
L_08A442D4:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08A442E0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x08A442E0u) goto L_08A442E0;
    return;
L_08A442E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08A442B4;
      }
      goto L_08A442E8;
    }
L_08A442E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A4430C;
      }
      goto L_08A44308;
    }
L_08A44308:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    goto L_08A4430C;
L_08A4430C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    goto L_08A4427C;
L_08A4431C:
    aot_gpr[2] = (0u + 0u);
    goto L_08A442B4;
L_08A44324:
    aot_gpr[31] = (0x08A4432Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 227u, 0x08A43DC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4432Cu) goto L_08A4432C;
    return;
L_08A4432C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A4431C;
      }
      goto L_08A44334;
    }
L_08A44334:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    goto L_08A44218;
L_08A44340:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (0u | 60501u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A44360;
      }
      goto L_08A44358;
    }
L_08A44358:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44360:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44370:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A44380;
      }
      goto L_08A44378;
    }
L_08A44378:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_gpr[2] = (0u + 0u);
    goto L_08A44380;
L_08A44380:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44388:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A443A4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08A443A4u) goto L_08A443A4;
    return;
L_08A443A4:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A443D4:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[7] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A4444C;
      }
      goto L_08A443F8;
    }
L_08A443F8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_08A44410;
    }
    goto L_08A44404;
L_08A44404:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_08A44410;
L_08A44410:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4445C;
      }
      goto L_08A44428;
    }
L_08A44428:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A44448;
      }
      goto L_08A44444;
    }
L_08A44444:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    goto L_08A44448;
L_08A44448:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(76), aot_gpr[6]);
    goto L_08A4444C;
L_08A4444C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4445C:
    aot_gpr[31] = (0x08A44464u);
    // nop
    goto L_08A44388;
L_08A44464:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44474:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = ((aot_gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (0u | 60500u);
      if (branch_taken) {
          goto L_08A444F8;
      }
      goto L_08A444A0;
    }
L_08A444A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08A444F8;
      }
      goto L_08A444BC;
    }
L_08A444BC:
    if (static_cast<std::int32_t>(aot_gpr[3]) < 0) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08A444FC;
    }
    goto L_08A444C4;
L_08A444C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
        goto L_08A44524;
    }
    goto L_08A444D0;
L_08A444D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A44508;
      }
      goto L_08A444F8;
    }
L_08A444F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08A444FC;
L_08A444FC:
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44508:
    aot_gpr[31] = (0x08A44510u);
    // nop
    goto L_08A443D4;
L_08A44510:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44524:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[31] = (0x08A44540u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(56), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08A44540u) goto L_08A44540;
    return;
L_08A44540:
    aot_gpr[7] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44554:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[7] = (0u | 60501u);
      if (branch_taken) {
          goto L_08A44588;
      }
      goto L_08A44578;
    }
L_08A44578:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44588:
    aot_gpr[2] = ((aot_gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08A44578;
      }
      goto L_08A445AC;
    }
L_08A445AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
        goto L_08A445FC;
    }
    goto L_08A445B8;
L_08A445B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A44578;
      }
      goto L_08A445E0;
    }
L_08A445E0:
    aot_gpr[31] = (0x08A445E8u);
    // nop
    goto L_08A443D4;
L_08A445E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A445FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[31] = (0x08A44618u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(56), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08A44618u) goto L_08A44618;
    return;
L_08A44618:
    aot_gpr[7] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4462C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21068));
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(11024));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x08A4466Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A4466Cu) goto L_08A4466C;
    return;
L_08A4466C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A446C8;
      }
      goto L_08A44674;
    }
L_08A44674:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[7] >> 31u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(11024));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21116));
    aot_gpr[7] = ((aot_gpr[7] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[31] = (0x08A44694u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A44694u) goto L_08A44694;
    return;
L_08A44694:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08A446C8;
      }
      goto L_08A446A0;
    }
L_08A446A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = ((aot_gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A446C8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A446C8u) goto L_08A446C8;
    return;
L_08A446C8:
    aot_gpr[31] = (0x08A446D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 84u, 0x08A3941Cu>(ctx, &aot_mem) && ctx.pc == 0x08A446D0u) goto L_08A446D0;
    return;
L_08A446D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A44738;
      }
      goto L_08A446F4;
    }
L_08A446F4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[3];
    aot_gpr[6] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A44798;
      }
      goto L_08A44714;
    }
L_08A44714:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(11028));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08A4462C;
L_08A44738:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_08A44740;
L_08A44740:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
    if (aot_gpr[9] == aot_gpr[5]) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_08A44790;
    }
    goto L_08A4474C;
L_08A4474C:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    goto L_08A44754;
L_08A44754:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[8] == aot_gpr[7];
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(11028));
      if (branch_taken) {
          goto L_08A44780;
      }
      goto L_08A44774;
    }
L_08A44774:
    aot_gpr[31] = (0x08A4477Cu);
    // nop
    goto L_08A4462C;
L_08A4477C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_08A44780;
L_08A44780:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (aot_gpr[9] != aot_gpr[5]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
        goto L_08A44754;
    }
    goto L_08A4478C;
L_08A4478C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08A44790;
L_08A44790:
    if (aot_gpr[18] != 0u) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
        goto L_08A44740;
    }
    goto L_08A44798;
L_08A44798:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08A447B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A44818;
      }
      goto L_08A447D0;
    }
L_08A447D0:
    aot_gpr[31] = (0x08A447D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08A447D8u) goto L_08A447D8;
    return;
L_08A447D8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[31] = (0x08A44814u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(40), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08A44814u) goto L_08A44814;
    return;
L_08A44814:
    aot_gpr[3] = (0u + 0u);
    goto L_08A44818;
L_08A44818:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44828:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A4487C;
      }
      goto L_08A4484C;
    }
L_08A4484C:
    if (aot_gpr[4] == 0u) {
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
        goto L_08A44880;
    }
    goto L_08A44854;
L_08A44854:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] & 3u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
        goto L_08A44880;
    }
    goto L_08A44864;
L_08A44864:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[3] & 3u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A4487C;
      }
      goto L_08A44874;
    }
L_08A44874:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (aot_gpr[29] + 0u);
        goto L_08A4489C;
    }
    goto L_08A4487C;
L_08A4487C:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    goto L_08A44880;
L_08A44880:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_08A44884;
L_08A44884:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4489C:
    aot_gpr[31] = (0x08A448A4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A448A4u) goto L_08A448A4;
    return;
L_08A448A4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A44880;
      }
      goto L_08A448AC;
    }
L_08A448AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A448F0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x08A448F0u) goto L_08A448F0;
    return;
L_08A448F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A44A30;
      }
      goto L_08A448F8;
    }
L_08A448F8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A44940;
      }
      goto L_08A4493C;
    }
L_08A4493C:
    rt.unsupported(0x08A4493Cu, 0x000001CDu, "special? not lowered yet"); return;
L_08A44940:
    aot_gpr[2] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    { const std::uint32_t dividend = aot_gpr[3]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A44964;
      }
      goto L_08A44960;
    }
L_08A44960:
    rt.unsupported(0x08A44960u, 0x000001CDu, "special? not lowered yet"); return;
L_08A44964:
    aot_gpr[3] = (ctx.hi);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
        goto L_08A449A0;
    }
    goto L_08A44974;
L_08A44974:
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A4498C;
      }
      goto L_08A44988;
    }
L_08A44988:
    rt.unsupported(0x08A44988u, 0x000001CDu, "special? not lowered yet"); return;
L_08A4498C:
    aot_gpr[2] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    goto L_08A449A0;
L_08A449A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.lo = aot_gpr[2];
    aot_gpr[5] = (0u + 0u);
    rt.unsupported(0x08A449B0u, 0x0083001Cu, "special? not lowered yet"); return;
L_08A449CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (2212u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(18356));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (2212u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(19008));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (2212u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(19128));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (2212u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(19424));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44A30:
    aot_gpr[31] = (0x08A44A38u);
    aot_gpr[17] = (aot_gpr[2] + 0u);
    goto L_08A447B4;
L_08A44A38:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_08A44884;
L_08A44A40:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A44AAC;
      }
      goto L_08A44A48;
    }
L_08A44A48:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08A44AAC;
      }
      goto L_08A44A50;
    }
L_08A44A50:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44AAC:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44AB8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A44AC8;
      }
      goto L_08A44AC0;
    }
L_08A44AC0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44AC8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44AC0;
      }
      goto L_08A44AD0;
    }
L_08A44AD0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A44AC0;
      }
      goto L_08A44AEC;
    }
L_08A44AEC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[7]);
    ctx.lo = aot_gpr[2];
    rt.unsupported(0x08A44AFCu, 0x006B002Eu, "special? not lowered yet"); return;
L_08A44B10:
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[3] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A44B24;
      }
      goto L_08A44B20;
    }
L_08A44B20:
    rt.unsupported(0x08A44B20u, 0x000001CDu, "special? not lowered yet"); return;
L_08A44B24:
    aot_gpr[5] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    aot_gpr[10] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A44BD8;
      }
      goto L_08A44B30;
    }
L_08A44B30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    goto L_08A44B50;
L_08A44B40:
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08A44B48;
L_08A44B48:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A44BD8;
      }
      goto L_08A44B50;
    }
L_08A44B50:
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A44B40;
      }
      goto L_08A44B60;
    }
L_08A44B60:
    if (aot_gpr[5] != aot_gpr[8]) {
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08A44B48;
    }
    goto L_08A44B68;
L_08A44B68:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[11] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A44BD8;
      }
      goto L_08A44B74;
    }
L_08A44B74:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A44B88;
      }
      goto L_08A44B84;
    }
L_08A44B84:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    goto L_08A44B88;
L_08A44B88:
    aot_gpr[5] = (aot_gpr[9] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    goto L_08A44B98;
L_08A44B94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(44)));
    goto L_08A44B98;
L_08A44B98:
    aot_gpr[2] = (aot_gpr[7] & 127u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-128));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.lo = aot_gpr[2];
    rt.unsupported(0x08A44BC0u, 0x0065001Cu, "special? not lowered yet"); return;
L_08A44BD0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44BD8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44BE0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A44C60;
      }
      goto L_08A44BE8;
    }
L_08A44BE8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44C60;
      }
      goto L_08A44BF0;
    }
L_08A44BF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A44C08;
      }
      goto L_08A44C04;
    }
L_08A44C04:
    rt.unsupported(0x08A44C04u, 0x000001CDu, "special? not lowered yet"); return;
L_08A44C08:
    aot_gpr[3] = (ctx.hi);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[8] = (ctx.lo);
      if (branch_taken) {
          goto L_08A44C60;
      }
      goto L_08A44C14;
    }
L_08A44C14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] & 127u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A44C44;
      }
      goto L_08A44C38;
    }
L_08A44C38:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44C40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(44)));
    goto L_08A44C44;
L_08A44C44:
    aot_gpr[2] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A44C40;
      }
      goto L_08A44C58;
    }
L_08A44C58:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44C60:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44C68:
    aot_gpr[9] = (aot_gpr[4] + 0u);
    aot_gpr[11] = (aot_gpr[5] + 0u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[3]);
    goto L_08A44C7C;
L_08A44C7C:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[4];
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[3]);
      if (branch_taken) {
          goto L_08A44C7C;
      }
      goto L_08A44C8C;
    }
L_08A44C8C:
    aot_gpr[7] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(0u));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(257), static_cast<std::uint8_t>(0u));
    aot_gpr[10] = (aot_gpr[9] + static_cast<std::uint32_t>(256));
    goto L_08A44CA4;
L_08A44CA4:
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[6] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A44CB4;
      }
      goto L_08A44CB0;
    }
L_08A44CB0:
    rt.unsupported(0x08A44CB0u, 0x000001CDu, "special? not lowered yet"); return;
L_08A44CB4:
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[11]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[2] & 255u);
    aot_gpr[3] = (aot_gpr[9] + aot_gpr[8]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (ctx.hi);
    { const bool branch_taken = aot_gpr[10] != aot_gpr[7];
    aot_gpr[3] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A44CA4;
      }
      goto L_08A44CEC;
    }
L_08A44CEC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44CF4:
    aot_gpr[7] = (aot_gpr[4] + 0u);
    aot_gpr[12] = (aot_gpr[6] + 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(257)));
      if (branch_taken) {
          goto L_08A44D6C;
      }
      goto L_08A44D08;
    }
L_08A44D08:
    aot_gpr[8] = (aot_gpr[5] + 0u);
    aot_gpr[11] = (0u + 0u);
    goto L_08A44D10;
L_08A44D10:
    aot_gpr[2] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[2] & 255u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[10]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[2] & 255u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[3] = (aot_gpr[2] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] ^ aot_gpr[3]);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[12] != aot_gpr[11];
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A44D10;
      }
      goto L_08A44D6C;
    }
L_08A44D6C:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(257), static_cast<std::uint8_t>(aot_gpr[9]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(aot_gpr[10]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44D78:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (26437u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8961));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (61390u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-21623));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (39099u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8962));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (4146u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(21622));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44DB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A44E94;
      }
      goto L_08A44DE0;
    }
L_08A44DE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] << 3u);
    aot_gpr[20] = (aot_gpr[4] >> 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[16] >> 29u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[20] = (aot_gpr[20] & 63u);
    aot_gpr[19] = (0u | 64u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[20]);
    { const bool branch_taken = aot_gpr[20] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A44E54;
      }
      goto L_08A44E1C;
    }
L_08A44E1C:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(64) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A44E58;
      }
      goto L_08A44E28;
    }
L_08A44E28:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A44E3Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A44E3Cu) goto L_08A44E3C;
    return;
L_08A44E3C:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x08A44E48u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08A44F18;
L_08A44E48:
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[19]);
    aot_gpr[20] = (0u | 0u);
    goto L_08A44E54;
L_08A44E54:
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    goto L_08A44E58;
L_08A44E58:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A44E7C;
      }
      goto L_08A44E60;
    }
L_08A44E60:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A44E6Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A44F18;
L_08A44E6C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A44E60;
      }
      goto L_08A44E7C;
    }
L_08A44E7C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[20]);
      if (branch_taken) {
          goto L_08A44E94;
      }
      goto L_08A44E84;
    }
L_08A44E84:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A44E94u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A44E94u) goto L_08A44E94;
    return;
L_08A44E94:
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
L_08A44EB4:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A44F0C;
      }
      goto L_08A44EC8;
    }
L_08A44EC8:
    aot_gpr[8] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-14520)));
    goto L_08A44ED0;
L_08A44ED0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[9]) >> 4u));
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] & 15u);
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A44ED0;
      }
      goto L_08A44F0C;
    }
L_08A44F0C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44F18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(3)));
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (aot_gpr[7] << 24u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] << 8u);
    aot_gpr[7] = (aot_gpr[9] | aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(6)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(7)));
    aot_gpr[7] = (aot_gpr[7] << 16u);
    aot_gpr[8] = (aot_gpr[8] << 24u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(5)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] << 8u);
    aot_gpr[8] = (aot_gpr[10] | aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(10)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(11)));
    aot_gpr[8] = (aot_gpr[8] << 16u);
    aot_gpr[9] = (aot_gpr[9] << 24u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(9)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[10] << 8u);
    aot_gpr[9] = (aot_gpr[11] | aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(14)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(15)));
    aot_gpr[9] = (aot_gpr[9] << 16u);
    aot_gpr[10] = (aot_gpr[10] << 24u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(13)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[11] << 8u);
    aot_gpr[10] = (aot_gpr[2] | aot_gpr[10]);
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(18)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(19)));
    aot_gpr[10] = (aot_gpr[10] << 16u);
    aot_gpr[11] = (aot_gpr[11] << 24u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(17)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[11]);
    aot_gpr[11] = (aot_gpr[2] << 8u);
    aot_gpr[11] = (aot_gpr[3] | aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(23)));
    aot_gpr[11] = (aot_gpr[11] << 16u);
    aot_gpr[2] = (aot_gpr[2] << 24u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(21)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (aot_gpr[11] | aot_gpr[2]);
    ctx.pc = 0x08A45000u; return;
}

void recomp_unit_0576(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0576_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_576(Runtime &runtime) {
    runtime.register_generated_unit(576u, 0x08A44000u, 4096u, &recomp_unit_0576, &recomp_unit_0576_entry);
    runtime.register_function(0x08A44000u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A440A8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A440B0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A440B8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A440D0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A440F0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44104u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4410Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44138u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44140u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44168u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44170u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44178u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A441A0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A441A8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A441C8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A441D4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A441E0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A441F4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44214u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44218u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44228u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4422Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44234u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44274u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4427Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A442B4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A442CCu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A442D4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A442E0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A442E8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44308u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4430Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4431Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44324u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4432Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44334u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44340u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44358u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44360u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44370u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44378u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44380u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44388u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A443A4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A443D4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A443F8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44404u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44410u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44428u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44444u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44448u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4444Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4445Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44464u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44474u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A444A0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A444BCu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A444C4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A444D0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A444F8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A444FCu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44508u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44510u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44524u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44540u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44554u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44578u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44588u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A445ACu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A445B8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A445E0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A445E8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A445FCu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44618u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4462Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4466Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44674u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44694u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A446A0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A446C8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A446D0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A446F4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44714u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44738u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44740u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4474Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44754u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44774u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4477Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44780u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4478Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44790u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44798u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A447B4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A447D0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A447D8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44814u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44818u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44828u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4484Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44854u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44864u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44874u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4487Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44880u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44884u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4489Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A448A4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A448ACu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A448F0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A448F8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4493Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44940u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44960u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44964u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44974u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44988u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A4498Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A449A0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A449CCu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44A30u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44A38u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44A40u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44A48u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44A50u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44AACu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44AB8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44AC0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44AC8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44AD0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44AECu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44B10u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44B20u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44B24u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44B30u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44B40u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44B48u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44B50u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44B60u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44B68u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44B74u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44B84u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44B88u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44B94u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44B98u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44BD0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44BD8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44BE0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44BE8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44BF0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44C04u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44C08u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44C14u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44C38u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44C40u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44C44u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44C58u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44C60u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44C68u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44C7Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44C8Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44CA4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44CB0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44CB4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44CECu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44CF4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44D08u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44D10u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44D6Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44D78u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44DB4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44DE0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44E1Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44E28u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44E3Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44E48u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44E54u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44E58u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44E60u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44E6Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44E7Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44E84u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44E94u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44EB4u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44EC8u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44ED0u, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44F0Cu, &recomp_unit_0576, "recomp_unit_0576");
    runtime.register_function(0x08A44F18u, &recomp_unit_0576, "recomp_unit_0576");
}
} // namespace psprecomp
