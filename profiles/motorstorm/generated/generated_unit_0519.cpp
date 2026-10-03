#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0519[1024] = {
    1, 0, 0, 2, 0, 0, 3, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 14, 0, 15, 0, 0,
    0, 16, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 26, 0, 27, 0, 28, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0,
    40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 0, 46, 0, 47,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 65,
    0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0,
    0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 79, 80, 81, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0,
    0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 111, 0,
    0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 121, 0, 122,
    0, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 131, 132, 0, 133, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0,
    143, 0, 0, 144, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 150,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 157,
    0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 162, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 0,
    0, 190, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195, 196, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 204, 205, 0, 206, 0, 207, 208, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219, 0, 0, 220, 0, 221, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 225, 0, 226, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237,
};
void recomp_unit_0519_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A0B000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0519[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A0B000;
    case 2u: goto L_08A0B00C;
    case 3u: goto L_08A0B018;
    case 4u: goto L_08A0B01C;
    case 5u: goto L_08A0B02C;
    case 6u: goto L_08A0B048;
    case 7u: goto L_08A0B05C;
    case 8u: goto L_08A0B074;
    case 9u: goto L_08A0B0A4;
    case 10u: goto L_08A0B0B0;
    case 11u: goto L_08A0B0CC;
    case 12u: goto L_08A0B0D8;
    case 13u: goto L_08A0B0E0;
    case 14u: goto L_08A0B0EC;
    case 15u: goto L_08A0B0F4;
    case 16u: goto L_08A0B104;
    case 17u: goto L_08A0B108;
    case 18u: goto L_08A0B118;
    case 19u: goto L_08A0B13C;
    case 20u: goto L_08A0B164;
    case 21u: goto L_08A0B178;
    case 22u: goto L_08A0B180;
    case 23u: goto L_08A0B1A0;
    case 24u: goto L_08A0B1AC;
    case 25u: goto L_08A0B1B4;
    case 26u: goto L_08A0B1C0;
    case 27u: goto L_08A0B1C8;
    case 28u: goto L_08A0B1D0;
    case 29u: goto L_08A0B1D4;
    case 30u: goto L_08A0B1E4;
    case 31u: goto L_08A0B204;
    case 32u: goto L_08A0B220;
    case 33u: goto L_08A0B234;
    case 34u: goto L_08A0B248;
    case 35u: goto L_08A0B258;
    case 36u: goto L_08A0B260;
    case 37u: goto L_08A0B268;
    case 38u: goto L_08A0B270;
    case 39u: goto L_08A0B278;
    case 40u: goto L_08A0B280;
    case 41u: goto L_08A0B298;
    case 42u: goto L_08A0B2B4;
    case 43u: goto L_08A0B2CC;
    case 44u: goto L_08A0B2D8;
    case 45u: goto L_08A0B2E0;
    case 46u: goto L_08A0B2F4;
    case 47u: goto L_08A0B2FC;
    case 48u: goto L_08A0B324;
    case 49u: goto L_08A0B334;
    case 50u: goto L_08A0B340;
    case 51u: goto L_08A0B348;
    case 52u: goto L_08A0B354;
    case 53u: goto L_08A0B35C;
    case 54u: goto L_08A0B36C;
    case 55u: goto L_08A0B38C;
    case 56u: goto L_08A0B3AC;
    case 57u: goto L_08A0B3D0;
    case 58u: goto L_08A0B3F4;
    case 59u: goto L_08A0B404;
    case 60u: goto L_08A0B434;
    case 61u: goto L_08A0B448;
    case 62u: goto L_08A0B450;
    case 63u: goto L_08A0B45C;
    case 64u: goto L_08A0B468;
    case 65u: goto L_08A0B47C;
    case 66u: goto L_08A0B484;
    case 67u: goto L_08A0B494;
    case 68u: goto L_08A0B4A8;
    case 69u: goto L_08A0B4B0;
    case 70u: goto L_08A0B4C0;
    case 71u: goto L_08A0B4CC;
    case 72u: goto L_08A0B4E0;
    case 73u: goto L_08A0B4E8;
    case 74u: goto L_08A0B4F8;
    case 75u: goto L_08A0B508;
    case 76u: goto L_08A0B51C;
    case 77u: goto L_08A0B524;
    case 78u: goto L_08A0B534;
    case 79u: goto L_08A0B53C;
    case 80u: goto L_08A0B540;
    case 81u: goto L_08A0B544;
    case 82u: goto L_08A0B54C;
    case 83u: goto L_08A0B558;
    case 84u: goto L_08A0B564;
    case 85u: goto L_08A0B570;
    case 86u: goto L_08A0B58C;
    case 87u: goto L_08A0B59C;
    case 88u: goto L_08A0B5B0;
    case 89u: goto L_08A0B5D0;
    case 90u: goto L_08A0B5F0;
    case 91u: goto L_08A0B634;
    case 92u: goto L_08A0B648;
    case 93u: goto L_08A0B650;
    case 94u: goto L_08A0B658;
    case 95u: goto L_08A0B668;
    case 96u: goto L_08A0B674;
    case 97u: goto L_08A0B684;
    case 98u: goto L_08A0B690;
    case 99u: goto L_08A0B698;
    case 100u: goto L_08A0B6CC;
    case 101u: goto L_08A0B6D4;
    case 102u: goto L_08A0B6E4;
    case 103u: goto L_08A0B6EC;
    case 104u: goto L_08A0B6F4;
    case 105u: goto L_08A0B720;
    case 106u: goto L_08A0B728;
    case 107u: goto L_08A0B730;
    case 108u: goto L_08A0B74C;
    case 109u: goto L_08A0B758;
    case 110u: goto L_08A0B770;
    case 111u: goto L_08A0B778;
    case 112u: goto L_08A0B790;
    case 113u: goto L_08A0B79C;
    case 114u: goto L_08A0B7A8;
    case 115u: goto L_08A0B7BC;
    case 116u: goto L_08A0B7D0;
    case 117u: goto L_08A0B828;
    case 118u: goto L_08A0B844;
    case 119u: goto L_08A0B858;
    case 120u: goto L_08A0B860;
    case 121u: goto L_08A0B874;
    case 122u: goto L_08A0B87C;
    case 123u: goto L_08A0B890;
    case 124u: goto L_08A0B89C;
    case 125u: goto L_08A0B8A4;
    case 126u: goto L_08A0B8B0;
    case 127u: goto L_08A0B8BC;
    case 128u: goto L_08A0B8C4;
    case 129u: goto L_08A0B8D0;
    case 130u: goto L_08A0B8D8;
    case 131u: goto L_08A0B8E0;
    case 132u: goto L_08A0B8E4;
    case 133u: goto L_08A0B8EC;
    case 134u: goto L_08A0B918;
    case 135u: goto L_08A0B92C;
    case 136u: goto L_08A0B934;
    case 137u: goto L_08A0B93C;
    case 138u: goto L_08A0B948;
    case 139u: goto L_08A0B950;
    case 140u: goto L_08A0B964;
    case 141u: goto L_08A0B970;
    case 142u: goto L_08A0B978;
    case 143u: goto L_08A0B980;
    case 144u: goto L_08A0B98C;
    case 145u: goto L_08A0B990;
    case 146u: goto L_08A0B9C4;
    case 147u: goto L_08A0B9E0;
    case 148u: goto L_08A0B9E8;
    case 149u: goto L_08A0B9F4;
    case 150u: goto L_08A0B9FC;
    case 151u: goto L_08A0BA10;
    case 152u: goto L_08A0BA24;
    case 153u: goto L_08A0BA38;
    case 154u: goto L_08A0BA48;
    case 155u: goto L_08A0BA54;
    case 156u: goto L_08A0BA78;
    case 157u: goto L_08A0BA7C;
    case 158u: goto L_08A0BA84;
    case 159u: goto L_08A0BA8C;
    case 160u: goto L_08A0BA94;
    case 161u: goto L_08A0BAA0;
    case 162u: goto L_08A0BAA8;
    case 163u: goto L_08A0BAB0;
    case 164u: goto L_08A0BABC;
    case 165u: goto L_08A0BAC8;
    case 166u: goto L_08A0BAF0;
    case 167u: goto L_08A0BB1C;
    case 168u: goto L_08A0BB24;
    case 169u: goto L_08A0BB2C;
    case 170u: goto L_08A0BB34;
    case 171u: goto L_08A0BB3C;
    case 172u: goto L_08A0BB5C;
    case 173u: goto L_08A0BB64;
    case 174u: goto L_08A0BB6C;
    case 175u: goto L_08A0BB88;
    case 176u: goto L_08A0BB9C;
    case 177u: goto L_08A0BBA8;
    case 178u: goto L_08A0BBBC;
    case 179u: goto L_08A0BBCC;
    case 180u: goto L_08A0BBEC;
    case 181u: goto L_08A0BC10;
    case 182u: goto L_08A0BC18;
    case 183u: goto L_08A0BC2C;
    case 184u: goto L_08A0BC3C;
    case 185u: goto L_08A0BC44;
    case 186u: goto L_08A0BC50;
    case 187u: goto L_08A0BC58;
    case 188u: goto L_08A0BC60;
    case 189u: goto L_08A0BC6C;
    case 190u: goto L_08A0BC84;
    case 191u: goto L_08A0BC88;
    case 192u: goto L_08A0BCA4;
    case 193u: goto L_08A0BCC8;
    case 194u: goto L_08A0BCD0;
    case 195u: goto L_08A0BCE4;
    case 196u: goto L_08A0BCE8;
    case 197u: goto L_08A0BD04;
    case 198u: goto L_08A0BD38;
    case 199u: goto L_08A0BD48;
    case 200u: goto L_08A0BD58;
    case 201u: goto L_08A0BD60;
    case 202u: goto L_08A0BD68;
    case 203u: goto L_08A0BD90;
    case 204u: goto L_08A0BD98;
    case 205u: goto L_08A0BD9C;
    case 206u: goto L_08A0BDA4;
    case 207u: goto L_08A0BDAC;
    case 208u: goto L_08A0BDB0;
    case 209u: goto L_08A0BDBC;
    case 210u: goto L_08A0BDC8;
    case 211u: goto L_08A0BDD0;
    case 212u: goto L_08A0BDDC;
    case 213u: goto L_08A0BDE8;
    case 214u: goto L_08A0BE08;
    case 215u: goto L_08A0BE7C;
    case 216u: goto L_08A0BE90;
    case 217u: goto L_08A0BEC0;
    case 218u: goto L_08A0BED0;
    case 219u: goto L_08A0BED8;
    case 220u: goto L_08A0BEE4;
    case 221u: goto L_08A0BEEC;
    case 222u: goto L_08A0BEF4;
    case 223u: goto L_08A0BF14;
    case 224u: goto L_08A0BF30;
    case 225u: goto L_08A0BF34;
    case 226u: goto L_08A0BF3C;
    case 227u: goto L_08A0BF44;
    case 228u: goto L_08A0BF50;
    case 229u: goto L_08A0BF68;
    case 230u: goto L_08A0BF80;
    case 231u: goto L_08A0BF94;
    case 232u: goto L_08A0BFA4;
    case 233u: goto L_08A0BFB4;
    case 234u: goto L_08A0BFBC;
    case 235u: goto L_08A0BFC8;
    case 236u: goto L_08A0BFDC;
    case 237u: goto L_08A0BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A0B000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
        goto L_08A0B01C;
    }
    goto L_08A0B00C;
