#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0000[1021] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0,
    8, 0, 0, 0, 9, 10, 0, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 22, 0, 23, 0, 24, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 34,
    0, 0, 0, 35, 0, 0, 36, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0,
    0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0,
    90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0,
    96, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0,
    103, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0,
    0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0,
    0, 139, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 146, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 162, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 172, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    183, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0,
    0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 217,
};
void recomp_unit_0000_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08804000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0000[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08804000;
    case 2u: goto L_08804034;
    case 3u: goto L_08804040;
    case 4u: goto L_08804048;
    case 5u: goto L_08804050;
    case 6u: goto L_08804060;
    case 7u: goto L_08804074;
    case 8u: goto L_08804080;
    case 9u: goto L_08804090;
    case 10u: goto L_08804094;
    case 11u: goto L_088040A4;
    case 12u: goto L_088040AC;
    case 13u: goto L_088040BC;
    case 14u: goto L_088040C8;
    case 15u: goto L_088040D8;
    case 16u: goto L_088040E8;
    case 17u: goto L_08804108;
    case 18u: goto L_08804114;
    case 19u: goto L_0880414C;
    case 20u: goto L_08804158;
    case 21u: goto L_08804160;
    case 22u: goto L_08804164;
    case 23u: goto L_0880416C;
    case 24u: goto L_08804174;
    case 25u: goto L_08804180;
    case 26u: goto L_0880419C;
    case 27u: goto L_088041A4;
    case 28u: goto L_088041BC;
    case 29u: goto L_088041C4;
    case 30u: goto L_088041D0;
    case 31u: goto L_088041DC;
    case 32u: goto L_088041E4;
    case 33u: goto L_088041F4;
    case 34u: goto L_088041FC;
    case 35u: goto L_0880420C;
    case 36u: goto L_08804218;
    case 37u: goto L_0880421C;
    case 38u: goto L_08804224;
    case 39u: goto L_0880422C;
    case 40u: goto L_08804234;
    case 41u: goto L_0880423C;
    case 42u: goto L_08804244;
    case 43u: goto L_0880424C;
    case 44u: goto L_08804274;
    case 45u: goto L_0880429C;
    case 46u: goto L_088042AC;
    case 47u: goto L_088042F0;
    case 48u: goto L_08804304;
    case 49u: goto L_088043D0;
    case 50u: goto L_088043D8;
    case 51u: goto L_088043EC;
    case 52u: goto L_088043F8;
    case 53u: goto L_08804408;
    case 54u: goto L_08804434;
    case 55u: goto L_08804444;
    case 56u: goto L_08804450;
    case 57u: goto L_08804460;
    case 58u: goto L_08804468;
    case 59u: goto L_0880447C;
    case 60u: goto L_08804494;
    case 61u: goto L_0880449C;
    case 62u: goto L_088044A4;
    case 63u: goto L_088044B0;
    case 64u: goto L_088044D0;
    case 65u: goto L_088044F0;
    case 66u: goto L_08804510;
    case 67u: goto L_0880451C;
    case 68u: goto L_08804528;
    case 69u: goto L_08804544;
    case 70u: goto L_08804560;
    case 71u: goto L_08804578;
    case 72u: goto L_08804584;
    case 73u: goto L_0880458C;
    case 74u: goto L_08804598;
    case 75u: goto L_088045A0;
    case 76u: goto L_088045A8;
    case 77u: goto L_088045B8;
    case 78u: goto L_088045DC;
    case 79u: goto L_088045E4;
    case 80u: goto L_088045EC;
    case 81u: goto L_088045F4;
    case 82u: goto L_088045FC;
    case 83u: goto L_08804610;
    case 84u: goto L_0880462C;
    case 85u: goto L_08804644;
    case 86u: goto L_08804650;
    case 87u: goto L_0880465C;
    case 88u: goto L_08804668;
    case 89u: goto L_08804670;
    case 90u: goto L_08804680;
    case 91u: goto L_08804688;
    case 92u: goto L_088046A8;
    case 93u: goto L_088046BC;
    case 94u: goto L_088046E0;
    case 95u: goto L_088046F0;
    case 96u: goto L_08804700;
    case 97u: goto L_08804708;
    case 98u: goto L_08804710;
    case 99u: goto L_08804724;
    case 100u: goto L_08804758;
    case 101u: goto L_08804768;
    case 102u: goto L_08804774;
    case 103u: goto L_08804780;
    case 104u: goto L_08804788;
    case 105u: goto L_08804790;
    case 106u: goto L_0880479C;
    case 107u: goto L_088047B4;
    case 108u: goto L_088047C0;
    case 109u: goto L_088047DC;
    case 110u: goto L_088047F0;
    case 111u: goto L_08804804;
    case 112u: goto L_08804820;
    case 113u: goto L_08804834;
    case 114u: goto L_08804844;
    case 115u: goto L_08804854;
    case 116u: goto L_0880485C;
    case 117u: goto L_0880486C;
    case 118u: goto L_08804874;
    case 119u: goto L_08804888;
    case 120u: goto L_08804898;
    case 121u: goto L_088048A4;
    case 122u: goto L_088048C8;
    case 123u: goto L_08804914;
    case 124u: goto L_08804934;
    case 125u: goto L_0880493C;
    case 126u: goto L_08804954;
    case 127u: goto L_08804978;
    case 128u: goto L_08804984;
    case 129u: goto L_088049BC;
    case 130u: goto L_088049D8;
    case 131u: goto L_088049E4;
    case 132u: goto L_08804A0C;
    case 133u: goto L_08804A14;
    case 134u: goto L_08804A30;
    case 135u: goto L_08804A48;
    case 136u: goto L_08804A58;
    case 137u: goto L_08804A60;
    case 138u: goto L_08804A70;
    case 139u: goto L_08804A84;
    case 140u: goto L_08804A90;
    case 141u: goto L_08804A98;
    case 142u: goto L_08804AA0;
    case 143u: goto L_08804AB8;
    case 144u: goto L_08804AC4;
    case 145u: goto L_08804AE8;
    case 146u: goto L_08804B04;
    case 147u: goto L_08804B0C;
    case 148u: goto L_08804B18;
    case 149u: goto L_08804B20;
    case 150u: goto L_08804B3C;
    case 151u: goto L_08804B44;
    case 152u: goto L_08804B4C;
    case 153u: goto L_08804B54;
    case 154u: goto L_08804B5C;
    case 155u: goto L_08804B68;
    case 156u: goto L_08804B84;
    case 157u: goto L_08804BA8;
    case 158u: goto L_08804BC8;
    case 159u: goto L_08804BD0;
    case 160u: goto L_08804BD8;
    case 161u: goto L_08804BF8;
    case 162u: goto L_08804C04;
    case 163u: goto L_08804C08;
    case 164u: goto L_08804C24;
    case 165u: goto L_08804C3C;
    case 166u: goto L_08804C54;
    case 167u: goto L_08804C60;
    case 168u: goto L_08804C68;
    case 169u: goto L_08804C98;
    case 170u: goto L_08804CA0;
    case 171u: goto L_08804CA8;
    case 172u: goto L_08804CBC;
    case 173u: goto L_08804CC0;
    case 174u: goto L_08804CCC;
    case 175u: goto L_08804CF8;
    case 176u: goto L_08804D18;
    case 177u: goto L_08804D28;
    case 178u: goto L_08804D30;
    case 179u: goto L_08804D38;
    case 180u: goto L_08804D40;
    case 181u: goto L_08804D50;
    case 182u: goto L_08804D70;
    case 183u: goto L_08804D80;
    case 184u: goto L_08804D88;
    case 185u: goto L_08804D94;
    case 186u: goto L_08804DA4;
    case 187u: goto L_08804DC4;
    case 188u: goto L_08804DD4;
    case 189u: goto L_08804DE4;
    case 190u: goto L_08804DF8;
    case 191u: goto L_08804E04;
    case 192u: goto L_08804E14;
    case 193u: goto L_08804E20;
    case 194u: goto L_08804E50;
    case 195u: goto L_08804E5C;
    case 196u: goto L_08804E68;
    case 197u: goto L_08804E94;
    case 198u: goto L_08804EA4;
    case 199u: goto L_08804EAC;
    case 200u: goto L_08804EC0;
    case 201u: goto L_08804ED8;
    case 202u: goto L_08804EE0;
    case 203u: goto L_08804EE8;
    case 204u: goto L_08804EF4;
    case 205u: goto L_08804F1C;
    case 206u: goto L_08804F38;
    case 207u: goto L_08804F40;
    case 208u: goto L_08804F54;
    case 209u: goto L_08804F6C;
    case 210u: goto L_08804F74;
    case 211u: goto L_08804F88;
    case 212u: goto L_08804FA0;
    case 213u: goto L_08804FA8;
    case 214u: goto L_08804FBC;
    case 215u: goto L_08804FD4;
    case 216u: goto L_08804FDC;
    case 217u: goto L_08804FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08804000:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (1280u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[2] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (0u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08804034u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(0));
    ctx.pc = 0x08A5B18Cu;
    return;
L_08804034:
    aot_gpr[2] = (3u << 16u);
    aot_gpr[31] = (0x08804040u);
    aot_gpr[4] = (aot_gpr[2] | 774u);
    ctx.pc = 0x08A5B1ACu;
    return;
L_08804040:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[9] = (0u << 16u);
      if (branch_taken) {
          goto L_08804074;
      }
      goto L_08804048;
    }
L_08804048:
    aot_gpr[31] = (0x08804050u);
    // nop
    ctx.pc = 0x08A5B03Cu;
    return;
L_08804050:
    aot_gpr[8] = (aot_gpr[2] << 11u);
    aot_gpr[7] = (aot_gpr[2] ^ aot_gpr[8]);
    aot_gpr[31] = (0x08804060u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    ctx.pc = 0x08A5B01Cu;
    return;
L_08804060:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[6] ^ aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[5] ^ aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[9] = (0u << 16u);
    goto L_08804074;
L_08804074:
    aot_gpr[3] = (aot_gpr[9] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_08804108;
      }
      goto L_08804080;
    }
L_08804080:
    aot_gpr[3] = (0u << 16u);
    aot_gpr[11] = (aot_gpr[3] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08804094;
      }
      goto L_08804090;
    }
