#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0437[1017] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 56, 0, 0, 0,
    57, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 62, 0, 63, 64, 65, 66,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 72, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 147, 0, 0, 0, 0,
    0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0,
    153, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 158,
};
void recomp_unit_0437_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089B9000u;
        entry_id = (entry_delta < 4068u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0437[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B9000;
    case 2u: goto L_089B9010;
    case 3u: goto L_089B9038;
    case 4u: goto L_089B9048;
    case 5u: goto L_089B9070;
    case 6u: goto L_089B9080;
    case 7u: goto L_089B90A8;
    case 8u: goto L_089B90B8;
    case 9u: goto L_089B90E8;
    case 10u: goto L_089B9100;
    case 11u: goto L_089B9130;
    case 12u: goto L_089B914C;
    case 13u: goto L_089B9174;
    case 14u: goto L_089B9184;
    case 15u: goto L_089B91AC;
    case 16u: goto L_089B91BC;
    case 17u: goto L_089B91E4;
    case 18u: goto L_089B91F4;
    case 19u: goto L_089B921C;
    case 20u: goto L_089B922C;
    case 21u: goto L_089B9254;
    case 22u: goto L_089B9264;
    case 23u: goto L_089B928C;
    case 24u: goto L_089B929C;
    case 25u: goto L_089B92C4;
    case 26u: goto L_089B92D4;
    case 27u: goto L_089B92FC;
    case 28u: goto L_089B930C;
    case 29u: goto L_089B9334;
    case 30u: goto L_089B9344;
    case 31u: goto L_089B936C;
    case 32u: goto L_089B937C;
    case 33u: goto L_089B93A4;
    case 34u: goto L_089B93B4;
    case 35u: goto L_089B93DC;
    case 36u: goto L_089B93EC;
    case 37u: goto L_089B9414;
    case 38u: goto L_089B9424;
    case 39u: goto L_089B944C;
    case 40u: goto L_089B945C;
    case 41u: goto L_089B9484;
    case 42u: goto L_089B9494;
    case 43u: goto L_089B94BC;
    case 44u: goto L_089B94CC;
    case 45u: goto L_089B94F4;
    case 46u: goto L_089B9504;
    case 47u: goto L_089B952C;
    case 48u: goto L_089B953C;
    case 49u: goto L_089B9564;
    case 50u: goto L_089B9574;
    case 51u: goto L_089B959C;
    case 52u: goto L_089B95AC;
    case 53u: goto L_089B95B4;
    case 54u: goto L_089B9664;
    case 55u: goto L_089B966C;
    case 56u: goto L_089B9670;
    case 57u: goto L_089B9680;
    case 58u: goto L_089B9684;
    case 59u: goto L_089B96AC;
    case 60u: goto L_089B96D4;
    case 61u: goto L_089B96DC;
    case 62u: goto L_089B96E8;
    case 63u: goto L_089B96F0;
    case 64u: goto L_089B96F4;
    case 65u: goto L_089B96F8;
    case 66u: goto L_089B96FC;
    case 67u: goto L_089B9724;
    case 68u: goto L_089B974C;
    case 69u: goto L_089B9754;
    case 70u: goto L_089B975C;
    case 71u: goto L_089B9774;
    case 72u: goto L_089B9788;
    case 73u: goto L_089B9790;
    case 74u: goto L_089B979C;
    case 75u: goto L_089B97B0;
    case 76u: goto L_089B97D0;
    case 77u: goto L_089B97D8;
    case 78u: goto L_089B97F0;
    case 79u: goto L_089B9828;
    case 80u: goto L_089B9830;
    case 81u: goto L_089B9838;
    case 82u: goto L_089B984C;
    case 83u: goto L_089B9864;
    case 84u: goto L_089B9870;
    case 85u: goto L_089B9898;
    case 86u: goto L_089B98A8;
    case 87u: goto L_089B98D8;
    case 88u: goto L_089B98E8;
    case 89u: goto L_089B9918;
    case 90u: goto L_089B9928;
    case 91u: goto L_089B994C;
    case 92u: goto L_089B995C;
    case 93u: goto L_089B9984;
    case 94u: goto L_089B9994;
    case 95u: goto L_089B99BC;
    case 96u: goto L_089B99CC;
    case 97u: goto L_089B99F4;
    case 98u: goto L_089B9A04;
    case 99u: goto L_089B9A2C;
    case 100u: goto L_089B9A3C;
    case 101u: goto L_089B9A64;
    case 102u: goto L_089B9A74;
    case 103u: goto L_089B9A9C;
    case 104u: goto L_089B9AAC;
    case 105u: goto L_089B9AD4;
    case 106u: goto L_089B9AE4;
    case 107u: goto L_089B9B08;
    case 108u: goto L_089B9B18;
    case 109u: goto L_089B9B40;
    case 110u: goto L_089B9B50;
    case 111u: goto L_089B9B58;
    case 112u: goto L_089B9B84;
    case 113u: goto L_089B9B98;
    case 114u: goto L_089B9BA8;
    case 115u: goto L_089B9BB8;
    case 116u: goto L_089B9BC4;
    case 117u: goto L_089B9BD0;
    case 118u: goto L_089B9BE8;
    case 119u: goto L_089B9C10;
    case 120u: goto L_089B9C1C;
    case 121u: goto L_089B9C48;
    case 122u: goto L_089B9C58;
    case 123u: goto L_089B9C78;
    case 124u: goto L_089B9C90;
    case 125u: goto L_089B9CA4;
    case 126u: goto L_089B9CAC;
    case 127u: goto L_089B9CD4;
    case 128u: goto L_089B9CEC;
    case 129u: goto L_089B9D00;
    case 130u: goto L_089B9D24;
    case 131u: goto L_089B9D3C;
    case 132u: goto L_089B9D64;
    case 133u: goto L_089B9D74;
    case 134u: goto L_089B9D9C;
    case 135u: goto L_089B9DAC;
    case 136u: goto L_089B9DD4;
    case 137u: goto L_089B9DE4;
    case 138u: goto L_089B9E0C;
    case 139u: goto L_089B9E1C;
    case 140u: goto L_089B9E44;
    case 141u: goto L_089B9E54;
    case 142u: goto L_089B9E84;
    case 143u: goto L_089B9E9C;
    case 144u: goto L_089B9EA4;
    case 145u: goto L_089B9ED8;
    case 146u: goto L_089B9EE8;
    case 147u: goto L_089B9EEC;
    case 148u: goto L_089B9F08;
    case 149u: goto L_089B9F30;
    case 150u: goto L_089B9F40;
    case 151u: goto L_089B9F6C;
    case 152u: goto L_089B9F74;
    case 153u: goto L_089B9F80;
    case 154u: goto L_089B9F8C;
    case 155u: goto L_089B9F98;
    case 156u: goto L_089B9FC0;
    case 157u: goto L_089B9FD8;
    case 158u: goto L_089B9FE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B9000:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(68));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9010:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9038u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9038u) goto L_089B9038;
    return;
