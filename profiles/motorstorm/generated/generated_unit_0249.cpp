#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0249[1021] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 17, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27,
    0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 40, 41, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55,
    0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 79, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0,
    87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 95, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 100, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0,
    0, 106, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 115,
    0, 116, 0, 117, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 128, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 136, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 140, 0, 141, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 152, 0,
    0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 159, 0, 0, 160,
    0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 167, 0, 168, 0, 169, 0, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 171, 172, 0, 173, 0, 0, 174, 0, 0, 0, 0, 175, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 178, 0, 0, 0, 179, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 185, 0,
    186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194,
};
void recomp_unit_0249_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088FD000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0249[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088FD000;
    case 2u: goto L_088FD02C;
    case 3u: goto L_088FD03C;
    case 4u: goto L_088FD07C;
    case 5u: goto L_088FD0AC;
    case 6u: goto L_088FD0BC;
    case 7u: goto L_088FD0D8;
    case 8u: goto L_088FD0E0;
    case 9u: goto L_088FD0E8;
    case 10u: goto L_088FD0F8;
    case 11u: goto L_088FD11C;
    case 12u: goto L_088FD124;
    case 13u: goto L_088FD128;
    case 14u: goto L_088FD130;
    case 15u: goto L_088FD148;
    case 16u: goto L_088FD178;
    case 17u: goto L_088FD190;
    case 18u: goto L_088FD194;
    case 19u: goto L_088FD1AC;
    case 20u: goto L_088FD1E8;
    case 21u: goto L_088FD1F4;
    case 22u: goto L_088FD20C;
    case 23u: goto L_088FD228;
    case 24u: goto L_088FD230;
    case 25u: goto L_088FD244;
    case 26u: goto L_088FD26C;
    case 27u: goto L_088FD27C;
    case 28u: goto L_088FD288;
    case 29u: goto L_088FD298;
    case 30u: goto L_088FD2A0;
    case 31u: goto L_088FD2BC;
    case 32u: goto L_088FD2C8;
    case 33u: goto L_088FD2F8;
    case 34u: goto L_088FD308;
    case 35u: goto L_088FD324;
    case 36u: goto L_088FD32C;
    case 37u: goto L_088FD330;
    case 38u: goto L_088FD34C;
    case 39u: goto L_088FD360;
    case 40u: goto L_088FD364;
    case 41u: goto L_088FD368;
    case 42u: goto L_088FD370;
    case 43u: goto L_088FD3D4;
    case 44u: goto L_088FD3DC;
    case 45u: goto L_088FD3F8;
    case 46u: goto L_088FD414;
    case 47u: goto L_088FD42C;
    case 48u: goto L_088FD430;
    case 49u: goto L_088FD438;
    case 50u: goto L_088FD4DC;
    case 51u: goto L_088FD514;
    case 52u: goto L_088FD51C;
    case 53u: goto L_088FD544;
    case 54u: goto L_088FD55C;
    case 55u: goto L_088FD57C;
    case 56u: goto L_088FD584;
    case 57u: goto L_088FD594;
    case 58u: goto L_088FD5A4;
    case 59u: goto L_088FD5B0;
    case 60u: goto L_088FD614;
    case 61u: goto L_088FD61C;
    case 62u: goto L_088FD62C;
    case 63u: goto L_088FD640;
    case 64u: goto L_088FD65C;
    case 65u: goto L_088FD678;
    case 66u: goto L_088FD68C;
    case 67u: goto L_088FD694;
    case 68u: goto L_088FD6AC;
    case 69u: goto L_088FD6FC;
    case 70u: goto L_088FD708;
    case 71u: goto L_088FD714;
    case 72u: goto L_088FD71C;
    case 73u: goto L_088FD73C;
    case 74u: goto L_088FD74C;
    case 75u: goto L_088FD76C;
    case 76u: goto L_088FD774;
    case 77u: goto L_088FD784;
    case 78u: goto L_088FD7A4;
    case 79u: goto L_088FD7A8;
    case 80u: goto L_088FD7B0;
    case 81u: goto L_088FD7C0;
    case 82u: goto L_088FD7D0;
    case 83u: goto L_088FD7D8;
    case 84u: goto L_088FD7E0;
    case 85u: goto L_088FD7E8;
    case 86u: goto L_088FD7F4;
    case 87u: goto L_088FD800;
    case 88u: goto L_088FD810;
    case 89u: goto L_088FD820;
    case 90u: goto L_088FD828;
    case 91u: goto L_088FD838;
    case 92u: goto L_088FD840;
    case 93u: goto L_088FD854;
    case 94u: goto L_088FD868;
    case 95u: goto L_088FD86C;
    case 96u: goto L_088FD874;
    case 97u: goto L_088FD894;
    case 98u: goto L_088FD8A0;
    case 99u: goto L_088FD8A8;
    case 100u: goto L_088FD8BC;
    case 101u: goto L_088FD8C0;
    case 102u: goto L_088FD8CC;
    case 103u: goto L_088FD8D8;
    case 104u: goto L_088FD8E8;
    case 105u: goto L_088FD8F8;
    case 106u: goto L_088FD904;
    case 107u: goto L_088FD90C;
    case 108u: goto L_088FD91C;
    case 109u: goto L_088FD924;
    case 110u: goto L_088FD930;
    case 111u: goto L_088FD940;
    case 112u: goto L_088FD94C;
    case 113u: goto L_088FD964;
    case 114u: goto L_088FD978;
    case 115u: goto L_088FD97C;
    case 116u: goto L_088FD984;
    case 117u: goto L_088FD98C;
    case 118u: goto L_088FD99C;
    case 119u: goto L_088FD9A4;
    case 120u: goto L_088FD9AC;
    case 121u: goto L_088FD9C4;
    case 122u: goto L_088FD9DC;
    case 123u: goto L_088FD9F0;
    case 124u: goto L_088FDA24;
    case 125u: goto L_088FDA44;
    case 126u: goto L_088FDA50;
    case 127u: goto L_088FDA94;
    case 128u: goto L_088FDA98;
    case 129u: goto L_088FDAA0;
    case 130u: goto L_088FDAB0;
    case 131u: goto L_088FDAB8;
    case 132u: goto L_088FDAC8;
    case 133u: goto L_088FDACC;
    case 134u: goto L_088FDAD4;
    case 135u: goto L_088FDAF4;
    case 136u: goto L_088FDB08;
    case 137u: goto L_088FDB0C;
    case 138u: goto L_088FDB14;
    case 139u: goto L_088FDB78;
    case 140u: goto L_088FDB94;
    case 141u: goto L_088FDB9C;
    case 142u: goto L_088FDBA0;
    case 143u: goto L_088FDBA8;
    case 144u: goto L_088FDBE4;
    case 145u: goto L_088FDBEC;
    case 146u: goto L_088FDBF0;
    case 147u: goto L_088FDC14;
    case 148u: goto L_088FDC2C;
    case 149u: goto L_088FDC44;
    case 150u: goto L_088FDC58;
    case 151u: goto L_088FDC74;
    case 152u: goto L_088FDC78;
    case 153u: goto L_088FDC94;
    case 154u: goto L_088FDC9C;
    case 155u: goto L_088FDCA4;
    case 156u: goto L_088FDCC0;
    case 157u: goto L_088FDCD0;
    case 158u: goto L_088FDCEC;
    case 159u: goto L_088FDCF0;
    case 160u: goto L_088FDCFC;
    case 161u: goto L_088FDD08;
    case 162u: goto L_088FDD1C;
    case 163u: goto L_088FDD24;
    case 164u: goto L_088FDD34;
    case 165u: goto L_088FDD48;
    case 166u: goto L_088FDD5C;
    case 167u: goto L_088FDD60;
    case 168u: goto L_088FDD68;
    case 169u: goto L_088FDD70;
    case 170u: goto L_088FDD8C;
    case 171u: goto L_088FDDA0;
    case 172u: goto L_088FDDA4;
    case 173u: goto L_088FDDAC;
    case 174u: goto L_088FDDB8;
    case 175u: goto L_088FDDCC;
    case 176u: goto L_088FDDD0;
    case 177u: goto L_088FDE0C;
    case 178u: goto L_088FDE84;
    case 179u: goto L_088FDE94;
    case 180u: goto L_088FDE98;
    case 181u: goto L_088FDEBC;
    case 182u: goto L_088FDEC4;
    case 183u: goto L_088FDEEC;
    case 184u: goto L_088FDEF4;
    case 185u: goto L_088FDEF8;
    case 186u: goto L_088FDF00;
    case 187u: goto L_088FDF0C;
    case 188u: goto L_088FDF44;
    case 189u: goto L_088FDF58;
    case 190u: goto L_088FDF98;
    case 191u: goto L_088FDFA8;
    case 192u: goto L_088FDFC0;
    case 193u: goto L_088FDFD8;
    case 194u: goto L_088FDFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088FD000:
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088FD02C;
L_088FD02C:
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
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
      const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088FD03C;
L_088FD03C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD07C:
    aot_gpr[6] = (2216u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-32516)));
    aot_gpr[6] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(384)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(384)));
    aot_fpr[15] = aot_fpr[14] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
      if (branch_taken) {
          goto L_088FD0E8;
      }
      goto L_088FD0AC;
    }