L_08804090:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08804094;
L_08804094:
    aot_gpr[3] = (0u << 16u);
    aot_gpr[12] = (aot_gpr[3] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = aot_gpr[12] == 0u;
    aot_gpr[7] = (4u << 16u);
      if (branch_taken) {
          goto L_088040AC;
      }
      goto L_088040A4;
    }
L_088040A4:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[13] << 10u);
    goto L_088040AC;
L_088040AC:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[14] = (aot_gpr[5] + static_cast<std::uint32_t>(-28712));
    { const bool branch_taken = aot_gpr[14] == 0u;
    aot_gpr[8] = (32768u << 16u);
      if (branch_taken) {
          goto L_088040C8;
      }
      goto L_088040BC;
    }
L_088040BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28712)));
    aot_gpr[15] = (32768u << 16u);
    aot_gpr[8] = (aot_gpr[16] | aot_gpr[15]);
    goto L_088040C8;
L_088040C8:
    aot_gpr[17] = (2176u << 16u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(16660));
    aot_gpr[31] = (0x088040D8u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = 0x08A5B05Cu;
    return;
L_088040D8:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x088040E8u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    ctx.pc = 0x08A5AFFCu;
    return;
L_088040E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804108:
    aot_gpr[10] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[10] + static_cast<std::uint32_t>(-16648));
    goto L_08804080;
