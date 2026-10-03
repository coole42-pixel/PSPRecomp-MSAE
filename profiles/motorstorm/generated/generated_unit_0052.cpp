#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0052[1022] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0,
    0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0,
    0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 35, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 39,
    0, 40, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52,
    0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 59,
    0, 0, 60, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0,
    83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0,
    0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    106, 0, 107, 0, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 0,
    0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0,
    131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0,
    0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182,
    0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 190,
    0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 196, 197, 0, 198, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208,
    0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 215, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0,
    223, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227,
};
void recomp_unit_0052_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08838000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0052[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08838000;
    case 2u: goto L_08838014;
    case 3u: goto L_08838030;
    case 4u: goto L_08838048;
    case 5u: goto L_08838060;
    case 6u: goto L_0883806C;
    case 7u: goto L_08838088;
    case 8u: goto L_088380AC;
    case 9u: goto L_088380C4;
    case 10u: goto L_088380CC;
    case 11u: goto L_088380DC;
    case 12u: goto L_088380E4;
    case 13u: goto L_088380F4;
    case 14u: goto L_08838104;
    case 15u: goto L_08838114;
    case 16u: goto L_0883811C;
    case 17u: goto L_08838134;
    case 18u: goto L_08838138;
    case 19u: goto L_08838144;
    case 20u: goto L_08838178;
    case 21u: goto L_088381AC;
    case 22u: goto L_088381C0;
    case 23u: goto L_088381C8;
    case 24u: goto L_088381D4;
    case 25u: goto L_088381DC;
    case 26u: goto L_088381E4;
    case 27u: goto L_088381F0;
    case 28u: goto L_088381F8;
    case 29u: goto L_08838210;
    case 30u: goto L_08838218;
    case 31u: goto L_08838220;
    case 32u: goto L_08838230;
    case 33u: goto L_08838240;
    case 34u: goto L_08838248;
    case 35u: goto L_08838250;
    case 36u: goto L_08838254;
    case 37u: goto L_08838264;
    case 38u: goto L_08838274;
    case 39u: goto L_0883827C;
    case 40u: goto L_08838284;
    case 41u: goto L_08838288;
    case 42u: goto L_08838290;
    case 43u: goto L_088382D0;
    case 44u: goto L_088382E8;
    case 45u: goto L_08838300;
    case 46u: goto L_08838318;
    case 47u: goto L_08838330;
    case 48u: goto L_08838348;
    case 49u: goto L_08838358;
    case 50u: goto L_08838364;
    case 51u: goto L_08838370;
    case 52u: goto L_0883837C;
    case 53u: goto L_08838388;
    case 54u: goto L_08838394;
    case 55u: goto L_088383B8;
    case 56u: goto L_088383E0;
    case 57u: goto L_088383EC;
    case 58u: goto L_088383F4;
    case 59u: goto L_088383FC;
    case 60u: goto L_08838408;
    case 61u: goto L_0883840C;
    case 62u: goto L_08838418;
    case 63u: goto L_0883843C;
    case 64u: goto L_08838458;
    case 65u: goto L_08838464;
    case 66u: goto L_08838470;
    case 67u: goto L_0883848C;
    case 68u: goto L_088384CC;
    case 69u: goto L_088384D8;
    case 70u: goto L_088384EC;
    case 71u: goto L_08838508;
    case 72u: goto L_0883852C;
    case 73u: goto L_08838534;
    case 74u: goto L_08838560;
    case 75u: goto L_08838590;
    case 76u: goto L_088385A0;
    case 77u: goto L_088385A8;
    case 78u: goto L_088385B8;
    case 79u: goto L_088385C0;
    case 80u: goto L_088385D0;
    case 81u: goto L_088385E4;
    case 82u: goto L_088385F0;
    case 83u: goto L_08838600;
    case 84u: goto L_0883860C;
    case 85u: goto L_0883864C;
    case 86u: goto L_08838670;
    case 87u: goto L_08838684;
    case 88u: goto L_08838698;
    case 89u: goto L_088386BC;
    case 90u: goto L_088386FC;
    case 91u: goto L_0883871C;
    case 92u: goto L_08838724;
    case 93u: goto L_08838734;
    case 94u: goto L_08838748;
    case 95u: goto L_08838750;
    case 96u: goto L_08838760;
    case 97u: goto L_08838774;
    case 98u: goto L_08838784;
    case 99u: goto L_0883878C;
    case 100u: goto L_08838794;
    case 101u: goto L_088387A8;
    case 102u: goto L_088387BC;
    case 103u: goto L_088387C8;
    case 104u: goto L_088387D4;
    case 105u: goto L_088387E4;
    case 106u: goto L_08838800;
    case 107u: goto L_08838808;
    case 108u: goto L_08838814;
    case 109u: goto L_0883881C;
    case 110u: goto L_08838824;
    case 111u: goto L_0883882C;
    case 112u: goto L_08838834;
    case 113u: goto L_08838844;
    case 114u: goto L_08838850;
    case 115u: goto L_08838858;
    case 116u: goto L_08838860;
    case 117u: goto L_08838868;
    case 118u: goto L_08838874;
    case 119u: goto L_08838884;
    case 120u: goto L_08838890;
    case 121u: goto L_0883889C;
    case 122u: goto L_088388A8;
    case 123u: goto L_088388B4;
    case 124u: goto L_088388BC;
    case 125u: goto L_088388C4;
    case 126u: goto L_088388CC;
    case 127u: goto L_088388D8;
    case 128u: goto L_088388E0;
    case 129u: goto L_088388EC;
    case 130u: goto L_088388F4;
    case 131u: goto L_08838900;
    case 132u: goto L_08838908;
    case 133u: goto L_08838918;
    case 134u: goto L_08838920;
    case 135u: goto L_08838928;
    case 136u: goto L_08838934;
    case 137u: goto L_0883894C;
    case 138u: goto L_0883895C;
    case 139u: goto L_0883897C;
    case 140u: goto L_08838990;
    case 141u: goto L_088389A8;
    case 142u: goto L_088389B4;
    case 143u: goto L_088389D8;
    case 144u: goto L_088389EC;
    case 145u: goto L_088389F8;
    case 146u: goto L_08838A24;
    case 147u: goto L_08838A2C;
    case 148u: goto L_08838A38;
    case 149u: goto L_08838A4C;
    case 150u: goto L_08838A58;
    case 151u: goto L_08838A64;
    case 152u: goto L_08838A70;
    case 153u: goto L_08838A80;
    case 154u: goto L_08838A98;
    case 155u: goto L_08838AB8;
    case 156u: goto L_08838AC0;
    case 157u: goto L_08838ACC;
    case 158u: goto L_08838AD0;
    case 159u: goto L_08838AD8;
    case 160u: goto L_08838AEC;
    case 161u: goto L_08838AF8;
    case 162u: goto L_08838B04;
    case 163u: goto L_08838B0C;
    case 164u: goto L_08838B1C;
    case 165u: goto L_08838B2C;
    case 166u: goto L_08838B44;
    case 167u: goto L_08838B68;
    case 168u: goto L_08838B70;
    case 169u: goto L_08838B8C;
    case 170u: goto L_08838B9C;
    case 171u: goto L_08838BA4;
    case 172u: goto L_08838BAC;
    case 173u: goto L_08838BB8;
    case 174u: goto L_08838BC4;
    case 175u: goto L_08838BD0;
    case 176u: goto L_08838BE8;
    case 177u: goto L_08838BF0;
    case 178u: goto L_08838C08;
    case 179u: goto L_08838C38;
    case 180u: goto L_08838C5C;
    case 181u: goto L_08838C70;
    case 182u: goto L_08838C7C;
    case 183u: goto L_08838C8C;
    case 184u: goto L_08838C94;
    case 185u: goto L_08838CA4;
    case 186u: goto L_08838CB8;
    case 187u: goto L_08838CDC;
    case 188u: goto L_08838CE4;
    case 189u: goto L_08838CF0;
    case 190u: goto L_08838CFC;
    case 191u: goto L_08838D14;
    case 192u: goto L_08838D1C;
    case 193u: goto L_08838D28;
    case 194u: goto L_08838D40;
    case 195u: goto L_08838D4C;
    case 196u: goto L_08838D64;
    case 197u: goto L_08838D68;
    case 198u: goto L_08838D70;
    case 199u: goto L_08838D84;
    case 200u: goto L_08838DB8;
    case 201u: goto L_08838DD8;
    case 202u: goto L_08838DE0;
    case 203u: goto L_08838E14;
    case 204u: goto L_08838E24;
    case 205u: goto L_08838E48;
    case 206u: goto L_08838E54;
    case 207u: goto L_08838E64;
    case 208u: goto L_08838E7C;
    case 209u: goto L_08838E8C;
    case 210u: goto L_08838EA0;
    case 211u: goto L_08838EB4;
    case 212u: goto L_08838EBC;
    case 213u: goto L_08838ED0;
    case 214u: goto L_08838EE8;
    case 215u: goto L_08838F08;
    case 216u: goto L_08838F1C;
    case 217u: goto L_08838F24;
    case 218u: goto L_08838F40;
    case 219u: goto L_08838F48;
    case 220u: goto L_08838F54;
    case 221u: goto L_08838F5C;
    case 222u: goto L_08838F64;
    case 223u: goto L_08838F80;
    case 224u: goto L_08838F88;
    case 225u: goto L_08838FA4;
    case 226u: goto L_08838FB0;
    case 227u: goto L_08838FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08838000:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08838014u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9188));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08838014u) goto L_08838014;
    return;
