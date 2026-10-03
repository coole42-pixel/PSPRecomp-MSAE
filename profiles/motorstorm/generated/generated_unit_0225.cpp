#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0225[1022] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0,
    14, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 28,
    0, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 35, 0, 36, 0, 37, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47,
    48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 54, 0, 55, 0, 0, 56, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0,
    0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 67, 0, 68, 69, 0, 0, 0, 70, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81,
    0, 0, 0, 82, 0, 0, 0, 83, 84, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 99, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0,
    106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 0,
    140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 147,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 0,
    160, 0, 0, 161, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 0, 166, 167, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 179, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0,
    0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188,
    0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 195,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 200, 0, 0,
    0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 218, 0, 0, 0, 219, 0, 0, 220,
};
void recomp_unit_0225_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088E5000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0225[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E5000;
    case 2u: goto L_088E500C;
    case 3u: goto L_088E5020;
    case 4u: goto L_088E5050;
    case 5u: goto L_088E5068;
    case 6u: goto L_088E5078;
    case 7u: goto L_088E5084;
    case 8u: goto L_088E50A8;
    case 9u: goto L_088E50BC;
    case 10u: goto L_088E50D0;
    case 11u: goto L_088E50D8;
    case 12u: goto L_088E50EC;
    case 13u: goto L_088E50F8;
    case 14u: goto L_088E5100;
    case 15u: goto L_088E510C;
    case 16u: goto L_088E5114;
    case 17u: goto L_088E5130;
    case 18u: goto L_088E513C;
    case 19u: goto L_088E5144;
    case 20u: goto L_088E515C;
    case 21u: goto L_088E51A0;
    case 22u: goto L_088E51B0;
    case 23u: goto L_088E51C4;
    case 24u: goto L_088E51D0;
    case 25u: goto L_088E51D8;
    case 26u: goto L_088E51E0;
    case 27u: goto L_088E51EC;
    case 28u: goto L_088E51FC;
    case 29u: goto L_088E5208;
    case 30u: goto L_088E5210;
    case 31u: goto L_088E5224;
    case 32u: goto L_088E522C;
    case 33u: goto L_088E5240;
    case 34u: goto L_088E5254;
    case 35u: goto L_088E5258;
    case 36u: goto L_088E5260;
    case 37u: goto L_088E5268;
    case 38u: goto L_088E5280;
    case 39u: goto L_088E5294;
    case 40u: goto L_088E52A0;
    case 41u: goto L_088E52A8;
    case 42u: goto L_088E52BC;
    case 43u: goto L_088E52DC;
    case 44u: goto L_088E531C;
    case 45u: goto L_088E5328;
    case 46u: goto L_088E536C;
    case 47u: goto L_088E537C;
    case 48u: goto L_088E5380;
    case 49u: goto L_088E5394;
    case 50u: goto L_088E53A0;
    case 51u: goto L_088E53AC;
    case 52u: goto L_088E53C0;
    case 53u: goto L_088E53F4;
    case 54u: goto L_088E5408;
    case 55u: goto L_088E5410;
    case 56u: goto L_088E541C;
    case 57u: goto L_088E5420;
    case 58u: goto L_088E542C;
    case 59u: goto L_088E5438;
    case 60u: goto L_088E5444;
    case 61u: goto L_088E5450;
    case 62u: goto L_088E545C;
    case 63u: goto L_088E5478;
    case 64u: goto L_088E5488;
    case 65u: goto L_088E5498;
    case 66u: goto L_088E54A8;
    case 67u: goto L_088E54AC;
    case 68u: goto L_088E54B4;
    case 69u: goto L_088E54B8;
    case 70u: goto L_088E54C8;
    case 71u: goto L_088E54CC;
    case 72u: goto L_088E54D4;
    case 73u: goto L_088E54E0;
    case 74u: goto L_088E54E8;
    case 75u: goto L_088E54FC;
    case 76u: goto L_088E5520;
    case 77u: goto L_088E5554;
    case 78u: goto L_088E5564;
    case 79u: goto L_088E556C;
    case 80u: goto L_088E5574;
    case 81u: goto L_088E557C;
    case 82u: goto L_088E558C;
    case 83u: goto L_088E559C;
    case 84u: goto L_088E55A0;
    case 85u: goto L_088E55AC;
    case 86u: goto L_088E55B4;
    case 87u: goto L_088E55C0;
    case 88u: goto L_088E55D4;
    case 89u: goto L_088E55E4;
    case 90u: goto L_088E55F0;
    case 91u: goto L_088E560C;
    case 92u: goto L_088E5620;
    case 93u: goto L_088E5628;
    case 94u: goto L_088E5630;
    case 95u: goto L_088E564C;
    case 96u: goto L_088E5660;
    case 97u: goto L_088E5668;
    case 98u: goto L_088E567C;
    case 99u: goto L_088E5690;
    case 100u: goto L_088E5694;
    case 101u: goto L_088E56AC;
    case 102u: goto L_088E56D4;
    case 103u: goto L_088E5714;
    case 104u: goto L_088E575C;
    case 105u: goto L_088E5778;
    case 106u: goto L_088E5780;
    case 107u: goto L_088E579C;
    case 108u: goto L_088E57A8;
    case 109u: goto L_088E57B4;
    case 110u: goto L_088E57C0;
    case 111u: goto L_088E57C8;
    case 112u: goto L_088E57EC;
    case 113u: goto L_088E57F8;
    case 114u: goto L_088E5810;
    case 115u: goto L_088E584C;
    case 116u: goto L_088E588C;
    case 117u: goto L_088E58A0;
    case 118u: goto L_088E58A8;
    case 119u: goto L_088E58B4;
    case 120u: goto L_088E58BC;
    case 121u: goto L_088E58C8;
    case 122u: goto L_088E58D8;
    case 123u: goto L_088E58F8;
    case 124u: goto L_088E5908;
    case 125u: goto L_088E5914;
    case 126u: goto L_088E5928;
    case 127u: goto L_088E5930;
    case 128u: goto L_088E593C;
    case 129u: goto L_088E5950;
    case 130u: goto L_088E5958;
    case 131u: goto L_088E5964;
    case 132u: goto L_088E59A0;
    case 133u: goto L_088E59B0;
    case 134u: goto L_088E59C8;
    case 135u: goto L_088E59D0;
    case 136u: goto L_088E59D8;
    case 137u: goto L_088E59E0;
    case 138u: goto L_088E59EC;
    case 139u: goto L_088E59F4;
    case 140u: goto L_088E5A00;
    case 141u: goto L_088E5A08;
    case 142u: goto L_088E5A1C;
    case 143u: goto L_088E5A38;
    case 144u: goto L_088E5A4C;
    case 145u: goto L_088E5A54;
    case 146u: goto L_088E5A78;
    case 147u: goto L_088E5A7C;
    case 148u: goto L_088E5A94;
    case 149u: goto L_088E5AB0;
    case 150u: goto L_088E5AC4;
    case 151u: goto L_088E5AD8;
    case 152u: goto L_088E5AE8;
    case 153u: goto L_088E5AF4;
    case 154u: goto L_088E5B10;
    case 155u: goto L_088E5B28;
    case 156u: goto L_088E5B44;
    case 157u: goto L_088E5B58;
    case 158u: goto L_088E5B6C;
    case 159u: goto L_088E5B78;
    case 160u: goto L_088E5B80;
    case 161u: goto L_088E5B8C;
    case 162u: goto L_088E5B94;
    case 163u: goto L_088E5B9C;
    case 164u: goto L_088E5BA8;
    case 165u: goto L_088E5BB0;
    case 166u: goto L_088E5BBC;
    case 167u: goto L_088E5BC0;
    case 168u: goto L_088E5BC8;
    case 169u: goto L_088E5BE4;
    case 170u: goto L_088E5BFC;
    case 171u: goto L_088E5C18;
    case 172u: goto L_088E5C2C;
    case 173u: goto L_088E5C3C;
    case 174u: goto L_088E5C64;
    case 175u: goto L_088E5C6C;
    case 176u: goto L_088E5CA0;
    case 177u: goto L_088E5CAC;
    case 178u: goto L_088E5CB4;
    case 179u: goto L_088E5CBC;
    case 180u: goto L_088E5CC0;
    case 181u: goto L_088E5CE0;
    case 182u: goto L_088E5CF0;
    case 183u: goto L_088E5D04;
    case 184u: goto L_088E5D14;
    case 185u: goto L_088E5D50;
    case 186u: goto L_088E5D5C;
    case 187u: goto L_088E5D6C;
    case 188u: goto L_088E5D7C;
    case 189u: goto L_088E5D84;
    case 190u: goto L_088E5D90;
    case 191u: goto L_088E5D9C;
    case 192u: goto L_088E5DC0;
    case 193u: goto L_088E5DE0;
    case 194u: goto L_088E5DF4;
    case 195u: goto L_088E5DFC;
    case 196u: goto L_088E5E18;
    case 197u: goto L_088E5E30;
    case 198u: goto L_088E5E38;
    case 199u: goto L_088E5E70;
    case 200u: goto L_088E5E74;
    case 201u: goto L_088E5E88;
    case 202u: goto L_088E5E90;
    case 203u: goto L_088E5EA0;
    case 204u: goto L_088E5EB8;
    case 205u: goto L_088E5EC4;
    case 206u: goto L_088E5F10;
    case 207u: goto L_088E5F3C;
    case 208u: goto L_088E5F4C;
    case 209u: goto L_088E5F58;
    case 210u: goto L_088E5F70;
    case 211u: goto L_088E5F8C;
    case 212u: goto L_088E5F98;
    case 213u: goto L_088E5FB4;
    case 214u: goto L_088E5FBC;
    case 215u: goto L_088E5FC4;
    case 216u: goto L_088E5FCC;
    case 217u: goto L_088E5FD4;
    case 218u: goto L_088E5FD8;
    case 219u: goto L_088E5FE8;
    case 220u: goto L_088E5FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E5000:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0224_entry, 224u, 209u, 0x088E4F90u>(ctx, &aot_mem); return;
      }
      goto L_088E500C;
    }
