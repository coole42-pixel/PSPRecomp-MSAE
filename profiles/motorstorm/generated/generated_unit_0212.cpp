#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0212[1023] = {
    1, 0, 0, 2, 3, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0,
    0, 30, 0, 0, 31, 0, 32, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43, 44, 0, 0, 0, 45, 0,
    0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 59, 0, 0,
    0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0,
    66, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 81, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 92, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 97, 0, 98, 99, 0,
    0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 108, 109,
    0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0,
    0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 151, 0, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0,
    160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 167,
    0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 176, 0, 177, 0, 0,
    0, 0, 0, 0, 178, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 182, 183, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 192,
    0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217,
    0, 218, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 226, 0, 0, 227, 0, 228, 0, 229,
    0, 230, 0, 0, 231, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 236,
};
void recomp_unit_0212_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088D8000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0212[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D8000;
    case 2u: goto L_088D800C;
    case 3u: goto L_088D8010;
    case 4u: goto L_088D801C;
    case 5u: goto L_088D802C;
    case 6u: goto L_088D8034;
    case 7u: goto L_088D803C;
    case 8u: goto L_088D8044;
    case 9u: goto L_088D8060;
    case 10u: goto L_088D8074;
    case 11u: goto L_088D8094;
    case 12u: goto L_088D80A4;
    case 13u: goto L_088D80B4;
    case 14u: goto L_088D80BC;
    case 15u: goto L_088D80D0;
    case 16u: goto L_088D80DC;
    case 17u: goto L_088D80F8;
    case 18u: goto L_088D8118;
    case 19u: goto L_088D8124;
    case 20u: goto L_088D8130;
    case 21u: goto L_088D813C;
    case 22u: goto L_088D814C;
    case 23u: goto L_088D8158;
    case 24u: goto L_088D8168;
    case 25u: goto L_088D8178;
    case 26u: goto L_088D8198;
    case 27u: goto L_088D81DC;
    case 28u: goto L_088D81E4;
    case 29u: goto L_088D81EC;
    case 30u: goto L_088D8204;
    case 31u: goto L_088D8210;
    case 32u: goto L_088D8218;
    case 33u: goto L_088D821C;
    case 34u: goto L_088D8224;
    case 35u: goto L_088D823C;
    case 36u: goto L_088D824C;
    case 37u: goto L_088D8250;
    case 38u: goto L_088D8270;
    case 39u: goto L_088D8290;
    case 40u: goto L_088D82CC;
    case 41u: goto L_088D82D4;
    case 42u: goto L_088D82DC;
    case 43u: goto L_088D82E4;
    case 44u: goto L_088D82E8;
    case 45u: goto L_088D82F8;
    case 46u: goto L_088D8304;
    case 47u: goto L_088D830C;
    case 48u: goto L_088D8318;
    case 49u: goto L_088D8320;
    case 50u: goto L_088D8328;
    case 51u: goto L_088D8344;
    case 52u: goto L_088D8350;
    case 53u: goto L_088D8364;
    case 54u: goto L_088D8368;
    case 55u: goto L_088D838C;
    case 56u: goto L_088D83C0;
    case 57u: goto L_088D83D0;
    case 58u: goto L_088D83F0;
    case 59u: goto L_088D83F4;
    case 60u: goto L_088D8404;
    case 61u: goto L_088D8414;
    case 62u: goto L_088D8428;
    case 63u: goto L_088D845C;
    case 64u: goto L_088D8468;
    case 65u: goto L_088D8474;
    case 66u: goto L_088D8480;
    case 67u: goto L_088D8488;
    case 68u: goto L_088D8490;
    case 69u: goto L_088D849C;
    case 70u: goto L_088D84B0;
    case 71u: goto L_088D84DC;
    case 72u: goto L_088D84E8;
    case 73u: goto L_088D84F4;
    case 74u: goto L_088D8508;
    case 75u: goto L_088D8520;
    case 76u: goto L_088D8528;
    case 77u: goto L_088D8530;
    case 78u: goto L_088D8554;
    case 79u: goto L_088D855C;
    case 80u: goto L_088D8564;
    case 81u: goto L_088D8568;
    case 82u: goto L_088D8588;
    case 83u: goto L_088D8594;
    case 84u: goto L_088D85A4;
    case 85u: goto L_088D85B8;
    case 86u: goto L_088D85C0;
    case 87u: goto L_088D85C8;
    case 88u: goto L_088D85D0;
    case 89u: goto L_088D85D8;
    case 90u: goto L_088D85E0;
    case 91u: goto L_088D85E8;
    case 92u: goto L_088D85EC;
    case 93u: goto L_088D8634;
    case 94u: goto L_088D8650;
    case 95u: goto L_088D865C;
    case 96u: goto L_088D8664;
    case 97u: goto L_088D866C;
    case 98u: goto L_088D8674;
    case 99u: goto L_088D8678;
    case 100u: goto L_088D8684;
    case 101u: goto L_088D868C;
    case 102u: goto L_088D869C;
    case 103u: goto L_088D86B0;
    case 104u: goto L_088D86CC;
    case 105u: goto L_088D86D8;
    case 106u: goto L_088D86E0;
    case 107u: goto L_088D86E8;
    case 108u: goto L_088D86F8;
    case 109u: goto L_088D86FC;
    case 110u: goto L_088D8708;
    case 111u: goto L_088D8718;
    case 112u: goto L_088D8728;
    case 113u: goto L_088D873C;
    case 114u: goto L_088D87A0;
    case 115u: goto L_088D87A8;
    case 116u: goto L_088D87C8;
    case 117u: goto L_088D87D4;
    case 118u: goto L_088D87DC;
    case 119u: goto L_088D8838;
    case 120u: goto L_088D8840;
    case 121u: goto L_088D8848;
    case 122u: goto L_088D8868;
    case 123u: goto L_088D8870;
    case 124u: goto L_088D8878;
    case 125u: goto L_088D8880;
    case 126u: goto L_088D88BC;
    case 127u: goto L_088D88C8;
    case 128u: goto L_088D88D8;
    case 129u: goto L_088D88E0;
    case 130u: goto L_088D88E8;
    case 131u: goto L_088D8908;
    case 132u: goto L_088D8910;
    case 133u: goto L_088D8918;
    case 134u: goto L_088D8934;
    case 135u: goto L_088D893C;
    case 136u: goto L_088D8944;
    case 137u: goto L_088D894C;
    case 138u: goto L_088D8954;
    case 139u: goto L_088D8960;
    case 140u: goto L_088D8968;
    case 141u: goto L_088D8974;
    case 142u: goto L_088D8980;
    case 143u: goto L_088D89C0;
    case 144u: goto L_088D89F0;
    case 145u: goto L_088D8A24;
    case 146u: goto L_088D8A2C;
    case 147u: goto L_088D8A3C;
    case 148u: goto L_088D8A48;
    case 149u: goto L_088D8A50;
    case 150u: goto L_088D8A68;
    case 151u: goto L_088D8A6C;
    case 152u: goto L_088D8A84;
    case 153u: goto L_088D8AA4;
    case 154u: goto L_088D8AB8;
    case 155u: goto L_088D8AC0;
    case 156u: goto L_088D8ACC;
    case 157u: goto L_088D8AD8;
    case 158u: goto L_088D8AE4;
    case 159u: goto L_088D8AF0;
    case 160u: goto L_088D8B00;
    case 161u: goto L_088D8B0C;
    case 162u: goto L_088D8B20;
    case 163u: goto L_088D8B30;
    case 164u: goto L_088D8B3C;
    case 165u: goto L_088D8B54;
    case 166u: goto L_088D8B78;
    case 167u: goto L_088D8B7C;
    case 168u: goto L_088D8B84;
    case 169u: goto L_088D8B98;
    case 170u: goto L_088D8BAC;
    case 171u: goto L_088D8BB4;
    case 172u: goto L_088D8BB8;
    case 173u: goto L_088D8BCC;
    case 174u: goto L_088D8BD8;
    case 175u: goto L_088D8BE4;
    case 176u: goto L_088D8BEC;
    case 177u: goto L_088D8BF4;
    case 178u: goto L_088D8C10;
    case 179u: goto L_088D8C14;
    case 180u: goto L_088D8C24;
    case 181u: goto L_088D8C2C;
    case 182u: goto L_088D8C40;
    case 183u: goto L_088D8C44;
    case 184u: goto L_088D8C54;
    case 185u: goto L_088D8C5C;
    case 186u: goto L_088D8CA0;
    case 187u: goto L_088D8CA8;
    case 188u: goto L_088D8CBC;
    case 189u: goto L_088D8CC4;
    case 190u: goto L_088D8CDC;
    case 191u: goto L_088D8CF0;
    case 192u: goto L_088D8CFC;
    case 193u: goto L_088D8D10;
    case 194u: goto L_088D8D18;
    case 195u: goto L_088D8D2C;
    case 196u: goto L_088D8D38;
    case 197u: goto L_088D8D40;
    case 198u: goto L_088D8D58;
    case 199u: goto L_088D8D60;
    case 200u: goto L_088D8D74;
    case 201u: goto L_088D8D98;
    case 202u: goto L_088D8DA8;
    case 203u: goto L_088D8DB0;
    case 204u: goto L_088D8DB8;
    case 205u: goto L_088D8DC0;
    case 206u: goto L_088D8DC8;
    case 207u: goto L_088D8DD0;
    case 208u: goto L_088D8DD8;
    case 209u: goto L_088D8DE0;
    case 210u: goto L_088D8DF0;
    case 211u: goto L_088D8E00;
    case 212u: goto L_088D8E24;
    case 213u: goto L_088D8E40;
    case 214u: goto L_088D8E4C;
    case 215u: goto L_088D8E54;
    case 216u: goto L_088D8E6C;
    case 217u: goto L_088D8E7C;
    case 218u: goto L_088D8E84;
    case 219u: goto L_088D8E88;
    case 220u: goto L_088D8E9C;
    case 221u: goto L_088D8EDC;
    case 222u: goto L_088D8EFC;
    case 223u: goto L_088D8F1C;
    case 224u: goto L_088D8F38;
    case 225u: goto L_088D8F5C;
    case 226u: goto L_088D8F60;
    case 227u: goto L_088D8F6C;
    case 228u: goto L_088D8F74;
    case 229u: goto L_088D8F7C;
    case 230u: goto L_088D8F84;
    case 231u: goto L_088D8F90;
    case 232u: goto L_088D8F94;
    case 233u: goto L_088D8F9C;
    case 234u: goto L_088D8FE0;
    case 235u: goto L_088D8FF0;
    case 236u: goto L_088D8FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D8000:
    aot_gpr[5] = (0u | 6u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8010;
      }
      goto L_088D800C;
    }
