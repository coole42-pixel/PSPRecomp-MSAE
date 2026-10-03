#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0180[1017] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0,
    0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 44, 45, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 55, 56, 0, 0, 0, 57,
    0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 64,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 80, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 88, 89, 0, 0, 90, 0,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103,
    104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 0, 148, 0, 149, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0,
    156, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 160, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0,
    169, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188,
};
void recomp_unit_0180_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088B8004u;
        entry_id = (entry_delta < 4068u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0180[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B8004;
    case 2u: goto L_088B8010;
    case 3u: goto L_088B801C;
    case 4u: goto L_088B803C;
    case 5u: goto L_088B8050;
    case 6u: goto L_088B8064;
    case 7u: goto L_088B80C8;
    case 8u: goto L_088B80DC;
    case 9u: goto L_088B8100;
    case 10u: goto L_088B8110;
    case 11u: goto L_088B8154;
    case 12u: goto L_088B815C;
    case 13u: goto L_088B8168;
    case 14u: goto L_088B817C;
    case 15u: goto L_088B8188;
    case 16u: goto L_088B8190;
    case 17u: goto L_088B81A4;
    case 18u: goto L_088B81B4;
    case 19u: goto L_088B81C8;
    case 20u: goto L_088B81F0;
    case 21u: goto L_088B8200;
    case 22u: goto L_088B8230;
    case 23u: goto L_088B8270;
    case 24u: goto L_088B8294;
    case 25u: goto L_088B82B8;
    case 26u: goto L_088B82F8;
    case 27u: goto L_088B8304;
    case 28u: goto L_088B831C;
    case 29u: goto L_088B8324;
    case 30u: goto L_088B8334;
    case 31u: goto L_088B8338;
    case 32u: goto L_088B8348;
    case 33u: goto L_088B835C;
    case 34u: goto L_088B8374;
    case 35u: goto L_088B8390;
    case 36u: goto L_088B83A8;
    case 37u: goto L_088B83B4;
    case 38u: goto L_088B83D8;
    case 39u: goto L_088B83E8;
    case 40u: goto L_088B840C;
    case 41u: goto L_088B8414;
    case 42u: goto L_088B8424;
    case 43u: goto L_088B8434;
    case 44u: goto L_088B8440;
    case 45u: goto L_088B8444;
    case 46u: goto L_088B8450;
    case 47u: goto L_088B845C;
    case 48u: goto L_088B846C;
    case 49u: goto L_088B8484;
    case 50u: goto L_088B84A0;
    case 51u: goto L_088B84B4;
    case 52u: goto L_088B84B8;
    case 53u: goto L_088B84C8;
    case 54u: goto L_088B84DC;
    case 55u: goto L_088B84EC;
    case 56u: goto L_088B84F0;
    case 57u: goto L_088B8500;
    case 58u: goto L_088B8514;
    case 59u: goto L_088B8524;
    case 60u: goto L_088B853C;
    case 61u: goto L_088B8550;
    case 62u: goto L_088B8568;
    case 63u: goto L_088B857C;
    case 64u: goto L_088B8580;
    case 65u: goto L_088B8588;
    case 66u: goto L_088B85B4;
    case 67u: goto L_088B85C4;
    case 68u: goto L_088B85D8;
    case 69u: goto L_088B85E0;
    case 70u: goto L_088B85F0;
    case 71u: goto L_088B8604;
    case 72u: goto L_088B8618;
    case 73u: goto L_088B8620;
    case 74u: goto L_088B8630;
    case 75u: goto L_088B8638;
    case 76u: goto L_088B8640;
    case 77u: goto L_088B8654;
    case 78u: goto L_088B8660;
    case 79u: goto L_088B866C;
    case 80u: goto L_088B8670;
    case 81u: goto L_088B868C;
    case 82u: goto L_088B86A0;
    case 83u: goto L_088B86AC;
    case 84u: goto L_088B86C0;
    case 85u: goto L_088B86CC;
    case 86u: goto L_088B86D8;
    case 87u: goto L_088B86E0;
    case 88u: goto L_088B86EC;
    case 89u: goto L_088B86F0;
    case 90u: goto L_088B86FC;
    case 91u: goto L_088B8720;
    case 92u: goto L_088B8740;
    case 93u: goto L_088B8748;
    case 94u: goto L_088B8754;
    case 95u: goto L_088B8760;
    case 96u: goto L_088B876C;
    case 97u: goto L_088B8774;
    case 98u: goto L_088B877C;
    case 99u: goto L_088B8794;
    case 100u: goto L_088B87C8;
    case 101u: goto L_088B87D8;
    case 102u: goto L_088B87F0;
    case 103u: goto L_088B8800;
    case 104u: goto L_088B8804;
    case 105u: goto L_088B880C;
    case 106u: goto L_088B8868;
    case 107u: goto L_088B8870;
    case 108u: goto L_088B8878;
    case 109u: goto L_088B8884;
    case 110u: goto L_088B88A8;
    case 111u: goto L_088B88B8;
    case 112u: goto L_088B88C4;
    case 113u: goto L_088B88D0;
    case 114u: goto L_088B88E8;
    case 115u: goto L_088B8900;
    case 116u: goto L_088B8914;
    case 117u: goto L_088B8924;
    case 118u: goto L_088B893C;
    case 119u: goto L_088B8944;
    case 120u: goto L_088B8950;
    case 121u: goto L_088B8984;
    case 122u: goto L_088B89AC;
    case 123u: goto L_088B89B8;
    case 124u: goto L_088B89E8;
    case 125u: goto L_088B89F4;
    case 126u: goto L_088B8A20;
    case 127u: goto L_088B8A2C;
    case 128u: goto L_088B8A54;
    case 129u: goto L_088B8A5C;
    case 130u: goto L_088B8A70;
    case 131u: goto L_088B8A80;
    case 132u: goto L_088B8AA0;
    case 133u: goto L_088B8ABC;
    case 134u: goto L_088B8AD4;
    case 135u: goto L_088B8AE0;
    case 136u: goto L_088B8B00;
    case 137u: goto L_088B8B14;
    case 138u: goto L_088B8B28;
    case 139u: goto L_088B8B48;
    case 140u: goto L_088B8B50;
    case 141u: goto L_088B8B70;
    case 142u: goto L_088B8B8C;
    case 143u: goto L_088B8BA4;
    case 144u: goto L_088B8BB0;
    case 145u: goto L_088B8BD0;
    case 146u: goto L_088B8BE4;
    case 147u: goto L_088B8C00;
    case 148u: goto L_088B8C18;
    case 149u: goto L_088B8C20;
    case 150u: goto L_088B8C24;
    case 151u: goto L_088B8C3C;
    case 152u: goto L_088B8C5C;
    case 153u: goto L_088B8CC8;
    case 154u: goto L_088B8CE0;
    case 155u: goto L_088B8CFC;
    case 156u: goto L_088B8D04;
    case 157u: goto L_088B8D0C;
    case 158u: goto L_088B8D1C;
    case 159u: goto L_088B8D2C;
    case 160u: goto L_088B8D30;
    case 161u: goto L_088B8D38;
    case 162u: goto L_088B8D54;
    case 163u: goto L_088B8D6C;
    case 164u: goto L_088B8D78;
    case 165u: goto L_088B8D98;
    case 166u: goto L_088B8DAC;
    case 167u: goto L_088B8DE8;
    case 168u: goto L_088B8DF4;
    case 169u: goto L_088B8E04;
    case 170u: goto L_088B8E10;
    case 171u: goto L_088B8E18;
    case 172u: goto L_088B8E28;
    case 173u: goto L_088B8E34;
    case 174u: goto L_088B8E40;
    case 175u: goto L_088B8E50;
    case 176u: goto L_088B8E58;
    case 177u: goto L_088B8E6C;
    case 178u: goto L_088B8EEC;
    case 179u: goto L_088B8F08;
    case 180u: goto L_088B8F10;
    case 181u: goto L_088B8F2C;
    case 182u: goto L_088B8F38;
    case 183u: goto L_088B8F70;
    case 184u: goto L_088B8F98;
    case 185u: goto L_088B8FB4;
    case 186u: goto L_088B8FBC;
    case 187u: goto L_088B8FD8;
    case 188u: goto L_088B8FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B8004:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x088B8010u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 160u, 0x08A4CA78u>(ctx, &aot_mem) && ctx.pc == 0x088B8010u) goto L_088B8010;
    return;
L_088B8010:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B803C;
      }
      goto L_088B801C;
    }
