#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0353[1024] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0,
    0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0,
    0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0,
    0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 56, 0,
    0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0,
    0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    99, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 111, 0,
    112, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 122, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 138, 0,
    139, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 149, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0,
    159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 167, 0, 0, 168,
    0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0,
    178, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    185, 0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 201, 0, 202,
    0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 207, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 213, 0,
    0, 214, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 219, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224,
};
void recomp_unit_0353_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08965000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0353[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08965000;
    case 2u: goto L_08965004;
    case 3u: goto L_08965014;
    case 4u: goto L_0896502C;
    case 5u: goto L_0896504C;
    case 6u: goto L_08965058;
    case 7u: goto L_08965070;
    case 8u: goto L_08965090;
    case 9u: goto L_0896509C;
    case 10u: goto L_089650B4;
    case 11u: goto L_089650C4;
    case 12u: goto L_089650E0;
    case 13u: goto L_089650EC;
    case 14u: goto L_08965108;
    case 15u: goto L_08965114;
    case 16u: goto L_08965130;
    case 17u: goto L_0896514C;
    case 18u: goto L_08965170;
    case 19u: goto L_08965180;
    case 20u: goto L_089651A0;
    case 21u: goto L_089651BC;
    case 22u: goto L_089651C8;
    case 23u: goto L_089651D4;
    case 24u: goto L_089651E0;
    case 25u: goto L_089651EC;
    case 26u: goto L_089651FC;
    case 27u: goto L_08965250;
    case 28u: goto L_08965264;
    case 29u: goto L_0896527C;
    case 30u: goto L_0896529C;
    case 31u: goto L_089652A8;
    case 32u: goto L_089652C0;
    case 33u: goto L_089652E0;
    case 34u: goto L_089652EC;
    case 35u: goto L_08965304;
    case 36u: goto L_08965324;
    case 37u: goto L_08965330;
    case 38u: goto L_08965348;
    case 39u: goto L_08965368;
    case 40u: goto L_08965374;
    case 41u: goto L_08965388;
    case 42u: goto L_08965394;
    case 43u: goto L_089653A8;
    case 44u: goto L_089653B4;
    case 45u: goto L_089653C8;
    case 46u: goto L_089653D4;
    case 47u: goto L_089653E8;
    case 48u: goto L_089653F4;
    case 49u: goto L_08965408;
    case 50u: goto L_08965418;
    case 51u: goto L_08965424;
    case 52u: goto L_08965438;
    case 53u: goto L_08965444;
    case 54u: goto L_08965458;
    case 55u: goto L_08965464;
    case 56u: goto L_08965478;
    case 57u: goto L_08965484;
    case 58u: goto L_08965498;
    case 59u: goto L_089654A8;
    case 60u: goto L_089654B4;
    case 61u: goto L_089654C8;
    case 62u: goto L_089654D4;
    case 63u: goto L_089654E8;
    case 64u: goto L_089654F4;
    case 65u: goto L_08965508;
    case 66u: goto L_08965514;
    case 67u: goto L_08965524;
    case 68u: goto L_08965530;
    case 69u: goto L_08965540;
    case 70u: goto L_0896554C;
    case 71u: goto L_0896555C;
    case 72u: goto L_0896556C;
    case 73u: goto L_0896557C;
    case 74u: goto L_08965588;
    case 75u: goto L_089655AC;
    case 76u: goto L_089655BC;
    case 77u: goto L_089655C8;
    case 78u: goto L_089655D0;
    case 79u: goto L_089655F8;
    case 80u: goto L_0896560C;
    case 81u: goto L_08965638;
    case 82u: goto L_08965640;
    case 83u: goto L_08965654;
    case 84u: goto L_08965668;
    case 85u: goto L_08965688;
    case 86u: goto L_08965694;
    case 87u: goto L_089656D8;
    case 88u: goto L_089656E4;
    case 89u: goto L_08965708;
    case 90u: goto L_08965710;
    case 91u: goto L_08965728;
    case 92u: goto L_08965748;
    case 93u: goto L_08965758;
    case 94u: goto L_08965778;
    case 95u: goto L_08965790;
    case 96u: goto L_089657A4;
    case 97u: goto L_089657D0;
    case 98u: goto L_089657E8;
    case 99u: goto L_08965800;
    case 100u: goto L_0896580C;
    case 101u: goto L_08965824;
    case 102u: goto L_08965854;
    case 103u: goto L_0896586C;
    case 104u: goto L_0896589C;
    case 105u: goto L_089658BC;
    case 106u: goto L_089658C8;
    case 107u: goto L_089658D0;
    case 108u: goto L_089658D8;
    case 109u: goto L_089658E0;
    case 110u: goto L_089658E8;
    case 111u: goto L_089658F8;
    case 112u: goto L_08965900;
    case 113u: goto L_0896590C;
    case 114u: goto L_08965914;
    case 115u: goto L_08965920;
    case 116u: goto L_0896593C;
    case 117u: goto L_08965968;
    case 118u: goto L_08965980;
    case 119u: goto L_08965994;
    case 120u: goto L_089659A0;
    case 121u: goto L_089659A8;
    case 122u: goto L_089659AC;
    case 123u: goto L_089659B4;
    case 124u: goto L_089659C4;
    case 125u: goto L_089659CC;
    case 126u: goto L_089659DC;
    case 127u: goto L_089659EC;
    case 128u: goto L_08965A74;
    case 129u: goto L_08965A90;
    case 130u: goto L_08965A9C;
    case 131u: goto L_08965AA8;
    case 132u: goto L_08965AB0;
    case 133u: goto L_08965ABC;
    case 134u: goto L_08965AD4;
    case 135u: goto L_08965AE0;
    case 136u: goto L_08965AE8;
    case 137u: goto L_08965AF0;
    case 138u: goto L_08965AF8;
    case 139u: goto L_08965B00;
    case 140u: goto L_08965B10;
    case 141u: goto L_08965B18;
    case 142u: goto L_08965B20;
    case 143u: goto L_08965B2C;
    case 144u: goto L_08965B48;
    case 145u: goto L_08965B90;
    case 146u: goto L_08965BA0;
    case 147u: goto L_08965BC8;
    case 148u: goto L_08965BEC;
    case 149u: goto L_08965C04;
    case 150u: goto L_08965C0C;
    case 151u: goto L_08965C18;
    case 152u: goto L_08965C20;
    case 153u: goto L_08965C28;
    case 154u: goto L_08965C30;
    case 155u: goto L_08965C3C;
    case 156u: goto L_08965C54;
    case 157u: goto L_08965C5C;
    case 158u: goto L_08965C78;
    case 159u: goto L_08965C80;
    case 160u: goto L_08965C98;
    case 161u: goto L_08965CAC;
    case 162u: goto L_08965CB0;
    case 163u: goto L_08965CC4;
    case 164u: goto L_08965CD8;
    case 165u: goto L_08965CE0;
    case 166u: goto L_08965CE8;
    case 167u: goto L_08965CF0;
    case 168u: goto L_08965CFC;
    case 169u: goto L_08965D10;
    case 170u: goto L_08965D18;
    case 171u: goto L_08965D20;
    case 172u: goto L_08965D28;
    case 173u: goto L_08965D34;
    case 174u: goto L_08965D4C;
    case 175u: goto L_08965D64;
    case 176u: goto L_08965D70;
    case 177u: goto L_08965D78;
    case 178u: goto L_08965D80;
    case 179u: goto L_08965D88;
    case 180u: goto L_08965D94;
    case 181u: goto L_08965DB0;
    case 182u: goto L_08965DC8;
    case 183u: goto L_08965DD4;
    case 184u: goto L_08965DE4;
    case 185u: goto L_08965E00;
    case 186u: goto L_08965E08;
    case 187u: goto L_08965E10;
    case 188u: goto L_08965E24;
    case 189u: goto L_08965E38;
    case 190u: goto L_08965E40;
    case 191u: goto L_08965E68;
    case 192u: goto L_08965E98;
    case 193u: goto L_08965EA0;
    case 194u: goto L_08965EB0;
    case 195u: goto L_08965EBC;
    case 196u: goto L_08965EC4;
    case 197u: goto L_08965ED0;
    case 198u: goto L_08965ED8;
    case 199u: goto L_08965EE4;
    case 200u: goto L_08965EEC;
    case 201u: goto L_08965EF4;
    case 202u: goto L_08965EFC;
    case 203u: goto L_08965F08;
    case 204u: goto L_08965F20;
    case 205u: goto L_08965F2C;
    case 206u: goto L_08965F38;
    case 207u: goto L_08965F3C;
    case 208u: goto L_08965F44;
    case 209u: goto L_08965F4C;
    case 210u: goto L_08965F58;
    case 211u: goto L_08965F60;
    case 212u: goto L_08965F68;
    case 213u: goto L_08965F78;
    case 214u: goto L_08965F84;
    case 215u: goto L_08965F8C;
    case 216u: goto L_08965FA4;
    case 217u: goto L_08965FB0;
    case 218u: goto L_08965FBC;
    case 219u: goto L_08965FC0;
    case 220u: goto L_08965FC8;
    case 221u: goto L_08965FD4;
    case 222u: goto L_08965FDC;
    case 223u: goto L_08965FF4;
    case 224u: goto L_08965FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08965000:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    goto L_08965004;
L_08965004:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965014:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0896504C;
      }
      goto L_0896502C;
    }