L_088FD0AC:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[13] = aot_fpr[12] - aot_fpr[13];
      if (branch_taken) {
          goto L_088FD0E0;
      }
      goto L_088FD0BC;
    }
L_088FD0BC:
    aot_fpr[0] = aot_fpr[12] + aot_fpr[15];
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) & 0x7FFFFFFFu);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088FD0D8;
    }
    goto L_088FD0D8;
L_088FD0D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD128;
      }
      goto L_088FD0E0;
    }
L_088FD0E0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088FD128;
      }
      goto L_088FD0E8;
    }
L_088FD0E8:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FD124;
      }
      goto L_088FD0F8;
    }
L_088FD0F8:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[14];
    aot_fpr[13] = aot_fpr[13] - aot_fpr[15];
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_088FD11C;
    }
    goto L_088FD11C;
L_088FD11C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088FD128;
      }
      goto L_088FD124;
    }
L_088FD124:
    aot_fpr[0] = aot_fpr[12] - aot_fpr[13];
    goto L_088FD128;
L_088FD128:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD130:
    aot_gpr[5] = (17402u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(388), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(384), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD148:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] ^ 4000u);
    aot_gpr[6] = (aot_gpr[4] ^ 5000u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] ^ 6000u);
    aot_gpr[2] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD178:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(464)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(464), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD194;
      }
      goto L_088FD190;
    }
