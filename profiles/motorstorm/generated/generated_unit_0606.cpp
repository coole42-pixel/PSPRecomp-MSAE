#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0606[1016] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 9,
    10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0,
    14, 0, 15, 16, 17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 25, 0, 0,
    0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0,
    54, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 63, 0, 0,
    64, 0, 0, 0, 65, 0, 0, 0, 66, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 71, 0, 0, 72, 73, 0, 74, 0, 0, 75, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 79, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 84, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 105, 0,
    0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0,
    0, 120, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0,
    0, 0, 128, 129, 0, 0, 0, 130, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0,
    0, 137, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 142, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0,
    0, 0, 154, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167,
    168, 169, 170, 171, 172, 173, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 178, 0, 0, 0,
    0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 187, 0, 188, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 193, 0, 0, 194, 0, 195, 0,
    0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204,
    0, 0, 0, 205, 0, 0, 206, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 210, 211, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 0, 0, 219, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 230,
};
void recomp_unit_0606_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A62000u;
        entry_id = (entry_delta < 4064u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0606[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A62000;
    case 2u: goto L_08A6200C;
    case 3u: goto L_08A62020;
    case 4u: goto L_08A62030;
    case 5u: goto L_08A62050;
    case 6u: goto L_08A62060;
    case 7u: goto L_08A62068;
    case 8u: goto L_08A62078;
    case 9u: goto L_08A6207C;
    case 10u: goto L_08A62080;
    case 11u: goto L_08A62084;
    case 12u: goto L_08A620E0;
    case 13u: goto L_08A620F0;
    case 14u: goto L_08A62100;
    case 15u: goto L_08A62108;
    case 16u: goto L_08A6210C;
    case 17u: goto L_08A62110;
    case 18u: goto L_08A6211C;
    case 19u: goto L_08A62124;
    case 20u: goto L_08A62130;
    case 21u: goto L_08A62140;
    case 22u: goto L_08A62144;
    case 23u: goto L_08A6215C;
    case 24u: goto L_08A62170;
    case 25u: goto L_08A62174;
    case 26u: goto L_08A62184;
    case 27u: goto L_08A6218C;
    case 28u: goto L_08A621A8;
    case 29u: goto L_08A621BC;
    case 30u: goto L_08A621C4;
    case 31u: goto L_08A621D4;
    case 32u: goto L_08A621DC;
    case 33u: goto L_08A621F4;
    case 34u: goto L_08A62210;
    case 35u: goto L_08A62224;
    case 36u: goto L_08A62234;
    case 37u: goto L_08A6223C;
    case 38u: goto L_08A62278;
    case 39u: goto L_08A62288;
    case 40u: goto L_08A62298;
    case 41u: goto L_08A622B0;
    case 42u: goto L_08A622C0;
    case 43u: goto L_08A622C8;
    case 44u: goto L_08A622E0;
    case 45u: goto L_08A622F0;
    case 46u: goto L_08A62304;
    case 47u: goto L_08A62318;
    case 48u: goto L_08A62328;
    case 49u: goto L_08A62338;
    case 50u: goto L_08A62344;
    case 51u: goto L_08A62350;
    case 52u: goto L_08A62364;
    case 53u: goto L_08A62374;
    case 54u: goto L_08A62380;
    case 55u: goto L_08A6238C;
    case 56u: goto L_08A62398;
    case 57u: goto L_08A623A8;
    case 58u: goto L_08A623B4;
    case 59u: goto L_08A623C0;
    case 60u: goto L_08A623D0;
    case 61u: goto L_08A623E4;
    case 62u: goto L_08A623F0;
    case 63u: goto L_08A623F4;
    case 64u: goto L_08A62400;
    case 65u: goto L_08A62410;
    case 66u: goto L_08A62420;
    case 67u: goto L_08A62424;
    case 68u: goto L_08A62434;
    case 69u: goto L_08A62440;
    case 70u: goto L_08A62450;
    case 71u: goto L_08A62454;
    case 72u: goto L_08A62460;
    case 73u: goto L_08A62464;
    case 74u: goto L_08A6246C;
    case 75u: goto L_08A62478;
    case 76u: goto L_08A62490;
    case 77u: goto L_08A624A4;
    case 78u: goto L_08A624B8;
    case 79u: goto L_08A624BC;
    case 80u: goto L_08A624C0;
    case 81u: goto L_08A624CC;
    case 82u: goto L_08A624E0;
    case 83u: goto L_08A624FC;
    case 84u: goto L_08A62510;
    case 85u: goto L_08A62514;
    case 86u: goto L_08A62524;
    case 87u: goto L_08A62530;
    case 88u: goto L_08A62540;
    case 89u: goto L_08A6254C;
    case 90u: goto L_08A6256C;
    case 91u: goto L_08A62588;
    case 92u: goto L_08A625A8;
    case 93u: goto L_08A625C0;
    case 94u: goto L_08A625C4;
    case 95u: goto L_08A625D4;
    case 96u: goto L_08A625E8;
    case 97u: goto L_08A625FC;
    case 98u: goto L_08A62610;
    case 99u: goto L_08A6261C;
    case 100u: goto L_08A6262C;
    case 101u: goto L_08A6263C;
    case 102u: goto L_08A6264C;
    case 103u: goto L_08A62660;
    case 104u: goto L_08A62670;
    case 105u: goto L_08A62678;
    case 106u: goto L_08A62688;
    case 107u: goto L_08A62690;
    case 108u: goto L_08A626AC;
    case 109u: goto L_08A626B8;
    case 110u: goto L_08A626C8;
    case 111u: goto L_08A626E8;
    case 112u: goto L_08A626EC;
    case 113u: goto L_08A62710;
    case 114u: goto L_08A62714;
    case 115u: goto L_08A62724;
    case 116u: goto L_08A62738;
    case 117u: goto L_08A62748;
    case 118u: goto L_08A62764;
    case 119u: goto L_08A6276C;
    case 120u: goto L_08A62784;
    case 121u: goto L_08A62788;
    case 122u: goto L_08A62798;
    case 123u: goto L_08A627B0;
    case 124u: goto L_08A627BC;
    case 125u: goto L_08A627D8;
    case 126u: goto L_08A627E8;
    case 127u: goto L_08A627F8;
    case 128u: goto L_08A62808;
    case 129u: goto L_08A6280C;
    case 130u: goto L_08A6281C;
    case 131u: goto L_08A62820;
    case 132u: goto L_08A62834;
    case 133u: goto L_08A62848;
    case 134u: goto L_08A62858;
    case 135u: goto L_08A62864;
    case 136u: goto L_08A62874;
    case 137u: goto L_08A62884;
    case 138u: goto L_08A62888;
    case 139u: goto L_08A62898;
    case 140u: goto L_08A628A8;
    case 141u: goto L_08A628B8;
    case 142u: goto L_08A628BC;
    case 143u: goto L_08A628C8;
    case 144u: goto L_08A628D8;
    case 145u: goto L_08A628E0;
    case 146u: goto L_08A628F4;
    case 147u: goto L_08A6290C;
    case 148u: goto L_08A6291C;
    case 149u: goto L_08A62938;
    case 150u: goto L_08A6293C;
    case 151u: goto L_08A62958;
    case 152u: goto L_08A62968;
    case 153u: goto L_08A62974;
    case 154u: goto L_08A62988;
    case 155u: goto L_08A6298C;
    case 156u: goto L_08A629AC;
    case 157u: goto L_08A629C0;
    case 158u: goto L_08A629D8;
    case 159u: goto L_08A629DC;
    case 160u: goto L_08A629E0;
    case 161u: goto L_08A629E4;
    case 162u: goto L_08A629E8;
    case 163u: goto L_08A629EC;
    case 164u: goto L_08A629F0;
    case 165u: goto L_08A629F4;
    case 166u: goto L_08A629F8;
    case 167u: goto L_08A629FC;
    case 168u: goto L_08A62A00;
    case 169u: goto L_08A62A04;
    case 170u: goto L_08A62A08;
    case 171u: goto L_08A62A0C;
    case 172u: goto L_08A62A10;
    case 173u: goto L_08A62A14;
    case 174u: goto L_08A62A2C;
    case 175u: goto L_08A62A38;
    case 176u: goto L_08A62A58;
    case 177u: goto L_08A62A68;
    case 178u: goto L_08A62A70;
    case 179u: goto L_08A62A8C;
    case 180u: goto L_08A62A98;
    case 181u: goto L_08A62C34;
    case 182u: goto L_08A62CB8;
    case 183u: goto L_08A62D10;
    case 184u: goto L_08A62D18;
    case 185u: goto L_08A62D20;
    case 186u: goto L_08A62D28;
    case 187u: goto L_08A62D2C;
    case 188u: goto L_08A62D34;
    case 189u: goto L_08A62D40;
    case 190u: goto L_08A62D48;
    case 191u: goto L_08A62D50;
    case 192u: goto L_08A62D58;
    case 193u: goto L_08A62D64;
    case 194u: goto L_08A62D70;
    case 195u: goto L_08A62D78;
    case 196u: goto L_08A62D88;
    case 197u: goto L_08A62D90;
    case 198u: goto L_08A62D9C;
    case 199u: goto L_08A62DA8;
    case 200u: goto L_08A62DB0;
    case 201u: goto L_08A62DC4;
    case 202u: goto L_08A62DD0;
    case 203u: goto L_08A62DE8;
    case 204u: goto L_08A62DFC;
    case 205u: goto L_08A62E0C;
    case 206u: goto L_08A62E18;
    case 207u: goto L_08A62E1C;
    case 208u: goto L_08A62E28;
    case 209u: goto L_08A62E80;
    case 210u: goto L_08A62E84;
    case 211u: goto L_08A62E88;
    case 212u: goto L_08A62E98;
    case 213u: goto L_08A62EA4;
    case 214u: goto L_08A62EAC;
    case 215u: goto L_08A62EC4;
    case 216u: goto L_08A62ED0;
    case 217u: goto L_08A62EDC;
    case 218u: goto L_08A62EFC;
    case 219u: goto L_08A62F18;
    case 220u: goto L_08A62F1C;
    case 221u: goto L_08A62F34;
    case 222u: goto L_08A62F44;
    case 223u: goto L_08A62F5C;
    case 224u: goto L_08A62F70;
    case 225u: goto L_08A62F88;
    case 226u: goto L_08A62FA0;
    case 227u: goto L_08A62FB8;
    case 228u: goto L_08A62FD0;
    case 229u: goto L_08A62FD8;
    case 230u: goto L_08A62FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A62000:
    rt.unsupported(0x08A62000u, 0x676E6972u, "vfpu1 not lowered yet"); return;
L_08A6200C:
    rt.unsupported(0x08A6200Cu, 0x69647541u, "unknown not lowered yet"); return;
L_08A62020:
    rt.unsupported(0x08A62020u, 0x6E756F53u, "vfpu3 not lowered yet"); return;
L_08A62030:
    rt.unsupported(0x08A62030u, 0x6973754Du, "unknown not lowered yet"); return;
L_08A62050:
    rt.unsupported(0x08A62050u, 0x736F6847u, "unknown not lowered yet"); return;
L_08A62060:
    rt.unsupported(0x08A62060u, 0x6E616C42u, "vfpu3 not lowered yet"); return;
L_08A62068:
    rt.unsupported(0x08A62068u, 0x736F6847u, "unknown not lowered yet"); return;
L_08A62078:
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[3]) * static_cast<std::uint64_t>(aot_gpr[19]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    goto L_08A6207C;
L_08A6207C:
    rt.unsupported(0x08A6207Cu, 0x00006F4Eu, "special? not lowered yet"); return;
L_08A62080:
    aot_gpr[14] = (0u | aot_gpr[10]);
    goto L_08A62084;
L_08A62084:
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(29477));
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(8307));
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(10611));
    rt.unsupported(0x08A62090u, 0x73250A73u, "unknown not lowered yet"); return;