L_088B801C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B803Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B803Cu) goto L_088B803C;
    return;
L_088B803C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8050:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8064:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B8200;
      }
      goto L_088B80C8;
    }
L_088B80C8:
    aot_gpr[21] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088B80DCu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 88u, 0x08944C94u>(ctx, &aot_mem) && ctx.pc == 0x088B80DCu) goto L_088B80DC;
    return;
L_088B80DC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[31] = (0x088B8100u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 90u, 0x08944CDCu>(ctx, &aot_mem) && ctx.pc == 0x088B8100u) goto L_088B8100;
    return;
L_088B8100:
    aot_gpr[17] = (0u | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    goto L_088B8110;
L_088B8110:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] << 4u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < 2 ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B817C;
      }
      goto L_088B8154;
    }
L_088B8154:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B81C8;
      }
      goto L_088B815C;
    }
L_088B815C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) > 0;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088B81A4;
      }
      goto L_088B8168;
    }
L_088B8168:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088B81C8;
      }
      goto L_088B817C;
    }
L_088B817C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B81B4;
      }
      goto L_088B8188;
    }
L_088B8188:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B81C8;
      }
      goto L_088B8190;
    }
L_088B8190:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088B81C8;
      }
      goto L_088B81A4;
    }
L_088B81A4:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088B81C8;
      }
      goto L_088B81B4;
    }