L_088E500C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] | 64u);
    aot_gpr[31] = (0x088E5020u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0224_entry, 224u, 151u, 0x088E4BC8u>(ctx, &aot_mem) && ctx.pc == 0x088E5020u) goto L_088E5020;
    return;
L_088E5020:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5050:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088E5078;
      }
      goto L_088E5068;
    }
L_088E5068:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088E5078u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 159u, 0x088CFD48u>(ctx, &aot_mem) && ctx.pc == 0x088E5078u) goto L_088E5078;
    return;
L_088E5078:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5084:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E50EC;
      }
      goto L_088E50A8;
    }
L_088E50A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(23)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E50EC;
      }
      goto L_088E50BC;
    }
L_088E50BC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E50EC;
      }
      goto L_088E50D0;
    }
L_088E50D0:
    aot_gpr[31] = (0x088E50D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(868)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 144u, 0x088DEAF4u>(ctx, &aot_mem) && ctx.pc == 0x088E50D8u) goto L_088E50D8;
    return;
L_088E50D8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E50D0;
      }
      goto L_088E50EC;
    }
L_088E50EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5100;
      }
      goto L_088E50F8;
    }
L_088E50F8:
    aot_gpr[31] = (0x088E5100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 131u, 0x088CFAD4u>(ctx, &aot_mem) && ctx.pc == 0x088E5100u) goto L_088E5100;
    return;
