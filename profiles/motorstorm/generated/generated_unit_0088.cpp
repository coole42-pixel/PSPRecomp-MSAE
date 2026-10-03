#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0088[1022] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0,
    0, 0, 0, 0, 13, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0,
    0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0,
    0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 0, 45, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 56, 0, 0, 57, 0, 58, 0, 59, 0,
    60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 64, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 69,
    0, 0, 70, 0, 71, 72, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0,
    0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 84, 85, 0, 86,
    0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 98, 99, 0, 0, 0, 100, 0,
    101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 0, 0, 108, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0,
    0, 0, 111, 0, 112, 0, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 119,
    0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 128, 0,
    0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 133, 0, 134, 0, 0, 0, 0, 135, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 158, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 160, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 167, 0,
    0, 168, 0, 0, 169, 0, 170, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    176, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184,
    0, 185, 186, 0, 0, 187, 0, 0, 188, 0, 189, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0,
    0, 194, 0, 0, 195, 0, 196, 197, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 202, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214,
    0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 223, 0,
    224, 225, 0, 0, 226, 0, 227, 228, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 0,
    0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244,
    245, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 249, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 254,
};
void recomp_unit_0088_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0885C000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0088[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0885C000;
    case 2u: goto L_0885C010;
    case 3u: goto L_0885C070;
    case 4u: goto L_0885C088;
    case 5u: goto L_0885C098;
    case 6u: goto L_0885C0AC;
    case 7u: goto L_0885C0B4;
    case 8u: goto L_0885C0BC;
    case 9u: goto L_0885C0C4;
    case 10u: goto L_0885C0DC;
    case 11u: goto L_0885C0EC;
    case 12u: goto L_0885C0F8;
    case 13u: goto L_0885C110;
    case 14u: goto L_0885C114;
    case 15u: goto L_0885C11C;
    case 16u: goto L_0885C134;
    case 17u: goto L_0885C13C;
    case 18u: goto L_0885C144;
    case 19u: goto L_0885C15C;
    case 20u: goto L_0885C164;
    case 21u: goto L_0885C16C;
    case 22u: goto L_0885C184;
    case 23u: goto L_0885C190;
    case 24u: goto L_0885C19C;
    case 25u: goto L_0885C1C8;
    case 26u: goto L_0885C1D4;
    case 27u: goto L_0885C1E8;
    case 28u: goto L_0885C1F4;
    case 29u: goto L_0885C200;
    case 30u: goto L_0885C21C;
    case 31u: goto L_0885C224;
    case 32u: goto L_0885C230;
    case 33u: goto L_0885C238;
    case 34u: goto L_0885C240;
    case 35u: goto L_0885C264;
    case 36u: goto L_0885C270;
    case 37u: goto L_0885C278;
    case 38u: goto L_0885C288;
    case 39u: goto L_0885C298;
    case 40u: goto L_0885C2B0;
    case 41u: goto L_0885C2D0;
    case 42u: goto L_0885C2D8;
    case 43u: goto L_0885C2E4;
    case 44u: goto L_0885C2EC;
    case 45u: goto L_0885C2F8;
    case 46u: goto L_0885C304;
    case 47u: goto L_0885C32C;
    case 48u: goto L_0885C338;
    case 49u: goto L_0885C350;
    case 50u: goto L_0885C368;
    case 51u: goto L_0885C38C;
    case 52u: goto L_0885C3C0;
    case 53u: goto L_0885C3C8;
    case 54u: goto L_0885C3D0;
    case 55u: goto L_0885C3D8;
    case 56u: goto L_0885C3DC;
    case 57u: goto L_0885C3E8;
    case 58u: goto L_0885C3F0;
    case 59u: goto L_0885C3F8;
    case 60u: goto L_0885C400;
    case 61u: goto L_0885C40C;
    case 62u: goto L_0885C424;
    case 63u: goto L_0885C43C;
    case 64u: goto L_0885C440;
    case 65u: goto L_0885C444;
    case 66u: goto L_0885C44C;
    case 67u: goto L_0885C45C;
    case 68u: goto L_0885C474;
    case 69u: goto L_0885C47C;
    case 70u: goto L_0885C488;
    case 71u: goto L_0885C490;
    case 72u: goto L_0885C494;
    case 73u: goto L_0885C498;
    case 74u: goto L_0885C4A0;
    case 75u: goto L_0885C4BC;
    case 76u: goto L_0885C4E4;
    case 77u: goto L_0885C4F8;
    case 78u: goto L_0885C504;
    case 79u: goto L_0885C51C;
    case 80u: goto L_0885C530;
    case 81u: goto L_0885C53C;
    case 82u: goto L_0885C554;
    case 83u: goto L_0885C56C;
    case 84u: goto L_0885C570;
    case 85u: goto L_0885C574;
    case 86u: goto L_0885C57C;
    case 87u: goto L_0885C588;
    case 88u: goto L_0885C594;
    case 89u: goto L_0885C59C;
    case 90u: goto L_0885C5B0;
    case 91u: goto L_0885C5B8;
    case 92u: goto L_0885C5C8;
    case 93u: goto L_0885C5EC;
    case 94u: goto L_0885C618;
    case 95u: goto L_0885C648;
    case 96u: goto L_0885C650;
    case 97u: goto L_0885C65C;
    case 98u: goto L_0885C664;
    case 99u: goto L_0885C668;
    case 100u: goto L_0885C678;
    case 101u: goto L_0885C680;
    case 102u: goto L_0885C688;
    case 103u: goto L_0885C690;
    case 104u: goto L_0885C6A8;
    case 105u: goto L_0885C6B0;
    case 106u: goto L_0885C6B8;
    case 107u: goto L_0885C6C0;
    case 108u: goto L_0885C6D0;
    case 109u: goto L_0885C6D4;
    case 110u: goto L_0885C6F4;
    case 111u: goto L_0885C708;
    case 112u: goto L_0885C710;
    case 113u: goto L_0885C71C;
    case 114u: goto L_0885C724;
    case 115u: goto L_0885C72C;
    case 116u: goto L_0885C734;
    case 117u: goto L_0885C758;
    case 118u: goto L_0885C770;
    case 119u: goto L_0885C77C;
    case 120u: goto L_0885C78C;
    case 121u: goto L_0885C7A0;
    case 122u: goto L_0885C7A8;
    case 123u: goto L_0885C7B8;
    case 124u: goto L_0885C7CC;
    case 125u: goto L_0885C7D8;
    case 126u: goto L_0885C7E4;
    case 127u: goto L_0885C7EC;
    case 128u: goto L_0885C7F8;
    case 129u: goto L_0885C808;
    case 130u: goto L_0885C81C;
    case 131u: goto L_0885C828;
    case 132u: goto L_0885C830;
    case 133u: goto L_0885C834;
    case 134u: goto L_0885C83C;
    case 135u: goto L_0885C850;
    case 136u: goto L_0885C854;
    case 137u: goto L_0885C87C;
    case 138u: goto L_0885C884;
    case 139u: goto L_0885C88C;
    case 140u: goto L_0885C894;
    case 141u: goto L_0885C89C;
    case 142u: goto L_0885C8BC;
    case 143u: goto L_0885C8C8;
    case 144u: goto L_0885C8D0;
    case 145u: goto L_0885C904;
    case 146u: goto L_0885C90C;
    case 147u: goto L_0885C920;
    case 148u: goto L_0885C92C;
    case 149u: goto L_0885C934;
    case 150u: goto L_0885C948;
    case 151u: goto L_0885C950;
    case 152u: goto L_0885C964;
    case 153u: goto L_0885C970;
    case 154u: goto L_0885C998;
    case 155u: goto L_0885C9BC;
    case 156u: goto L_0885C9D0;
    case 157u: goto L_0885C9EC;
    case 158u: goto L_0885C9F0;
    case 159u: goto L_0885C9FC;
    case 160u: goto L_0885CA18;
    case 161u: goto L_0885CA1C;
    case 162u: goto L_0885CA28;
    case 163u: goto L_0885CA48;
    case 164u: goto L_0885CA4C;
    case 165u: goto L_0885CA58;
    case 166u: goto L_0885CA74;
    case 167u: goto L_0885CA78;
    case 168u: goto L_0885CA84;
    case 169u: goto L_0885CA90;
    case 170u: goto L_0885CA98;
    case 171u: goto L_0885CA9C;
    case 172u: goto L_0885CAB4;
    case 173u: goto L_0885CAD0;
    case 174u: goto L_0885CAD4;
    case 175u: goto L_0885CAE0;
    case 176u: goto L_0885CB00;
    case 177u: goto L_0885CB04;
    case 178u: goto L_0885CB10;
    case 179u: goto L_0885CB2C;
    case 180u: goto L_0885CB30;
    case 181u: goto L_0885CB3C;
    case 182u: goto L_0885CB4C;
    case 183u: goto L_0885CB74;
    case 184u: goto L_0885CB7C;
    case 185u: goto L_0885CB84;
    case 186u: goto L_0885CB88;
    case 187u: goto L_0885CB94;
    case 188u: goto L_0885CBA0;
    case 189u: goto L_0885CBA8;
    case 190u: goto L_0885CBAC;
    case 191u: goto L_0885CBD0;
    case 192u: goto L_0885CBEC;
    case 193u: goto L_0885CBF8;
    case 194u: goto L_0885CC04;
    case 195u: goto L_0885CC10;
    case 196u: goto L_0885CC18;
    case 197u: goto L_0885CC1C;
    case 198u: goto L_0885CC24;
    case 199u: goto L_0885CC30;
    case 200u: goto L_0885CC3C;
    case 201u: goto L_0885CC48;
    case 202u: goto L_0885CC50;
    case 203u: goto L_0885CC54;
    case 204u: goto L_0885CC5C;
    case 205u: goto L_0885CCCC;
    case 206u: goto L_0885CCE4;
    case 207u: goto L_0885CD08;
    case 208u: goto L_0885CD14;
    case 209u: goto L_0885CD24;
    case 210u: goto L_0885CD30;
    case 211u: goto L_0885CD50;
    case 212u: goto L_0885CD54;
    case 213u: goto L_0885CD60;
    case 214u: goto L_0885CD7C;
    case 215u: goto L_0885CD84;
    case 216u: goto L_0885CD94;
    case 217u: goto L_0885CD9C;
    case 218u: goto L_0885CDA4;
    case 219u: goto L_0885CDAC;
    case 220u: goto L_0885CDC4;
    case 221u: goto L_0885CDD8;
    case 222u: goto L_0885CDF0;
    case 223u: goto L_0885CDF8;
    case 224u: goto L_0885CE00;
    case 225u: goto L_0885CE04;
    case 226u: goto L_0885CE10;
    case 227u: goto L_0885CE18;
    case 228u: goto L_0885CE1C;
    case 229u: goto L_0885CE24;
    case 230u: goto L_0885CE38;
    case 231u: goto L_0885CE40;
    case 232u: goto L_0885CE48;
    case 233u: goto L_0885CE50;
    case 234u: goto L_0885CE58;
    case 235u: goto L_0885CE6C;
    case 236u: goto L_0885CE74;
    case 237u: goto L_0885CE84;
    case 238u: goto L_0885CE94;
    case 239u: goto L_0885CE9C;
    case 240u: goto L_0885CEE0;
    case 241u: goto L_0885CF44;
    case 242u: goto L_0885CF50;
    case 243u: goto L_0885CF5C;
    case 244u: goto L_0885CF7C;
    case 245u: goto L_0885CF80;
    case 246u: goto L_0885CF8C;
    case 247u: goto L_0885CFA0;
    case 248u: goto L_0885CFB0;
    case 249u: goto L_0885CFB4;
    case 250u: goto L_0885CFC8;
    case 251u: goto L_0885CFD0;
    case 252u: goto L_0885CFE4;
    case 253u: goto L_0885CFEC;
    case 254u: goto L_0885CFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0885C000:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C010:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[6] = (aot_gpr[5] ^ 3u);
    aot_gpr[7] = (aot_gpr[5] ^ 4u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] ^ 5u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(-7484)));
    aot_gpr[5] = (aot_gpr[5] ^ 1u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(188), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(-7483)));
    aot_gpr[5] = (0u | 2u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(188)));
        goto L_0885C070;
    }
    goto L_0885C070;