L_088B81B4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088B81C8;
      }
      goto L_088B81C8;
    }
L_088B81C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088B81F0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    goto L_088B8064;
L_088B81F0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B8110;
      }
      goto L_088B8200;
    }
L_088B8200:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8230:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B8294;
      }
      goto L_088B8270;
    }
L_088B8270:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B8270;
      }
      goto L_088B8294;
    }
L_088B8294:
    aot_gpr[6] = (2188u << 16u);
    aot_gpr[8] = (2188u << 16u);
    aot_gpr[5] = (0u | 44u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30164));
    aot_gpr[31] = (0x088B82B8u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-30280));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 75u, 0x08A2D4CCu>(ctx, &aot_mem) && ctx.pc == 0x088B82B8u) goto L_088B82B8;
    return;
L_088B82B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088B82F8u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    goto L_088B8064;
L_088B82F8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[17]);
      if (branch_taken) {
          goto L_088B8324;
      }
      goto L_088B8304;
    }
L_088B8304:
    aot_gpr[7] = (2188u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 12u);
    aot_gpr[31] = (0x088B831Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-32688));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x088B831Cu) goto L_088B831C;
    return;
L_088B831C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_088B8324;
L_088B8324:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_088B835C;
      }
      goto L_088B8334;
    }
L_088B8334:
    aot_gpr[9] = (0u | 0u);
    goto L_088B8338;
L_088B8338:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088B8348u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 50u, 0x08A4F398u>(ctx, &aot_mem) && ctx.pc == 0x088B8348u) goto L_088B8348;
    return;
L_088B8348:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B8338;
      }
      goto L_088B835C;
    }
L_088B835C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8374:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B83A8;
      }
      goto L_088B8390;
    }
L_088B8390:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u | 12u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[31] = (0x088B83A8u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 105u, 0x08A2D81Cu>(ctx, &aot_mem) && ctx.pc == 0x088B83A8u) goto L_088B83A8;
    return;
L_088B83A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B83D8;
      }
      goto L_088B83B4;
    }
L_088B83B4:
    aot_gpr[7] = (2213u << 16u);
    aot_gpr[8] = (2188u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u | 44u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-556));
    aot_gpr[31] = (0x088B83D8u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-30220));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 107u, 0x08A2D844u>(ctx, &aot_mem) && ctx.pc == 0x088B83D8u) goto L_088B83D8;
    return;
L_088B83D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B83E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B8440;
      }
      goto L_088B840C;
    }
