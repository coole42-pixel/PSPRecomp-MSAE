#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0420[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 6, 7, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 12, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 23, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 40, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 47, 48, 0,
    0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 53, 0, 0, 54, 0, 0,
    55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 72, 73, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 75, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 82, 0, 83,
    0, 84, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0,
    0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0,
    100, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0,
    121, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 131, 0, 132,
    0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139,
    0, 0, 140, 0, 141, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0,
    0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0,
    172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0,
    0, 0, 199, 0, 200, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 207, 0, 208, 0,
    0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    215, 0, 216, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 222, 223, 0, 0, 0, 0, 0, 224, 0,
    225, 0, 226, 0, 0, 0, 0, 227, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233,
};
void recomp_unit_0420_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089A8004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0420[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A8004;
    case 2u: goto L_089A802C;
    case 3u: goto L_089A8034;
    case 4u: goto L_089A8060;
    case 5u: goto L_089A8064;
    case 6u: goto L_089A8068;
    case 7u: goto L_089A806C;
    case 8u: goto L_089A8084;
    case 9u: goto L_089A80E0;
    case 10u: goto L_089A80E8;
    case 11u: goto L_089A80F0;
    case 12u: goto L_089A80F4;
    case 13u: goto L_089A8110;
    case 14u: goto L_089A8128;
    case 15u: goto L_089A8130;
    case 16u: goto L_089A813C;
    case 17u: goto L_089A814C;
    case 18u: goto L_089A8164;
    case 19u: goto L_089A8184;
    case 20u: goto L_089A8190;
    case 21u: goto L_089A819C;
    case 22u: goto L_089A81B0;
    case 23u: goto L_089A81BC;
    case 24u: goto L_089A81C0;
    case 25u: goto L_089A81D8;
    case 26u: goto L_089A81E4;
    case 27u: goto L_089A8210;
    case 28u: goto L_089A821C;
    case 29u: goto L_089A8228;
    case 30u: goto L_089A823C;
    case 31u: goto L_089A8258;
    case 32u: goto L_089A8288;
    case 33u: goto L_089A8294;
    case 34u: goto L_089A829C;
    case 35u: goto L_089A82A4;
    case 36u: goto L_089A82AC;
    case 37u: goto L_089A82B8;
    case 38u: goto L_089A82D4;
    case 39u: goto L_089A82DC;
    case 40u: goto L_089A82E0;
    case 41u: goto L_089A82FC;
    case 42u: goto L_089A832C;
    case 43u: goto L_089A8334;
    case 44u: goto L_089A833C;
    case 45u: goto L_089A8360;
    case 46u: goto L_089A8370;
    case 47u: goto L_089A8378;
    case 48u: goto L_089A837C;
    case 49u: goto L_089A8390;
    case 50u: goto L_089A8398;
    case 51u: goto L_089A83DC;
    case 52u: goto L_089A83E8;
    case 53u: goto L_089A83EC;
    case 54u: goto L_089A83F8;
    case 55u: goto L_089A8404;
    case 56u: goto L_089A8414;
    case 57u: goto L_089A8428;
    case 58u: goto L_089A8430;
    case 59u: goto L_089A843C;
    case 60u: goto L_089A8450;
    case 61u: goto L_089A8470;
    case 62u: goto L_089A849C;
    case 63u: goto L_089A84B0;
    case 64u: goto L_089A84CC;
    case 65u: goto L_089A84F8;
    case 66u: goto L_089A8504;
    case 67u: goto L_089A8518;
    case 68u: goto L_089A8534;
    case 69u: goto L_089A8560;
    case 70u: goto L_089A8568;
    case 71u: goto L_089A8570;
    case 72u: goto L_089A8578;
    case 73u: goto L_089A857C;
    case 74u: goto L_089A8598;
    case 75u: goto L_089A85A4;
    case 76u: goto L_089A85A8;
    case 77u: goto L_089A85B0;
    case 78u: goto L_089A85C0;
    case 79u: goto L_089A85D8;
    case 80u: goto L_089A85E4;
    case 81u: goto L_089A85F0;
    case 82u: goto L_089A85F8;
    case 83u: goto L_089A8600;
    case 84u: goto L_089A8608;
    case 85u: goto L_089A8614;
    case 86u: goto L_089A861C;
    case 87u: goto L_089A8634;
    case 88u: goto L_089A8644;
    case 89u: goto L_089A8648;
    case 90u: goto L_089A8650;
    case 91u: goto L_089A8664;
    case 92u: goto L_089A8674;
    case 93u: goto L_089A867C;
    case 94u: goto L_089A8690;
    case 95u: goto L_089A86A4;
    case 96u: goto L_089A86B8;
    case 97u: goto L_089A86CC;
    case 98u: goto L_089A86E0;
    case 99u: goto L_089A86F4;
    case 100u: goto L_089A8704;
    case 101u: goto L_089A8714;
    case 102u: goto L_089A8728;
    case 103u: goto L_089A8738;
    case 104u: goto L_089A8748;
    case 105u: goto L_089A875C;
    case 106u: goto L_089A8770;
    case 107u: goto L_089A8784;
    case 108u: goto L_089A8798;
    case 109u: goto L_089A87AC;
    case 110u: goto L_089A87C0;
    case 111u: goto L_089A87D4;
    case 112u: goto L_089A87E4;
    case 113u: goto L_089A87F4;
    case 114u: goto L_089A8804;
    case 115u: goto L_089A8830;
    case 116u: goto L_089A8838;
    case 117u: goto L_089A8854;
    case 118u: goto L_089A8860;
    case 119u: goto L_089A8870;
    case 120u: goto L_089A887C;
    case 121u: goto L_089A8884;
    case 122u: goto L_089A8888;
    case 123u: goto L_089A88A4;
    case 124u: goto L_089A88B0;
    case 125u: goto L_089A88BC;
    case 126u: goto L_089A88C8;
    case 127u: goto L_089A88D0;
    case 128u: goto L_089A88D8;
    case 129u: goto L_089A88E4;
    case 130u: goto L_089A88EC;
    case 131u: goto L_089A88F8;
    case 132u: goto L_089A8900;
    case 133u: goto L_089A8908;
    case 134u: goto L_089A8914;
    case 135u: goto L_089A8940;
    case 136u: goto L_089A8948;
    case 137u: goto L_089A8964;
    case 138u: goto L_089A8970;
    case 139u: goto L_089A8980;
    case 140u: goto L_089A898C;
    case 141u: goto L_089A8994;
    case 142u: goto L_089A8998;
    case 143u: goto L_089A89B4;
    case 144u: goto L_089A89C0;
    case 145u: goto L_089A89C8;
    case 146u: goto L_089A89D4;
    case 147u: goto L_089A89E0;
    case 148u: goto L_089A89EC;
    case 149u: goto L_089A89FC;
    case 150u: goto L_089A8A0C;
    case 151u: goto L_089A8A14;
    case 152u: goto L_089A8A1C;
    case 153u: goto L_089A8A24;
    case 154u: goto L_089A8A2C;
    case 155u: goto L_089A8A3C;
    case 156u: goto L_089A8A68;
    case 157u: goto L_089A8A78;
    case 158u: goto L_089A8A98;
    case 159u: goto L_089A8AA0;
    case 160u: goto L_089A8AA8;
    case 161u: goto L_089A8AB8;
    case 162u: goto L_089A8ACC;
    case 163u: goto L_089A8AE0;
    case 164u: goto L_089A8AE8;
    case 165u: goto L_089A8AF0;
    case 166u: goto L_089A8B14;
    case 167u: goto L_089A8B20;
    case 168u: goto L_089A8B28;
    case 169u: goto L_089A8B50;
    case 170u: goto L_089A8B60;
    case 171u: goto L_089A8B7C;
    case 172u: goto L_089A8B84;
    case 173u: goto L_089A8B98;
    case 174u: goto L_089A8BAC;
    case 175u: goto L_089A8BC0;
    case 176u: goto L_089A8BD4;
    case 177u: goto L_089A8BDC;
    case 178u: goto L_089A8BE4;
    case 179u: goto L_089A8C04;
    case 180u: goto L_089A8C0C;
    case 181u: goto L_089A8C14;
    case 182u: goto L_089A8C24;
    case 183u: goto L_089A8C4C;
    case 184u: goto L_089A8C5C;
    case 185u: goto L_089A8C78;
    case 186u: goto L_089A8C80;
    case 187u: goto L_089A8CA4;
    case 188u: goto L_089A8CAC;
    case 189u: goto L_089A8CB4;
    case 190u: goto L_089A8CD4;
    case 191u: goto L_089A8CE4;
    case 192u: goto L_089A8CF4;
    case 193u: goto L_089A8D28;
    case 194u: goto L_089A8D30;
    case 195u: goto L_089A8D54;
    case 196u: goto L_089A8D60;
    case 197u: goto L_089A8D70;
    case 198u: goto L_089A8D7C;
    case 199u: goto L_089A8D8C;
    case 200u: goto L_089A8D94;
    case 201u: goto L_089A8D9C;
    case 202u: goto L_089A8DA8;
    case 203u: goto L_089A8DB0;
    case 204u: goto L_089A8DD8;
    case 205u: goto L_089A8DE4;
    case 206u: goto L_089A8DF0;
    case 207u: goto L_089A8DF4;
    case 208u: goto L_089A8DFC;
    case 209u: goto L_089A8E10;
    case 210u: goto L_089A8E18;
    case 211u: goto L_089A8E40;
    case 212u: goto L_089A8E48;
    case 213u: goto L_089A8E50;
    case 214u: goto L_089A8E7C;
    case 215u: goto L_089A8E84;
    case 216u: goto L_089A8E8C;
    case 217u: goto L_089A8E94;
    case 218u: goto L_089A8EA8;
    case 219u: goto L_089A8EB0;
    case 220u: goto L_089A8ECC;
    case 221u: goto L_089A8ED4;
    case 222u: goto L_089A8EE0;
    case 223u: goto L_089A8EE4;
    case 224u: goto L_089A8EFC;
    case 225u: goto L_089A8F04;
    case 226u: goto L_089A8F0C;
    case 227u: goto L_089A8F20;
    case 228u: goto L_089A8F24;
    case 229u: goto L_089A8F60;
    case 230u: goto L_089A8F90;
    case 231u: goto L_089A8FA8;
    case 232u: goto L_089A8FD4;
    case 233u: goto L_089A8FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A8004:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2792)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(72)));
    aot_gpr[6] = (0u | 57344u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A802Cu);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A802Cu) goto L_089A802C;
    return;