L_0896502C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0896504Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896504Cu) goto L_0896504C;
    return;
L_0896504C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965058:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08965090;
      }
      goto L_08965070;
    }
L_08965070:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08965090u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965090u) goto L_08965090;
    return;
L_08965090:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896509C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_089650E0;
      }
      goto L_089650B4;
    }
L_089650B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089650E0;
      }
      goto L_089650C4;
    }
L_089650C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26984)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089650E0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089650E0u) goto L_089650E0;
    return;
L_089650E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089650EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
      if (branch_taken) {
          goto L_08965114;
      }
      goto L_08965108;
    }
L_08965108:
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
      if (branch_taken) {
          goto L_08965170;
      }
      goto L_08965114;
    }
L_08965114:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08965170;
      }
      goto L_08965130;
    }
L_08965130:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26984)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0896514Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896514Cu) goto L_0896514C;
    return;
L_0896514C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08965170u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965170u) goto L_08965170;
    return;
L_08965170:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965180:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089651BC;
      }
      goto L_089651A0;
    }
L_089651A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089651BCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089651BCu) goto L_089651BC;
    return;
L_089651BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089651D4;
      }
      goto L_089651C8;
    }
L_089651C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(504), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), 0u);
      if (branch_taken) {
          goto L_08965250;
      }
      goto L_089651D4;
    }