L_088B840C:
    aot_gpr[9] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    goto L_088B8414;
L_088B8414:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x088B8424u);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 54u, 0x08A4F3E4u>(ctx, &aot_mem) && ctx.pc == 0x088B8424u) goto L_088B8424;
    return;
L_088B8424:
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088B8434u);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 50u, 0x08A4F398u>(ctx, &aot_mem) && ctx.pc == 0x088B8434u) goto L_088B8434;
    return;
L_088B8434:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B8414;
      }
      goto L_088B8440;
    }
L_088B8440:
    aot_gpr[18] = (0u | 0u);
    goto L_088B8444;
L_088B8444:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B845C;
      }
      goto L_088B8450;
    }
L_088B8450:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088B845Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088B83E8;
L_088B845C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B8444;
      }
      goto L_088B846C;
    }
L_088B846C:
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
L_088B8484:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088B84A0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088B83E8;
L_088B84A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[10] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_088B84DC;
      }
      goto L_088B84B4;
    }
L_088B84B4:
    aot_gpr[9] = (0u | 0u);
    goto L_088B84B8;
L_088B84B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088B84C8u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 54u, 0x08A4F3E4u>(ctx, &aot_mem) && ctx.pc == 0x088B84C8u) goto L_088B84C8;
    return;
L_088B84C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[10] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B84B8;
      }
      goto L_088B84DC;
    }
L_088B84DC:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_088B8514;
      }
      goto L_088B84EC;
    }
L_088B84EC:
    aot_gpr[9] = (0u | 0u);
    goto L_088B84F0;
L_088B84F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088B8500u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 50u, 0x08A4F398u>(ctx, &aot_mem) && ctx.pc == 0x088B8500u) goto L_088B8500;
    return;
L_088B8500:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B84F0;
      }
      goto L_088B8514;
    }
L_088B8514:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8524:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088B8580;
      }
      goto L_088B853C;
    }
L_088B853C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B8580;
      }
      goto L_088B8550;
    }
L_088B8550:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B8580;
      }
      goto L_088B8568;
    }
L_088B8568:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B8580;
      }
      goto L_088B857C;
    }
L_088B857C:
    aot_gpr[6] = (0u | 1u);
    goto L_088B8580;
L_088B8580:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8588:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088B85B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 122u, 0x088A7900u>(ctx, &aot_mem) && ctx.pc == 0x088B85B4u) goto L_088B85B4;
    return;
L_088B85B4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B85C4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 122u, 0x088A7900u>(ctx, &aot_mem) && ctx.pc == 0x088B85C4u) goto L_088B85C4;
    return;
L_088B85C4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088B85D8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_088B8524;
L_088B85D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B866C;
      }
      goto L_088B85E0;
    }
L_088B85E0:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8640;
      }
      goto L_088B85F0;
    }
L_088B85F0:
    aot_gpr[4] = (aot_gpr[19] << 2u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[19] << 2u);
      if (branch_taken) {
          goto L_088B8620;
      }
      goto L_088B8604;
    }
L_088B8604:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088B8618u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_088B8588;
L_088B8618:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B8638;
      }
      goto L_088B8620;
    }
L_088B8620:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B85F0;
      }
      goto L_088B8630;
    }
L_088B8630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8640;
      }
      goto L_088B8638;
    }
L_088B8638:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B8670;
      }
      goto L_088B8640;
    }
L_088B8640:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[31] = (0x088B8654u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 54u, 0x08A4F3E4u>(ctx, &aot_mem) && ctx.pc == 0x088B8654u) goto L_088B8654;
    return;
L_088B8654:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x088B8660u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 50u, 0x08A4F398u>(ctx, &aot_mem) && ctx.pc == 0x088B8660u) goto L_088B8660;
    return;
L_088B8660:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B8670;
      }
      goto L_088B866C;
    }
L_088B866C:
    aot_gpr[2] = (0u | 0u);
    goto L_088B8670;
L_088B8670:
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
L_088B868C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B86A0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088B8588;
L_088B86A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B86AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B86D8;
      }
      goto L_088B86C0;
    }
L_088B86C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088B86E0;
      }
      goto L_088B86CC;
    }