L_088FD190:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(464), 0u);
    goto L_088FD194;
L_088FD194:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(464)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(456), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD1AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[10] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088FD1E8u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 194u, 0x088BE908u>(ctx, &aot_mem) && ctx.pc == 0x088FD1E8u) goto L_088FD1E8;
    return;
L_088FD1E8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD230;
      }
      goto L_088FD1F4;
    }
L_088FD1F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(348), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(352), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(356), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FD228;
      }
      goto L_088FD20C;
    }
L_088FD20C:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088FD228u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-32556), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 180u, 0x088FAFF0u>(ctx, &aot_mem) && ctx.pc == 0x088FD228u) goto L_088FD228;
    return;
L_088FD228:
    aot_gpr[31] = (0x088FD230u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(200)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 186u, 0x08804DA4u>(ctx, &aot_mem) && ctx.pc == 0x088FD230u) goto L_088FD230;
    return;
L_088FD230:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD244:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088FD3DC;
      }
      goto L_088FD26C;
    }
L_088FD26C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(348)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088FD3DC;
      }
      goto L_088FD27C;
    }
L_088FD27C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088FD3DC;
      }
      goto L_088FD288;
    }
L_088FD288:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088FD298u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 25u, 0x088BE0E4u>(ctx, &aot_mem) && ctx.pc == 0x088FD298u) goto L_088FD298;
    return;
L_088FD298:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD3DC;
      }
      goto L_088FD2A0;
    }
L_088FD2A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(180)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088FD2BCu);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 186u, 0x088BE7D4u>(ctx, &aot_mem) && ctx.pc == 0x088FD2BCu) goto L_088FD2BC;
    return;
L_088FD2BC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_088FD3DC;
      }
      goto L_088FD2C8;
    }
L_088FD2C8:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(64);
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
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16912u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FD3DC;
      }
      goto L_088FD2F8;
    }
L_088FD2F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(348)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(352)));
    aot_gpr[31] = (0x088FD308u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 114u, 0x088BDA60u>(ctx, &aot_mem) && ctx.pc == 0x088FD308u) goto L_088FD308;
    return;
L_088FD308:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (16576u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088FD32C;
      }
      goto L_088FD324;
    }
L_088FD324:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
      if (branch_taken) {
          goto L_088FD330;
      }
      goto L_088FD32C;
    }
L_088FD32C:
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    goto L_088FD330;
L_088FD330:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(200)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(216)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088FD364;
      }
      goto L_088FD34C;
    }
