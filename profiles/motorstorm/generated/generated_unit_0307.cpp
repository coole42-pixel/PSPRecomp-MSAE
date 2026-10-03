#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0307[1022] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0,
    0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72,
    0, 73, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84,
    0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100,
    0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116,
    0, 117, 0, 118, 0, 119, 0, 120, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0,
    136, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163,
    164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178,
};
void recomp_unit_0307_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08937004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0307[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08937004;
    case 2u: goto L_089370B4;
    case 3u: goto L_089370B8;
    case 4u: goto L_0893718C;
    case 5u: goto L_08937208;
    case 6u: goto L_08937240;
    case 7u: goto L_08937248;
    case 8u: goto L_089372C0;
    case 9u: goto L_089372F0;
    case 10u: goto L_089372F8;
    case 11u: goto L_0893735C;
    case 12u: goto L_08937398;
    case 13u: goto L_089373A0;
    case 14u: goto L_089373B4;
    case 15u: goto L_089373C0;
    case 16u: goto L_089373EC;
    case 17u: goto L_0893742C;
    case 18u: goto L_0893743C;
    case 19u: goto L_08937444;
    case 20u: goto L_0893744C;
    case 21u: goto L_08937454;
    case 22u: goto L_0893746C;
    case 23u: goto L_08937474;
    case 24u: goto L_0893748C;
    case 25u: goto L_089374A0;
    case 26u: goto L_089374C0;
    case 27u: goto L_089374D8;
    case 28u: goto L_089374EC;
    case 29u: goto L_08937508;
    case 30u: goto L_08937510;
    case 31u: goto L_08937528;
    case 32u: goto L_08937538;
    case 33u: goto L_08937560;
    case 34u: goto L_08937570;
    case 35u: goto L_08937578;
    case 36u: goto L_08937588;
    case 37u: goto L_08937598;
    case 38u: goto L_089375A8;
    case 39u: goto L_089375D0;
    case 40u: goto L_089375E0;
    case 41u: goto L_089375E8;
    case 42u: goto L_089375F8;
    case 43u: goto L_08937624;
    case 44u: goto L_08937634;
    case 45u: goto L_08937640;
    case 46u: goto L_0893765C;
    case 47u: goto L_0893766C;
    case 48u: goto L_08937678;
    case 49u: goto L_08937698;
    case 50u: goto L_089376D0;
    case 51u: goto L_08937704;
    case 52u: goto L_08937724;
    case 53u: goto L_08937734;
    case 54u: goto L_08937748;
    case 55u: goto L_08937754;
    case 56u: goto L_08937768;
    case 57u: goto L_08937798;
    case 58u: goto L_089377D4;
    case 59u: goto L_089377E8;
    case 60u: goto L_089377FC;
    case 61u: goto L_08937810;
    case 62u: goto L_08937824;
    case 63u: goto L_089378A4;
    case 64u: goto L_089378BC;
    case 65u: goto L_089378C8;
    case 66u: goto L_089378D0;
    case 67u: goto L_089378D8;
    case 68u: goto L_089378E0;
    case 69u: goto L_089378E8;
    case 70u: goto L_089378F0;
    case 71u: goto L_089378F8;
    case 72u: goto L_08937900;
    case 73u: goto L_08937908;
    case 74u: goto L_08937910;
    case 75u: goto L_08937918;
    case 76u: goto L_08937920;
    case 77u: goto L_08937938;
    case 78u: goto L_08937950;
    case 79u: goto L_08937958;
    case 80u: goto L_08937960;
    case 81u: goto L_08937968;
    case 82u: goto L_08937970;
    case 83u: goto L_08937978;
    case 84u: goto L_08937980;
    case 85u: goto L_08937988;
    case 86u: goto L_08937990;
    case 87u: goto L_08937998;
    case 88u: goto L_089379A0;
    case 89u: goto L_089379A8;
    case 90u: goto L_089379B0;
    case 91u: goto L_089379B8;
    case 92u: goto L_089379C0;
    case 93u: goto L_089379C8;
    case 94u: goto L_089379D0;
    case 95u: goto L_089379D8;
    case 96u: goto L_089379E0;
    case 97u: goto L_089379E8;
    case 98u: goto L_089379F0;
    case 99u: goto L_089379F8;
    case 100u: goto L_08937A00;
    case 101u: goto L_08937A08;
    case 102u: goto L_08937A10;
    case 103u: goto L_08937A18;
    case 104u: goto L_08937A20;
    case 105u: goto L_08937A28;
    case 106u: goto L_08937A30;
    case 107u: goto L_08937A38;
    case 108u: goto L_08937A40;
    case 109u: goto L_08937A48;
    case 110u: goto L_08937A50;
    case 111u: goto L_08937A58;
    case 112u: goto L_08937A60;
    case 113u: goto L_08937A68;
    case 114u: goto L_08937A70;
    case 115u: goto L_08937A78;
    case 116u: goto L_08937A80;
    case 117u: goto L_08937A88;
    case 118u: goto L_08937A90;
    case 119u: goto L_08937A98;
    case 120u: goto L_08937AA0;
    case 121u: goto L_08937AA4;
    case 122u: goto L_08937AAC;
    case 123u: goto L_08937B14;
    case 124u: goto L_08937B24;
    case 125u: goto L_08937B34;
    case 126u: goto L_08937B48;
    case 127u: goto L_08937B58;
    case 128u: goto L_08937B60;
    case 129u: goto L_08937B80;
    case 130u: goto L_08937B8C;
    case 131u: goto L_08937BC4;
    case 132u: goto L_08937BD0;
    case 133u: goto L_08937BD8;
    case 134u: goto L_08937BF4;
    case 135u: goto L_08937BFC;
    case 136u: goto L_08937C04;
    case 137u: goto L_08937C0C;
    case 138u: goto L_08937C28;
    case 139u: goto L_08937C54;
    case 140u: goto L_08937C6C;
    case 141u: goto L_08937C7C;
    case 142u: goto L_08937CA4;
    case 143u: goto L_08937CB4;
    case 144u: goto L_08937CBC;
    case 145u: goto L_08937CCC;
    case 146u: goto L_08937CDC;
    case 147u: goto L_08937CEC;
    case 148u: goto L_08937D14;
    case 149u: goto L_08937D24;
    case 150u: goto L_08937D2C;
    case 151u: goto L_08937D3C;
    case 152u: goto L_08937D68;
    case 153u: goto L_08937D78;
    case 154u: goto L_08937D84;
    case 155u: goto L_08937DA4;
    case 156u: goto L_08937DD8;
    case 157u: goto L_08937DE8;
    case 158u: goto L_08937E0C;
    case 159u: goto L_08937E1C;
    case 160u: goto L_08937E2C;
    case 161u: goto L_08937E9C;
    case 162u: goto L_08937EEC;
    case 163u: goto L_08937F00;
    case 164u: goto L_08937F04;
    case 165u: goto L_08937F24;
    case 166u: goto L_08937F44;
    case 167u: goto L_08937F80;
    case 168u: goto L_08937F98;
    case 169u: goto L_08937FA8;
    case 170u: goto L_08937FB0;
    case 171u: goto L_08937FC0;
    case 172u: goto L_08937FC8;
    case 173u: goto L_08937FD0;
    case 174u: goto L_08937FD8;
    case 175u: goto L_08937FE0;
    case 176u: goto L_08937FE8;
    case 177u: goto L_08937FF0;
    case 178u: goto L_08937FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08937004:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(22336));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(132)));
    aot_gpr[24] = (6144u << 16u);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[24]);
    aot_gpr[24] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(133)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (6400u << 16u);
    aot_gpr[13] = (aot_gpr[13] | aot_gpr[24]);
    aot_gpr[24] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(134)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (6656u << 16u);
    aot_gpr[13] = (aot_gpr[13] | aot_gpr[24]);
    aot_gpr[24] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(135)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (6912u << 16u);
    aot_gpr[13] = (aot_gpr[13] | aot_gpr[24]);
    aot_gpr[24] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[15] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(136)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[13] & aot_gpr[3]);
    aot_gpr[15] = (23552u << 16u);
    aot_gpr[13] = (aot_gpr[13] | aot_gpr[15]);
    aot_gpr[15] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (23808u << 16u);
    aot_gpr[15] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(255));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(-28934), static_cast<std::uint8_t>(0u));
    goto L_089370B4;