L_089A802C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A8064;
      }
      goto L_089A8034;
    }
L_089A8034:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[3] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[3]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
      if (branch_taken) {
          goto L_089A8064;
      }
      goto L_089A8060;
    }
L_089A8060:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(301));
    goto L_089A8064;
L_089A8064:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089A8068;
L_089A8068:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089A806C;
L_089A806C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8084:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[29]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[6] = (0u | 57344u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[9] = (aot_gpr[16] + 0u);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2792)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A80E0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A80E0u) goto L_089A80E0;
    return;
L_089A80E0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A8034;
      }
      goto L_089A80E8;
    }
L_089A80E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089A8068;
L_089A80F0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089A80F4;
L_089A80F4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8110:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A814C;
      }
      goto L_089A8128;
    }
L_089A8128:
    aot_gpr[31] = (0x089A8130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 4u, 0x089A7020u>(ctx, &aot_mem) && ctx.pc == 0x089A8130u) goto L_089A8130;
    return;
L_089A8130:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A814C;
      }
      goto L_089A813C;
    }
L_089A813C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A814C:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8164:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    aot_gpr[31] = (0x089A8184u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 4u, 0x089A7020u>(ctx, &aot_mem) && ctx.pc == 0x089A8184u) goto L_089A8184;
    return;