L_08838014:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1944)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[31] = (0x08838030u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(36))))));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08838030u) goto L_08838030;
    return;
L_08838030:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[31] = (0x08838048u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08838048u) goto L_08838048;
    return;
L_08838048:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[19] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088380C4;
      }
      goto L_08838060;
    }
L_08838060:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883806Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 135u, 0x08836B88u>(ctx, &aot_mem) && ctx.pc == 0x0883806Cu) goto L_0883806C;
    return;
L_0883806C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[31] = (0x08838088u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08838088u) goto L_08838088;
    return;
L_08838088:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(-2));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1948)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[31] = (0x088380ACu);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(34))))));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088380ACu) goto L_088380AC;
    return;
L_088380AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08838060;
      }
      goto L_088380C4;
    }
L_088380C4:
    aot_gpr[31] = (0x088380CCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 146u, 0x08836C38u>(ctx, &aot_mem) && ctx.pc == 0x088380CCu) goto L_088380CC;
    return;
L_088380CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088380DCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x088380DCu) goto L_088380DC;
    return;
L_088380DC:
    aot_gpr[31] = (0x088380E4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088380E4u) goto L_088380E4;
    return;
L_088380E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088380F4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 149u, 0x08836C6Cu>(ctx, &aot_mem) && ctx.pc == 0x088380F4u) goto L_088380F4;
    return;