L_0885C070:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(188), aot_gpr[5]);
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(5248)));
    aot_gpr[5] = (0u | 8u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(188)));
        goto L_0885C088;
    }
    goto L_0885C088;
L_0885C088:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(188), aot_gpr[5]);
    aot_gpr[7] = (0u | 4u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[7] = (aot_gpr[5] | 0u);
        goto L_0885C098;
    }
    goto L_0885C098;
L_0885C098:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(188), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (0u | 8u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0885C0BC;
      }
      goto L_0885C0AC;
    }
L_0885C0AC:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885C0BC;
      }
      goto L_0885C0B4;
    }
L_0885C0B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0885C0BC;
      }
      goto L_0885C0BC;
    }
L_0885C0BC:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(188), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C0C4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4444)));
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_0885C0DC;
    }
    goto L_0885C0DC;
L_0885C0DC:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
        goto L_0885C0EC;
    }
    goto L_0885C0EC;
L_0885C0EC:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0885C114;
      }
      goto L_0885C0F8;
    }
L_0885C0F8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] & 768u);
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C114;
      }
      goto L_0885C110;
    }
L_0885C110:
    aot_gpr[6] = (0u | 1u);
    goto L_0885C114;
L_0885C114:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(192), aot_gpr[6]);
      if (branch_taken) {
          goto L_0885C13C;
      }
      goto L_0885C11C;
    }
