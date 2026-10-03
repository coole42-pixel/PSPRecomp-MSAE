#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0073[1023] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 19, 0, 20, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0,
    0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 30, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37,
    0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 43, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 65, 0, 0, 0, 66, 67, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0,
    0, 0, 72, 73, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 79, 0,
    0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 85, 0, 0, 0, 0, 0, 86,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 91, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96, 97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 107, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 109, 0, 0, 110, 111, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0,
    0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0,
    0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0,
    0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163,
    0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0,
    0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0,
    187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0,
    196, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    202, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0,
    208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219,
};
void recomp_unit_0073_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0884D000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0073[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0884D000;
    case 2u: goto L_0884D008;
    case 3u: goto L_0884D054;
    case 4u: goto L_0884D064;
    case 5u: goto L_0884D070;
    case 6u: goto L_0884D098;
    case 7u: goto L_0884D0A4;
    case 8u: goto L_0884D0B0;
    case 9u: goto L_0884D0B4;
    case 10u: goto L_0884D0E4;
    case 11u: goto L_0884D0F0;
    case 12u: goto L_0884D0FC;
    case 13u: goto L_0884D104;
    case 14u: goto L_0884D130;
    case 15u: goto L_0884D13C;
    case 16u: goto L_0884D148;
    case 17u: goto L_0884D150;
    case 18u: goto L_0884D17C;
    case 19u: goto L_0884D188;
    case 20u: goto L_0884D190;
    case 21u: goto L_0884D194;
    case 22u: goto L_0884D1BC;
    case 23u: goto L_0884D1D4;
    case 24u: goto L_0884D1E4;
    case 25u: goto L_0884D1F4;
    case 26u: goto L_0884D208;
    case 27u: goto L_0884D218;
    case 28u: goto L_0884D240;
    case 29u: goto L_0884D24C;
    case 30u: goto L_0884D264;
    case 31u: goto L_0884D268;
    case 32u: goto L_0884D298;
    case 33u: goto L_0884D2A4;
    case 34u: goto L_0884D2BC;
    case 35u: goto L_0884D2C4;
    case 36u: goto L_0884D2F0;
    case 37u: goto L_0884D2FC;
    case 38u: goto L_0884D314;
    case 39u: goto L_0884D31C;
    case 40u: goto L_0884D348;
    case 41u: goto L_0884D354;
    case 42u: goto L_0884D368;
    case 43u: goto L_0884D36C;
    case 44u: goto L_0884D388;
    case 45u: goto L_0884D3B0;
    case 46u: goto L_0884D3BC;
    case 47u: goto L_0884D3D0;
    case 48u: goto L_0884D3D4;
    case 49u: goto L_0884D3EC;
    case 50u: goto L_0884D414;
    case 51u: goto L_0884D420;
    case 52u: goto L_0884D430;
    case 53u: goto L_0884D434;
    case 54u: goto L_0884D450;
    case 55u: goto L_0884D45C;
    case 56u: goto L_0884D46C;
    case 57u: goto L_0884D470;
    case 58u: goto L_0884D494;
    case 59u: goto L_0884D4A0;
    case 60u: goto L_0884D4B0;
    case 61u: goto L_0884D4B4;
    case 62u: goto L_0884D4CC;
    case 63u: goto L_0884D4D8;
    case 64u: goto L_0884D500;
    case 65u: goto L_0884D50C;
    case 66u: goto L_0884D51C;
    case 67u: goto L_0884D520;
    case 68u: goto L_0884D538;
    case 69u: goto L_0884D544;
    case 70u: goto L_0884D56C;
    case 71u: goto L_0884D578;
    case 72u: goto L_0884D588;
    case 73u: goto L_0884D58C;
    case 74u: goto L_0884D5A4;
    case 75u: goto L_0884D5B0;
    case 76u: goto L_0884D5D8;
    case 77u: goto L_0884D5E4;
    case 78u: goto L_0884D5F4;
    case 79u: goto L_0884D5F8;
    case 80u: goto L_0884D610;
    case 81u: goto L_0884D61C;
    case 82u: goto L_0884D644;
    case 83u: goto L_0884D650;
    case 84u: goto L_0884D660;
    case 85u: goto L_0884D664;
    case 86u: goto L_0884D67C;
    case 87u: goto L_0884D688;
    case 88u: goto L_0884D6B0;
    case 89u: goto L_0884D6BC;
    case 90u: goto L_0884D6CC;
    case 91u: goto L_0884D6D0;
    case 92u: goto L_0884D6E8;
    case 93u: goto L_0884D6F4;
    case 94u: goto L_0884D71C;
    case 95u: goto L_0884D728;
    case 96u: goto L_0884D738;
    case 97u: goto L_0884D73C;
    case 98u: goto L_0884D754;
    case 99u: goto L_0884D760;
    case 100u: goto L_0884D788;
    case 101u: goto L_0884D794;
    case 102u: goto L_0884D7A4;
    case 103u: goto L_0884D7A8;
    case 104u: goto L_0884D7C4;
    case 105u: goto L_0884D7D0;
    case 106u: goto L_0884D7E0;
    case 107u: goto L_0884D7E4;
    case 108u: goto L_0884D808;
    case 109u: goto L_0884D814;
    case 110u: goto L_0884D820;
    case 111u: goto L_0884D824;
    case 112u: goto L_0884D83C;
    case 113u: goto L_0884D848;
    case 114u: goto L_0884D854;
    case 115u: goto L_0884D864;
    case 116u: goto L_0884D870;
    case 117u: goto L_0884D878;
    case 118u: goto L_0884D888;
    case 119u: goto L_0884D894;
    case 120u: goto L_0884D89C;
    case 121u: goto L_0884D8AC;
    case 122u: goto L_0884D8B8;
    case 123u: goto L_0884D8C0;
    case 124u: goto L_0884D8D0;
    case 125u: goto L_0884D8DC;
    case 126u: goto L_0884D8E8;
    case 127u: goto L_0884D8F8;
    case 128u: goto L_0884D904;
    case 129u: goto L_0884D90C;
    case 130u: goto L_0884D91C;
    case 131u: goto L_0884D928;
    case 132u: goto L_0884D930;
    case 133u: goto L_0884D940;
    case 134u: goto L_0884D94C;
    case 135u: goto L_0884D954;
    case 136u: goto L_0884D968;
    case 137u: goto L_0884D97C;
    case 138u: goto L_0884D990;
    case 139u: goto L_0884D9A4;
    case 140u: goto L_0884D9B4;
    case 141u: goto L_0884D9C4;
    case 142u: goto L_0884D9EC;
    case 143u: goto L_0884D9F8;
    case 144u: goto L_0884DA08;
    case 145u: goto L_0884DA14;
    case 146u: goto L_0884DA4C;
    case 147u: goto L_0884DA54;
    case 148u: goto L_0884DA64;
    case 149u: goto L_0884DA6C;
    case 150u: goto L_0884DA9C;
    case 151u: goto L_0884DABC;
    case 152u: goto L_0884DAF4;
    case 153u: goto L_0884DB00;
    case 154u: goto L_0884DB30;
    case 155u: goto L_0884DB3C;
    case 156u: goto L_0884DB54;
    case 157u: goto L_0884DB60;
    case 158u: goto L_0884DB80;
    case 159u: goto L_0884DB88;
    case 160u: goto L_0884DBD0;
    case 161u: goto L_0884DBE4;
    case 162u: goto L_0884DBF0;
    case 163u: goto L_0884DBFC;
    case 164u: goto L_0884DC08;
    case 165u: goto L_0884DC20;
    case 166u: goto L_0884DC2C;
    case 167u: goto L_0884DC6C;
    case 168u: goto L_0884DC8C;
    case 169u: goto L_0884DC98;
    case 170u: goto L_0884DCA4;
    case 171u: goto L_0884DCB4;
    case 172u: goto L_0884DCC0;
    case 173u: goto L_0884DCC8;
    case 174u: goto L_0884DCD0;
    case 175u: goto L_0884DCE0;
    case 176u: goto L_0884DCEC;
    case 177u: goto L_0884DCF8;
    case 178u: goto L_0884DD04;
    case 179u: goto L_0884DD10;
    case 180u: goto L_0884DD20;
    case 181u: goto L_0884DD34;
    case 182u: goto L_0884DD48;
    case 183u: goto L_0884DD50;
    case 184u: goto L_0884DD5C;
    case 185u: goto L_0884DD68;
    case 186u: goto L_0884DD78;
    case 187u: goto L_0884DD80;
    case 188u: goto L_0884DD94;
    case 189u: goto L_0884DD9C;
    case 190u: goto L_0884DDAC;
    case 191u: goto L_0884DDBC;
    case 192u: goto L_0884DDC8;
    case 193u: goto L_0884DDD4;
    case 194u: goto L_0884DDE8;
    case 195u: goto L_0884DDF8;
    case 196u: goto L_0884DE00;
    case 197u: goto L_0884DE0C;
    case 198u: goto L_0884DE24;
    case 199u: goto L_0884DE3C;
    case 200u: goto L_0884DE58;
    case 201u: goto L_0884DE70;
    case 202u: goto L_0884DE80;
    case 203u: goto L_0884DE8C;
    case 204u: goto L_0884DEA4;
    case 205u: goto L_0884DEBC;
    case 206u: goto L_0884DEDC;
    case 207u: goto L_0884DEF4;
    case 208u: goto L_0884DF00;
    case 209u: goto L_0884DF0C;
    case 210u: goto L_0884DF30;
    case 211u: goto L_0884DF3C;
    case 212u: goto L_0884DF58;
    case 213u: goto L_0884DF68;
    case 214u: goto L_0884DF7C;
    case 215u: goto L_0884DFA4;
    case 216u: goto L_0884DFC4;
    case 217u: goto L_0884DFD4;
    case 218u: goto L_0884DFE4;
    case 219u: goto L_0884DFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0884D000:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    goto L_0884D008;
L_0884D008:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[30]);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3400), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[30] = (aot_gpr[5] + static_cast<std::uint32_t>(-884));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-872));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0884D054u);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D054u) goto L_0884D054;
    return;