L_088E5100:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(884)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5130;
      }
      goto L_088E510C;
    }
L_088E510C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5130;
      }
      goto L_088E5114;
    }
L_088E5114:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088E5130u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E5130u) goto L_088E5130;
    return;
L_088E5130:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(856)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5144;
      }
      goto L_088E513C;
    }
L_088E513C:
    aot_gpr[31] = (0x088E5144u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 187u, 0x088DDEA8u>(ctx, &aot_mem) && ctx.pc == 0x088E5144u) goto L_088E5144;
    return;
L_088E5144:
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
L_088E515C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[4] | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E51C4;
      }
      goto L_088E51A0;
    }
L_088E51A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(816)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[31] = (0x088E51B0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 23u, 0x088FF214u>(ctx, &aot_mem) && ctx.pc == 0x088E51B0u) goto L_088E51B0;
    return;
L_088E51B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E51A0;
      }
      goto L_088E51C4;
    }
L_088E51C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(856)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E51D8;
      }
      goto L_088E51D0;
    }
L_088E51D0:
    aot_gpr[31] = (0x088E51D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 45u, 0x088DE390u>(ctx, &aot_mem) && ctx.pc == 0x088E51D8u) goto L_088E51D8;
    return;
L_088E51D8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E52BC;
      }
      goto L_088E51E0;
    }
L_088E51E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(856)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E51FC;
      }
      goto L_088E51EC;
    }
L_088E51EC:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088E51FCu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 41u, 0x088DE324u>(ctx, &aot_mem) && ctx.pc == 0x088E51FCu) goto L_088E51FC;
    return;
L_088E51FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5210;
      }
      goto L_088E5208;
    }
L_088E5208:
    aot_gpr[31] = (0x088E5210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 179u, 0x088CFF44u>(ctx, &aot_mem) && ctx.pc == 0x088E5210u) goto L_088E5210;
    return;
L_088E5210:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(616)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(620));
      if (branch_taken) {
          goto L_088E5240;
      }
      goto L_088E5224;
    }