L_088D800C:
    aot_gpr[7] = (0u | 4u);
    goto L_088D8010;
L_088D8010:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8034;
      }
      goto L_088D801C;
    }
L_088D801C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088D802Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 79u, 0x088CE838u>(ctx, &aot_mem) && ctx.pc == 0x088D802Cu) goto L_088D802C;
    return;
L_088D802C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_088D80A4;
      }
      goto L_088D8034;
    }
L_088D8034:
    aot_gpr[31] = (0x088D803Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D803Cu) goto L_088D803C;
    return;
L_088D803C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D80A4;
      }
      goto L_088D8044;
    }
L_088D8044:
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12));
    aot_gpr[31] = (0x088D8060u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D8060u) goto L_088D8060;
    return;
L_088D8060:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088D8074u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 79u, 0x088CE838u>(ctx, &aot_mem) && ctx.pc == 0x088D8074u) goto L_088D8074;
    return;
L_088D8074:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12));
    aot_gpr[31] = (0x088D8094u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D8094u) goto L_088D8094;
    return;
L_088D8094:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_088D80A4;
L_088D80A4:
    aot_gpr[20] = (49152u << 16u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (16384u << 16u);
    goto L_088D80B4;
L_088D80B4:
    aot_gpr[31] = (0x088D80BCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D80BCu) goto L_088D80BC;
    return;
L_088D80BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[31] = (0x088D80D0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088D80D0u) goto L_088D80D0;
    return;
L_088D80D0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8168;
      }
      goto L_088D80DC;
    }
