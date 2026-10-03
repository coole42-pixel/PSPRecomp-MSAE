#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0096[1021] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14,
    15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 23, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0,
    33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66, 0, 67,
    0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 74,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 80, 0, 0, 81, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0,
    110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 118, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126,
    0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 137, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 141, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 166, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171,
};
void recomp_unit_0096_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08864004u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0096[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08864004;
    case 2u: goto L_0886400C;
    case 3u: goto L_08864020;
    case 4u: goto L_08864050;
    case 5u: goto L_08864070;
    case 6u: goto L_08864088;
    case 7u: goto L_08864098;
    case 8u: goto L_088640A4;
    case 9u: goto L_088640AC;
    case 10u: goto L_088640C0;
    case 11u: goto L_088640C8;
    case 12u: goto L_088640D4;
    case 13u: goto L_088640F0;
    case 14u: goto L_08864100;
    case 15u: goto L_08864104;
    case 16u: goto L_0886410C;
    case 17u: goto L_08864114;
    case 18u: goto L_0886411C;
    case 19u: goto L_08864130;
    case 20u: goto L_08864180;
    case 21u: goto L_088641AC;
    case 22u: goto L_0886421C;
    case 23u: goto L_08864224;
    case 24u: goto L_08864228;
    case 25u: goto L_08864248;
    case 26u: goto L_08864258;
    case 27u: goto L_08864270;
    case 28u: goto L_088642AC;
    case 29u: goto L_088642C0;
    case 30u: goto L_088642CC;
    case 31u: goto L_088642E0;
    case 32u: goto L_088642F4;
    case 33u: goto L_08864304;
    case 34u: goto L_08864310;
    case 35u: goto L_08864324;
    case 36u: goto L_08864330;
    case 37u: goto L_08864344;
    case 38u: goto L_08864358;
    case 39u: goto L_08864368;
    case 40u: goto L_08864374;
    case 41u: goto L_0886438C;
    case 42u: goto L_0886439C;
    case 43u: goto L_088643A8;
    case 44u: goto L_088643B4;
    case 45u: goto L_088643C4;
    case 46u: goto L_088643CC;
    case 47u: goto L_088643D4;
    case 48u: goto L_088643EC;
    case 49u: goto L_088643F0;
    case 50u: goto L_08864404;
    case 51u: goto L_08864420;
    case 52u: goto L_0886443C;
    case 53u: goto L_08864450;
    case 54u: goto L_0886445C;
    case 55u: goto L_088644B4;
    case 56u: goto L_088644C0;
    case 57u: goto L_088644C8;
    case 58u: goto L_088644D8;
    case 59u: goto L_08864510;
    case 60u: goto L_0886451C;
    case 61u: goto L_08864538;
    case 62u: goto L_08864544;
    case 63u: goto L_0886454C;
    case 64u: goto L_0886455C;
    case 65u: goto L_08864564;
    case 66u: goto L_08864578;
    case 67u: goto L_08864580;
    case 68u: goto L_08864590;
    case 69u: goto L_0886459C;
    case 70u: goto L_088645B8;
    case 71u: goto L_088645D4;
    case 72u: goto L_088645EC;
    case 73u: goto L_088645FC;
    case 74u: goto L_08864600;
    case 75u: goto L_08864614;
    case 76u: goto L_08864658;
    case 77u: goto L_088647E0;
    case 78u: goto L_088647EC;
    case 79u: goto L_08864804;
    case 80u: goto L_08864814;
    case 81u: goto L_08864820;
    case 82u: goto L_08864824;
    case 83u: goto L_08864834;
    case 84u: goto L_08864844;
    case 85u: goto L_08864850;
    case 86u: goto L_0886485C;
    case 87u: goto L_08864864;
    case 88u: goto L_08864898;
    case 89u: goto L_088648A0;
    case 90u: goto L_088648A8;
    case 91u: goto L_088648BC;
    case 92u: goto L_088648CC;
    case 93u: goto L_088648D4;
    case 94u: goto L_088648DC;
    case 95u: goto L_088648FC;
    case 96u: goto L_0886491C;
    case 97u: goto L_08864928;
    case 98u: goto L_0886493C;
    case 99u: goto L_08864944;
    case 100u: goto L_08864960;
    case 101u: goto L_0886496C;
    case 102u: goto L_08864978;
    case 103u: goto L_088649A4;
    case 104u: goto L_088649A8;
    case 105u: goto L_088649C0;
    case 106u: goto L_088649C8;
    case 107u: goto L_088649D8;
    case 108u: goto L_088649F0;
    case 109u: goto L_088649FC;
    case 110u: goto L_08864A04;
    case 111u: goto L_08864A18;
    case 112u: goto L_08864A5C;
    case 113u: goto L_08864A64;
    case 114u: goto L_08864A6C;
    case 115u: goto L_08864A80;
    case 116u: goto L_08864AA8;
    case 117u: goto L_08864BF0;
    case 118u: goto L_08864BF4;
    case 119u: goto L_08864C08;
    case 120u: goto L_08864C38;
    case 121u: goto L_08864C44;
    case 122u: goto L_08864C48;
    case 123u: goto L_08864C50;
    case 124u: goto L_08864C70;
    case 125u: goto L_08864C78;
    case 126u: goto L_08864C80;
    case 127u: goto L_08864C88;
    case 128u: goto L_08864CA4;
    case 129u: goto L_08864CAC;
    case 130u: goto L_08864CB4;
    case 131u: goto L_08864CC0;
    case 132u: goto L_08864CC8;
    case 133u: goto L_08864CD0;
    case 134u: goto L_08864CDC;
    case 135u: goto L_08864CE4;
    case 136u: goto L_08864CF4;
    case 137u: goto L_08864CFC;
    case 138u: goto L_08864D04;
    case 139u: goto L_08864D3C;
    case 140u: goto L_08864D50;
    case 141u: goto L_08864D58;
    case 142u: goto L_08864D5C;
    case 143u: goto L_08864D64;
    case 144u: goto L_08864D84;
    case 145u: goto L_08864DD4;
    case 146u: goto L_08864DDC;
    case 147u: goto L_08864DF4;
    case 148u: goto L_08864E08;
    case 149u: goto L_08864E20;
    case 150u: goto L_08864E28;
    case 151u: goto L_08864E34;
    case 152u: goto L_08864E48;
    case 153u: goto L_08864E64;
    case 154u: goto L_08864E88;
    case 155u: goto L_08864EA0;
    case 156u: goto L_08864EAC;
    case 157u: goto L_08864EB8;
    case 158u: goto L_08864ECC;
    case 159u: goto L_08864ED4;
    case 160u: goto L_08864ED8;
    case 161u: goto L_08864EE8;
    case 162u: goto L_08864EF0;
    case 163u: goto L_08864F08;
    case 164u: goto L_08864F20;
    case 165u: goto L_08864F60;
    case 166u: goto L_08864F64;
    case 167u: goto L_08864F74;
    case 168u: goto L_08864FA8;
    case 169u: goto L_08864FB0;
    case 170u: goto L_08864FEC;
    case 171u: goto L_08864FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08864004:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[26];
      if (branch_taken) {
          goto L_0886400C;
      }
      goto L_0886400C;
    }
