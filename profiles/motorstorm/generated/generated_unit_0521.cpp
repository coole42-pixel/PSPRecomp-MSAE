#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0521[1020] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 8, 9, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 31, 0, 0,
    32, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0,
    0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 57, 0, 0, 58, 59, 0, 60, 0, 61, 0,
    0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0,
    84, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0,
    94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0,
    0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0,
    105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 113,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0,
    130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 138, 139, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0,
    146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158,
    0, 0, 0, 159, 0, 0, 0, 160, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 174,
    0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 178, 0, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 190,
    191, 0, 192, 0, 193, 0, 194, 0, 195, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0,
    0, 0, 0, 205, 0, 0, 206, 0, 207, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0,
    221, 0, 0, 222, 0, 223, 0, 224, 0, 0, 225, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229,
};
void recomp_unit_0521_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A0D000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0521[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A0D000;
    case 2u: goto L_08A0D01C;
    case 3u: goto L_08A0D040;
    case 4u: goto L_08A0D048;
    case 5u: goto L_08A0D050;
    case 6u: goto L_08A0D064;
    case 7u: goto L_08A0D078;
    case 8u: goto L_08A0D094;
    case 9u: goto L_08A0D098;
    case 10u: goto L_08A0D0A8;
    case 11u: goto L_08A0D0B0;
    case 12u: goto L_08A0D0B8;
    case 13u: goto L_08A0D0C4;
    case 14u: goto L_08A0D0D0;
    case 15u: goto L_08A0D0D8;
    case 16u: goto L_08A0D0F4;
    case 17u: goto L_08A0D11C;
    case 18u: goto L_08A0D124;
    case 19u: goto L_08A0D128;
    case 20u: goto L_08A0D13C;
    case 21u: goto L_08A0D150;
    case 22u: goto L_08A0D164;
    case 23u: goto L_08A0D180;
    case 24u: goto L_08A0D1A8;
    case 25u: goto L_08A0D1B8;
    case 26u: goto L_08A0D1C0;
    case 27u: goto L_08A0D1C8;
    case 28u: goto L_08A0D1D4;
    case 29u: goto L_08A0D1DC;
    case 30u: goto L_08A0D1F0;
    case 31u: goto L_08A0D1F4;
    case 32u: goto L_08A0D200;
    case 33u: goto L_08A0D208;
    case 34u: goto L_08A0D214;
    case 35u: goto L_08A0D234;
    case 36u: goto L_08A0D270;
    case 37u: goto L_08A0D278;
    case 38u: goto L_08A0D288;
    case 39u: goto L_08A0D298;
    case 40u: goto L_08A0D2AC;
    case 41u: goto L_08A0D2BC;
    case 42u: goto L_08A0D2C8;
    case 43u: goto L_08A0D2D4;
    case 44u: goto L_08A0D2F0;
    case 45u: goto L_08A0D300;
    case 46u: goto L_08A0D318;
    case 47u: goto L_08A0D328;
    case 48u: goto L_08A0D33C;
    case 49u: goto L_08A0D350;
    case 50u: goto L_08A0D358;
    case 51u: goto L_08A0D384;
    case 52u: goto L_08A0D38C;
    case 53u: goto L_08A0D394;
    case 54u: goto L_08A0D3A8;
    case 55u: goto L_08A0D3B0;
    case 56u: goto L_08A0D3D4;
    case 57u: goto L_08A0D3D8;
    case 58u: goto L_08A0D3E4;
    case 59u: goto L_08A0D3E8;
    case 60u: goto L_08A0D3F0;
    case 61u: goto L_08A0D3F8;
    case 62u: goto L_08A0D404;
    case 63u: goto L_08A0D414;
    case 64u: goto L_08A0D440;
    case 65u: goto L_08A0D45C;
    case 66u: goto L_08A0D470;
    case 67u: goto L_08A0D484;
    case 68u: goto L_08A0D49C;
    case 69u: goto L_08A0D4B0;
    case 70u: goto L_08A0D4B8;
    case 71u: goto L_08A0D4E0;
    case 72u: goto L_08A0D4F4;
    case 73u: goto L_08A0D510;
    case 74u: goto L_08A0D540;
    case 75u: goto L_08A0D548;
    case 76u: goto L_08A0D568;
    case 77u: goto L_08A0D574;
    case 78u: goto L_08A0D588;
    case 79u: goto L_08A0D5A8;
    case 80u: goto L_08A0D5B8;
    case 81u: goto L_08A0D5D4;
    case 82u: goto L_08A0D5E8;
    case 83u: goto L_08A0D5F4;
    case 84u: goto L_08A0D600;
    case 85u: goto L_08A0D608;
    case 86u: goto L_08A0D618;
    case 87u: goto L_08A0D620;
    case 88u: goto L_08A0D638;
    case 89u: goto L_08A0D640;
    case 90u: goto L_08A0D654;
    case 91u: goto L_08A0D65C;
    case 92u: goto L_08A0D670;
    case 93u: goto L_08A0D678;
    case 94u: goto L_08A0D680;
    case 95u: goto L_08A0D694;
    case 96u: goto L_08A0D6E0;
    case 97u: goto L_08A0D6EC;
    case 98u: goto L_08A0D6F8;
    case 99u: goto L_08A0D710;
    case 100u: goto L_08A0D718;
    case 101u: goto L_08A0D738;
    case 102u: goto L_08A0D748;
    case 103u: goto L_08A0D768;
    case 104u: goto L_08A0D770;
    case 105u: goto L_08A0D780;
    case 106u: goto L_08A0D78C;
    case 107u: goto L_08A0D7B8;
    case 108u: goto L_08A0D7C0;
    case 109u: goto L_08A0D7C8;
    case 110u: goto L_08A0D7D0;
    case 111u: goto L_08A0D7E4;
    case 112u: goto L_08A0D7F4;
    case 113u: goto L_08A0D7FC;
    case 114u: goto L_08A0D804;
    case 115u: goto L_08A0D838;
    case 116u: goto L_08A0D848;
    case 117u: goto L_08A0D850;
    case 118u: goto L_08A0D870;
    case 119u: goto L_08A0D888;
    case 120u: goto L_08A0D898;
    case 121u: goto L_08A0D8AC;
    case 122u: goto L_08A0D8B4;
    case 123u: goto L_08A0D8CC;
    case 124u: goto L_08A0D910;
    case 125u: goto L_08A0D930;
    case 126u: goto L_08A0D93C;
    case 127u: goto L_08A0D960;
    case 128u: goto L_08A0D970;
    case 129u: goto L_08A0D978;
    case 130u: goto L_08A0D980;
    case 131u: goto L_08A0D988;
    case 132u: goto L_08A0D99C;
    case 133u: goto L_08A0D9BC;
    case 134u: goto L_08A0D9C8;
    case 135u: goto L_08A0D9D0;
    case 136u: goto L_08A0D9D8;
    case 137u: goto L_08A0D9E0;
    case 138u: goto L_08A0D9EC;
    case 139u: goto L_08A0D9F0;
    case 140u: goto L_08A0DA08;
    case 141u: goto L_08A0DA2C;
    case 142u: goto L_08A0DA44;
    case 143u: goto L_08A0DA4C;
    case 144u: goto L_08A0DA54;
    case 145u: goto L_08A0DA6C;
    case 146u: goto L_08A0DA80;
    case 147u: goto L_08A0DA8C;
    case 148u: goto L_08A0DAAC;
    case 149u: goto L_08A0DAC4;
    case 150u: goto L_08A0DAF4;
    case 151u: goto L_08A0DB04;
    case 152u: goto L_08A0DB1C;
    case 153u: goto L_08A0DB34;
    case 154u: goto L_08A0DB3C;
    case 155u: goto L_08A0DB48;
    case 156u: goto L_08A0DB54;
    case 157u: goto L_08A0DB64;
    case 158u: goto L_08A0DB7C;
    case 159u: goto L_08A0DB8C;
    case 160u: goto L_08A0DB9C;
    case 161u: goto L_08A0DBA0;
    case 162u: goto L_08A0DBB0;
    case 163u: goto L_08A0DBD0;
    case 164u: goto L_08A0DBF8;
    case 165u: goto L_08A0DC04;
    case 166u: goto L_08A0DC1C;
    case 167u: goto L_08A0DC28;
    case 168u: goto L_08A0DC40;
    case 169u: goto L_08A0DC48;
    case 170u: goto L_08A0DC50;
    case 171u: goto L_08A0DC64;
    case 172u: goto L_08A0DC6C;
    case 173u: goto L_08A0DC74;
    case 174u: goto L_08A0DC7C;
    case 175u: goto L_08A0DC8C;
    case 176u: goto L_08A0DC94;
    case 177u: goto L_08A0DCA0;
    case 178u: goto L_08A0DCA8;
    case 179u: goto L_08A0DCB4;
    case 180u: goto L_08A0DCBC;
    case 181u: goto L_08A0DCC8;
    case 182u: goto L_08A0DCE0;
    case 183u: goto L_08A0DD28;
    case 184u: goto L_08A0DD38;
    case 185u: goto L_08A0DD44;
    case 186u: goto L_08A0DD50;
    case 187u: goto L_08A0DD5C;
    case 188u: goto L_08A0DD68;
    case 189u: goto L_08A0DD70;
    case 190u: goto L_08A0DD7C;
    case 191u: goto L_08A0DD80;
    case 192u: goto L_08A0DD88;
    case 193u: goto L_08A0DD90;
    case 194u: goto L_08A0DD98;
    case 195u: goto L_08A0DDA0;
    case 196u: goto L_08A0DDA4;
    case 197u: goto L_08A0DDCC;
    case 198u: goto L_08A0DDE0;
    case 199u: goto L_08A0DDEC;
    case 200u: goto L_08A0DE1C;
    case 201u: goto L_08A0DE4C;
    case 202u: goto L_08A0DE64;
    case 203u: goto L_08A0DE6C;
    case 204u: goto L_08A0DE74;
    case 205u: goto L_08A0DE8C;
    case 206u: goto L_08A0DE98;
    case 207u: goto L_08A0DEA0;
    case 208u: goto L_08A0DEA4;
    case 209u: goto L_08A0DEB4;
    case 210u: goto L_08A0DEBC;
    case 211u: goto L_08A0DED4;
    case 212u: goto L_08A0DEE0;
    case 213u: goto L_08A0DF04;
    case 214u: goto L_08A0DF30;
    case 215u: goto L_08A0DF38;
    case 216u: goto L_08A0DF4C;
    case 217u: goto L_08A0DF54;
    case 218u: goto L_08A0DF60;
    case 219u: goto L_08A0DF68;
    case 220u: goto L_08A0DF78;
    case 221u: goto L_08A0DF80;
    case 222u: goto L_08A0DF8C;
    case 223u: goto L_08A0DF94;
    case 224u: goto L_08A0DF9C;
    case 225u: goto L_08A0DFA8;
    case 226u: goto L_08A0DFAC;
    case 227u: goto L_08A0DFB8;
    case 228u: goto L_08A0DFD8;
    case 229u: goto L_08A0DFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A0D000:
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
L_08A0D01C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0D0D8;
      }
      goto L_08A0D040;
    }