L_088B86CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B86C0;
      }
      goto L_088B86D8;
    }
L_088B86D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B86F0;
      }
      goto L_088B86E0;
    }
L_088B86E0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x088B86ECu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 54u, 0x08A4F3E4u>(ctx, &aot_mem) && ctx.pc == 0x088B86ECu) goto L_088B86EC;
    return;
L_088B86EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    goto L_088B86F0;
L_088B86F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B86FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088B8720u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 122u, 0x088A7900u>(ctx, &aot_mem) && ctx.pc == 0x088B8720u) goto L_088B8720;
    return;
L_088B8720:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088B8740u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B8524;
L_088B8740:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B877C;
      }
      goto L_088B8748;
    }
L_088B8748:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088B8754u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088B86AC;
L_088B8754:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x088B8760u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 50u, 0x08A4F398u>(ctx, &aot_mem) && ctx.pc == 0x088B8760u) goto L_088B8760;
    return;
L_088B8760:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B876Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088B868C;
L_088B876C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B877C;
      }
      goto L_088B8774;
    }
L_088B8774:
    aot_gpr[31] = (0x088B877Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 98u, 0x088A7768u>(ctx, &aot_mem) && ctx.pc == 0x088B877Cu) goto L_088B877C;
    return;
L_088B877C:
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
L_088B8794:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[16] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_fpr[15] = aot_fpr[15] + aot_fpr[12];
    aot_gpr[4] = (0u | 0u);
    aot_fpr[13] = aot_fpr[14] - aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = aot_fpr[17] + aot_fpr[12];
      if (branch_taken) {
          goto L_088B8804;
      }
      goto L_088B87C8;
    }
L_088B87C8:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B8804;
      }
      goto L_088B87D8;
    }
L_088B87D8:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B8804;
      }
      goto L_088B87F0;
    }
L_088B87F0:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B8804;
      }
      goto L_088B8800;
    }
L_088B8800:
    aot_gpr[4] = (0u | 1u);
    goto L_088B8804;
L_088B8804:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B880C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[21] = (aot_gpr[9] | 0u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[20] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x088B8868u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_088B8794;
L_088B8868:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8950;
      }
      goto L_088B8870;
    }
L_088B8870:
    aot_gpr[22] = (0u | 0u);
    aot_gpr[23] = (aot_gpr[17] | 0u);
    goto L_088B8878;
L_088B8878:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B88A8;
      }
      goto L_088B8884;
    }
L_088B8884:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088B88A8u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    goto L_088B880C;
L_088B88A8:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B8878;
      }
      goto L_088B88B8;
    }
L_088B88B8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B8950;
      }
      goto L_088B88C4;
    }
L_088B88C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088B88D0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 122u, 0x088A7900u>(ctx, &aot_mem) && ctx.pc == 0x088B88D0u) goto L_088B88D0;
    return;
L_088B88D0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[31] = (0x088B88E8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 122u, 0x088A7900u>(ctx, &aot_mem) && ctx.pc == 0x088B88E8u) goto L_088B88E8;
    return;
L_088B88E8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    aot_gpr[31] = (0x088B8900u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 87u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8900u) goto L_088B8900;
    return;
L_088B8900:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B8944;
      }
      goto L_088B8914;
    }
L_088B8914:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B893C;
      }
      goto L_088B8924;
    }
L_088B8924:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_088B893C;
L_088B893C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088B8944;
L_088B8944:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B88C4;
      }
      goto L_088B8950;
    }
L_088B8950:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8984:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B89ACu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088B880C;
L_088B89AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B89B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B89E8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B89E8u) goto L_088B89E8;
    return;
L_088B89E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B89F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088B8A20u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B8A20u) goto L_088B8A20;
    return;
L_088B8A20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8A2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088B8A54u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 159u, 0x08A4CA64u>(ctx, &aot_mem) && ctx.pc == 0x088B8A54u) goto L_088B8A54;
    return;
L_088B8A54:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_088B8A5C;
L_088B8A5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B8A5C;
      }
      goto L_088B8A70;
    }
L_088B8A70:
    aot_gpr[2] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8A80:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27992), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8AA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B8B00;
      }
      goto L_088B8ABC;
    }