L_08A0B00C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08A0B018u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A0B018u) goto L_08A0B018;
    return;
L_08A0B018:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    goto L_08A0B01C;
L_08A0B01C:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0B05C;
      }
      goto L_08A0B02C;
    }
L_08A0B02C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A0B048u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A0B048u) goto L_08A0B048;
    return;
L_08A0B048:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A0B02C;
      }
      goto L_08A0B05C;
    }
L_08A0B05C:
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
L_08A0B074:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[20] < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0B118;
      }
      goto L_08A0B0A4;
    }
L_08A0B0A4:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4436));
    goto L_08A0B0B0;
L_08A0B0B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A0B0CCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A0B0CCu) goto L_08A0B0CC;
    return;
L_08A0B0CC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (aot_gpr[18] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
        goto L_08A0B108;
    }
    goto L_08A0B0D8;
L_08A0B0D8:
    aot_gpr[31] = (0x08A0B0E0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x08A0B0E0u) goto L_08A0B0E0;
    return;
L_08A0B0E0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0B0ECu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B0ECu) goto L_08A0B0EC;
    return;
L_08A0B0EC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
        goto L_08A0B108;
    }
    goto L_08A0B0F4;
L_08A0B0F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A0B104u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0518_entry, 518u, 195u, 0x08A0AA20u>(ctx, &aot_mem) && ctx.pc == 0x08A0B104u) goto L_08A0B104;
    return;