L_088380F4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883811C;
      }
      goto L_08838104;
    }
L_08838104:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(36))))));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08838114u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 50u, 0x08837550u>(ctx, &aot_mem) && ctx.pc == 0x08838114u) goto L_08838114;
    return;
L_08838114:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08838138;
      }
      goto L_0883811C;
    }
L_0883811C:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(34))))));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08838134u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 50u, 0x08837550u>(ctx, &aot_mem) && ctx.pc == 0x08838134u) goto L_08838134;
    return;
L_08838134:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08838138;
L_08838138:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08838144u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 152u, 0x08837E78u>(ctx, &aot_mem) && ctx.pc == 0x08838144u) goto L_08838144;
    return;
L_08838144:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2192), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[5]);
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
L_08838178:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088381ACu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9160));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088381ACu) goto L_088381AC;
    return;
L_088381AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (0x088381C0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9144));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088381C0u) goto L_088381C0;
    return;
L_088381C0:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[5] = (2214u << 16u);
      if (branch_taken) {
          goto L_088381DC;
      }
      goto L_088381C8;
    }
L_088381C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088381D4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9116));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088381D4u) goto L_088381D4;
    return;
L_088381D4:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088381E4;
      }
      goto L_088381DC;
    }
L_088381DC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088381E4;
L_088381E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088381F8;
      }
      goto L_088381F0;
    }
L_088381F0:
    aot_gpr[31] = (0x088381F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088381F8u) goto L_088381F8;
    return;
L_088381F8:
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
L_08838210:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838218:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838220:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08838248;
      }
      goto L_08838230;
    }
L_08838230:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(36))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08838250;
      }
      goto L_08838240;
    }
L_08838240:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08838288;
      }
      goto L_08838248;
    }
L_08838248:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08838288;
      }
      goto L_08838250;
    }
L_08838250:
    aot_gpr[5] = (0u | 0u);
    goto L_08838254;
L_08838254:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(38))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(46))))));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0883827C;
      }
      goto L_08838264;
    }
L_08838264:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08838254;
      }
      goto L_08838274;
    }
L_08838274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838284;
      }
      goto L_0883827C;
    }
L_0883827C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08838288;
      }
      goto L_08838284;
    }
L_08838284:
    aot_gpr[2] = (0u | 0u);
    goto L_08838288;
L_08838288:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838290:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-9256));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088382D0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9236));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088382D0u) goto L_088382D0;
    return;
L_088382D0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088382E8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8944));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088382E8u) goto L_088382E8;
    return;