L_088E5224:
    aot_gpr[31] = (0x088E522Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 101u, 0x088D29C4u>(ctx, &aot_mem) && ctx.pc == 0x088E522Cu) goto L_088E522C;
    return;
L_088E522C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(616)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_088E5224;
      }
      goto L_088E5240;
    }
L_088E5240:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(360));
      if (branch_taken) {
          goto L_088E5280;
      }
      goto L_088E5254;
    }
L_088E5254:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(488));
    goto L_088E5258;
L_088E5258:
    aot_gpr[31] = (0x088E5260u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 69u, 0x08828A6Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5260u) goto L_088E5260;
    return;
L_088E5260:
    aot_gpr[31] = (0x088E5268u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 69u, 0x08828A6Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5268u) goto L_088E5268;
    return;
L_088E5268:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088E5258;
      }
      goto L_088E5280;
    }
L_088E5280:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E52BC;
      }
      goto L_088E5294;
    }
L_088E5294:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E52A8;
      }
      goto L_088E52A0;
    }
L_088E52A0:
    aot_gpr[31] = (0x088E52A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 135u, 0x0891F9A8u>(ctx, &aot_mem) && ctx.pc == 0x088E52A8u) goto L_088E52A8;
    return;
L_088E52A8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E5294;
      }
      goto L_088E52BC;
    }
L_088E52BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(964), 0u);
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
L_088E52DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(194))))));
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[8] << 2u);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(176)));
    aot_gpr[7] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[9] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_088E537C;
      }
      goto L_088E531C;
    }
L_088E531C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[8] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088E537C;
      }
      goto L_088E5328;
    }
L_088E5328:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
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
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (aot_gpr[7] | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[8] | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x088E536Cu);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 108u, 0x08884BBCu>(ctx, &aot_mem) && ctx.pc == 0x088E536Cu) goto L_088E536C;
    return;
L_088E536C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7908)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(964), aot_gpr[4]);
      if (branch_taken) {
          goto L_088E5380;
      }
      goto L_088E537C;
    }
L_088E537C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(964), 0u);
    goto L_088E5380;
L_088E5380:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088E5394u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x088E5394u) goto L_088E5394;
    return;
L_088E5394:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E53AC;
      }
      goto L_088E53A0;
    }
L_088E53A0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[31] = (0x088E53ACu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 174u, 0x088CFED0u>(ctx, &aot_mem) && ctx.pc == 0x088E53ACu) goto L_088E53AC;
    return;
L_088E53AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E53C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E53F4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 158u, 0x088EED54u>(ctx, &aot_mem) && ctx.pc == 0x088E53F4u) goto L_088E53F4;
    return;
L_088E53F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(616)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088E5478;
      }
      goto L_088E5408;
    }
L_088E5408:
    aot_gpr[21] = (0u | 1u);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(620));
    goto L_088E5410;
L_088E5410:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5420;
      }
      goto L_088E541C;
    }
L_088E541C:
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[20]));
    goto L_088E5420;
L_088E5420:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_088E5438;
      }
      goto L_088E542C;
    }
L_088E542C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088E5438u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 103u, 0x088D29E0u>(ctx, &aot_mem) && ctx.pc == 0x088E5438u) goto L_088E5438;
    return;
L_088E5438:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E5450;
      }
      goto L_088E5444;
    }
L_088E5444:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088E5450u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 103u, 0x088D29E0u>(ctx, &aot_mem) && ctx.pc == 0x088E5450u) goto L_088E5450;
    return;
L_088E5450:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x088E545Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 100u, 0x088D29BCu>(ctx, &aot_mem) && ctx.pc == 0x088E545Cu) goto L_088E545C;
    return;
L_088E545C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(616)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_088E5410;
      }
      goto L_088E5478;
    }
L_088E5478:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(32764)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E54B4;
      }
      goto L_088E5488;
    }
L_088E5488:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(408)));
    aot_gpr[6] = (2216u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-32764)));
      if (branch_taken) {
          goto L_088E54A8;
      }
      goto L_088E5498;
    }
L_088E5498:
    aot_gpr[7] = (0u - aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] & 7u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u - aot_gpr[17]);
      if (branch_taken) {
          goto L_088E54AC;
      }
      goto L_088E54A8;
    }
L_088E54A8:
    aot_gpr[17] = (aot_gpr[17] & 7u);
    goto L_088E54AC;
L_088E54AC:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E54B8;
      }
      goto L_088E54B4;
    }
L_088E54B4:
    aot_gpr[5] = (0u | 1u);
    goto L_088E54B8;
L_088E54B8:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_088E54FC;
      }
      goto L_088E54C8;
    }
