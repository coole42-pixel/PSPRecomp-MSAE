#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0436[1015] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146,
};
void recomp_unit_0436_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089B8000u;
        entry_id = (entry_delta < 4060u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0436[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B8000;
    case 2u: goto L_089B8020;
    case 3u: goto L_089B8030;
    case 4u: goto L_089B8058;
    case 5u: goto L_089B8068;
    case 6u: goto L_089B8090;
    case 7u: goto L_089B80A0;
    case 8u: goto L_089B80C8;
    case 9u: goto L_089B80D8;
    case 10u: goto L_089B8100;
    case 11u: goto L_089B8110;
    case 12u: goto L_089B8118;
    case 13u: goto L_089B8140;
    case 14u: goto L_089B8150;
    case 15u: goto L_089B8178;
    case 16u: goto L_089B8188;
    case 17u: goto L_089B81B0;
    case 18u: goto L_089B81C0;
    case 19u: goto L_089B81E8;
    case 20u: goto L_089B81F8;
    case 21u: goto L_089B8220;
    case 22u: goto L_089B8230;
    case 23u: goto L_089B8258;
    case 24u: goto L_089B8268;
    case 25u: goto L_089B8290;
    case 26u: goto L_089B82A0;
    case 27u: goto L_089B82C8;
    case 28u: goto L_089B82D8;
    case 29u: goto L_089B8300;
    case 30u: goto L_089B8310;
    case 31u: goto L_089B8338;
    case 32u: goto L_089B8348;
    case 33u: goto L_089B8350;
    case 34u: goto L_089B8380;
    case 35u: goto L_089B8398;
    case 36u: goto L_089B83C8;
    case 37u: goto L_089B83E4;
    case 38u: goto L_089B83EC;
    case 39u: goto L_089B841C;
    case 40u: goto L_089B8434;
    case 41u: goto L_089B8464;
    case 42u: goto L_089B8480;
    case 43u: goto L_089B84A8;
    case 44u: goto L_089B84B8;
    case 45u: goto L_089B84E0;
    case 46u: goto L_089B84F0;
    case 47u: goto L_089B8518;
    case 48u: goto L_089B8528;
    case 49u: goto L_089B8558;
    case 50u: goto L_089B8570;
    case 51u: goto L_089B85A0;
    case 52u: goto L_089B85BC;
    case 53u: goto L_089B85E4;
    case 54u: goto L_089B85F4;
    case 55u: goto L_089B8624;
    case 56u: goto L_089B863C;
    case 57u: goto L_089B866C;
    case 58u: goto L_089B8688;
    case 59u: goto L_089B8690;
    case 60u: goto L_089B86B8;
    case 61u: goto L_089B86C8;
    case 62u: goto L_089B86F0;
    case 63u: goto L_089B8700;
    case 64u: goto L_089B8728;
    case 65u: goto L_089B8738;
    case 66u: goto L_089B8760;
    case 67u: goto L_089B8770;
    case 68u: goto L_089B8798;
    case 69u: goto L_089B87A8;
    case 70u: goto L_089B87D0;
    case 71u: goto L_089B87E0;
    case 72u: goto L_089B87E8;
    case 73u: goto L_089B8810;
    case 74u: goto L_089B8820;
    case 75u: goto L_089B8828;
    case 76u: goto L_089B8850;
    case 77u: goto L_089B8860;
    case 78u: goto L_089B8888;
    case 79u: goto L_089B8898;
    case 80u: goto L_089B88A0;
    case 81u: goto L_089B88C8;
    case 82u: goto L_089B88D8;
    case 83u: goto L_089B8900;
    case 84u: goto L_089B8910;
    case 85u: goto L_089B8938;
    case 86u: goto L_089B8948;
    case 87u: goto L_089B8970;
    case 88u: goto L_089B8980;
    case 89u: goto L_089B89A8;
    case 90u: goto L_089B89B8;
    case 91u: goto L_089B89E0;
    case 92u: goto L_089B89F0;
    case 93u: goto L_089B8A18;
    case 94u: goto L_089B8A28;
    case 95u: goto L_089B8A50;
    case 96u: goto L_089B8A60;
    case 97u: goto L_089B8A88;
    case 98u: goto L_089B8A98;
    case 99u: goto L_089B8AC0;
    case 100u: goto L_089B8AD0;
    case 101u: goto L_089B8AF8;
    case 102u: goto L_089B8B08;
    case 103u: goto L_089B8B30;
    case 104u: goto L_089B8B40;
    case 105u: goto L_089B8B68;
    case 106u: goto L_089B8B78;
    case 107u: goto L_089B8BA0;
    case 108u: goto L_089B8BB0;
    case 109u: goto L_089B8BD8;
    case 110u: goto L_089B8BE8;
    case 111u: goto L_089B8C10;
    case 112u: goto L_089B8C20;
    case 113u: goto L_089B8C48;
    case 114u: goto L_089B8C58;
    case 115u: goto L_089B8C80;
    case 116u: goto L_089B8C90;
    case 117u: goto L_089B8CB8;
    case 118u: goto L_089B8CC8;
    case 119u: goto L_089B8CF0;
    case 120u: goto L_089B8D00;
    case 121u: goto L_089B8D28;
    case 122u: goto L_089B8D38;
    case 123u: goto L_089B8D60;
    case 124u: goto L_089B8D70;
    case 125u: goto L_089B8D98;
    case 126u: goto L_089B8DA8;
    case 127u: goto L_089B8DD0;
    case 128u: goto L_089B8DE0;
    case 129u: goto L_089B8E08;
    case 130u: goto L_089B8E18;
    case 131u: goto L_089B8E40;
    case 132u: goto L_089B8E50;
    case 133u: goto L_089B8E78;
    case 134u: goto L_089B8E88;
    case 135u: goto L_089B8EB0;
    case 136u: goto L_089B8EC0;
    case 137u: goto L_089B8EE8;
    case 138u: goto L_089B8EF8;
    case 139u: goto L_089B8F20;
    case 140u: goto L_089B8F30;
    case 141u: goto L_089B8F58;
    case 142u: goto L_089B8F68;
    case 143u: goto L_089B8F90;
    case 144u: goto L_089B8FA0;
    case 145u: goto L_089B8FC8;
    case 146u: goto L_089B8FD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B8000:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8020u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8020u) goto L_089B8020;
    return;
L_089B8020:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8030:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8058u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8058u) goto L_089B8058;
    return;
