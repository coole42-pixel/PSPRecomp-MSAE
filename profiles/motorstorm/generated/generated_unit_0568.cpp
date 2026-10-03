#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0568[1020] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0,
    0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 21, 0, 0, 0, 22, 0, 23,
    0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 34, 0, 35, 36, 0, 37, 0, 0, 0, 38, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 43, 44, 0, 0, 0, 0, 45, 0,
    0, 0, 46, 47, 0, 48, 0, 0, 0, 49, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 54, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 61, 62, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 69, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 75,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 89, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 110,
    0, 111, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 115, 116, 0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 0, 120, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 124, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0,
    0, 142, 0, 143, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0,
    0, 150, 0, 151, 0, 0, 0, 152, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 157, 158, 159, 0,
    0, 160, 0, 161, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    165, 0, 166, 0, 0, 167, 0, 168, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174,
    0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 181, 182, 0, 183, 184, 0, 0, 0, 0, 0, 185,
    0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 201, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 212, 0, 213, 214, 0, 0, 0, 215,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 219, 0, 220, 0, 0, 221, 0, 222,
    0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231,
    0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 243, 0, 0, 244,
};
void recomp_unit_0568_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A3C000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0568[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A3C000;
    case 2u: goto L_08A3C008;
    case 3u: goto L_08A3C020;
    case 4u: goto L_08A3C028;
    case 5u: goto L_08A3C038;
    case 6u: goto L_08A3C040;
    case 7u: goto L_08A3C048;
    case 8u: goto L_08A3C054;
    case 9u: goto L_08A3C068;
    case 10u: goto L_08A3C070;
    case 11u: goto L_08A3C078;
    case 12u: goto L_08A3C084;
    case 13u: goto L_08A3C08C;
    case 14u: goto L_08A3C094;
    case 15u: goto L_08A3C09C;
    case 16u: goto L_08A3C0A8;
    case 17u: goto L_08A3C0B8;
    case 18u: goto L_08A3C0C8;
    case 19u: goto L_08A3C0D8;
    case 20u: goto L_08A3C0E0;
    case 21u: goto L_08A3C0E4;
    case 22u: goto L_08A3C0F4;
    case 23u: goto L_08A3C0FC;
    case 24u: goto L_08A3C114;
    case 25u: goto L_08A3C120;
    case 26u: goto L_08A3C138;
    case 27u: goto L_08A3C144;
    case 28u: goto L_08A3C184;
    case 29u: goto L_08A3C190;
    case 30u: goto L_08A3C19C;
    case 31u: goto L_08A3C1AC;
    case 32u: goto L_08A3C1B0;
    case 33u: goto L_08A3C200;
    case 34u: goto L_08A3C20C;
    case 35u: goto L_08A3C214;
    case 36u: goto L_08A3C218;
    case 37u: goto L_08A3C220;
    case 38u: goto L_08A3C230;
    case 39u: goto L_08A3C234;
    case 40u: goto L_08A3C23C;
    case 41u: goto L_08A3C24C;
    case 42u: goto L_08A3C25C;
    case 43u: goto L_08A3C260;
    case 44u: goto L_08A3C264;
    case 45u: goto L_08A3C278;
    case 46u: goto L_08A3C288;
    case 47u: goto L_08A3C28C;
    case 48u: goto L_08A3C294;
    case 49u: goto L_08A3C2A4;
    case 50u: goto L_08A3C2A8;
    case 51u: goto L_08A3C2B0;
    case 52u: goto L_08A3C2C0;
    case 53u: goto L_08A3C2D0;
    case 54u: goto L_08A3C2D4;
    case 55u: goto L_08A3C2D8;
    case 56u: goto L_08A3C2EC;
    case 57u: goto L_08A3C308;
    case 58u: goto L_08A3C31C;
    case 59u: goto L_08A3C344;
    case 60u: goto L_08A3C348;
    case 61u: goto L_08A3C364;
    case 62u: goto L_08A3C368;
    case 63u: goto L_08A3C37C;
    case 64u: goto L_08A3C3F4;
    case 65u: goto L_08A3C404;
    case 66u: goto L_08A3C414;
    case 67u: goto L_08A3C420;
    case 68u: goto L_08A3C428;
    case 69u: goto L_08A3C430;
    case 70u: goto L_08A3C434;
    case 71u: goto L_08A3C448;
    case 72u: goto L_08A3C45C;
    case 73u: goto L_08A3C468;
    case 74u: goto L_08A3C470;
    case 75u: goto L_08A3C47C;
    case 76u: goto L_08A3C48C;
    case 77u: goto L_08A3C4A4;
    case 78u: goto L_08A3C4AC;
    case 79u: goto L_08A3C4D0;
    case 80u: goto L_08A3C4E4;
    case 81u: goto L_08A3C504;
    case 82u: goto L_08A3C50C;
    case 83u: goto L_08A3C534;
    case 84u: goto L_08A3C56C;
    case 85u: goto L_08A3C57C;
    case 86u: goto L_08A3C5B4;
    case 87u: goto L_08A3C5BC;
    case 88u: goto L_08A3C5F8;
    case 89u: goto L_08A3C604;
    case 90u: goto L_08A3C608;
    case 91u: goto L_08A3C620;
    case 92u: goto L_08A3C630;
    case 93u: goto L_08A3C634;
    case 94u: goto L_08A3C664;
    case 95u: goto L_08A3C68C;
    case 96u: goto L_08A3C694;
    case 97u: goto L_08A3C6A8;
    case 98u: goto L_08A3C6C4;
    case 99u: goto L_08A3C6DC;
    case 100u: goto L_08A3C6E8;
    case 101u: goto L_08A3C718;
    case 102u: goto L_08A3C730;
    case 103u: goto L_08A3C73C;
    case 104u: goto L_08A3C744;
    case 105u: goto L_08A3C74C;
    case 106u: goto L_08A3C758;
    case 107u: goto L_08A3C760;
    case 108u: goto L_08A3C768;
    case 109u: goto L_08A3C770;
    case 110u: goto L_08A3C77C;
    case 111u: goto L_08A3C784;
    case 112u: goto L_08A3C790;
    case 113u: goto L_08A3C79C;
    case 114u: goto L_08A3C7A4;
    case 115u: goto L_08A3C7BC;
    case 116u: goto L_08A3C7C0;
    case 117u: goto L_08A3C7D4;
    case 118u: goto L_08A3C7DC;
    case 119u: goto L_08A3C7E4;
    case 120u: goto L_08A3C7F0;
    case 121u: goto L_08A3C7F8;
    case 122u: goto L_08A3C81C;
    case 123u: goto L_08A3C834;
    case 124u: goto L_08A3C838;
    case 125u: goto L_08A3C840;
    case 126u: goto L_08A3C84C;
    case 127u: goto L_08A3C864;
    case 128u: goto L_08A3C870;
    case 129u: goto L_08A3C87C;
    case 130u: goto L_08A3C8C4;
    case 131u: goto L_08A3C8DC;
    case 132u: goto L_08A3C8F4;
    case 133u: goto L_08A3C924;
    case 134u: goto L_08A3C93C;
    case 135u: goto L_08A3C944;
    case 136u: goto L_08A3C94C;
    case 137u: goto L_08A3C954;
    case 138u: goto L_08A3C960;
    case 139u: goto L_08A3C968;
    case 140u: goto L_08A3C970;
    case 141u: goto L_08A3C978;
    case 142u: goto L_08A3C984;
    case 143u: goto L_08A3C98C;
    case 144u: goto L_08A3C998;
    case 145u: goto L_08A3C9A4;
    case 146u: goto L_08A3C9AC;
    case 147u: goto L_08A3C9C0;
    case 148u: goto L_08A3C9E8;
    case 149u: goto L_08A3C9F0;
    case 150u: goto L_08A3CA04;
    case 151u: goto L_08A3CA0C;
    case 152u: goto L_08A3CA1C;
    case 153u: goto L_08A3CA20;
    case 154u: goto L_08A3CA44;
    case 155u: goto L_08A3CA4C;
    case 156u: goto L_08A3CA60;
    case 157u: goto L_08A3CA70;
    case 158u: goto L_08A3CA74;
    case 159u: goto L_08A3CA78;
    case 160u: goto L_08A3CA84;
    case 161u: goto L_08A3CA8C;
    case 162u: goto L_08A3CA90;
    case 163u: goto L_08A3CAA4;
    case 164u: goto L_08A3CAE8;
    case 165u: goto L_08A3CB00;
    case 166u: goto L_08A3CB08;
    case 167u: goto L_08A3CB14;
    case 168u: goto L_08A3CB1C;
    case 169u: goto L_08A3CB20;
    case 170u: goto L_08A3CB44;
    case 171u: goto L_08A3CB5C;
    case 172u: goto L_08A3CB68;
    case 173u: goto L_08A3CB70;
    case 174u: goto L_08A3CB7C;
    case 175u: goto L_08A3CB88;
    case 176u: goto L_08A3CB98;
    case 177u: goto L_08A3CBA4;
    case 178u: goto L_08A3CBB4;
    case 179u: goto L_08A3CBBC;
    case 180u: goto L_08A3CBC4;
    case 181u: goto L_08A3CBD4;
    case 182u: goto L_08A3CBD8;
    case 183u: goto L_08A3CBE0;
    case 184u: goto L_08A3CBE4;
    case 185u: goto L_08A3CBFC;
    case 186u: goto L_08A3CC04;
    case 187u: goto L_08A3CC18;
    case 188u: goto L_08A3CC40;
    case 189u: goto L_08A3CC4C;
    case 190u: goto L_08A3CC54;
    case 191u: goto L_08A3CC68;
    case 192u: goto L_08A3CC84;
    case 193u: goto L_08A3CC98;
    case 194u: goto L_08A3CCA8;
    case 195u: goto L_08A3CCB4;
    case 196u: goto L_08A3CCF0;
    case 197u: goto L_08A3CCF8;
    case 198u: goto L_08A3CD14;
    case 199u: goto L_08A3CD34;
    case 200u: goto L_08A3CD44;
    case 201u: goto L_08A3CD48;
    case 202u: goto L_08A3CD50;
    case 203u: goto L_08A3CD5C;
    case 204u: goto L_08A3CD6C;
    case 205u: goto L_08A3CD84;
    case 206u: goto L_08A3CD8C;
    case 207u: goto L_08A3CD98;
    case 208u: goto L_08A3CDAC;
    case 209u: goto L_08A3CDB8;
    case 210u: goto L_08A3CDC4;
    case 211u: goto L_08A3CDDC;
    case 212u: goto L_08A3CDE0;
    case 213u: goto L_08A3CDE8;
    case 214u: goto L_08A3CDEC;
    case 215u: goto L_08A3CDFC;
    case 216u: goto L_08A3CE08;
    case 217u: goto L_08A3CE50;
    case 218u: goto L_08A3CE58;
    case 219u: goto L_08A3CE60;
    case 220u: goto L_08A3CE68;
    case 221u: goto L_08A3CE74;
    case 222u: goto L_08A3CE7C;
    case 223u: goto L_08A3CE84;
    case 224u: goto L_08A3CE8C;
    case 225u: goto L_08A3CE98;
    case 226u: goto L_08A3CEA0;
    case 227u: goto L_08A3CEAC;
    case 228u: goto L_08A3CEB8;
    case 229u: goto L_08A3CEC0;
    case 230u: goto L_08A3CED4;
    case 231u: goto L_08A3CEFC;
    case 232u: goto L_08A3CF04;
    case 233u: goto L_08A3CF18;
    case 234u: goto L_08A3CF20;
    case 235u: goto L_08A3CF30;
    case 236u: goto L_08A3CF38;
    case 237u: goto L_08A3CF44;
    case 238u: goto L_08A3CF70;
    case 239u: goto L_08A3CFB4;
    case 240u: goto L_08A3CFBC;
    case 241u: goto L_08A3CFCC;
    case 242u: goto L_08A3CFD4;
    case 243u: goto L_08A3CFE0;
    case 244u: goto L_08A3CFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A3C000:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C008:
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[7] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A3C038;
      }
      goto L_08A3C020;
    }