L_0885C11C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] & 256u);
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C13C;
      }
      goto L_0885C134;
    }
L_0885C134:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] | 2u);
      if (branch_taken) {
          goto L_0885C13C;
      }
      goto L_0885C13C;
    }
L_0885C13C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(192), aot_gpr[6]);
      if (branch_taken) {
          goto L_0885C164;
      }
      goto L_0885C144;
    }
L_0885C144:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & 512u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C164;
      }
      goto L_0885C15C;
    }
L_0885C15C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] | 4u);
      if (branch_taken) {
          goto L_0885C164;
      }
      goto L_0885C164;
    }
L_0885C164:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(192), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C16C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0885C184u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 109u, 0x08A4C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C184u) goto L_0885C184;
    return;
L_0885C184:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x0885C190u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 116u, 0x08A4C790u>(ctx, &aot_mem) && ctx.pc == 0x0885C190u) goto L_0885C190;
    return;
L_0885C190:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C19C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0885C240;
      }
      goto L_0885C1C8;
    }
L_0885C1C8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_0885C240;
      }
      goto L_0885C1D4;
    }
L_0885C1D4:
    aot_gpr[4] = (32639u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 65535u);
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(120));
    goto L_0885C1E8;
L_0885C1E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x0885C1F4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 41u, 0x089082B4u>(ctx, &aot_mem) && ctx.pc == 0x0885C1F4u) goto L_0885C1F4;
    return;