L_088D80DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088D8168;
      }
      goto L_088D80F8;
    }
L_088D80F8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(24)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_088D8158;
      }
      goto L_088D8118;
    }
L_088D8118:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(72), aot_gpr[6]);
      if (branch_taken) {
          goto L_088D8130;
      }
      goto L_088D8124;
    }
L_088D8124:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(88)));
    aot_gpr[6] = (aot_gpr[6] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(88), aot_gpr[6]);
    goto L_088D8130;
L_088D8130:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088D814C;
      }
      goto L_088D813C;
    }
L_088D813C:
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088D8158;
      }
      goto L_088D814C;
    }
L_088D814C:
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088D8158;
L_088D8158:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D80F8;
      }
      goto L_088D8168;
    }
L_088D8168:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D80B4;
      }
      goto L_088D8178;
    }
L_088D8178:
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
L_088D8198:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_088D8270;
      }
      goto L_088D81DC;
    }
L_088D81DC:
    aot_gpr[17] = (0u | 6u);
    aot_gpr[19] = (0u | 0u);
    goto L_088D81E4;
L_088D81E4:
    aot_gpr[31] = (0x088D81ECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D81ECu) goto L_088D81EC;
    return;
L_088D81EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
        goto L_088D8250;
    }
    goto L_088D8204;
L_088D8204:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(14)));
    if (aot_gpr[4] == aot_gpr[18]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(12)));
        goto L_088D821C;
    }
    goto L_088D8210;
L_088D8210:
    if (aot_gpr[4] != aot_gpr[17]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
        goto L_088D8250;
    }
    goto L_088D8218;
L_088D8218:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_088D821C;
L_088D821C:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
        goto L_088D8250;
    }
    goto L_088D8224;
L_088D8224:
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088D823Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 174u, 0x088D7EC0u>(ctx, &aot_mem) && ctx.pc == 0x088D823Cu) goto L_088D823C;
    return;
L_088D823C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088D824Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 183u, 0x088D7FA0u>(ctx, &aot_mem) && ctx.pc == 0x088D824Cu) goto L_088D824C;
    return;
L_088D824C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    goto L_088D8250;
L_088D8250:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088D81E4;
      }
      goto L_088D8270;
    }
L_088D8270:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8290:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088D82D4;
      }
      goto L_088D82CC;
    }
