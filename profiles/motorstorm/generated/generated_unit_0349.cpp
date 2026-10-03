#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0349[1022] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 49, 0, 0, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 71, 0, 72, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 81, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0,
    0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 129, 0, 130,
    0, 0, 131, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0,
    150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 159, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0, 177, 0, 178,
    0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 207,
};
void recomp_unit_0349_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08961000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0349[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08961000;
    case 2u: goto L_08961018;
    case 3u: goto L_0896102C;
    case 4u: goto L_08961044;
    case 5u: goto L_08961068;
    case 6u: goto L_08961074;
    case 7u: goto L_0896109C;
    case 8u: goto L_089610BC;
    case 9u: goto L_089610C4;
    case 10u: goto L_089610E8;
    case 11u: goto L_089610F0;
    case 12u: goto L_08961118;
    case 13u: goto L_08961130;
    case 14u: goto L_08961158;
    case 15u: goto L_08961174;
    case 16u: goto L_0896117C;
    case 17u: goto L_089611A0;
    case 18u: goto L_089611A8;
    case 19u: goto L_089611AC;
    case 20u: goto L_089611D0;
    case 21u: goto L_089611E8;
    case 22u: goto L_08961218;
    case 23u: goto L_08961234;
    case 24u: goto L_0896123C;
    case 25u: goto L_08961264;
    case 26u: goto L_0896126C;
    case 27u: goto L_08961270;
    case 28u: goto L_08961298;
    case 29u: goto L_089612B4;
    case 30u: goto L_089612CC;
    case 31u: goto L_089612D8;
    case 32u: goto L_089612F8;
    case 33u: goto L_08961300;
    case 34u: goto L_0896131C;
    case 35u: goto L_08961328;
    case 36u: goto L_08961358;
    case 37u: goto L_08961374;
    case 38u: goto L_0896137C;
    case 39u: goto L_089613A4;
    case 40u: goto L_089613AC;
    case 41u: goto L_089613B0;
    case 42u: goto L_089613D8;
    case 43u: goto L_089613F4;
    case 44u: goto L_08961410;
    case 45u: goto L_08961434;
    case 46u: goto L_0896143C;
    case 47u: goto L_08961460;
    case 48u: goto L_08961468;
    case 49u: goto L_0896146C;
    case 50u: goto L_0896148C;
    case 51u: goto L_0896149C;
    case 52u: goto L_089614C8;
    case 53u: goto L_089614EC;
    case 54u: goto L_089614F4;
    case 55u: goto L_08961520;
    case 56u: goto L_08961528;
    case 57u: goto L_0896152C;
    case 58u: goto L_08961554;
    case 59u: goto L_0896156C;
    case 60u: goto L_08961594;
    case 61u: goto L_089615B0;
    case 62u: goto L_089615B8;
    case 63u: goto L_089615DC;
    case 64u: goto L_089615E4;
    case 65u: goto L_089615E8;
    case 66u: goto L_0896160C;
    case 67u: goto L_08961624;
    case 68u: goto L_0896164C;
    case 69u: goto L_08961668;
    case 70u: goto L_08961670;
    case 71u: goto L_08961694;
    case 72u: goto L_0896169C;
    case 73u: goto L_089616A0;
    case 74u: goto L_089616C4;
    case 75u: goto L_089616DC;
    case 76u: goto L_08961710;
    case 77u: goto L_08961734;
    case 78u: goto L_0896173C;
    case 79u: goto L_0896176C;
    case 80u: goto L_08961774;
    case 81u: goto L_08961778;
    case 82u: goto L_089617A4;
    case 83u: goto L_089617C0;
    case 84u: goto L_089617E4;
    case 85u: goto L_089617F0;
    case 86u: goto L_08961808;
    case 87u: goto L_0896183C;
    case 88u: goto L_08961844;
    case 89u: goto L_08961854;
    case 90u: goto L_0896185C;
    case 91u: goto L_0896186C;
    case 92u: goto L_08961874;
    case 93u: goto L_08961884;
    case 94u: goto L_0896188C;
    case 95u: goto L_08961894;
    case 96u: goto L_089618BC;
    case 97u: goto L_089618D0;
    case 98u: goto L_089618DC;
    case 99u: goto L_08961904;
    case 100u: goto L_08961918;
    case 101u: goto L_08961924;
    case 102u: goto L_0896192C;
    case 103u: goto L_08961934;
    case 104u: goto L_0896193C;
    case 105u: goto L_0896195C;
    case 106u: goto L_08961978;
    case 107u: goto L_08961984;
    case 108u: goto L_089619A0;
    case 109u: goto L_089619AC;
    case 110u: goto L_089619BC;
    case 111u: goto L_089619C4;
    case 112u: goto L_089619D4;
    case 113u: goto L_089619DC;
    case 114u: goto L_089619E4;
    case 115u: goto L_089619F8;
    case 116u: goto L_08961A08;
    case 117u: goto L_08961A30;
    case 118u: goto L_08961A44;
    case 119u: goto L_08961A54;
    case 120u: goto L_08961A64;
    case 121u: goto L_08961A6C;
    case 122u: goto L_08961A7C;
    case 123u: goto L_08961AA4;
    case 124u: goto L_08961AB8;
    case 125u: goto L_08961AC8;
    case 126u: goto L_08961AD8;
    case 127u: goto L_08961AE0;
    case 128u: goto L_08961AE8;
    case 129u: goto L_08961AF4;
    case 130u: goto L_08961AFC;
    case 131u: goto L_08961B08;
    case 132u: goto L_08961B0C;
    case 133u: goto L_08961B28;
    case 134u: goto L_08961B34;
    case 135u: goto L_08961B38;
    case 136u: goto L_08961B54;
    case 137u: goto L_08961B78;
    case 138u: goto L_08961B94;
    case 139u: goto L_08961B9C;
    case 140u: goto L_08961BB4;
    case 141u: goto L_08961BD0;
    case 142u: goto L_08961BF0;
    case 143u: goto L_08961BFC;
    case 144u: goto L_08961C20;
    case 145u: goto L_08961C40;
    case 146u: goto L_08961C54;
    case 147u: goto L_08961C5C;
    case 148u: goto L_08961C64;
    case 149u: goto L_08961C6C;
    case 150u: goto L_08961C80;
    case 151u: goto L_08961C8C;
    case 152u: goto L_08961C98;
    case 153u: goto L_08961CA8;
    case 154u: goto L_08961CB0;
    case 155u: goto L_08961CC4;
    case 156u: goto L_08961CDC;
    case 157u: goto L_08961CE4;
    case 158u: goto L_08961CEC;
    case 159u: goto L_08961CF8;
    case 160u: goto L_08961D1C;
    case 161u: goto L_08961D24;
    case 162u: goto L_08961D2C;
    case 163u: goto L_08961D38;
    case 164u: goto L_08961D40;
    case 165u: goto L_08961D50;
    case 166u: goto L_08961D58;
    case 167u: goto L_08961D60;
    case 168u: goto L_08961D6C;
    case 169u: goto L_08961D74;
    case 170u: goto L_08961D80;
    case 171u: goto L_08961D9C;
    case 172u: goto L_08961DC8;
    case 173u: goto L_08961DD0;
    case 174u: goto L_08961DD8;
    case 175u: goto L_08961DE4;
    case 176u: goto L_08961DEC;
    case 177u: goto L_08961DF4;
    case 178u: goto L_08961DFC;
    case 179u: goto L_08961E08;
    case 180u: goto L_08961E10;
    case 181u: goto L_08961E20;
    case 182u: goto L_08961E28;
    case 183u: goto L_08961E44;
    case 184u: goto L_08961E68;
    case 185u: goto L_08961E88;
    case 186u: goto L_08961E90;
    case 187u: goto L_08961E9C;
    case 188u: goto L_08961EA4;
    case 189u: goto L_08961EB0;
    case 190u: goto L_08961EC0;
    case 191u: goto L_08961ED8;
    case 192u: goto L_08961EE4;
    case 193u: goto L_08961F00;
    case 194u: goto L_08961F10;
    case 195u: goto L_08961F24;
    case 196u: goto L_08961F38;
    case 197u: goto L_08961F44;
    case 198u: goto L_08961F50;
    case 199u: goto L_08961F64;
    case 200u: goto L_08961F88;
    case 201u: goto L_08961F90;
    case 202u: goto L_08961FB4;
    case 203u: goto L_08961FC4;
    case 204u: goto L_08961FD4;
    case 205u: goto L_08961FE0;
    case 206u: goto L_08961FEC;
    case 207u: goto L_08961FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08961000:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961018:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896102C:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4560));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961044:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[7] = (2198u << 16u);
    aot_gpr[5] = (0u | 7u);
    aot_gpr[6] = (0u | 48u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30968));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08961068u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(3240));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x08961068u) goto L_08961068;
    return;