L_0885C1F4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885C224;
      }
      goto L_0885C200;
    }
L_0885C200:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0885C21Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_0885C16C;
L_0885C21C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C238;
      }
      goto L_0885C224;
    }
L_0885C224:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x0885C230u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 5u, 0x0890806Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C230u) goto L_0885C230;
    return;
L_0885C230:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0885C238;
L_0885C238:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885C1E8;
      }
      goto L_0885C240;
    }
L_0885C240:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C264:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(189)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0885C278;
      }
      goto L_0885C270;
    }
L_0885C270:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0885C278;
L_0885C278:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(140)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C288:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(189)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
        goto L_0885C298;
    }
    goto L_0885C298;
L_0885C298:
    aot_gpr[6] = (0u | 13u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(152)));
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C2B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[10] = (aot_gpr[4] & 255u);
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0885C2D0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 120u, 0x08A4C7DCu>(ctx, &aot_mem) && ctx.pc == 0x0885C2D0u) goto L_0885C2D0;
    return;
L_0885C2D0:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C2EC;
      }
      goto L_0885C2D8;
    }
L_0885C2D8:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0885C2E4u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 127u, 0x08A4C830u>(ctx, &aot_mem) && ctx.pc == 0x0885C2E4u) goto L_0885C2E4;
    return;
L_0885C2E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C2F8;
      }
      goto L_0885C2EC;
    }
L_0885C2EC:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0885C2F8u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 105u, 0x08A4C6F0u>(ctx, &aot_mem) && ctx.pc == 0x0885C2F8u) goto L_0885C2F8;
    return;
L_0885C2F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C304:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0885C350;
      }
      goto L_0885C32C;
    }
L_0885C32C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0885C338u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 169u, 0x0885BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C338u) goto L_0885C338;
    return;
L_0885C338:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(132));
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0885C350u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    goto L_0885C2B0;
L_0885C350:
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
L_0885C368:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0885C4A0;
      }
      goto L_0885C38C;
    }
L_0885C38C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[18] << 8u);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-208));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885C3C0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_0885C264;
L_0885C3C0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0885C3DC;
      }
      goto L_0885C3C8;
    }
L_0885C3C8:
    aot_gpr[31] = (0x0885C3D0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_0885C288;
L_0885C3D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C3DC;
      }
      goto L_0885C3D8;
    }
L_0885C3D8:
    aot_gpr[17] = (0u | 1u);
    goto L_0885C3DC;
L_0885C3DC:
    aot_gpr[4] = (aot_gpr[17] & 255u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    goto L_0885C3E8;
L_0885C3E8:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C4A0;
      }
      goto L_0885C3F0;
    }
L_0885C3F0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C4A0;
      }
      goto L_0885C3F8;
    }
L_0885C3F8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C498;
      }
      goto L_0885C400;
    }
L_0885C400:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0885C440;
      }
      goto L_0885C40C;
    }
L_0885C40C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(84)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (aot_gpr[4] & 255u);
        goto L_0885C444;
    }
    goto L_0885C424;
L_0885C424:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(80)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0885C444;
      }
      goto L_0885C43C;
    }
L_0885C43C:
    aot_gpr[4] = (0u | 1u);
    goto L_0885C440;
L_0885C440:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0885C444;
L_0885C444:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C45C;
      }
      goto L_0885C44C;
    }
L_0885C44C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(189)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885C45Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_0885C304;
L_0885C45C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-208));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885C474u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_0885C264;
L_0885C474:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0885C494;
      }
      goto L_0885C47C;
    }
L_0885C47C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885C488u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_0885C288;
L_0885C488:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[8] & 255u);
      if (branch_taken) {
          goto L_0885C498;
      }
      goto L_0885C490;
    }
L_0885C490:
    aot_gpr[8] = (0u | 1u);
    goto L_0885C494;
L_0885C494:
    aot_gpr[4] = (aot_gpr[8] & 255u);
    goto L_0885C498;
L_0885C498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C3E8;
      }
      goto L_0885C4A0;
    }
L_0885C4A0:
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
L_0885C4BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0885C5C8;
      }
      goto L_0885C4E4;
    }
L_0885C4E4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C5C8;
      }
      goto L_0885C4F8;
    }
L_0885C4F8:
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_0885C504;
L_0885C504:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(108)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885C5B8;
      }
      goto L_0885C51C;
    }