L_089651D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965250;
      }
      goto L_089651E0;
    }
L_089651E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08965250;
      }
      goto L_089651EC;
    }
L_089651EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[4] << 4u);
      if (branch_taken) {
          goto L_08965250;
      }
      goto L_089651FC;
    }
L_089651FC:
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(508)));
    aot_gpr[6] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(508)));
    aot_gpr[6] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    goto L_08965250;
L_08965250:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965264:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0896529C;
      }
      goto L_0896527C;
    }
L_0896527C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0896529Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896529Cu) goto L_0896529C;
    return;
L_0896529C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089652A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089652E0;
      }
      goto L_089652C0;
    }
L_089652C0:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(72));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089652E0u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089652E0u) goto L_089652E0;
    return;
L_089652E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089652EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08965324;
      }
      goto L_08965304;
    }
L_08965304:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08965324u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965324u) goto L_08965324;
    return;
L_08965324:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965330:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08965368;
      }
      goto L_08965348;
    }
L_08965348:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08965368u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965368u) goto L_08965368;
    return;
L_08965368:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965374:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08965388u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 211u, 0x08964ED0u>(ctx, &aot_mem) && ctx.pc == 0x08965388u) goto L_08965388;
    return;
L_08965388:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965394:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089653A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 220u, 0x08964F9Cu>(ctx, &aot_mem) && ctx.pc == 0x089653A8u) goto L_089653A8;
    return;
L_089653A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089653B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089653C8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08965014;
L_089653C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089653D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089653E8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08965058;
L_089653E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089653F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965418;
      }
      goto L_08965408;
    }