L_08961068:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961074:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-27196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089610F0;
      }
      goto L_0896109C;
    }
L_0896109C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089610BCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089610BCu) goto L_089610BC;
    return;
L_089610BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089610F0;
      }
      goto L_089610C4;
    }
L_089610C4:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-27196)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089610E8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089610E8u) goto L_089610E8;
    return;
L_089610E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961118;
      }
      goto L_089610F0;
    }
L_089610F0:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27200)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08961118u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961118u) goto L_08961118;
    return;
L_08961118:
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
L_08961130:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-27196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089611A8;
      }
      goto L_08961158;
    }
L_08961158:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08961174u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961174u) goto L_08961174;
    return;
L_08961174:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089611AC;
      }
      goto L_0896117C;
    }
L_0896117C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-27196)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089611A0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089611A0u) goto L_089611A0;
    return;
L_089611A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089611D0;
      }
      goto L_089611A8;
    }
L_089611A8:
    aot_gpr[4] = (2216u << 16u);
    goto L_089611AC;
L_089611AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27200)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089611D0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089611D0u) goto L_089611D0;
    return;
L_089611D0:
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
L_089611E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-27196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0896126C;
      }
      goto L_08961218;
    }
L_08961218:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08961234u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961234u) goto L_08961234;
    return;
L_08961234:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08961270;
      }
      goto L_0896123C;
    }