L_08804114:
    aot_gpr[3] = (0u << 16u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1008));
    aot_gpr[6] = (aot_gpr[3] + static_cast<std::uint32_t>(0));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(996), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(988), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(984), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1000), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(992), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(980), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(976), aot_gpr[16]);
      if (branch_taken) {
          goto L_08804158;
      }
      goto L_0880414C;
    }
L_0880414C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (0u + 0u);
      if (branch_taken) {
          goto L_08804164;
      }
      goto L_08804158;
    }
L_08804158:
    aot_gpr[31] = (0x08804160u);
    aot_gpr[4] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 138u, 0x08911A20u>(ctx, &aot_mem) && ctx.pc == 0x08804160u) goto L_08804160;
    return;
L_08804160:
    aot_gpr[20] = (0u + 0u);
    goto L_08804164;
L_08804164:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[16] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_088041A4;
      }
      goto L_0880416C;
    }
L_0880416C:
    aot_gpr[17] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_08804174;
L_08804174:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08804180u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08804180u) goto L_08804180;
    return;
L_08804180:
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[16] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < 20 ? 1u : 0u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088041A4;
      }
      goto L_0880419C;
    }
L_0880419C:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[16]);
        goto L_08804174;
    }
    goto L_088041A4;
L_088041A4:
    aot_gpr[9] = (aot_gpr[20] << 2u);
    aot_gpr[7] = (0u << 16u);
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[29]);
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08804274;
      }
      goto L_088041BC;
    }
L_088041BC:
    aot_gpr[31] = (0x088041C4u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088041C4u) goto L_088041C4;
    return;
L_088041C4:
    aot_gpr[10] = (2176u << 16u);
    aot_gpr[31] = (0x088041D0u);
    aot_gpr[4] = (aot_gpr[10] + static_cast<std::uint32_t>(16384));
    ctx.pc = 0x08A5B1D4u;
    return;