L_088FD34C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(220)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088FD368;
      }
      goto L_088FD360;
    }
L_088FD360:
    aot_gpr[4] = (0u | 1u);
    goto L_088FD364;
L_088FD364:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088FD368;
L_088FD368:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD3DC;
      }
      goto L_088FD370;
    }
L_088FD370:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(352), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(348), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(348)));
    aot_gpr[5] = (aot_gpr[18] << 4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(356), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32556), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088FD3D4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 180u, 0x088FAFF0u>(ctx, &aot_mem) && ctx.pc == 0x088FD3D4u) goto L_088FD3D4;
    return;
L_088FD3D4:
    aot_gpr[31] = (0x088FD3DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(200)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 186u, 0x08804DA4u>(ctx, &aot_mem) && ctx.pc == 0x088FD3DCu) goto L_088FD3DC;
    return;
L_088FD3DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD3F8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(220)));
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FD42C;
      }
      goto L_088FD414;
    }
L_088FD414:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[2] = (0u | 1u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FD430;
      }
      goto L_088FD42C;
    }
L_088FD42C:
    aot_gpr[2] = (0u | 0u);
    goto L_088FD430;
L_088FD430:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD438:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[18]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(60));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088FD4DCu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 94u, 0x0880C72Cu>(ctx, &aot_mem) && ctx.pc == 0x088FD4DCu) goto L_088FD4DC;
    return;
L_088FD4DC:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FD51C;
      }
      goto L_088FD514;
    }
L_088FD514:
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_088FD544;
      }
      goto L_088FD51C;
    }
L_088FD51C:
    aot_gpr[4] = (15948u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    ctx.execute_vfpu_vocp(16u, 16u, 1u);
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088FD544;
L_088FD544:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(112));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FD55Cu);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0235_entry, 235u, 36u, 0x088EF370u>(ctx, &aot_mem) && ctx.pc == 0x088FD55Cu) goto L_088FD55C;
    return;
L_088FD55C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD57C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD584:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(200)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(256), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD594:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088FD5A4u);
    aot_gpr[5] = (0u | 528u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x088FD5A4u) goto L_088FD5A4;
    return;
L_088FD5A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD5B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(448)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(448), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[17]);
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_088FD61C;
      }
      goto L_088FD614;
    }
L_088FD614:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(448), aot_gpr[5]);
    goto L_088FD61C;
L_088FD61C:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FD678;
      }
      goto L_088FD62C;
    }
L_088FD62C:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FD65C;
      }
      goto L_088FD640;
    }
L_088FD640:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_088FD678;
      }
      goto L_088FD65C;
    }
L_088FD65C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (65535u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    goto L_088FD678;
L_088FD678:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FD694;
      }
      goto L_088FD68C;
    }
L_088FD68C:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088FD694;
L_088FD694:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] & 32u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD714;
      }
      goto L_088FD6AC;
    }
L_088FD6AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4000));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(492)));
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[6]);
    aot_gpr[6] = (16000u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (16128u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[6] = (16320u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-7456));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-6880));
      if (branch_taken) {
          goto L_088FD71C;
      }
      goto L_088FD6FC;
    }
L_088FD6FC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088FD708u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 79u, 0x08822620u>(ctx, &aot_mem) && ctx.pc == 0x088FD708u) goto L_088FD708;
    return;
L_088FD708:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(412)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(424)));
      if (branch_taken) {
          goto L_088FD73C;
      }
      goto L_088FD714;
    }
L_088FD714:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0250_entry, 250u, 17u, 0x088FE140u>(ctx, &aot_mem); return;
      }
      goto L_088FD71C;
    }
L_088FD71C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(412)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(424)));
    goto L_088FD73C;
L_088FD73C:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (16102u << 16u);
      if (branch_taken) {
          goto L_088FD774;
      }
      goto L_088FD74C;
    }
L_088FD74C:
    aot_gpr[5] = (aot_gpr[5] | 26214u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FD7A8;
      }
      goto L_088FD76C;
    }
L_088FD76C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_088FD7A8;
      }
      goto L_088FD774;
    }
L_088FD774:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (16102u << 16u);
      if (branch_taken) {
          goto L_088FD7A8;
      }
      goto L_088FD784;
    }
L_088FD784:
    aot_gpr[5] = (aot_gpr[5] | 26214u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FD7A8;
      }
      goto L_088FD7A4;
    }