L_0896123C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-27196)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08961264u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961264u) goto L_08961264;
    return;
L_08961264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961298;
      }
      goto L_0896126C;
    }
L_0896126C:
    aot_gpr[4] = (2216u << 16u);
    goto L_08961270;
L_08961270:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27200)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08961298u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961298u) goto L_08961298;
    return;
L_08961298:
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
L_089612B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-27196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    if (aot_gpr[6] == 0u) {
    aot_gpr[4] = (2216u << 16u);
        goto L_08961300;
    }
    goto L_089612CC;
L_089612CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08961300;
      }
      goto L_089612D8;
    }
L_089612D8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27196)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089612F8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089612F8u) goto L_089612F8;
    return;
L_089612F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896131C;
      }
      goto L_08961300;
    }
L_08961300:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27200)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896131Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896131Cu) goto L_0896131C;
    return;
L_0896131C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961328:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-27196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089613AC;
      }
      goto L_08961358;
    }
L_08961358:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08961374u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961374u) goto L_08961374;
    return;
L_08961374:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089613B0;
      }
      goto L_0896137C;
    }
L_0896137C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-27196)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089613A4u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089613A4u) goto L_089613A4;
    return;
L_089613A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089613D8;
      }
      goto L_089613AC;
    }
L_089613AC:
    aot_gpr[4] = (2216u << 16u);
    goto L_089613B0;
L_089613B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27200)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089613D8u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089613D8u) goto L_089613D8;
    return;
L_089613D8:
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
L_089613F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08961468;
      }
      goto L_08961410;
    }
L_08961410:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27196)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08961434u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961434u) goto L_08961434;
    return;
L_08961434:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0896146C;
      }
      goto L_0896143C;
    }