L_089A8184:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A81C0;
      }
      goto L_089A8190;
    }
L_089A8190:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A81C0;
      }
      goto L_089A819C;
    }
L_089A819C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089A81C0;
      }
      goto L_089A81B0;
    }
L_089A81B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A81BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A81BCu) goto L_089A81BC;
    return;
L_089A81BC:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    goto L_089A81C0;
L_089A81C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A81D8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A81E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[31] = (0x089A8210u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A8210u) goto L_089A8210;
    return;
L_089A8210:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089A821Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A821Cu) goto L_089A821C;
    return;
L_089A821C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089A8228u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A8228u) goto L_089A8228;
    return;
L_089A8228:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[31] = (0x089A823Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 69u, 0x089A7514u>(ctx, &aot_mem) && ctx.pc == 0x089A823Cu) goto L_089A823C;
    return;
L_089A823C:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8258:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089A82DC;
      }
      goto L_089A8288;
    }
L_089A8288:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(120)));
    aot_gpr[31] = (0x089A8294u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 4u, 0x089A7020u>(ctx, &aot_mem) && ctx.pc == 0x089A8294u) goto L_089A8294;
    return;
L_089A8294:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A82DC;
      }
      goto L_089A829C;
    }
L_089A829C:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089A832C;
      }
      goto L_089A82A4;
    }