L_08A3C020:
    if (aot_gpr[11] == aot_gpr[9]) {
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A3C008;
    }
    goto L_08A3C028;
L_08A3C028:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A3C020;
      }
      goto L_08A3C038;
    }
L_08A3C038:
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[2] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3C048;
      }
      goto L_08A3C040;
    }
L_08A3C040:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3C054;
      }
      goto L_08A3C048;
    }
L_08A3C048:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C054:
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    goto L_08A3C068;
L_08A3C068:
    { const bool branch_taken = aot_gpr[9] != aot_gpr[8];
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3C08C;
      }
      goto L_08A3C070;
    }
L_08A3C070:
    if (aot_gpr[8] != 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
        goto L_08A3C084;
    }
    goto L_08A3C078;
L_08A3C078:
    aot_gpr[4] = (0u | 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C084:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C08C:
    if (aot_gpr[9] != 0u) {
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
        goto L_08A3C068;
    }
    goto L_08A3C094;
L_08A3C094:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3C054;
      }
      goto L_08A3C09C;
    }
L_08A3C09C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3C0F4;
      }
      goto L_08A3C0A8;
    }
L_08A3C0A8:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8160));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[5]);
    goto L_08A3C0B8;
L_08A3C0B8:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[7] & 2u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3C0E4;
      }
      goto L_08A3C0C8;
    }