L_089B8058:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8068:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8090u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8090u) goto L_089B8090;
    return;
L_089B8090:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(188));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B80A0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B80C8u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B80C8u) goto L_089B80C8;
    return;
L_089B80C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(184));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B80D8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8100u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8100u) goto L_089B8100;
    return;
L_089B8100:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(188));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8110:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(60));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8118:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(108))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8140u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8140u) goto L_089B8140;
    return;
L_089B8140:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(112));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8150:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(108))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8178u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8178u) goto L_089B8178;
    return;
L_089B8178:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(112));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8188:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(100))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B81B0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B81B0u) goto L_089B81B0;
    return;
L_089B81B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(104));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B81C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(328))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B81E8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B81E8u) goto L_089B81E8;
    return;
L_089B81E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(332));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B81F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(324))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8220u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8220u) goto L_089B8220;
    return;
L_089B8220:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(328));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8230:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8258u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8258u) goto L_089B8258;
    return;
L_089B8258:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(328));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8268:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8290u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8290u) goto L_089B8290;
    return;
L_089B8290:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(416));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B82A0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B82C8u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B82C8u) goto L_089B82C8;
    return;
L_089B82C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B82D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(140))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8300u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8300u) goto L_089B8300;
    return;
L_089B8300:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(144));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8310:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(108))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8338u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8338u) goto L_089B8338;
    return;
L_089B8338:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(112));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8348:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(56));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8350:
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
    aot_gpr[31] = (0x089B8380u);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089B8380u) goto L_089B8380;
    return;
L_089B8380:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B8398u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089B8398u) goto L_089B8398;
    return;
L_089B8398:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B83C8u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B83C8u) goto L_089B83C8;
    return;