L_088382E8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08838300u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8916));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08838300u) goto L_08838300;
    return;
L_08838300:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08838318u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8888));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08838318u) goto L_08838318;
    return;
L_08838318:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08838330u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9188));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08838330u) goto L_08838330;
    return;
L_08838330:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08838348u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9216));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08838348u) goto L_08838348;
    return;
L_08838348:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08838358u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08838358u) goto L_08838358;
    return;
L_08838358:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08838364u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08838364u) goto L_08838364;
    return;
L_08838364:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08838370u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08838370u) goto L_08838370;
    return;
L_08838370:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0883837Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0883837Cu) goto L_0883837C;
    return;
L_0883837C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08838388u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08838388u) goto L_08838388;
    return;
L_08838388:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08838394u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08838394u) goto L_08838394;
    return;
L_08838394:
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
L_088383B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088383F4;
      }
      goto L_088383E0;
    }
L_088383E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088383FC;
      }
      goto L_088383EC;
    }
L_088383EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838470;
      }
      goto L_088383F4;
    }
L_088383F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838470;
      }
      goto L_088383FC;
    }
L_088383FC:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0883840C;
      }
      goto L_08838408;
    }
L_08838408:
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    goto L_0883840C;
L_0883840C:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[31] = (0x08838418u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 144u, 0x088D89F0u>(ctx, &aot_mem) && ctx.pc == 0x08838418u) goto L_08838418;
    return;
L_08838418:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x0883843Cu);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 115u, 0x088D79B8u>(ctx, &aot_mem) && ctx.pc == 0x0883843Cu) goto L_0883843C;
    return;
L_0883843C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08838458u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 140u, 0x0885B9B4u>(ctx, &aot_mem) && ctx.pc == 0x08838458u) goto L_08838458;
    return;
L_08838458:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08838470;
      }
      goto L_08838464;
    }
L_08838464:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    goto L_08838470;
L_08838470:
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
L_0883848C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr[16]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088384CCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9188));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088384CCu) goto L_088384CC;
    return;
L_088384CC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088384D8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088384D8u) goto L_088384D8;
    return;
L_088384D8:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088384ECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 140u, 0x0885B9B4u>(ctx, &aot_mem) && ctx.pc == 0x088384ECu) goto L_088384EC;
    return;
L_088384EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(50)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08838508u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 95u, 0x088D77F0u>(ctx, &aot_mem) && ctx.pc == 0x08838508u) goto L_08838508;
    return;
L_08838508:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x0883852Cu);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 115u, 0x088D79B8u>(ctx, &aot_mem) && ctx.pc == 0x0883852Cu) goto L_0883852C;
    return;
L_0883852C:
    aot_gpr[31] = (0x08838534u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x08838534u) goto L_08838534;
    return;
L_08838534:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(24))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), aot_gpr[4]);
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
L_08838560:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08838590;
L_08838590:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(38))))));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(46))))));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088385A8;
      }
      goto L_088385A0;
    }
L_088385A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_088385B8;
      }
      goto L_088385A8;
    }
L_088385A8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08838590;
      }
      goto L_088385B8;
    }
L_088385B8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838698;
      }
      goto L_088385C0;
    }
L_088385C0:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[16] | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[19] = (2218u << 16u);
    goto L_088385D0;
L_088385D0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(46))))));
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088385E4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 135u, 0x08836B88u>(ctx, &aot_mem) && ctx.pc == 0x088385E4u) goto L_088385E4;
    return;
L_088385E4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(38))))));
    aot_gpr[31] = (0x088385F0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088385F0u) goto L_088385F0;
    return;
L_088385F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08838600u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x08838600u) goto L_08838600;
    return;
L_08838600:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838684;
      }
      goto L_0883860C;
    }
L_0883860C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(38))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1948), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(38))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(8))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(11))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[9] = (0u < aot_gpr[9] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0883864Cu);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 106u, 0x088D78E4u>(ctx, &aot_mem) && ctx.pc == 0x0883864Cu) goto L_0883864C;
    return;
L_0883864C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(11))))));
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[31] = (0x08838670u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 115u, 0x088D79B8u>(ctx, &aot_mem) && ctx.pc == 0x08838670u) goto L_08838670;
    return;
L_08838670:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08838684u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 27u, 0x088DB31Cu>(ctx, &aot_mem) && ctx.pc == 0x08838684u) goto L_08838684;
    return;
L_08838684:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088385D0;
      }
      goto L_08838698;
    }
L_08838698:
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
L_088386BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[31] = (0x088386FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088386FCu) goto L_088386FC;
    return;