L_088FD7A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_088FD7A8;
L_088FD7A8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_088FD7E0;
      }
      goto L_088FD7B0;
    }
L_088FD7B0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088FD7C0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0247_entry, 247u, 17u, 0x088FB1F8u>(ctx, &aot_mem) && ctx.pc == 0x088FD7C0u) goto L_088FD7C0;
    return;
L_088FD7C0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-32519)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD7E8;
      }
      goto L_088FD7D0;
    }
L_088FD7D0:
    aot_gpr[31] = (0x088FD7D8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 69u, 0x088FA564u>(ctx, &aot_mem) && ctx.pc == 0x088FD7D8u) goto L_088FD7D8;
    return;
L_088FD7D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD7E8;
      }
      goto L_088FD7E0;
    }
L_088FD7E0:
    aot_gpr[31] = (0x088FD7E8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0247_entry, 247u, 26u, 0x088FB28Cu>(ctx, &aot_mem) && ctx.pc == 0x088FD7E8u) goto L_088FD7E8;
    return;
L_088FD7E8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088FD7F4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 180u, 0x088FAFF0u>(ctx, &aot_mem) && ctx.pc == 0x088FD7F4u) goto L_088FD7F4;
    return;
L_088FD7F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(487)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD810;
      }
      goto L_088FD800;
    }
L_088FD800:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(448)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088FD828;
      }
      goto L_088FD810;
    }
L_088FD810:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088FD820u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0247_entry, 247u, 35u, 0x088FB368u>(ctx, &aot_mem) && ctx.pc == 0x088FD820u) goto L_088FD820;
    return;
L_088FD820:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(487), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FD838;
      }
      goto L_088FD828;
    }
L_088FD828:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088FD838u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0247_entry, 247u, 129u, 0x088FB924u>(ctx, &aot_mem) && ctx.pc == 0x088FD838u) goto L_088FD838;
    return;
L_088FD838:
    aot_gpr[31] = (0x088FD840u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0247_entry, 247u, 138u, 0x088FBA14u>(ctx, &aot_mem) && ctx.pc == 0x088FD840u) goto L_088FD840;
    return;
L_088FD840:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(220)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FD86C;
      }
      goto L_088FD854;
    }
L_088FD854:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FD86C;
      }
      goto L_088FD868;
    }
L_088FD868:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_088FD86C;
L_088FD86C:
    aot_gpr[31] = (0x088FD874u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088FD178;
L_088FD874:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] & 512u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD8C0;
      }
      goto L_088FD894;
    }
L_088FD894:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x088FD8A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 60u, 0x0894B468u>(ctx, &aot_mem) && ctx.pc == 0x088FD8A0u) goto L_088FD8A0;
    return;
L_088FD8A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD8C0;
      }
      goto L_088FD8A8;
    }
L_088FD8A8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088FD8BCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 45u, 0x088FA374u>(ctx, &aot_mem) && ctx.pc == 0x088FD8BCu) goto L_088FD8BC;
    return;
L_088FD8BC:
    aot_gpr[17] = (aot_gpr[20] | 0u);
    goto L_088FD8C0;
L_088FD8C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(488)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD8D8;
      }
      goto L_088FD8CC;
    }
L_088FD8CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_088FD984;
      }
      goto L_088FD8D8;
    }
L_088FD8D8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088FD904;
      }
      goto L_088FD8E8;
    }
L_088FD8E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_088FD8F8;
    }
    goto L_088FD8F8;
L_088FD8F8:
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    goto L_088FD904;
L_088FD904:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD97C;
      }
      goto L_088FD90C;
    }
L_088FD90C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088FD91Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0247_entry, 247u, 147u, 0x088FBABCu>(ctx, &aot_mem) && ctx.pc == 0x088FD91Cu) goto L_088FD91C;
    return;
L_088FD91C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD97C;
      }
      goto L_088FD924;
    }
L_088FD924:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD94C;
      }
      goto L_088FD930;
    }
L_088FD930:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD94C;
      }
      goto L_088FD940;
    }
L_088FD940:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088FD94C;
L_088FD94C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    aot_gpr[17] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[17] = (aot_gpr[20] | 0u);
        goto L_088FD964;
    }
    goto L_088FD964;
L_088FD964:
    aot_gpr[6] = (aot_gpr[17] & 255u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088FD978u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 45u, 0x088FA374u>(ctx, &aot_mem) && ctx.pc == 0x088FD978u) goto L_088FD978;
    return;