L_08965408:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08965418u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 207u, 0x08964EA8u>(ctx, &aot_mem) && ctx.pc == 0x08965418u) goto L_08965418;
    return;
L_08965418:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965424:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08965438u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_0896509C;
L_08965438:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965444:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08965458u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_089650EC;
L_08965458:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965464:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08965478u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08965180;
L_08965478:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965484:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089654A8;
      }
      goto L_08965498;
    }
L_08965498:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089654A8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08965264;
L_089654A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089654B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089654C8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_089652A8;
L_089654C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089654D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089654E8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_089652EC;
L_089654E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089654F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08965508u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_08965330;
L_08965508:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965514:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08965524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 151u, 0x08964B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08965524u) goto L_08965524;
    return;
L_08965524:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965530:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08965540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x08965540u) goto L_08965540;
    return;
L_08965540:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(56));
    aot_gpr[31] = (0x0896554Cu);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_08965514;
L_0896554C:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(488)));
    aot_gpr[31] = (0x0896555Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30632));
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 147u, 0x08961C5Cu>(ctx, &aot_mem) && ctx.pc == 0x0896555Cu) goto L_0896555C;
    return;
L_0896555C:
    aot_gpr[2] = (0u | 448u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896556C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896557Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 143u, 0x08964A70u>(ctx, &aot_mem) && ctx.pc == 0x0896557Cu) goto L_0896557C;
    return;
L_0896557C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965588:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[31]);
    aot_gpr[31] = (0x089655ACu);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x089655ACu) goto L_089655AC;
    return;
L_089655AC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965668;
      }
      goto L_089655BC;
    }
L_089655BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08965668;
      }
      goto L_089655C8;
    }
L_089655C8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965668;
      }
      goto L_089655D0;
    }
L_089655D0:
    aot_gpr[5] = (aot_gpr[16] << 4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[16] - aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[7] << 2u);
    aot_gpr[18] = (aot_gpr[5] - aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x089655F8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_0896556C;
L_089655F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(508)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x0896560Cu);
    aot_gpr[6] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896560Cu) goto L_0896560C;
    return;
L_0896560C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(508)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26976)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08965638u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965638u) goto L_08965638;
    return;
L_08965638:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965668;
      }
      goto L_08965640;
    }
L_08965640:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[31] = (0x08965654u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 139u, 0x0896F6F8u>(ctx, &aot_mem) && ctx.pc == 0x08965654u) goto L_08965654;
    return;
L_08965654:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(508)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[31] = (0x08965668u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 198u, 0x08964DFCu>(ctx, &aot_mem) && ctx.pc == 0x08965668u) goto L_08965668;
    return;
L_08965668:
    aot_gpr[2] = (0u | 76u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965688:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-26888)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965694:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (0u | 1u);
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(-26887), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089656D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x089656D8u) goto L_089656D8;
    return;
L_089656D8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965710;
      }
      goto L_089656E4;
    }
L_089656E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08965708u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965708u) goto L_08965708;
    return;
L_08965708:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26892), aot_gpr[2]);
    goto L_08965710;
L_08965710:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26896), aot_gpr[16]);
    aot_gpr[5] = (2198u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08965728u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(23612));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 52u, 0x08962354u>(ctx, &aot_mem) && ctx.pc == 0x08965728u) goto L_08965728;
    return;
L_08965728:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-26888), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965748:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08965758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x08965758u) goto L_08965758;
    return;
L_08965758:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08965778u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965778u) goto L_08965778;
    return;
L_08965778:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26896), 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-26887)));
    aot_gpr[31] = (0x08965790u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 54u, 0x08962384u>(ctx, &aot_mem) && ctx.pc == 0x08965790u) goto L_08965790;
    return;
L_08965790:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-26888), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089657A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-784));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(752), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(756), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(760), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(764), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(768), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x089657D0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 91u, 0x0895F55Cu>(ctx, &aot_mem) && ctx.pc == 0x089657D0u) goto L_089657D0;
    return;
L_089657D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089657E8u);
    aot_gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089657E8u) goto L_089657E8;
    return;
L_089657E8:
    aot_gpr[4] = (2198u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(23748));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(276));
    aot_gpr[31] = (0x08965800u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x08965800u) goto L_08965800;
    return;