L_089B9038:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9048:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9070u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9070u) goto L_089B9070;
    return;
L_089B9070:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(44));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9080:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B90A8u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B90A8u) goto L_089B90A8;
    return;
L_089B90A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(36));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B90B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(84));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[31] = (0x089B90E8u);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089B90E8u) goto L_089B90E8;
    return;
L_089B90E8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B9100u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089B9100u) goto L_089B9100;
    return;
L_089B9100:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9130u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9130u) goto L_089B9130;
    return;
L_089B9130:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B914C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9174u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9174u) goto L_089B9174;
    return;
L_089B9174:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9184:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B91ACu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B91ACu) goto L_089B91AC;
    return;
L_089B91AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B91BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(64))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B91E4u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B91E4u) goto L_089B91E4;
    return;
L_089B91E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(68));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B91F4:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B921Cu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B921Cu) goto L_089B921C;
    return;
L_089B921C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(36));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B922C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9254u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9254u) goto L_089B9254;
    return;
L_089B9254:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9264:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B928Cu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B928Cu) goto L_089B928C;
    return;
L_089B928C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B929C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(68))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B92C4u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B92C4u) goto L_089B92C4;
    return;
L_089B92C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(72));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B92D4:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B92FCu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B92FCu) goto L_089B92FC;
    return;
L_089B92FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(36));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B930C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(204))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9334u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9334u) goto L_089B9334;
    return;
L_089B9334:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(208));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9344:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B936Cu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B936Cu) goto L_089B936C;
    return;
L_089B936C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B937C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(204))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B93A4u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B93A4u) goto L_089B93A4;
    return;