L_088E54C8:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(620));
    goto L_088E54CC;
L_088E54CC:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E54E0;
      }
      goto L_088E54D4;
    }
L_088E54D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E54E8;
      }
      goto L_088E54E0;
    }
L_088E54E0:
    aot_gpr[31] = (0x088E54E8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 84u, 0x088D27B0u>(ctx, &aot_mem) && ctx.pc == 0x088E54E8u) goto L_088E54E8;
    return;
L_088E54E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(616)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_088E54CC;
      }
      goto L_088E54FC;
    }
L_088E54FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5520:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(416)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088E556C;
      }
      goto L_088E5554;
    }
L_088E5554:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(32764)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E559C;
      }
      goto L_088E5564;
    }
L_088E5564:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(408)));
      if (branch_taken) {
          goto L_088E5574;
      }
      goto L_088E556C;
    }
L_088E556C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E56AC;
      }
      goto L_088E5574;
    }
L_088E5574:
    if (static_cast<std::int32_t>(aot_gpr[5]) >= 0) {
    aot_gpr[5] = (aot_gpr[5] & 7u);
        goto L_088E558C;
    }
    goto L_088E557C;
L_088E557C:
    aot_gpr[5] = (0u - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] & 7u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u - aot_gpr[5]);
      if (branch_taken) {
          goto L_088E558C;
      }
      goto L_088E558C;
    }
L_088E558C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-32764)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E55A0;
      }
      goto L_088E559C;
    }
L_088E559C:
    aot_gpr[4] = (0u | 1u);
    goto L_088E55A0;
L_088E55A0:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E55B4;
      }
      goto L_088E55AC;
    }
L_088E55AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E56AC;
      }
      goto L_088E55B4;
    }
L_088E55B4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E55C0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 158u, 0x088EED54u>(ctx, &aot_mem) && ctx.pc == 0x088E55C0u) goto L_088E55C0;
    return;
L_088E55C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088E56AC;
      }
      goto L_088E55D4;
    }
L_088E55D4:
    aot_gpr[18] = (aot_gpr[29] | 0u);
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(360));
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(488));
    aot_gpr[22] = (2218u << 16u);
    goto L_088E55E4;
L_088E55E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E5628;
      }
      goto L_088E55F0;
    }
L_088E55F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088E560Cu);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 89u, 0x08828D2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E560Cu) goto L_088E560C;
    return;
L_088E560C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088E5620u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 89u, 0x08828D2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5620u) goto L_088E5620;
    return;
L_088E5620:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_088E5694;
      }
      goto L_088E5628;
    }
L_088E5628:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E5668;
      }
      goto L_088E5630;
    }
L_088E5630:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088E564Cu);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 89u, 0x08828D2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E564Cu) goto L_088E564C;
    return;
L_088E564C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088E5660u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 89u, 0x08828D2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5660u) goto L_088E5660;
    return;
L_088E5660:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_088E5694;
      }
      goto L_088E5668;
    }
L_088E5668:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088E567Cu);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 104u, 0x08828E18u>(ctx, &aot_mem) && ctx.pc == 0x088E567Cu) goto L_088E567C;
    return;
L_088E567C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088E5690u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 104u, 0x08828E18u>(ctx, &aot_mem) && ctx.pc == 0x088E5690u) goto L_088E5690;
    return;
L_088E5690:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    goto L_088E5694;
L_088E5694:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088E55E4;
      }
      goto L_088E56AC;
    }
L_088E56AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E56D4:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(194))))));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[6]));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    jump_target = aot_gpr[31];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5714:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(972)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088E575Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E575Cu) goto L_088E575C;
    return;
L_088E575C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(972)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(104));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088E5778u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E5778u) goto L_088E5778;
    return;
L_088E5778:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088E57B4;
      }
      goto L_088E5780;
    }
L_088E5780:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(972)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088E579Cu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E579Cu) goto L_088E579C;
    return;
L_088E579C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E57A8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088E53C0;
L_088E57A8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E57B4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088E5520;
L_088E57B4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E57C0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_088E56D4;
L_088E57C0:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088E588C;
      }
      goto L_088E57C8;
    }
L_088E57C8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6928));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[5] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E588C;
      }
      goto L_088E57EC;
    }
L_088E57EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(81)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E588C;
      }
      goto L_088E57F8;
    }
L_088E57F8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E588C;
      }
      goto L_088E5810;
    }
L_088E5810:
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[17] | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[29] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088E584Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088E56D4;
L_088E584C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088E588Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 154u, 0x08918F1Cu>(ctx, &aot_mem) && ctx.pc == 0x088E588Cu) goto L_088E588C;
    return;