L_088D82CC:
    aot_gpr[21] = (aot_gpr[16] | 0u);
    aot_gpr[20] = (0u | 1u);
    goto L_088D82D4;
L_088D82D4:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D82E8;
      }
      goto L_088D82DC;
    }
L_088D82DC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D82E8;
      }
      goto L_088D82E4;
    }
L_088D82E4:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(5));
    goto L_088D82E8;
L_088D82E8:
    aot_gpr[19] = (aot_gpr[19] << 2u);
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[18] + aot_gpr[19]);
      if (branch_taken) {
          goto L_088D830C;
      }
      goto L_088D82F8;
    }
L_088D82F8:
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D830C;
      }
      goto L_088D8304;
    }
L_088D8304:
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(-2));
    aot_gpr[17] = (0u | 2u);
    goto L_088D830C;
L_088D830C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2124)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8368;
      }
      goto L_088D8318;
    }
L_088D8318:
    aot_gpr[31] = (0x088D8320u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 103u, 0x0885A688u>(ctx, &aot_mem) && ctx.pc == 0x088D8320u) goto L_088D8320;
    return;
L_088D8320:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8368;
      }
      goto L_088D8328;
    }
L_088D8328:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088D8344u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088D8344u) goto L_088D8344;
    return;
L_088D8344:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8368;
      }
      goto L_088D8350;
    }
L_088D8350:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088D8364u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 142u, 0x088D6938u>(ctx, &aot_mem) && ctx.pc == 0x088D8364u) goto L_088D8364;
    return;
L_088D8364:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(2124), aot_gpr[2]);
    goto L_088D8368;
L_088D8368:
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
L_088D838C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(812)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D83F0;
      }
      goto L_088D83C0;
    }
L_088D83C0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088D83D0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_088D8290;
L_088D83D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(812)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D83C0;
      }
      goto L_088D83F0;
    }
L_088D83F0:
    aot_gpr[17] = (0u | 1u);
    goto L_088D83F4;
L_088D83F4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D8404u);
    aot_gpr[6] = (0u | 0u);
    goto L_088D8290;
L_088D8404:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D83F4;
      }
      goto L_088D8414;
    }
L_088D8414:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8428:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] & 255u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(5112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088D845Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 22u, 0x088D616Cu>(ctx, &aot_mem) && ctx.pc == 0x088D845Cu) goto L_088D845C;
    return;
L_088D845C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2191)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2189), static_cast<std::uint8_t>(0u));
        goto L_088D85EC;
    }
    goto L_088D8468;
L_088D8468:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2186), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
      if (branch_taken) {
          goto L_088D849C;
      }
      goto L_088D8474;
    }
L_088D8474:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088D8480u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 112u, 0x088E269Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8480u) goto L_088D8480;
    return;
L_088D8480:
    aot_gpr[31] = (0x088D8488u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 160u, 0x088D6B0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8488u) goto L_088D8488;
    return;
L_088D8488:
    aot_gpr[31] = (0x088D8490u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 3u, 0x088D5010u>(ctx, &aot_mem) && ctx.pc == 0x088D8490u) goto L_088D8490;
    return;
L_088D8490:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1308)));
      if (branch_taken) {
          goto L_088D84B0;
      }
      goto L_088D849C;
    }
L_088D849C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2178)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1204)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1308), aot_gpr[4]);
    goto L_088D84B0;
L_088D84B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(972)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(48));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x088D84DCu);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D84DCu) goto L_088D84DC;
    return;
L_088D84DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1308)));
    aot_gpr[31] = (0x088D84E8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 171u, 0x088D6BC4u>(ctx, &aot_mem) && ctx.pc == 0x088D84E8u) goto L_088D84E8;
    return;
L_088D84E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[31] = (0x088D84F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 112u, 0x088CB788u>(ctx, &aot_mem) && ctx.pc == 0x088D84F4u) goto L_088D84F4;
    return;
L_088D84F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1308)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x088D8508u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 198u, 0x088D6E04u>(ctx, &aot_mem) && ctx.pc == 0x088D8508u) goto L_088D8508;
    return;
L_088D8508:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(1960), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088D8520u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 22u, 0x088D616Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8520u) goto L_088D8520;
    return;
L_088D8520:
    aot_gpr[31] = (0x088D8528u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 1u, 0x088D7004u>(ctx, &aot_mem) && ctx.pc == 0x088D8528u) goto L_088D8528;
    return;
L_088D8528:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
      if (branch_taken) {
          goto L_088D8568;
      }
      goto L_088D8530;
    }
L_088D8530:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(432));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(432));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(292)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(272)));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[31] = (0x088D8554u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 5u, 0x088D7038u>(ctx, &aot_mem) && ctx.pc == 0x088D8554u) goto L_088D8554;
    return;
L_088D8554:
    aot_gpr[31] = (0x088D855Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 19u, 0x088D7194u>(ctx, &aot_mem) && ctx.pc == 0x088D855Cu) goto L_088D855C;
    return;