L_088041D0:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x088041DCu);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088041DCu) goto L_088041DC;
    return;
L_088041DC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08804244;
      }
      goto L_088041E4;
    }
L_088041E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[26] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    aot_gpr[5] = (2212u << 16u);
    aot_gpr[31] = (0x088041F4u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-6644));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 89u, 0x08A39448u>(ctx, &aot_mem) && ctx.pc == 0x088041F4u) goto L_088041F4;
    return;
L_088041F4:
    aot_gpr[31] = (0x088041FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 69u, 0x08A3E604u>(ctx, &aot_mem) && ctx.pc == 0x088041FCu) goto L_088041FC;
    return;
L_088041FC:
    aot_gpr[4] = (0u << 16u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[6] = (0u << 16u);
      if (branch_taken) {
          goto L_08804218;
      }
      goto L_0880420C;
    }
L_0880420C:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880422C;
      }
      goto L_08804218;
    }
L_08804218:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_0880421C;
L_0880421C:
    aot_gpr[31] = (0x08804224u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 162u, 0x08887FFCu>(ctx, &aot_mem) && ctx.pc == 0x08804224u) goto L_08804224;
    return;
L_08804224:
    aot_gpr[31] = (0x0880422Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 103u, 0x08A39548u>(ctx, &aot_mem) && ctx.pc == 0x0880422Cu) goto L_0880422C;
    return;
L_0880422C:
    aot_gpr[31] = (0x08804234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 89u, 0x08A39448u>(ctx, &aot_mem) && ctx.pc == 0x08804234u) goto L_08804234;
    return;
L_08804234:
    aot_gpr[31] = (0x0880423Cu);
    // nop
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880423Cu) goto L_0880423C;
    return;
L_0880423C:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_0880421C;
L_08804244:
    aot_gpr[31] = (0x0880424Cu);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B0E4u;
    return;
L_0880424C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1000)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(996)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(992)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(988)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(984)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(980)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(976)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804274:
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(616));
    aot_gpr[12] = (aot_gpr[21] + static_cast<std::uint32_t>(708));
    aot_gpr[11] = (aot_gpr[21] + static_cast<std::uint32_t>(800));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    aot_gpr[2] = (aot_gpr[21] + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(12), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), 0u);
    goto L_0880429C;
L_0880429C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880429C;
      }
      goto L_088042AC;
    }
L_088042AC:
    aot_gpr[14] = (2214u << 16u);
    aot_gpr[13] = (aot_gpr[14] + static_cast<std::uint32_t>(-16636));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(52), aot_gpr[13]);
    aot_gpr[6] = (aot_gpr[21] + static_cast<std::uint32_t>(124));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(60), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(64), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(68), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(76), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(80), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(88), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(92), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    goto L_088042F0;
L_088042F0:
    aot_gpr[16] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[15] = (aot_gpr[5] < static_cast<std::uint32_t>(36) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[15] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088042F0;
      }
      goto L_08804304;
    }
L_08804304:
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(13070));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21555));
    aot_gpr[25] = (0u + static_cast<std::uint32_t>(4660));
    aot_gpr[24] = (0u + static_cast<std::uint32_t>(-6547));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-8468));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(11));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(168), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(172), aot_gpr[9]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(276));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(180), static_cast<std::uint16_t>(aot_gpr[25]));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(182), static_cast<std::uint16_t>(aot_gpr[24]));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(184), static_cast<std::uint16_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(186), static_cast<std::uint16_t>(aot_gpr[18]));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(188), static_cast<std::uint16_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(160), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(192), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(196), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(200), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(204), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(208), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(212), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(252), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(256), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(260), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(264), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(268), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(272), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(276), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(280), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(284), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(288), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(248), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(328), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(332), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(336), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(340), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(596), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(468), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(600), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(604), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(608), 0u);
    aot_gpr[31] = (0x088043D0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(612), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088043D0u) goto L_088043D0;
    return;
L_088043D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(892), 0u);
    goto L_088041E4;
L_088043D8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(-26644));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
      if (branch_taken) {
          goto L_088043F8;
      }
      goto L_088043EC;
    }
L_088043EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-26644)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x088043F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088043F8u) goto L_088043F8;
    return;
L_088043F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804408:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (16448u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804434:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08804444u);
    aot_gpr[2] = (aot_gpr[4] | 0u);
    goto L_08804408;
L_08804444:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804450:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_088044A4;
      }
      goto L_08804460;
    }
L_08804460:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088044A4;
      }
      goto L_08804468;
    }
L_08804468:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880449C;
      }
      goto L_0880447C;
    }