L_088FD978:
    aot_gpr[17] = (aot_gpr[20] | 0u);
    goto L_088FD97C;
L_088FD97C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(448)));
    goto L_088FD984;
L_088FD984:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_088FDBF0;
      }
      goto L_088FD98C;
    }
L_088FD98C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(26)));
    aot_gpr[4] = (aot_gpr[4] >> 8u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_088FD9AC;
      }
      goto L_088FD99C;
    }
L_088FD99C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_088FD9AC;
      }
      goto L_088FD9A4;
    }
L_088FD9A4:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088FDBF0;
      }
      goto L_088FD9AC;
    }
L_088FD9AC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(704)));
    aot_gpr[6] = (aot_gpr[6] ^ aot_gpr[21]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088FDBF0;
      }
      goto L_088FD9C4;
    }
L_088FD9C4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(704)));
    aot_gpr[6] = (aot_gpr[6] ^ aot_gpr[22]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FDBF0;
      }
      goto L_088FD9DC;
    }
L_088FD9DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(732)));
    aot_gpr[8] = (0u | 3u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088FDBF0;
      }
      goto L_088FD9F0;
    }
L_088FD9F0:
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(96));
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(412)));
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[19] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) & 0x7FFFFFFFu);
    aot_gpr[5] = (16051u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 13107u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_fpr[13] = aot_fpr[13] + aot_fpr[24];
      if (branch_taken) {
          goto L_088FDA98;
      }
      goto L_088FDA24;
    }
L_088FDA24:
    aot_gpr[4] = (15948u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FDA98;
      }
      goto L_088FDA44;
    }
L_088FDA44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088FDA98;
      }
      goto L_088FDA50;
    }
L_088FDA50:
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[4] = (17056u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FDA98;
      }
      goto L_088FDA94;
    }
L_088FDA94:
    aot_gpr[19] = (aot_gpr[20] | 0u);
    goto L_088FDA98;
L_088FDA98:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FDBA0;
      }
      goto L_088FDAA0;
    }
L_088FDAA0:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FDBA0;
      }
      goto L_088FDAB0;
    }
L_088FDAB0:
    aot_gpr[31] = (0x088FDAB8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0248_entry, 248u, 18u, 0x088FC160u>(ctx, &aot_mem) && ctx.pc == 0x088FDAB8u) goto L_088FDAB8;
    return;
L_088FDAB8:
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FDACC;
      }
      goto L_088FDAC8;
    }
L_088FDAC8:
    aot_gpr[19] = (aot_gpr[20] | 0u);
    goto L_088FDACC;
L_088FDACC:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FDB0C;
      }
      goto L_088FDAD4;
    }
L_088FDAD4:
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (16672u << 16u);
      if (branch_taken) {
          goto L_088FDB0C;
      }
      goto L_088FDAF4;
    }
L_088FDAF4:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FDB0C;
      }
      goto L_088FDB08;
    }
L_088FDB08:
    aot_gpr[19] = (aot_gpr[20] | 0u);
    goto L_088FDB0C;
L_088FDB0C:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FDBA0;
      }
      goto L_088FDB14;
    }
L_088FDB14:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[4] = (16281u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[28];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_gpr[31] = (0x088FDB78u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 106u, 0x0882F904u>(ctx, &aot_mem) && ctx.pc == 0x088FDB78u) goto L_088FDB78;
    return;
L_088FDB78:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (0u | 11u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x088FDB94u);
    aot_gpr[9] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0326_entry, 326u, 113u, 0x0894AD80u>(ctx, &aot_mem) && ctx.pc == 0x088FDB94u) goto L_088FDB94;
    return;
L_088FDB94:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDBA0;
      }
      goto L_088FDB9C;
    }
L_088FDB9C:
    aot_gpr[19] = (aot_gpr[20] | 0u);
    goto L_088FDBA0;
L_088FDBA0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_088FDBF0;
      }
      goto L_088FDBA8;
    }
L_088FDBA8:
    aot_gpr[6] = (0u | 4u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(712), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(716), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(500), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(504), aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(732)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_088FDBF0;
      }
      goto L_088FDBE4;
    }
L_088FDBE4:
    aot_gpr[31] = (0x088FDBECu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 165u, 0x08863D8Cu>(ctx, &aot_mem) && ctx.pc == 0x088FDBECu) goto L_088FDBEC;
    return;