L_089A82A4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A82FC;
      }
      goto L_089A82AC;
    }
L_089A82AC:
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A82FC;
      }
      goto L_089A82B8;
    }
L_089A82B8:
    aot_gpr[3] = (aot_gpr[17] ^ 2u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(5));
    if (aot_gpr[3] != 0u) aot_gpr[6] = (aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089A82D4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 11u, 0x089A7064u>(ctx, &aot_mem) && ctx.pc == 0x089A82D4u) goto L_089A82D4;
    return;
L_089A82D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A837C;
      }
      goto L_089A82DC;
    }
L_089A82DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089A82E0;
L_089A82E0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A82FC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[25];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A832C:
    aot_gpr[31] = (0x089A8334u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089A81E4;
L_089A8334:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089A8360;
      }
      goto L_089A833C;
    }
L_089A833C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8360:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A8370u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 11u, 0x089A7064u>(ctx, &aot_mem) && ctx.pc == 0x089A8370u) goto L_089A8370;
    return;
L_089A8370:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089A82E0;
      }
      goto L_089A8378;
    }
L_089A8378:
    aot_gpr[2] = (2217u << 16u);
    goto L_089A837C;
L_089A837C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A8390u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A8390u) goto L_089A8390;
    return;
L_089A8390:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_089A82DC;
L_089A8398:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[30]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(102));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089A83EC;
      }
      goto L_089A83DC;
    }
L_089A83DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A83E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A83E8u) goto L_089A83E8;
    return;
L_089A83E8:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    goto L_089A83EC;
L_089A83EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x089A83F8u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A83F8u) goto L_089A83F8;
    return;
L_089A83F8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089A8404u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A8404u) goto L_089A8404;
    return;
L_089A8404:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x089A8414u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A8414u) goto L_089A8414;
    return;
L_089A8414:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(72));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A843C;
      }
      goto L_089A8428;
    }
L_089A8428:
    aot_gpr[31] = (0x089A8430u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A8430u) goto L_089A8430;
    return;
L_089A8430:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(72));
    aot_gpr[3] = (aot_gpr[3] & 65535u);
    goto L_089A843C;
L_089A843C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (0x089A8450u);
    aot_gpr[7] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 69u, 0x089A7514u>(ctx, &aot_mem) && ctx.pc == 0x089A8450u) goto L_089A8450;
    return;
L_089A8450:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8470:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[31] = (0x089A849Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A849Cu) goto L_089A849C;
    return;
L_089A849C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A84B0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(35));
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 69u, 0x089A7514u>(ctx, &aot_mem) && ctx.pc == 0x089A84B0u) goto L_089A84B0;
    return;
L_089A84B0:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A84CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x089A84F8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A84F8u) goto L_089A84F8;
    return;
L_089A84F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(65)));
    aot_gpr[31] = (0x089A8504u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A8504u) goto L_089A8504;
    return;
L_089A8504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089A8518u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 69u, 0x089A7514u>(ctx, &aot_mem) && ctx.pc == 0x089A8518u) goto L_089A8518;
    return;
L_089A8518:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8534:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[11] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
      if (branch_taken) {
          goto L_089A8578;
      }
      goto L_089A8560;
    }
L_089A8560:
    aot_gpr[31] = (0x089A8568u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 4u, 0x089A7020u>(ctx, &aot_mem) && ctx.pc == 0x089A8568u) goto L_089A8568;
    return;
L_089A8568:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089A857C;
      }
      goto L_089A8570;
    }
L_089A8570:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(3) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A8598;
      }
      goto L_089A8578;
    }
L_089A8578:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089A857C;
L_089A857C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8598:
    aot_gpr[17] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A8578;
      }
      goto L_089A85A4;
    }
L_089A85A4:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[17]);
    goto L_089A85A8;
L_089A85A8:
    aot_gpr[31] = (0x089A85B0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A85B0u) goto L_089A85B0;
    return;
L_089A85B0:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[31] = (0x089A85C0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A85C0u) goto L_089A85C0;
    return;
L_089A85C0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[18] - aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089A8600;
      }
      goto L_089A85D8;
    }
L_089A85D8:
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(55) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 2u);
      if (branch_taken) {
          goto L_089A861C;
      }
      goto L_089A85E4;
    }
