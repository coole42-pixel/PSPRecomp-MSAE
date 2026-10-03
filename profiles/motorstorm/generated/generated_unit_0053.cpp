#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0053[1021] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0,
    18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0,
    0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 68,
    69, 0, 0, 70, 0, 0, 0, 71, 0, 72, 73, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 80,
    0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 88,
    0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 0, 106, 0, 0, 107, 0, 108, 0,
    0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 0, 113, 0, 0, 114, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 128, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 138, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 146,
    0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 154, 0, 155, 156, 0, 157, 0, 0,
    0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 167, 0,
    0, 168, 169, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174, 0, 175, 176, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0,
    0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0, 195,
    0, 0, 196, 0, 197, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 212,
    0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 231, 0, 0, 232, 0, 233, 234, 0, 235, 0, 236, 0, 237, 0, 238, 239, 0, 0, 0, 0, 0, 0, 240, 0, 241,
};
void recomp_unit_0053_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08839000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0053[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08839000;
    case 2u: goto L_08839028;
    case 3u: goto L_08839034;
    case 4u: goto L_08839050;
    case 5u: goto L_0883907C;
    case 6u: goto L_08839094;
    case 7u: goto L_088390A0;
    case 8u: goto L_088390AC;
    case 9u: goto L_088390D0;
    case 10u: goto L_0883913C;
    case 11u: goto L_08839148;
    case 12u: goto L_0883916C;
    case 13u: goto L_08839188;
    case 14u: goto L_088391A4;
    case 15u: goto L_088391C0;
    case 16u: goto L_088391DC;
    case 17u: goto L_088391F8;
    case 18u: goto L_08839200;
    case 19u: goto L_08839214;
    case 20u: goto L_08839220;
    case 21u: goto L_08839228;
    case 22u: goto L_08839234;
    case 23u: goto L_08839240;
    case 24u: goto L_08839264;
    case 25u: goto L_08839280;
    case 26u: goto L_0883929C;
    case 27u: goto L_088392B8;
    case 28u: goto L_088392D4;
    case 29u: goto L_088392F0;
    case 30u: goto L_088392F8;
    case 31u: goto L_0883930C;
    case 32u: goto L_08839318;
    case 33u: goto L_08839320;
    case 34u: goto L_0883932C;
    case 35u: goto L_08839350;
    case 36u: goto L_0883936C;
    case 37u: goto L_08839388;
    case 38u: goto L_088393A4;
    case 39u: goto L_088393C0;
    case 40u: goto L_088393DC;
    case 41u: goto L_088393E4;
    case 42u: goto L_088393F8;
    case 43u: goto L_08839404;
    case 44u: goto L_08839434;
    case 45u: goto L_08839454;
    case 46u: goto L_08839460;
    case 47u: goto L_08839468;
    case 48u: goto L_0883947C;
    case 49u: goto L_08839494;
    case 50u: goto L_088394D8;
    case 51u: goto L_0883950C;
    case 52u: goto L_08839518;
    case 53u: goto L_08839520;
    case 54u: goto L_0883952C;
    case 55u: goto L_08839548;
    case 56u: goto L_08839558;
    case 57u: goto L_08839570;
    case 58u: goto L_08839580;
    case 59u: goto L_0883958C;
    case 60u: goto L_08839598;
    case 61u: goto L_088395A4;
    case 62u: goto L_088395B4;
    case 63u: goto L_088395C0;
    case 64u: goto L_088395C8;
    case 65u: goto L_088395D8;
    case 66u: goto L_088395E4;
    case 67u: goto L_088395EC;
    case 68u: goto L_088395FC;
    case 69u: goto L_08839600;
    case 70u: goto L_0883960C;
    case 71u: goto L_0883961C;
    case 72u: goto L_08839624;
    case 73u: goto L_08839628;
    case 74u: goto L_08839630;
    case 75u: goto L_0883963C;
    case 76u: goto L_08839650;
    case 77u: goto L_0883965C;
    case 78u: goto L_08839668;
    case 79u: goto L_08839678;
    case 80u: goto L_0883967C;
    case 81u: goto L_08839684;
    case 82u: goto L_08839694;
    case 83u: goto L_088396BC;
    case 84u: goto L_088396CC;
    case 85u: goto L_088396D8;
    case 86u: goto L_088396E8;
    case 87u: goto L_088396F0;
    case 88u: goto L_088396FC;
    case 89u: goto L_08839708;
    case 90u: goto L_08839710;
    case 91u: goto L_0883971C;
    case 92u: goto L_08839728;
    case 93u: goto L_08839730;
    case 94u: goto L_0883973C;
    case 95u: goto L_08839744;
    case 96u: goto L_08839754;
    case 97u: goto L_0883977C;
    case 98u: goto L_0883978C;
    case 99u: goto L_08839798;
    case 100u: goto L_088397A0;
    case 101u: goto L_088397B0;
    case 102u: goto L_088397BC;
    case 103u: goto L_088397C8;
    case 104u: goto L_088397D0;
    case 105u: goto L_088397D8;
    case 106u: goto L_088397E4;
    case 107u: goto L_088397F0;
    case 108u: goto L_088397F8;
    case 109u: goto L_08839804;
    case 110u: goto L_08839810;
    case 111u: goto L_08839818;
    case 112u: goto L_08839820;
    case 113u: goto L_0883982C;
    case 114u: goto L_08839838;
    case 115u: goto L_08839840;
    case 116u: goto L_0883984C;
    case 117u: goto L_08839858;
    case 118u: goto L_08839888;
    case 119u: goto L_088398B0;
    case 120u: goto L_088398C4;
    case 121u: goto L_088398D0;
    case 122u: goto L_088398E8;
    case 123u: goto L_088398FC;
    case 124u: goto L_08839910;
    case 125u: goto L_08839918;
    case 126u: goto L_0883992C;
    case 127u: goto L_08839934;
    case 128u: goto L_08839940;
    case 129u: goto L_08839944;
    case 130u: goto L_08839958;
    case 131u: goto L_0883996C;
    case 132u: goto L_0883998C;
    case 133u: goto L_08839998;
    case 134u: goto L_088399A0;
    case 135u: goto L_088399AC;
    case 136u: goto L_088399BC;
    case 137u: goto L_088399C4;
    case 138u: goto L_088399CC;
    case 139u: goto L_088399D0;
    case 140u: goto L_088399E8;
    case 141u: goto L_08839A28;
    case 142u: goto L_08839A48;
    case 143u: goto L_08839A50;
    case 144u: goto L_08839A60;
    case 145u: goto L_08839A74;
    case 146u: goto L_08839A7C;
    case 147u: goto L_08839A8C;
    case 148u: goto L_08839AA0;
    case 149u: goto L_08839AAC;
    case 150u: goto L_08839AB8;
    case 151u: goto L_08839AC0;
    case 152u: goto L_08839ACC;
    case 153u: goto L_08839AD4;
    case 154u: goto L_08839AE0;
    case 155u: goto L_08839AE8;
    case 156u: goto L_08839AEC;
    case 157u: goto L_08839AF4;
    case 158u: goto L_08839B04;
    case 159u: goto L_08839B10;
    case 160u: goto L_08839B1C;
    case 161u: goto L_08839B28;
    case 162u: goto L_08839B38;
    case 163u: goto L_08839B44;
    case 164u: goto L_08839B58;
    case 165u: goto L_08839B60;
    case 166u: goto L_08839B6C;
    case 167u: goto L_08839B78;
    case 168u: goto L_08839B84;
    case 169u: goto L_08839B88;
    case 170u: goto L_08839B90;
    case 171u: goto L_08839B98;
    case 172u: goto L_08839BA4;
    case 173u: goto L_08839BAC;
    case 174u: goto L_08839BB8;
    case 175u: goto L_08839BC0;
    case 176u: goto L_08839BC4;
    case 177u: goto L_08839BCC;
    case 178u: goto L_08839BD8;
    case 179u: goto L_08839BE0;
    case 180u: goto L_08839BE8;
    case 181u: goto L_08839BF0;
    case 182u: goto L_08839BF8;
    case 183u: goto L_08839C04;
    case 184u: goto L_08839C0C;
    case 185u: goto L_08839C18;
    case 186u: goto L_08839C20;
    case 187u: goto L_08839C28;
    case 188u: goto L_08839C30;
    case 189u: goto L_08839C38;
    case 190u: goto L_08839C48;
    case 191u: goto L_08839C50;
    case 192u: goto L_08839C5C;
    case 193u: goto L_08839C6C;
    case 194u: goto L_08839C74;
    case 195u: goto L_08839C7C;
    case 196u: goto L_08839C88;
    case 197u: goto L_08839C90;
    case 198u: goto L_08839C94;
    case 199u: goto L_08839CA0;
    case 200u: goto L_08839CAC;
    case 201u: goto L_08839CB8;
    case 202u: goto L_08839CCC;
    case 203u: goto L_08839CD4;
    case 204u: goto L_08839CEC;
    case 205u: goto L_08839D10;
    case 206u: goto L_08839D1C;
    case 207u: goto L_08839D38;
    case 208u: goto L_08839D44;
    case 209u: goto L_08839D50;
    case 210u: goto L_08839D68;
    case 211u: goto L_08839D70;
    case 212u: goto L_08839D7C;
    case 213u: goto L_08839D94;
    case 214u: goto L_08839DA0;
    case 215u: goto L_08839DB8;
    case 216u: goto L_08839DEC;
    case 217u: goto L_08839DF4;
    case 218u: goto L_08839DFC;
    case 219u: goto L_08839E1C;
    case 220u: goto L_08839E5C;
    case 221u: goto L_08839E68;
    case 222u: goto L_08839E88;
    case 223u: goto L_08839EA0;
    case 224u: goto L_08839EA8;
    case 225u: goto L_08839EB0;
    case 226u: goto L_08839ECC;
    case 227u: goto L_08839EF0;
    case 228u: goto L_08839F34;
    case 229u: goto L_08839F58;
    case 230u: goto L_08839F84;
    case 231u: goto L_08839F90;
    case 232u: goto L_08839F9C;
    case 233u: goto L_08839FA4;
    case 234u: goto L_08839FA8;
    case 235u: goto L_08839FB0;
    case 236u: goto L_08839FB8;
    case 237u: goto L_08839FC0;
    case 238u: goto L_08839FC8;
    case 239u: goto L_08839FCC;
    case 240u: goto L_08839FE8;
    case 241u: goto L_08839FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08839000:
    aot_gpr[5] = (aot_gpr[5] << 8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[21] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (256u << 16u);
    aot_gpr[21] = (aot_gpr[21] - aot_gpr[4]);
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[5];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2148)));
      if (branch_taken) {
          goto L_0883907C;
      }
      goto L_08839028;
    }