L_088E588C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(194))))));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x088E58A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x088E58A0u) goto L_088E58A0;
    return;
L_088E58A0:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E58BC;
      }
      goto L_088E58A8;
    }
L_088E58A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E58BC;
      }
      goto L_088E58B4;
    }
L_088E58B4:
    aot_gpr[31] = (0x088E58BCu);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(194))))));
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 167u, 0x088CFE38u>(ctx, &aot_mem) && ctx.pc == 0x088E58BCu) goto L_088E58BC;
    return;
L_088E58BC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(856)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E58D8;
      }
      goto L_088E58C8;
    }
L_088E58C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E58D8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 23u, 0x088DE1B0u>(ctx, &aot_mem) && ctx.pc == 0x088E58D8u) goto L_088E58D8;
    return;
L_088E58D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E58F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088E5908u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    goto L_088E56D4;
L_088E5908:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5914:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(856)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5930;
      }
      goto L_088E5928;
    }
L_088E5928:
    aot_gpr[31] = (0x088E5930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 54u, 0x088DE458u>(ctx, &aot_mem) && ctx.pc == 0x088E5930u) goto L_088E5930;
    return;
L_088E5930:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E593C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(856)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5958;
      }
      goto L_088E5950;
    }
L_088E5950:
    aot_gpr[31] = (0x088E5958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 61u, 0x088DE4E0u>(ctx, &aot_mem) && ctx.pc == 0x088E5958u) goto L_088E5958;
    return;
L_088E5958:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5964:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (aot_gpr[8] & 255u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088E59F4;
      }
      goto L_088E59A0;
    }
L_088E59A0:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-11));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E59F4;
      }
      goto L_088E59B0;
    }
L_088E59B0:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-32424)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E59C8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E59D8;
      }
      goto L_088E59D0;
    }
L_088E59D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    goto L_088E59D8;
L_088E59D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E59F4;
      }
      goto L_088E59E0;
    }
L_088E59E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), aot_gpr[18]);
      if (branch_taken) {
          goto L_088E59F4;
      }
      goto L_088E59EC;
    }
L_088E59EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    goto L_088E59F4;
L_088E59F4:
    aot_gpr[5] = (aot_gpr[17] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
        goto L_088E5A54;
    }
    goto L_088E5A00;
L_088E5A00:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E5C3C;
      }
      goto L_088E5A08;
    }
L_088E5A08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5A4C;
      }
      goto L_088E5A1C;
    }
L_088E5A1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E5A38u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 180u, 0x088E2C48u>(ctx, &aot_mem) && ctx.pc == 0x088E5A38u) goto L_088E5A38;
    return;
L_088E5A38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E5A1C;
      }
      goto L_088E5A4C;
    }
L_088E5A4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5C3C;
      }
      goto L_088E5A54;
    }
L_088E5A54:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[19] = (1u << 16u);
      if (branch_taken) {
          goto L_088E5AC4;
      }
      goto L_088E5A78;
    }
L_088E5A78:
    aot_gpr[6] = (0u | 0u);
    goto L_088E5A7C;
L_088E5A7C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E5AB0;
      }
      goto L_088E5A94;
    }
L_088E5A94:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[8] | 32u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(88), aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    goto L_088E5AB0;
L_088E5AB0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E5A7C;
      }
      goto L_088E5AC4;
    }
L_088E5AC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5B6C;
      }
      goto L_088E5AD8;
    }
L_088E5AD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E5AE8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E5AE8u) goto L_088E5AE8;
    return;
L_088E5AE8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5B58;
      }
      goto L_088E5AF4;
    }
L_088E5AF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088E5B58;
      }
      goto L_088E5B10;
    }
L_088E5B10:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E5B44;
      }
      goto L_088E5B28;
    }
L_088E5B28:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[8] | 32u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(88), aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    goto L_088E5B44;
L_088E5B44:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E5B10;
      }
      goto L_088E5B58;
    }
L_088E5B58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E5AD8;
      }
      goto L_088E5B6C;
    }
L_088E5B6C:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[21] = (0u | 3u);
    aot_gpr[22] = (0u | 4u);
    goto L_088E5B78;
L_088E5B78:
    { const bool branch_taken = aot_gpr[20] != aot_gpr[21];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_088E5B94;
      }
      goto L_088E5B80;
    }
L_088E5B80:
    aot_gpr[5] = (0u | 5u);
    aot_gpr[31] = (0x088E5B8Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E5B8Cu) goto L_088E5B8C;
    return;