L_088FDBEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    goto L_088FDBF0;
L_088FDBF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (65520u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDC44;
      }
      goto L_088FDC14;
    }
L_088FDC14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(212)));
    aot_gpr[4] = (aot_gpr[4] & 4u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDC44;
      }
      goto L_088FDC2C;
    }
L_088FDC2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (16u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    goto L_088FDC44;
L_088FDC44:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(224)));
        goto L_088FDC78;
    }
    goto L_088FDC58;
L_088FDC58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDC94;
      }
      goto L_088FDC74;
    }
L_088FDC74:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(224)));
    goto L_088FDC78;
L_088FDC78:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(228)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(228), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088FDC9C;
      }
      goto L_088FDC94;
    }
L_088FDC94:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(228), 0u);
    goto L_088FDC9C;
L_088FDC9C:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FDD24;
      }
      goto L_088FDCA4;
    }
L_088FDCA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(424)));
    aot_gpr[4] = (0u | 330u);
    aot_gpr[5] = (aot_gpr[5] ^ 4u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 180u);
        goto L_088FDCC0;
    }
    goto L_088FDCC0;
L_088FDCC0:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(228)));
        goto L_088FDCF0;
    }
    goto L_088FDCD0;
L_088FDCD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(704)));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[22]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDD24;
      }
      goto L_088FDCEC;
    }
L_088FDCEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(228)));
    goto L_088FDCF0;
L_088FDCF0:
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FDD08;
      }
      goto L_088FDCFC;
    }
L_088FDCFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(471)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDD24;
      }
      goto L_088FDD08;
    }
L_088FDD08:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088FDD1Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 45u, 0x088FA374u>(ctx, &aot_mem) && ctx.pc == 0x088FDD1Cu) goto L_088FDD1C;
    return;
L_088FDD1C:
    aot_gpr[17] = (aot_gpr[20] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    goto L_088FDD24;
L_088FDD24:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088FDD5C;
      }
      goto L_088FDD34;
    }
L_088FDD34:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2060)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_088FDD5C;
      }
      goto L_088FDD48;
    }
L_088FDD48:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(232)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(232), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FDD60;
      }
      goto L_088FDD5C;
    }
L_088FDD5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(232), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_088FDD60;
L_088FDD60:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FDDA4;
      }
      goto L_088FDD68;
    }
L_088FDD68:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDDA4;
      }
      goto L_088FDD70;
    }
L_088FDD70:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(232)));
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FDDA4;
      }
      goto L_088FDD8C;
    }
L_088FDD8C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088FDDA0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 45u, 0x088FA374u>(ctx, &aot_mem) && ctx.pc == 0x088FDDA0u) goto L_088FDDA0;
    return;
L_088FDDA0:
    aot_gpr[17] = (aot_gpr[20] | 0u);
    goto L_088FDDA4;
L_088FDDA4:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FDDD0;
      }
      goto L_088FDDAC;
    }
L_088FDDAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(468)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDDD0;
      }
      goto L_088FDDB8;
    }
L_088FDDB8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(469)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088FDDCCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 45u, 0x088FA374u>(ctx, &aot_mem) && ctx.pc == 0x088FDDCCu) goto L_088FDDCC;
    return;
L_088FDDCC:
    aot_gpr[17] = (aot_gpr[20] | 0u);
    goto L_088FDDD0;
L_088FDDD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(472)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(16);
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
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(224)));
    aot_gpr[6] = (0u | 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[22])) && aot_fpr[13] == aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[6] = (aot_gpr[20] | 0u);
        goto L_088FDE0C;
    }
    goto L_088FDE0C;
L_088FDE0C:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(28036)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[9] ^ aot_gpr[21]);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[8]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-3132)));
    aot_gpr[8] = (aot_gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[9] ^ aot_gpr[22]);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[7] = (aot_gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(412)));
    aot_gpr[10] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[10]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(2072)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088FDE94;
      }
      goto L_088FDE84;
    }
L_088FDE84:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(2060)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_088FDE98;
      }
      goto L_088FDE94;
    }
L_088FDE94:
    aot_gpr[7] = (0u | 1u);
    goto L_088FDE98;
L_088FDE98:
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (16690u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 53479u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088FDEF4;
      }
      goto L_088FDEBC;
    }
L_088FDEBC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDEF4;
      }
      goto L_088FDEC4;
    }