L_08A3C0C8:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[7] & 2u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C0E0;
      }
      goto L_08A3C0D8;
    }
L_08A3C0D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_08A3C0E0;
      }
      goto L_08A3C0E0;
    }
L_08A3C0E0:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_08A3C0E4;
L_08A3C0E4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3C0B8;
      }
      goto L_08A3C0F4;
    }
L_08A3C0F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C0FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A3C114u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A3C120;
L_08A3C114:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C120:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-16724)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A3C138u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(124));
    goto L_08A3C144;
L_08A3C138:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C144:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (1u << 16u);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(20864));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[9] = (0u | 100u);
    aot_gpr[8] = (0u | 400u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(9736));
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[10] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) >= 0;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9640));
      if (branch_taken) {
          goto L_08A3C190;
      }
      goto L_08A3C184;
    }
L_08A3C184:
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[11]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) < 0;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3C184;
      }
      goto L_08A3C190;
    }
L_08A3C190:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[11] = (0u | 3600u);
        goto L_08A3C1B0;
    }
    goto L_08A3C19C;
L_08A3C19C:
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[11]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3C19C;
      }
      goto L_08A3C1AC;
    }
L_08A3C1AC:
    aot_gpr[11] = (0u | 3600u);
    goto L_08A3C1B0;
L_08A3C1B0:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[10] = (0u | 60u);
    aot_gpr[11] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (0u | 7u);
    aot_gpr[3] = (ctx.hi);
    aot_gpr[12] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    aot_gpr[10] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    aot_gpr[10] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[11]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[10] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[10]);
      if (branch_taken) {
          goto L_08A3C20C;
      }
      goto L_08A3C200;
    }
L_08A3C200:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(7));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    goto L_08A3C20C;
L_08A3C20C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[10] = (0u | 1970u);
      if (branch_taken) {
          goto L_08A3C288;
      }
      goto L_08A3C214;
    }
L_08A3C214:
    aot_gpr[2] = (0u | 1970u);
    goto L_08A3C218;
L_08A3C218:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3C230;
      }
      goto L_08A3C220;
    }
L_08A3C220:
    aot_gpr[2] = (0u - aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u - aot_gpr[2]);
      if (branch_taken) {
          goto L_08A3C234;
      }
      goto L_08A3C230;
    }
L_08A3C230:
    aot_gpr[2] = (aot_gpr[2] & 3u);
    goto L_08A3C234;
L_08A3C234:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C24C;
      }
      goto L_08A3C23C;
    }
L_08A3C23C:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[2] = (ctx.hi);
    if (aot_gpr[2] != 0u) {
    aot_gpr[11] = (0u | 1u);
        goto L_08A3C260;
    }
    goto L_08A3C24C;
L_08A3C24C:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[2] = (ctx.hi);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[11] << 2u);
      if (branch_taken) {
          goto L_08A3C264;
      }
      goto L_08A3C25C;
    }
L_08A3C25C:
    aot_gpr[11] = (0u | 1u);
    goto L_08A3C260;
L_08A3C260:
    aot_gpr[2] = (aot_gpr[11] << 2u);
    goto L_08A3C264;
L_08A3C264:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[7] = (aot_gpr[6] | 0u);
        goto L_08A3C308;
    }
    goto L_08A3C278;
L_08A3C278:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A3C218;
      }
      goto L_08A3C288;
    }
L_08A3C288:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-1));
    goto L_08A3C28C;
L_08A3C28C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) >= 0;
    aot_gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3C2A4;
      }
      goto L_08A3C294;
    }
L_08A3C294:
    aot_gpr[2] = (0u - aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[2] & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u - aot_gpr[2]);
      if (branch_taken) {
          goto L_08A3C2A8;
      }
      goto L_08A3C2A4;
    }
L_08A3C2A4:
    aot_gpr[2] = (aot_gpr[10] & 3u);
    goto L_08A3C2A8;
L_08A3C2A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C2C0;
      }
      goto L_08A3C2B0;
    }
L_08A3C2B0:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[2] = (ctx.hi);
    if (aot_gpr[2] != 0u) {
    aot_gpr[11] = (0u | 1u);
        goto L_08A3C2D4;
    }
    goto L_08A3C2C0;
L_08A3C2C0:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[2] = (ctx.hi);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[11] << 2u);
      if (branch_taken) {
          goto L_08A3C2D8;
      }
      goto L_08A3C2D0;
    }
L_08A3C2D0:
    aot_gpr[11] = (0u | 1u);
    goto L_08A3C2D4;
L_08A3C2D4:
    aot_gpr[2] = (aot_gpr[11] << 2u);
    goto L_08A3C2D8;
L_08A3C2D8:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-1));
        goto L_08A3C28C;
    }
    goto L_08A3C2EC;
L_08A3C2EC:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (aot_gpr[11] << 4u);
    aot_gpr[6] = (aot_gpr[10] + static_cast<std::uint32_t>(-1900));
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[8] + aot_gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[7]);
      if (branch_taken) {
          goto L_08A3C31C;
      }
      goto L_08A3C308;
    }
L_08A3C308:
    aot_gpr[8] = (aot_gpr[11] << 4u);
    aot_gpr[6] = (aot_gpr[10] + static_cast<std::uint32_t>(-1900));
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[7]);
    goto L_08A3C31C;
L_08A3C31C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[8] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[8] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[7] = (aot_gpr[10] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[9] != 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A3C368;
    }
    goto L_08A3C344;
L_08A3C344:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A3C348;
L_08A3C348:
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3C348;
      }
      goto L_08A3C364;
    }
L_08A3C364:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A3C368;
L_08A3C368:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C37C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-15856));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[18] = (aot_gpr[6] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-14820)));
    aot_gpr[23] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-14816)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[5] = (0u | 4096u);
    aot_gpr[30] = (aot_gpr[21] + aot_gpr[18]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(16));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3C404;
      }
      goto L_08A3C3F4;
    }