L_0885C51C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885C5B8;
      }
      goto L_0885C530;
    }
L_0885C530:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0885C570;
      }
      goto L_0885C53C;
    }
L_0885C53C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(84)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (aot_gpr[4] & 255u);
        goto L_0885C574;
    }
    goto L_0885C554;
L_0885C554:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(80)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_0885C574;
      }
      goto L_0885C56C;
    }
L_0885C56C:
    aot_gpr[4] = (0u | 1u);
    goto L_0885C570;
L_0885C570:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0885C574;
L_0885C574:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C5B8;
      }
      goto L_0885C57C;
    }
L_0885C57C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(189)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C594;
      }
      goto L_0885C588;
    }
L_0885C588:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_0885C5B8;
      }
      goto L_0885C594;
    }
L_0885C594:
    aot_gpr[31] = (0x0885C59Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 160u, 0x0885BAB4u>(ctx, &aot_mem) && ctx.pc == 0x0885C59Cu) goto L_0885C59C;
    return;
L_0885C59C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(132)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885C5B8;
      }
      goto L_0885C5B0;
    }
L_0885C5B0:
    aot_gpr[31] = (0x0885C5B8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 159u, 0x0885BA9Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C5B8u) goto L_0885C5B8;
    return;
L_0885C5B8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_0885C504;
      }
      goto L_0885C5C8;
    }
L_0885C5C8:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C5EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0885C734;
      }
      goto L_0885C618;
    }
L_0885C618:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[18] << 8u);
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[20] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(180)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x0885C648u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885C264;
L_0885C648:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C668;
      }
      goto L_0885C650;
    }
L_0885C650:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(180)));
    aot_gpr[31] = (0x0885C65Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885C288;
L_0885C65C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C668;
      }
      goto L_0885C664;
    }
L_0885C664:
    aot_gpr[17] = (0u | 1u);
    goto L_0885C668;
L_0885C668:
    aot_gpr[4] = (aot_gpr[17] & 255u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    goto L_0885C678;
L_0885C678:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C734;
      }
      goto L_0885C680;
    }
L_0885C680:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C734;
      }
      goto L_0885C688;
    }
L_0885C688:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C72C;
      }
      goto L_0885C690;
    }
L_0885C690:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(180)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885C6D4;
      }
      goto L_0885C6A8;
    }
L_0885C6A8:
    aot_gpr[31] = (0x0885C6B0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 161u, 0x0885BACCu>(ctx, &aot_mem) && ctx.pc == 0x0885C6B0u) goto L_0885C6B0;
    return;
L_0885C6B0:
    aot_gpr[31] = (0x0885C6B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(180)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 162u, 0x0885BAD8u>(ctx, &aot_mem) && ctx.pc == 0x0885C6B8u) goto L_0885C6B8;
    return;
L_0885C6B8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          goto L_0885C6D4;
      }
      goto L_0885C6C0;
    }
L_0885C6C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(180)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885C6D0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(189)));
    goto L_0885C304;
L_0885C6D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(180)));
    goto L_0885C6D4;
L_0885C6D4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(208));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(180), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[20] ? 1u : 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (aot_gpr[5] | 0u);
        goto L_0885C6F4;
    }
    goto L_0885C6F4;
L_0885C6F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(180), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0885C708u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885C264;
L_0885C708:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[8] & 255u);
      if (branch_taken) {
          goto L_0885C72C;
      }
      goto L_0885C710;
    }
L_0885C710:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(180)));
    aot_gpr[31] = (0x0885C71Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885C288;
L_0885C71C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[8] & 255u);
      if (branch_taken) {
          goto L_0885C72C;
      }
      goto L_0885C724;
    }
L_0885C724:
    aot_gpr[8] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[8] & 255u);
    goto L_0885C72C;
L_0885C72C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C678;
      }
      goto L_0885C734;
    }
L_0885C734:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C758:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0885C770u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0885C4BC;
L_0885C770:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x0885C77Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885C5EC;
L_0885C77C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C78C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0885C7A0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0885C368;
L_0885C7A0:
    aot_gpr[31] = (0x0885C7A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885C758;
L_0885C7A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C7B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (aot_gpr[5] & aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C7CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0885C7E4;
      }
      goto L_0885C7D8;
    }
L_0885C7D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[5] & aot_gpr[4]);
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    goto L_0885C7E4;
L_0885C7E4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C7EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C828;
      }
      goto L_0885C7F8;
    }
L_0885C7F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C81C;
      }
      goto L_0885C808;
    }
L_0885C808:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885C830;
      }
      goto L_0885C81C;
    }
L_0885C81C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885C7F8;
      }
      goto L_0885C828;
    }
L_0885C828:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0885C834;
      }
      goto L_0885C830;
    }
L_0885C830:
    aot_gpr[2] = (0u | 1u);
    goto L_0885C834;
L_0885C834:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C83C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C87C;
      }
      goto L_0885C850;
    }