L_088D855C:
    aot_gpr[31] = (0x088D8564u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 43u, 0x088D73D8u>(ctx, &aot_mem) && ctx.pc == 0x088D8564u) goto L_088D8564;
    return;
L_088D8564:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    goto L_088D8568;
L_088D8568:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5104)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088D8588u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(204), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 75u, 0x088D763Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8588u) goto L_088D8588;
    return;
L_088D8588:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088D8594u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D8594u) goto L_088D8594;
    return;
L_088D8594:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[31] = (0x088D85A4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 26u, 0x088E01F8u>(ctx, &aot_mem) && ctx.pc == 0x088D85A4u) goto L_088D85A4;
    return;
L_088D85A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1308)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088D85B8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 151u, 0x088D7D00u>(ctx, &aot_mem) && ctx.pc == 0x088D85B8u) goto L_088D85B8;
    return;
L_088D85B8:
    aot_gpr[31] = (0x088D85C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088D8198;
L_088D85C0:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D85D8;
      }
      goto L_088D85C8;
    }
L_088D85C8:
    aot_gpr[31] = (0x088D85D0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088D838C;
L_088D85D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85E8;
      }
      goto L_088D85D8;
    }
L_088D85D8:
    aot_gpr[31] = (0x088D85E0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 97u, 0x088D66C4u>(ctx, &aot_mem) && ctx.pc == 0x088D85E0u) goto L_088D85E0;
    return;
L_088D85E0:
    aot_gpr[31] = (0x088D85E8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088D838C;
L_088D85E8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2189), static_cast<std::uint8_t>(0u));
    goto L_088D85EC;
L_088D85EC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2185), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2192), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2194), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2197), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2200), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2172)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2180), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2204), aot_gpr[4]);
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
L_088D8634:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D8664;
      }
      goto L_088D8650;
    }
L_088D8650:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D866C;
      }
      goto L_088D865C;
    }
L_088D865C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8674;
      }
      goto L_088D8664;
    }
L_088D8664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D869C;
      }
      goto L_088D866C;
    }
L_088D866C:
    aot_gpr[31] = (0x088D8674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 37u, 0x08920350u>(ctx, &aot_mem) && ctx.pc == 0x088D8674u) goto L_088D8674;
    return;
L_088D8674:
    aot_gpr[17] = (0u | 0u);
    goto L_088D8678;
L_088D8678:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2124)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D868C;
      }
      goto L_088D8684;
    }
L_088D8684:
    aot_gpr[31] = (0x088D868Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 37u, 0x08920350u>(ctx, &aot_mem) && ctx.pc == 0x088D868Cu) goto L_088D868C;
    return;
L_088D868C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D8678;
      }
      goto L_088D869C;
    }
L_088D869C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D86B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D86E0;
      }
      goto L_088D86CC;
    }
L_088D86CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D86E8;
      }
      goto L_088D86D8;
    }
L_088D86D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D86F8;
      }
      goto L_088D86E0;
    }
L_088D86E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8728;
      }
      goto L_088D86E8;
    }
L_088D86E8:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088D86F8u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x088D86F8u) goto L_088D86F8;
    return;
L_088D86F8:
    aot_gpr[17] = (0u | 0u);
    goto L_088D86FC;
L_088D86FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2124)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8718;
      }
      goto L_088D8708;
    }
L_088D8708:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088D8718u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x088D8718u) goto L_088D8718;
    return;
L_088D8718:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D86FC;
      }
      goto L_088D8728;
    }
L_088D8728:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D873C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-28764)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28760)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x088D87A0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x088D87A0u) goto L_088D87A0;
    return;
L_088D87A0:
    aot_gpr[31] = (0x088D87A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x088D87A8u) goto L_088D87A8;
    return;
L_088D87A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-28764)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28760)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[31] = (0x088D87C8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x088D87C8u) goto L_088D87C8;
    return;
L_088D87C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (2216u << 16u);
      if (branch_taken) {
          goto L_088D8954;
      }
      goto L_088D87D4;
    }
L_088D87D4:
    aot_gpr[31] = (0x088D87DCu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_088D8634;
L_088D87DC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[7] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 7u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[30] = (0u | 96u);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[16] = (1u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(aot_gpr[30]));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x088D8838u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088D8838u) goto L_088D8838;
    return;
L_088D8838:
    aot_gpr[31] = (0x088D8840u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x088D8840u) goto L_088D8840;
    return;
L_088D8840:
    aot_gpr[31] = (0x088D8848u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x088D8848u) goto L_088D8848;
    return;
L_088D8848:
    aot_gpr[23] = (0u | 6u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-28804)));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[23]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x088D8868u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088D8868u) goto L_088D8868;
    return;
L_088D8868:
    aot_gpr[31] = (0x088D8870u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 15u, 0x08928174u>(ctx, &aot_mem) && ctx.pc == 0x088D8870u) goto L_088D8870;
    return;