L_089370B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_089370B8;
L_089370B8:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    aot_gpr[14] = (21760u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[14]);
    aot_gpr[14] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    aot_gpr[14] = (22016u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[14]);
    aot_gpr[14] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] >> 24u);
    aot_gpr[14] = (22528u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[14]);
    aot_gpr[14] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[12] & aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (22272u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[12]);
    aot_gpr[12] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] >> 8u);
    aot_gpr[12] = (23296u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[12]);
    aot_gpr[12] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[12] = (7680u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[12]);
    aot_gpr[12] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] & 8192u);
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] & 255u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08937208;
      }
      goto L_0893718C;
    }
L_0893718C:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[2] = (2216u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-28948)));
    aot_gpr[2] = (18304u << 16u);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[2] = (14208u << 16u);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[2]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] >> 8u);
    aot_gpr[11] = (aot_gpr[2] | aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[11] = (aot_gpr[11] & 16384u);
    aot_gpr[11] = (0u < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (aot_gpr[11] & 255u);
      if (branch_taken) {
          goto L_08937240;
      }
      goto L_08937208;
    }
L_08937208:
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] >> 8u);
    aot_gpr[11] = (aot_gpr[2] | aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[11] = (aot_gpr[11] & 16384u);
    aot_gpr[11] = (0u < aot_gpr[11] ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[11] & 255u);
    goto L_08937240;
L_08937240:
    if (aot_gpr[11] == 0u) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
        goto L_089372C0;
    }
    goto L_08937248;