L_08839028:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    aot_gpr[31] = (0x08839034u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x08839034u) goto L_08839034;
    return;
L_08839034:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2148)));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(11))))));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08839050u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 147u, 0x088D9AA4u>(ctx, &aot_mem) && ctx.pc == 0x08839050u) goto L_08839050;
    return;
L_08839050:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2148)));
    aot_gpr[6] = (aot_gpr[16] << 2u);
    aot_gpr[5] = (aot_gpr[17] << 24u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1948)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1812), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08839094;
      }
      goto L_0883907C;
    }
L_0883907C:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08839094u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 147u, 0x088D9AA4u>(ctx, &aot_mem) && ctx.pc == 0x08839094u) goto L_08839094;
    return;
L_08839094:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088390A0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 215u, 0x08838F08u>(ctx, &aot_mem) && ctx.pc == 0x088390A0u) goto L_088390A0;
    return;
L_088390A0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088390ACu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088390ACu) goto L_088390AC;
    return;
L_088390AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088390D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[30] = (61440u << 16u);
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[18] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-8580));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-8500));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-8472));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-8440));
    aot_gpr[22] = (8192u << 16u);
    aot_gpr[21] = (4096u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[23] = (2218u << 16u);
      if (branch_taken) {
          goto L_08839228;
      }
      goto L_0883913C;
    }