L_0886400C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 184u, 0x08863FBCu>(ctx, &aot_mem); return;
      }
      goto L_08864020;
    }
L_08864020:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864050:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (32639u << 16u);
    aot_gpr[8] = (aot_gpr[8] | 65535u);
    aot_gpr[7] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_08864070;
L_08864070:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08864070;
      }
      goto L_08864088;
    }
L_08864088:
    aot_gpr[5] = (16076u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_gpr[31] = (0x08864098u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 183u, 0x08863F58u>(ctx, &aot_mem) && ctx.pc == 0x08864098u) goto L_08864098;
    return;
L_08864098:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088640A4:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088640AC;
L_088640AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088640AC;
      }
      goto L_088640C0;
    }
L_088640C0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088640C8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088640D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08864104;
      }
      goto L_088640F0;
    }
L_088640F0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08864100u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 76u, 0x08A4D650u>(ctx, &aot_mem) && ctx.pc == 0x08864100u) goto L_08864100;
    return;
L_08864100:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08864104;
L_08864104:
    aot_gpr[31] = (0x0886410Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08864050;
L_0886410C:
    aot_gpr[31] = (0x08864114u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088640A4;
L_08864114:
    aot_gpr[31] = (0x0886411Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088640C8;
L_0886411C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864130:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (15395u << 16u);
      if (branch_taken) {
          goto L_08864270;
      }
      goto L_08864180;
    }
L_08864180:
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[4] = (16672u << 16u);
    aot_gpr[23] = (0u | 11u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[22] = (0u | 12u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(5320));
    goto L_088641AC;
L_088641AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30))))));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5392)));
    aot_gpr[4] = (aot_gpr[4] << 7u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[4] << 4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_08864224;
      }
      goto L_0886421C;
    }