L_0896143C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27196)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08961460u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961460u) goto L_08961460;
    return;
L_08961460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896148C;
      }
      goto L_08961468;
    }
L_08961468:
    aot_gpr[4] = (2216u << 16u);
    goto L_0896146C;
L_0896146C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27200)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896148Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896148Cu) goto L_0896148C;
    return;
L_0896148C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896149C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08961528;
      }
      goto L_089614C8;
    }
L_089614C8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27196)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089614ECu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089614ECu) goto L_089614EC;
    return;
L_089614EC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0896152C;
      }
      goto L_089614F4;
    }
L_089614F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27196)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(72));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08961520u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961520u) goto L_08961520;
    return;
L_08961520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961554;
      }
      goto L_08961528;
    }
L_08961528:
    aot_gpr[4] = (2216u << 16u);
    goto L_0896152C;
L_0896152C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27200)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08961554u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961554u) goto L_08961554;
    return;
L_08961554:
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
L_0896156C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-27196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089615E4;
      }
      goto L_08961594;
    }
L_08961594:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089615B0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089615B0u) goto L_089615B0;
    return;
L_089615B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089615E8;
      }
      goto L_089615B8;
    }
L_089615B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-27196)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089615DCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089615DCu) goto L_089615DC;
    return;
L_089615DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896160C;
      }
      goto L_089615E4;
    }
L_089615E4:
    aot_gpr[4] = (2216u << 16u);
    goto L_089615E8;
L_089615E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27200)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(72));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0896160Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896160Cu) goto L_0896160C;
    return;
L_0896160C:
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
L_08961624:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-27196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0896169C;
      }
      goto L_0896164C;
    }
L_0896164C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08961668u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961668u) goto L_08961668;
    return;
L_08961668:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089616A0;
      }
      goto L_08961670;
    }
L_08961670:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-27196)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08961694u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961694u) goto L_08961694;
    return;
L_08961694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089616C4;
      }
      goto L_0896169C;
    }
L_0896169C:
    aot_gpr[4] = (2216u << 16u);
    goto L_089616A0;
L_089616A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27200)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089616C4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089616C4u) goto L_089616C4;
    return;
L_089616C4:
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
L_089616DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08961774;
      }
      goto L_08961710;
    }
L_08961710:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27196)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08961734u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961734u) goto L_08961734;
    return;
L_08961734:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08961778;
      }
      goto L_0896173C;
    }
L_0896173C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27196)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x0896176Cu);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896176Cu) goto L_0896176C;
    return;
L_0896176C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089617A4;
      }
      goto L_08961774;
    }
L_08961774:
    aot_gpr[4] = (2216u << 16u);
    goto L_08961778;
L_08961778:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27200)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x089617A4u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089617A4u) goto L_089617A4;
    return;
L_089617A4:
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
L_089617C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4608));
    aot_gpr[5] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-31040), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089617E4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27192));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089617E4u) goto L_089617E4;
    return;
L_089617E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089617F0:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4704));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961808:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[31]);
    aot_gpr[31] = (0x0896183Cu);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896183Cu) goto L_0896183C;
    return;
L_0896183C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961924;
      }
      goto L_08961844;
    }
L_08961844:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08961854u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22392));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08961854u) goto L_08961854;
    return;
L_08961854:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089618DC;
      }
      goto L_0896185C;
    }
L_0896185C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896186Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22376));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0896186Cu) goto L_0896186C;
    return;
L_0896186C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08961894;
      }
      goto L_08961874;
    }
L_08961874:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08961884u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22360));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08961884u) goto L_08961884;
    return;
L_08961884:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896192C;
      }
      goto L_0896188C;
    }
L_0896188C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089619AC;
      }
      goto L_08961894;
    }
L_08961894:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26984)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[6] + static_cast<std::uint32_t>(-22364));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089618BCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089618BCu) goto L_089618BC;
    return;
L_089618BC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 256u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089618D0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x089618D0u) goto L_089618D0;
    return;
L_089618D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08961B38;
      }
      goto L_089618DC;
    }