L_08A0B104:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    goto L_08A0B108;
L_08A0B108:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A0B0B0;
      }
      goto L_08A0B118;
    }
L_08A0B118:
    aot_gpr[2] = (0u | 0u);
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
L_08A0B13C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0B1E4;
      }
      goto L_08A0B164;
    }
L_08A0B164:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A0B1E4;
      }
      goto L_08A0B178;
    }
L_08A0B178:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4436));
    goto L_08A0B180;
L_08A0B180:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A0B1A0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A0B1A0u) goto L_08A0B1A0;
    return;
L_08A0B1A0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    if (aot_gpr[20] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
        goto L_08A0B1D4;
    }
    goto L_08A0B1AC;
L_08A0B1AC:
    aot_gpr[31] = (0x08A0B1B4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x08A0B1B4u) goto L_08A0B1B4;
    return;
L_08A0B1B4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0B1C0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B1C0u) goto L_08A0B1C0;
    return;
L_08A0B1C0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
        goto L_08A0B1D4;
    }
    goto L_08A0B1C8;
L_08A0B1C8:
    aot_gpr[31] = (0x08A0B1D0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0518_entry, 518u, 225u, 0x08A0ACD8u>(ctx, &aot_mem) && ctx.pc == 0x08A0B1D0u) goto L_08A0B1D0;
    return;