L_0886421C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08864228;
      }
      goto L_08864224;
    }
L_08864224:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_08864228;
L_08864228:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30))))));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08864248u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 133u, 0x088639ACu>(ctx, &aot_mem) && ctx.pc == 0x08864248u) goto L_08864248;
    return;
L_08864248:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30))))));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08864258u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 173u, 0x0892AD98u>(ctx, &aot_mem) && ctx.pc == 0x08864258u) goto L_08864258;
    return;
L_08864258:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088641AC;
      }
      goto L_08864270;
    }
L_08864270:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088642AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088642C0;
L_088642C0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088642F4;
      }
      goto L_088642CC;
    }
L_088642CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088642E0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x088642E0u) goto L_088642E0;
    return;
L_088642E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088642F4;
L_088642F4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088642C0;
      }
      goto L_08864304;
    }
L_08864304:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864310:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08864324;
L_08864324:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08864358;
      }
      goto L_08864330;
    }
L_08864330:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08864344u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x08864344u) goto L_08864344;
    return;
L_08864344:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08864358;
L_08864358:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08864324;
      }
      goto L_08864368;
    }
L_08864368:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864374:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088643A8;
      }
      goto L_0886438C;
    }
L_0886438C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0886439Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0886439Cu) goto L_0886439C;
    return;
L_0886439C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    goto L_088643A8;
L_088643A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088643B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088643C4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088642AC;
L_088643C4:
    aot_gpr[31] = (0x088643CCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08864310;
L_088643CC:
    aot_gpr[31] = (0x088643D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08864374;
L_088643D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08864450;
      }
      goto L_088643EC;
    }
L_088643EC:
    aot_gpr[8] = (0u | 0u);
    goto L_088643F0;
L_088643F0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(31))))));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886443C;
      }
      goto L_08864404;
    }
L_08864404:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08864420u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x08864420u) goto L_08864420;
    return;
L_08864420:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0886443C;
L_0886443C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088643F0;
      }
      goto L_08864450;
    }
L_08864450:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886445C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[30]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[30] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[23] = (0u | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    goto L_088644B4;
L_088644B4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088644C8;
      }
      goto L_088644C0;
    }
L_088644C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_088644D8;
      }
      goto L_088644C8;
    }
L_088644C8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088644B4;
      }
      goto L_088644D8;
    }
L_088644D8:
    aot_gpr[4] = (16576u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[30] | 0u);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[20] = (2182u << 16u);
    aot_gpr[4] = (16000u << 16u);
    aot_gpr[17] = (0u | 0u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(19772));
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[21] = (2218u << 16u);
    goto L_08864510;
L_08864510:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08864600;
      }
      goto L_0886451C;
    }
L_0886451C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[20] = aot_fpr[20] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08864600;
      }
      goto L_08864538;
    }
L_08864538:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7324)));
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886455C;
      }
      goto L_08864544;
    }
L_08864544:
    aot_gpr[31] = (0x0886454Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0886454Cu) goto L_0886454C;
    return;
L_0886454C:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[20] + aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08864600;
      }
      goto L_0886455C;
    }
L_0886455C:
    aot_gpr[31] = (0x08864564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08864564u) goto L_08864564;
    return;
L_08864564:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08864580;
      }
      goto L_08864578;
    }
L_08864578:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_08864590;
      }
      goto L_08864580;
    }