L_089A85E4:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A85F0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089A8634;
    }
    goto L_089A85F8;
L_089A85F8:
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8648;
      }
      goto L_089A8600;
    }
L_089A8600:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[17];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A8578;
      }
      goto L_089A8608;
    }
L_089A8608:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A8614u);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 11u, 0x089A7064u>(ctx, &aot_mem) && ctx.pc == 0x089A8614u) goto L_089A8614;
    return;
L_089A8614:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089A857C;
L_089A861C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-16280));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8634:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A8644u);
    aot_gpr[6] = (aot_gpr[19] + aot_gpr[17]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A8644u) goto L_089A8644;
    return;
L_089A8644:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_089A8648;
L_089A8648:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8600;
      }
      goto L_089A8650;
    }
L_089A8650:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8600;
      }
      goto L_089A8664;
    }
L_089A8664:
    aot_gpr[2] = (aot_gpr[18] - aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[17]);
        goto L_089A85A8;
    }
    goto L_089A8674;
L_089A8674:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089A857C;
L_089A867C:
    aot_gpr[2] = (2203u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-30148));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A8690:
    aot_gpr[2] = (2203u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-29912));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A86A4:
    aot_gpr[2] = (2203u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-29452));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A86B8:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(10036));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A86CC:
    aot_gpr[2] = (2203u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-29660));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A86E0:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-380));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A86F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(29));
    aot_gpr[31] = (0x089A8704u);
    aot_gpr[6] = (aot_gpr[19] + aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 78u, 0x089A059Cu>(ctx, &aot_mem) && ctx.pc == 0x089A8704u) goto L_089A8704;
    return;
L_089A8704:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + 0u);
    goto L_089A85F0;
L_089A8714:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-516));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A8728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(31));
    aot_gpr[31] = (0x089A8738u);
    aot_gpr[6] = (aot_gpr[19] + aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 75u, 0x089A0534u>(ctx, &aot_mem) && ctx.pc == 0x089A8738u) goto L_089A8738;
    return;
L_089A8738:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + 0u);
    goto L_089A85F0;
L_089A8748:
    aot_gpr[2] = (2203u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-30444));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A875C:
    aot_gpr[2] = (2203u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-30716));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A8770:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(11312));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A8784:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(9780));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A8798:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(9184));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A87AC:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-312));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A87C0:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8616));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A87D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (2202u << 16u);
        goto L_089A87F4;
    }
    goto L_089A87E4;
L_089A87E4:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A87F4:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(10236));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089A85F0;
L_089A8804:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    aot_gpr[31] = (0x089A8830u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 4u, 0x089A7020u>(ctx, &aot_mem) && ctx.pc == 0x089A8830u) goto L_089A8830;
    return;
L_089A8830:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A8854;
      }
      goto L_089A8838;
    }
L_089A8838:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8854:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A8860u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A8860u) goto L_089A8860;
    return;
L_089A8860:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(112));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A88A4;
      }
      goto L_089A8870;
    }
L_089A8870:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A887Cu);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 11u, 0x089A7064u>(ctx, &aot_mem) && ctx.pc == 0x089A887Cu) goto L_089A887C;
    return;
L_089A887C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A8838;
      }
      goto L_089A8884;
    }
L_089A8884:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089A8888;
L_089A8888:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u | 52008u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A88A4:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089A88B0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A88B0u) goto L_089A88B0;
    return;
L_089A88B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A88D8;
      }
      goto L_089A88BC;
    }
L_089A88BC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A88C8u);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 11u, 0x089A7064u>(ctx, &aot_mem) && ctx.pc == 0x089A88C8u) goto L_089A88C8;
    return;
L_089A88C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A8838;
      }
      goto L_089A88D0;
    }
L_089A88D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089A8888;
L_089A88D8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A88F8;
      }
      goto L_089A88E4;
    }
L_089A88E4:
    aot_gpr[31] = (0x089A88ECu);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 11u, 0x089A7064u>(ctx, &aot_mem) && ctx.pc == 0x089A88ECu) goto L_089A88EC;
    return;
L_089A88EC:
    aot_gpr[3] = (0u | 52018u);
    if (aot_gpr[2] != 0u) aot_gpr[3] = (aot_gpr[2]);
    goto L_089A8838;