L_088386FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(325)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-9256));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (2218u << 16u);
      if (branch_taken) {
          goto L_08838760;
      }
      goto L_0883871C;
    }
L_0883871C:
    aot_gpr[31] = (0x08838724u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x08838724u) goto L_08838724;
    return;
L_08838724:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[31] = (0x08838734u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 26u, 0x088E01F8u>(ctx, &aot_mem) && ctx.pc == 0x08838734u) goto L_08838734;
    return;
L_08838734:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08838748u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 151u, 0x088D7D00u>(ctx, &aot_mem) && ctx.pc == 0x08838748u) goto L_08838748;
    return;
L_08838748:
    aot_gpr[31] = (0x08838750u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x08838750u) goto L_08838750;
    return;
L_08838750:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(325), static_cast<std::uint8_t>(0u));
    goto L_08838760;
L_08838760:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0883878C;
      }
      goto L_08838774;
    }
L_08838774:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[31] = (0x08838784u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(2172)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x08838784u) goto L_08838784;
    return;
L_08838784:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(6))))));
    goto L_0883878C;
L_0883878C:
    aot_gpr[31] = (0x08838794u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088383B8;
L_08838794:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088387A8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9236));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088387A8u) goto L_088387A8;
    return;
L_088387A8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[21] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0883881C;
      }
      goto L_088387BC;
    }
L_088387BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883881C;
      }
      goto L_088387C8;
    }
L_088387C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x088387D4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 61u, 0x088D93D4u>(ctx, &aot_mem) && ctx.pc == 0x088387D4u) goto L_088387D4;
    return;
L_088387D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x088387E4u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 25u, 0x088DA1D8u>(ctx, &aot_mem) && ctx.pc == 0x088387E4u) goto L_088387E4;
    return;
L_088387E4:
    aot_gpr[5] = (16230u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 26214u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16128u << 16u);
    aot_gpr[31] = (0x08838800u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 100u, 0x0885A63Cu>(ctx, &aot_mem) && ctx.pc == 0x08838800u) goto L_08838800;
    return;
L_08838800:
    aot_gpr[31] = (0x08838808u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838808u) goto L_08838808;
    return;
L_08838808:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08838824;
      }
      goto L_08838814;
    }
L_08838814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838A24;
      }
      goto L_0883881C;
    }
L_0883881C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838D84;
      }
      goto L_08838824;
    }
L_08838824:
    aot_gpr[31] = (0x0883882Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0883882Cu) goto L_0883882C;
    return;
L_0883882C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838858;
      }
      goto L_08838834;
    }
L_08838834:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08838844u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 108u, 0x088D97B4u>(ctx, &aot_mem) && ctx.pc == 0x08838844u) goto L_08838844;
    return;
L_08838844:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08838850u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 95u, 0x088DB8A8u>(ctx, &aot_mem) && ctx.pc == 0x08838850u) goto L_08838850;
    return;
L_08838850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883889C;
      }
      goto L_08838858;
    }
L_08838858:
    aot_gpr[31] = (0x08838860u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838860u) goto L_08838860;
    return;
L_08838860:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_0883889C;
      }
      goto L_08838868;
    }
L_08838868:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883889C;
      }
      goto L_08838874;
    }
L_08838874:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08838884u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 108u, 0x088D97B4u>(ctx, &aot_mem) && ctx.pc == 0x08838884u) goto L_08838884;
    return;
L_08838884:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883889C;
      }
      goto L_08838890;
    }
L_08838890:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x0883889Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 95u, 0x088DB8A8u>(ctx, &aot_mem) && ctx.pc == 0x0883889Cu) goto L_0883889C;
    return;
L_0883889C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088388C4;
      }
      goto L_088388A8;
    }
L_088388A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088388C4;
      }
      goto L_088388B4;
    }
L_088388B4:
    aot_gpr[31] = (0x088388BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 89u, 0x088D7748u>(ctx, &aot_mem) && ctx.pc == 0x088388BCu) goto L_088388BC;
    return;
L_088388BC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088388C4;
L_088388C4:
    aot_gpr[31] = (0x088388CCu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088388CCu) goto L_088388CC;
    return;
L_088388CC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088388D8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 149u, 0x08836C6Cu>(ctx, &aot_mem) && ctx.pc == 0x088388D8u) goto L_088388D8;
    return;
L_088388D8:
    aot_gpr[31] = (0x088388E0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088388E0u) goto L_088388E0;
    return;
L_088388E0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088388ECu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 152u, 0x08837E78u>(ctx, &aot_mem) && ctx.pc == 0x088388ECu) goto L_088388EC;
    return;