L_08864580:
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
        goto L_08864590;
    }
    goto L_08864590;
L_08864590:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(15));
    aot_gpr[31] = (0x0886459Cu);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x0886459Cu) goto L_0886459C;
    return;
L_0886459C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(2))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088645B8u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 120u, 0x08863844u>(ctx, &aot_mem) && ctx.pc == 0x088645B8u) goto L_088645B8;
    return;
L_088645B8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = aot_fpr[26] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_088645EC;
      }
      goto L_088645D4;
    }
L_088645D4:
    aot_gpr[4] = (0u - aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = aot_fpr[12] + aot_fpr[20];
      if (branch_taken) {
          goto L_088645FC;
      }
      goto L_088645EC;
    }
L_088645EC:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
    aot_fpr[20] = aot_fpr[12] + aot_fpr[20];
    goto L_088645FC;
L_088645FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08864600;
L_08864600:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08864510;
      }
      goto L_08864614;
    }
L_08864614:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864658:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(24868))))));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(5392)));
    aot_gpr[5] = (aot_gpr[5] << 7u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[7]);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[9]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[7]);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[9]);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[7]);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[9]);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(124)));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[31]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-7484)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-7483)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088647EC;
      }
      goto L_088647E0;
    }
L_088647E0:
    aot_gpr[5] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_08864814;
      }
      goto L_088647EC;
    }
L_088647EC:
    aot_gpr[5] = (16544u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08864814;
      }
      goto L_08864804;
    }
L_08864804:
    aot_fpr[20] = aot_fpr[13] / aot_fpr[12];
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[20] = aot_fpr[15] - aot_fpr[20];
    goto L_08864814;
L_08864814:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864824;
      }
      goto L_08864820;
    }
L_08864820:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_08864824;
L_08864824:
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088648D4;
      }
      goto L_08864834;
    }
L_08864834:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (2218u << 16u);
    goto L_08864844;
L_08864844:
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(30));
    aot_gpr[31] = (0x08864850u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08864850u) goto L_08864850;
    return;
L_08864850:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088648A0;
      }
      goto L_0886485C;
    }
L_0886485C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088648A0;
      }
      goto L_08864864;
    }
L_08864864:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2))))));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[31] = (0x08864898u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 107u, 0x088636F0u>(ctx, &aot_mem) && ctx.pc == 0x08864898u) goto L_08864898;
    return;
L_08864898:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088648A0;
L_088648A0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088648BC;
      }
      goto L_088648A8;
    }
L_088648A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7472)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[31] = (0x088648BCu);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 107u, 0x0892A828u>(ctx, &aot_mem) && ctx.pc == 0x088648BCu) goto L_088648BC;
    return;
L_088648BC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08864844;
      }
      goto L_088648CC;
    }
L_088648CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088648DC;
      }
      goto L_088648D4;
    }
L_088648D4:
    aot_gpr[31] = (0x088648DCu);
    // nop
    goto L_08864310;
L_088648DC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088648FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088649C8;
      }
      goto L_0886491C;
    }
L_0886491C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088649C8;
      }
      goto L_08864928;
    }
L_08864928:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5404)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08864944;
      }
      goto L_0886493C;
    }
L_0886493C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08864A04;
      }
      goto L_08864944;
    }
L_08864944:
    aot_gpr[17] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30712)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08864A04;
      }
      goto L_08864960;
    }
L_08864960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-30716)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864A04;
      }
      goto L_0886496C;
    }
L_0886496C:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[31] = (0x08864978u);
    aot_gpr[5] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08864978u) goto L_08864978;
    return;
L_08864978:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30712)));
    aot_gpr[4] = (17279u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[17] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (aot_gpr[17] & 65535u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088649A8;
      }
      goto L_088649A4;
    }
L_088649A4:
    aot_gpr[17] = (0u | 128u);
    goto L_088649A8;
L_088649A8:
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[5] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088649C0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x088649C0u) goto L_088649C0;
    return;
L_088649C0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[2]);
      if (branch_taken) {
          goto L_08864A04;
      }
      goto L_088649C8;
    }
L_088649C8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-30716)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088649FC;
      }
      goto L_088649D8;
    }