L_0884D054:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884D064u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D064u) goto L_0884D064;
    return;
L_0884D064:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3400)));
    aot_gpr[31] = (0x0884D070u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D070u) goto L_0884D070;
    return;
L_0884D070:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D098u);
    aot_gpr[6] = (0u | 44u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D098u) goto L_0884D098;
    return;
L_0884D098:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884D0B4;
      }
      goto L_0884D0A4;
    }
L_0884D0A4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884D0B0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 120u, 0x08827FBCu>(ctx, &aot_mem) && ctx.pc == 0x0884D0B0u) goto L_0884D0B0;
    return;
L_0884D0B0:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D0B4;
L_0884D0B4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3452), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D0E4u);
    aot_gpr[6] = (0u | 44u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D0E4u) goto L_0884D0E4;
    return;
L_0884D0E4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884D104;
      }
      goto L_0884D0F0;
    }
L_0884D0F0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884D0FCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 120u, 0x08827FBCu>(ctx, &aot_mem) && ctx.pc == 0x0884D0FCu) goto L_0884D0FC;
    return;
L_0884D0FC:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0884D104;
L_0884D104:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3456), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D130u);
    aot_gpr[6] = (0u | 44u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D130u) goto L_0884D130;
    return;
L_0884D130:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884D150;
      }
      goto L_0884D13C;
    }