L_0880447C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08804494u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804494u) goto L_08804494;
    return;
L_08804494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088044A4;
      }
      goto L_0880449C;
    }
L_0880449C:
    aot_gpr[31] = (0x088044A4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x088044A4u) goto L_088044A4;
    return;
L_088044A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088044B0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(21200), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088044D0:
    aot_gpr[5] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088044F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08804528;
      }
      goto L_08804510;
    }
L_08804510:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(388)));
    aot_gpr[31] = (0x0880451Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0248_entry, 248u, 110u, 0x088FC8CCu>(ctx, &aot_mem) && ctx.pc == 0x0880451Cu) goto L_0880451C;
    return;
L_0880451C:
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_08804544;
      }
      goto L_08804528;
    }
L_08804528:
    aot_gpr[4] = (50298u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08804544;
L_08804544:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804560:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08804578u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    goto L_088044D0;
L_08804578:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08804584u);
    aot_gpr[5] = (0u | 0u);
    goto L_088044F0;
L_08804584:
    aot_gpr[31] = (0x0880458Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 186u, 0x0880BD20u>(ctx, &aot_mem) && ctx.pc == 0x0880458Cu) goto L_0880458C;
    return;
L_0880458C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08804598u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 18u, 0x0880510Cu>(ctx, &aot_mem) && ctx.pc == 0x08804598u) goto L_08804598;
    return;
L_08804598:
    aot_gpr[31] = (0x088045A0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 147u, 0x0880BAF8u>(ctx, &aot_mem) && ctx.pc == 0x088045A0u) goto L_088045A0;
    return;
L_088045A0:
    aot_gpr[31] = (0x088045A8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(392));
    goto L_08804EF4;
L_088045A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088045B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-14504));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088045DCu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 178u, 0x0880BCACu>(ctx, &aot_mem) && ctx.pc == 0x088045DCu) goto L_088045DC;
    return;
L_088045DC:
    aot_gpr[31] = (0x088045E4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 6u, 0x08805048u>(ctx, &aot_mem) && ctx.pc == 0x088045E4u) goto L_088045E4;
    return;
L_088045E4:
    aot_gpr[31] = (0x088045ECu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 125u, 0x0880B998u>(ctx, &aot_mem) && ctx.pc == 0x088045ECu) goto L_088045EC;
    return;
L_088045EC:
    aot_gpr[31] = (0x088045F4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(392));
    goto L_08804E68;
L_088045F4:
    aot_gpr[31] = (0x088045FCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08804560;
L_088045FC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804610:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088046A8;
      }
      goto L_0880462C;
    }
L_0880462C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-14504));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(392));
    aot_gpr[31] = (0x08804644u);
    aot_gpr[5] = (0u | 2u);
    goto L_08804E94;
L_08804644:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(384));
    aot_gpr[31] = (0x08804650u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 126u, 0x0880B9B0u>(ctx, &aot_mem) && ctx.pc == 0x08804650u) goto L_08804650;
    return;
L_08804650:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x0880465Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 9u, 0x0880507Cu>(ctx, &aot_mem) && ctx.pc == 0x0880465Cu) goto L_0880465C;
    return;
L_0880465C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    aot_gpr[31] = (0x08804668u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 179u, 0x0880BCC0u>(ctx, &aot_mem) && ctx.pc == 0x08804668u) goto L_08804668;
    return;
L_08804668:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08804680;
      }
      goto L_08804670;
    }
L_08804670:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08804680;
L_08804680:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088046A8;
      }
      goto L_08804688;
    }
L_08804688:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088046A8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088046A8u) goto L_088046A8;
    return;
L_088046A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088046BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088046E0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), aot_gpr[17]);
    goto L_088044D0;
L_088046E0:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088046F0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 65u, 0x0880C4B4u>(ctx, &aot_mem) && ctx.pc == 0x088046F0u) goto L_088046F0;
    return;
L_088046F0:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08804700u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 23u, 0x08805298u>(ctx, &aot_mem) && ctx.pc == 0x08804700u) goto L_08804700;
    return;
L_08804700:
    aot_gpr[31] = (0x08804708u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 147u, 0x0880BAF8u>(ctx, &aot_mem) && ctx.pc == 0x08804708u) goto L_08804708;
    return;
L_08804708:
    aot_gpr[31] = (0x08804710u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(392));
    goto L_08804EF4;
L_08804710:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804724:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(196)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(384)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(376)));
    aot_gpr[7] = (16256u << 16u);
    aot_gpr[6] = (aot_gpr[6] & 512u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
      if (branch_taken) {
          goto L_08804768;
      }
      goto L_08804758;
    }