L_0885C850:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0885C854;
L_0885C854:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_0885C854;
    }
    goto L_0885C87C;
L_0885C87C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C884:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 0u);
    goto L_0885C88C;
L_0885C88C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C8C8;
      }
      goto L_0885C894;
    }
L_0885C894:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885C8C8;
      }
      goto L_0885C89C;
    }
L_0885C89C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[2] = (0u | 1u);
        goto L_0885C8BC;
    }
    goto L_0885C8BC;
L_0885C8BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] & 255u);
      if (branch_taken) {
          goto L_0885C88C;
      }
      goto L_0885C8C8;
    }
L_0885C8C8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C8D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[4] ^ 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0885C970;
      }
      goto L_0885C904;
    }
L_0885C904:
    aot_gpr[31] = (0x0885C90Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 47u, 0x08861354u>(ctx, &aot_mem) && ctx.pc == 0x0885C90Cu) goto L_0885C90C;
    return;
L_0885C90C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C92C;
      }
      goto L_0885C920;
    }
L_0885C920:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0885C92Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 70u, 0x0886156Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C92Cu) goto L_0885C92C;
    return;
L_0885C92C:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885C948;
      }
      goto L_0885C934;
    }
L_0885C934:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_0885C948;
L_0885C948:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885C964;
      }
      goto L_0885C950;
    }
L_0885C950:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_0885C964;
L_0885C964:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885C904;
      }
      goto L_0885C970;
    }
L_0885C970:
    aot_gpr[2] = (0u < aot_gpr[19] ? 1u : 0u);
    aot_gpr[4] = (0u < aot_gpr[18] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[4]);
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
L_0885C998:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0885CBD0;
      }
      goto L_0885C9BC;
    }
L_0885C9BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0885C9F0;
      }
      goto L_0885C9D0;
    }
L_0885C9D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(96)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C9F0;
      }
      goto L_0885C9EC;
    }
L_0885C9EC:
    aot_gpr[18] = (0u | 1u);
    goto L_0885C9F0;
L_0885C9F0:
    aot_gpr[4] = (aot_gpr[18] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CA1C;
      }
      goto L_0885C9FC;
    }
L_0885C9FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CA1C;
      }
      goto L_0885CA18;
    }
L_0885CA18:
    aot_gpr[18] = (0u | 1u);
    goto L_0885CA1C;
L_0885CA1C:
    aot_gpr[4] = (aot_gpr[18] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CA4C;
      }
      goto L_0885CA28;
    }
L_0885CA28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CA4C;
      }
      goto L_0885CA48;
    }
L_0885CA48:
    aot_gpr[18] = (0u | 1u);
    goto L_0885CA4C;
L_0885CA4C:
    aot_gpr[4] = (aot_gpr[18] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CA78;
      }
      goto L_0885CA58;
    }
L_0885CA58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CA78;
      }
      goto L_0885CA74;
    }
L_0885CA74:
    aot_gpr[18] = (0u | 1u);
    goto L_0885CA78;
L_0885CA78:
    aot_gpr[4] = (aot_gpr[18] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CA9C;
      }
      goto L_0885CA84;
    }
L_0885CA84:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0885CA90u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 125u, 0x08860EDCu>(ctx, &aot_mem) && ctx.pc == 0x0885CA90u) goto L_0885CA90;
    return;
L_0885CA90:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CA9C;
      }
      goto L_0885CA98;
    }
L_0885CA98:
    aot_gpr[18] = (0u | 1u);
    goto L_0885CA9C;
L_0885CA9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(96)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CAD4;
      }
      goto L_0885CAB4;
    }
L_0885CAB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CAD4;
      }
      goto L_0885CAD0;
    }
L_0885CAD0:
    aot_gpr[19] = (0u | 1u);
    goto L_0885CAD4;
L_0885CAD4:
    aot_gpr[4] = (aot_gpr[19] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CB04;
      }
      goto L_0885CAE0;
    }
L_0885CAE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CB04;
      }
      goto L_0885CB00;
    }
L_0885CB00:
    aot_gpr[19] = (0u | 1u);
    goto L_0885CB04;
L_0885CB04:
    aot_gpr[4] = (aot_gpr[19] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CB30;
      }
      goto L_0885CB10;
    }
L_0885CB10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CB30;
      }
      goto L_0885CB2C;
    }
L_0885CB2C:
    aot_gpr[19] = (0u | 1u);
    goto L_0885CB30;
L_0885CB30:
    aot_gpr[4] = (aot_gpr[19] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CB88;
      }
      goto L_0885CB3C;
    }
L_0885CB3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0885CB7C;
      }
      goto L_0885CB4C;
    }
L_0885CB4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(192)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_0885CB74;
    }
    goto L_0885CB74;
L_0885CB74:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    goto L_0885CB7C;
L_0885CB7C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CB88;
      }
      goto L_0885CB84;
    }
L_0885CB84:
    aot_gpr[19] = (0u | 1u);
    goto L_0885CB88;