L_088D8870:
    aot_gpr[31] = (0x088D8878u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x088D8878u) goto L_088D8878;
    return;
L_088D8878:
    aot_gpr[31] = (0x088D8880u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x088D8880u) goto L_088D8880;
    return;
L_088D8880:
    aot_gpr[4] = (0u | 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(972)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(72));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (0u | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088D88BCu);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D88BCu) goto L_088D88BC;
    return;
L_088D88BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2160)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D88D8;
      }
      goto L_088D88C8;
    }
L_088D88C8:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088D88D8u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x088D88D8u) goto L_088D88D8;
    return;
L_088D88D8:
    aot_gpr[31] = (0x088D88E0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_088D86B0;
L_088D88E0:
    aot_gpr[31] = (0x088D88E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 117u, 0x08935D5Cu>(ctx, &aot_mem) && ctx.pc == 0x088D88E8u) goto L_088D88E8;
    return;
L_088D88E8:
    aot_gpr[4] = (0u | 7u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-28804)));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(aot_gpr[30]));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x088D8908u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088D8908u) goto L_088D8908;
    return;
L_088D8908:
    aot_gpr[31] = (0x088D8910u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x088D8910u) goto L_088D8910;
    return;
L_088D8910:
    aot_gpr[31] = (0x088D8918u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x088D8918u) goto L_088D8918;
    return;
L_088D8918:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-28804)));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[23]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x088D8934u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088D8934u) goto L_088D8934;
    return;
L_088D8934:
    aot_gpr[31] = (0x088D893Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 15u, 0x08928174u>(ctx, &aot_mem) && ctx.pc == 0x088D893Cu) goto L_088D893C;
    return;
L_088D893C:
    aot_gpr[31] = (0x088D8944u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x088D8944u) goto L_088D8944;
    return;
L_088D8944:
    aot_gpr[31] = (0x088D894Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x088D894Cu) goto L_088D894C;
    return;
L_088D894C:
    aot_gpr[31] = (0x088D8954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 118u, 0x08935D6Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8954u) goto L_088D8954;
    return;
L_088D8954:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8968;
      }
      goto L_088D8960;
    }
L_088D8960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-28764)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    goto L_088D8968;
L_088D8968:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(5)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_088D8980;
    }
    goto L_088D8974;
L_088D8974:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28760)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_088D8980;
L_088D8980:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[6] = (aot_gpr[6] ^ aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[7] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088D89C0u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088D89C0u) goto L_088D89C0;
    return;
L_088D89C0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D89F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2172)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(246))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8A68;
      }
      goto L_088D8A24;
    }
L_088D8A24:
    aot_gpr[31] = (0x088D8A2Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x088D8A2Cu) goto L_088D8A2C;
    return;
L_088D8A2C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(11))))));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_088D8A48;
      }
      goto L_088D8A3C;
    }
L_088D8A3C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_088D8A50;
      }
      goto L_088D8A48;
    }
L_088D8A48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_088D8A6C;
      }
      goto L_088D8A50;
    }
L_088D8A50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2172)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(246))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8A24;
      }
      goto L_088D8A68;
    }
L_088D8A68:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088D8A6C;
L_088D8A6C:
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
L_088D8A84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2205))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088D8AC0;
      }
      goto L_088D8AA4;
    }
L_088D8AA4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2205), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2205))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8AC0;
      }
      goto L_088D8AB8;
    }
L_088D8AB8:
    aot_gpr[31] = (0x088D8AC0u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF7Cu;
    return;
L_088D8AC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2195)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088D8B00;
      }
      goto L_088D8ACC;
    }
L_088D8ACC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25560)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088D8B00;
      }
      goto L_088D8AD8;
    }
L_088D8AD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25564)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088D8B00;
      }
      goto L_088D8AE4;
    }
L_088D8AE4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2205), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x088D8AF0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 205u, 0x088D5E0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8AF0u) goto L_088D8AF0;
    return;
L_088D8AF0:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(5232), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2195), static_cast<std::uint8_t>(0u));
    goto L_088D8B00;
L_088D8B00:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2180))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088D8B84;
      }
      goto L_088D8B0C;
    }
L_088D8B0C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088D8B20u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_088D89F0;
L_088D8B20:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2182))))));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2180))))));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D8B7C;
      }
      goto L_088D8B30;
    }
L_088D8B30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2172)));
    aot_gpr[31] = (0x088D8B3Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x088D8B3Cu) goto L_088D8B3C;
    return;
L_088D8B3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1944)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x088D8B54u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 95u, 0x088D77F0u>(ctx, &aot_mem) && ctx.pc == 0x088D8B54u) goto L_088D8B54;
    return;
L_088D8B54:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2180))))));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x088D8B78u);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 115u, 0x088D79B8u>(ctx, &aot_mem) && ctx.pc == 0x088D8B78u) goto L_088D8B78;
    return;
L_088D8B78:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2180))))));
    goto L_088D8B7C;