L_088388EC:
    aot_gpr[31] = (0x088388F4u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088388F4u) goto L_088388F4;
    return;
L_088388F4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838920;
      }
      goto L_08838900;
    }
L_08838900:
    aot_gpr[31] = (0x08838908u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838908u) goto L_08838908;
    return;
L_08838908:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(36))))));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08838918u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 50u, 0x08837550u>(ctx, &aot_mem) && ctx.pc == 0x08838918u) goto L_08838918;
    return;
L_08838918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838A24;
      }
      goto L_08838920;
    }
L_08838920:
    aot_gpr[31] = (0x08838928u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838928u) goto L_08838928;
    return;
L_08838928:
    aot_gpr[23] = (aot_gpr[2] + static_cast<std::uint32_t>(-2));
    aot_gpr[31] = (0x08838934u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838934u) goto L_08838934;
    return;
L_08838934:
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(38))))));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883894Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 50u, 0x08837550u>(ctx, &aot_mem) && ctx.pc == 0x0883894Cu) goto L_0883894C;
    return;
L_0883894C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0883895Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x0883895Cu) goto L_0883895C;
    return;
L_0883895C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0883897Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 199u, 0x088D9E50u>(ctx, &aot_mem) && ctx.pc == 0x0883897Cu) goto L_0883897C;
    return;
L_0883897C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[23]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2202)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838A24;
      }
      goto L_08838990;
    }
L_08838990:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088389D8;
      }
      goto L_088389A8;
    }
L_088389A8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(9))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088389D8;
      }
      goto L_088389B4;
    }
L_088389B4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(10))))));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088389D8u);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 197u, 0x088D9E00u>(ctx, &aot_mem) && ctx.pc == 0x088389D8u) goto L_088389D8;
    return;
L_088389D8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08838A24;
      }
      goto L_088389EC;
    }
L_088389EC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838A24;
      }
      goto L_088389F8;
    }
L_088389F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(9))))));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[31] = (0x08838A24u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 197u, 0x088D9E00u>(ctx, &aot_mem) && ctx.pc == 0x08838A24u) goto L_08838A24;
    return;
L_08838A24:
    aot_gpr[31] = (0x08838A2Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838A2Cu) goto L_08838A2C;
    return;
L_08838A2C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
      if (branch_taken) {
          goto L_08838AD0;
      }
      goto L_08838A38;
    }
L_08838A38:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08838A4Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9216));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08838A4Cu) goto L_08838A4C;
    return;
L_08838A4C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08838A58u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838A58u) goto L_08838A58;
    return;
L_08838A58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08838ACC;
      }
      goto L_08838A64;
    }
L_08838A64:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08838A70u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838A70u) goto L_08838A70;
    return;
L_08838A70:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08838A80u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 93u, 0x088D96D0u>(ctx, &aot_mem) && ctx.pc == 0x08838A80u) goto L_08838A80;
    return;
L_08838A80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[23] = (ctx.lo);
    aot_gpr[31] = (0x08838A98u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x08838A98u) goto L_08838A98;
    return;
L_08838A98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x08838AB8u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 95u, 0x088E682Cu>(ctx, &aot_mem) && ctx.pc == 0x08838AB8u) goto L_08838AB8;
    return;
L_08838AB8:
    aot_gpr[31] = (0x08838AC0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838AC0u) goto L_08838AC0;
    return;
L_08838AC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(1960), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_08838ACC;
L_08838ACC:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08838AD0;
L_08838AD0:
    { const bool branch_taken = aot_gpr[21] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08838BAC;
      }
      goto L_08838AD8;
    }
L_08838AD8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08838AECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9188));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08838AECu) goto L_08838AEC;
    return;
L_08838AEC:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08838AF8u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838AF8u) goto L_08838AF8;
    return;
L_08838AF8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08838B9C;
      }
      goto L_08838B04;
    }
L_08838B04:
    aot_gpr[31] = (0x08838B0Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 22u, 0x088D51E8u>(ctx, &aot_mem) && ctx.pc == 0x08838B0Cu) goto L_08838B0C;
    return;
L_08838B0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08838B1Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 140u, 0x0885B9B4u>(ctx, &aot_mem) && ctx.pc == 0x08838B1Cu) goto L_08838B1C;
    return;
L_08838B1C:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(50)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08838B2Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838B2Cu) goto L_08838B2C;
    return;
L_08838B2C:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08838B44u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 95u, 0x088D77F0u>(ctx, &aot_mem) && ctx.pc == 0x08838B44u) goto L_08838B44;
    return;