L_08A0D040:
    aot_gpr[31] = (0x08A0D048u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0D440;
L_08A0D048:
    aot_gpr[31] = (0x08A0D050u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0D93C;
L_08A0D050:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0D0A8;
      }
      goto L_08A0D064;
    }
L_08A0D064:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A0D098;
    }
    goto L_08A0D078;
L_08A0D078:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0D094u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0D094u) goto L_08A0D094;
    return;
L_08A0D094:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A0D098;
L_08A0D098:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(720));
      if (branch_taken) {
          goto L_08A0D064;
      }
      goto L_08A0D0A8;
    }
L_08A0D0A8:
    aot_gpr[31] = (0x08A0D0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0D0B0u) goto L_08A0D0B0;
    return;
L_08A0D0B0:
    aot_gpr[31] = (0x08A0D0B8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D0B8u) goto L_08A0D0B8;
    return;
L_08A0D0B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A0D0C4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0D0C4u) goto L_08A0D0C4;
    return;
L_08A0D0C4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08A0D0D8;
      }
      goto L_08A0D0D0;
    }
L_08A0D0D0:
    aot_gpr[31] = (0x08A0D0D8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0D0D8u) goto L_08A0D0D8;
    return;
L_08A0D0D8:
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
L_08A0D0F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0D128;
      }
      goto L_08A0D11C;
    }