L_08A0B1D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    goto L_08A0B1D4;
L_08A0B1D4:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0B180;
      }
      goto L_08A0B1E4;
    }
L_08A0B1E4:
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
L_08A0B204:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A0B220u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A0B220u) goto L_08A0B220;
    return;
L_08A0B220:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12552));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A0B234u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0B3AC;
L_08A0B234:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(296));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0B248u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4376));
    goto L_08A0B2FC;
L_08A0B248:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
        goto L_08A0B270;
    }
    goto L_08A0B258;
L_08A0B258:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A0B280;
      }
      goto L_08A0B260;
    }
L_08A0B260:
    aot_gpr[31] = (0x08A0B268u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A0B5F0;
L_08A0B268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B280;
      }
      goto L_08A0B270;
    }
L_08A0B270:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A0B280;
      }
      goto L_08A0B278;
    }
L_08A0B278:
    aot_gpr[31] = (0x08A0B280u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A0B404;
L_08A0B280:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B298:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0B2E0;
      }
      goto L_08A0B2B4;
    }
L_08A0B2B4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12552));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0B2CCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A0B2CCu) goto L_08A0B2CC;
    return;
L_08A0B2CC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B2E0;
      }
      goto L_08A0B2D8;
    }
L_08A0B2D8:
    aot_gpr[31] = (0x08A0B2E0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A0B2E0u) goto L_08A0B2E0;
    return;
L_08A0B2E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B2F4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(300)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B2FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A0B324u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B324u) goto L_08A0B324;
    return;
L_08A0B324:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0B334u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B334u) goto L_08A0B334;
    return;
L_08A0B334:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A0B36C;
      }
      goto L_08A0B340;
    }
L_08A0B340:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4388));
    goto L_08A0B348;
L_08A0B348:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A0B354u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B354u) goto L_08A0B354;
    return;
L_08A0B354:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
        goto L_08A0B38C;
    }
    goto L_08A0B35C;
L_08A0B35C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0B348;
      }
      goto L_08A0B36C;
    }
L_08A0B36C:
    aot_gpr[2] = (0u | 0u);
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
L_08A0B38C:
    aot_gpr[2] = (0u | 1u);
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
L_08A0B3AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0B3D0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4364));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B3D0u) goto L_08A0B3D0;
    return;
L_08A0B3D0:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(300), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(120));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0B3F4u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B3F4u) goto L_08A0B3F4;
    return;
L_08A0B3F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B404:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08A0B434u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-4356));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B434u) goto L_08A0B434;
    return;
L_08A0B434:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0B448u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B448u) goto L_08A0B448;
    return;
L_08A0B448:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A0B45C;
      }
      goto L_08A0B450;
    }
L_08A0B450:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    goto L_08A0B45C;
L_08A0B45C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x08A0B468u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-4340));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B468u) goto L_08A0B468;
    return;
L_08A0B468:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0B47Cu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B47Cu) goto L_08A0B47C;
    return;
L_08A0B47C:
    aot_gpr[31] = (0x08A0B484u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A0B484u) goto L_08A0B484;
    return;
L_08A0B484:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[31] = (0x08A0B494u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-4336));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B494u) goto L_08A0B494;
    return;
L_08A0B494:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0B4A8u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B4A8u) goto L_08A0B4A8;
    return;
L_08A0B4A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A0B4C0;
      }
      goto L_08A0B4B0;
    }
L_08A0B4B0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4328));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    goto L_08A0B4C0;
L_08A0B4C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[31] = (0x08A0B4CCu);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-4312));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B4CCu) goto L_08A0B4CC;
    return;
L_08A0B4CC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0B4E0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B4E0u) goto L_08A0B4E0;
    return;
L_08A0B4E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A0B4F8;
      }
      goto L_08A0B4E8;
    }
L_08A0B4E8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4300));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    goto L_08A0B4F8;
L_08A0B4F8:
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[31] = (0x08A0B508u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-4280));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B508u) goto L_08A0B508;
    return;
L_08A0B508:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0B51Cu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B51Cu) goto L_08A0B51C;
    return;
L_08A0B51C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A0B540;
      }
      goto L_08A0B524;
    }
L_08A0B524:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (0u | 7u);
    aot_gpr[31] = (0x08A0B534u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4268));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 223u, 0x08A3AB88u>(ctx, &aot_mem) && ctx.pc == 0x08A0B534u) goto L_08A0B534;
    return;