L_088FDEC4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(476)));
    aot_gpr[8] = (16384u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    aot_gpr[7] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(476), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[7] = (0u | 1u);
        goto L_088FDEEC;
    }
    goto L_088FDEEC;
L_088FDEEC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(aot_gpr[7]));
      if (branch_taken) {
          goto L_088FDEF8;
      }
      goto L_088FDEF4;
    }
L_088FDEF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(476), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_088FDEF8;
L_088FDEF8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDFA8;
      }
      goto L_088FDF00;
    }
L_088FDF00:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(472));
      if (branch_taken) {
          goto L_088FDF58;
      }
      goto L_088FDF0C;
    }
L_088FDF0C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[7] = (0u | 1u);
        goto L_088FDF44;
    }
    goto L_088FDF44;
L_088FDF44:
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_088FDFA8;
      }
      goto L_088FDF58;
    }
L_088FDF58:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[8] = (49024u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[7] = (0u | 1u);
        goto L_088FDF98;
    }
    goto L_088FDF98;
L_088FDF98:
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    goto L_088FDFA8;
L_088FDFA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1988)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0250_entry, 250u, 4u, 0x088FE048u>(ctx, &aot_mem); return;
      }
      goto L_088FDFC0;
    }
L_088FDFC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[22])) && aot_fpr[12] == aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0250_entry, 250u, 4u, 0x088FE048u>(ctx, &aot_mem); return;
      }
      goto L_088FDFD8;
    }
L_088FDFD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0250_entry, 250u, 4u, 0x088FE048u>(ctx, &aot_mem); return;
      }
      goto L_088FDFF0;
    }
L_088FDFF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[22]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    ctx.pc = 0x088FE000u; return;
}

void recomp_unit_0249(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0249_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_249(Runtime &runtime) {
    runtime.register_generated_unit(249u, 0x088FD000u, 4096u, &recomp_unit_0249, &recomp_unit_0249_entry);
    runtime.register_function(0x088FD000u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD02Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD03Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD07Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD0ACu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD0BCu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD0D8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD0E0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD0E8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD0F8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD11Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD124u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD128u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD130u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD148u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD178u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD190u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD194u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD1ACu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD1E8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD1F4u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD20Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD228u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD230u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD244u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD26Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD27Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD288u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD298u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD2A0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD2BCu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD2C8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD2F8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD308u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD324u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD32Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD330u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD34Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD360u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD364u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD368u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD370u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD3D4u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD3DCu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD3F8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD414u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD42Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD430u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD438u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD4DCu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD514u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD51Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD544u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD55Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD57Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD584u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD594u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD5A4u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD5B0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD614u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD61Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD62Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD640u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD65Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD678u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD68Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD694u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD6ACu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD6FCu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD708u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD714u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD71Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD73Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD74Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD76Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD774u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD784u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD7A4u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD7A8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD7B0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD7C0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD7D0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD7D8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD7E0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD7E8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD7F4u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD800u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD810u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD820u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD828u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD838u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD840u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD854u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD868u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD86Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD874u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD894u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD8A0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD8A8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD8BCu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD8C0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD8CCu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD8D8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD8E8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD8F8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD904u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD90Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD91Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD924u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD930u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD940u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD94Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD964u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD978u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD97Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD984u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD98Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD99Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD9A4u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD9ACu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD9C4u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD9DCu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FD9F0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDA24u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDA44u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDA50u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDA94u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDA98u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDAA0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDAB0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDAB8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDAC8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDACCu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDAD4u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDAF4u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDB08u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDB0Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDB14u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDB78u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDB94u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDB9Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDBA0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDBA8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDBE4u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDBECu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDBF0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDC14u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDC2Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDC44u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDC58u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDC74u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDC78u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDC94u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDC9Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDCA4u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDCC0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDCD0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDCECu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDCF0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDCFCu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDD08u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDD1Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDD24u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDD34u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDD48u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDD5Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDD60u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDD68u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDD70u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDD8Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDDA0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDDA4u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDDACu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDDB8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDDCCu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDDD0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDE0Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDE84u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDE94u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDE98u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDEBCu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDEC4u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDEECu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDEF4u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDEF8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDF00u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDF0Cu, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDF44u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDF58u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDF98u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDFA8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDFC0u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDFD8u, &recomp_unit_0249, "recomp_unit_0249");
    runtime.register_function(0x088FDFF0u, &recomp_unit_0249, "recomp_unit_0249");
}
} // namespace psprecomp