L_089B83C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(52));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B83E4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(56));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B83EC:
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
    aot_gpr[31] = (0x089B841Cu);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089B841Cu) goto L_089B841C;
    return;
L_089B841C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B8434u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089B8434u) goto L_089B8434;
    return;
L_089B8434:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(124)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8464u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8464u) goto L_089B8464;
    return;
L_089B8464:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(40));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8480:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(68))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B84A8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B84A8u) goto L_089B84A8;
    return;
L_089B84A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(72));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B84B8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B84E0u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B84E0u) goto L_089B84E0;
    return;
L_089B84E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B84F0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8518u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8518u) goto L_089B8518;
    return;
L_089B8518:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8528:
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
    aot_gpr[31] = (0x089B8558u);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089B8558u) goto L_089B8558;
    return;
L_089B8558:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B8570u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089B8570u) goto L_089B8570;
    return;
L_089B8570:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B85A0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B85A0u) goto L_089B85A0;
    return;
L_089B85A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B85BC:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B85E4u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B85E4u) goto L_089B85E4;
    return;
L_089B85E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B85F4:
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
    aot_gpr[31] = (0x089B8624u);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089B8624u) goto L_089B8624;
    return;
L_089B8624:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B863Cu);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 31u, 0x089AD2A0u>(ctx, &aot_mem) && ctx.pc == 0x089B863Cu) goto L_089B863C;
    return;
L_089B863C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B866Cu);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B866Cu) goto L_089B866C;
    return;
L_089B866C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8688:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(56));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8690:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B86B8u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B86B8u) goto L_089B86B8;
    return;
L_089B86B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B86C8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B86F0u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B86F0u) goto L_089B86F0;
    return;
L_089B86F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8700:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(68))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8728u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8728u) goto L_089B8728;
    return;
L_089B8728:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(72));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8738:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8760u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8760u) goto L_089B8760;
    return;
L_089B8760:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8770:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8798u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8798u) goto L_089B8798;
    return;
L_089B8798:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B87A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(284))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B87D0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B87D0u) goto L_089B87D0;
    return;
L_089B87D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(288));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B87E0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(24));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B87E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1032))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8810u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8810u) goto L_089B8810;
    return;
L_089B8810:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1036));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8820:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8828:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8850u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8850u) goto L_089B8850;
    return;
L_089B8850:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8860:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8888u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8888u) goto L_089B8888;
    return;
L_089B8888:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8898:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(44));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B88A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(48))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B88C8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B88C8u) goto L_089B88C8;
    return;
L_089B88C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(52));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B88D8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8900u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8900u) goto L_089B8900;
    return;
L_089B8900:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8910:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8938u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8938u) goto L_089B8938;
    return;
L_089B8938:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8948:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8970u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8970u) goto L_089B8970;
    return;
L_089B8970:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(360));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8980:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B89A8u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B89A8u) goto L_089B89A8;
    return;
L_089B89A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(328));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B89B8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B89E0u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B89E0u) goto L_089B89E0;
    return;
L_089B89E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B89F0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8A18u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8A18u) goto L_089B8A18;
    return;
L_089B8A18:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8A28:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8A50u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8A50u) goto L_089B8A50;
    return;
L_089B8A50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8A60:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8A88u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8A88u) goto L_089B8A88;
    return;
L_089B8A88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8A98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(676))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8AC0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8AC0u) goto L_089B8AC0;
    return;
L_089B8AC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(680));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8AD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(672))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8AF8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8AF8u) goto L_089B8AF8;
    return;
L_089B8AF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(676));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8B08:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8B30u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8B30u) goto L_089B8B30;
    return;
L_089B8B30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8B40:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8B68u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8B68u) goto L_089B8B68;
    return;
L_089B8B68:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8B78:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8BA0u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8BA0u) goto L_089B8BA0;
    return;
L_089B8BA0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8BB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(636))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8BD8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8BD8u) goto L_089B8BD8;
    return;
L_089B8BD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(640));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8BE8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8C10u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8C10u) goto L_089B8C10;
    return;