L_0885CB88:
    aot_gpr[4] = (aot_gpr[19] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CBAC;
      }
      goto L_0885CB94;
    }
L_0885CB94:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0885CBA0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 129u, 0x08860F18u>(ctx, &aot_mem) && ctx.pc == 0x0885CBA0u) goto L_0885CBA0;
    return;
L_0885CBA0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CBAC;
      }
      goto L_0885CBA8;
    }
L_0885CBA8:
    aot_gpr[19] = (0u | 1u);
    goto L_0885CBAC;
L_0885CBAC:
    aot_gpr[5] = (aot_gpr[18] & 255u);
    aot_gpr[4] = (aot_gpr[19] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885C9BC;
      }
      goto L_0885CBD0;
    }
L_0885CBD0:
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
L_0885CBEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CC10;
      }
      goto L_0885CBF8;
    }
L_0885CBF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(109)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885CC18;
      }
      goto L_0885CC04;
    }
L_0885CC04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885CBF8;
      }
      goto L_0885CC10;
    }
L_0885CC10:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CC1C;
      }
      goto L_0885CC18;
    }
L_0885CC18:
    aot_gpr[2] = (0u | 1u);
    goto L_0885CC1C;
L_0885CC1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CC24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CC48;
      }
      goto L_0885CC30;
    }
L_0885CC30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885CC50;
      }
      goto L_0885CC3C;
    }
L_0885CC3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885CC30;
      }
      goto L_0885CC48;
    }
L_0885CC48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CC54;
      }
      goto L_0885CC50;
    }
L_0885CC50:
    aot_gpr[2] = (0u | 1u);
    goto L_0885CC54;
L_0885CC54:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CC5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(192)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[23] | aot_gpr[18]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    aot_gpr[31] = (0x0885CCCCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 37u, 0x0886023Cu>(ctx, &aot_mem) && ctx.pc == 0x0885CCCCu) goto L_0885CCCC;
    return;
L_0885CCCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[31] = (0x0885CCE4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 86u, 0x08860A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0885CCE4u) goto L_0885CCE4;
    return;
L_0885CCE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (32639u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[5] | 65535u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0885CE9C;
      }
      goto L_0885CD08;
    }
L_0885CD08:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    goto L_0885CD14;
L_0885CD14:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[18] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(108)));
        goto L_0885CD24;
    }
    goto L_0885CD24;
L_0885CD24:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CD54;
      }
      goto L_0885CD30;
    }
L_0885CD30:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885CD54;
      }
      goto L_0885CD50;
    }
L_0885CD50:
    aot_gpr[5] = (0u | 1u);
    goto L_0885CD54;
L_0885CD54:
    aot_gpr[6] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CD84;
      }
      goto L_0885CD60;
    }
L_0885CD60:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x0885CD7Cu);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 77u, 0x088607F0u>(ctx, &aot_mem) && ctx.pc == 0x0885CD7Cu) goto L_0885CD7C;
    return;
L_0885CD7C:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    goto L_0885CD84;
L_0885CD84:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr[6] = (0u | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0885CD9C;
      }
      goto L_0885CD94;
    }
L_0885CD94:
    aot_gpr[6] = (aot_gpr[5] & aot_gpr[23]);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    goto L_0885CD9C;
L_0885CD9C:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CDAC;
      }
      goto L_0885CDA4;
    }
L_0885CDA4:
    aot_gpr[7] = (aot_gpr[5] & aot_gpr[18]);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    goto L_0885CDAC;
L_0885CDAC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[8] = (0u | 1u);
        goto L_0885CDC4;
    }
    goto L_0885CDC4;
L_0885CDC4:
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[6] | aot_gpr[7]);
    if (aot_gpr[10] != 0u) {
    aot_gpr[9] = (aot_gpr[5] | 0u);
        goto L_0885CDD8;
    }
    goto L_0885CDD8;
L_0885CDD8:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (aot_gpr[10] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0885CE00;
      }
      goto L_0885CDF0;
    }
L_0885CDF0:
    if (aot_gpr[8] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_0885CE04;
    }
    goto L_0885CDF8;
L_0885CDF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0885CE04;
      }
      goto L_0885CE00;
    }
L_0885CE00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    goto L_0885CE04;
L_0885CE04:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_0885CE1C;
      }
      goto L_0885CE10;
    }
L_0885CE10:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CE1C;
      }
      goto L_0885CE18;
    }
L_0885CE18:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_0885CE1C;
L_0885CE1C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CE48;
      }
      goto L_0885CE24;
    }
L_0885CE24:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_0885CE40;
    }
    goto L_0885CE38;
L_0885CE38:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CE40;
      }
      goto L_0885CE40;
    }
L_0885CE40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CE48;
      }
      goto L_0885CE48;
    }
L_0885CE48:
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0885CE58;
      }
      goto L_0885CE50;
    }
L_0885CE50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CE74;
      }
      goto L_0885CE58;
    }