L_089618DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26984)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[6] + static_cast<std::uint32_t>(-22380));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(120));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08961904u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961904u) goto L_08961904;
    return;
L_08961904:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 256u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08961918u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08961918u) goto L_08961918;
    return;
L_08961918:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08961B38;
      }
      goto L_08961924;
    }
L_08961924:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961B38;
      }
      goto L_0896192C;
    }
L_0896192C:
    aot_gpr[31] = (0x08961934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x08961934u) goto L_08961934;
    return;
L_08961934:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08961984;
      }
      goto L_0896193C;
    }
L_0896193C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26984)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896195Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896195Cu) goto L_0896195C;
    return;
L_0896195C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 256u);
    aot_gpr[31] = (0x08961978u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-22380));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08961978u) goto L_08961978;
    return;
L_08961978:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08961B38;
      }
      goto L_08961984;
    }
L_08961984:
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(264)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 256u);
    aot_gpr[31] = (0x089619A0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-22380));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x089619A0u) goto L_089619A0;
    return;
L_089619A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08961B38;
      }
      goto L_089619AC;
    }
L_089619AC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089619BCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22344));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089619BCu) goto L_089619BC;
    return;
L_089619BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089619E4;
      }
      goto L_089619C4;
    }
L_089619C4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089619D4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22320));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089619D4u) goto L_089619D4;
    return;
L_089619D4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089619F8;
      }
      goto L_089619DC;
    }
L_089619DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961A54;
      }
      goto L_089619E4;
    }
L_089619E4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-22324));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08961B38;
      }
      goto L_089619F8;
    }
L_089619F8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27176)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08961A44;
      }
      goto L_08961A08;
    }
L_08961A08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27176)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(-22380));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08961A30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961A30u) goto L_08961A30;
    return;
L_08961A30:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 256u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08961A44u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08961A44u) goto L_08961A44;
    return;
L_08961A44:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08961B38;
      }
      goto L_08961A54;
    }
L_08961A54:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08961A64u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22308));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08961A64u) goto L_08961A64;
    return;
L_08961A64:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961AC8;
      }
      goto L_08961A6C;
    }
L_08961A6C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27176)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08961AB8;
      }
      goto L_08961A7C;
    }
L_08961A7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27176)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(-22380));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08961AA4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961AA4u) goto L_08961AA4;
    return;
L_08961AA4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 256u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08961AB8u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08961AB8u) goto L_08961AB8;
    return;
L_08961AB8:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08961B38;
      }
      goto L_08961AC8;
    }
L_08961AC8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08961AD8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22300));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08961AD8u) goto L_08961AD8;
    return;
L_08961AD8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961B34;
      }
      goto L_08961AE0;
    }
L_08961AE0:
    aot_gpr[31] = (0x08961AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x08961AE8u) goto L_08961AE8;
    return;
L_08961AE8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08961B0C;
      }
      goto L_08961AF4;
    }
L_08961AF4:
    aot_gpr[31] = (0x08961AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x08961AFCu) goto L_08961AFC;
    return;
L_08961AFC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961B0C;
      }
      goto L_08961B08;
    }
L_08961B08:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08961B0C;
L_08961B0C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 256u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08961B28u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-22380));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08961B28u) goto L_08961B28;
    return;
L_08961B28:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08961B38;
      }
      goto L_08961B34;
    }
L_08961B34:
    aot_gpr[2] = (0u | 0u);
    goto L_08961B38;
L_08961B38:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961B54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26984)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08961B94;
      }
      goto L_08961B78;
    }
L_08961B78:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08961B94u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961B94u) goto L_08961B94;
    return;
L_08961B94:
    aot_gpr[31] = (0x08961B9Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 126u, 0x089FB928u>(ctx, &aot_mem) && ctx.pc == 0x08961B9Cu) goto L_08961B9C;
    return;
L_08961B9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961BB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26984)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961BF0;
      }
      goto L_08961BD0;
    }
L_08961BD0:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(104));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08961BF0u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961BF0u) goto L_08961BF0;
    return;