L_08838B44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x08838B68u);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 115u, 0x088D79B8u>(ctx, &aot_mem) && ctx.pc == 0x08838B68u) goto L_08838B68;
    return;
L_08838B68:
    aot_gpr[31] = (0x08838B70u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x08838B70u) goto L_08838B70;
    return;
L_08838B70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(24))))));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08838B8Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838B8Cu) goto L_08838B8C;
    return;
L_08838B8C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08838B9Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 50u, 0x08837550u>(ctx, &aot_mem) && ctx.pc == 0x08838B9Cu) goto L_08838B9C;
    return;
L_08838B9C:
    aot_gpr[31] = (0x08838BA4u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838BA4u) goto L_08838BA4;
    return;
L_08838BA4:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08838BAC;
L_08838BAC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838CA4;
      }
      goto L_08838BB8;
    }
L_08838BB8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08838BC4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 135u, 0x08836B88u>(ctx, &aot_mem) && ctx.pc == 0x08838BC4u) goto L_08838BC4;
    return;
L_08838BC4:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08838BD0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838BD0u) goto L_08838BD0;
    return;
L_08838BD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08838C8C;
      }
      goto L_08838BE8;
    }
L_08838BE8:
    aot_gpr[31] = (0x08838BF0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 22u, 0x088D51E8u>(ctx, &aot_mem) && ctx.pc == 0x08838BF0u) goto L_08838BF0;
    return;
L_08838BF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(11))))));
    aot_gpr[23] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08838C08u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838C08u) goto L_08838C08;
    return;
L_08838C08:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(8))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[9] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08838C38u);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 106u, 0x088D78E4u>(ctx, &aot_mem) && ctx.pc == 0x08838C38u) goto L_08838C38;
    return;
L_08838C38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[31] = (0x08838C5Cu);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 115u, 0x088D79B8u>(ctx, &aot_mem) && ctx.pc == 0x08838C5Cu) goto L_08838C5C;
    return;
L_08838C5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08838C70u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 27u, 0x088DB31Cu>(ctx, &aot_mem) && ctx.pc == 0x08838C70u) goto L_08838C70;
    return;
L_08838C70:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x08838C7Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838C7Cu) goto L_08838C7C;
    return;
L_08838C7C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08838C8Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 50u, 0x08837550u>(ctx, &aot_mem) && ctx.pc == 0x08838C8Cu) goto L_08838C8C;
    return;
L_08838C8C:
    aot_gpr[31] = (0x08838C94u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08838C94u) goto L_08838C94;
    return;
L_08838C94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_08838CA4;
L_08838CA4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08838CB8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9160));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08838CB8u) goto L_08838CB8;
    return;
L_08838CB8:
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
          goto L_08838D84;
      }
      goto L_08838CDC;
    }
L_08838CDC:
    aot_gpr[31] = (0x08838CE4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08838220;
L_08838CE4:
    aot_gpr[4] = (16256u << 16u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08838D1C;
      }
      goto L_08838CF0;
    }
L_08838CF0:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08838CFCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08838CFCu) goto L_08838CFC;
    return;
L_08838CFC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x08838D14u);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x08838D14u) goto L_08838D14;
    return;
L_08838D14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08838D68;
      }
      goto L_08838D1C;
    }
L_08838D1C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08838D28u);
    aot_gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08838D28u) goto L_08838D28;
    return;
L_08838D28:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x08838D40u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x08838D40u) goto L_08838D40;
    return;
L_08838D40:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08838D4Cu);
    aot_gpr[5] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08838D4Cu) goto L_08838D4C;
    return;
L_08838D4C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08838D64u);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x08838D64u) goto L_08838D64;
    return;
L_08838D64:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    goto L_08838D68;
L_08838D68:
    aot_gpr[31] = (0x08838D70u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08838D70u) goto L_08838D70;
    return;
L_08838D70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_08838D84;
L_08838D84:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838DB8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23704), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838DD8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838DE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(-8696));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08838E14u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8668));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08838E14u) goto L_08838E14;
    return;
L_08838E14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08838E24u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08838E24u) goto L_08838E24;
    return;
L_08838E24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08838E64;
      }
      goto L_08838E48;
    }
L_08838E48:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[31] = (0x08838E54u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 145u, 0x088DA944u>(ctx, &aot_mem) && ctx.pc == 0x08838E54u) goto L_08838E54;
    return;
L_08838E54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2197), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08838ED0;
      }
      goto L_08838E64;
    }