L_0884D13C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884D148u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 120u, 0x08827FBCu>(ctx, &aot_mem) && ctx.pc == 0x0884D148u) goto L_0884D148;
    return;
L_0884D148:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0884D150;
L_0884D150:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3444), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D17Cu);
    aot_gpr[6] = (0u | 44u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D17Cu) goto L_0884D17C;
    return;
L_0884D17C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884D194;
      }
      goto L_0884D188;
    }
L_0884D188:
    aot_gpr[31] = (0x0884D190u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 120u, 0x08827FBCu>(ctx, &aot_mem) && ctx.pc == 0x0884D190u) goto L_0884D190;
    return;
L_0884D190:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D194;
L_0884D194:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[30]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3448), aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-860));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884D1BCu);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 149u, 0x08849EA4u>(ctx, &aot_mem) && ctx.pc == 0x0884D1BCu) goto L_0884D1BC;
    return;
L_0884D1BC:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[30] = (aot_gpr[4] + static_cast<std::uint32_t>(-840));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x0884D1D4u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 149u, 0x08849EA4u>(ctx, &aot_mem) && ctx.pc == 0x0884D1D4u) goto L_0884D1D4;
    return;
L_0884D1D4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884D1E4u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 149u, 0x08849EA4u>(ctx, &aot_mem) && ctx.pc == 0x0884D1E4u) goto L_0884D1E4;
    return;
L_0884D1E4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x0884D1F4u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 149u, 0x08849EA4u>(ctx, &aot_mem) && ctx.pc == 0x0884D1F4u) goto L_0884D1F4;
    return;
L_0884D1F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884D208u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 149u, 0x08849EA4u>(ctx, &aot_mem) && ctx.pc == 0x0884D208u) goto L_0884D208;
    return;
L_0884D208:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x0884D218u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 149u, 0x08849EA4u>(ctx, &aot_mem) && ctx.pc == 0x0884D218u) goto L_0884D218;
    return;
L_0884D218:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D240u);
    aot_gpr[6] = (0u | 80u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D240u) goto L_0884D240;
    return;
L_0884D240:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884D268;
      }
      goto L_0884D24C;
    }
L_0884D24C:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884D264u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-820));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x0883268Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D264u) goto L_0884D264;
    return;
L_0884D264:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D268;
L_0884D268:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3460), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D298u);
    aot_gpr[6] = (0u | 80u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D298u) goto L_0884D298;
    return;
L_0884D298:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884D2C4;
      }
      goto L_0884D2A4;
    }
L_0884D2A4:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884D2BCu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-820));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x0883268Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D2BCu) goto L_0884D2BC;
    return;
L_0884D2BC:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0884D2C4;
L_0884D2C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3464), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D2F0u);
    aot_gpr[6] = (0u | 80u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D2F0u) goto L_0884D2F0;
    return;