L_08A0D11C:
    aot_gpr[31] = (0x08A0D124u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0DAC4;
L_08A0D124:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), 0u);
    goto L_08A0D128;
L_08A0D128:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0D164;
      }
      goto L_08A0D13C;
    }
L_08A0D13C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[31] = (0x08A0D150u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A0DBD0;
L_08A0D150:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(720));
      if (branch_taken) {
          goto L_08A0D13C;
      }
      goto L_08A0D164;
    }
L_08A0D164:
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
L_08A0D180:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    goto L_08A0D1A8;
L_08A0D1A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x08A0D1B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 154u, 0x08A0BA48u>(ctx, &aot_mem) && ctx.pc == 0x08A0D1B8u) goto L_08A0D1B8;
    return;
L_08A0D1B8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A0D1C8;
      }
      goto L_08A0D1C0;
    }
L_08A0D1C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A0D1D4;
      }
      goto L_08A0D1C8;
    }
L_08A0D1C8:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0D1A8;
      }
      goto L_08A0D1D4;
    }
L_08A0D1D4:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D214;
      }
      goto L_08A0D1DC;
    }
L_08A0D1DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D214;
      }
      goto L_08A0D1F0;
    }
L_08A0D1F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A0D1F4;
L_08A0D1F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A0D208;
      }
      goto L_08A0D200;
    }
L_08A0D200:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A0D214;
      }
      goto L_08A0D208;
    }
L_08A0D208:
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(720));
      if (branch_taken) {
          goto L_08A0D1F4;
      }
      goto L_08A0D214;
    }
L_08A0D214:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08A0D234:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1728));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1692), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1696), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1700), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1704), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1708), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1712), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1716), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1720), aot_gpr[31]);
    aot_gpr[31] = (0x08A0D270u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0D270u) goto L_08A0D270;
    return;
L_08A0D270:
    aot_gpr[31] = (0x08A0D278u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 257u, 0x08A07F04u>(ctx, &aot_mem) && ctx.pc == 0x08A0D278u) goto L_08A0D278;
    return;
L_08A0D278:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A0D288u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 136u, 0x089F07B8u>(ctx, &aot_mem) && ctx.pc == 0x08A0D288u) goto L_08A0D288;
    return;
L_08A0D288:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0D298u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    goto L_08A0DCE0;
L_08A0D298:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(668));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0D2ACu);
    aot_gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D2ACu) goto L_08A0D2AC;
    return;