L_08804758:
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08804874;
      }
      goto L_08804768;
    }
L_08804768:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08804780;
      }
      goto L_08804774;
    }
L_08804774:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(269)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_08804788;
      }
      goto L_08804780;
    }
L_08804780:
    aot_gpr[6] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    goto L_08804788;
L_08804788:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880479C;
      }
      goto L_08804790;
    }
L_08804790:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08804874;
      }
      goto L_0880479C;
    }
L_0880479C:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    aot_fpr[16] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088047C0;
      }
      goto L_088047B4;
    }
L_088047B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08804874;
      }
      goto L_088047C0;
    }
L_088047C0:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[17] < aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08804844;
      }
      goto L_088047DC;
    }
L_088047DC:
    aot_fpr[17] = aot_fpr[17] - aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[17] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[6] = (16128u << 16u);
      if (branch_taken) {
          goto L_08804804;
      }
      goto L_088047F0;
    }
L_088047F0:
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] - aot_fpr[17];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08804844;
      }
      goto L_08804804;
    }
L_08804804:
    aot_gpr[6] = (47747u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 4719u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[17] < aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08804844;
      }
      goto L_08804820;
    }
L_08804820:
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    ctx.set_fpu_condition((aot_fpr[18] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[6] = (16128u << 16u);
      if (branch_taken) {
          goto L_08804844;
      }
      goto L_08804834;
    }
L_08804834:
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[17];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_08804844;
L_08804844:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880485C;
      }
      goto L_08804854;
    }
L_08804854:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0880486C;
      }
      goto L_0880485C;
    }
L_0880485C:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
        goto L_0880486C;
    }
    goto L_0880486C;
L_0880486C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_08804874;
L_08804874:
    aot_gpr[6] = (0u | 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[14]) || std::isnan(aot_fpr[13])) && aot_fpr[14] == aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[6] = (0u | 1u);
        goto L_08804888;
    }
    goto L_08804888;
L_08804888:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    if (aot_gpr[6] == 0u) {
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
        goto L_088048A4;
    }
    goto L_08804898;
L_08804898:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
      if (branch_taken) {
          goto L_088048A4;
      }
      goto L_088048A4;
    }
L_088048A4:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    aot_gpr[6] = (16576u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08804934;
      }
      goto L_088048C8;
    }
L_088048C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(196)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[7] = (ctx.vfpu_scalar_bits_ct<16u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[6] = (17168u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_08804934;
      }
      goto L_08804914;
    }
L_08804914:
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(53)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(468), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(469), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(470), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    goto L_08804934;
L_08804934:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880493C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(208)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804978;
      }
      goto L_08804954;
    }
L_08804954:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x08804978u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 19u, 0x088FD1ACu>(ctx, &aot_mem) && ctx.pc == 0x08804978u) goto L_08804978;
    return;
L_08804978:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804984:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(392));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    aot_gpr[31] = (0x088049BCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08804EF4;
L_088049BC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24760));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28636)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[7];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_088049E4;
      }
      goto L_088049D8;
    }
L_088049D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08804A14;
      }
      goto L_088049E4;
    }
L_088049E4:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(196)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08804A0Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 63u, 0x088CF488u>(ctx, &aot_mem) && ctx.pc == 0x08804A0Cu) goto L_08804A0C;
    return;
L_08804A0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08804CCC;
      }
      goto L_08804A14;
    }
L_08804A14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(424)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] ^ 4u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08804CCC;
      }
      goto L_08804A30;
    }
L_08804A30:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(452)));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08804CCC;
      }
      goto L_08804A48;
    }
L_08804A48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    aot_gpr[31] = (0x08804A58u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 80u, 0x0882263Cu>(ctx, &aot_mem) && ctx.pc == 0x08804A58u) goto L_08804A58;
    return;
L_08804A58:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804CCC;
      }
      goto L_08804A60;
    }
L_08804A60:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x08804A70u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 36u, 0x088053B0u>(ctx, &aot_mem) && ctx.pc == 0x08804A70u) goto L_08804A70;
    return;
L_08804A70:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(21216)));
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(384));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08804A90;
      }
      goto L_08804A84;
    }
L_08804A84:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x08804A90u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 148u, 0x0880BB0Cu>(ctx, &aot_mem) && ctx.pc == 0x08804A90u) goto L_08804A90;
    return;
L_08804A90:
    aot_gpr[31] = (0x08804A98u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 139u, 0x0880BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08804A98u) goto L_08804A98;
    return;