L_08937248:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[11] = (2216u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-28948)));
    aot_gpr[11] = (18304u << 16u);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_gpr[11] = (14208u << 16u);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[11]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[11] = (aot_gpr[11] & 65535u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[11] >> 8u);
    aot_gpr[10] = (aot_gpr[11] | aot_gpr[10]);
    aot_gpr[11] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (aot_gpr[10] & aot_gpr[9]);
    aot_gpr[10] = (0u < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[10] & 255u);
      if (branch_taken) {
          goto L_089372F0;
      }
      goto L_089372C0;
    }
L_089372C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[11] >> 8u);
    aot_gpr[10] = (aot_gpr[11] | aot_gpr[10]);
    aot_gpr[11] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (aot_gpr[10] & aot_gpr[9]);
    aot_gpr[10] = (0u < aot_gpr[9] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    goto L_089372F0;
L_089372F0:
    if (aot_gpr[10] == 0u) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_0893735C;
    }
    goto L_089372F8;
L_089372F8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[9] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_gpr[9] = (17792u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[9] = (50560u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
    aot_fpr[14] = aot_fpr[15] / aot_fpr[14];
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] >> 8u);
    aot_gpr[7] = (aot_gpr[8] | aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08937398;
      }
      goto L_0893735C;
    }
L_0893735C:
    aot_gpr[10] = (48896u << 16u);
    aot_gpr[11] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[10] | 1024u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] >> 8u);
    aot_gpr[7] = (aot_gpr[8] | aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    goto L_08937398;
L_08937398:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089373B4;
      }
      goto L_089373A0;
    }
L_089373A0:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x089373B4u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 61u, 0x0894477Cu>(ctx, &aot_mem) && ctx.pc == 0x089373B4u) goto L_089373B4;
    return;
L_089373B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089373C0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (17204u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6932), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-6832), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089373EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1708)));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0893742Cu);
    aot_gpr[6] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0893742Cu) goto L_0893742C;
    return;
L_0893742C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 7u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08937474;
      }
      goto L_0893743C;
    }
L_0893743C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089374EC;
      }
      goto L_08937444;
    }
L_08937444:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08937510;
      }
      goto L_0893744C;
    }
L_0893744C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893766C;
      }
      goto L_08937454;
    }
L_08937454:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(76));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1756)));
    aot_gpr[31] = (0x0893746Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25156));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0893746Cu) goto L_0893746C;
    return;
L_0893746C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893766C;
      }
      goto L_08937474;
    }
L_08937474:
    aot_gpr[4] = (0u | 11u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-25160));
    aot_gpr[31] = (0x0893748Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0893748Cu) goto L_0893748C;
    return;
L_0893748C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(76));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089374A0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089374A0u) goto L_089374A0;
    return;
L_089374A0:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
    aot_gpr[18] = (2217u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(-9488));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089374C0u);
    aot_gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089374C0u) goto L_089374C0;
    return;
L_089374C0:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-9476));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089374D8u);
    aot_gpr[6] = (0u | 360u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089374D8u) goto L_089374D8;
    return;