L_08965800:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(288), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0896580Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896580Cu) goto L_0896580C;
    return;
L_0896580C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(292));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(300));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(296));
    aot_gpr[31] = (0x08965824u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 270u, 0x08960FE8u>(ctx, &aot_mem) && ctx.pc == 0x08965824u) goto L_08965824;
    return;
L_08965824:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[16] << 9u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[19] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(304));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08965854u);
    aot_gpr[6] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08965854u) goto L_08965854;
    return;
L_08965854:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(604));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(308));
    aot_gpr[31] = (0x0896586Cu);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896586Cu) goto L_0896586C;
    return;
L_0896586C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26984)));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(340));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0896589Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896589Cu) goto L_0896589C;
    return;
L_0896589C:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    aot_gpr[5] = (0u | 30u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089658BCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29136));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 236u, 0x0895FDCCu>(ctx, &aot_mem) && ctx.pc == 0x089658BCu) goto L_089658BC;
    return;
L_089658BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089658E0;
      }
      goto L_089658C8;
    }
L_089658C8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08965900;
      }
      goto L_089658D0;
    }
L_089658D0:
    aot_gpr[31] = (0x089658D8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x089658D8u) goto L_089658D8;
    return;
L_089658D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965920;
      }
      goto L_089658E0;
    }
L_089658E0:
    aot_gpr[31] = (0x089658E8u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x089658E8u) goto L_089658E8;
    return;
L_089658E8:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(288), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089658F8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x089658F8u) goto L_089658F8;
    return;
L_089658F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965920;
      }
      goto L_08965900;
    }
L_08965900:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0896590Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-26887), static_cast<std::uint8_t>(0u));
    goto L_08965748;
L_0896590C:
    aot_gpr[31] = (0x08965914u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08965914u) goto L_08965914;
    return;
L_08965914:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08965920u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x08965920u) goto L_08965920;
    return;
L_08965920:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(752)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(756)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(760)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(764)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(768)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(784));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896593C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-768));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(740), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(744), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(748), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(752), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(756), aot_gpr[31]);
    aot_gpr[31] = (0x08965968u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 91u, 0x0895F55Cu>(ctx, &aot_mem) && ctx.pc == 0x08965968u) goto L_08965968;
    return;
L_08965968:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08965980u);
    aot_gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08965980u) goto L_08965980;
    return;
L_08965980:
    aot_gpr[4] = (2198u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(23804));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[4]);
    aot_gpr[31] = (0x08965994u);
    aot_gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x08965994u) goto L_08965994;
    return;
L_08965994:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(276));
      if (branch_taken) {
          goto L_089659AC;
      }
      goto L_089659A0;
    }
L_089659A0:
    aot_gpr[31] = (0x089659A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x089659A8u) goto L_089659A8;
    return;
L_089659A8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_089659AC;
L_089659AC:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089659CC;
      }
      goto L_089659B4;
    }
L_089659B4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089659C4u);
    aot_gpr[6] = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089659C4u) goto L_089659C4;
    return;
L_089659C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089659DC;
      }
      goto L_089659CC;
    }
L_089659CC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089659DCu);
    aot_gpr[6] = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089659DCu) goto L_089659DC;
    return;
L_089659DC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x089659ECu);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089659ECu) goto L_089659EC;
    return;
L_089659EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[5]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26984)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08965A74u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965A74u) goto L_08965A74;
    return;
L_08965A74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26984)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08965A90u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965A90u) goto L_08965A90;
    return;
L_08965A90:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08965B18;
      }
      goto L_08965A9C;
    }
L_08965A9C:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(724));
    aot_gpr[31] = (0x08965AA8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x08965AA8u) goto L_08965AA8;
    return;
L_08965AA8:
    aot_gpr[31] = (0x08965AB0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(736), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x08965AB0u) goto L_08965AB0;
    return;
L_08965AB0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965AD4;
      }
      goto L_08965ABC;
    }
L_08965ABC:
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(736));
    aot_gpr[5] = (0u | 29u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08965AD4u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 236u, 0x0895FDCCu>(ctx, &aot_mem) && ctx.pc == 0x08965AD4u) goto L_08965AD4;
    return;