L_088B8ABC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3496));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B8AD4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x088B8AD4u) goto L_088B8AD4;
    return;
L_088B8AD4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B8B00;
      }
      goto L_088B8AE0;
    }
L_088B8AE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B8B00u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B8B00u) goto L_088B8B00;
    return;
L_088B8B00:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8B14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B8B28u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8B28u) goto L_088B8B28;
    return;
L_088B8B28:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3496));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8B48:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8B50:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28000), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8B70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B8BD0;
      }
      goto L_088B8B8C;
    }
L_088B8B8C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3480));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B8BA4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x088B8BA4u) goto L_088B8BA4;
    return;
L_088B8BA4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B8BD0;
      }
      goto L_088B8BB0;
    }
L_088B8BB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B8BD0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B8BD0u) goto L_088B8BD0;
    return;
L_088B8BD0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8BE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088B8C00u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8C00u) goto L_088B8C00;
    return;
L_088B8C00:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3480));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8C24;
      }
      goto L_088B8C18;
    }
L_088B8C18:
    aot_gpr[31] = (0x088B8C20u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 183u, 0x08A4FE3Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8C20u) goto L_088B8C20;
    return;
L_088B8C20:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    goto L_088B8C24;
L_088B8C24:
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
L_088B8C3C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28008), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8C5C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[16] = aot_fpr[16] - aot_fpr[17];
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[18] = aot_fpr[18] - aot_fpr[19];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[17] = aot_fpr[15] - aot_fpr[17];
    aot_fpr[13] = aot_fpr[19] - aot_fpr[13];
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[15] = aot_fpr[0] - aot_fpr[15];
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = aot_fpr[16] - aot_fpr[12];
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[15]) || std::isnan(aot_fpr[14])) && aot_fpr[15] == aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = aot_fpr[2] - aot_fpr[17];
      if (branch_taken) {
          goto L_088B8D04;
      }
      goto L_088B8CC8;
    }
L_088B8CC8:
    aot_fpr[13] = aot_fpr[13] / aot_fpr[15];
    aot_fpr[12] = aot_fpr[12] / aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B8CFC;
      }
      goto L_088B8CE0;
    }
L_088B8CE0:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B8D0C;
      }
      goto L_088B8CFC;
    }
L_088B8CFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B8D30;
      }
      goto L_088B8D04;
    }
L_088B8D04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B8D30;
      }
      goto L_088B8D0C;
    }
L_088B8D0C:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B8CFC;
      }
      goto L_088B8D1C;
    }
L_088B8D1C:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B8CFC;
      }
      goto L_088B8D2C;
    }
L_088B8D2C:
    aot_gpr[2] = (0u | 1u);
    goto L_088B8D30;
L_088B8D30:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8D38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B8D98;
      }
      goto L_088B8D54;
    }
L_088B8D54:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3464));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B8D6Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x088B8D6Cu) goto L_088B8D6C;
    return;
L_088B8D6C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B8D98;
      }
      goto L_088B8D78;
    }
L_088B8D78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B8D98u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B8D98u) goto L_088B8D98;
    return;
L_088B8D98:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8DAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr[4] = (0u | 19u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088B8DE8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29792));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 166u, 0x08872C60u>(ctx, &aot_mem) && ctx.pc == 0x088B8DE8u) goto L_088B8DE8;
    return;
L_088B8DE8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8E58;
      }
      goto L_088B8DF4;
    }
L_088B8DF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[31] = (0x088B8E04u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5272)));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 25u, 0x088B627Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8E04u) goto L_088B8E04;
    return;
L_088B8E04:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[2]);
      if (branch_taken) {
          goto L_088B8E18;
      }
      goto L_088B8E10;
    }
L_088B8E10:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088B8E18;
L_088B8E18:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (0u | 19u);
    aot_gpr[31] = (0x088B8E28u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29840));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 166u, 0x08872C60u>(ctx, &aot_mem) && ctx.pc == 0x088B8E28u) goto L_088B8E28;
    return;
L_088B8E28:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8E58;
      }
      goto L_088B8E34;
    }