L_08A0B534:
    if (aot_gpr[2] != 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_08A0B544;
    }
    goto L_08A0B53C;
L_08A0B53C:
    aot_gpr[18] = (0u | 0u);
    goto L_08A0B540;
L_08A0B540:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A0B544;
L_08A0B544:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B5D0;
      }
      goto L_08A0B54C;
    }
L_08A0B54C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B5D0;
      }
      goto L_08A0B558;
    }
L_08A0B558:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B5D0;
      }
      goto L_08A0B564;
    }
L_08A0B564:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0B5D0;
      }
      goto L_08A0B570;
    }
L_08A0B570:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08A0B58Cu);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 241u, 0x089FEEE4u>(ctx, &aot_mem) && ctx.pc == 0x08A0B58Cu) goto L_08A0B58C;
    return;
L_08A0B58C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(300));
    aot_gpr[31] = (0x08A0B59Cu);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-4260));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B59Cu) goto L_08A0B59C;
    return;
L_08A0B59C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0B5B0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B5B0u) goto L_08A0B5B0;
    return;
L_08A0B5B0:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B5D0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B5F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    aot_gpr[31] = (0x08A0B634u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-4244));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B634u) goto L_08A0B634;
    return;
L_08A0B634:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0B648u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B648u) goto L_08A0B648;
    return;
L_08A0B648:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
      if (branch_taken) {
          goto L_08A0B698;
      }
      goto L_08A0B650;
    }
L_08A0B650:
    aot_gpr[31] = (0x08A0B658u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A0B658u) goto L_08A0B658;
    return;
L_08A0B658:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0B668u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B668u) goto L_08A0B668;
    return;
L_08A0B668:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A0B674u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-4236));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B674u) goto L_08A0B674;
    return;
L_08A0B674:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0B684u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B684u) goto L_08A0B684;
    return;
L_08A0B684:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A0B6CC;
      }
      goto L_08A0B690;
    }
L_08A0B690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B948;
      }
      goto L_08A0B698;
    }
L_08A0B698:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B6CC:
    aot_gpr[31] = (0x08A0B6D4u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4220));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B6D4u) goto L_08A0B6D4;
    return;
L_08A0B6D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0B6E4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B6E4u) goto L_08A0B6E4;
    return;
L_08A0B6E4:
    aot_gpr[31] = (0x08A0B6ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0B6ECu) goto L_08A0B6EC;
    return;
L_08A0B6EC:
    aot_gpr[31] = (0x08A0B6F4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B6F4u) goto L_08A0B6F4;
    return;
L_08A0B6F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[6] + static_cast<std::uint32_t>(-4212));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 95u);
    aot_gpr[31] = (0x08A0B720u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0B720u) goto L_08A0B720;
    return;
L_08A0B720:
    aot_gpr[31] = (0x08A0B728u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0B728u) goto L_08A0B728;
    return;
L_08A0B728:
    aot_gpr[31] = (0x08A0B730u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B730u) goto L_08A0B730;
    return;
L_08A0B730:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 101u);
    aot_gpr[31] = (0x08A0B74Cu);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0B74Cu) goto L_08A0B74C;
    return;
L_08A0B74C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B948;
      }
      goto L_08A0B758;
    }
L_08A0B758:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A0B770u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B770u) goto L_08A0B770;
    return;
L_08A0B770:
    aot_gpr[31] = (0x08A0B778u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B778u) goto L_08A0B778;
    return;
L_08A0B778:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A0B790u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B790u) goto L_08A0B790;
    return;
L_08A0B790:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A0B92C;
      }
      goto L_08A0B79C;
    }
L_08A0B79C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[16]);
      if (branch_taken) {
          goto L_08A0B92C;
      }
      goto L_08A0B7A8;
    }
L_08A0B7A8:
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A0B7BCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B7BCu) goto L_08A0B7BC;
    return;
L_08A0B7BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A0B92C;
      }
      goto L_08A0B7D0;
    }
L_08A0B7D0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4184));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4164));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4144));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4136));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[30] = (2215u << 16u);
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-4128));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-4116));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-4108));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-4100));
    goto L_08A0B828;
L_08A0B828:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[31] = (0x08A0B844u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B844u) goto L_08A0B844;
    return;
L_08A0B844:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0B858u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B858u) goto L_08A0B858;
    return;
L_08A0B858:
    aot_gpr[31] = (0x08A0B860u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B860u) goto L_08A0B860;
    return;
L_08A0B860:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0B874u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B874u) goto L_08A0B874;
    return;
L_08A0B874:
    aot_gpr[31] = (0x08A0B87Cu);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B87Cu) goto L_08A0B87C;
    return;