L_08A620E0:
    rt.unsupported(0x08A620E0u, 0x736F6847u, "unknown not lowered yet"); return;
L_08A620F0:
    rt.unsupported(0x08A620F0u, 0x736F6847u, "unknown not lowered yet"); return;
L_08A62100:
    if (aot_gpr[26] == aot_gpr[15]) {
    rt.unsupported(0x08A62104u, 0x49422E54u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0624_entry, 624u, 13u, 0x08A74220u>(ctx, &aot_mem); return;
    }
    goto L_08A62108;
L_08A62108:
    rt.unsupported(0x08A62108u, 0x0000004Eu, "special? not lowered yet"); return;
L_08A6210C:
    // nop
    goto L_08A62110;
L_08A62110:
    rt.unsupported(0x08A62110u, 0x41544144u, "unknown not lowered yet"); return;
L_08A6211C:
    if (static_cast<std::int32_t>(aot_gpr[2]) > 0) {
    aot_gpr[14] = (0u | 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0627_entry, 627u, 24u, 0x08A7726Cu>(ctx, &aot_mem); return;
    }
    goto L_08A62124;
L_08A62124:
    rt.unsupported(0x08A62124u, 0x736F6847u, "unknown not lowered yet"); return;
L_08A62130:
    rt.unsupported(0x08A62130u, 0x79616C50u, "unknown not lowered yet"); return;
L_08A62140:
    rt.unsupported(0x08A62140u, 0x00646574u, "special? not lowered yet"); return;
L_08A62144:
    ctx.execute_vfpu_vscl_ct<68u, 101u, 118u, 1u>();
    ctx.execute_vfpu_vscl_ct<108u, 111u, 112u, 1u>();
    rt.unsupported(0x08A6214Cu, 0x74695472u, "unknown not lowered yet"); return;
L_08A6215C:
    rt.unsupported(0x08A6215Cu, 0x6E776F44u, "vfpu3 not lowered yet"); return;
L_08A62170:
    rt.unsupported(0x08A62170u, 0x00646574u, "special? not lowered yet"); return;
L_08A62174:
    rt.unsupported(0x08A62174u, 0x79616C50u, "unknown not lowered yet"); return;
L_08A62184:
    ctx.execute_vfpu_vscl_ct<101u, 99u, 116u, 1u>();
    (void)(0u & 0u);
    goto L_08A6218C;
L_08A6218C:
    ctx.execute_vfpu_vscl_ct<68u, 101u, 118u, 1u>();
    ctx.execute_vfpu_vscl_ct<108u, 111u, 112u, 1u>();
    rt.unsupported(0x08A62194u, 0x74695472u, "unknown not lowered yet"); return;
L_08A621A8:
    rt.unsupported(0x08A621A8u, 0x6E776F44u, "vfpu3 not lowered yet"); return;
L_08A621BC:
    ctx.execute_vfpu_vscl_ct<101u, 99u, 116u, 1u>();
    (void)(0u & 0u);
    goto L_08A621C4;
L_08A621C4:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 9u>();
    rt.unsupported(0x08A621C8u, 0x6853776Fu, "unknown not lowered yet"); return;
L_08A621D4:
    rt.unsupported(0x08A621D4u, 0x62615472u, "vfpu0 not lowered yet"); return;
L_08A621DC:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 9u>();
    rt.unsupported(0x08A621E0u, 0x6853776Fu, "unknown not lowered yet"); return;
L_08A621F4:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 9u>();
    rt.unsupported(0x08A621F8u, 0x6853776Fu, "unknown not lowered yet"); return;
L_08A62210:
    rt.unsupported(0x08A62210u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08A62214u, 0x49414620u, "cop2/vfpu not lowered yet"); return;
L_08A62224:
    rt.unsupported(0x08A62224u, 0x49204154u, "cop2/vfpu not lowered yet"); return;
L_08A62234:
    if (aot_gpr[2] != aot_gpr[5]) {
    aot_gpr[11] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0626_entry, 626u, 52u, 0x08A76AB8u>(ctx, &aot_mem); return;
    }
    goto L_08A6223C;
L_08A6223C:
    rt.unsupported(0x08A6223Cu, 0x736F6847u, "unknown not lowered yet"); return;
L_08A62278:
    rt.unsupported(0x08A62278u, 0x746F6850u, "unknown not lowered yet"); return;
L_08A62288:
    rt.unsupported(0x08A62288u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A62298:
    rt.unsupported(0x08A62298u, 0x63616C42u, "vfpu0 not lowered yet"); return;
L_08A622B0:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 9u>();
    rt.unsupported(0x08A622B4u, 0x6853776Fu, "unknown not lowered yet"); return;
L_08A622C0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<77u, 1u>(vfpu_d); }
    aot_gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A622C8;
L_08A622C8:
    rt.unsupported(0x08A622C8u, 0x74696857u, "unknown not lowered yet"); return;
L_08A622E0:
    ctx.execute_vfpu_vscl_ct<66u, 108u, 117u, 1u>();
    rt.unsupported(0x08A622E4u, 0x70616853u, "unknown not lowered yet"); return;
L_08A622F0:
    ctx.execute_vfpu_vscl_ct<72u, 105u, 100u, 1u>();
    rt.unsupported(0x08A622F4u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A62304:
    ctx.execute_vfpu_vscl_ct<72u, 105u, 100u, 1u>();
    rt.unsupported(0x08A62308u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A62318:
    rt.unsupported(0x08A62318u, 0x77726F46u, "unknown not lowered yet"); return;
L_08A62328:
    rt.unsupported(0x08A62328u, 0x77726F46u, "unknown not lowered yet"); return;
L_08A62338:
    ctx.execute_vfpu_vminmax(90u, 111u, 111u, 1u, false);
    rt.unsupported(0x08A6233Cu, 0x74786554u, "unknown not lowered yet"); return;
L_08A62344:
    ctx.execute_vfpu_vminmax(90u, 111u, 111u, 1u, false);
    rt.unsupported(0x08A62348u, 0x74786554u, "unknown not lowered yet"); return;
L_08A62350:
    rt.unsupported(0x08A62350u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A62364:
    rt.unsupported(0x08A62364u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A62374:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
    rt.unsupported(0x08A62378u, 0x74786554u, "unknown not lowered yet"); return;
L_08A62380:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
    rt.unsupported(0x08A62384u, 0x74786554u, "unknown not lowered yet"); return;
L_08A6238C:
    ctx.execute_vfpu_vscl_ct<82u, 101u, 115u, 1u>();
    rt.unsupported(0x08A62390u, 0x78655474u, "unknown not lowered yet"); return;
L_08A62398:
    ctx.execute_vfpu_vscl_ct<82u, 101u, 115u, 1u>();
    rt.unsupported(0x08A6239Cu, 0x78655474u, "unknown not lowered yet"); return;
L_08A623A8:
    rt.unsupported(0x08A623A8u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A623B4:
    rt.unsupported(0x08A623B4u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A623C0:
    ctx.execute_vfpu_vscl_ct<84u, 97u, 107u, 1u>();
    rt.unsupported(0x08A623C4u, 0x746F6850u, "unknown not lowered yet"); return;
L_08A623D0:
    ctx.execute_vfpu_vscl_ct<84u, 97u, 107u, 1u>();
    rt.unsupported(0x08A623D4u, 0x746F6850u, "unknown not lowered yet"); return;
L_08A623E4:
    rt.unsupported(0x08A623E4u, 0x6E727554u, "vfpu3 not lowered yet"); return;
L_08A623F0:
    rt.unsupported(0x08A623F0u, 0x00006572u, "special? not lowered yet"); return;
L_08A623F4:
    rt.unsupported(0x08A623F4u, 0x6E727554u, "vfpu3 not lowered yet"); return;
L_08A62400:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<83u, 1u>(vfpu_d); }
    rt.unsupported(0x08A62404u, 0x62754E65u, "vfpu0 not lowered yet"); return;
L_08A62410:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<83u, 1u>(vfpu_d); }
    rt.unsupported(0x08A62414u, 0x75715365u, "unknown not lowered yet"); return;
L_08A62420:
    rt.unsupported(0x08A62420u, 0x00006572u, "special? not lowered yet"); return;
L_08A62424:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<83u, 1u>(vfpu_d); }
    rt.unsupported(0x08A62428u, 0x756C5065u, "unknown not lowered yet"); return;
L_08A62434:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<83u, 1u>(vfpu_d); }
    rt.unsupported(0x08A62438u, 0x78655465u, "unknown not lowered yet"); return;
L_08A62440:
    rt.unsupported(0x08A62440u, 0x4C706F54u, "unknown not lowered yet"); return;
L_08A62450:
    rt.unsupported(0x08A62450u, 0x00006572u, "special? not lowered yet"); return;
L_08A62454:
    rt.unsupported(0x08A62454u, 0x45706F54u, "cop1? not lowered yet"); return;
L_08A62460:
    rt.unsupported(0x08A62460u, 0x00006572u, "special? not lowered yet"); return;
L_08A62464:
    if (aot_gpr[19] == aot_gpr[16]) {
    rt.unsupported(0x08A62468u, 0x74686769u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0634_entry, 634u, 13u, 0x08A7E1B8u>(ctx, &aot_mem); return;
    }
    goto L_08A6246C;
L_08A6246C:
    ctx.execute_vfpu_vscl_ct<69u, 100u, 103u, 1u>();
    rt.unsupported(0x08A62470u, 0x74786554u, "unknown not lowered yet"); return;
L_08A62478:
    rt.unsupported(0x08A62478u, 0x74746F42u, "unknown not lowered yet"); return;
L_08A62490:
    rt.unsupported(0x08A62490u, 0x74746F42u, "unknown not lowered yet"); return;
L_08A624A4:
    rt.unsupported(0x08A624A4u, 0x74746F42u, "unknown not lowered yet"); return;
L_08A624B8:
    rt.unsupported(0x08A624B8u, 0x00006572u, "special? not lowered yet"); return;
L_08A624BC:
    rt.unsupported(0x08A624BCu, 0x7466654Cu, "unknown not lowered yet"); return;
L_08A624C0:
    ctx.execute_vfpu_vscl_ct<69u, 100u, 103u, 1u>();
    rt.unsupported(0x08A624C4u, 0x74786554u, "unknown not lowered yet"); return;
L_08A624CC:
    rt.unsupported(0x08A624CCu, 0x68676952u, "unknown not lowered yet"); return;
L_08A624E0:
    ctx.execute_vfpu_vscl_ct<65u, 105u, 109u, 1u>();
    rt.unsupported(0x08A624E4u, 0x786F4272u, "unknown not lowered yet"); return;
L_08A624FC:
    ctx.execute_vfpu_vscl_ct<65u, 105u, 109u, 1u>();
    rt.unsupported(0x08A62500u, 0x786F4272u, "unknown not lowered yet"); return;
L_08A62510:
    aot_gpr[12] = (aot_gpr[3] - aot_gpr[12]);
    goto L_08A62514;
L_08A62514:
    ctx.execute_vfpu_vscl_ct<65u, 105u, 109u, 1u>();
    rt.unsupported(0x08A62518u, 0x786F4272u, "unknown not lowered yet"); return;
L_08A62524:
    rt.unsupported(0x08A62524u, 0x69726F48u, "unknown not lowered yet"); return;
L_08A62530:
    ctx.execute_vfpu_vscl_ct<65u, 105u, 109u, 1u>();
    rt.unsupported(0x08A62534u, 0x786F4272u, "unknown not lowered yet"); return;
L_08A62540:
    rt.unsupported(0x08A62540u, 0x74726556u, "unknown not lowered yet"); return;
L_08A6254C:
    ctx.execute_vfpu_vscl_ct<65u, 105u, 109u, 1u>();
    rt.unsupported(0x08A62550u, 0x786F4272u, "unknown not lowered yet"); return;
L_08A6256C:
    ctx.execute_vfpu_vscl_ct<65u, 105u, 109u, 1u>();
    rt.unsupported(0x08A62570u, 0x786F4272u, "unknown not lowered yet"); return;
L_08A62588:
    ctx.execute_vfpu_vscl_ct<65u, 105u, 109u, 1u>();
    rt.unsupported(0x08A6258Cu, 0x786F4272u, "unknown not lowered yet"); return;
L_08A625A8:
    ctx.execute_vfpu_vscl_ct<65u, 105u, 109u, 1u>();
    rt.unsupported(0x08A625ACu, 0x786F4272u, "unknown not lowered yet"); return;
L_08A625C0:
    aot_gpr[12] = (aot_gpr[3] - aot_gpr[12]);
    goto L_08A625C4;
L_08A625C4:
    rt.unsupported(0x08A625C4u, 0x696E694Du, "unknown not lowered yet"); return;
L_08A625D4:
    rt.unsupported(0x08A625D4u, 0x696E694Du, "unknown not lowered yet"); return;
L_08A625E8:
    rt.unsupported(0x08A625E8u, 0x696E694Du, "unknown not lowered yet"); return;
L_08A625FC:
    rt.unsupported(0x08A625FCu, 0x696E694Du, "unknown not lowered yet"); return;
L_08A62610:
    ctx.execute_vfpu_vscl_ct<65u, 105u, 109u, 1u>();
    rt.unsupported(0x08A62614u, 0x6E694672u, "vfpu3 not lowered yet"); return;
L_08A6261C:
    ctx.execute_vfpu_vscl_ct<65u, 105u, 109u, 1u>();
    rt.unsupported(0x08A62620u, 0x6E694672u, "vfpu3 not lowered yet"); return;
L_08A6262C:
    ctx.execute_vfpu_vscl_ct<65u, 105u, 109u, 1u>();
    rt.unsupported(0x08A62630u, 0x6E694672u, "vfpu3 not lowered yet"); return;
L_08A6263C:
    ctx.execute_vfpu_vscl_ct<65u, 105u, 109u, 1u>();
    rt.unsupported(0x08A62640u, 0x6E694672u, "vfpu3 not lowered yet"); return;
L_08A6264C:
    rt.unsupported(0x08A6264Cu, 0x776F6853u, "unknown not lowered yet"); return;
L_08A62660:
    rt.unsupported(0x08A62660u, 0x756E6F42u, "unknown not lowered yet"); return;
L_08A62670:
    aot_gpr[31] = (aot_gpr[10] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08A62674u, 0x00000073u, "special? not lowered yet"); return;
L_08A62678:
    rt.unsupported(0x08A62678u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A62688:
    rt.unsupported(0x08A62688u, 0x74697551u, "unknown not lowered yet"); return;
L_08A62690:
    rt.unsupported(0x08A62690u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A626AC:
    rt.unsupported(0x08A626ACu, 0x4D5F5854u, "unknown not lowered yet"); return;
L_08A626B8:
    rt.unsupported(0x08A626B8u, 0x74736F50u, "unknown not lowered yet"); return;
L_08A626C8:
    rt.unsupported(0x08A626C8u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A626E8:
    rt.unsupported(0x08A626E8u, 0x00000079u, "special? not lowered yet"); return;
L_08A626EC:
    rt.unsupported(0x08A626ECu, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A62710:
    // nop
    goto L_08A62714;
L_08A62714:
    rt.unsupported(0x08A62714u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A62724:
    rt.unsupported(0x08A62724u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A62738:
    rt.unsupported(0x08A62738u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A62748:
    rt.unsupported(0x08A62748u, 0x74697551u, "unknown not lowered yet"); return;
L_08A62764:
    rt.unsupported(0x08A62764u, 0x74736552u, "unknown not lowered yet"); return;
L_08A6276C:
    rt.unsupported(0x08A6276Cu, 0x74697551u, "unknown not lowered yet"); return;
L_08A62784:
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[3]) * static_cast<std::uint64_t>(aot_gpr[19]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    goto L_08A62788;
L_08A62788:
    rt.unsupported(0x08A62788u, 0x736F6847u, "unknown not lowered yet"); return;
L_08A62798:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A6279Cu, 0x696E6946u, "unknown not lowered yet"); return;
L_08A627B0:
    rt.unsupported(0x08A627B0u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A627BC:
    rt.unsupported(0x08A627BCu, 0x69766E49u, "unknown not lowered yet"); return;
L_08A627D8:
    rt.unsupported(0x08A627D8u, 0x74736F50u, "unknown not lowered yet"); return;
L_08A627E8:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A627ECu, 0x75736552u, "unknown not lowered yet"); return;
L_08A627F8:
    rt.unsupported(0x08A627F8u, 0x63616C42u, "vfpu0 not lowered yet"); return;
L_08A62808:
    // nop
    goto L_08A6280C;
L_08A6280C:
    rt.unsupported(0x08A6280Cu, 0x74696857u, "unknown not lowered yet"); return;
L_08A6281C:
    // nop
    goto L_08A62820;
L_08A62820:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 9u>();
    ctx.execute_vfpu_compare3(111u, 119u, 80u, 1u, 6u);
    rt.unsupported(0x08A62828u, 0x73746E69u, "unknown not lowered yet"); return;
L_08A62834:
    rt.unsupported(0x08A62834u, 0x6E696F50u, "vfpu3 not lowered yet"); return;
L_08A62848:
    rt.unsupported(0x08A62848u, 0x6E696F50u, "vfpu3 not lowered yet"); return;
L_08A62858:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<71u, 1u>(vfpu_d); }
    rt.unsupported(0x08A6285Cu, 0x74786554u, "unknown not lowered yet"); return;
L_08A62864:
    rt.unsupported(0x08A62864u, 0x766C6953u, "unknown not lowered yet"); return;
L_08A62874:
    rt.unsupported(0x08A62874u, 0x6E6F7242u, "vfpu3 not lowered yet"); return;
L_08A62884:
    aot_gpr[12] = (0u | 0u);
    goto L_08A62888;
L_08A62888:
    rt.unsupported(0x08A62888u, 0x63616C42u, "vfpu0 not lowered yet"); return;
L_08A62898:
    rt.unsupported(0x08A62898u, 0x74696857u, "unknown not lowered yet"); return;
L_08A628A8:
    rt.unsupported(0x08A628A8u, 0x72617453u, "unknown not lowered yet"); return;
L_08A628B8:
    // nop
    goto L_08A628BC;
L_08A628BC:
    rt.unsupported(0x08A628BCu, 0x72617453u, "unknown not lowered yet"); return;
L_08A628C8:
    rt.unsupported(0x08A628C8u, 0x69736F50u, "unknown not lowered yet"); return;
L_08A628D8:
    rt.unsupported(0x08A628D8u, 0x73616C53u, "unknown not lowered yet"); return;
L_08A628E0:
    rt.unsupported(0x08A628E0u, 0x69736F50u, "unknown not lowered yet"); return;
L_08A628F4:
    rt.unsupported(0x08A628F4u, 0x69736F50u, "unknown not lowered yet"); return;
L_08A6290C:
    rt.unsupported(0x08A6290Cu, 0x4E646944u, "unknown not lowered yet"); return;
L_08A6291C:
    rt.unsupported(0x08A6291Cu, 0x63656843u, "vfpu0 not lowered yet"); return;
L_08A62938:
    // nop
    goto L_08A6293C;
L_08A6293C:
    rt.unsupported(0x08A6293Cu, 0x63656843u, "vfpu0 not lowered yet"); return;
L_08A62958:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A6295Cu, 0x75736552u, "unknown not lowered yet"); return;
L_08A62968:
    rt.unsupported(0x08A62968u, 0x75736552u, "unknown not lowered yet"); return;
L_08A62974:
    rt.unsupported(0x08A62974u, 0x74736F50u, "unknown not lowered yet"); return;
L_08A62988:
    aot_gpr[12] = (0u | 0u);
    goto L_08A6298C;
L_08A6298C:
    rt.unsupported(0x08A6298Cu, 0x69766E49u, "unknown not lowered yet"); return;
L_08A629AC:
    rt.unsupported(0x08A629ACu, 0x69736F50u, "unknown not lowered yet"); return;
L_08A629C0:
    rt.unsupported(0x08A629C0u, 0x69736F50u, "unknown not lowered yet"); return;
L_08A629D8:
    rt.unsupported(0x08A629D8u, 0x00000031u, "special? not lowered yet"); return;
L_08A629DC:
    rt.unsupported(0x08A629DCu, 0x00000032u, "special? not lowered yet"); return;
L_08A629E0:
    rt.unsupported(0x08A629E0u, 0x00000033u, "special? not lowered yet"); return;
L_08A629E4:
    rt.unsupported(0x08A629E4u, 0x00000034u, "special? not lowered yet"); return;
L_08A629E8:
    rt.unsupported(0x08A629E8u, 0x00000035u, "special? not lowered yet"); return;
L_08A629EC:
    rt.unsupported(0x08A629ECu, 0x00000036u, "special? not lowered yet"); return;
L_08A629F0:
    rt.unsupported(0x08A629F0u, 0x00000037u, "special? not lowered yet"); return;
L_08A629F4:
    rt.unsupported(0x08A629F4u, 0x00000038u, "special? not lowered yet"); return;
L_08A629F8:
    rt.unsupported(0x08A629F8u, 0x00000039u, "special? not lowered yet"); return;
L_08A629FC:
    rt.unsupported(0x08A629FCu, 0x00003031u, "special? not lowered yet"); return;
L_08A62A00:
    rt.unsupported(0x08A62A00u, 0x00003131u, "special? not lowered yet"); return;
L_08A62A04:
    rt.unsupported(0x08A62A04u, 0x00003231u, "special? not lowered yet"); return;
L_08A62A08:
    rt.unsupported(0x08A62A08u, 0x00003331u, "special? not lowered yet"); return;
L_08A62A0C:
    rt.unsupported(0x08A62A0Cu, 0x00003431u, "special? not lowered yet"); return;
L_08A62A10:
    rt.unsupported(0x08A62A10u, 0x00003531u, "special? not lowered yet"); return;
L_08A62A14:
    rt.unsupported(0x08A62A14u, 0x69766E49u, "unknown not lowered yet"); return;
L_08A62A2C:
    rt.unsupported(0x08A62A2Cu, 0x75736552u, "unknown not lowered yet"); return;
L_08A62A38:
    rt.unsupported(0x08A62A38u, 0x69766E49u, "unknown not lowered yet"); return;
L_08A62A58:
    rt.unsupported(0x08A62A58u, 0x74736F50u, "unknown not lowered yet"); return;
L_08A62A68:
    aot_gpr[12] = (0u | 0u);
    // nop
    goto L_08A62A70;
L_08A62A70:
    rt.unsupported(0x08A62A70u, 0x69766E49u, "unknown not lowered yet"); return;
L_08A62A8C:
    rt.unsupported(0x08A62A8Cu, 0x75736552u, "unknown not lowered yet"); return;
L_08A62A98:
    rt.unsupported(0x08A62A98u, 0x69766E49u, "unknown not lowered yet"); return;
L_08A62C34:
    aot_gpr[16] = (aot_gpr[9] ^ 30313u);
    // nop
    aot_gpr[17] = (aot_gpr[1] & 30313u);
    // nop
    aot_gpr[17] = (aot_gpr[9] & 30313u);
    // nop
    aot_gpr[17] = (aot_gpr[17] & 30313u);
    // nop
    aot_gpr[17] = (aot_gpr[25] & 30313u);
    // nop
    rt.unsupported(0x08A62C5Cu, 0x00343176u, "special? not lowered yet"); return;
L_08A62CB8:
    // nop
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<116u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    { const bool signed_ok = ctx.execute_signed_add(5u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A62CC0u, 0x00002920u); return; } }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<116u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    // nop
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(8292));
    aot_gpr[5] = (0u & 0u);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(8292));
    aot_gpr[5] = (0u & 0u);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(8292));
    aot_gpr[5] = (0u & 0u);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(8292));
    aot_gpr[5] = (0u & 0u);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(8292));
    aot_gpr[5] = (0u & 0u);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(8292));
    aot_gpr[5] = (0u & 0u);
    aot_gpr[19] = (static_cast<std::int32_t>(aot_gpr[11]) < 25455 ? 1u : 0u);
    // nop
    rt.unsupported(0x08A62D04u, 0x00000029u, "special? not lowered yet"); return;
L_08A62D10:
    if (aot_gpr[1] == aot_gpr[14]) {
    rt.unsupported(0x08A62D14u, 0x4C5F5053u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0635_entry, 635u, 74u, 0x08A7F9A8u>(ctx, &aot_mem); return;
    }
    goto L_08A62D18;
L_08A62D18:
    rt.unsupported(0x08A62D1Cu, 0x55544553u, "control flow in delay slot"); return;
L_08A62D20:
    rt.unsupported(0x08A62D20u, 0x414D5F50u, "unknown not lowered yet"); return;
L_08A62D28:
    rt.unsupported(0x08A62D28u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A62D2C:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A62D30u, 0x616F4C5Cu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0626_entry, 626u, 85u, 0x08A76EACu>(ctx, &aot_mem); return;
    }
    goto L_08A62D34;
L_08A62D34:
    rt.unsupported(0x08A62D34u, 0x676E6964u, "vfpu1 not lowered yet"); return;
L_08A62D40:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<77u, 83u, 104u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0634_entry, 634u, 47u, 0x08A7E6D8u>(ctx, &aot_mem); return;
    }
    goto L_08A62D48;
L_08A62D48:
    rt.unsupported(0x08A62D4Cu, 0x505F5053u, "control flow in delay slot"); return;
L_08A62D50:
    rt.unsupported(0x08A62D50u, 0x4D5F5854u, "unknown not lowered yet"); return;
L_08A62D58:
    rt.unsupported(0x08A62D58u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A62D64:
    rt.unsupported(0x08A62D64u, 0x676E6964u, "vfpu1 not lowered yet"); return;
L_08A62D70:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<77u, 83u, 104u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0634_entry, 634u, 49u, 0x08A7E708u>(ctx, &aot_mem); return;
    }
    goto L_08A62D78;
L_08A62D78:
    rt.unsupported(0x08A62D78u, 0x485F6461u, "cop2/vfpu not lowered yet"); return;
L_08A62D88:
    rt.unsupported(0x08A62D88u, 0x4D5F5854u, "unknown not lowered yet"); return;
L_08A62D90:
    rt.unsupported(0x08A62D90u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A62D9C:
    rt.unsupported(0x08A62D9Cu, 0x676E6964u, "vfpu1 not lowered yet"); return;
L_08A62DA8:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<77u, 83u, 104u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0634_entry, 634u, 51u, 0x08A7E740u>(ctx, &aot_mem); return;
    }
    goto L_08A62DB0;
L_08A62DB0:
    rt.unsupported(0x08A62DB0u, 0x485F6461u, "cop2/vfpu not lowered yet"); return;
L_08A62DC4:
    rt.unsupported(0x08A62DC4u, 0x4E49414Du, "unknown not lowered yet"); return;
L_08A62DD0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08A62DD4u, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08A62DE8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08A62DECu, 0x43676E69u, "unknown not lowered yet"); return;
L_08A62DFC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08A62E00u, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08A62E0C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    if (aot_gpr[19] == aot_gpr[7]) {
    rt.unsupported(0x08A62E14u, 0x4D656361u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0634_entry, 634u, 55u, 0x08A7E7B8u>(ctx, &aot_mem); return;
    }
    goto L_08A62E18;
L_08A62E18:
    aot_gpr[13] = (aot_gpr[3] | aot_gpr[21]);
    goto L_08A62E1C;
L_08A62E1C:
    rt.unsupported(0x08A62E1Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08A62E28:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08A62E2Cu, 0x46676E69u, "cop1? not lowered yet"); return;
L_08A62E80:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) < 0;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
      if (branch_taken) {
          goto L_08A62EC4;
      }
      goto L_08A62E88;
    }