L_089374D8:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-9488), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1524), aot_gpr[19]);
      if (branch_taken) {
          goto L_0893766C;
      }
      goto L_089374EC;
    }
L_089374EC:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(76));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1756)));
    aot_gpr[31] = (0x08937508u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25156));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08937508u) goto L_08937508;
    return;
L_08937508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893766C;
      }
      goto L_08937510;
    }
L_08937510:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1756)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937578;
      }
      goto L_08937528;
    }
L_08937528:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937634;
      }
      goto L_08937538;
    }
L_08937538:
    aot_gpr[4] = (aot_gpr[18] << 4u);
    aot_gpr[5] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29968));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08937560u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25156));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08937560u) goto L_08937560;
    return;
L_08937560:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937538;
      }
      goto L_08937570;
    }
L_08937570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937634;
      }
      goto L_08937578;
    }
L_08937578:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1756)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089375E8;
      }
      goto L_08937588;
    }
L_08937588:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1756)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089375E8;
      }
      goto L_08937598;
    }
L_08937598:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 1000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937634;
      }
      goto L_089375A8;
    }
L_089375A8:
    aot_gpr[4] = (aot_gpr[18] << 4u);
    aot_gpr[5] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29968));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(1000));
    aot_gpr[31] = (0x089375D0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25156));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089375D0u) goto L_089375D0;
    return;
L_089375D0:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 1000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089375A8;
      }
      goto L_089375E0;
    }
L_089375E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937634;
      }
      goto L_089375E8;
    }
L_089375E8:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 15 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937634;
      }
      goto L_089375F8;
    }
L_089375F8:
    aot_gpr[4] = (aot_gpr[18] << 4u);
    aot_gpr[5] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29968));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1756)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25156));
    aot_gpr[31] = (0x08937624u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08937624u) goto L_08937624;
    return;
L_08937624:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 15 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089375F8;
      }
      goto L_08937634;
    }
L_08937634:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 1024 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893765C;
      }
      goto L_08937640;
    }
L_08937640:
    aot_gpr[4] = (aot_gpr[18] << 4u);
    aot_gpr[5] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29968));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0893765C;
L_0893765C:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29968));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(96), aot_gpr[4]);
      if (branch_taken) {
          goto L_0893766C;
      }
      goto L_0893766C;
    }
L_0893766C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(100));
    aot_gpr[31] = (0x08937678u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08937678u) goto L_08937678;
    return;
L_08937678:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1760)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1764)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(120), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08937698u);
    aot_gpr[6] = (0u | 1284u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08937698u) goto L_08937698;
    return;
L_08937698:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1412), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1416), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1428), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1432), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1444), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1448), 0u);
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
L_089376D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1708)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08937704u);
    aot_gpr[6] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08937704u) goto L_08937704;
    return;
L_08937704:
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-29968));
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-25156));
    goto L_08937724;
L_08937724:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08937734u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08937734u) goto L_08937734;
    return;
L_08937734:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08937724;
      }
      goto L_08937748;
    }
L_08937748:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 1024 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937768;
      }
      goto L_08937754;
    }
L_08937754:
    aot_gpr[4] = (aot_gpr[21] << 4u);
    aot_gpr[5] = (aot_gpr[21] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08937768;
L_08937768:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), aot_gpr[19]);
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
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
L_08937798:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 22u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1520), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1500));
    aot_gpr[6] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089377D4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25176));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089377D4u) goto L_089377D4;
    return;
L_089377D4:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(1648));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089377E8u);
    aot_gpr[6] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089377E8u) goto L_089377E8;
    return;
L_089377E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1532), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1708)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    aot_gpr[31] = (0x089377FCu);
    aot_gpr[6] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089377FCu) goto L_089377FC;
    return;
L_089377FC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(76));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1756)));
    aot_gpr[31] = (0x08937810u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25156));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08937810u) goto L_08937810;
    return;
L_08937810:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(100));
    aot_gpr[6] = (0u | 13u);
    aot_gpr[31] = (0x08937824u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25148));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08937824u) goto L_08937824;
    return;
L_08937824:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1760)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1764)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(120), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(124), aot_gpr[5]);
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1724)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1408), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1728)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1412), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1416), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1732)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1420), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1736)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1428), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1432), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1740)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1436), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1744)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1444), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1448), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1748)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1452), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1752)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1460), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1464), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1468), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089378A4:
    aot_gpr[4] = (32751u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937918;
      }
      goto L_089378BC;
    }