L_08804A98:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08804AE8;
      }
      goto L_08804AA0;
    }
L_08804AA0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(320)));
    aot_gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_08804AB8;
    }
    goto L_08804AB8;
L_08804AB8:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08804B04;
      }
      goto L_08804AC4;
    }
L_08804AC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (65535u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08804B04;
      }
      goto L_08804AE8;
    }
L_08804AE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08804B04;
L_08804B04:
    aot_gpr[31] = (0x08804B0Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0248_entry, 248u, 144u, 0x088FCB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08804B0Cu) goto L_08804B0C;
    return;
L_08804B0C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08804B18u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08804724;
L_08804B18:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804B5C;
      }
      goto L_08804B20;
    }
L_08804B20:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08804B3Cu);
    aot_gpr[9] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 55u, 0x088083F4u>(ctx, &aot_mem) && ctx.pc == 0x08804B3Cu) goto L_08804B3C;
    return;
L_08804B3C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804C60;
      }
      goto L_08804B44;
    }
L_08804B44:
    aot_gpr[31] = (0x08804B4Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0880493C;
L_08804B4C:
    aot_gpr[31] = (0x08804B54u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088044D0;
L_08804B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08804C60;
      }
      goto L_08804B5C;
    }
L_08804B5C:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08804B68u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_08804E68;
L_08804B68:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08804B84u);
    aot_gpr[9] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 123u, 0x088089C8u>(ctx, &aot_mem) && ctx.pc == 0x08804B84u) goto L_08804B84;
    return;
L_08804B84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x08804BA8u);
    aot_gpr[11] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 159u, 0x08806FD8u>(ctx, &aot_mem) && ctx.pc == 0x08804BA8u) goto L_08804BA8;
    return;
L_08804BA8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(392)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08804BD0;
      }
      goto L_08804BC8;
    }
L_08804BC8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08804BD8;
      }
      goto L_08804BD0;
    }
L_08804BD0:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08804BD8;
L_08804BD8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(396)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08804C04;
      }
      goto L_08804BF8;
    }
L_08804BF8:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08804C08;
      }
      goto L_08804C04;
    }
L_08804C04:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08804C08;
L_08804C08:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08804C24u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 172u, 0x08808E20u>(ctx, &aot_mem) && ctx.pc == 0x08804C24u) goto L_08804C24;
    return;
L_08804C24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08804C3Cu);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 165u, 0x08808D78u>(ctx, &aot_mem) && ctx.pc == 0x08804C3Cu) goto L_08804C3C;
    return;
L_08804C3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08804C54u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 188u, 0x08808F80u>(ctx, &aot_mem) && ctx.pc == 0x08804C54u) goto L_08804C54;
    return;
L_08804C54:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08804C60u);
    aot_gpr[5] = (0u | 2u);
    goto L_08804E94;
L_08804C60:
    aot_gpr[31] = (0x08804C68u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08804F1C;
L_08804C68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(424), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] & 512u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804CA8;
      }
      goto L_08804C98;
    }
L_08804C98:
    aot_gpr[31] = (0x08804CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 49u, 0x088FD438u>(ctx, &aot_mem) && ctx.pc == 0x08804CA0u) goto L_08804CA0;
    return;
L_08804CA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08804CC0;
      }
      goto L_08804CA8;
    }
L_08804CA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[31] = (0x08804CBCu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 63u, 0x088CF488u>(ctx, &aot_mem) && ctx.pc == 0x08804CBCu) goto L_08804CBC;
    return;
L_08804CBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08804CC0;
L_08804CC0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08804CCCu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 71u, 0x0880C554u>(ctx, &aot_mem) && ctx.pc == 0x08804CCCu) goto L_08804CCC;
    return;
L_08804CCC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804CF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08804D18u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 65u, 0x0880C4B4u>(ctx, &aot_mem) && ctx.pc == 0x08804D18u) goto L_08804D18;
    return;
L_08804D18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08804D28u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 23u, 0x08805298u>(ctx, &aot_mem) && ctx.pc == 0x08804D28u) goto L_08804D28;
    return;
L_08804D28:
    aot_gpr[31] = (0x08804D30u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 147u, 0x0880BAF8u>(ctx, &aot_mem) && ctx.pc == 0x08804D30u) goto L_08804D30;
    return;
L_08804D30:
    aot_gpr[31] = (0x08804D38u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(392));
    goto L_08804EF4;
L_08804D38:
    aot_gpr[31] = (0x08804D40u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088044D0;
L_08804D40:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804D50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08804D70u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 65u, 0x0880C4B4u>(ctx, &aot_mem) && ctx.pc == 0x08804D70u) goto L_08804D70;
    return;