L_0885CE58:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_0885CE74;
    }
    goto L_0885CE6C;
L_0885CE6C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CE74;
      }
      goto L_0885CE74;
    }
L_0885CE74:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_0885CE84;
    }
    goto L_0885CE84;
L_0885CE84:
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (aot_gpr[7] != 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_0885CE94;
    }
    goto L_0885CE94;
L_0885CE94:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885CD14;
      }
      goto L_0885CE9C;
    }
L_0885CE9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[17] & aot_gpr[23]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CEE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(192)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (32639u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 5u, 0x0885D024u>(ctx, &aot_mem); return;
      }
      goto L_0885CF44;
    }
L_0885CF44:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    goto L_0885CF50;
L_0885CF50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CF80;
      }
      goto L_0885CF5C;
    }
L_0885CF5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885CF80;
      }
      goto L_0885CF7C;
    }
L_0885CF7C:
    aot_gpr[20] = (0u | 1u);
    goto L_0885CF80;
L_0885CF80:
    aot_gpr[4] = (aot_gpr[20] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0885CFB4;
      }
      goto L_0885CF8C;
    }
L_0885CF8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x0885CFA0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 5u, 0x0890806Cu>(ctx, &aot_mem) && ctx.pc == 0x0885CFA0u) goto L_0885CFA0;
    return;
L_0885CFA0:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[0]) || std::isnan(aot_fpr[20])) && aot_fpr[0] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885CFB4;
      }
      goto L_0885CFB0;
    }
L_0885CFB0:
    aot_gpr[20] = (0u | 1u);
    goto L_0885CFB4;
L_0885CFB4:
    aot_gpr[20] = (aot_gpr[20] & 255u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[20] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0885CFC8;
    }
    goto L_0885CFC8;
L_0885CFC8:
    { const bool branch_taken = aot_gpr[20] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_0885CFF4;
      }
      goto L_0885CFD0;
    }
L_0885CFD0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_0885CFEC;
    }
    goto L_0885CFE4;
L_0885CFE4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CFEC;
      }
      goto L_0885CFEC;
    }
L_0885CFEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CFF4;
      }
      goto L_0885CFF4;
    }
L_0885CFF4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    ctx.pc = 0x0885D000u; return;
}

void recomp_unit_0088(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0088_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_88(Runtime &runtime) {
    runtime.register_generated_unit(88u, 0x0885C000u, 4096u, &recomp_unit_0088, &recomp_unit_0088_entry);
    runtime.register_function(0x0885C000u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C010u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C070u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C088u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C098u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C0ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C0B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C0BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C0C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C0DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C0ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C0F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C110u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C114u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C11Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C134u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C13Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C144u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C15Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C164u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C16Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C184u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C190u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C19Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C1C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C1D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C1E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C1F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C200u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C21Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C224u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C230u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C238u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C240u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C264u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C270u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C278u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C288u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C298u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C2B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C2D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C2D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C2E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C2ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C2F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C304u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C32Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C338u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C350u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C368u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C38Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C3C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C3C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C3D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C3D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C3DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C3E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C3F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C3F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C400u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C40Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C424u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C43Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C440u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C444u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C44Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C45Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C474u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C47Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C488u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C490u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C494u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C498u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C4A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C4BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C4E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C4F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C504u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C51Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C530u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C53Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C554u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C56Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C570u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C574u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C57Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C588u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C594u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C59Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C5B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C5B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C5C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C5ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C618u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C648u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C650u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C65Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C664u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C668u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C678u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C680u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C688u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C690u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C6A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C6B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C6B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C6C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C6D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C6D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C6F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C708u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C710u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C71Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C724u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C72Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C734u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C758u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C770u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C77Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C78Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C7A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C7A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C7B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C7CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C7D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C7E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C7ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C7F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C808u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C81Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C828u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C830u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C834u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C83Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C850u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C854u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C87Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C884u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C88Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C894u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C89Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C8BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C8C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C8D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C904u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C90Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C920u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C92Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C934u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C948u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C950u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C964u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C970u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C998u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C9BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C9D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C9ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C9F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885C9FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CA18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CA1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CA28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CA48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CA4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CA58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CA74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CA78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CA84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CA90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CA98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CA9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CAB4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CAD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CAD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CAE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CB00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CB04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CB10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CB2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CB30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CB3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CB4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CB74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CB7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CB84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CB88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CB94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CBA0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CBA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CBACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CBD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CBECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CBF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CC04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CC10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CC18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CC1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CC24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CC30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CC3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CC48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CC50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CC54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CC5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CCCCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CCE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CD08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CD14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CD24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CD30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CD50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CD54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CD60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CD7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CD84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CD94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CD9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CDA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CDACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CDC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CDD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CDF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CDF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CE9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CEE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CF44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CF50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CF5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CF7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CF80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CF8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CFA0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CFB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CFB4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CFC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CFD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CFE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CFECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0885CFF4u, &recomp_unit_0088, "recomp_unit_0088");
}
} // namespace psprecomp