L_08965AD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(736)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965AF8;
      }
      goto L_08965AE0;
    }
L_08965AE0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08965B18;
      }
      goto L_08965AE8;
    }
L_08965AE8:
    aot_gpr[31] = (0x08965AF0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x08965AF0u) goto L_08965AF0;
    return;
L_08965AF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965B2C;
      }
      goto L_08965AF8;
    }
L_08965AF8:
    aot_gpr[31] = (0x08965B00u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08965B00u) goto L_08965B00;
    return;
L_08965B00:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(736), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08965B10u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x08965B10u) goto L_08965B10;
    return;
L_08965B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965B2C;
      }
      goto L_08965B18;
    }
L_08965B18:
    aot_gpr[31] = (0x08965B20u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08965B20u) goto L_08965B20;
    return;
L_08965B20:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08965B2Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x08965B2Cu) goto L_08965B2C;
    return;
L_08965B2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(740)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(744)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(748)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(752)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(756)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(768));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965B48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-432));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(412), aot_gpr[21]);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[31]);
    aot_gpr[31] = (0x08965B90u);
    aot_gpr[6] = (0u | 392u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08965B90u) goto L_08965B90;
    return;
L_08965B90:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08965BA0u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08965BA0u) goto L_08965BA0;
    return;
L_08965BA0:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[31] = (0x08965BC8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_0896593C;
L_08965BC8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965BEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24272));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965C28;
      }
      goto L_08965C04;
    }
L_08965C04:
    aot_gpr[31] = (0x08965C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 11u, 0x089660B0u>(ctx, &aot_mem) && ctx.pc == 0x08965C0Cu) goto L_08965C0C;
    return;
L_08965C0C:
    aot_gpr[4] = (2198u << 16u);
    aot_gpr[31] = (0x08965C18u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(23860));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 56u, 0x089623B8u>(ctx, &aot_mem) && ctx.pc == 0x08965C18u) goto L_08965C18;
    return;
L_08965C18:
    aot_gpr[31] = (0x08965C20u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08965C20u) goto L_08965C20;
    return;
L_08965C20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965C30;
      }
      goto L_08965C28;
    }
L_08965C28:
    aot_gpr[31] = (0x08965C30u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08965C30u) goto L_08965C30;
    return;
L_08965C30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965C3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08965C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x08965C54u) goto L_08965C54;
    return;
L_08965C54:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965CB0;
      }
      goto L_08965C5C;
    }
L_08965C5C:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30968));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26892)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08965CB0;
      }
      goto L_08965C78;
    }
L_08965C78:
    aot_gpr[31] = (0x08965C80u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x08965C80u) goto L_08965C80;
    return;
L_08965C80:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x08965C98u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 270u, 0x08960FE8u>(ctx, &aot_mem) && ctx.pc == 0x08965C98u) goto L_08965C98;
    return;
L_08965C98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26896)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08965CACu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965CACu) goto L_08965CAC;
    return;
L_08965CAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-26892), aot_gpr[17]);
    goto L_08965CB0;
L_08965CB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965CC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965CE8;
      }
      goto L_08965CD8;
    }
L_08965CD8:
    aot_gpr[31] = (0x08965CE0u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08965CE0u) goto L_08965CE0;
    return;
L_08965CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965CF0;
      }
      goto L_08965CE8;
    }
L_08965CE8:
    aot_gpr[31] = (0x08965CF0u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08965CF0u) goto L_08965CF0;
    return;
L_08965CF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965CFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965D20;
      }
      goto L_08965D10;
    }
L_08965D10:
    aot_gpr[31] = (0x08965D18u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08965D18u) goto L_08965D18;
    return;
L_08965D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965D28;
      }
      goto L_08965D20;
    }
L_08965D20:
    aot_gpr[31] = (0x08965D28u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08965D28u) goto L_08965D28;
    return;
L_08965D28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965D34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26984)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965D80;
      }
      goto L_08965D4C;
    }
L_08965D4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08965D64u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965D64u) goto L_08965D64;
    return;
L_08965D64:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08965D78;
      }
      goto L_08965D70;
    }
L_08965D70:
    aot_gpr[31] = (0x08965D78u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08965D78u) goto L_08965D78;
    return;