L_08A3C3F4:
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(4096));
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-4096));
    aot_gpr[20] = (aot_gpr[20] & aot_gpr[4]);
    goto L_08A3C404;
L_08A3C404:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08A3C414u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 43u, 0x08A3D304u>(ctx, &aot_mem) && ctx.pc == 0x08A3C414u) goto L_08A3C414;
    return;
L_08A3C414:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[16];
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[30] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3C634;
      }
      goto L_08A3C420;
    }
L_08A3C420:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A3C434;
      }
      goto L_08A3C428;
    }
L_08A3C428:
    { const bool branch_taken = aot_gpr[21] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A3C634;
      }
      goto L_08A3C430;
    }
L_08A3C430:
    aot_gpr[19] = (2216u << 16u);
    goto L_08A3C434;
L_08A3C434:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-14804)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    { const bool branch_taken = aot_gpr[17] != aot_gpr[30];
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-14804), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3C45C;
      }
      goto L_08A3C448;
    }
L_08A3C448:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3C604;
      }
      goto L_08A3C45C;
    }
L_08A3C45C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-14816)));
    if (aot_gpr[4] != aot_gpr[16]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-14804)));
        goto L_08A3C470;
    }
    goto L_08A3C468;
L_08A3C468:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-14816), aot_gpr[17]);
      if (branch_taken) {
          goto L_08A3C47C;
      }
      goto L_08A3C470;
    }
L_08A3C470:
    aot_gpr[5] = (aot_gpr[17] - aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-14804), aot_gpr[4]);
    goto L_08A3C47C;
L_08A3C47C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[4] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[20]);
      if (branch_taken) {
          goto L_08A3C4A4;
      }
      goto L_08A3C48C;
    }
L_08A3C48C:
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] & 4095u);
      if (branch_taken) {
          goto L_08A3C4AC;
      }
      goto L_08A3C4A4;
    }
L_08A3C4A4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[18] & 4095u);
    goto L_08A3C4AC;
L_08A3C4AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (aot_gpr[5] - aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A3C4D0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 43u, 0x08A3D304u>(ctx, &aot_mem) && ctx.pc == 0x08A3C4D0u) goto L_08A3C4D0;
    return;
L_08A3C4D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-14804)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A3C50C;
      }
      goto L_08A3C4E4;
    }
L_08A3C4E4:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-14804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] | 1u);
    { const bool branch_taken = aot_gpr[21] != aot_gpr[22];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3C56C;
      }
      goto L_08A3C504;
    }
L_08A3C504:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-14804)));
      if (branch_taken) {
          goto L_08A3C608;
      }
      goto L_08A3C50C;
    }
L_08A3C50C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-14804), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A3C534u);
    aot_gpr[5] = (0u - aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 43u, 0x08A3D304u>(ctx, &aot_mem) && ctx.pc == 0x08A3C534u) goto L_08A3C534;
    return;
L_08A3C534:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-14816), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C56C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08A3C5BC;
      }
      goto L_08A3C57C;
    }
L_08A3C57C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] & 1u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[6] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[21] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3C5F8;
      }
      goto L_08A3C5B4;
    }
L_08A3C5B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-14804)));
      if (branch_taken) {
          goto L_08A3C608;
      }
      goto L_08A3C5BC;
    }
L_08A3C5BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C5F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A3C604u);
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(8));
    goto L_08A3CC98;
L_08A3C604:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-14804)));
    goto L_08A3C608;
L_08A3C608:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-14812)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] < aot_gpr[19] ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-14812), aot_gpr[19]);
        goto L_08A3C620;
    }
    goto L_08A3C620;
L_08A3C620:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-14808)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C634;
      }
      goto L_08A3C630;
    }
L_08A3C630:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-14808), aot_gpr[19]);
    goto L_08A3C634;
L_08A3C634:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C664:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(19));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < 31 ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-15856));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A3C694;
      }
      goto L_08A3C68C;
    }
L_08A3C68C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[8] & aot_gpr[5]);
    goto L_08A3C694;
L_08A3C694:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[31] = (0x08A3C6A8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 12u, 0x08A3D0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C6A8u) goto L_08A3C6A8;
    return;
L_08A3C6A8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[8] < static_cast<std::uint32_t>(504) ? 1u : 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A3C730;
      }
      goto L_08A3C6C4;
    }
L_08A3C6C4:
    aot_gpr[9] = (aot_gpr[5] >> 3u);
    aot_gpr[10] = (aot_gpr[9] << 3u);
    aot_gpr[11] = (aot_gpr[10] + aot_gpr[6]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[11];
    aot_gpr[13] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A3C6E8;
      }
      goto L_08A3C6DC;
    }
L_08A3C6DC:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A3C840;
      }
      goto L_08A3C6E8;
    }
L_08A3C6E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[10] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] | 1u);
    aot_gpr[31] = (0x08A3C718u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 16u, 0x08A3D130u>(ctx, &aot_mem) && ctx.pc == 0x08A3C718u) goto L_08A3C718;
    return;
L_08A3C718:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C730:
    aot_gpr[11] = (aot_gpr[5] >> 9u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[9] = (aot_gpr[11] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3C744;
      }
      goto L_08A3C73C;
    }
L_08A3C73C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (aot_gpr[5] >> 3u);
      if (branch_taken) {
          goto L_08A3C7A4;
      }
      goto L_08A3C744;
    }
L_08A3C744:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (aot_gpr[11] < static_cast<std::uint32_t>(21) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3C758;
      }
      goto L_08A3C74C;
    }
L_08A3C74C:
    aot_gpr[11] = (aot_gpr[5] >> 6u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08A3C7A4;
      }
      goto L_08A3C758;
    }
L_08A3C758:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (aot_gpr[11] < static_cast<std::uint32_t>(85) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3C768;
      }
      goto L_08A3C760;
    }
L_08A3C760:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(91));
      if (branch_taken) {
          goto L_08A3C7A4;
      }
      goto L_08A3C768;
    }
L_08A3C768:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (aot_gpr[11] < static_cast<std::uint32_t>(341) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3C77C;
      }
      goto L_08A3C770;
    }
L_08A3C770:
    aot_gpr[11] = (aot_gpr[5] >> 12u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(110));
      if (branch_taken) {
          goto L_08A3C7A4;
      }
      goto L_08A3C77C;
    }
L_08A3C77C:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (aot_gpr[11] | 0u);
      if (branch_taken) {
          goto L_08A3C790;
      }
      goto L_08A3C784;
    }