L_089A88F8:
    aot_gpr[31] = (0x089A8900u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089A8398;
L_089A8900:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A8838;
      }
      goto L_089A8908;
    }
L_089A8908:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    goto L_089A8838;
L_089A8914:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    aot_gpr[31] = (0x089A8940u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 4u, 0x089A7020u>(ctx, &aot_mem) && ctx.pc == 0x089A8940u) goto L_089A8940;
    return;
L_089A8940:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A8964;
      }
      goto L_089A8948;
    }
L_089A8948:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8964:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A8970u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A8970u) goto L_089A8970;
    return;
L_089A8970:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] & 2u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A89B4;
      }
      goto L_089A8980;
    }
L_089A8980:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A898Cu);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 11u, 0x089A7064u>(ctx, &aot_mem) && ctx.pc == 0x089A898Cu) goto L_089A898C;
    return;
L_089A898C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A8948;
      }
      goto L_089A8994;
    }
L_089A8994:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089A8998;
L_089A8998:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u | 52008u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A89B4:
    aot_gpr[2] = (aot_gpr[3] & 4u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A89E0;
      }
      goto L_089A89C0;
    }
L_089A89C0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A8A1C;
      }
      goto L_089A89C8;
    }
L_089A89C8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A89D4u);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 11u, 0x089A7064u>(ctx, &aot_mem) && ctx.pc == 0x089A89D4u) goto L_089A89D4;
    return;
L_089A89D4:
    aot_gpr[3] = (0u | 52018u);
    if (aot_gpr[2] != 0u) aot_gpr[3] = (aot_gpr[2]);
    goto L_089A8948;
L_089A89E0:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A89ECu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A89ECu) goto L_089A89EC;
    return;
L_089A89EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(1604) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A89C0;
      }
      goto L_089A89FC;
    }
L_089A89FC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A8A0Cu);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 11u, 0x089A7064u>(ctx, &aot_mem) && ctx.pc == 0x089A8A0Cu) goto L_089A8A0C;
    return;
L_089A8A0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A8948;
      }
      goto L_089A8A14;
    }
L_089A8A14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089A8998;
L_089A8A1C:
    aot_gpr[31] = (0x089A8A24u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089A8470;
L_089A8A24:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A8948;
      }
      goto L_089A8A2C;
    }
L_089A8A2C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089A8948;
L_089A8A3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[31] = (0x089A8A68u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 4u, 0x089A7020u>(ctx, &aot_mem) && ctx.pc == 0x089A8A68u) goto L_089A8A68;
    return;
L_089A8A68:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A8A98;
      }
      goto L_089A8A78;
    }
L_089A8A78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8A98:
    aot_gpr[31] = (0x089A8AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A8AA0u) goto L_089A8AA0;
    return;
L_089A8AA0:
    aot_gpr[31] = (0x089A8AA8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 203u, 0x089A2BB0u>(ctx, &aot_mem) && ctx.pc == 0x089A8AA8u) goto L_089A8AA8;
    return;
L_089A8AA8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089A8AB8u);
    aot_gpr[19] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A8AB8u) goto L_089A8AB8;
    return;
L_089A8AB8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(108));
    aot_gpr[31] = (0x089A8ACCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(116), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x089A8ACCu) goto L_089A8ACC;
    return;
L_089A8ACC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(19));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089A8B14;
      }
      goto L_089A8AE0;
    }
L_089A8AE0:
    aot_gpr[31] = (0x089A8AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 11u, 0x089A7064u>(ctx, &aot_mem) && ctx.pc == 0x089A8AE8u) goto L_089A8AE8;
    return;
L_089A8AE8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A8A78;
      }
      goto L_089A8AF0;
    }
L_089A8AF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u | 52018u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8B14:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089A8B20u);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 11u, 0x089A7064u>(ctx, &aot_mem) && ctx.pc == 0x089A8B20u) goto L_089A8B20;
    return;
L_089A8B20:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089A8A78;
L_089A8B28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089A8B50u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 4u, 0x089A7020u>(ctx, &aot_mem) && ctx.pc == 0x089A8B50u) goto L_089A8B50;
    return;
L_089A8B50:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A8B7C;
      }
      goto L_089A8B60;
    }
L_089A8B60:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8B7C:
    aot_gpr[31] = (0x089A8B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A8B84u) goto L_089A8B84;
    return;
L_089A8B84:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089A8B98u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089A8B98u) goto L_089A8B98;
    return;