L_08A0B87C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0B890u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0B890u) goto L_08A0B890;
    return;
L_08A0B890:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08A0B89Cu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B89Cu) goto L_08A0B89C;
    return;
L_08A0B89C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u | 3u);
      if (branch_taken) {
          goto L_08A0B8B0;
      }
      goto L_08A0B8A4;
    }
L_08A0B8A4:
    aot_gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A0B8E4;
      }
      goto L_08A0B8B0;
    }
L_08A0B8B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08A0B8BCu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B8BCu) goto L_08A0B8BC;
    return;
L_08A0B8BC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08A0B8D0;
    }
    goto L_08A0B8C4;
L_08A0B8C4:
    aot_gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A0B8E4;
      }
      goto L_08A0B8D0;
    }
L_08A0B8D0:
    aot_gpr[31] = (0x08A0B8D8u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B8D8u) goto L_08A0B8D8;
    return;
L_08A0B8D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A0B8E4;
      }
      goto L_08A0B8E0;
    }
L_08A0B8E0:
    aot_gpr[16] = (0u | 2u);
    goto L_08A0B8E4;
L_08A0B8E4:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08A0B918;
    }
    goto L_08A0B8EC;
L_08A0B8EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A0B918;
L_08A0B918:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A0B828;
      }
      goto L_08A0B92C;
    }
L_08A0B92C:
    aot_gpr[31] = (0x08A0B934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0B934u) goto L_08A0B934;
    return;
L_08A0B934:
    aot_gpr[31] = (0x08A0B93Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B93Cu) goto L_08A0B93C;
    return;
L_08A0B93C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x08A0B948u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0B948u) goto L_08A0B948;
    return;
L_08A0B948:
    aot_gpr[31] = (0x08A0B950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x08A0B950u) goto L_08A0B950;
    return;
L_08A0B950:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0B964u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 65u, 0x089F342Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B964u) goto L_08A0B964;
    return;
L_08A0B964:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B990;
      }
      goto L_08A0B970;
    }
L_08A0B970:
    aot_gpr[31] = (0x08A0B978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0B978u) goto L_08A0B978;
    return;
L_08A0B978:
    aot_gpr[31] = (0x08A0B980u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B980u) goto L_08A0B980;
    return;
L_08A0B980:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08A0B98Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0B98Cu) goto L_08A0B98C;
    return;
L_08A0B98C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A0B990;
L_08A0B990:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B9C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0B9FC;
      }
      goto L_08A0B9E0;
    }
L_08A0B9E0:
    aot_gpr[31] = (0x08A0B9E8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0BA54;
L_08A0B9E8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B9FC;
      }
      goto L_08A0B9F4;
    }
L_08A0B9F4:
    aot_gpr[31] = (0x08A0B9FCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0B9FCu) goto L_08A0B9FC;
    return;
L_08A0B9FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BA10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0BA24u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A0BA38;
L_08A0BA24:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BA38:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BA48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BA54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0BAC8;
      }
      goto L_08A0BA78;
    }
L_08A0BA78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08A0BA7C;
L_08A0BA7C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A0BAA0;
      }
      goto L_08A0BA84;
    }
L_08A0BA84:
    aot_gpr[31] = (0x08A0BA8Cu);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0BA8Cu) goto L_08A0BA8C;
    return;
L_08A0BA8C:
    aot_gpr[31] = (0x08A0BA94u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BA94u) goto L_08A0BA94;
    return;
L_08A0BA94:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0BAA0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0BAA0u) goto L_08A0BAA0;
    return;
L_08A0BAA0:
    aot_gpr[31] = (0x08A0BAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0BAA8u) goto L_08A0BAA8;
    return;
L_08A0BAA8:
    aot_gpr[31] = (0x08A0BAB0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BAB0u) goto L_08A0BAB0;
    return;
L_08A0BAB0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0BABCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0BABCu) goto L_08A0BABC;
    return;
L_08A0BABC:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    if (aot_gpr[18] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_08A0BA7C;
    }
    goto L_08A0BAC8;
L_08A0BAC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
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
L_08A0BAF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A0BB1Cu);
    aot_gpr[18] = (0u | 0u);
    goto L_08A0BF14;
L_08A0BB1C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BB3C;
      }
      goto L_08A0BB24;
    }
L_08A0BB24:
    aot_gpr[31] = (0x08A0BB2Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0BA48;
L_08A0BB2C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08A0BB5C;
    }
    goto L_08A0BB34;
L_08A0BB34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0BB5C;
      }
      goto L_08A0BB3C;
    }
L_08A0BB3C:
    aot_gpr[2] = (0u | 0u);
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
L_08A0BB5C:
    aot_gpr[31] = (0x08A0BB64u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0BB64u) goto L_08A0BB64;
    return;