L_089B93A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(208));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B93B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(472))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B93DCu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B93DCu) goto L_089B93DC;
    return;
L_089B93DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(476));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B93EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(416))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9414u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9414u) goto L_089B9414;
    return;
L_089B9414:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(420));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9424:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(128))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B944Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B944Cu) goto L_089B944C;
    return;
L_089B944C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(132));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B945C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(468))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9484u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9484u) goto L_089B9484;
    return;
L_089B9484:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(472));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9494:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B94BCu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B94BCu) goto L_089B94BC;
    return;
L_089B94BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B94CC:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B94F4u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B94F4u) goto L_089B94F4;
    return;
L_089B94F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9504:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B952Cu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B952Cu) goto L_089B952C;
    return;
L_089B952C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(432));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B953C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9564u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9564u) goto L_089B9564;
    return;
L_089B9564:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(36));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9574:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(176));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(172));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B959Cu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B959Cu) goto L_089B959C;
    return;
L_089B959C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B95AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(508));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B95B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-576));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(560), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(552), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(548), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(508));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(544), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(568), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(564), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(556), aot_gpr[19]);
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(7), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(11), aot_gpr[7]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(15), aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(19), aot_gpr[5]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[7]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(488), aot_gpr[11]);
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(7), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(496), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(504), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(492), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(500), aot_gpr[10]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(11), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(15), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(19), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[10] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089B96D4;
      }
      goto L_089B9664;
    }
L_089B9664:
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    goto L_089B966C;
L_089B966C:
    aot_gpr[2] = (2217u << 16u);
    goto L_089B9670;
L_089B9670:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16320)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[3];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-966));
      if (branch_taken) {
          goto L_089B9684;
      }
      goto L_089B9680;
    }
L_089B9680:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(504), aot_gpr[2]);
    goto L_089B9684;
L_089B9684:
    aot_gpr[3] = (aot_gpr[21] + static_cast<std::uint32_t>(-15728));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(56)));
    aot_gpr[8] = (aot_gpr[10] ^ 3u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(504));
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B96ACu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B96ACu) goto L_089B96AC;
    return;
L_089B96AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(568)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(564)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(560)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(556)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(548)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(544)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(40));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B96D4:
    aot_gpr[31] = (0x089B96DCu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 198u, 0x089ACE28u>(ctx, &aot_mem) && ctx.pc == 0x089B96DCu) goto L_089B96DC;
    return;
L_089B96DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_089B9838;
    }
    goto L_089B96E8;
L_089B96E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (2215u << 16u);
      if (branch_taken) {
          goto L_089B974C;
      }
      goto L_089B96F0;
    }
L_089B96F0:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    goto L_089B96F4;
L_089B96F4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_089B96F8;
L_089B96F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(504), aot_gpr[2]);
    goto L_089B96FC;
L_089B96FC:
    aot_gpr[3] = (aot_gpr[21] + static_cast<std::uint32_t>(-15728));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(56)));
    aot_gpr[8] = (aot_gpr[10] ^ 3u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(504));
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9724u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9724u) goto L_089B9724;
    return;
L_089B9724:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(568)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(564)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(560)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(556)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(548)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(544)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(40));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B974C:
    aot_gpr[31] = (0x089B9754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 28u, 0x089AD258u>(ctx, &aot_mem) && ctx.pc == 0x089B9754u) goto L_089B9754;
    return;
L_089B9754:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B984C;
      }
      goto L_089B975C;
    }
L_089B975C:
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[21] + static_cast<std::uint32_t>(-15728));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9774u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9774u) goto L_089B9774;
    return;
L_089B9774:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x089B9788u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9788u) goto L_089B9788;
    return;
L_089B9788:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089B96F4;
      }
      goto L_089B9790;
    }
L_089B9790:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089B9864;
      }
      goto L_089B979C;
    }
L_089B979C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16304)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B97B0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B97B0u) goto L_089B97B0;
    return;
L_089B97B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(308));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[11]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 465 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089B97D8;
      }
      goto L_089B97D0;
    }
L_089B97D0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(464));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(464));
    goto L_089B97D8;
L_089B97D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(492), aot_gpr[3]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B97F0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089B97F0u) goto L_089B97F0;
    return;
L_089B97F0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[21] + static_cast<std::uint32_t>(-15728));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(168));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(508));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9828u);
    aot_gpr[11] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9828u) goto L_089B9828;
    return;