L_08A0D2AC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A0D2BCu);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-3936));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 236u, 0x089F0D34u>(ctx, &aot_mem) && ctx.pc == 0x08A0D2BCu) goto L_08A0D2BC;
    return;
L_08A0D2BC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0D2C8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 237u, 0x089F0D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D2C8u) goto L_08A0D2C8;
    return;
L_08A0D2C8:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0D2D4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 238u, 0x089F0D44u>(ctx, &aot_mem) && ctx.pc == 0x08A0D2D4u) goto L_08A0D2D4;
    return;
L_08A0D2D4:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 1023u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A0D2F0u);
    aot_gpr[9] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A0D2F0u) goto L_08A0D2F0;
    return;
L_08A0D2F0:
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-3976));
    goto L_08A0D300;
L_08A0D300:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0D384;
      }
      goto L_08A0D318;
    }
L_08A0D318:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 268u);
    aot_gpr[31] = (0x08A0D328u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0D328u) goto L_08A0D328;
    return;
L_08A0D328:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A0D3D4;
      }
      goto L_08A0D33C;
    }
L_08A0D33C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x08A0D350u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 166u, 0x08A0BAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0D350u) goto L_08A0D350;
    return;
L_08A0D350:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A0D3D8;
      }
      goto L_08A0D358;
    }
L_08A0D358:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A0D3E8;
      }
      goto L_08A0D384;
    }
L_08A0D384:
    aot_gpr[31] = (0x08A0D38Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D38Cu) goto L_08A0D38C;
    return;
L_08A0D38C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08A0D3D8;
    }
    goto L_08A0D394;
L_08A0D394:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x08A0D3A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 166u, 0x08A0BAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0D3A8u) goto L_08A0D3A8;
    return;
L_08A0D3A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A0D3D8;
      }
      goto L_08A0D3B0;
    }
L_08A0D3B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A0D3E8;
      }
      goto L_08A0D3D4;
    }
L_08A0D3D4:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08A0D3D8;
L_08A0D3D8:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0D300;
      }
      goto L_08A0D3E4;
    }
L_08A0D3E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A0D3E8;
L_08A0D3E8:
    aot_gpr[31] = (0x08A0D3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0D3F0u) goto L_08A0D3F0;
    return;
L_08A0D3F0:
    aot_gpr[31] = (0x08A0D3F8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D3F8u) goto L_08A0D3F8;
    return;
L_08A0D3F8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0D404u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0D404u) goto L_08A0D404;
    return;
L_08A0D404:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A0D414u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0D414u) goto L_08A0D414;
    return;
L_08A0D414:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1692)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1696)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1700)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1704)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1708)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1712)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1716)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1720)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1728));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D440:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A0D45Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A0DA08;
L_08A0D45C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0D4F4;
      }
      goto L_08A0D470;
    }
L_08A0D470:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D4B0;
      }
      goto L_08A0D484;
    }
L_08A0D484:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A0D49Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0D49Cu) goto L_08A0D49C;
    return;
L_08A0D49C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    goto L_08A0D4B0;
L_08A0D4B0:
    aot_gpr[31] = (0x08A0D4B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 159u, 0x08A0CBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0D4B8u) goto L_08A0D4B8;
    return;
L_08A0D4B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x08A0D4E0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 73u, 0x08A0C570u>(ctx, &aot_mem) && ctx.pc == 0x08A0D4E0u) goto L_08A0D4E0;
    return;
L_08A0D4E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(720));
      if (branch_taken) {
          goto L_08A0D470;
      }
      goto L_08A0D4F4;
    }
L_08A0D4F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
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
L_08A0D510:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0D5B8;
      }
      goto L_08A0D540;
    }
L_08A0D540:
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A0D568;
    }
    goto L_08A0D548;
L_08A0D548:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A0D588;
      }
      goto L_08A0D568;
    }
L_08A0D568:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A0D574u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 154u, 0x08A0CBA0u>(ctx, &aot_mem) && ctx.pc == 0x08A0D574u) goto L_08A0D574;
    return;
L_08A0D574:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    goto L_08A0D588;
L_08A0D588:
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A0D5A8u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0D5A8u) goto L_08A0D5A8;
    return;
L_08A0D5A8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0D5B8u);
    aot_gpr[6] = (0u | 0u);
    goto L_08A0D620;
L_08A0D5B8:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D5D4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0D618;
      }
      goto L_08A0D5E8;
    }
L_08A0D5E8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_08A0D5F4;
L_08A0D5F4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[5];
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A0D608;
      }
      goto L_08A0D600;
    }
L_08A0D600:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[7] + aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D608:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(720));
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(720));
      if (branch_taken) {
          goto L_08A0D5F4;
      }
      goto L_08A0D618;
    }
L_08A0D618:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D620:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0D670;
      }
      goto L_08A0D638;
    }
L_08A0D638:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A0D65C;
      }
      goto L_08A0D640;
    }
L_08A0D640:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A0D654u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0D654u) goto L_08A0D654;
    return;