L_08965D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965D88;
      }
      goto L_08965D80;
    }
L_08965D80:
    aot_gpr[31] = (0x08965D88u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08965D88u) goto L_08965D88;
    return;
L_08965D88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965D94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08965E10;
      }
      goto L_08965DB0;
    }
L_08965DB0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5072));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08965DC8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 181u, 0x08962CA4u>(ctx, &aot_mem) && ctx.pc == 0x08965DC8u) goto L_08965DC8;
    return;
L_08965DC8:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08965E10;
      }
      goto L_08965DD4;
    }
L_08965DD4:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965E08;
      }
      goto L_08965DE4;
    }
L_08965DE4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08965E00u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965E00u) goto L_08965E00;
    return;
L_08965E00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965E10;
      }
      goto L_08965E08;
    }
L_08965E08:
    aot_gpr[31] = (0x08965E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08965E10u) goto L_08965E10;
    return;
L_08965E10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965E24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08965E38u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x08965E38u) goto L_08965E38;
    return;
L_08965E38:
    aot_gpr[31] = (0x08965E40u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 61u, 0x089643C4u>(ctx, &aot_mem) && ctx.pc == 0x08965E40u) goto L_08965E40;
    return;
L_08965E40:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24272));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26984), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965E68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (0u | 5u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[19];
    aot_gpr[18] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 1u, 0x08966004u>(ctx, &aot_mem); return;
      }
      goto L_08965E98;
    }
L_08965E98:
    aot_gpr[31] = (0x08965EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x08965EA0u) goto L_08965EA0;
    return;
L_08965EA0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08965EB0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 154u, 0x08964B48u>(ctx, &aot_mem) && ctx.pc == 0x08965EB0u) goto L_08965EB0;
    return;
L_08965EB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965EC4;
      }
      goto L_08965EBC;
    }
L_08965EBC:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    goto L_08965EC4;
L_08965EC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 1u, 0x08966004u>(ctx, &aot_mem); return;
      }
      goto L_08965ED0;
    }
L_08965ED0:
    aot_gpr[31] = (0x08965ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x08965ED8u) goto L_08965ED8;
    return;
L_08965ED8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08965EF4;
      }
      goto L_08965EE4;
    }
L_08965EE4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 1u, 0x08966004u>(ctx, &aot_mem); return;
      }
      goto L_08965EEC;
    }
L_08965EEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965F68;
      }
      goto L_08965EF4;
    }
L_08965EF4:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 1u, 0x08966004u>(ctx, &aot_mem); return;
      }
      goto L_08965EFC;
    }
L_08965EFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965F60;
      }
      goto L_08965F08;
    }
L_08965F08:
    aot_gpr[4] = (0u | 30u);
    aot_gpr[5] = (0u | 29u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (0x08965F20u);
    aot_gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x08965F20u) goto L_08965F20;
    return;
L_08965F20:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965F3C;
      }
      goto L_08965F2C;
    }
L_08965F2C:
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08965F38u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 250u, 0x0895FEE8u>(ctx, &aot_mem) && ctx.pc == 0x08965F38u) goto L_08965F38;
    return;
L_08965F38:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08965F3C;
L_08965F3C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965F58;
      }
      goto L_08965F44;
    }
L_08965F44:
    aot_gpr[31] = (0x08965F4Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 116u, 0x0895F700u>(ctx, &aot_mem) && ctx.pc == 0x08965F4Cu) goto L_08965F4C;
    return;
L_08965F4C:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), aot_gpr[4]);
      if (branch_taken) {
          goto L_08965F60;
      }
      goto L_08965F58;
    }
L_08965F58:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    goto L_08965F60;
L_08965F60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 1u, 0x08966004u>(ctx, &aot_mem); return;
      }
      goto L_08965F68;
    }
L_08965F68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08965F84;
      }
      goto L_08965F78;
    }
L_08965F78:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), aot_gpr[4]);
      if (branch_taken) {
          goto L_08965FFC;
      }
      goto L_08965F84;
    }
L_08965F84:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08965FFC;
      }
      goto L_08965F8C;
    }