L_089378BC:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089378F0;
      }
      goto L_089378C8;
    }
L_089378C8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089378F8;
      }
      goto L_089378D0;
    }
L_089378D0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08937900;
      }
      goto L_089378D8;
    }
L_089378D8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08937908;
      }
      goto L_089378E0;
    }
L_089378E0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08937910;
      }
      goto L_089378E8;
    }
L_089378E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937918;
      }
      goto L_089378F0;
    }
L_089378F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937918;
      }
      goto L_089378F8;
    }
L_089378F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937918;
      }
      goto L_08937900;
    }
L_08937900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937918;
      }
      goto L_08937908;
    }
L_08937908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937918;
      }
      goto L_08937910;
    }
L_08937910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937918;
      }
      goto L_08937918;
    }
L_08937918:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937920:
    aot_gpr[4] = (32751u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-769));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(203) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AA0;
      }
      goto L_08937938;
    }
L_08937938:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-25136)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937950:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937958;
    }
L_08937958:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937960;
    }
L_08937960:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937968;
    }
L_08937968:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937970;
    }
L_08937970:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937978;
    }
L_08937978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AA0;
      }
      goto L_08937980;
    }
L_08937980:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 7u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937988;
    }
L_08937988:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937990;
    }
L_08937990:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937998;
    }
L_08937998:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_089379A0;
    }
L_089379A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_089379A8;
    }
L_089379A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AA0;
      }
      goto L_089379B0;
    }
L_089379B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_089379B8;
    }
L_089379B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_089379C0;
    }
L_089379C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_089379C8;
    }
L_089379C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_089379D0;
    }
L_089379D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_089379D8;
    }
L_089379D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AA0;
      }
      goto L_089379E0;
    }
L_089379E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_089379E8;
    }
L_089379E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_089379F0;
    }
L_089379F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AA0;
      }
      goto L_089379F8;
    }
L_089379F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AA0;
      }
      goto L_08937A00;
    }
L_08937A00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AA0;
      }
      goto L_08937A08;
    }
L_08937A08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AA0;
      }
      goto L_08937A10;
    }
L_08937A10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AA0;
      }
      goto L_08937A18;
    }
L_08937A18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AA0;
      }
      goto L_08937A20;
    }
L_08937A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AA0;
      }
      goto L_08937A28;
    }
L_08937A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AA0;
      }
      goto L_08937A30;
    }
L_08937A30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AA0;
      }
      goto L_08937A38;
    }
L_08937A38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937A40;
    }
L_08937A40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937A48;
    }
L_08937A48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937A50;
    }
L_08937A50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937A58;
    }
L_08937A58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937A60;
    }
L_08937A60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937A68;
    }
L_08937A68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937A70;
    }
L_08937A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AA0;
      }
      goto L_08937A78;
    }
L_08937A78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937A80;
    }
L_08937A80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937A88;
    }
L_08937A88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937A90;
    }
L_08937A90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937A98;
    }
L_08937A98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_08937AA4;
      }
      goto L_08937AA0;
    }
L_08937AA0:
    aot_gpr[2] = (0u | 0u);
    goto L_08937AA4;
L_08937AA4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937AAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1708), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1712), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1716), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1720), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1724), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1728), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1732), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1736), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1740), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1744), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1748), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1752), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1768), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1772), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1776), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1756), 0u);
    aot_gpr[4] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1780), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1536));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08937B14u);
    aot_gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08937B14u) goto L_08937B14;
    return;
L_08937B14:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1556));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08937B24u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08937B24u) goto L_08937B24;
    return;
L_08937B24:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1620));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08937B34u);
    aot_gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08937B34u) goto L_08937B34;
    return;
L_08937B34:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937B48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08937B80;
      }
      goto L_08937B58;
    }
L_08937B58:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08937B80;
      }
      goto L_08937B60;
    }
L_08937B60:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08937B80u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08937B80u) goto L_08937B80;
    return;
L_08937B80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937B8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1708)));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08937BC4u);
    aot_gpr[6] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08937BC4u) goto L_08937BC4;
    return;
L_08937BC4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08937BFC;
      }
      goto L_08937BD0;
    }
L_08937BD0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08937DD8;
      }
      goto L_08937BD8;
    }