L_088E5B8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E5BC0;
      }
      goto L_088E5B94;
    }
L_088E5B94:
    { const bool branch_taken = aot_gpr[20] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_088E5BB0;
      }
      goto L_088E5B9C;
    }
L_088E5B9C:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088E5BA8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E5BA8u) goto L_088E5BA8;
    return;
L_088E5BA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E5BC0;
      }
      goto L_088E5BB0;
    }
L_088E5BB0:
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x088E5BBCu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E5BBCu) goto L_088E5BBC;
    return;
L_088E5BBC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088E5BC0;
L_088E5BC0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5C2C;
      }
      goto L_088E5BC8;
    }
L_088E5BC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088E5C2C;
      }
      goto L_088E5BE4;
    }
L_088E5BE4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E5C18;
      }
      goto L_088E5BFC;
    }
L_088E5BFC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[8] | 32u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(88), aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    goto L_088E5C18;
L_088E5C18:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E5BE4;
      }
      goto L_088E5C2C;
    }
L_088E5C2C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E5B78;
      }
      goto L_088E5C3C;
    }
L_088E5C3C:
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
L_088E5C64:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5C6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(194))))));
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 16u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E5CB4;
      }
      goto L_088E5CA0;
    }
L_088E5CA0:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088E5CBC;
      }
      goto L_088E5CAC;
    }
L_088E5CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5CC0;
      }
      goto L_088E5CB4;
    }
L_088E5CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5D9C;
      }
      goto L_088E5CBC;
    }
L_088E5CBC:
    aot_gpr[18] = (0u | 1u);
    goto L_088E5CC0;
L_088E5CC0:
    aot_gpr[4] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E5D04;
      }
      goto L_088E5CE0;
    }
L_088E5CE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(816)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088E5CF0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 23u, 0x088FF214u>(ctx, &aot_mem) && ctx.pc == 0x088E5CF0u) goto L_088E5CF0;
    return;
L_088E5CF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E5CE0;
      }
      goto L_088E5D04;
    }
L_088E5D04:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(972)));
      if (branch_taken) {
          goto L_088E5D5C;
      }
      goto L_088E5D14;
    }
L_088E5D14:
    aot_gpr[5] = (aot_gpr[17] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088E5D50u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E5D50u) goto L_088E5D50;
    return;
L_088E5D50:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(972)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_088E5D6C;
      }
      goto L_088E5D5C;
    }
L_088E5D5C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr[5] = (aot_gpr[17] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    goto L_088E5D6C;
L_088E5D6C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088E5D7Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E5D7Cu) goto L_088E5D7C;
    return;
L_088E5D7C:
    aot_gpr[31] = (0x088E5D84u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 48u, 0x088E33C0u>(ctx, &aot_mem) && ctx.pc == 0x088E5D84u) goto L_088E5D84;
    return;
L_088E5D84:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(856)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5D9C;
      }
      goto L_088E5D90;
    }
L_088E5D90:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E5D9Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 16u, 0x088DE104u>(ctx, &aot_mem) && ctx.pc == 0x088E5D9Cu) goto L_088E5D9C;
    return;
L_088E5D9C:
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
L_088E5DC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-3952)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088E5DFC;
      }
      goto L_088E5DE0;
    }
L_088E5DE0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E5DF4u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_088E5C6C;
L_088E5DF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5EB8;
      }
      goto L_088E5DFC;
    }
L_088E5DFC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(192))))));
    aot_gpr[7] = (aot_gpr[7] & 512u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E5E38;
      }
      goto L_088E5E18;
    }
L_088E5E18:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[7] << 16u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    aot_gpr[31] = (0x088E5E30u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    goto L_088E5C6C;
L_088E5E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5EB8;
      }
      goto L_088E5E38;
    }
L_088E5E38:
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-32768)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088E5EA0;
      }
      goto L_088E5E70;
    }
L_088E5E70:
    aot_gpr[8] = (aot_gpr[6] | 0u);
    goto L_088E5E74;
L_088E5E74:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E5E90;
      }
      goto L_088E5E88;
    }
L_088E5E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5EA0;
      }
      goto L_088E5E90;
    }
L_088E5E90:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E5E74;
      }
      goto L_088E5EA0;
    }
L_088E5EA0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    aot_gpr[31] = (0x088E5EB8u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_088E5C6C;
L_088E5EB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5EC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[5] = (aot_gpr[4] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_088E5F3C;
      }
      goto L_088E5F10;
    }