L_089A8B98:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(6));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089A8BACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A8BACu) goto L_089A8BAC;
    return;
L_089A8BAC:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(108));
    aot_gpr[31] = (0x089A8BC0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(116), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x089A8BC0u) goto L_089A8BC0;
    return;
L_089A8BC0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089A8C04;
      }
      goto L_089A8BD4;
    }
L_089A8BD4:
    aot_gpr[31] = (0x089A8BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 11u, 0x089A7064u>(ctx, &aot_mem) && ctx.pc == 0x089A8BDCu) goto L_089A8BDC;
    return;
L_089A8BDC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A8B60;
      }
      goto L_089A8BE4;
    }
L_089A8BE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u | 52018u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8C04:
    aot_gpr[31] = (0x089A8C0Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089A84CC;
L_089A8C0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A8B60;
      }
      goto L_089A8C14;
    }
L_089A8C14:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089A8B60;
L_089A8C24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089A8C4Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 4u, 0x089A7020u>(ctx, &aot_mem) && ctx.pc == 0x089A8C4Cu) goto L_089A8C4C;
    return;
L_089A8C4C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A8C78;
      }
      goto L_089A8C5C;
    }
L_089A8C5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8C78:
    aot_gpr[31] = (0x089A8C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A8C80u) goto L_089A8C80;
    return;
L_089A8C80:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[7] = (aot_gpr[3] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + 0u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(116), aot_gpr[3]);
      if (branch_taken) {
          goto L_089A8CD4;
      }
      goto L_089A8CA4;
    }
L_089A8CA4:
    aot_gpr[31] = (0x089A8CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 11u, 0x089A7064u>(ctx, &aot_mem) && ctx.pc == 0x089A8CACu) goto L_089A8CAC;
    return;
L_089A8CAC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A8C5C;
      }
      goto L_089A8CB4;
    }
L_089A8CB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u | 52018u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8CD4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089A8CE4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A8CE4u) goto L_089A8CE4;
    return;
L_089A8CE4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089A8C5C;
L_089A8CF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[31] = (0x089A8D28u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 4u, 0x089A7020u>(ctx, &aot_mem) && ctx.pc == 0x089A8D28u) goto L_089A8D28;
    return;
L_089A8D28:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A8D54;
      }
      goto L_089A8D30;
    }
L_089A8D30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8D54:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A8D60u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A8D60u) goto L_089A8D60;
    return;
L_089A8D60:
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(108));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089A8D70u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089A8D70u) goto L_089A8D70;
    return;
L_089A8D70:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(6));
    aot_gpr[31] = (0x089A8D7Cu);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x089A8D7Cu) goto L_089A8D7C;
    return;
L_089A8D7C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(86));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A8D94;
      }
      goto L_089A8D8C;
    }
L_089A8D8C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(22));
    aot_gpr[16] = (0u + 0u);
    goto L_089A8D94;
L_089A8D94:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[18];
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A8DD8;
      }
      goto L_089A8D9C;
    }
L_089A8D9C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A8DA8u);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 11u, 0x089A7064u>(ctx, &aot_mem) && ctx.pc == 0x089A8DA8u) goto L_089A8DA8;
    return;
L_089A8DA8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A8D30;
      }
      goto L_089A8DB0;
    }
L_089A8DB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (0u | 52018u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8DD8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(92)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
        goto L_089A8DF4;
    }
    goto L_089A8DE4;
L_089A8DE4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    if (aot_gpr[19] == aot_gpr[2]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
        goto L_089A8E18;
    }
    goto L_089A8DF0;
L_089A8DF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    goto L_089A8DF4;
L_089A8DF4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089A8D30;
      }
      goto L_089A8DFC;
    }
L_089A8DFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A8E10u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A8E10u) goto L_089A8E10;
    return;
L_089A8E10:
    aot_gpr[3] = (0u + 0u);
    goto L_089A8D30;
L_089A8E18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(15));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089A8E40u);
    aot_gpr[11] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A8E40u) goto L_089A8E40;
    return;
L_089A8E40:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    goto L_089A8DF4;
L_089A8E48:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8E50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A8E94;
      }
      goto L_089A8E7C;
    }
L_089A8E7C:
    aot_gpr[31] = (0x089A8E84u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.pc = 0x08A5B154u;
    return;
L_089A8E84:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089A8E94;
      }
      goto L_089A8E8C;
    }