L_08A3C784:
    aot_gpr[11] = (aot_gpr[5] >> 15u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(119));
      if (branch_taken) {
          goto L_08A3C7A4;
      }
      goto L_08A3C790;
    }
L_08A3C790:
    aot_gpr[9] = (aot_gpr[9] < static_cast<std::uint32_t>(1365) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[11] = (0u | 126u);
      if (branch_taken) {
          goto L_08A3C7A4;
      }
      goto L_08A3C79C;
    }
L_08A3C79C:
    aot_gpr[11] = (aot_gpr[5] >> 18u);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(124));
    goto L_08A3C7A4;
L_08A3C7A4:
    aot_gpr[9] = (aot_gpr[11] | 0u);
    aot_gpr[12] = (aot_gpr[9] << 3u);
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[12];
    aot_gpr[13] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A3C838;
      }
      goto L_08A3C7BC;
    }
L_08A3C7BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    goto L_08A3C7C0;
L_08A3C7C0:
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[7]);
    aot_gpr[10] = (aot_gpr[2] - aot_gpr[5]);
    aot_gpr[13] = (static_cast<std::int32_t>(aot_gpr[10]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[13] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A3C7DC;
      }
      goto L_08A3C7D4;
    }
L_08A3C7D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[11] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3C834;
      }
      goto L_08A3C7DC;
    }
L_08A3C7DC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[13]) >= 0;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A3C7F8;
      }
      goto L_08A3C7E4;
    }
L_08A3C7E4:
    aot_gpr[3] = (aot_gpr[10] | 0u);
    if (aot_gpr[3] != aot_gpr[12]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
        goto L_08A3C7C0;
    }
    goto L_08A3C7F0;
L_08A3C7F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[13] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A3C838;
      }
      goto L_08A3C7F8;
    }
L_08A3C7F8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] | 1u);
    aot_gpr[31] = (0x08A3C81Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 16u, 0x08A3D130u>(ctx, &aot_mem) && ctx.pc == 0x08A3C81Cu) goto L_08A3C81C;
    return;
L_08A3C81C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C834:
    aot_gpr[13] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08A3C838;
L_08A3C838:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(8)));
    goto L_08A3C840;
L_08A3C840:
    aot_gpr[12] = (aot_gpr[10] | 0u);
    if (aot_gpr[12] == aot_gpr[13]) {
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[9]) >> 2u));
        goto L_08A3CA20;
    }
    goto L_08A3C84C;
L_08A3C84C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[7]);
    aot_gpr[11] = (aot_gpr[3] - aot_gpr[5]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[11]) < 16 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[7] = (aot_gpr[5] | 1u);
        goto L_08A3C8F4;
    }
    goto L_08A3C864;
L_08A3C864:
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(12), aot_gpr[13]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[11]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(8), aot_gpr[13]);
      if (branch_taken) {
          goto L_08A3C8C4;
      }
      goto L_08A3C870;
    }
L_08A3C870:
    aot_gpr[10] = (aot_gpr[3] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[2] = (aot_gpr[3] >> 9u);
      if (branch_taken) {
          goto L_08A3C93C;
      }
      goto L_08A3C87C;
    }
L_08A3C87C:
    aot_gpr[10] = (aot_gpr[3] >> 3u);
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 2u));
    aot_gpr[11] = (aot_gpr[11] >> 30u);
    aot_gpr[11] = (aot_gpr[10] + aot_gpr[11]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[11]) >> 2u));
    aot_gpr[3] = (0u | 1u);
    aot_gpr[11] = (aot_gpr[3] << (aot_gpr[11] & 31u));
    aot_gpr[11] = (aot_gpr[2] | aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[10] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[6]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(12), aot_gpr[12]);
      if (branch_taken) {
          goto L_08A3CA1C;
      }
      goto L_08A3C8C4;
    }
L_08A3C8C4:
    aot_gpr[5] = (aot_gpr[12] + aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[12]);
    aot_gpr[6] = (aot_gpr[6] | 1u);
    aot_gpr[31] = (0x08A3C8DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 16u, 0x08A3D130u>(ctx, &aot_mem) && ctx.pc == 0x08A3C8DCu) goto L_08A3C8DC;
    return;
L_08A3C8DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C8F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[10] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[13]);
    aot_gpr[6] = (aot_gpr[11] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[11]);
    aot_gpr[31] = (0x08A3C924u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 16u, 0x08A3D130u>(ctx, &aot_mem) && ctx.pc == 0x08A3C924u) goto L_08A3C924;
    return;
L_08A3C924:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C93C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (aot_gpr[2] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3C94C;
      }
      goto L_08A3C944;
    }
L_08A3C944:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[3] >> 3u);
      if (branch_taken) {
          goto L_08A3C9AC;
      }
      goto L_08A3C94C;
    }
L_08A3C94C:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[10] = (aot_gpr[2] < static_cast<std::uint32_t>(21) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3C960;
      }
      goto L_08A3C954;
    }
L_08A3C954:
    aot_gpr[2] = (aot_gpr[3] >> 6u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08A3C9AC;
      }
      goto L_08A3C960;
    }
L_08A3C960:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[10] = (aot_gpr[2] < static_cast<std::uint32_t>(85) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3C970;
      }
      goto L_08A3C968;
    }
L_08A3C968:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(91));
      if (branch_taken) {
          goto L_08A3C9AC;
      }
      goto L_08A3C970;
    }
L_08A3C970:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[10] = (aot_gpr[2] < static_cast<std::uint32_t>(341) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3C984;
      }
      goto L_08A3C978;
    }
L_08A3C978:
    aot_gpr[2] = (aot_gpr[3] >> 12u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(110));
      if (branch_taken) {
          goto L_08A3C9AC;
      }
      goto L_08A3C984;
    }
L_08A3C984:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[10] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A3C998;
      }
      goto L_08A3C98C;
    }
L_08A3C98C:
    aot_gpr[2] = (aot_gpr[3] >> 15u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(119));
      if (branch_taken) {
          goto L_08A3C9AC;
      }
      goto L_08A3C998;
    }
L_08A3C998:
    aot_gpr[10] = (aot_gpr[10] < static_cast<std::uint32_t>(1365) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[2] = (0u | 126u);
      if (branch_taken) {
          goto L_08A3C9AC;
      }
      goto L_08A3C9A4;
    }
L_08A3C9A4:
    aot_gpr[2] = (aot_gpr[3] >> 18u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(124));
    goto L_08A3C9AC;
L_08A3C9AC:
    aot_gpr[10] = (aot_gpr[2] << 3u);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[6]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_08A3C9E8;
      }
      goto L_08A3C9C0;
    }