L_08A0D654:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08A0D670;
      }
      goto L_08A0D65C;
    }
L_08A0D65C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A0D670u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0D670u) goto L_08A0D670;
    return;
L_08A0D670:
    aot_gpr[31] = (0x08A0D678u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 159u, 0x08A0CBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0D678u) goto L_08A0D678;
    return;
L_08A0D678:
    aot_gpr[31] = (0x08A0D680u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 73u, 0x08A0C570u>(ctx, &aot_mem) && ctx.pc == 0x08A0D680u) goto L_08A0D680;
    return;
L_08A0D680:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D694:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-992));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(948), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(952), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(956), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(960), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(972), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(976), aot_gpr[23]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[23] = (0u | 0u);
    aot_gpr[22] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(964), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(968), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(980), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(984), aot_gpr[31]);
    aot_gpr[31] = (0x08A0D6E0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 80u, 0x089F143Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D6E0u) goto L_08A0D6E0;
    return;
L_08A0D6E0:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A0D6ECu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 65u, 0x08A0C510u>(ctx, &aot_mem) && ctx.pc == 0x08A0D6ECu) goto L_08A0D6EC;
    return;
L_08A0D6EC:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A0D6F8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A0D6F8u) goto L_08A0D6F8;
    return;
L_08A0D6F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(672), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(676), aot_gpr[20]);
      if (branch_taken) {
          goto L_08A0D748;
      }
      goto L_08A0D710;
    }
L_08A0D710:
    aot_gpr[31] = (0x08A0D718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 83u, 0x089F1478u>(ctx, &aot_mem) && ctx.pc == 0x08A0D718u) goto L_08A0D718;
    return;
L_08A0D718:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x08A0D738u);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 91u, 0x089F14F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0D738u) goto L_08A0D738;
    return;
L_08A0D738:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (0u < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A0D7C0;
      }
      goto L_08A0D748;
    }
L_08A0D748:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(944), aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[30] = (aot_gpr[6] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08A0D768u);
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 65u, 0x08A0C510u>(ctx, &aot_mem) && ctx.pc == 0x08A0D768u) goto L_08A0D768;
    return;
L_08A0D768:
    aot_gpr[31] = (0x08A0D770u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 236u, 0x089F0D34u>(ctx, &aot_mem) && ctx.pc == 0x08A0D770u) goto L_08A0D770;
    return;
L_08A0D770:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0D780u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0D780u) goto L_08A0D780;
    return;
L_08A0D780:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(944)));
      if (branch_taken) {
          goto L_08A0D7C0;
      }
      goto L_08A0D78C;
    }
L_08A0D78C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x08A0D7B8u);
    aot_gpr[9] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0D7B8u) goto L_08A0D7B8;
    return;
L_08A0D7B8:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08A0D7C0;
L_08A0D7C0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A0D7FC;
      }
      goto L_08A0D7C8;
    }
L_08A0D7C8:
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A0D7FC;
      }
      goto L_08A0D7D0;
    }
L_08A0D7D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(716)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_gpr[31] = (0x08A0D7E4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 68u, 0x08A0C534u>(ctx, &aot_mem) && ctx.pc == 0x08A0D7E4u) goto L_08A0D7E4;
    return;
L_08A0D7E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08A0D7F4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 63u, 0x08A0C4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0D7F4u) goto L_08A0D7F4;
    return;
L_08A0D7F4:
    aot_gpr[23] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_08A0D7FC;
L_08A0D7FC:
    aot_gpr[31] = (0x08A0D804u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0D804u) goto L_08A0D804;
    return;
L_08A0D804:
    aot_gpr[2] = (aot_gpr[23] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(948)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(952)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(956)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(960)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(964)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(968)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(972)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(976)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(980)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(984)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(992));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D838:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A0D848u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0D848u) goto L_08A0D848;
    return;
L_08A0D848:
    aot_gpr[31] = (0x08A0D850u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D850u) goto L_08A0D850;
    return;
L_08A0D850:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(-3976));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 32u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A0D870u);
    aot_gpr[7] = (0u | 124u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0D870u) goto L_08A0D870;
    return;
L_08A0D870:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0D888u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D888u) goto L_08A0D888;
    return;
L_08A0D888:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A0D898;
L_08A0D898:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[31] = (0x08A0D8ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0D8ACu) goto L_08A0D8AC;
    return;
L_08A0D8AC:
    aot_gpr[31] = (0x08A0D8B4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D8B4u) goto L_08A0D8B4;
    return;
L_08A0D8B4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A0D8CCu);
    aot_gpr[7] = (0u | 129u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0D8CCu) goto L_08A0D8CC;
    return;
L_08A0D8CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x08A0D910u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 153u, 0x08A0BA38u>(ctx, &aot_mem) && ctx.pc == 0x08A0D910u) goto L_08A0D910;
    return;
L_08A0D910:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A0D898;
      }
      goto L_08A0D930;
    }
L_08A0D930:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D93C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    goto L_08A0D960;
L_08A0D960:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A0D9BC;
    }
    goto L_08A0D970;