L_0883913C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08839148u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08839148u) goto L_08839148;
    return;
L_08839148:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0883916Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883916Cu) goto L_0883916C;
    return;
L_0883916C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08839188u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08839188u) goto L_08839188;
    return;
L_08839188:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088391A4u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088391A4u) goto L_088391A4;
    return;
L_088391A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088391C0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088391C0u) goto L_088391C0;
    return;
L_088391C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088391DCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088391DCu) goto L_088391DC;
    return;
L_088391DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(2240)));
    aot_gpr[31] = (0x088391F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8408));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 102u, 0x08831978u>(ctx, &aot_mem) && ctx.pc == 0x088391F8u) goto L_088391F8;
    return;
L_088391F8:
    aot_gpr[31] = (0x08839200u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08839200u) goto L_08839200;
    return;
L_08839200:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08839214u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08839214u) goto L_08839214;
    return;
L_08839214:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08839220u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08839220u) goto L_08839220;
    return;
L_08839220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839404;
      }
      goto L_08839228;
    }
L_08839228:
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08839320;
      }
      goto L_08839234;
    }
L_08839234:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08839240u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08839240u) goto L_08839240;
    return;
L_08839240:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08839264u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08839264u) goto L_08839264;
    return;
L_08839264:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08839280u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08839280u) goto L_08839280;
    return;
L_08839280:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883929Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883929Cu) goto L_0883929C;
    return;
L_0883929C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088392B8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088392B8u) goto L_088392B8;
    return;
L_088392B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088392D4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088392D4u) goto L_088392D4;
    return;
L_088392D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(2240)));
    aot_gpr[31] = (0x088392F0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8376));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 102u, 0x08831978u>(ctx, &aot_mem) && ctx.pc == 0x088392F0u) goto L_088392F0;
    return;
L_088392F0:
    aot_gpr[31] = (0x088392F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x088392F8u) goto L_088392F8;
    return;
L_088392F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0883930Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x0883930Cu) goto L_0883930C;
    return;
L_0883930C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08839318u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08839318u) goto L_08839318;
    return;
L_08839318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839404;
      }
      goto L_08839320;
    }
L_08839320:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0883932Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883932Cu) goto L_0883932C;
    return;
L_0883932C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08839350u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08839350u) goto L_08839350;
    return;
L_08839350:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0883936Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883936Cu) goto L_0883936C;
    return;
L_0883936C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08839388u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08839388u) goto L_08839388;
    return;