L_08A3C9C0:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 2u));
    aot_gpr[3] = (aot_gpr[3] >> 30u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 2u));
    aot_gpr[3] = (0u | 1u);
    aot_gpr[2] = (aot_gpr[3] << (aot_gpr[2] & 31u));
    aot_gpr[2] = (aot_gpr[14] | aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A3CA0C;
      }
      goto L_08A3C9E8;
    }
L_08A3C9E8:
    if (aot_gpr[11] == aot_gpr[10]) {
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(12)));
        goto L_08A3CA0C;
    }
    goto L_08A3C9F0;
L_08A3C9F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(12)));
        goto L_08A3CA0C;
    }
    goto L_08A3CA04;
L_08A3CA04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A3C9E8;
      }
      goto L_08A3CA0C;
    }
L_08A3CA0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(12), aot_gpr[12]);
    goto L_08A3CA1C;
L_08A3CA1C:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[9]) >> 2u));
    goto L_08A3CA20;
L_08A3CA20:
    aot_gpr[10] = (aot_gpr[10] >> 30u);
    aot_gpr[10] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 2u));
    aot_gpr[10] = (0u | 1u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[15] = (aot_gpr[10] << (aot_gpr[15] & 31u));
    aot_gpr[10] = (aot_gpr[14] < aot_gpr[15] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[10] = (aot_gpr[15] & aot_gpr[14]);
      if (branch_taken) {
          goto L_08A3CBE0;
      }
      goto L_08A3CA44;
    }
L_08A3CA44:
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[3] = (aot_gpr[9] << 3u);
      if (branch_taken) {
          goto L_08A3CA74;
      }
      goto L_08A3CA4C;
    }
L_08A3CA4C:
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[7]);
    aot_gpr[15] = (aot_gpr[15] << 1u);
    aot_gpr[10] = (aot_gpr[15] & aot_gpr[14]);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3CA70;
      }
      goto L_08A3CA60;
    }
L_08A3CA60:
    aot_gpr[15] = (aot_gpr[15] << 1u);
    aot_gpr[10] = (aot_gpr[15] & aot_gpr[14]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3CA60;
      }
      goto L_08A3CA70;
    }
L_08A3CA70:
    aot_gpr[3] = (aot_gpr[9] << 3u);
    goto L_08A3CA74;
L_08A3CA74:
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    goto L_08A3CA78;
L_08A3CA78:
    aot_gpr[24] = (aot_gpr[9] | 0u);
    aot_gpr[10] = (aot_gpr[3] | 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    goto L_08A3CA84;
L_08A3CA84:
    if (aot_gpr[11] == aot_gpr[3]) {
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[9]) < 63 ? 1u : 0u);
        goto L_08A3CB5C;
    }
    goto L_08A3CA8C;
L_08A3CA8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    goto L_08A3CA90;
L_08A3CA90:
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[7]);
    aot_gpr[12] = (aot_gpr[2] - aot_gpr[5]);
    aot_gpr[25] = (static_cast<std::int32_t>(aot_gpr[12]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[25] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CB00;
      }
      goto L_08A3CAA4;
    }
L_08A3CAA4:
    aot_gpr[7] = (aot_gpr[5] | 1u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[11] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[13]);
    aot_gpr[6] = (aot_gpr[12] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[12]);
    aot_gpr[31] = (0x08A3CAE8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 16u, 0x08A3D130u>(ctx, &aot_mem) && ctx.pc == 0x08A3CAE8u) goto L_08A3CAE8;
    return;
L_08A3CAE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3CB00:
    if (static_cast<std::int32_t>(aot_gpr[12]) >= 0) {
    aot_gpr[6] = (aot_gpr[11] + aot_gpr[2]);
        goto L_08A3CB20;
    }
    goto L_08A3CB08;
L_08A3CB08:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[11] != aot_gpr[3]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
        goto L_08A3CA90;
    }
    goto L_08A3CB14;
L_08A3CB14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[9]) < 63 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3CB5C;
      }
      goto L_08A3CB1C;
    }
L_08A3CB1C:
    aot_gpr[6] = (aot_gpr[11] + aot_gpr[2]);
    goto L_08A3CB20;
L_08A3CB20:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[11]);
    aot_gpr[7] = (aot_gpr[7] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[31] = (0x08A3CB44u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 16u, 0x08A3D130u>(ctx, &aot_mem) && ctx.pc == 0x08A3CB44u) goto L_08A3CB44;
    return;
L_08A3CB44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3CB5C:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3CB70;
      }
      goto L_08A3CB68;
    }
L_08A3CB68:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08A3CB70;
L_08A3CB70:
    aot_gpr[11] = (aot_gpr[9] & 3u);
    if (aot_gpr[11] != 0u) {
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
        goto L_08A3CA84;
    }
    goto L_08A3CB7C;
L_08A3CB7C:
    aot_gpr[11] = (aot_gpr[24] & 3u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08A3CB98;
      }
      goto L_08A3CB88;
    }
L_08A3CB88:
    aot_gpr[10] = (~(aot_gpr[15] | 0u));
    aot_gpr[14] = (aot_gpr[14] & aot_gpr[10]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[14]);
      if (branch_taken) {
          goto L_08A3CBA4;
      }
      goto L_08A3CB98;
    }
L_08A3CB98:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[11] == aot_gpr[10];
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3CB7C;
      }
      goto L_08A3CBA4;
    }
L_08A3CBA4:
    aot_gpr[15] = (aot_gpr[15] << 1u);
    aot_gpr[10] = (aot_gpr[14] < aot_gpr[15] ? 1u : 0u);
    if (aot_gpr[10] != 0u) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_08A3CBE4;
    }
    goto L_08A3CBB4;
L_08A3CBB4:
    { const bool branch_taken = aot_gpr[15] == 0u;
    aot_gpr[10] = (aot_gpr[15] & aot_gpr[14]);
      if (branch_taken) {
          goto L_08A3CBE0;
      }
      goto L_08A3CBBC;
    }
L_08A3CBBC:
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[3] = (aot_gpr[9] << 3u);
      if (branch_taken) {
          goto L_08A3CBD8;
      }
      goto L_08A3CBC4;
    }
L_08A3CBC4:
    aot_gpr[15] = (aot_gpr[15] << 1u);
    aot_gpr[10] = (aot_gpr[15] & aot_gpr[14]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3CBC4;
      }
      goto L_08A3CBD4;
    }