L_08838E64:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8644));
    aot_gpr[31] = (0x08838E7Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8624));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08838E7Cu) goto L_08838E7C;
    return;
L_08838E7C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838EBC;
      }
      goto L_08838E8C;
    }
L_08838E8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08838EA0u);
    aot_gpr[7] = (0u | 0u);
    goto L_08838FB0;
L_08838EA0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08838EB4u);
    aot_gpr[7] = (0u | 0u);
    goto L_08838FB0;
L_08838EB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838ED0;
      }
      goto L_08838EBC;
    }
L_08838EBC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(116)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08838ED0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08838FB0;
L_08838ED0:
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
L_08838EE8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23712), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838F08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08838F48;
      }
      goto L_08838F1C;
    }
L_08838F1C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08838FA4;
      }
      goto L_08838F24;
    }
L_08838F24:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8580));
    aot_gpr[31] = (0x08838F40u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8408));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08838F40u) goto L_08838F40;
    return;
L_08838F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838FA4;
      }
      goto L_08838F48;
    }
L_08838F48:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08838F64;
      }
      goto L_08838F54;
    }
L_08838F54:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838F88;
      }
      goto L_08838F5C;
    }
L_08838F5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838FA4;
      }
      goto L_08838F64;
    }
L_08838F64:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8580));
    aot_gpr[31] = (0x08838F80u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8376));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08838F80u) goto L_08838F80;
    return;
L_08838F80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838FA4;
      }
      goto L_08838F88;
    }
L_08838F88:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8580));
    aot_gpr[31] = (0x08838FA4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8340));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08838FA4u) goto L_08838FA4;
    return;
L_08838FA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838FB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08838FF4u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 179u, 0x0885AADCu>(ctx, &aot_mem) && ctx.pc == 0x08838FF4u) goto L_08838FF4;
    return;
L_08838FF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[4] = (aot_gpr[4] << 16u);
    ctx.pc = 0x08839000u; return;
}

void recomp_unit_0052(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0052_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_52(Runtime &runtime) {
    runtime.register_generated_unit(52u, 0x08838000u, 4096u, &recomp_unit_0052, &recomp_unit_0052_entry);
    runtime.register_function(0x08838000u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838014u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838030u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838048u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838060u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883806Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838088u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088380ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088380C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088380CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088380DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088380E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088380F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838104u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838114u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883811Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838134u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838138u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838144u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838178u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088381ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088381C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088381C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088381D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088381DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088381E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088381F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088381F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838210u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838218u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838220u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838230u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838240u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838248u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838250u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838254u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838264u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838274u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883827Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838284u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838288u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838290u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088382D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088382E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838300u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838318u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838330u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838348u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838358u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838364u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838370u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883837Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838388u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838394u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088383B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088383E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088383ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088383F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088383FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838408u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883840Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838418u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883843Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838458u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838464u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838470u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883848Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088384CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088384D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088384ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838508u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883852Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838534u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838560u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838590u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088385A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088385A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088385B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088385C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088385D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088385E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088385F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838600u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883860Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883864Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838670u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838684u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838698u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088386BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088386FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883871Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838724u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838734u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838748u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838750u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838760u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838774u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838784u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883878Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838794u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088387A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088387BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088387C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088387D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088387E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838800u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838808u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838814u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883881Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838824u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883882Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838834u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838844u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838850u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838858u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838860u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838868u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838874u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838884u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838890u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883889Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088388A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088388B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088388BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088388C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088388CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088388D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088388E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088388ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088388F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838900u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838908u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838918u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838920u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838928u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838934u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883894Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883895Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x0883897Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838990u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088389A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088389B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088389D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088389ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088389F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838A24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838A2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838A38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838A4Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838A58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838A64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838A70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838A80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838A98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838AB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838AC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838ACCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838AD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838AD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838AECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838AF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838B04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838B0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838B1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838B2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838B44u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838B68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838B70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838B8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838B9Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838BA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838BACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838BB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838BC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838BD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838BE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838BF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838C08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838C38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838C5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838C70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838C7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838C8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838C94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838CA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838CB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838CDCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838CE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838CF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838CFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838D14u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838D1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838D28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838D40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838D4Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838D64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838D68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838D70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838D84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838DB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838DD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838DE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838E14u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838E24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838E48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838E54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838E64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838E7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838E8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838EA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838EB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838EBCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838ED0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838EE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838F08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838F1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838F24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838F40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838F48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838F54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838F5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838F64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838F80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838F88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838FA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838FB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x08838FF4u, &recomp_unit_0052, "recomp_unit_0052");
}
} // namespace psprecomp