L_08965F8C:
    aot_gpr[4] = (0u | 30u);
    aot_gpr[5] = (0u | 29u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[31] = (0x08965FA4u);
    aot_gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x08965FA4u) goto L_08965FA4;
    return;
L_08965FA4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965FC0;
      }
      goto L_08965FB0;
    }
L_08965FB0:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08965FBCu);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 250u, 0x0895FEE8u>(ctx, &aot_mem) && ctx.pc == 0x08965FBCu) goto L_08965FBC;
    return;
L_08965FBC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_08965FC0;
L_08965FC0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965FDC;
      }
      goto L_08965FC8;
    }
L_08965FC8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08965FD4u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 126u, 0x0895F79Cu>(ctx, &aot_mem) && ctx.pc == 0x08965FD4u) goto L_08965FD4;
    return;
L_08965FD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965FF4;
      }
      goto L_08965FDC;
    }
L_08965FDC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[31] = (0x08965FF4u);
    aot_gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 146u, 0x08962A68u>(ctx, &aot_mem) && ctx.pc == 0x08965FF4u) goto L_08965FF4;
    return;
L_08965FF4:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    goto L_08965FFC;
L_08965FFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 1u, 0x08966004u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 1u, 0x08966004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0353(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0353_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_353(Runtime &runtime) {
    runtime.register_generated_unit(353u, 0x08965000u, 4096u, &recomp_unit_0353, &recomp_unit_0353_entry);
    runtime.register_function(0x08965000u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965004u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965014u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896502Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896504Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965058u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965070u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965090u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896509Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089650B4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089650C4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089650E0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089650ECu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965108u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965114u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965130u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896514Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965170u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965180u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089651A0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089651BCu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089651C8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089651D4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089651E0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089651ECu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089651FCu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965250u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965264u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896527Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896529Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089652A8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089652C0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089652E0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089652ECu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965304u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965324u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965330u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965348u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965368u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965374u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965388u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965394u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089653A8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089653B4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089653C8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089653D4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089653E8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089653F4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965408u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965418u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965424u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965438u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965444u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965458u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965464u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965478u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965484u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965498u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089654A8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089654B4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089654C8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089654D4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089654E8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089654F4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965508u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965514u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965524u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965530u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965540u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896554Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896555Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896556Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896557Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965588u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089655ACu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089655BCu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089655C8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089655D0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089655F8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896560Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965638u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965640u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965654u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965668u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965688u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965694u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089656D8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089656E4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965708u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965710u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965728u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965748u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965758u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965778u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965790u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089657A4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089657D0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089657E8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965800u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896580Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965824u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965854u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896586Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896589Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089658BCu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089658C8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089658D0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089658D8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089658E0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089658E8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089658F8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965900u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896590Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965914u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965920u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x0896593Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965968u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965980u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965994u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089659A0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089659A8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089659ACu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089659B4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089659C4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089659CCu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089659DCu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x089659ECu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965A74u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965A90u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965A9Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965AA8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965AB0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965ABCu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965AD4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965AE0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965AE8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965AF0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965AF8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965B00u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965B10u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965B18u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965B20u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965B2Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965B48u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965B90u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965BA0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965BC8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965BECu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965C04u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965C0Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965C18u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965C20u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965C28u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965C30u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965C3Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965C54u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965C5Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965C78u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965C80u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965C98u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965CACu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965CB0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965CC4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965CD8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965CE0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965CE8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965CF0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965CFCu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965D10u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965D18u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965D20u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965D28u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965D34u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965D4Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965D64u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965D70u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965D78u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965D80u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965D88u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965D94u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965DB0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965DC8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965DD4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965DE4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965E00u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965E08u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965E10u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965E24u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965E38u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965E40u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965E68u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965E98u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965EA0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965EB0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965EBCu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965EC4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965ED0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965ED8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965EE4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965EECu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965EF4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965EFCu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965F08u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965F20u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965F2Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965F38u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965F3Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965F44u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965F4Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965F58u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965F60u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965F68u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965F78u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965F84u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965F8Cu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965FA4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965FB0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965FBCu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965FC0u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965FC8u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965FD4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965FDCu, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965FF4u, &recomp_unit_0353, "recomp_unit_0353");
    runtime.register_function(0x08965FFCu, &recomp_unit_0353, "recomp_unit_0353");
}
} // namespace psprecomp