L_08A3CBD4:
    aot_gpr[3] = (aot_gpr[9] << 3u);
    goto L_08A3CBD8;
L_08A3CBD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
      if (branch_taken) {
          goto L_08A3CA78;
      }
      goto L_08A3CBE0;
    }
L_08A3CBE0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_08A3CBE4;
L_08A3CBE4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (aot_gpr[10] & aot_gpr[7]);
    aot_gpr[10] = (aot_gpr[11] - aot_gpr[5]);
    aot_gpr[11] = (aot_gpr[11] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[10]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3CC04;
      }
      goto L_08A3CBFC;
    }
L_08A3CBFC:
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[16] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A3CC68;
      }
      goto L_08A3CC04;
    }
L_08A3CC04:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[31] = (0x08A3CC18u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    goto L_08A3C37C;
L_08A3CC18:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[8] & aot_gpr[7]);
    aot_gpr[10] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A3CC4C;
      }
      goto L_08A3CC40;
    }
L_08A3CC40:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[10]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A3CC68;
      }
      goto L_08A3CC4C;
    }
L_08A3CC4C:
    aot_gpr[31] = (0x08A3CC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 16u, 0x08A3D130u>(ctx, &aot_mem) && ctx.pc == 0x08A3CC54u) goto L_08A3CC54;
    return;
L_08A3CC54:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3CC68:
    aot_gpr[7] = (aot_gpr[5] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[10] | 1u);
    aot_gpr[31] = (0x08A3CC84u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 16u, 0x08A3D130u>(ctx, &aot_mem) && ctx.pc == 0x08A3CC84u) goto L_08A3CC84;
    return;
L_08A3CC84:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3CC98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CF38;
      }
      goto L_08A3CCA8;
    }
L_08A3CCA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08A3CCB4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 12u, 0x08A3D0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3CCB4u) goto L_08A3CCB4;
    return;
L_08A3CCB4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[7] = (aot_gpr[10] & aot_gpr[7]);
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15856));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (aot_gpr[11] & aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[10] & 1u);
    { const bool branch_taken = aot_gpr[9] != aot_gpr[2];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A3CD5C;
      }
      goto L_08A3CCF0;
    }
L_08A3CCF0:
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[7] = (aot_gpr[11] + aot_gpr[7]);
      if (branch_taken) {
          goto L_08A3CD14;
      }
      goto L_08A3CCF8;
    }
L_08A3CCF8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    goto L_08A3CD14;
L_08A3CD14:
    aot_gpr[6] = (aot_gpr[7] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-14824)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CD48;
      }
      goto L_08A3CD34;
    }
L_08A3CD34:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[31] = (0x08A3CD44u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-14820)));
    goto L_08A3CF44;
L_08A3CD44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A3CD48;
L_08A3CD48:
    aot_gpr[31] = (0x08A3CD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 16u, 0x08A3D130u>(ctx, &aot_mem) && ctx.pc == 0x08A3CD50u) goto L_08A3CD50;
    return;
L_08A3CD50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3CD5C:
    aot_gpr[2] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[11]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3CD98;
      }
      goto L_08A3CD6C;
    }
L_08A3CD6C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[12];
    aot_gpr[7] = (aot_gpr[3] + aot_gpr[7]);
      if (branch_taken) {
          goto L_08A3CD8C;
      }
      goto L_08A3CD84;
    }
L_08A3CD84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3CD98;
      }
      goto L_08A3CD8C;
    }
L_08A3CD8C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_08A3CD98;
L_08A3CD98:
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[11]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] & 1u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[9] = (aot_gpr[7] | 1u);
        goto L_08A3CDEC;
    }
    goto L_08A3CDAC;
L_08A3CDAC:
    aot_gpr[7] = (aot_gpr[11] + aot_gpr[7]);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A3CDDC;
      }
      goto L_08A3CDB8;
    }
L_08A3CDB8:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (aot_gpr[11] != aot_gpr[2]) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(12)));
        goto L_08A3CDE0;
    }
    goto L_08A3CDC4;
L_08A3CDC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[10] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A3CDE8;
      }
      goto L_08A3CDDC;
    }
L_08A3CDDC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(12)));
    goto L_08A3CDE0;
L_08A3CDE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    goto L_08A3CDE8;
L_08A3CDE8:
    aot_gpr[9] = (aot_gpr[7] | 1u);
    goto L_08A3CDEC;
L_08A3CDEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[7]);
    { const bool branch_taken = aot_gpr[10] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A3CF30;
      }
      goto L_08A3CDFC;
    }
L_08A3CDFC:
    aot_gpr[9] = (aot_gpr[7] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (aot_gpr[7] >> 9u);
      if (branch_taken) {
          goto L_08A3CE50;
      }
      goto L_08A3CE08;
    }
L_08A3CE08:
    aot_gpr[6] = (aot_gpr[7] >> 3u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    aot_gpr[10] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[10] << (aot_gpr[7] & 31u));
    aot_gpr[7] = (aot_gpr[9] | aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A3CF30;
      }
      goto L_08A3CE50;
    }
L_08A3CE50:
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[10] = (aot_gpr[9] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3CE60;
      }
      goto L_08A3CE58;
    }
L_08A3CE58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[7] >> 3u);
      if (branch_taken) {
          goto L_08A3CEC0;
      }
      goto L_08A3CE60;
    }
L_08A3CE60:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[10] = (aot_gpr[9] < static_cast<std::uint32_t>(21) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3CE74;
      }
      goto L_08A3CE68;
    }
L_08A3CE68:
    aot_gpr[9] = (aot_gpr[7] >> 6u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08A3CEC0;
      }
      goto L_08A3CE74;
    }
L_08A3CE74:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[10] = (aot_gpr[9] < static_cast<std::uint32_t>(85) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3CE84;
      }
      goto L_08A3CE7C;
    }
L_08A3CE7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(91));
      if (branch_taken) {
          goto L_08A3CEC0;
      }
      goto L_08A3CE84;
    }
L_08A3CE84:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[10] = (aot_gpr[9] < static_cast<std::uint32_t>(341) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3CE98;
      }
      goto L_08A3CE8C;
    }
L_08A3CE8C:
    aot_gpr[9] = (aot_gpr[7] >> 12u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(110));
      if (branch_taken) {
          goto L_08A3CEC0;
      }
      goto L_08A3CE98;
    }
L_08A3CE98:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[10] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A3CEAC;
      }
      goto L_08A3CEA0;
    }