L_08937BD8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(76));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1756)));
    aot_gpr[31] = (0x08937BF4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25156));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08937BF4u) goto L_08937BF4;
    return;
L_08937BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937DD8;
      }
      goto L_08937BFC;
    }
L_08937BFC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08937C54;
      }
      goto L_08937C04;
    }
L_08937C04:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937DD8;
      }
      goto L_08937C0C;
    }
L_08937C0C:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(76));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1756)));
    aot_gpr[31] = (0x08937C28u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25156));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08937C28u) goto L_08937C28;
    return;
L_08937C28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1768)));
    aot_gpr[5] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-9116), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1772)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9116));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1776)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1476), aot_gpr[5]);
      if (branch_taken) {
          goto L_08937DD8;
      }
      goto L_08937C54;
    }
L_08937C54:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1756)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937CBC;
      }
      goto L_08937C6C;
    }
L_08937C6C:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937D78;
      }
      goto L_08937C7C;
    }
L_08937C7C:
    aot_gpr[4] = (aot_gpr[18] << 4u);
    aot_gpr[5] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29968));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08937CA4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25156));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08937CA4u) goto L_08937CA4;
    return;
L_08937CA4:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937C7C;
      }
      goto L_08937CB4;
    }
L_08937CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937D78;
      }
      goto L_08937CBC;
    }
L_08937CBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1756)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937D2C;
      }
      goto L_08937CCC;
    }
L_08937CCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1756)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937D2C;
      }
      goto L_08937CDC;
    }
L_08937CDC:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 1000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937D78;
      }
      goto L_08937CEC;
    }
L_08937CEC:
    aot_gpr[4] = (aot_gpr[18] << 4u);
    aot_gpr[5] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29968));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(1000));
    aot_gpr[31] = (0x08937D14u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25156));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08937D14u) goto L_08937D14;
    return;
L_08937D14:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 1000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937CEC;
      }
      goto L_08937D24;
    }
L_08937D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937D78;
      }
      goto L_08937D2C;
    }
L_08937D2C:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 15 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937D78;
      }
      goto L_08937D3C;
    }
L_08937D3C:
    aot_gpr[4] = (aot_gpr[18] << 4u);
    aot_gpr[5] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29968));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1756)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25156));
    aot_gpr[31] = (0x08937D68u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08937D68u) goto L_08937D68;
    return;
L_08937D68:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 15 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937D3C;
      }
      goto L_08937D78;
    }
L_08937D78:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 1024 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2217u << 16u);
      if (branch_taken) {
          goto L_08937DA4;
      }
      goto L_08937D84;
    }
L_08937D84:
    aot_gpr[4] = (aot_gpr[18] << 4u);
    aot_gpr[5] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29968));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2217u << 16u);
    goto L_08937DA4;
L_08937DA4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29968));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(96), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1768)));
    aot_gpr[5] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-9096), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1772)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9096));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1776)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1476), aot_gpr[5]);
      if (branch_taken) {
          goto L_08937DD8;
      }
      goto L_08937DD8;
    }
L_08937DD8:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(100));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08937DE8u);
    aot_gpr[6] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08937DE8u) goto L_08937DE8;
    return;
L_08937DE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1760)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1764)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(120), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(124), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1712)));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(128));
    aot_gpr[31] = (0x08937E0Cu);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08937E0Cu) goto L_08937E0C;
    return;
L_08937E0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1716)));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(256));
    aot_gpr[31] = (0x08937E1Cu);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08937E1Cu) goto L_08937E1C;
    return;
L_08937E1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1720)));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(384));
    aot_gpr[31] = (0x08937E2Cu);
    aot_gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08937E2Cu) goto L_08937E2C;
    return;
L_08937E2C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1724)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(1408), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1728)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1412), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1416), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1732)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1420), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1736)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1428), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1432), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1740)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1436), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1744)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1444), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1448), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1748)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1452), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1752)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1460), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1464), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1468), aot_gpr[4]);
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
L_08937E9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[4] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1780), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08937EECu);
    aot_gpr[6] = (0u | 1536u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08937EECu) goto L_08937EEC;
    return;
L_08937EEC:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x08937F00u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-28904));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08937F00u) goto L_08937F00;
    return;
L_08937F00:
    aot_gpr[4] = (0u | 0u);
    goto L_08937F04;