L_08839388:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088393A4u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088393A4u) goto L_088393A4;
    return;
L_088393A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088393C0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088393C0u) goto L_088393C0;
    return;
L_088393C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(2240)));
    aot_gpr[31] = (0x088393DCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8340));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 102u, 0x08831978u>(ctx, &aot_mem) && ctx.pc == 0x088393DCu) goto L_088393DC;
    return;
L_088393DC:
    aot_gpr[31] = (0x088393E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x088393E4u) goto L_088393E4;
    return;
L_088393E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088393F8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x088393F8u) goto L_088393F8;
    return;
L_088393F8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08839404u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08839404u) goto L_08839404;
    return;
L_08839404:
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
L_08839434:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08839454;
L_08839454:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08839460u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 215u, 0x08838F08u>(ctx, &aot_mem) && ctx.pc == 0x08839460u) goto L_08839460;
    return;
L_08839460:
    aot_gpr[31] = (0x08839468u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839468u) goto L_08839468;
    return;
L_08839468:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08839454;
      }
      goto L_0883947C;
    }
L_0883947C:
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
L_08839494:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x088394D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8600));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088394D8u) goto L_088394D8;
    return;
L_088394D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(-8552));
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[30] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-8580));
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_08839520;
      }
      goto L_0883950C;
    }
L_0883950C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    aot_gpr[31] = (0x08839518u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x08839518u) goto L_08839518;
    return;
L_08839518:
    aot_gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(6))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    goto L_08839520;
L_08839520:
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x0883952Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 25u, 0x088DA1D8u>(ctx, &aot_mem) && ctx.pc == 0x0883952Cu) goto L_0883952C;
    return;
L_0883952C:
    aot_gpr[5] = (16230u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 26214u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16128u << 16u);
    aot_gpr[31] = (0x08839548u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 100u, 0x0885A63Cu>(ctx, &aot_mem) && ctx.pc == 0x08839548u) goto L_08839548;
    return;
L_08839548:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08839558u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08839558u) goto L_08839558;
    return;
L_08839558:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08839570u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8524));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08839570u) goto L_08839570;
    return;
L_08839570:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (0u | 0u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    aot_gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_088395C0;
      }
      goto L_08839580;
    }
L_08839580:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088395C0;
      }
      goto L_0883958C;
    }
L_0883958C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08839598u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08839598u) goto L_08839598;
    return;
L_08839598:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088395A4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088395A4u) goto L_088395A4;
    return;
L_088395A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088395B4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 170u, 0x088D9C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088395B4u) goto L_088395B4;
    return;
L_088395B4:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_0883967C;
      }
      goto L_088395C0;
    }
L_088395C0:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_08839630;
      }
      goto L_088395C8;
    }
L_088395C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(120), 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088395D8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 93u, 0x0888C544u>(ctx, &aot_mem) && ctx.pc == 0x088395D8u) goto L_088395D8;
    return;
L_088395D8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088395E4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x088395E4u) goto L_088395E4;
    return;
L_088395E4:
    aot_gpr[31] = (0x088395ECu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088395ECu) goto L_088395EC;
    return;
L_088395EC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839600;
      }
      goto L_088395FC;
    }
L_088395FC:
    aot_gpr[16] = (aot_gpr[20] | 0u);
    goto L_08839600;
L_08839600:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883960Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0883960Cu) goto L_0883960C;
    return;
L_0883960C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883961Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 170u, 0x088D9C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0883961Cu) goto L_0883961C;
    return;
L_0883961C:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[20];
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08839628;
      }
      goto L_08839624;
    }
L_08839624:
    aot_gpr[23] = (0u | 1u);
    goto L_08839628;
L_08839628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883967C;
      }
      goto L_08839630;
    }
L_08839630:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883967C;
      }
      goto L_0883963C;
    }
L_0883963C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(120), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08839650u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08839650u) goto L_08839650;
    return;
L_08839650:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883965Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 93u, 0x0888C544u>(ctx, &aot_mem) && ctx.pc == 0x0883965Cu) goto L_0883965C;
    return;
L_0883965C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08839668u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08839668u) goto L_08839668;
    return;
L_08839668:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08839678u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 170u, 0x088D9C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08839678u) goto L_08839678;
    return;
L_08839678:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_0883967C;
L_0883967C:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088396D8;
      }
      goto L_08839684;
    }
L_08839684:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08839694u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 170u, 0x088D9C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08839694u) goto L_08839694;
    return;
L_08839694:
    aot_gpr[6] = (255u << 16u);
    aot_gpr[5] = (aot_gpr[2] & 65280u);
    aot_gpr[6] = (aot_gpr[2] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[2] & 255u);
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[6] = (aot_gpr[6] >> 16u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x088396BCu);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 183u, 0x0885AB7Cu>(ctx, &aot_mem) && ctx.pc == 0x088396BCu) goto L_088396BC;
    return;