L_0884D2F0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884D31C;
      }
      goto L_0884D2FC;
    }
L_0884D2FC:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x0884D314u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-800));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x0883268Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D314u) goto L_0884D314;
    return;
L_0884D314:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0884D31C;
L_0884D31C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3468), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D348u);
    aot_gpr[6] = (0u | 80u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D348u) goto L_0884D348;
    return;
L_0884D348:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[7] = (2214u << 16u);
      if (branch_taken) {
          goto L_0884D36C;
      }
      goto L_0884D354;
    }
L_0884D354:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0884D368u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-780));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x0883268Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D368u) goto L_0884D368;
    return;
L_0884D368:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D36C;
L_0884D36C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3168), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x0884D388u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 163u, 0x08849F58u>(ctx, &aot_mem) && ctx.pc == 0x0884D388u) goto L_0884D388;
    return;
L_0884D388:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D3B0u);
    aot_gpr[6] = (0u | 80u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D3B0u) goto L_0884D3B0;
    return;
L_0884D3B0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D3D4;
      }
      goto L_0884D3BC;
    }
L_0884D3BC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0884D3D0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x0883268Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D3D0u) goto L_0884D3D0;
    return;
L_0884D3D0:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D3D4;
L_0884D3D4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3164), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0884D3ECu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 163u, 0x08849F58u>(ctx, &aot_mem) && ctx.pc == 0x0884D3ECu) goto L_0884D3EC;
    return;
L_0884D3EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D414u);
    aot_gpr[6] = (0u | 112u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D414u) goto L_0884D414;
    return;
L_0884D414:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D434;
      }
      goto L_0884D420;
    }
L_0884D420:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[31] = (0x0884D430u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 20u, 0x08830148u>(ctx, &aot_mem) && ctx.pc == 0x0884D430u) goto L_0884D430;
    return;
L_0884D430:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D434;
L_0884D434:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3104), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (0x0884D450u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D450u) goto L_0884D450;
    return;
L_0884D450:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
        goto L_0884D470;
    }
    goto L_0884D45C;
L_0884D45C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3104)));
    aot_gpr[31] = (0x0884D46Cu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D46Cu) goto L_0884D46C;
    return;
L_0884D46C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    goto L_0884D470;
L_0884D470:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D494u);
    aot_gpr[6] = (0u | 156u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D494u) goto L_0884D494;
    return;
L_0884D494:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D4B4;
      }
      goto L_0884D4A0;
    }
L_0884D4A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884D4B0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 62u, 0x08830618u>(ctx, &aot_mem) && ctx.pc == 0x0884D4B0u) goto L_0884D4B0;
    return;
L_0884D4B0:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D4B4;
L_0884D4B4:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3112), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[31] = (0x0884D4CCu);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D4CCu) goto L_0884D4CC;
    return;
L_0884D4CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3112)));
    aot_gpr[31] = (0x0884D4D8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D4D8u) goto L_0884D4D8;
    return;
L_0884D4D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D500u);
    aot_gpr[6] = (0u | 156u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D500u) goto L_0884D500;
    return;
L_0884D500:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D520;
      }
      goto L_0884D50C;
    }
L_0884D50C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[31] = (0x0884D51Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 62u, 0x08830618u>(ctx, &aot_mem) && ctx.pc == 0x0884D51Cu) goto L_0884D51C;
    return;
L_0884D51C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D520;
L_0884D520:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3124), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[31] = (0x0884D538u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D538u) goto L_0884D538;
    return;
L_0884D538:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3124)));
    aot_gpr[31] = (0x0884D544u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D544u) goto L_0884D544;
    return;
L_0884D544:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D56Cu);
    aot_gpr[6] = (0u | 156u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D56Cu) goto L_0884D56C;
    return;
L_0884D56C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D58C;
      }
      goto L_0884D578;
    }
L_0884D578:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[31] = (0x0884D588u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 62u, 0x08830618u>(ctx, &aot_mem) && ctx.pc == 0x0884D588u) goto L_0884D588;
    return;
L_0884D588:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D58C;
L_0884D58C:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3116), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[31] = (0x0884D5A4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D5A4u) goto L_0884D5A4;
    return;
L_0884D5A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3116)));
    aot_gpr[31] = (0x0884D5B0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D5B0u) goto L_0884D5B0;
    return;
L_0884D5B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D5D8u);
    aot_gpr[6] = (0u | 156u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D5D8u) goto L_0884D5D8;
    return;
L_0884D5D8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D5F8;
      }
      goto L_0884D5E4;
    }
L_0884D5E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[31] = (0x0884D5F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 62u, 0x08830618u>(ctx, &aot_mem) && ctx.pc == 0x0884D5F4u) goto L_0884D5F4;
    return;