L_08961BF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961BFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26984)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961C40;
      }
      goto L_08961C20;
    }
L_08961C20:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(112));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08961C40u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961C40u) goto L_08961C40;
    return;
L_08961C40:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961C54:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961C5C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961C64:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(264), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961C6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08961C80u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30632));
    goto L_089617F0;
L_08961C80:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08961C8Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27172));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08961C8Cu) goto L_08961C8C;
    return;
L_08961C8C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961C98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08961CEC;
      }
      goto L_08961CA8;
    }
L_08961CA8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961CEC;
      }
      goto L_08961CB0;
    }
L_08961CB0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961CE4;
      }
      goto L_08961CC4;
    }
L_08961CC4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08961CDCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961CDCu) goto L_08961CDC;
    return;
L_08961CDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961CEC;
      }
      goto L_08961CE4;
    }
L_08961CE4:
    aot_gpr[31] = (0x08961CECu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08961CECu) goto L_08961CEC;
    return;
L_08961CEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961CF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (0u | 1u);
    goto L_08961D1C;
L_08961D1C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961D50;
      }
      goto L_08961D24;
    }
L_08961D24:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961D50;
      }
      goto L_08961D2C;
    }
L_08961D2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1076)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961D40;
      }
      goto L_08961D38;
    }
L_08961D38:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1076), aot_gpr[16]);
    aot_gpr[17] = (0u | 1u);
    goto L_08961D40;
L_08961D40:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
      if (branch_taken) {
          goto L_08961D1C;
      }
      goto L_08961D50;
    }
L_08961D50:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961D80;
      }
      goto L_08961D58;
    }
L_08961D58:
    aot_gpr[31] = (0x08961D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08961D60u) goto L_08961D60;
    return;
L_08961D60:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961D80;
      }
      goto L_08961D6C;
    }
L_08961D6C:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08961D74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961D74u) goto L_08961D74;
    return;
L_08961D74:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08961D80u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08961D80u) goto L_08961D80;
    return;
L_08961D80:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08961D9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08961DC8u);
    aot_gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08961DC8u) goto L_08961DC8;
    return;
L_08961DC8:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08961DD0u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961DD0u) goto L_08961DD0;
    return;
L_08961DD0:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08961DE4;
      }
      goto L_08961DD8;
    }
L_08961DD8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08961DE4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08961DE4u) goto L_08961DE4;
    return;
L_08961DE4:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    goto L_08961DEC;
L_08961DEC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961E20;
      }
      goto L_08961DF4;
    }
L_08961DF4:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961E20;
      }
      goto L_08961DFC;
    }
L_08961DFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1076)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08961E10;
      }
      goto L_08961E08;
    }
L_08961E08:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1076), 0u);
    aot_gpr[19] = (0u | 1u);
    goto L_08961E10;
L_08961E10:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
      if (branch_taken) {
          goto L_08961DEC;
      }
      goto L_08961E20;
    }
L_08961E20:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961E44;
      }
      goto L_08961E28;
    }
L_08961E28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08961E44u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961E44u) goto L_08961E44;
    return;
L_08961E44:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08961E68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08961E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08961E88u) goto L_08961E88;
    return;
L_08961E88:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (0u | 0u);
    goto L_08961E90;
L_08961E90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1076)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961EB0;
      }
      goto L_08961E9C;
    }
L_08961E9C:
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08961EA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961EA4u) goto L_08961EA4;
    return;
L_08961EA4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08961EB0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x08961EB0u) goto L_08961EB0;
    return;
L_08961EB0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08961E90;
      }
      goto L_08961EC0;
    }
L_08961EC0:
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
L_08961ED8:
    aot_gpr[2] = (2220u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-30360));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961EE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08961F00u);
    aot_gpr[6] = (0u | 1076u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08961F00u) goto L_08961F00;
    return;
L_08961F00:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1076));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08961F10u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08961F10u) goto L_08961F10;
    return;
L_08961F10:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961F24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08961F38u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30360));
    goto L_08961EE4;