L_088396BC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088396CCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 215u, 0x08838F08u>(ctx, &aot_mem) && ctx.pc == 0x088396CCu) goto L_088396CC;
    return;
L_088396CC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088396D8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088396D8u) goto L_088396D8;
    return;
L_088396D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088396E8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 215u, 0x08838F08u>(ctx, &aot_mem) && ctx.pc == 0x088396E8u) goto L_088396E8;
    return;
L_088396E8:
    aot_gpr[31] = (0x088396F0u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 25u, 0x08A4C1DCu>(ctx, &aot_mem) && ctx.pc == 0x088396F0u) goto L_088396F0;
    return;
L_088396F0:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(-2));
    aot_gpr[31] = (0x088396FCu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x088396FCu) goto L_088396FC;
    return;
L_088396FC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08839708u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 215u, 0x08838F08u>(ctx, &aot_mem) && ctx.pc == 0x08839708u) goto L_08839708;
    return;
L_08839708:
    aot_gpr[31] = (0x08839710u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 25u, 0x08A4C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08839710u) goto L_08839710;
    return;
L_08839710:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(-2));
    aot_gpr[31] = (0x0883971Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x0883971Cu) goto L_0883971C;
    return;
L_0883971C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08839728u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 215u, 0x08838F08u>(ctx, &aot_mem) && ctx.pc == 0x08839728u) goto L_08839728;
    return;
L_08839728:
    aot_gpr[31] = (0x08839730u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 25u, 0x08A4C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08839730u) goto L_08839730;
    return;
L_08839730:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(-2));
    aot_gpr[31] = (0x0883973Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x0883973Cu) goto L_0883973C;
    return;
L_0883973C:
    aot_gpr[31] = (0x08839744u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839744u) goto L_08839744;
    return;
L_08839744:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08839754u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_088390D0;
L_08839754:
    aot_gpr[6] = (255u << 16u);
    aot_gpr[5] = (aot_gpr[19] & 65280u);
    aot_gpr[6] = (aot_gpr[19] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[19] & 255u);
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[6] = (aot_gpr[6] >> 16u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x0883977Cu);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 183u, 0x0885AB7Cu>(ctx, &aot_mem) && ctx.pc == 0x0883977Cu) goto L_0883977C;
    return;
L_0883977C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    aot_gpr[31] = (0x0883978Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 215u, 0x08838F08u>(ctx, &aot_mem) && ctx.pc == 0x0883978Cu) goto L_0883978C;
    return;
L_0883978C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(104)));
    aot_gpr[31] = (0x08839798u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08839798u) goto L_08839798;
    return;
L_08839798:
    aot_gpr[31] = (0x088397A0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08839434;
L_088397A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088397B0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088397B0u) goto L_088397B0;
    return;
L_088397B0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088397BCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x088397BCu) goto L_088397BC;
    return;
L_088397BC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088397C8u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 95u, 0x0888C570u>(ctx, &aot_mem) && ctx.pc == 0x088397C8u) goto L_088397C8;
    return;
L_088397C8:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08839818;
      }
      goto L_088397D0;
    }
L_088397D0:
    aot_gpr[31] = (0x088397D8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x088397D8u) goto L_088397D8;
    return;
L_088397D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x088397E4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x088397E4u) goto L_088397E4;
    return;
L_088397E4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088397F0u);
    aot_gpr[5] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x088397F0u) goto L_088397F0;
    return;
L_088397F0:
    aot_gpr[31] = (0x088397F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x088397F8u) goto L_088397F8;
    return;
L_088397F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08839804u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x08839804u) goto L_08839804;
    return;
L_08839804:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08839810u);
    aot_gpr[5] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08839810u) goto L_08839810;
    return;
L_08839810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839858;
      }
      goto L_08839818;
    }
L_08839818:
    aot_gpr[31] = (0x08839820u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08839820u) goto L_08839820;
    return;
L_08839820:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0883982Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x0883982Cu) goto L_0883982C;
    return;
L_0883982C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08839838u);
    aot_gpr[5] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x08839838u) goto L_08839838;
    return;
L_08839838:
    aot_gpr[31] = (0x08839840u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08839840u) goto L_08839840;
    return;
L_08839840:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0883984Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x0883984Cu) goto L_0883984C;
    return;
L_0883984C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08839858u);
    aot_gpr[5] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x08839858u) goto L_08839858;
    return;
L_08839858:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839888:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088398B0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8600));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088398B0u) goto L_088398B0;
    return;
L_088398B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08839958;
      }
      goto L_088398C4;
    }
L_088398C4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839958;
      }
      goto L_088398D0;
    }
L_088398D0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8580));
    aot_gpr[31] = (0x088398E8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8552));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088398E8u) goto L_088398E8;
    return;
L_088398E8:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088398FCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 170u, 0x088D9C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088398FCu) goto L_088398FC;
    return;
L_088398FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08839910u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 170u, 0x088D9C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08839910u) goto L_08839910;
    return;