L_0884D5F4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D5F8;
L_0884D5F8:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3120), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[31] = (0x0884D610u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D610u) goto L_0884D610;
    return;
L_0884D610:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3120)));
    aot_gpr[31] = (0x0884D61Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D61Cu) goto L_0884D61C;
    return;
L_0884D61C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D644u);
    aot_gpr[6] = (0u | 156u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D644u) goto L_0884D644;
    return;
L_0884D644:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D664;
      }
      goto L_0884D650;
    }
L_0884D650:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884D660u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 62u, 0x08830618u>(ctx, &aot_mem) && ctx.pc == 0x0884D660u) goto L_0884D660;
    return;
L_0884D660:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D664;
L_0884D664:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3128), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[31] = (0x0884D67Cu);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D67Cu) goto L_0884D67C;
    return;
L_0884D67C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3128)));
    aot_gpr[31] = (0x0884D688u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D688u) goto L_0884D688;
    return;
L_0884D688:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D6B0u);
    aot_gpr[6] = (0u | 156u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D6B0u) goto L_0884D6B0;
    return;
L_0884D6B0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D6D0;
      }
      goto L_0884D6BC;
    }
L_0884D6BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884D6CCu);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 62u, 0x08830618u>(ctx, &aot_mem) && ctx.pc == 0x0884D6CCu) goto L_0884D6CC;
    return;
L_0884D6CC:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D6D0;
L_0884D6D0:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3132), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (0x0884D6E8u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D6E8u) goto L_0884D6E8;
    return;
L_0884D6E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3132)));
    aot_gpr[31] = (0x0884D6F4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D6F4u) goto L_0884D6F4;
    return;
L_0884D6F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D71Cu);
    aot_gpr[6] = (0u | 156u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D71Cu) goto L_0884D71C;
    return;
L_0884D71C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D73C;
      }
      goto L_0884D728;
    }
L_0884D728:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884D738u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 62u, 0x08830618u>(ctx, &aot_mem) && ctx.pc == 0x0884D738u) goto L_0884D738;
    return;
L_0884D738:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D73C;
L_0884D73C:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3136), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (0x0884D754u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D754u) goto L_0884D754;
    return;
L_0884D754:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3136)));
    aot_gpr[31] = (0x0884D760u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D760u) goto L_0884D760;
    return;
L_0884D760:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D788u);
    aot_gpr[6] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D788u) goto L_0884D788;
    return;
L_0884D788:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D7A8;
      }
      goto L_0884D794;
    }
L_0884D794:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884D7A4u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 103u, 0x08830A94u>(ctx, &aot_mem) && ctx.pc == 0x0884D7A4u) goto L_0884D7A4;
    return;
L_0884D7A4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D7A8;
L_0884D7A8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3140), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[31] = (0x0884D7C4u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D7C4u) goto L_0884D7C4;
    return;
L_0884D7C4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
        goto L_0884D7E4;
    }
    goto L_0884D7D0;
L_0884D7D0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3140)));
    aot_gpr[31] = (0x0884D7E0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D7E0u) goto L_0884D7E0;
    return;
L_0884D7E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    goto L_0884D7E4;
L_0884D7E4:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884D808u);
    aot_gpr[6] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884D808u) goto L_0884D808;
    return;
L_0884D808:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884D824;
      }
      goto L_0884D814;
    }
L_0884D814:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0884D820u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 51u, 0x0883055Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D820u) goto L_0884D820;
    return;
L_0884D820:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884D824;
L_0884D824:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3108), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0884D83Cu);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D83Cu) goto L_0884D83C;
    return;
L_0884D83C:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D854;
      }
      goto L_0884D848;
    }
L_0884D848:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3108)));
    aot_gpr[31] = (0x0884D854u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D854u) goto L_0884D854;
    return;
L_0884D854:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x0884D864u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D864u) goto L_0884D864;
    return;
L_0884D864:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D878;
      }
      goto L_0884D870;
    }
L_0884D870:
    aot_gpr[31] = (0x0884D878u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3108)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D878u) goto L_0884D878;
    return;
L_0884D878:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[31] = (0x0884D888u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D888u) goto L_0884D888;
    return;
L_0884D888:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D89C;
      }
      goto L_0884D894;
    }
L_0884D894:
    aot_gpr[31] = (0x0884D89Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3108)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D89Cu) goto L_0884D89C;
    return;
L_0884D89C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x0884D8ACu);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D8ACu) goto L_0884D8AC;
    return;
L_0884D8AC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D8C0;
      }
      goto L_0884D8B8;
    }
L_0884D8B8:
    aot_gpr[31] = (0x0884D8C0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3108)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D8C0u) goto L_0884D8C0;
    return;
L_0884D8C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884D8D0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D8D0u) goto L_0884D8D0;
    return;
L_0884D8D0:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D8E8;
      }
      goto L_0884D8DC;
    }