L_089B9828:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089B96F8;
      }
      goto L_089B9830;
    }
L_089B9830:
    aot_gpr[2] = (2217u << 16u);
    goto L_089B9670;
L_089B9838:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(504), aot_gpr[2]);
    goto L_089B96FC;
L_089B984C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-11));
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(504), aot_gpr[2]);
    goto L_089B96FC;
L_089B9864:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    goto L_089B966C;
L_089B9870:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(176));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(172));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9898u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9898u) goto L_089B9898;
    return;
L_089B9898:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B98A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(484));
    aot_gpr[8] = (aot_gpr[8] ^ 3u);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(480));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B98D8u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B98D8u) goto L_089B98D8;
    return;
L_089B98D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(508));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B98E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(484));
    aot_gpr[8] = (aot_gpr[8] ^ 3u);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(480));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9918u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9918u) goto L_089B9918;
    return;
L_089B9918:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(508));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9928:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B994Cu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B994Cu) goto L_089B994C;
    return;
L_089B994C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B995C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(197))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(176));
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9984u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(172));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9984u) goto L_089B9984;
    return;
L_089B9984:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9994:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(453))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(432));
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B99BCu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(428));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B99BCu) goto L_089B99BC;
    return;
L_089B99BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(456));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B99CC:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(176));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(172));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B99F4u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B99F4u) goto L_089B99F4;
    return;
L_089B99F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9A04:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(452));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(448));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9A2Cu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9A2Cu) goto L_089B9A2C;
    return;
L_089B9A2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(476));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9A3C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(176));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(172));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9A64u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9A64u) goto L_089B9A64;
    return;
L_089B9A64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9A74:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(176));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(172));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9A9Cu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9A9Cu) goto L_089B9A9C;
    return;
L_089B9A9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9AAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(509))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(488));
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9AD4u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(484));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9AD4u) goto L_089B9AD4;
    return;
L_089B9AD4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(512));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9AE4:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9B08u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9B08u) goto L_089B9B08;
    return;
L_089B9B08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9B18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(284))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9B40u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9B40u) goto L_089B9B40;
    return;
L_089B9B40:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(288));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9B50:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9B58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-19352));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(149));
    aot_gpr[17] = (aot_gpr[7] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x089B9B84u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9B84u) goto L_089B9B84;
    return;
L_089B9B84:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B9B98u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089B9B98u) goto L_089B9B98;
    return;
L_089B9B98:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B9BA8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B9BA8u) goto L_089B9BA8;
    return;
L_089B9BA8:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089B9BB8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19331));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 44u, 0x08991274u>(ctx, &aot_mem) && ctx.pc == 0x089B9BB8u) goto L_089B9BB8;
    return;
L_089B9BB8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089B9BD0;
      }
      goto L_089B9BC4;
    }
L_089B9BC4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    goto L_089B9BD0;
L_089B9BD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9BE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1104));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1092), aot_gpr[17]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1088));
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1088), aot_gpr[16]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1096), aot_gpr[31]);
    aot_gpr[31] = (0x089B9C10u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9C10u) goto L_089B9C10;
    return;
L_089B9C10:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(1088));
    goto L_089B9C1C;
L_089B9C1C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089B9C1C;
      }
      goto L_089B9C48;
    }
L_089B9C48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[2] & 512u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089B9C90;
      }
      goto L_089B9C58;
    }
L_089B9C58:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1084))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9C78u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9C78u) goto L_089B9C78;
    return;
L_089B9C78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1092)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1088)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9C90:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19352));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B9CA4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 158u, 0x08A3A7ECu>(ctx, &aot_mem) && ctx.pc == 0x089B9CA4u) goto L_089B9CA4;
    return;
L_089B9CA4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-966));
      if (branch_taken) {
          goto L_089B9CEC;
      }
      goto L_089B9CAC;
    }
L_089B9CAC:
    aot_gpr[3] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1084))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9CD4u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9CD4u) goto L_089B9CD4;
    return;
L_089B9CD4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1092)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1088)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9CEC:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(956));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19331));
    aot_gpr[31] = (0x089B9D00u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089B9D00u) goto L_089B9D00;
    return;
L_089B9D00:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1084))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9D24u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9D24u) goto L_089B9D24;
    return;