L_089B8C10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8C20:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8C48u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8C48u) goto L_089B8C48;
    return;
L_089B8C48:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8C58:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8C80u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8C80u) goto L_089B8C80;
    return;
L_089B8C80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8C90:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8CB8u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8CB8u) goto L_089B8CB8;
    return;
L_089B8CB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8CC8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8CF0u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8CF0u) goto L_089B8CF0;
    return;
L_089B8CF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8D00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(364))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8D28u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8D28u) goto L_089B8D28;
    return;
L_089B8D28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(368));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8D38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1244))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8D60u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8D60u) goto L_089B8D60;
    return;
L_089B8D60:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1252));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8D70:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8D98u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8D98u) goto L_089B8D98;
    return;
L_089B8D98:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8DA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(36))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8DD0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8DD0u) goto L_089B8DD0;
    return;
L_089B8DD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(40));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8DE0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8E08u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8E08u) goto L_089B8E08;
    return;
L_089B8E08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8E18:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8E40u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8E40u) goto L_089B8E40;
    return;
L_089B8E40:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8E50:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(44));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8E78u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8E78u) goto L_089B8E78;
    return;
L_089B8E78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8E88:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8EB0u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8EB0u) goto L_089B8EB0;
    return;
L_089B8EB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(77));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8EC0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8EE8u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8EE8u) goto L_089B8EE8;
    return;
L_089B8EE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(40));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8EF8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8F20u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8F20u) goto L_089B8F20;
    return;
L_089B8F20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8F30:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8F58u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8F58u) goto L_089B8F58;
    return;
L_089B8F58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8F68:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(28));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8F90u);
    aot_gpr[9] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8F90u) goto L_089B8F90;
    return;
L_089B8F90:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8FA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(96))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B8FC8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(92));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8FC8u) goto L_089B8FC8;
    return;
L_089B8FC8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8FD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(64))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15672)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B9000u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(60));
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0436(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0436_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_436(Runtime &runtime) {
    runtime.register_generated_unit(436u, 0x089B8000u, 4096u, &recomp_unit_0436, &recomp_unit_0436_entry);
    runtime.register_function(0x089B8000u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8020u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8030u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8058u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8068u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8090u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B80A0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B80C8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B80D8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8100u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8110u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8118u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8140u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8150u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8178u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8188u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B81B0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B81C0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B81E8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B81F8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8220u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8230u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8258u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8268u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8290u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B82A0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B82C8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B82D8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8300u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8310u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8338u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8348u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8350u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8380u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8398u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B83C8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B83E4u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B83ECu, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B841Cu, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8434u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8464u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8480u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B84A8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B84B8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B84E0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B84F0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8518u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8528u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8558u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8570u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B85A0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B85BCu, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B85E4u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B85F4u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8624u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B863Cu, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B866Cu, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8688u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8690u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B86B8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B86C8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B86F0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8700u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8728u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8738u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8760u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8770u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8798u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B87A8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B87D0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B87E0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B87E8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8810u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8820u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8828u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8850u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8860u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8888u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8898u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B88A0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B88C8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B88D8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8900u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8910u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8938u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8948u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8970u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8980u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B89A8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B89B8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B89E0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B89F0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8A18u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8A28u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8A50u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8A60u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8A88u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8A98u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8AC0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8AD0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8AF8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8B08u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8B30u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8B40u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8B68u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8B78u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8BA0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8BB0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8BD8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8BE8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8C10u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8C20u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8C48u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8C58u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8C80u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8C90u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8CB8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8CC8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8CF0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8D00u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8D28u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8D38u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8D60u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8D70u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8D98u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8DA8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8DD0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8DE0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8E08u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8E18u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8E40u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8E50u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8E78u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8E88u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8EB0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8EC0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8EE8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8EF8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8F20u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8F30u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8F58u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8F68u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8F90u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8FA0u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8FC8u, &recomp_unit_0436, "recomp_unit_0436");
    runtime.register_function(0x089B8FD8u, &recomp_unit_0436, "recomp_unit_0436");
}
} // namespace psprecomp