L_08839910:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08839958;
      }
      goto L_08839918;
    }
L_08839918:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0883992Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 215u, 0x08838F08u>(ctx, &aot_mem) && ctx.pc == 0x0883992Cu) goto L_0883992C;
    return;
L_0883992C:
    aot_gpr[31] = (0x08839934u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x08839934u) goto L_08839934;
    return;
L_08839934:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839944;
      }
      goto L_08839940;
    }
L_08839940:
    aot_gpr[17] = (0u | 0u);
    goto L_08839944;
L_08839944:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08839958u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 226u, 0x08838FB0u>(ctx, &aot_mem) && ctx.pc == 0x08839958u) goto L_08839958;
    return;
L_08839958:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883996C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0883998C;
L_0883998C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08839998u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 215u, 0x08838F08u>(ctx, &aot_mem) && ctx.pc == 0x08839998u) goto L_08839998;
    return;
L_08839998:
    aot_gpr[31] = (0x088399A0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088399A0u) goto L_088399A0;
    return;
L_088399A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088399C4;
      }
      goto L_088399AC;
    }
L_088399AC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0883998C;
      }
      goto L_088399BC;
    }
L_088399BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088399CC;
      }
      goto L_088399C4;
    }
L_088399C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088399D0;
      }
      goto L_088399CC;
    }
L_088399CC:
    aot_gpr[2] = (0u | 0u);
    goto L_088399D0;
L_088399D0:
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
L_088399E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x08839A28u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x08839A28u) goto L_08839A28;
    return;
L_08839A28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(325)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-8580));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_08839A8C;
      }
      goto L_08839A48;
    }
L_08839A48:
    aot_gpr[31] = (0x08839A50u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x08839A50u) goto L_08839A50;
    return;
L_08839A50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[31] = (0x08839A60u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 26u, 0x088E01F8u>(ctx, &aot_mem) && ctx.pc == 0x08839A60u) goto L_08839A60;
    return;
L_08839A60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08839A74u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 151u, 0x088D7D00u>(ctx, &aot_mem) && ctx.pc == 0x08839A74u) goto L_08839A74;
    return;
L_08839A74:
    aot_gpr[31] = (0x08839A7Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x08839A7Cu) goto L_08839A7C;
    return;
L_08839A7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(325), static_cast<std::uint8_t>(0u));
    goto L_08839A8C;
L_08839A8C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08839AA0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8552));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08839AA0u) goto L_08839AA0;
    return;
L_08839AA0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08839AACu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839AACu) goto L_08839AAC;
    return;
L_08839AAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08839AEC;
      }
      goto L_08839AB8;
    }
L_08839AB8:
    aot_gpr[31] = (0x08839AC0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839AC0u) goto L_08839AC0;
    return;
L_08839AC0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08839ACCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_088390D0;
L_08839ACC:
    aot_gpr[31] = (0x08839AD4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839AD4u) goto L_08839AD4;
    return;
L_08839AD4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08839AE0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 215u, 0x08838F08u>(ctx, &aot_mem) && ctx.pc == 0x08839AE0u) goto L_08839AE0;
    return;
L_08839AE0:
    aot_gpr[31] = (0x08839AE8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839AE8u) goto L_08839AE8;
    return;
L_08839AE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    goto L_08839AEC;
L_08839AEC:
    aot_gpr[31] = (0x08839AF4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839AF4u) goto L_08839AF4;
    return;
L_08839AF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08839B04u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 215u, 0x08838F08u>(ctx, &aot_mem) && ctx.pc == 0x08839B04u) goto L_08839B04;
    return;
L_08839B04:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08839B10u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839B10u) goto L_08839B10;
    return;
L_08839B10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08839CCC;
      }
      goto L_08839B1C;
    }
L_08839B1C:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[31] = (0x08839B28u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839B28u) goto L_08839B28;
    return;
L_08839B28:
    aot_gpr[22] = (2214u << 16u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-8600));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_08839B88;
      }
      goto L_08839B38;
    }
L_08839B38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08839B44u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08839B44u) goto L_08839B44;
    return;
L_08839B44:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08839B58u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 215u, 0x08838F08u>(ctx, &aot_mem) && ctx.pc == 0x08839B58u) goto L_08839B58;
    return;
L_08839B58:
    aot_gpr[31] = (0x08839B60u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839B60u) goto L_08839B60;
    return;
L_08839B60:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08839B6Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839B6Cu) goto L_08839B6C;
    return;
L_08839B6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08839B88;
      }
      goto L_08839B78;
    }
L_08839B78:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839B88;
      }
      goto L_08839B84;
    }
L_08839B84:
    aot_gpr[21] = (aot_gpr[30] | 0u);
    goto L_08839B88;
L_08839B88:
    aot_gpr[31] = (0x08839B90u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839B90u) goto L_08839B90;
    return;