L_08961F38:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08961F44u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27160));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08961F44u) goto L_08961F44;
    return;
L_08961F44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961F50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08961F64u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 286u, 0x089FDF00u>(ctx, &aot_mem) && ctx.pc == 0x08961F64u) goto L_08961F64;
    return;
L_08961F64:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4752));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961F88:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961F90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08961FB4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 295u, 0x089FDFD0u>(ctx, &aot_mem) && ctx.pc == 0x08961FB4u) goto L_08961FB4;
    return;
L_08961FB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 20600u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08961FE0;
      }
      goto L_08961FC4;
    }
L_08961FC4:
    aot_gpr[5] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08961FD4u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-30632));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 295u, 0x089FDFD0u>(ctx, &aot_mem) && ctx.pc == 0x08961FD4u) goto L_08961FD4;
    return;
L_08961FD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08961FE0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08961C64;
L_08961FE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 2u, 0x08962004u>(ctx, &aot_mem); return;
      }
      goto L_08961FEC;
    }
L_08961FEC:
    aot_gpr[31] = (0x08961FF4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 295u, 0x089FDFD0u>(ctx, &aot_mem) && ctx.pc == 0x08961FF4u) goto L_08961FF4;
    return;
L_08961FF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08962000u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0349(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0349_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_349(Runtime &runtime) {
    runtime.register_generated_unit(349u, 0x08961000u, 4096u, &recomp_unit_0349, &recomp_unit_0349_entry);
    runtime.register_function(0x08961000u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961018u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896102Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961044u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961068u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961074u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896109Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089610BCu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089610C4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089610E8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089610F0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961118u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961130u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961158u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961174u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896117Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089611A0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089611A8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089611ACu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089611D0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089611E8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961218u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961234u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896123Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961264u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896126Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961270u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961298u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089612B4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089612CCu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089612D8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089612F8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961300u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896131Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961328u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961358u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961374u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896137Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089613A4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089613ACu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089613B0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089613D8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089613F4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961410u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961434u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896143Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961460u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961468u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896146Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896148Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896149Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089614C8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089614ECu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089614F4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961520u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961528u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896152Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961554u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896156Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961594u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089615B0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089615B8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089615DCu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089615E4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089615E8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896160Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961624u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896164Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961668u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961670u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961694u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896169Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089616A0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089616C4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089616DCu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961710u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961734u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896173Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896176Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961774u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961778u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089617A4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089617C0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089617E4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089617F0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961808u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896183Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961844u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961854u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896185Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896186Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961874u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961884u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896188Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961894u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089618BCu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089618D0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089618DCu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961904u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961918u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961924u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896192Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961934u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896193Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x0896195Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961978u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961984u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089619A0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089619ACu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089619BCu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089619C4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089619D4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089619DCu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089619E4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x089619F8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961A08u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961A30u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961A44u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961A54u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961A64u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961A6Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961A7Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961AA4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961AB8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961AC8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961AD8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961AE0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961AE8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961AF4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961AFCu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961B08u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961B0Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961B28u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961B34u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961B38u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961B54u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961B78u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961B94u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961B9Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961BB4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961BD0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961BF0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961BFCu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961C20u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961C40u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961C54u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961C5Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961C64u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961C6Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961C80u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961C8Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961C98u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961CA8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961CB0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961CC4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961CDCu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961CE4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961CECu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961CF8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961D1Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961D24u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961D2Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961D38u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961D40u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961D50u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961D58u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961D60u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961D6Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961D74u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961D80u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961D9Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961DC8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961DD0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961DD8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961DE4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961DECu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961DF4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961DFCu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961E08u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961E10u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961E20u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961E28u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961E44u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961E68u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961E88u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961E90u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961E9Cu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961EA4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961EB0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961EC0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961ED8u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961EE4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961F00u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961F10u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961F24u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961F38u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961F44u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961F50u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961F64u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961F88u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961F90u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961FB4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961FC4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961FD4u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961FE0u, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961FECu, &recomp_unit_0349, "recomp_unit_0349");
    runtime.register_function(0x08961FF4u, &recomp_unit_0349, "recomp_unit_0349");
}
} // namespace psprecomp