L_08A0D970:
    aot_gpr[31] = (0x08A0D978u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 155u, 0x08A0BA54u>(ctx, &aot_mem) && ctx.pc == 0x08A0D978u) goto L_08A0D978;
    return;
L_08A0D978:
    aot_gpr[31] = (0x08A0D980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0D980u) goto L_08A0D980;
    return;
L_08A0D980:
    aot_gpr[31] = (0x08A0D988u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D988u) goto L_08A0D988;
    return;
L_08A0D988:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x08A0D99Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0D99Cu) goto L_08A0D99C;
    return;
L_08A0D99C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A0D9BC;
L_08A0D9BC:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0D960;
      }
      goto L_08A0D9C8;
    }
L_08A0D9C8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D9F0;
      }
      goto L_08A0D9D0;
    }
L_08A0D9D0:
    aot_gpr[31] = (0x08A0D9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0D9D8u) goto L_08A0D9D8;
    return;
L_08A0D9D8:
    aot_gpr[31] = (0x08A0D9E0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D9E0u) goto L_08A0D9E0;
    return;
L_08A0D9E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08A0D9ECu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0D9ECu) goto L_08A0D9EC;
    return;
L_08A0D9EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_08A0D9F0;
L_08A0D9F0:
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
L_08A0DA08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    goto L_08A0DA2C;
L_08A0DA2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08A0DA80;
    }
    goto L_08A0DA44;
L_08A0DA44:
    aot_gpr[31] = (0x08A0DA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0DA4Cu) goto L_08A0DA4C;
    return;
L_08A0DA4C:
    aot_gpr[31] = (0x08A0DA54u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DA54u) goto L_08A0DA54;
    return;
L_08A0DA54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0DA6Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0DA6Cu) goto L_08A0DA6C;
    return;
L_08A0DA6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08A0DA80;
L_08A0DA80:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x08A0DA8Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 155u, 0x08A0BA54u>(ctx, &aot_mem) && ctx.pc == 0x08A0DA8Cu) goto L_08A0DA8C;
    return;
L_08A0DA8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0DA2C;
      }
      goto L_08A0DAAC;
    }
L_08A0DAAC:
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
L_08A0DAC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x08A0DAF4u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A0DAF4u) goto L_08A0DAF4;
    return;
L_08A0DAF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0DB04u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DB04u) goto L_08A0DB04;
    return;
L_08A0DB04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[20] = (0u | 7u);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08A0DB1C;
L_08A0DB1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A0DB34;
L_08A0DB34:
    if (aot_gpr[7] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A0DBA0;
    }
    goto L_08A0DB3C;
L_08A0DB3C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[7] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A0DBA0;
    }
    goto L_08A0DB48;
L_08A0DB48:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[9] == 0u) {
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08A0DB8C;
    }
    goto L_08A0DB54;
L_08A0DB54:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[9] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08A0DB8C;
    }
    goto L_08A0DB64;
L_08A0DB64:
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[20] - aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[31] = (0x08A0DB7Cu);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A0DB7Cu) goto L_08A0DB7C;
    return;
L_08A0DB7C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
      if (branch_taken) {
          goto L_08A0DB9C;
      }
      goto L_08A0DB8C;
    }
L_08A0DB8C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 7 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A0DB34;
      }
      goto L_08A0DB9C;
    }
L_08A0DB9C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A0DBA0;
L_08A0DBA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0DB1C;
      }
      goto L_08A0DBB0;
    }
L_08A0DBB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0DBD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A0DCA8;
      }
      goto L_08A0DBF8;
    }
L_08A0DBF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DC6C;
      }
      goto L_08A0DC04;
    }
L_08A0DC04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A0DC1Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0DC1Cu) goto L_08A0DC1C;
    return;
L_08A0DC1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DCC8;
      }
      goto L_08A0DC28;
    }
L_08A0DC28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A0DC40u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0DC40u) goto L_08A0DC40;
    return;
L_08A0DC40:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DCC8;
      }
      goto L_08A0DC48;
    }
L_08A0DC48:
    aot_gpr[31] = (0x08A0DC50u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 156u, 0x08A0CBC8u>(ctx, &aot_mem) && ctx.pc == 0x08A0DC50u) goto L_08A0DC50;
    return;
L_08A0DC50:
    aot_gpr[6] = (aot_gpr[2] ^ 200u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A0DC64u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A0D510;
L_08A0DC64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DCC8;
      }
      goto L_08A0DC6C;
    }
L_08A0DC6C:
    aot_gpr[31] = (0x08A0DC74u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(716)));
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 154u, 0x08A0BA48u>(ctx, &aot_mem) && ctx.pc == 0x08A0DC74u) goto L_08A0DC74;
    return;
L_08A0DC74:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A0DC94;
      }
      goto L_08A0DC7C;
    }
L_08A0DC7C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0DC8Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A0DF04;
L_08A0DC8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DCC8;
      }
      goto L_08A0DC94;
    }
L_08A0DC94:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0DCA0u);
    aot_gpr[6] = (0u | 1u);
    goto L_08A0D620;