L_088649D8:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30712)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088649FC;
      }
      goto L_088649F0;
    }
L_088649F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864A04;
      }
      goto L_088649FC;
    }
L_088649FC:
    aot_gpr[31] = (0x08864A04u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08864374;
L_08864A04:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864A18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(5356)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08864A6C;
      }
      goto L_08864A5C;
    }
L_08864A5C:
    aot_gpr[31] = (0x08864A64u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_088643B4;
L_08864A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08864D04;
      }
      goto L_08864A6C;
    }
L_08864A6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_08864CF4;
      }
      goto L_08864A80;
    }
L_08864A80:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[5]);
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-6928));
    aot_gpr[23] = (2218u << 16u);
    goto L_08864AA8;
L_08864AA8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[21]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5392)));
    aot_gpr[6] = (aot_gpr[6] << 7u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[7]);
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[9]);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[7]);
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[9]);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[7]);
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[9]);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(124)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(31))))));
      if (branch_taken) {
          goto L_08864BF4;
      }
      goto L_08864BF0;
    }
L_08864BF0:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08864BF4;
L_08864BF4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08864CC8;
      }
      goto L_08864C08;
    }
L_08864C08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[6] << 4u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (0u | 11u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08864C44;
      }
      goto L_08864C38;
    }
L_08864C38:
    aot_gpr[6] = (0u | 12u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08864C48;
      }
      goto L_08864C44;
    }
L_08864C44:
    aot_gpr[17] = (0u | 1u);
    goto L_08864C48;
L_08864C48:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_08864CAC;
      }
      goto L_08864C50;
    }
L_08864C50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[4] = (aot_gpr[5] ^ aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864C88;
      }
      goto L_08864C70;
    }
L_08864C70:
    aot_gpr[31] = (0x08864C78u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-6936)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 116u, 0x08826A58u>(ctx, &aot_mem) && ctx.pc == 0x08864C78u) goto L_08864C78;
    return;
L_08864C78:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864C88;
      }
      goto L_08864C80;
    }
L_08864C80:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864CC0;
      }
      goto L_08864C88;
    }
L_08864C88:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30))))));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08864CA4u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 125u, 0x088638D4u>(ctx, &aot_mem) && ctx.pc == 0x08864CA4u) goto L_08864CA4;
    return;
L_08864CA4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_08864CC0;
      }
      goto L_08864CAC;
    }
L_08864CAC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864CC0;
      }
      goto L_08864CB4;
    }
L_08864CB4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30))))));
    aot_gpr[31] = (0x08864CC0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_0886445C;
L_08864CC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08864CE4;
      }
      goto L_08864CC8;
    }
L_08864CC8:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_08864CE4;
      }
      goto L_08864CD0;
    }
L_08864CD0:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08864CDCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x08864CDCu) goto L_08864CDC;
    return;
L_08864CDC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08864CE4;
L_08864CE4:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08864AA8;
      }
      goto L_08864CF4;
    }
L_08864CF4:
    aot_gpr[31] = (0x08864CFCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08864658;
L_08864CFC:
    aot_gpr[31] = (0x08864D04u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_088648FC;
L_08864D04:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864D3C:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08864D5C;
      }
      goto L_08864D50;
    }
L_08864D50:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08864D5C;
      }
      goto L_08864D58;
    }
L_08864D58:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08864D5C;
L_08864D5C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864D64:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24888), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864D84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[10] & 255u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_08864E20;
      }
      goto L_08864DD4;
    }
L_08864DD4:
    aot_gpr[31] = (0x08864DDCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 77u, 0x08A4D658u>(ctx, &aot_mem) && ctx.pc == 0x08864DDCu) goto L_08864DDC;
    return;
L_08864DDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08864E20;
      }
      goto L_08864DF4;
    }
L_08864DF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[10] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[31] = (0x08864E08u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 78u, 0x08A4D660u>(ctx, &aot_mem) && ctx.pc == 0x08864E08u) goto L_08864E08;
    return;
L_08864E08:
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08864DF4;
      }
      goto L_08864E20;
    }
L_08864E20:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08864EA0;
      }
      goto L_08864E28;
    }