L_08A0BB64:
    aot_gpr[31] = (0x08A0BB6Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BB6Cu) goto L_08A0BB6C;
    return;
L_08A0BB6C:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 40u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 91u);
    aot_gpr[31] = (0x08A0BB88u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4088));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BB88u) goto L_08A0BB88;
    return;
L_08A0BB88:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0BB9Cu);
    aot_gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BB9Cu) goto L_08A0BB9C;
    return;
L_08A0BB9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BBCC;
      }
      goto L_08A0BBA8;
    }
L_08A0BBA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0BBBCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A0BE08;
L_08A0BBBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A0BBCC;
L_08A0BBCC:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A0BBEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A0BC10u);
    aot_gpr[18] = (0u | 0u);
    goto L_08A0BA48;
L_08A0BC10:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BC88;
      }
      goto L_08A0BC18;
    }
L_08A0BC18:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A0BC2Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A0BE08;
L_08A0BC2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A0BC3Cu);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0BC3Cu) goto L_08A0BC3C;
    return;
L_08A0BC3C:
    aot_gpr[31] = (0x08A0BC44u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BC44u) goto L_08A0BC44;
    return;
L_08A0BC44:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0BC50u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0BC50u) goto L_08A0BC50;
    return;
L_08A0BC50:
    aot_gpr[31] = (0x08A0BC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0BC58u) goto L_08A0BC58;
    return;
L_08A0BC58:
    aot_gpr[31] = (0x08A0BC60u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BC60u) goto L_08A0BC60;
    return;
L_08A0BC60:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A0BC6Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0BC6Cu) goto L_08A0BC6C;
    return;
L_08A0BC6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
        goto L_08A0BC84;
    }
    goto L_08A0BC84;
L_08A0BC84:
    aot_gpr[18] = (0u | 1u);
    goto L_08A0BC88;
L_08A0BC88:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A0BCA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A0BCC8u);
    aot_gpr[18] = (0u | 0u);
    goto L_08A0BA48;
L_08A0BCC8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BCE8;
      }
      goto L_08A0BCD0;
    }
L_08A0BCD0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A0BCE4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A0BE08;
L_08A0BCE4:
    aot_gpr[18] = (0u | 1u);
    goto L_08A0BCE8;
L_08A0BCE8:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A0BD04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A0BD38u);
    aot_gpr[6] = (0u | 700u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BD38u) goto L_08A0BD38;
    return;
L_08A0BD38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08A0BD48u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 69u, 0x08A0C53Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BD48u) goto L_08A0BD48;
    return;
L_08A0BD48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
        goto L_08A0BD9C;
    }
    goto L_08A0BD58;
L_08A0BD58:
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08A0BDB0;
    }
    goto L_08A0BD60;
L_08A0BD60:
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08A0BDB0;
    }
    goto L_08A0BD68;
L_08A0BD68:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[31] = (0x08A0BD90u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 70u, 0x08A0C548u>(ctx, &aot_mem) && ctx.pc == 0x08A0BD90u) goto L_08A0BD90;
    return;
L_08A0BD90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A0BDB0;
      }
      goto L_08A0BD98;
    }
L_08A0BD98:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    goto L_08A0BD9C;
L_08A0BD9C:
    if (aot_gpr[4] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08A0BDB0;
    }
    goto L_08A0BDA4;
L_08A0BDA4:
    aot_gpr[31] = (0x08A0BDACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 71u, 0x08A0C55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BDACu) goto L_08A0BDAC;
    return;
L_08A0BDAC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08A0BDB0;
L_08A0BDB0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A0BDBCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A0BE90;
L_08A0BDBC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0BDC8u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0BDC8u) goto L_08A0BDC8;
    return;
L_08A0BDC8:
    aot_gpr[31] = (0x08A0BDD0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BDD0u) goto L_08A0BDD0;
    return;
L_08A0BDD0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0BDDCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0BDDCu) goto L_08A0BDDC;
    return;
L_08A0BDDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08A0BDE8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 80u, 0x08A0C5F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0BDE8u) goto L_08A0BDE8;
    return;
L_08A0BDE8:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A0BE08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 201u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0BE7Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4088));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BE7Cu) goto L_08A0BE7C;
    return;
L_08A0BE7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BE90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-688));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(668), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(672), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(676), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(680), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(684), aot_gpr[31]);
    aot_gpr[31] = (0x08A0BEC0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0BEC0u) goto L_08A0BEC0;
    return;
L_08A0BEC0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A0BED0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 136u, 0x089F07B8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BED0u) goto L_08A0BED0;
    return;