L_0884D8DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3108)));
    aot_gpr[31] = (0x0884D8E8u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D8E8u) goto L_0884D8E8;
    return;
L_0884D8E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x0884D8F8u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D8F8u) goto L_0884D8F8;
    return;
L_0884D8F8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D90C;
      }
      goto L_0884D904;
    }
L_0884D904:
    aot_gpr[31] = (0x0884D90Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3108)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D90Cu) goto L_0884D90C;
    return;
L_0884D90C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0884D91Cu);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D91Cu) goto L_0884D91C;
    return;
L_0884D91C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D930;
      }
      goto L_0884D928;
    }
L_0884D928:
    aot_gpr[31] = (0x0884D930u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3108)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D930u) goto L_0884D930;
    return;
L_0884D930:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (0x0884D940u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D940u) goto L_0884D940;
    return;
L_0884D940:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D954;
      }
      goto L_0884D94C;
    }
L_0884D94C:
    aot_gpr[31] = (0x0884D954u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3108)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x0884D954u) goto L_0884D954;
    return;
L_0884D954:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[31] = (0x0884D968u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-640));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884D968u) goto L_0884D968;
    return;
L_0884D968:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884D97Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884D97Cu) goto L_0884D97C;
    return;
L_0884D97C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884D990u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-608));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884D990u) goto L_0884D990;
    return;
L_0884D990:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884D9A4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-592));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884D9A4u) goto L_0884D9A4;
    return;
L_0884D9A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884D9B4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884D9B4u) goto L_0884D9B4;
    return;
L_0884D9B4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25336)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884D9EC;
      }
      goto L_0884D9C4;
    }
L_0884D9C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0884D9EC;
L_0884D9EC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0884D9F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3472)));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 8u, 0x0886F0A0u>(ctx, &aot_mem) && ctx.pc == 0x0884D9F8u) goto L_0884D9F8;
    return;
L_0884D9F8:
    aot_gpr[16] = (0u | 32768u);
    aot_gpr[4] = (0u | 3u);
    aot_gpr[31] = (0x0884DA08u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 186u, 0x088C5C84u>(ctx, &aot_mem) && ctx.pc == 0x0884DA08u) goto L_0884DA08;
    return;
L_0884DA08:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0884DA14u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 186u, 0x088C5C84u>(ctx, &aot_mem) && ctx.pc == 0x0884DA14u) goto L_0884DA14;
    return;
L_0884DA14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-6988), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-6984), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x0884DA4Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26548), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 128u, 0x089438FCu>(ctx, &aot_mem) && ctx.pc == 0x0884DA4Cu) goto L_0884DA4C;
    return;
L_0884DA4C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884DA64;
      }
      goto L_0884DA54;
    }
L_0884DA54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (0u | 37u);
    aot_gpr[31] = (0x0884DA64u);
    aot_gpr[6] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 24u, 0x08894160u>(ctx, &aot_mem) && ctx.pc == 0x0884DA64u) goto L_0884DA64;
    return;
L_0884DA64:
    aot_gpr[31] = (0x0884DA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 40u, 0x0886D250u>(ctx, &aot_mem) && ctx.pc == 0x0884DA6Cu) goto L_0884DA6C;
    return;
L_0884DA6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884DA9C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23960), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884DABC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-552));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0884DAF4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-540));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884DAF4u) goto L_0884DAF4;
    return;
L_0884DAF4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884DB00u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884DB00u) goto L_0884DB00;
    return;
L_0884DB00:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5416)));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3504)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884DB30u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-528));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884DB30u) goto L_0884DB30;
    return;
L_0884DB30:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884DB3Cu);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884DB3Cu) goto L_0884DB3C;
    return;
L_0884DB3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884DB54u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-504));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884DB54u) goto L_0884DB54;
    return;
L_0884DB54:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884DB60u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884DB60u) goto L_0884DB60;
    return;
L_0884DB60:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[19]);
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
L_0884DB80:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884DB88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-576));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(556), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), aot_gpr[4]);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-552));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(536), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(540), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(544), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(548), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(552), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(560), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(564), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(568), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(572), aot_gpr[31]);
    aot_gpr[31] = (0x0884DBD0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884DBD0u) goto L_0884DBD0;
    return;
L_0884DBD0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884DBE4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-540));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884DBE4u) goto L_0884DBE4;
    return;
L_0884DBE4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884DBF0u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884DBF0u) goto L_0884DBF0;
    return;
L_0884DBF0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0884DBFCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 115u, 0x0881C828u>(ctx, &aot_mem) && ctx.pc == 0x0884DBFCu) goto L_0884DBFC;
    return;
L_0884DBFC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884DC08u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 124u, 0x0881C898u>(ctx, &aot_mem) && ctx.pc == 0x0884DC08u) goto L_0884DC08;
    return;