L_08839B90:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_08839BC4;
      }
      goto L_08839B98;
    }
L_08839B98:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08839BA4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 215u, 0x08838F08u>(ctx, &aot_mem) && ctx.pc == 0x08839BA4u) goto L_08839BA4;
    return;
L_08839BA4:
    aot_gpr[31] = (0x08839BACu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839BACu) goto L_08839BAC;
    return;
L_08839BAC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08839BB8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839BB8u) goto L_08839BB8;
    return;
L_08839BB8:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08839BC4;
      }
      goto L_08839BC0;
    }
L_08839BC0:
    aot_gpr[21] = (0u | 1u);
    goto L_08839BC4;
L_08839BC4:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839CA0;
      }
      goto L_08839BCC;
    }
L_08839BCC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[31] = (0x08839BD8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x08839BD8u) goto L_08839BD8;
    return;
L_08839BD8:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08839BF8;
      }
      goto L_08839BE0;
    }
L_08839BE0:
    aot_gpr[31] = (0x08839BE8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839BE8u) goto L_08839BE8;
    return;
L_08839BE8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839BF8;
      }
      goto L_08839BF0;
    }
L_08839BF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08839C94;
      }
      goto L_08839BF8;
    }
L_08839BF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839C30;
      }
      goto L_08839C04;
    }
L_08839C04:
    aot_gpr[31] = (0x08839C0Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839C0Cu) goto L_08839C0C;
    return;
L_08839C0C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08839C18u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x08839C18u) goto L_08839C18;
    return;
L_08839C18:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08839C30;
      }
      goto L_08839C20;
    }
L_08839C20:
    aot_gpr[31] = (0x08839C28u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x08839C28u) goto L_08839C28;
    return;
L_08839C28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08839C94;
      }
      goto L_08839C30;
    }
L_08839C30:
    aot_gpr[31] = (0x08839C38u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839C38u) goto L_08839C38;
    return;
L_08839C38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C74;
      }
      goto L_08839C48;
    }
L_08839C48:
    aot_gpr[31] = (0x08839C50u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839C50u) goto L_08839C50;
    return;
L_08839C50:
    aot_gpr[19] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08839C5Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x08839C5Cu) goto L_08839C5C;
    return;
L_08839C5C:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C94;
      }
      goto L_08839C6C;
    }
L_08839C6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08839C94;
      }
      goto L_08839C74;
    }
L_08839C74:
    aot_gpr[31] = (0x08839C7Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839C7Cu) goto L_08839C7C;
    return;
L_08839C7C:
    aot_gpr[19] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08839C94;
      }
      goto L_08839C88;
    }
L_08839C88:
    aot_gpr[31] = (0x08839C90u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x08839C90u) goto L_08839C90;
    return;
L_08839C90:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_08839C94;
L_08839C94:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08839CA0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08839CA0u) goto L_08839CA0;
    return;
L_08839CA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08839CACu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08839CACu) goto L_08839CAC;
    return;
L_08839CAC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (0x08839CB8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839CB8u) goto L_08839CB8;
    return;
L_08839CB8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08839CCCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 226u, 0x08838FB0u>(ctx, &aot_mem) && ctx.pc == 0x08839CCCu) goto L_08839CCC;
    return;
L_08839CCC:
    aot_gpr[31] = (0x08839CD4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839CD4u) goto L_08839CD4;
    return;
L_08839CD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08839CECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8524));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08839CECu) goto L_08839CEC;
    return;
L_08839CEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839DB8;
      }
      goto L_08839D10;
    }
L_08839D10:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08839D1Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08839D1Cu) goto L_08839D1C;
    return;
L_08839D1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08839D38u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0883996C;
L_08839D38:
    aot_gpr[4] = (16256u << 16u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08839D70;
      }
      goto L_08839D44;
    }
L_08839D44:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08839D50u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08839D50u) goto L_08839D50;
    return;
L_08839D50:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x08839D68u);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x08839D68u) goto L_08839D68;
    return;
L_08839D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839DB8;
      }
      goto L_08839D70;
    }
L_08839D70:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08839D7Cu);
    aot_gpr[5] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08839D7Cu) goto L_08839D7C;
    return;
L_08839D7C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x08839D94u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x08839D94u) goto L_08839D94;
    return;
L_08839D94:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08839DA0u);
    aot_gpr[5] = (0u | 51u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08839DA0u) goto L_08839DA0;
    return;
L_08839DA0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08839DB8u);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x08839DB8u) goto L_08839DB8;
    return;
L_08839DB8:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
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
L_08839DEC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839DF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839DFC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23720), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839E1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8304));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08839E5Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8284));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08839E5Cu) goto L_08839E5C;
    return;
L_08839E5C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08839E68u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839E68u) goto L_08839E68;
    return;
L_08839E68:
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2148)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08839EA8;
      }
      goto L_08839E88;
    }
L_08839E88:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08839EA0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 198u, 0x088D9E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08839EA0u) goto L_08839EA0;
    return;