L_08A3CEA0:
    aot_gpr[9] = (aot_gpr[7] >> 15u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(119));
      if (branch_taken) {
          goto L_08A3CEC0;
      }
      goto L_08A3CEAC;
    }
L_08A3CEAC:
    aot_gpr[10] = (aot_gpr[10] < static_cast<std::uint32_t>(1365) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[9] = (0u | 126u);
      if (branch_taken) {
          goto L_08A3CEC0;
      }
      goto L_08A3CEB8;
    }
L_08A3CEB8:
    aot_gpr[9] = (aot_gpr[7] >> 18u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(124));
    goto L_08A3CEC0;
L_08A3CEC0:
    aot_gpr[11] = (aot_gpr[9] << 3u);
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[5]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A3CEFC;
      }
      goto L_08A3CED4;
    }
L_08A3CED4:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[9]) >> 2u));
    aot_gpr[6] = (aot_gpr[6] >> 30u);
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[9] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[9] << (aot_gpr[6] & 31u));
    aot_gpr[6] = (aot_gpr[7] | aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A3CF20;
      }
      goto L_08A3CEFC;
    }
L_08A3CEFC:
    if (aot_gpr[10] == aot_gpr[11]) {
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(12)));
        goto L_08A3CF20;
    }
    goto L_08A3CF04;
L_08A3CF04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(12)));
        goto L_08A3CF20;
    }
    goto L_08A3CF18;
L_08A3CF18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A3CEFC;
      }
      goto L_08A3CF20;
    }
L_08A3CF20:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(12), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    goto L_08A3CF30;
L_08A3CF30:
    aot_gpr[31] = (0x08A3CF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 16u, 0x08A3D130u>(ctx, &aot_mem) && ctx.pc == 0x08A3CF38u) goto L_08A3CF38;
    return;
L_08A3CF38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3CF44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A3CF70u);
    aot_gpr[20] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 12u, 0x08A3D0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3CF70u) goto L_08A3CF70;
    return;
L_08A3CF70:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-15856));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr[19] = (aot_gpr[4] & aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[19] - aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4096));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-17));
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[4] << 12u);
    aot_gpr[18] = (0u + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 4096 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 7u, 0x08A3D084u>(ctx, &aot_mem); return;
      }
      goto L_08A3CFB4;
    }
L_08A3CFB4:
    aot_gpr[31] = (0x08A3CFBCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 43u, 0x08A3D304u>(ctx, &aot_mem) && ctx.pc == 0x08A3CFBCu) goto L_08A3CFBC;
    return;
L_08A3CFBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[5] = (0u - aot_gpr[18]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 5u, 0x08A3D058u>(ctx, &aot_mem); return;
      }
      goto L_08A3CFCC;
    }
L_08A3CFCC:
    aot_gpr[31] = (0x08A3CFD4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 43u, 0x08A3D304u>(ctx, &aot_mem) && ctx.pc == 0x08A3CFD4u) goto L_08A3CFD4;
    return;
L_08A3CFD4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[4] = (aot_gpr[19] - aot_gpr[18]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 3u, 0x08A3D010u>(ctx, &aot_mem); return;
      }
      goto L_08A3CFE0;
    }
L_08A3CFE0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A3CFECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 43u, 0x08A3D304u>(ctx, &aot_mem) && ctx.pc == 0x08A3CFECu) goto L_08A3CFEC;
    return;
L_08A3CFEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 9u, 0x08A3D0B0u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 1u, 0x08A3D004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0568(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0568_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_568(Runtime &runtime) {
    runtime.register_generated_unit(568u, 0x08A3C000u, 4096u, &recomp_unit_0568, &recomp_unit_0568_entry);
    runtime.register_function(0x08A3C000u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C008u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C020u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C028u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C038u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C040u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C048u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C054u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C068u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C070u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C078u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C084u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C08Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C094u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C09Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C0A8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C0B8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C0C8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C0D8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C0E0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C0E4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C0F4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C0FCu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C114u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C120u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C138u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C144u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C184u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C190u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C19Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C1ACu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C1B0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C200u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C20Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C214u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C218u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C220u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C230u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C234u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C23Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C24Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C25Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C260u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C264u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C278u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C288u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C28Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C294u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C2A4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C2A8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C2B0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C2C0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C2D0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C2D4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C2D8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C2ECu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C308u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C31Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C344u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C348u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C364u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C368u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C37Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C3F4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C404u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C414u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C420u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C428u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C430u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C434u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C448u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C45Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C468u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C470u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C47Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C48Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C4A4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C4ACu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C4D0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C4E4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C504u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C50Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C534u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C56Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C57Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C5B4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C5BCu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C5F8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C604u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C608u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C620u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C630u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C634u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C664u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C68Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C694u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C6A8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C6C4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C6DCu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C6E8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C718u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C730u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C73Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C744u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C74Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C758u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C760u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C768u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C770u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C77Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C784u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C790u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C79Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C7A4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C7BCu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C7C0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C7D4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C7DCu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C7E4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C7F0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C7F8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C81Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C834u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C838u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C840u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C84Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C864u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C870u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C87Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C8C4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C8DCu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C8F4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C924u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C93Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C944u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C94Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C954u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C960u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C968u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C970u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C978u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C984u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C98Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C998u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C9A4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C9ACu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C9C0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C9E8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3C9F0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CA04u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CA0Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CA1Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CA20u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CA44u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CA4Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CA60u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CA70u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CA74u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CA78u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CA84u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CA8Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CA90u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CAA4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CAE8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CB00u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CB08u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CB14u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CB1Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CB20u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CB44u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CB5Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CB68u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CB70u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CB7Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CB88u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CB98u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CBA4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CBB4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CBBCu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CBC4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CBD4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CBD8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CBE0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CBE4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CBFCu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CC04u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CC18u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CC40u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CC4Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CC54u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CC68u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CC84u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CC98u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CCA8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CCB4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CCF0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CCF8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CD14u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CD34u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CD44u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CD48u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CD50u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CD5Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CD6Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CD84u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CD8Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CD98u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CDACu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CDB8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CDC4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CDDCu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CDE0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CDE8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CDECu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CDFCu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CE08u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CE50u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CE58u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CE60u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CE68u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CE74u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CE7Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CE84u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CE8Cu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CE98u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CEA0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CEACu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CEB8u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CEC0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CED4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CEFCu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CF04u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CF18u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CF20u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CF30u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CF38u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CF44u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CF70u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CFB4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CFBCu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CFCCu, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CFD4u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CFE0u, &recomp_unit_0568, "recomp_unit_0568");
    runtime.register_function(0x08A3CFECu, &recomp_unit_0568, "recomp_unit_0568");
}
} // namespace psprecomp