L_088B8E34:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    aot_gpr[31] = (0x088B8E40u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5272)));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 25u, 0x088B627Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8E40u) goto L_088B8E40;
    return;
L_088B8E40:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8E58;
      }
      goto L_088B8E50;
    }
L_088B8E50:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088B8E58;
L_088B8E58:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8E6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[22];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (17224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[19]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[20];
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[31]);
    aot_gpr[31] = (0x088B8EECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 106u, 0x0882F904u>(ctx, &aot_mem) && ctx.pc == 0x088B8EECu) goto L_088B8EEC;
    return;
L_088B8EEC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 11u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x088B8F08u);
    aot_gpr[9] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0326_entry, 326u, 113u, 0x0894AD80u>(ctx, &aot_mem) && ctx.pc == 0x088B8F08u) goto L_088B8F08;
    return;
L_088B8F08:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8F2C;
      }
      goto L_088B8F10;
    }
L_088B8F10:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[19] = (0u | 1u);
    goto L_088B8F2C;
L_088B8F2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8F70;
      }
      goto L_088B8F38;
    }
L_088B8F38:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    goto L_088B8F70;
L_088B8F70:
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[22];
    aot_fpr[13] = aot_fpr[13] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088B8F98u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 106u, 0x0882F904u>(ctx, &aot_mem) && ctx.pc == 0x088B8F98u) goto L_088B8F98;
    return;
L_088B8F98:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 11u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x088B8FB4u);
    aot_gpr[9] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0326_entry, 326u, 113u, 0x0894AD80u>(ctx, &aot_mem) && ctx.pc == 0x088B8FB4u) goto L_088B8FB4;
    return;
L_088B8FB4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8FD8;
      }
      goto L_088B8FBC;
    }
L_088B8FBC:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088B8FD8;
L_088B8FD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 2u, 0x088B901Cu>(ctx, &aot_mem); return;
      }
      goto L_088B8FE4;
    }
L_088B8FE4:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(160);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(192);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(208);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.pc = 0x088B9000u; return;
}

void recomp_unit_0180(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0180_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_180(Runtime &runtime) {
    runtime.register_generated_unit(180u, 0x088B8000u, 4096u, &recomp_unit_0180, &recomp_unit_0180_entry);
    runtime.register_function(0x088B8004u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8010u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B801Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B803Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8050u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8064u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B80C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B80DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8100u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8110u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8154u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B815Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8168u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B817Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8188u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8190u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B81A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B81B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B81C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B81F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8200u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8230u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8270u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8294u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B82B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B82F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8304u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B831Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8324u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8334u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8338u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8348u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B835Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8374u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8390u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B83A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B83B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B83D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B83E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B840Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8414u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8424u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8434u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8440u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8444u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8450u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B845Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B846Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8484u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B84A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B84B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B84B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B84C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B84DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B84ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B84F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8500u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8514u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8524u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B853Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8550u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8568u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B857Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8580u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8588u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B85B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B85C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B85D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B85E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B85F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8604u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8618u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8620u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8630u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8638u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8640u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8654u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8660u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B866Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8670u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B868Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B86A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B86ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B86C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B86CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B86D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B86E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B86ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B86F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B86FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8720u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8740u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8748u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8754u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8760u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B876Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8774u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B877Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8794u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B87C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B87D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B87F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8800u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8804u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B880Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8868u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8870u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8878u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8884u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B88A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B88B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B88C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B88D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B88E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8900u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8914u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8924u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B893Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8944u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8950u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8984u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B89ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B89B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B89E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B89F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8A20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8A2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8A54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8A5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8A70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8A80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8AA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8ABCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8AD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8AE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8B00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8B14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8B28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8B48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8B50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8B70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8B8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8BA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8BB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8BD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8BE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8C00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8C18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8C20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8C24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8C3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8C5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8CC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8CE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8CFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8D04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8D0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8D1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8D2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8D30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8D38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8D54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8D6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8D78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8D98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8DACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8DE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8DF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8E04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8E10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8E18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8E28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8E34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8E40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8E50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8E58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8E6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8EECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8F08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8F10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8F2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8F38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8F70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8F98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8FB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8FBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8FD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x088B8FE4u, &recomp_unit_0180, "recomp_unit_0180");
}
} // namespace psprecomp