L_0884DC08:
    aot_gpr[30] = (2214u << 16u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-476));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884DC20u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884DC20u) goto L_0884DC20;
    return;
L_0884DC20:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884DC2Cu);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884DC2Cu) goto L_0884DC2C;
    return;
L_0884DC2C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-420));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(512), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-408));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-396));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[5]);
    aot_gpr[23] = (2214u << 16u);
    aot_gpr[20] = (57344u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-456));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[19] = (8192u << 16u);
      if (branch_taken) {
          goto L_0884DD9C;
      }
      goto L_0884DC6C;
    }
L_0884DC6C:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0884DCC8;
      }
      goto L_0884DC8C;
    }
L_0884DC8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(532), aot_gpr[19]);
    aot_gpr[31] = (0x0884DC98u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 197u, 0x0881CE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0884DC98u) goto L_0884DC98;
    return;
L_0884DC98:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884DCA4u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 198u, 0x0881CE28u>(ctx, &aot_mem) && ctx.pc == 0x0884DCA4u) goto L_0884DCA4;
    return;
L_0884DCA4:
    aot_gpr[5] = (aot_gpr[2] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x0884DCB4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884DCB4u) goto L_0884DCB4;
    return;
L_0884DCB4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884DCC0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0884DCC0u) goto L_0884DCC0;
    return;
L_0884DCC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
      if (branch_taken) {
          goto L_0884DD80;
      }
      goto L_0884DCC8;
    }
L_0884DCC8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DD50;
      }
      goto L_0884DCD0;
    }
L_0884DCD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(532), aot_gpr[19]);
    aot_gpr[4] = (0u | 323u);
    aot_gpr[31] = (0x0884DCE0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884DCE0u) goto L_0884DCE0;
    return;
L_0884DCE0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0884DCECu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0884DCECu) goto L_0884DCEC;
    return;
L_0884DCEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x0884DCF8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 155u, 0x0881BD88u>(ctx, &aot_mem) && ctx.pc == 0x0884DCF8u) goto L_0884DCF8;
    return;
L_0884DCF8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884DD04u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 1u, 0x0881C004u>(ctx, &aot_mem) && ctx.pc == 0x0884DD04u) goto L_0884DD04;
    return;
L_0884DD04:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884DD10u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 2u, 0x0881C020u>(ctx, &aot_mem) && ctx.pc == 0x0884DD10u) goto L_0884DD10;
    return;
L_0884DD10:
    aot_gpr[5] = (aot_gpr[2] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x0884DD20u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884DD20u) goto L_0884DD20;
    return;
L_0884DD20:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884DD34u);
    aot_gpr[6] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0884DD34u) goto L_0884DD34;
    return;
L_0884DD34:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(383), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0884DD48u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0884DD48u) goto L_0884DD48;
    return;
L_0884DD48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
      if (branch_taken) {
          goto L_0884DD80;
      }
      goto L_0884DD50;
    }
L_0884DD50:
    aot_gpr[4] = (0u | 322u);
    aot_gpr[31] = (0x0884DD5Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884DD5Cu) goto L_0884DD5C;
    return;
L_0884DD5C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0884DD68u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0884DD68u) goto L_0884DD68;
    return;
L_0884DD68:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884DD78u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0884DD78u) goto L_0884DD78;
    return;
L_0884DD78:
    aot_gpr[31] = (0x0884DD80u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 169u, 0x0886CA58u>(ctx, &aot_mem) && ctx.pc == 0x0884DD80u) goto L_0884DD80;
    return;
L_0884DD80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884DD94u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 62u, 0x08894440u>(ctx, &aot_mem) && ctx.pc == 0x0884DD94u) goto L_0884DD94;
    return;
L_0884DD94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DDAC;
      }
      goto L_0884DD9C;
    }
L_0884DD9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_0884DDAC;
L_0884DDAC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884DDBCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-432));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884DDBCu) goto L_0884DDBC;
    return;
L_0884DDBC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884DDC8u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884DDC8u) goto L_0884DDC8;
    return;
L_0884DDC8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
      if (branch_taken) {
          goto L_0884DDE8;
      }
      goto L_0884DDD4;
    }
L_0884DDD4:
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (0u | 140u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0884DDF8;
      }
      goto L_0884DDE8;
    }
L_0884DDE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_0884DDF8;
L_0884DDF8:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DE80;
      }
      goto L_0884DE00;
    }
L_0884DE00:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884DE0Cu);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884DE0Cu) goto L_0884DE0C;
    return;
L_0884DE0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0884DE24u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884DE24u) goto L_0884DE24;
    return;
L_0884DE24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0884DE3Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884DE3Cu) goto L_0884DE3C;
    return;
L_0884DE3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x0884DE58u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884DE58u) goto L_0884DE58;
    return;