L_08A62E84:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    goto L_08A62E88;
L_08A62E88:
    rt.unsupported(0x08A62E88u, 0x4D676E69u, "unknown not lowered yet"); return;
L_08A62E98:
    rt.unsupported(0x08A62E98u, 0x4E49414Du, "unknown not lowered yet"); return;
L_08A62EA4:
    if (aot_gpr[1] == aot_gpr[14]) {
    rt.unsupported(0x08A62EA8u, 0x00004B41u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0624_entry, 624u, 25u, 0x08A743C0u>(ctx, &aot_mem); return;
    }
    goto L_08A62EAC;
L_08A62EAC:
    rt.unsupported(0x08A62EACu, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A62EC4:
    rt.unsupported(0x08A62EC4u, 0x61446369u, "vfpu0 not lowered yet"); return;
L_08A62ED0:
    rt.unsupported(0x08A62ED0u, 0x69647541u, "unknown not lowered yet"); return;
L_08A62EDC:
    rt.unsupported(0x08A62EDCu, 0x20646E45u, "unknown not lowered yet"); return;
L_08A62EFC:
    rt.unsupported(0x08A62EFCu, 0x72617453u, "unknown not lowered yet"); return;
L_08A62F18:
    // nop
    goto L_08A62F1C;
L_08A62F1C:
    rt.unsupported(0x08A62F1Cu, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A62F34:
    rt.unsupported(0x08A62F34u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08A62F44:
    rt.unsupported(0x08A62F44u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A62F5C:
    rt.unsupported(0x08A62F5Cu, 0x726F6D65u, "unknown not lowered yet"); return;
L_08A62F70:
    rt.unsupported(0x08A62F70u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A62F88:
    rt.unsupported(0x08A62F88u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08A62FA0:
    rt.unsupported(0x08A62FA0u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A62FB8:
    rt.unsupported(0x08A62FB8u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08A62FD0:
    if (aot_gpr[26] == aot_gpr[21]) {
    aot_gpr[23] = (aot_gpr[1] | 14393u);
        (void)rt.invoke_chained_direct<&recomp_unit_0623_entry, 623u, 176u, 0x08A73D28u>(ctx, &aot_mem); return;
    }
    goto L_08A62FD8;
L_08A62FD8:
    rt.unsupported(0x08A62FD8u, 0x00000033u, "special? not lowered yet"); return;
L_08A62FDC:
    // nop
    rt.unsupported(0x08A62FE4u, 0x08888BE0u, "control flow in delay slot"); return;
}

void recomp_unit_0606(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0606_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_606(Runtime &runtime) {
    runtime.register_generated_unit(606u, 0x08A62000u, 4096u, &recomp_unit_0606, &recomp_unit_0606_entry);
    runtime.register_function(0x08A62000u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6200Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62020u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62030u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62050u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62060u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62068u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62078u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6207Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62080u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62084u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A620E0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A620F0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62100u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62108u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6210Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62110u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6211Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62124u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62130u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62140u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62144u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6215Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62170u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62174u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62184u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6218Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A621A8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A621BCu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A621C4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A621D4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A621DCu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A621F4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62210u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62224u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62234u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6223Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62278u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62288u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62298u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A622B0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A622C0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A622C8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A622E0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A622F0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62304u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62318u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62328u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62338u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62344u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62350u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62364u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62374u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62380u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6238Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62398u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A623A8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A623B4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A623C0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A623D0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A623E4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A623F0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A623F4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62400u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62410u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62420u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62424u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62434u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62440u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62450u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62454u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62460u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62464u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6246Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62478u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62490u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A624A4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A624B8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A624BCu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A624C0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A624CCu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A624E0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A624FCu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62510u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62514u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62524u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62530u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62540u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6254Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6256Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62588u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A625A8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A625C0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A625C4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A625D4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A625E8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A625FCu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62610u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6261Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6262Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6263Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6264Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62660u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62670u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62678u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62688u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62690u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A626ACu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A626B8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A626C8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A626E8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A626ECu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62710u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62714u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62724u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62738u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62748u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62764u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6276Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62784u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62788u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62798u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A627B0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A627BCu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A627D8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A627E8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A627F8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62808u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6280Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6281Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62820u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62834u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62848u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62858u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62864u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62874u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62884u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62888u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62898u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A628A8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A628B8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A628BCu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A628C8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A628D8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A628E0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A628F4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6290Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6291Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62938u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6293Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62958u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62968u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62974u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62988u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A6298Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A629ACu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A629C0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A629D8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A629DCu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A629E0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A629E4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A629E8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A629ECu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A629F0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A629F4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A629F8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A629FCu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62A00u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62A04u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62A08u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62A0Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62A10u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62A14u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62A2Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62A38u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62A58u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62A68u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62A70u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62A8Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62A98u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62C34u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62CB8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D10u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D18u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D20u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D28u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D2Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D34u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D40u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D48u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D50u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D58u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D64u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D70u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D78u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D88u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D90u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62D9Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62DA8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62DB0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62DC4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62DD0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62DE8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62DFCu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62E0Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62E18u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62E1Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62E28u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62E80u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62E84u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62E88u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62E98u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62EA4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62EACu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62EC4u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62ED0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62EDCu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62EFCu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62F18u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62F1Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62F34u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62F44u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62F5Cu, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62F70u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62F88u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62FA0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62FB8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62FD0u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62FD8u, &recomp_unit_0606, "recomp_unit_0606");
    runtime.register_function(0x08A62FDCu, &recomp_unit_0606, "recomp_unit_0606");
}
} // namespace psprecomp