L_08A0BED0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] | 0u);
      if (branch_taken) {
          goto L_08A0BEEC;
      }
      goto L_08A0BED8;
    }
L_08A0BED8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0BEE4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 66u, 0x08A0C518u>(ctx, &aot_mem) && ctx.pc == 0x08A0BEE4u) goto L_08A0BEE4;
    return;
L_08A0BEE4:
    aot_gpr[17] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_08A0BEEC;
L_08A0BEEC:
    aot_gpr[31] = (0x08A0BEF4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BEF4u) goto L_08A0BEF4;
    return;
L_08A0BEF4:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(668)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(672)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(676)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(680)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(684)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BF14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0BF50;
      }
      goto L_08A0BF30;
    }
L_08A0BF30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08A0BF34;
L_08A0BF34:
    aot_gpr[31] = (0x08A0BF3Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BF3Cu) goto L_08A0BF3C;
    return;
L_08A0BF3C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BF68;
      }
      goto L_08A0BF44;
    }
L_08A0BF44:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08A0BF34;
    }
    goto L_08A0BF50;
L_08A0BF50:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BF68:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BF80:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12688));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BF94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A0BFBC;
      }
      goto L_08A0BFA4;
    }
L_08A0BFA4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12688));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A0BFBC;
      }
      goto L_08A0BFB4;
    }
L_08A0BFB4:
    aot_gpr[31] = (0x08A0BFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0BFBCu) goto L_08A0BFBC;
    return;
L_08A0BFBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BFC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0BFDCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A0BF80;
L_08A0BFDC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12728));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BFFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.pc = 0x08A0C000u; return;
}

void recomp_unit_0519(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0519_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_519(Runtime &runtime) {
    runtime.register_generated_unit(519u, 0x08A0B000u, 4096u, &recomp_unit_0519, &recomp_unit_0519_entry);
    runtime.register_function(0x08A0B000u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B00Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B018u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B01Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B02Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B048u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B05Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B074u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B0A4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B0B0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B0CCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B0D8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B0E0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B0ECu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B0F4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B104u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B108u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B118u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B13Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B164u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B178u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B180u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B1A0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B1ACu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B1B4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B1C0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B1C8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B1D0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B1D4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B1E4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B204u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B220u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B234u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B248u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B258u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B260u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B268u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B270u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B278u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B280u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B298u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B2B4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B2CCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B2D8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B2E0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B2F4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B2FCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B324u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B334u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B340u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B348u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B354u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B35Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B36Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B38Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B3ACu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B3D0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B3F4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B404u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B434u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B448u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B450u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B45Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B468u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B47Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B484u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B494u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B4A8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B4B0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B4C0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B4CCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B4E0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B4E8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B4F8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B508u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B51Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B524u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B534u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B53Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B540u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B544u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B54Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B558u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B564u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B570u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B58Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B59Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B5B0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B5D0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B5F0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B634u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B648u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B650u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B658u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B668u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B674u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B684u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B690u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B698u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B6CCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B6D4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B6E4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B6ECu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B6F4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B720u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B728u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B730u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B74Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B758u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B770u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B778u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B790u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B79Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B7A8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B7BCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B7D0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B828u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B844u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B858u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B860u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B874u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B87Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B890u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B89Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B8A4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B8B0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B8BCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B8C4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B8D0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B8D8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B8E0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B8E4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B8ECu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B918u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B92Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B934u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B93Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B948u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B950u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B964u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B970u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B978u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B980u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B98Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B990u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B9C4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B9E0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B9E8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B9F4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0B9FCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BA10u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BA24u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BA38u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BA48u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BA54u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BA78u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BA7Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BA84u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BA8Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BA94u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BAA0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BAA8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BAB0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BABCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BAC8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BAF0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BB1Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BB24u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BB2Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BB34u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BB3Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BB5Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BB64u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BB6Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BB88u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BB9Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BBA8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BBBCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BBCCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BBECu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BC10u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BC18u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BC2Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BC3Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BC44u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BC50u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BC58u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BC60u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BC6Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BC84u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BC88u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BCA4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BCC8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BCD0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BCE4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BCE8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BD04u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BD38u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BD48u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BD58u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BD60u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BD68u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BD90u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BD98u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BD9Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BDA4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BDACu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BDB0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BDBCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BDC8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BDD0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BDDCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BDE8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BE08u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BE7Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BE90u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BEC0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BED0u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BED8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BEE4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BEECu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BEF4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BF14u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BF30u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BF34u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BF3Cu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BF44u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BF50u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BF68u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BF80u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BF94u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BFA4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BFB4u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BFBCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BFC8u, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BFDCu, &recomp_unit_0519, "recomp_unit_0519");
    runtime.register_function(0x08A0BFFCu, &recomp_unit_0519, "recomp_unit_0519");
}
} // namespace psprecomp