L_089B9D24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1092)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1088)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9D3C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9D64u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9D64u) goto L_089B9D64;
    return;
L_089B9D64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9D74:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9D9Cu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9D9Cu) goto L_089B9D9C;
    return;
L_089B9D9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9DAC:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9DD4u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9DD4u) goto L_089B9DD4;
    return;
L_089B9DD4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9DE4:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9E0Cu);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9E0Cu) goto L_089B9E0C;
    return;
L_089B9E0C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9E1C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9E44u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9E44u) goto L_089B9E44;
    return;
L_089B9E44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9E54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(84));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[31] = (0x089B9E84u);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9E84u) goto L_089B9E84;
    return;
L_089B9E84:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B9E9Cu);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089B9E9Cu) goto L_089B9E9C;
    return;
L_089B9E9C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089B9EEC;
      }
      goto L_089B9EA4;
    }
L_089B9EA4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(144)));
    aot_gpr[9] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(152)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[2]);
      if (branch_taken) {
          goto L_089B9EEC;
      }
      goto L_089B9ED8;
    }
L_089B9ED8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9EE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9EE8u) goto L_089B9EE8;
    return;
L_089B9EE8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    goto L_089B9EEC;
L_089B9EEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9F08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(68))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9F30u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9F30u) goto L_089B9F30;
    return;
L_089B9F30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(72));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9F40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[31] = (0x089B9F6Cu);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089B9F6Cu) goto L_089B9F6C;
    return;
L_089B9F6C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B9FD8;
      }
      goto L_089B9F74;
    }
L_089B9F74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-11));
      if (branch_taken) {
          goto L_089B9FD8;
      }
      goto L_089B9F80;
    }
L_089B9F80:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089B9FE0;
      }
      goto L_089B9F8C;
    }
L_089B9F8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089B9FE0;
      }
      goto L_089B9F98;
    }
L_089B9F98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9FC0u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9FC0u) goto L_089B9FC0;
    return;
L_089B9FC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(52));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9FD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[3] = (2215u << 16u);
    goto L_089B9FE0;
L_089B9FE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089BA000u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0437(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0437_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_437(Runtime &runtime) {
    runtime.register_generated_unit(437u, 0x089B9000u, 4096u, &recomp_unit_0437, &recomp_unit_0437_entry);
    runtime.register_function(0x089B9000u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9010u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9038u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9048u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9070u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9080u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B90A8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B90B8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B90E8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9100u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9130u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B914Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9174u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9184u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B91ACu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B91BCu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B91E4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B91F4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B921Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B922Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9254u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9264u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B928Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B929Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B92C4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B92D4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B92FCu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B930Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9334u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9344u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B936Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B937Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B93A4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B93B4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B93DCu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B93ECu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9414u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9424u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B944Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B945Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9484u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9494u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B94BCu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B94CCu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B94F4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9504u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B952Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B953Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9564u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9574u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B959Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B95ACu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B95B4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9664u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B966Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9670u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9680u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9684u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B96ACu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B96D4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B96DCu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B96E8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B96F0u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B96F4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B96F8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B96FCu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9724u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B974Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9754u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B975Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9774u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9788u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9790u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B979Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B97B0u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B97D0u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B97D8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B97F0u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9828u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9830u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9838u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B984Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9864u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9870u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9898u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B98A8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B98D8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B98E8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9918u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9928u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B994Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B995Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9984u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9994u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B99BCu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B99CCu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B99F4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9A04u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9A2Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9A3Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9A64u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9A74u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9A9Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9AACu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9AD4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9AE4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9B08u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9B18u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9B40u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9B50u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9B58u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9B84u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9B98u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9BA8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9BB8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9BC4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9BD0u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9BE8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9C10u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9C1Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9C48u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9C58u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9C78u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9C90u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9CA4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9CACu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9CD4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9CECu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9D00u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9D24u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9D3Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9D64u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9D74u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9D9Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9DACu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9DD4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9DE4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9E0Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9E1Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9E44u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9E54u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9E84u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9E9Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9EA4u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9ED8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9EE8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9EECu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9F08u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9F30u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9F40u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9F6Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9F74u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9F80u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9F8Cu, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9F98u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9FC0u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9FD8u, &recomp_unit_0437, "recomp_unit_0437");
    runtime.register_function(0x089B9FE0u, &recomp_unit_0437, "recomp_unit_0437");
}
} // namespace psprecomp