L_088D8B7C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2180), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_088D8B84;
L_088D8B84:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8B98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D8BB8;
      }
      goto L_088D8BAC;
    }
L_088D8BAC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8BB8;
      }
      goto L_088D8BB4;
    }
L_088D8BB4:
    aot_gpr[16] = (aot_gpr[6] + static_cast<std::uint32_t>(5));
    goto L_088D8BB8;
L_088D8BB8:
    aot_gpr[16] = (aot_gpr[16] << 2u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2124)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8C14;
      }
      goto L_088D8BCC;
    }
L_088D8BCC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8BEC;
      }
      goto L_088D8BD8;
    }
L_088D8BD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088D8BE4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 63u, 0x08927680u>(ctx, &aot_mem) && ctx.pc == 0x088D8BE4u) goto L_088D8BE4;
    return;
L_088D8BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8C10;
      }
      goto L_088D8BEC;
    }
L_088D8BEC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8C10;
      }
      goto L_088D8BF4;
    }
L_088D8BF4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088D8C10u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D8C10u) goto L_088D8C10;
    return;
L_088D8C10:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2124), 0u);
    goto L_088D8C14;
L_088D8C14:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8C24:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    goto L_088D8C2C;
L_088D8C2C:
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(1424))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8C44;
      }
      goto L_088D8C40;
    }
L_088D8C40:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    goto L_088D8C44;
L_088D8C44:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8C2C;
      }
      goto L_088D8C54;
    }
L_088D8C54:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8C5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1312));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[7] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088D8CA8;
      }
      goto L_088D8CA0;
    }
L_088D8CA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 31u);
      if (branch_taken) {
          goto L_088D8E00;
      }
      goto L_088D8CA8;
    }
L_088D8CA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 7u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D8CC4;
      }
      goto L_088D8CBC;
    }
L_088D8CBC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 30u);
      if (branch_taken) {
          goto L_088D8E00;
      }
      goto L_088D8CC4;
    }
L_088D8CC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(50)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088D8CFC;
      }
      goto L_088D8CDC;
    }
L_088D8CDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8CFC;
      }
      goto L_088D8CF0;
    }
L_088D8CF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-2));
    goto L_088D8CFC;
L_088D8CFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D8D38;
      }
      goto L_088D8D10;
    }
L_088D8D10:
    aot_gpr[31] = (0x088D8D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D8D18u) goto L_088D8D18;
    return;
L_088D8D18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[31] = (0x088D8D2Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088D8D2Cu) goto L_088D8D2C;
    return;
L_088D8D2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088D8D60;
      }
      goto L_088D8D38;
    }
L_088D8D38:
    aot_gpr[31] = (0x088D8D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D8D40u) goto L_088D8D40;
    return;
L_088D8D40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x088D8D58u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088D8D58u) goto L_088D8D58;
    return;
L_088D8D58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_088D8D60;
L_088D8D60:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8E00;
      }
      goto L_088D8D74;
    }
L_088D8D74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 11u);
    aot_gpr[8] = (0u | 12u);
    aot_gpr[9] = (0u | 13u);
    aot_gpr[10] = (0u | 14u);
    aot_gpr[11] = (0u | 31u);
    aot_gpr[2] = (0u | 2u);
    aot_gpr[3] = (0u | 30u);
    aot_gpr[12] = (0u | 3u);
    goto L_088D8D98;
L_088D8D98:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[13] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D8DE0;
      }
      goto L_088D8DA8;
    }
L_088D8DA8:
    { const bool branch_taken = aot_gpr[13] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088D8DE0;
      }
      goto L_088D8DB0;
    }
L_088D8DB0:
    { const bool branch_taken = aot_gpr[13] == aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_088D8DE0;
      }
      goto L_088D8DB8;
    }
L_088D8DB8:
    { const bool branch_taken = aot_gpr[13] == aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_088D8DE0;
      }
      goto L_088D8DC0;
    }
L_088D8DC0:
    { const bool branch_taken = aot_gpr[13] != aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_088D8DD0;
      }
      goto L_088D8DC8;
    }
L_088D8DC8:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088D8DE0;
      }
      goto L_088D8DD0;
    }
L_088D8DD0:
    { const bool branch_taken = aot_gpr[13] != aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D8DF0;
      }
      goto L_088D8DD8;
    }
L_088D8DD8:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[12];
    // nop
      if (branch_taken) {
          goto L_088D8DF0;
      }
      goto L_088D8DE0;
    }
L_088D8DE0:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[13] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088D8E00;
      }
      goto L_088D8DF0;
    }
L_088D8DF0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[13] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D8D98;
      }
      goto L_088D8E00;
    }
L_088D8E00:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_088D8E24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088D8E40u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    goto L_088D8C5C;
L_088D8E40:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8E84;
      }
      goto L_088D8E4C;
    }
L_088D8E4C:
    aot_gpr[31] = (0x088D8E54u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D8E54u) goto L_088D8E54;
    return;