L_0884DE58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x0884DE70u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884DE70u) goto L_0884DE70;
    return;
L_0884DE70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0884DF00;
      }
      goto L_0884DE80;
    }
L_0884DE80:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884DE8Cu);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884DE8Cu) goto L_0884DE8C;
    return;
L_0884DE8C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0884DEA4u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884DEA4u) goto L_0884DEA4;
    return;
L_0884DEA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0884DEBCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884DEBCu) goto L_0884DEBC;
    return;
L_0884DEBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x0884DEDCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884DEDCu) goto L_0884DEDC;
    return;
L_0884DEDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x0884DEF4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884DEF4u) goto L_0884DEF4;
    return;
L_0884DEF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0884DF00;
L_0884DF00:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884DF0Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884DF0Cu) goto L_0884DF0C;
    return;
L_0884DF0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 6u, 0x0884E048u>(ctx, &aot_mem); return;
      }
      goto L_0884DF30;
    }
L_0884DF30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884DF3Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884DF3Cu) goto L_0884DF3C;
    return;
L_0884DF3C:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(384));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884DF58u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-376));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0884DF58u) goto L_0884DF58;
    return;
L_0884DF58:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0884DFE4;
      }
      goto L_0884DF68;
    }
L_0884DF68:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-356));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884DF7Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884DF7Cu) goto L_0884DF7C;
    return;
L_0884DF7C:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[7] + static_cast<std::uint32_t>(-332));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884DFA4u);
    aot_gpr[10] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 18u, 0x0884A104u>(ctx, &aot_mem) && ctx.pc == 0x0884DFA4u) goto L_0884DFA4;
    return;
L_0884DFA4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884DFC4u);
    aot_gpr[10] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 18u, 0x0884A104u>(ctx, &aot_mem) && ctx.pc == 0x0884DFC4u) goto L_0884DFC4;
    return;
L_0884DFC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884DFD4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884DFD4u) goto L_0884DFD4;
    return;
L_0884DFD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 6u, 0x0884E048u>(ctx, &aot_mem); return;
      }
      goto L_0884DFE4;
    }
L_0884DFE4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-312));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 2u, 0x0884E00Cu>(ctx, &aot_mem); return;
      }
      goto L_0884DFF8;
    }
L_0884DFF8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884E004u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 36u, 0x0884A250u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0073(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0073_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_73(Runtime &runtime) {
    runtime.register_generated_unit(73u, 0x0884D000u, 4096u, &recomp_unit_0073, &recomp_unit_0073_entry);
    runtime.register_function(0x0884D000u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D008u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D054u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D064u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D070u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D098u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D0A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D0B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D0B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D0E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D0F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D0FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D104u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D130u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D13Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D148u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D150u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D17Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D188u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D190u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D194u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D1BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D1D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D1E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D1F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D208u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D218u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D240u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D24Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D264u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D268u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D298u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D2A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D2BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D2C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D2F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D2FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D314u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D31Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D348u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D354u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D368u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D36Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D388u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D3B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D3BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D3D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D3D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D3ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D414u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D420u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D430u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D434u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D450u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D45Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D46Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D470u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D494u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D4A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D4B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D4B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D4CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D4D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D500u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D50Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D51Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D520u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D538u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D544u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D56Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D578u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D588u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D58Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D5A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D5B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D5D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D5E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D5F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D5F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D610u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D61Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D644u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D650u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D660u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D664u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D67Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D688u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D6B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D6BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D6CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D6D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D6E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D6F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D71Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D728u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D738u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D73Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D754u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D760u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D788u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D794u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D7A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D7A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D7C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D7D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D7E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D7E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D808u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D814u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D820u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D824u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D83Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D848u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D854u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D864u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D870u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D878u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D888u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D894u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D89Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D8ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D8B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D8C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D8D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D8DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D8E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D8F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D904u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D90Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D91Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D928u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D930u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D940u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D94Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D954u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D968u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D97Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D990u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D9A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D9B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D9C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D9ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884D9F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DA08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DA14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DA4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DA54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DA64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DA6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DA9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DABCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DAF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DB00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DB30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DB3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DB54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DB60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DB80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DB88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DBD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DBE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DBF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DBFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DC08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DC20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DC2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DC6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DC8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DC98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DCA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DCB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DCC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DCC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DCD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DCE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DCECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DCF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DD04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DD10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DD20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DD34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DD48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DD50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DD5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DD68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DD78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DD80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DD94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DD9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DDACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DDBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DDC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DDD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DDE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DDF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DE00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DE0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DE24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DE3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DE58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DE70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DE80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DE8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DEA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DEBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DEDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DEF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DF00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DF0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DF30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DF3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DF58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DF68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DF7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DFA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DFC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DFD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DFE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0884DFF8u, &recomp_unit_0073, "recomp_unit_0073");
}
} // namespace psprecomp