L_08864E28:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[7]);
      if (branch_taken) {
          goto L_08864EA0;
      }
      goto L_08864E34;
    }
L_08864E34:
    aot_gpr[5] = (2182u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08864E48u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(21648));
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 129u, 0x08943908u>(ctx, &aot_mem) && ctx.pc == 0x08864E48u) goto L_08864E48;
    return;
L_08864E48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08864E64u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08864E64u) goto L_08864E64;
    return;
L_08864E64:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08864E88u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08864E88u) goto L_08864E88;
    return;
L_08864E88:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    goto L_08864EA0;
L_08864EA0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864F74;
      }
      goto L_08864EAC;
    }
L_08864EAC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08864EB8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x08864EB8u) goto L_08864EB8;
    return;
L_08864EB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08864ED4;
      }
      goto L_08864ECC;
    }
L_08864ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08864ED8;
      }
      goto L_08864ED4;
    }
L_08864ED4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08864ED8;
L_08864ED8:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[23] = (0u < aot_gpr[22] ? 1u : 0u);
      if (branch_taken) {
          goto L_08864F74;
      }
      goto L_08864EE8;
    }
L_08864EE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[22] = (0u | 0u);
    goto L_08864EF0;
L_08864EF0:
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[21] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[30] = (0u | 0u);
      if (branch_taken) {
          goto L_08864F64;
      }
      goto L_08864F08;
    }
L_08864F08:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08864F20u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 181u, 0x0892CCE0u>(ctx, &aot_mem) && ctx.pc == 0x08864F20u) goto L_08864F20;
    return;
L_08864F20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08864F08;
      }
      goto L_08864F60;
    }
L_08864F60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08864F64;
L_08864F64:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08864EF0;
      }
      goto L_08864F74;
    }
L_08864F74:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864FA8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864FB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] & 255u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 6u, 0x08865050u>(ctx, &aot_mem); return;
      }
      goto L_08864FEC;
    }
L_08864FEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (0u | 0u);
    goto L_08864FF4;
L_08864FF4:
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 0u);
    ctx.pc = 0x08865000u; return;
}

void recomp_unit_0096(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0096_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_96(Runtime &runtime) {
    runtime.register_generated_unit(96u, 0x08864000u, 4096u, &recomp_unit_0096, &recomp_unit_0096_entry);
    runtime.register_function(0x08864004u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886400Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864020u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864050u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864070u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864088u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864098u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088640A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088640ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088640C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088640C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088640D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088640F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864100u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864104u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886410Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864114u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886411Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864130u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864180u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088641ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886421Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864224u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864228u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864248u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864258u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864270u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088642ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088642C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088642CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088642E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088642F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864304u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864310u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864324u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864330u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864344u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864358u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864368u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864374u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886438Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886439Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088643A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088643B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088643C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088643CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088643D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088643ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088643F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864404u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864420u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886443Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864450u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886445Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088644B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088644C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088644C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088644D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864510u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886451Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864538u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864544u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886454Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886455Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864564u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864578u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864580u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864590u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886459Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088645B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088645D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088645ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088645FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864600u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864614u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864658u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088647E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088647ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864804u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864814u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864820u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864824u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864834u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864844u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864850u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886485Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864864u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864898u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088648A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088648A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088648BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088648CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088648D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088648DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088648FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886491Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864928u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886493Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864944u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864960u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0886496Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864978u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088649A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088649A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088649C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088649C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088649D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088649F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x088649FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864A04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864A18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864A5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864A64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864A6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864A80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864AA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864BF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864BF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864C08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864C38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864C44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864C48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864C50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864C70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864C78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864C80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864C88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864CA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864CACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864CB4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864CC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864CC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864CD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864CDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864CE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864CF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864CFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864D04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864D3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864D50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864D58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864D5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864D64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864D84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864DD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864DDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864DF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864E08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864E20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864E28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864E34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864E48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864E64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864E88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864EA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864EACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864EB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864ECCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864ED4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864ED8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864EE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864EF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864F08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864F20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864F60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864F64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864F74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864FA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864FB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864FECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08864FF4u, &recomp_unit_0096, "recomp_unit_0096");
}
} // namespace psprecomp