L_089A8E8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089A8E94;
L_089A8E94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8EA8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8EB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[31]);
      if (branch_taken) {
          goto L_089A8EE0;
      }
      goto L_089A8ECC;
    }
L_089A8ECC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089A8EE0;
      }
      goto L_089A8ED4;
    }
L_089A8ED4:
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(108) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8EFC;
      }
      goto L_089A8EE0;
    }
L_089A8EE0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A8EE4;
L_089A8EE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8EFC:
    aot_gpr[31] = (0x089A8F04u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = 0x08A5B144u;
    return;
L_089A8F04:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089A8EE4;
      }
      goto L_089A8F0C;
    }
L_089A8F0C:
    aot_gpr[2] = (aot_gpr[16] & 3u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089A8FA8;
      }
      goto L_089A8F20;
    }
L_089A8F20:
    aot_gpr[5] = (aot_gpr[8] + 0u);
    goto L_089A8F24;
L_089A8F24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-1), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[2]);
      if (branch_taken) {
          goto L_089A8F24;
      }
      goto L_089A8F60;
    }
L_089A8F60:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(108));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[3] = (0u + 0u);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089A8F90;
L_089A8F90:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A8FA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089A8FA8;
      }
      goto L_089A8FD4;
    }
L_089A8FD4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(108));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089A8F90;
L_089A8FFC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0420(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0420_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_420(Runtime &runtime) {
    runtime.register_generated_unit(420u, 0x089A8000u, 4096u, &recomp_unit_0420, &recomp_unit_0420_entry);
    runtime.register_function(0x089A8004u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A802Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8034u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8060u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8064u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8068u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A806Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8084u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A80E0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A80E8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A80F0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A80F4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8110u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8128u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8130u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A813Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A814Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8164u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8184u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8190u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A819Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A81B0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A81BCu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A81C0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A81D8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A81E4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8210u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A821Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8228u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A823Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8258u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8288u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8294u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A829Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A82A4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A82ACu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A82B8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A82D4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A82DCu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A82E0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A82FCu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A832Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8334u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A833Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8360u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8370u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8378u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A837Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8390u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8398u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A83DCu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A83E8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A83ECu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A83F8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8404u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8414u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8428u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8430u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A843Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8450u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8470u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A849Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A84B0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A84CCu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A84F8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8504u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8518u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8534u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8560u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8568u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8570u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8578u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A857Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8598u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A85A4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A85A8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A85B0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A85C0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A85D8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A85E4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A85F0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A85F8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8600u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8608u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8614u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A861Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8634u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8644u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8648u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8650u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8664u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8674u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A867Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8690u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A86A4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A86B8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A86CCu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A86E0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A86F4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8704u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8714u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8728u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8738u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8748u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A875Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8770u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8784u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8798u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A87ACu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A87C0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A87D4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A87E4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A87F4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8804u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8830u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8838u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8854u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8860u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8870u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A887Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8884u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8888u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A88A4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A88B0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A88BCu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A88C8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A88D0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A88D8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A88E4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A88ECu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A88F8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8900u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8908u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8914u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8940u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8948u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8964u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8970u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8980u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A898Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8994u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8998u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A89B4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A89C0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A89C8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A89D4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A89E0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A89ECu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A89FCu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8A0Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8A14u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8A1Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8A24u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8A2Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8A3Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8A68u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8A78u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8A98u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8AA0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8AA8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8AB8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8ACCu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8AE0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8AE8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8AF0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8B14u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8B20u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8B28u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8B50u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8B60u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8B7Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8B84u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8B98u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8BACu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8BC0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8BD4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8BDCu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8BE4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8C04u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8C0Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8C14u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8C24u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8C4Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8C5Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8C78u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8C80u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8CA4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8CACu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8CB4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8CD4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8CE4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8CF4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8D28u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8D30u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8D54u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8D60u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8D70u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8D7Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8D8Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8D94u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8D9Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8DA8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8DB0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8DD8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8DE4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8DF0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8DF4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8DFCu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8E10u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8E18u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8E40u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8E48u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8E50u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8E7Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8E84u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8E8Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8E94u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8EA8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8EB0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8ECCu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8ED4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8EE0u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8EE4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8EFCu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8F04u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8F0Cu, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8F20u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8F24u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8F60u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8F90u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8FA8u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8FD4u, &recomp_unit_0420, "recomp_unit_0420");
    runtime.register_function(0x089A8FFCu, &recomp_unit_0420, "recomp_unit_0420");
}
} // namespace psprecomp