L_08A0DCA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DCC8;
      }
      goto L_08A0DCA8;
    }
L_08A0DCA8:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(716));
    aot_gpr[31] = (0x08A0DCB4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08A0DE1C;
L_08A0DCB4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A0DCC8;
      }
      goto L_08A0DCBC;
    }
L_08A0DCBC:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0DCC8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A0DF04;
L_08A0DCC8:
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
L_08A0DCE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-576));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(532), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(536), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(540), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(544), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(548), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(552), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(556), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(560), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(564), aot_gpr[31]);
    aot_gpr[31] = (0x08A0DD28u);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DD28u) goto L_08A0DD28;
    return;
L_08A0DD28:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0DD38u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-3924));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 236u, 0x089F0D34u>(ctx, &aot_mem) && ctx.pc == 0x08A0DD38u) goto L_08A0DD38;
    return;
L_08A0DD38:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0DD44u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 237u, 0x089F0D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DD44u) goto L_08A0DD44;
    return;
L_08A0DD44:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0DD50u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 238u, 0x089F0D44u>(ctx, &aot_mem) && ctx.pc == 0x08A0DD50u) goto L_08A0DD50;
    return;
L_08A0DD50:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0DD5Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DD5Cu) goto L_08A0DD5C;
    return;
L_08A0DD5C:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0DD68u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 240u, 0x089F0D54u>(ctx, &aot_mem) && ctx.pc == 0x08A0DD68u) goto L_08A0DD68;
    return;
L_08A0DD68:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A0DD7C;
      }
      goto L_08A0DD70;
    }
L_08A0DD70:
    aot_gpr[30] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-3904));
      if (branch_taken) {
          goto L_08A0DD80;
      }
      goto L_08A0DD7C;
    }
L_08A0DD7C:
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-3900));
    goto L_08A0DD80;
L_08A0DD80:
    aot_gpr[31] = (0x08A0DD88u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 240u, 0x089F0D54u>(ctx, &aot_mem) && ctx.pc == 0x08A0DD88u) goto L_08A0DD88;
    return;
L_08A0DD88:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (2215u << 16u);
        goto L_08A0DDA0;
    }
    goto L_08A0DD90;
L_08A0DD90:
    aot_gpr[31] = (0x08A0DD98u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 240u, 0x089F0D54u>(ctx, &aot_mem) && ctx.pc == 0x08A0DD98u) goto L_08A0DD98;
    return;
L_08A0DD98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A0DDA4;
      }
      goto L_08A0DDA0;
    }
L_08A0DDA0:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-3900));
    goto L_08A0DDA4;
L_08A0DDA4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 512u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[10] = (aot_gpr[23] | 0u);
    aot_gpr[11] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08A0DDCCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A0DDCCu) goto L_08A0DDCC;
    return;
L_08A0DDCC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 230u);
    aot_gpr[31] = (0x08A0DDE0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3976));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0DDE0u) goto L_08A0DDE0;
    return;
L_08A0DDE0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (aot_gpr[18] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[18]);
        goto L_08A0DDEC;
    }
    goto L_08A0DDEC;
L_08A0DDEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(544)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(548)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(556)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(560)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(564)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0DE1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A0DE4C;
L_08A0DE4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[5] != 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A0DE8C;
    }
    goto L_08A0DE64;
L_08A0DE64:
    aot_gpr[31] = (0x08A0DE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 154u, 0x08A0BA48u>(ctx, &aot_mem) && ctx.pc == 0x08A0DE6Cu) goto L_08A0DE6C;
    return;
L_08A0DE6C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A0DE8C;
      }
      goto L_08A0DE74;
    }
L_08A0DE74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A0DE98;
      }
      goto L_08A0DE8C;
    }
L_08A0DE8C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0DE4C;
      }
      goto L_08A0DE98;
    }
L_08A0DE98:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0DEE0;
      }
      goto L_08A0DEA0;
    }
L_08A0DEA0:
    aot_gpr[19] = (0u | 0u);
    goto L_08A0DEA4;
L_08A0DEA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[31] = (0x08A0DEB4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 154u, 0x08A0BA48u>(ctx, &aot_mem) && ctx.pc == 0x08A0DEB4u) goto L_08A0DEB4;
    return;
L_08A0DEB4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A0DED4;
      }
      goto L_08A0DEBC;
    }
L_08A0DEBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A0DEE0;
      }
      goto L_08A0DED4;
    }
L_08A0DED4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0DEA4;
      }
      goto L_08A0DEE0;
    }
L_08A0DEE0:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A0DF04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-768));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(736), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(740), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(744), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(748), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(752), aot_gpr[31]);
    aot_gpr[31] = (0x08A0DF30u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 56u, 0x08A0C430u>(ctx, &aot_mem) && ctx.pc == 0x08A0DF30u) goto L_08A0DF30;
    return;
L_08A0DF30:
    aot_gpr[31] = (0x08A0DF38u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 257u, 0x08A07F04u>(ctx, &aot_mem) && ctx.pc == 0x08A0DF38u) goto L_08A0DF38;
    return;