L_088E5F10:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-6492)));
    aot_gpr[7] = (16204u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(128)));
    aot_gpr[6] = (aot_gpr[7] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[6] = (2216u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-32768), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-32768), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088E5F3C;
L_088E5F3C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088E5F4Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_088E5DC0;
L_088E5F4C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5F58:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[7] = (aot_gpr[7] & 8u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_088E5FBC;
      }
      goto L_088E5F70;
    }
L_088E5F70:
    aot_gpr[7] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(816)));
    aot_gpr[9] = (0u | 1u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[9];
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[6]);
      if (branch_taken) {
          goto L_088E5FBC;
      }
      goto L_088E5F8C;
    }
L_088E5F8C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(832)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_088E5FBC;
      }
      goto L_088E5F98;
    }
L_088E5F98:
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(832), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(780));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_088E5FC4;
      }
      goto L_088E5FB4;
    }
L_088E5FB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5FE8;
      }
      goto L_088E5FBC;
    }
L_088E5FBC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 4u, 0x088E6028u>(ctx, &aot_mem); return;
      }
      goto L_088E5FC4;
    }
L_088E5FC4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (16128u << 16u);
      if (branch_taken) {
          goto L_088E5FD4;
      }
      goto L_088E5FCC;
    }
L_088E5FCC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
      if (branch_taken) {
          goto L_088E5FD8;
      }
      goto L_088E5FD4;
    }
L_088E5FD4:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    goto L_088E5FD8;
L_088E5FD8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (aot_gpr[9] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(88), aot_gpr[9]);
    goto L_088E5FE8;
L_088E5FE8:
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(836)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 2u, 0x088E6010u>(ctx, &aot_mem); return;
      }
      goto L_088E5FF4;
    }
L_088E5FF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.pc = 0x088E6000u; return;
}

void recomp_unit_0225(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0225_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_225(Runtime &runtime) {
    runtime.register_generated_unit(225u, 0x088E5000u, 4096u, &recomp_unit_0225, &recomp_unit_0225_entry);
    runtime.register_function(0x088E5000u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E500Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5020u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5050u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5068u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5078u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5084u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E50A8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E50BCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E50D0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E50D8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E50ECu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E50F8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5100u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E510Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5114u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5130u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E513Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5144u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E515Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E51A0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E51B0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E51C4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E51D0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E51D8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E51E0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E51ECu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E51FCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5208u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5210u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5224u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E522Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5240u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5254u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5258u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5260u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5268u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5280u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5294u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E52A0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E52A8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E52BCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E52DCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E531Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5328u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E536Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E537Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5380u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5394u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E53A0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E53ACu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E53C0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E53F4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5408u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5410u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E541Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5420u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E542Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5438u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5444u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5450u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E545Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5478u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5488u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5498u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E54A8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E54ACu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E54B4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E54B8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E54C8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E54CCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E54D4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E54E0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E54E8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E54FCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5520u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5554u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5564u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E556Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5574u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E557Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E558Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E559Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E55A0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E55ACu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E55B4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E55C0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E55D4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E55E4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E55F0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E560Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5620u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5628u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5630u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E564Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5660u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5668u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E567Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5690u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5694u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E56ACu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E56D4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5714u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E575Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5778u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5780u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E579Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E57A8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E57B4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E57C0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E57C8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E57ECu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E57F8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5810u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E584Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E588Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E58A0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E58A8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E58B4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E58BCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E58C8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E58D8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E58F8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5908u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5914u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5928u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5930u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E593Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5950u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5958u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5964u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E59A0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E59B0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E59C8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E59D0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E59D8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E59E0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E59ECu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E59F4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5A00u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5A08u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5A1Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5A38u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5A4Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5A54u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5A78u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5A7Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5A94u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5AB0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5AC4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5AD8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5AE8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5AF4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5B10u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5B28u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5B44u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5B58u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5B6Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5B78u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5B80u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5B8Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5B94u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5B9Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5BA8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5BB0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5BBCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5BC0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5BC8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5BE4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5BFCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5C18u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5C2Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5C3Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5C64u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5C6Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5CA0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5CACu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5CB4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5CBCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5CC0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5CE0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5CF0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5D04u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5D14u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5D50u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5D5Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5D6Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5D7Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5D84u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5D90u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5D9Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5DC0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5DE0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5DF4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5DFCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5E18u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5E30u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5E38u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5E70u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5E74u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5E88u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5E90u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5EA0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5EB8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5EC4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5F10u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5F3Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5F4Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5F58u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5F70u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5F8Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5F98u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5FB4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5FBCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5FC4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5FCCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5FD4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5FD8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5FE8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x088E5FF4u, &recomp_unit_0225, "recomp_unit_0225");
}
} // namespace psprecomp