L_08839EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839ECC;
      }
      goto L_08839EA8;
    }
L_08839EA8:
    aot_gpr[31] = (0x08839EB0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839EB0u) goto L_08839EB0;
    return;
L_08839EB0:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08839ECCu);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 199u, 0x088D9E50u>(ctx, &aot_mem) && ctx.pc == 0x08839ECCu) goto L_08839ECC;
    return;
L_08839ECC:
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
L_08839EF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8264));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08839F34u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8236));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08839F34u) goto L_08839F34;
    return;
L_08839F34:
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-8304));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-8284));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08839F58u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08839F58u) goto L_08839F58;
    return;
L_08839F58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[22] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (2218u << 16u);
      if (branch_taken) {
          goto L_08839FF0;
      }
      goto L_08839F84;
    }
L_08839F84:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[31] = (0x08839F90u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839F90u) goto L_08839F90;
    return;
L_08839F90:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839FA8;
      }
      goto L_08839F9C;
    }
L_08839F9C:
    aot_gpr[31] = (0x08839FA4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839FA4u) goto L_08839FA4;
    return;
L_08839FA4:
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(-2));
    goto L_08839FA8;
L_08839FA8:
    aot_gpr[31] = (0x08839FB0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 145u, 0x088DA944u>(ctx, &aot_mem) && ctx.pc == 0x08839FB0u) goto L_08839FB0;
    return;
L_08839FB0:
    aot_gpr[31] = (0x08839FB8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08839FB8u) goto L_08839FB8;
    return;
L_08839FB8:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[22];
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
      if (branch_taken) {
          goto L_08839FCC;
      }
      goto L_08839FC0;
    }
L_08839FC0:
    aot_gpr[31] = (0x08839FC8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 20u, 0x088DB26Cu>(ctx, &aot_mem) && ctx.pc == 0x08839FC8u) goto L_08839FC8;
    return;
L_08839FC8:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    goto L_08839FCC;
L_08839FCC:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(2197), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08839FE8u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 27u, 0x088DB31Cu>(ctx, &aot_mem) && ctx.pc == 0x08839FE8u) goto L_08839FE8;
    return;
L_08839FE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 9u, 0x0883A078u>(ctx, &aot_mem); return;
      }
      goto L_08839FF0;
    }
L_08839FF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883A000u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0053(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0053_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_53(Runtime &runtime) {
    runtime.register_generated_unit(53u, 0x08839000u, 4096u, &recomp_unit_0053, &recomp_unit_0053_entry);
    runtime.register_function(0x08839000u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839028u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839034u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839050u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883907Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839094u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088390A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088390ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088390D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883913Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839148u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883916Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839188u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088391A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088391C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088391DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088391F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839200u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839214u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839220u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839228u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839234u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839240u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839264u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839280u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883929Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088392B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088392D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088392F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088392F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883930Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839318u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839320u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883932Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839350u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883936Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839388u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088393A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088393C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088393DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088393E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088393F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839404u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839434u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839454u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839460u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839468u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883947Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839494u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088394D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883950Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839518u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839520u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883952Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839548u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839558u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839570u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839580u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883958Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839598u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088395A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088395B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088395C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088395C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088395D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088395E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088395ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088395FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839600u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883960Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883961Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839624u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839628u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839630u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883963Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839650u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883965Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839668u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839678u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883967Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839684u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839694u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088396BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088396CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088396D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088396E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088396F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088396FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839708u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839710u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883971Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839728u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839730u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883973Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839744u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839754u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883977Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883978Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839798u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088397A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088397B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088397BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088397C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088397D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088397D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088397E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088397F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088397F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839804u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839810u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839818u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839820u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883982Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839838u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839840u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883984Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839858u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839888u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088398B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088398C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088398D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088398E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088398FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839910u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839918u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883992Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839934u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839940u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839944u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839958u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883996Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x0883998Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839998u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088399A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088399ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088399BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088399C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088399CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088399D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088399E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839A28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839A48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839A50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839A60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839A74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839A7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839A8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839AA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839AACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839AB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839AC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839ACCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839AD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839AE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839AE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839AECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839AF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839B04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839B10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839B1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839B28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839B38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839B44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839B58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839B60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839B6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839B78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839B84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839B88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839B90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839B98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839BA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839BACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839BB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839BC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839BC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839BCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839BD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839BE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839BE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839BF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839BF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839C94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839CA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839CACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839CB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839CCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839CD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839CECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839D10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839D1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839D38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839D44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839D50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839D68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839D70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839D7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839D94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839DA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839DB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839DECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839DF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839DFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839E1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839E5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839E68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839E88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839EA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839EA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839EB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839ECCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839EF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839F34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839F58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839F84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839F90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839F9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839FA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839FA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839FB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839FB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839FC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839FC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839FCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839FE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x08839FF0u, &recomp_unit_0053, "recomp_unit_0053");
}
} // namespace psprecomp