L_088D8E54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x088D8E6Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 7u, 0x088E606Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8E6Cu) goto L_088D8E6C;
    return;
L_088D8E6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[31] = (0x088D8E7Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3)));
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 183u, 0x0885AB7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8E7Cu) goto L_088D8E7C;
    return;
L_088D8E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8E88;
      }
      goto L_088D8E84;
    }
L_088D8E84:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088D8E88;
L_088D8E88:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8E9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[8] << 16u);
    aot_gpr[7] = (aot_gpr[7] << 8u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] - aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088D8EDCu);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D8EDCu) goto L_088D8EDC;
    return;
L_088D8EDC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(972)));
    aot_gpr[17] = (aot_gpr[7] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[18] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[31] = (0x088D8EFCu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    goto L_088D8C5C;
L_088D8EFC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (0u | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x088D8F1Cu);
    aot_gpr[8] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D8F1Cu) goto L_088D8F1C;
    return;
L_088D8F1C:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8F38:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2178)));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(84));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8F90;
      }
      goto L_088D8F5C;
    }
L_088D8F5C:
    aot_gpr[7] = (0u | 0u);
    goto L_088D8F60;
L_088D8F60:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8F84;
      }
      goto L_088D8F6C;
    }
L_088D8F6C:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D8F7C;
      }
      goto L_088D8F74;
    }
L_088D8F74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D8F84;
      }
      goto L_088D8F7C;
    }
L_088D8F7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088D8F94;
      }
      goto L_088D8F84;
    }
L_088D8F84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8F60;
      }
      goto L_088D8F90;
    }
L_088D8F90:
    aot_gpr[2] = (0u | 0u);
    goto L_088D8F94;
L_088D8F94:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8F9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 6 ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 1u, 0x088D9000u>(ctx, &aot_mem); return;
      }
      goto L_088D8FE0;
    }
L_088D8FE0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D8FF0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_088D8F38;
L_088D8FF0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 2u, 0x088D9008u>(ctx, &aot_mem); return;
      }
      goto L_088D8FF8;
    }
L_088D8FF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 34u, 0x088D91C8u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 1u, 0x088D9000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0212(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0212_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_212(Runtime &runtime) {
    runtime.register_generated_unit(212u, 0x088D8000u, 4096u, &recomp_unit_0212, &recomp_unit_0212_entry);
    runtime.register_function(0x088D8000u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D800Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8010u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D801Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D802Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8034u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D803Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8044u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8060u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8074u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8094u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D80A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D80B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D80BCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D80D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D80DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D80F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8118u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8124u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8130u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D813Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D814Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8158u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8168u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8178u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8198u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D81DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D81E4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D81ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8204u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8210u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8218u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D821Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8224u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D823Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D824Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8250u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8270u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8290u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D82CCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D82D4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D82DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D82E4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D82E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D82F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8304u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D830Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8318u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8320u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8328u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8344u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8350u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8364u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8368u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D838Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D83C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D83D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D83F0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D83F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8404u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8414u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8428u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D845Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8468u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8474u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8480u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8488u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8490u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D849Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D84B0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D84DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D84E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D84F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8508u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8520u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8528u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8530u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8554u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D855Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8564u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8568u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8588u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8594u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D85A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D85B8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D85C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D85C8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D85D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D85D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D85E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D85E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D85ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8634u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8650u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D865Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8664u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D866Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8674u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8678u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8684u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D868Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D869Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D86B0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D86CCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D86D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D86E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D86E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D86F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D86FCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8708u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8718u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8728u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D873Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D87A0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D87A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D87C8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D87D4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D87DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8838u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8840u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8848u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8868u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8870u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8878u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8880u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D88BCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D88C8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D88D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D88E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D88E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8908u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8910u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8918u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8934u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D893Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8944u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D894Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8954u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8960u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8968u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8974u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8980u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D89C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D89F0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8A24u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8A2Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8A3Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8A48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8A50u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8A68u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8A6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8A84u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8AA4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8AB8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8AC0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8ACCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8AD8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8AE4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8AF0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8B00u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8B0Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8B20u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8B30u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8B3Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8B54u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8B78u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8B7Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8B84u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8B98u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8BACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8BB4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8BB8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8BCCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8BD8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8BE4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8BECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8BF4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8C10u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8C14u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8C24u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8C2Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8C40u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8C44u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8C54u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8C5Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8CA0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8CA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8CBCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8CC4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8CDCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8CF0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8CFCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8D10u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8D18u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8D2Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8D38u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8D40u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8D58u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8D60u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8D74u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8D98u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8DA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8DB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8DB8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8DC0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8DC8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8DD0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8DD8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8DE0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8DF0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8E00u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8E24u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8E40u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8E4Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8E54u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8E6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8E7Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8E84u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8E88u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8E9Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8EDCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8EFCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8F1Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8F38u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8F5Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8F60u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8F6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8F74u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8F7Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8F84u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8F90u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8F94u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8F9Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8FE0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8FF0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x088D8FF8u, &recomp_unit_0212, "recomp_unit_0212");
}
} // namespace psprecomp