L_08A0DF38:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(700));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(716)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0DF4Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 192u, 0x08A0BCA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0DF4Cu) goto L_08A0DF4C;
    return;
L_08A0DF4C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A0DFA8;
      }
      goto L_08A0DF54;
    }
L_08A0DF54:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A0DF60u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 197u, 0x08A0BD04u>(ctx, &aot_mem) && ctx.pc == 0x08A0DF60u) goto L_08A0DF60;
    return;
L_08A0DF60:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A0DFA8;
      }
      goto L_08A0DF68;
    }
L_08A0DF68:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A0DF78u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A0D694;
L_08A0DF78:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (0u | 0u);
        goto L_08A0DFAC;
    }
    goto L_08A0DF80;
L_08A0DF80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(716)));
    aot_gpr[31] = (0x08A0DF8Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 180u, 0x08A0BBECu>(ctx, &aot_mem) && ctx.pc == 0x08A0DF8Cu) goto L_08A0DF8C;
    return;
L_08A0DF8C:
    aot_gpr[31] = (0x08A0DF94u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(708)));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0DF94u) goto L_08A0DF94;
    return;
L_08A0DF94:
    aot_gpr[31] = (0x08A0DF9Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DF9Cu) goto L_08A0DF9C;
    return;
L_08A0DF9C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0DFA8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0DFA8u) goto L_08A0DFA8;
    return;
L_08A0DFA8:
    aot_gpr[16] = (0u | 0u);
    goto L_08A0DFAC;
L_08A0DFAC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A0DFB8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 58u, 0x08A0C48Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DFB8u) goto L_08A0DFB8;
    return;
L_08A0DFB8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(736)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(740)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(744)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(748)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(752)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(768));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0DFD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0DFECu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 93u, 0x08A0C6D8u>(ctx, &aot_mem) && ctx.pc == 0x08A0DFECu) goto L_08A0DFEC;
    return;
L_08A0DFEC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13072));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A0E000u; return;
}

void recomp_unit_0521(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0521_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_521(Runtime &runtime) {
    runtime.register_generated_unit(521u, 0x08A0D000u, 4096u, &recomp_unit_0521, &recomp_unit_0521_entry);
    runtime.register_function(0x08A0D000u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D01Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D040u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D048u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D050u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D064u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D078u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D094u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D098u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D0A8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D0B0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D0B8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D0C4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D0D0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D0D8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D0F4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D11Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D124u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D128u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D13Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D150u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D164u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D180u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D1A8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D1B8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D1C0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D1C8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D1D4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D1DCu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D1F0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D1F4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D200u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D208u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D214u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D234u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D270u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D278u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D288u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D298u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D2ACu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D2BCu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D2C8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D2D4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D2F0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D300u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D318u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D328u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D33Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D350u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D358u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D384u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D38Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D394u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D3A8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D3B0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D3D4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D3D8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D3E4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D3E8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D3F0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D3F8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D404u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D414u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D440u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D45Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D470u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D484u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D49Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D4B0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D4B8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D4E0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D4F4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D510u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D540u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D548u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D568u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D574u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D588u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D5A8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D5B8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D5D4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D5E8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D5F4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D600u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D608u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D618u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D620u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D638u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D640u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D654u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D65Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D670u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D678u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D680u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D694u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D6E0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D6ECu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D6F8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D710u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D718u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D738u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D748u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D768u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D770u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D780u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D78Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D7B8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D7C0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D7C8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D7D0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D7E4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D7F4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D7FCu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D804u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D838u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D848u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D850u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D870u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D888u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D898u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D8ACu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D8B4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D8CCu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D910u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D930u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D93Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D960u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D970u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D978u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D980u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D988u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D99Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D9BCu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D9C8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D9D0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D9D8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D9E0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D9ECu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0D9F0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DA08u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DA2Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DA44u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DA4Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DA54u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DA6Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DA80u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DA8Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DAACu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DAC4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DAF4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DB04u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DB1Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DB34u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DB3Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DB48u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DB54u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DB64u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DB7Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DB8Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DB9Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DBA0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DBB0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DBD0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DBF8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DC04u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DC1Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DC28u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DC40u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DC48u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DC50u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DC64u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DC6Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DC74u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DC7Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DC8Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DC94u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DCA0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DCA8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DCB4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DCBCu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DCC8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DCE0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DD28u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DD38u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DD44u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DD50u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DD5Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DD68u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DD70u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DD7Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DD80u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DD88u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DD90u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DD98u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DDA0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DDA4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DDCCu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DDE0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DDECu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DE1Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DE4Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DE64u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DE6Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DE74u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DE8Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DE98u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DEA0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DEA4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DEB4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DEBCu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DED4u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DEE0u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DF04u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DF30u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DF38u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DF4Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DF54u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DF60u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DF68u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DF78u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DF80u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DF8Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DF94u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DF9Cu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DFA8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DFACu, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DFB8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DFD8u, &recomp_unit_0521, "recomp_unit_0521");
    runtime.register_function(0x08A0DFECu, &recomp_unit_0521, "recomp_unit_0521");
}
} // namespace psprecomp