L_08937F04:
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(1500), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937F04;
      }
      goto L_08937F24;
    }
L_08937F24:
    aot_gpr[4] = (0u | 1536u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28660)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08937F44u);
    aot_gpr[4] = (0u | 9u);
    ctx.pc = 0x08A5AC2Cu;
    return;
L_08937F44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[4] = (0u | 19u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u | 18u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1756), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1760), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[21] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1764), aot_gpr[17]);
      if (branch_taken) {
          goto L_08937FE8;
      }
      goto L_08937F80;
    }
L_08937F80:
    aot_gpr[21] = (aot_gpr[21] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[21]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-24320)));
    jump_target = aot_gpr[1];
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[21]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937F98:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08937FA8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    goto L_08937B8C;
L_08937FA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937FE8;
      }
      goto L_08937FB0;
    }
L_08937FB0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08937FC0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    goto L_089373EC;
L_08937FC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937FE8;
      }
      goto L_08937FC8;
    }
L_08937FC8:
    aot_gpr[31] = (0x08937FD0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089376D0;
L_08937FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937FE8;
      }
      goto L_08937FD8;
    }
L_08937FD8:
    aot_gpr[31] = (0x08937FE0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08937798;
L_08937FE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937FE8;
      }
      goto L_08937FE8;
    }
L_08937FE8:
    aot_gpr[31] = (0x08937FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 164u, 0x08942C88u>(ctx, &aot_mem) && ctx.pc == 0x08937FF0u) goto L_08937FF0;
    return;
L_08937FF0:
    aot_gpr[31] = (0x08937FF8u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 173u, 0x08942D14u>(ctx, &aot_mem) && ctx.pc == 0x08937FF8u) goto L_08937FF8;
    return;
L_08937FF8:
    aot_gpr[31] = (0x08938000u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5ABFCu;
    return;
}

void recomp_unit_0307(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0307_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_307(Runtime &runtime) {
    runtime.register_generated_unit(307u, 0x08937000u, 4096u, &recomp_unit_0307, &recomp_unit_0307_entry);
    runtime.register_function(0x08937004u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089370B4u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089370B8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x0893718Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937208u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937240u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937248u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089372C0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089372F0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089372F8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x0893735Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937398u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089373A0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089373B4u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089373C0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089373ECu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x0893742Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x0893743Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937444u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x0893744Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937454u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x0893746Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937474u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x0893748Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089374A0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089374C0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089374D8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089374ECu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937508u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937510u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937528u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937538u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937560u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937570u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937578u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937588u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937598u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089375A8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089375D0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089375E0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089375E8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089375F8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937624u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937634u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937640u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x0893765Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x0893766Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937678u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937698u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089376D0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937704u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937724u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937734u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937748u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937754u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937768u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937798u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089377D4u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089377E8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089377FCu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937810u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937824u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089378A4u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089378BCu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089378C8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089378D0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089378D8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089378E0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089378E8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089378F0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089378F8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937900u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937908u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937910u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937918u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937920u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937938u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937950u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937958u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937960u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937968u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937970u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937978u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937980u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937988u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937990u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937998u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089379A0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089379A8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089379B0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089379B8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089379C0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089379C8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089379D0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089379D8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089379E0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089379E8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089379F0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x089379F8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A00u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A08u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A10u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A18u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A20u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A28u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A30u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A38u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A40u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A48u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A50u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A58u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A60u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A68u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A70u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A78u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A80u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A88u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A90u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937A98u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937AA0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937AA4u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937AACu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937B14u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937B24u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937B34u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937B48u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937B58u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937B60u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937B80u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937B8Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937BC4u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937BD0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937BD8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937BF4u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937BFCu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937C04u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937C0Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937C28u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937C54u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937C6Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937C7Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937CA4u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937CB4u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937CBCu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937CCCu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937CDCu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937CECu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937D14u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937D24u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937D2Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937D3Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937D68u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937D78u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937D84u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937DA4u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937DD8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937DE8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937E0Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937E1Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937E2Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937E9Cu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937EECu, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937F00u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937F04u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937F24u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937F44u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937F80u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937F98u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937FA8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937FB0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937FC0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937FC8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937FD0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937FD8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937FE0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937FE8u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937FF0u, &recomp_unit_0307, "recomp_unit_0307");
    runtime.register_function(0x08937FF8u, &recomp_unit_0307, "recomp_unit_0307");
}
} // namespace psprecomp