L_08804D70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08804D80u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 23u, 0x08805298u>(ctx, &aot_mem) && ctx.pc == 0x08804D80u) goto L_08804D80;
    return;
L_08804D80:
    aot_gpr[31] = (0x08804D88u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088044D0;
L_08804D88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x08804D94u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088044F0;
L_08804D94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804DA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08804DC4u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 65u, 0x0880C4B4u>(ctx, &aot_mem) && ctx.pc == 0x08804DC4u) goto L_08804DC4;
    return;
L_08804DC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08804DD4u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 23u, 0x08805298u>(ctx, &aot_mem) && ctx.pc == 0x08804DD4u) goto L_08804DD4;
    return;
L_08804DD4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804DE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08804DF8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 187u, 0x08808F78u>(ctx, &aot_mem) && ctx.pc == 0x08804DF8u) goto L_08804DF8;
    return;
L_08804DF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804E04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08804E14u);
    aot_gpr[5] = (0u | 432u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x08804E14u) goto L_08804E14;
    return;
L_08804E14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804E20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7680));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08804E50u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(21208), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08804E68;
L_08804E50:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08804E5Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21220));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08804E5Cu) goto L_08804E5C;
    return;
L_08804E5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804E68:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804E94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08804EE8;
      }
      goto L_08804EA4;
    }
L_08804EA4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804EE8;
      }
      goto L_08804EAC;
    }
L_08804EAC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08804EE0;
      }
      goto L_08804EC0;
    }
L_08804EC0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08804ED8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804ED8u) goto L_08804ED8;
    return;
L_08804ED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08804EE8;
      }
      goto L_08804EE0;
    }
L_08804EE0:
    aot_gpr[31] = (0x08804EE8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08804EE8u) goto L_08804EE8;
    return;
L_08804EE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804EF4:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804F1C:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (49024u << 16u);
      if (branch_taken) {
          goto L_08804F40;
      }
      goto L_08804F38;
    }
L_08804F38:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08804F54;
      }
      goto L_08804F40;
    }
L_08804F40:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_08804F54;
    }
    goto L_08804F54;
L_08804F54:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (49024u << 16u);
      if (branch_taken) {
          goto L_08804F74;
      }
      goto L_08804F6C;
    }
L_08804F6C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08804F88;
      }
      goto L_08804F74;
    }
L_08804F74:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_08804F88;
    }
    goto L_08804F88;
L_08804F88:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (49024u << 16u);
      if (branch_taken) {
          goto L_08804FA8;
      }
      goto L_08804FA0;
    }
L_08804FA0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08804FBC;
      }
      goto L_08804FA8;
    }
L_08804FA8:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_08804FBC;
    }
    goto L_08804FBC;
L_08804FBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (49024u << 16u);
      if (branch_taken) {
          goto L_08804FDC;
      }
      goto L_08804FD4;
    }
L_08804FD4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08804FF0;
      }
      goto L_08804FDC;
    }
L_08804FDC:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_08804FF0;
    }
    goto L_08804FF0;
L_08804FF0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 2u, 0x08805008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 1u, 0x08805004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0000(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0000_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_0(Runtime &runtime) {
    runtime.register_generated_unit(0u, 0x08804000u, 4096u, &recomp_unit_0000, &recomp_unit_0000_entry);
    runtime.register_function(0x08804000u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804034u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804040u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804048u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804050u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804060u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804074u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804080u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804090u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804094u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804108u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804114u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880414Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804158u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804160u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804164u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880416Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804174u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804180u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880419Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880420Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804218u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880421Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804224u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880422Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804234u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880423Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804244u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880424Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804274u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880429Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804304u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804408u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804434u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804444u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804450u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804460u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804468u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880447Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804494u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880449Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804510u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880451Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804528u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804544u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804560u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804578u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804584u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880458Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804598u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804610u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880462Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804644u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804650u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880465Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804668u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804670u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804680u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804688u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804700u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804708u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804710u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804724u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804758u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804768u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804774u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804780u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804788u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804790u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880479Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804804u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804820u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804834u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804844u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804854u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880485Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880486Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804874u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804888u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804898u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804914u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804934u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880493Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804954u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804978u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804984u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A70u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B4Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B54u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BD0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BD8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C24u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C54u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804C98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CCCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D38u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D70u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DA4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DE4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EA4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804ED8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EF4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F1Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F38u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F54u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FF0u, &recomp_unit_0000, "recomp_unit_0000");
}
} // namespace psprecomp
