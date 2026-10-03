#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0032[1023] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 0,
    0, 0, 18, 19, 0, 0, 0, 0, 0, 20, 21, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 42, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0,
    59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 71, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 73, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 81,
    0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 88, 0, 89, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0,
    0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0,
    0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0,
    160, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0,
    0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197,
};
void recomp_unit_0032_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08824000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0032[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08824000;
    case 2u: goto L_0882400C;
    case 3u: goto L_08824014;
    case 4u: goto L_0882403C;
    case 5u: goto L_08824048;
    case 6u: goto L_08824058;
    case 7u: goto L_08824060;
    case 8u: goto L_08824094;
    case 9u: goto L_088240A4;
    case 10u: goto L_088240BC;
    case 11u: goto L_088240E0;
    case 12u: goto L_08824118;
    case 13u: goto L_08824124;
    case 14u: goto L_08824140;
    case 15u: goto L_08824158;
    case 16u: goto L_08824164;
    case 17u: goto L_08824170;
    case 18u: goto L_08824188;
    case 19u: goto L_0882418C;
    case 20u: goto L_088241A4;
    case 21u: goto L_088241A8;
    case 22u: goto L_088241B4;
    case 23u: goto L_088241C8;
    case 24u: goto L_088241D8;
    case 25u: goto L_088241FC;
    case 26u: goto L_08824210;
    case 27u: goto L_08824230;
    case 28u: goto L_08824244;
    case 29u: goto L_08824250;
    case 30u: goto L_08824290;
    case 31u: goto L_088242A4;
    case 32u: goto L_088242B8;
    case 33u: goto L_088242CC;
    case 34u: goto L_088242E4;
    case 35u: goto L_08824308;
    case 36u: goto L_08824324;
    case 37u: goto L_08824338;
    case 38u: goto L_08824340;
    case 39u: goto L_08824350;
    case 40u: goto L_08824358;
    case 41u: goto L_08824368;
    case 42u: goto L_08824370;
    case 43u: goto L_0882437C;
    case 44u: goto L_088243A8;
    case 45u: goto L_088243BC;
    case 46u: goto L_088243D4;
    case 47u: goto L_088243F4;
    case 48u: goto L_08824400;
    case 49u: goto L_08824420;
    case 50u: goto L_08824428;
    case 51u: goto L_08824430;
    case 52u: goto L_08824484;
    case 53u: goto L_08824490;
    case 54u: goto L_08824498;
    case 55u: goto L_088244B4;
    case 56u: goto L_088244D0;
    case 57u: goto L_088244E8;
    case 58u: goto L_088244F0;
    case 59u: goto L_08824500;
    case 60u: goto L_08824508;
    case 61u: goto L_08824528;
    case 62u: goto L_0882453C;
    case 63u: goto L_08824588;
    case 64u: goto L_08824594;
    case 65u: goto L_088245D0;
    case 66u: goto L_088245EC;
    case 67u: goto L_08824600;
    case 68u: goto L_08824644;
    case 69u: goto L_08824650;
    case 70u: goto L_0882465C;
    case 71u: goto L_08824660;
    case 72u: goto L_0882466C;
    case 73u: goto L_08824688;
    case 74u: goto L_0882468C;
    case 75u: goto L_08824698;
    case 76u: goto L_088246BC;
    case 77u: goto L_088246CC;
    case 78u: goto L_088246D8;
    case 79u: goto L_088246E8;
    case 80u: goto L_088246F4;
    case 81u: goto L_088246FC;
    case 82u: goto L_08824704;
    case 83u: goto L_08824714;
    case 84u: goto L_08824720;
    case 85u: goto L_08824740;
    case 86u: goto L_0882474C;
    case 87u: goto L_0882475C;
    case 88u: goto L_08824760;
    case 89u: goto L_08824768;
    case 90u: goto L_0882477C;
    case 91u: goto L_0882479C;
    case 92u: goto L_088247B8;
    case 93u: goto L_088247D0;
    case 94u: goto L_088247DC;
    case 95u: goto L_088247EC;
    case 96u: goto L_08824808;
    case 97u: goto L_08824810;
    case 98u: goto L_08824818;
    case 99u: goto L_0882482C;
    case 100u: goto L_0882483C;
    case 101u: goto L_08824848;
    case 102u: goto L_08824858;
    case 103u: goto L_08824864;
    case 104u: goto L_0882486C;
    case 105u: goto L_08824874;
    case 106u: goto L_08824880;
    case 107u: goto L_0882489C;
    case 108u: goto L_088248B4;
    case 109u: goto L_088248C0;
    case 110u: goto L_088248E0;
    case 111u: goto L_088248F4;
    case 112u: goto L_08824904;
    case 113u: goto L_08824910;
    case 114u: goto L_0882491C;
    case 115u: goto L_0882493C;
    case 116u: goto L_08824958;
    case 117u: goto L_08824970;
    case 118u: goto L_0882497C;
    case 119u: goto L_0882499C;
    case 120u: goto L_088249B0;
    case 121u: goto L_088249CC;
    case 122u: goto L_088249E4;
    case 123u: goto L_088249F0;
    case 124u: goto L_08824A10;
    case 125u: goto L_08824A24;
    case 126u: goto L_08824A40;
    case 127u: goto L_08824A58;
    case 128u: goto L_08824A64;
    case 129u: goto L_08824A84;
    case 130u: goto L_08824A98;
    case 131u: goto L_08824AB4;
    case 132u: goto L_08824ACC;
    case 133u: goto L_08824AD8;
    case 134u: goto L_08824AF8;
    case 135u: goto L_08824B0C;
    case 136u: goto L_08824B28;
    case 137u: goto L_08824B40;
    case 138u: goto L_08824B4C;
    case 139u: goto L_08824B6C;
    case 140u: goto L_08824B80;
    case 141u: goto L_08824B9C;
    case 142u: goto L_08824BB4;
    case 143u: goto L_08824BC0;
    case 144u: goto L_08824BE0;
    case 145u: goto L_08824BF4;
    case 146u: goto L_08824C08;
    case 147u: goto L_08824C28;
    case 148u: goto L_08824C44;
    case 149u: goto L_08824C5C;
    case 150u: goto L_08824C68;
    case 151u: goto L_08824C78;
    case 152u: goto L_08824C94;
    case 153u: goto L_08824C9C;
    case 154u: goto L_08824CA4;
    case 155u: goto L_08824CB8;
    case 156u: goto L_08824CC8;
    case 157u: goto L_08824CD4;
    case 158u: goto L_08824CE4;
    case 159u: goto L_08824CF0;
    case 160u: goto L_08824D00;
    case 161u: goto L_08824D0C;
    case 162u: goto L_08824D14;
    case 163u: goto L_08824D24;
    case 164u: goto L_08824D30;
    case 165u: goto L_08824D6C;
    case 166u: goto L_08824D8C;
    case 167u: goto L_08824DAC;
    case 168u: goto L_08824DCC;
    case 169u: goto L_08824DE4;
    case 170u: goto L_08824DFC;
    case 171u: goto L_08824E14;
    case 172u: goto L_08824E28;
    case 173u: goto L_08824E34;
    case 174u: goto L_08824E40;
    case 175u: goto L_08824E4C;
    case 176u: goto L_08824E58;
    case 177u: goto L_08824E64;
    case 178u: goto L_08824E70;
    case 179u: goto L_08824EA4;
    case 180u: goto L_08824EB0;
    case 181u: goto L_08824EBC;
    case 182u: goto L_08824EC8;
    case 183u: goto L_08824ED4;
    case 184u: goto L_08824EE0;
    case 185u: goto L_08824EEC;
    case 186u: goto L_08824EF8;
    case 187u: goto L_08824F04;
    case 188u: goto L_08824F10;
    case 189u: goto L_08824F1C;
    case 190u: goto L_08824F28;
    case 191u: goto L_08824F34;
    case 192u: goto L_08824F40;
    case 193u: goto L_08824F4C;
    case 194u: goto L_08824F58;
    case 195u: goto L_08824F90;
    case 196u: goto L_08824FC4;
    case 197u: goto L_08824FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08824000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0882400Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0882400Cu) goto L_0882400C;
    return;
L_0882400C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08824094;
      }
      goto L_08824014;
    }
L_08824014:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0882403Cu);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882403Cu) goto L_0882403C;
    return;
L_0882403C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08824060;
      }
      goto L_08824048;
    }
L_08824048:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08824058u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08824430;
L_08824058:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08824060;
L_08824060:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[17] = (aot_gpr[5] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088240BC;
      }
      goto L_08824094;
    }
L_08824094:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088240A4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 46u, 0x088C0344u>(ctx, &aot_mem) && ctx.pc == 0x088240A4u) goto L_088240A4;
    return;
L_088240A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[17] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088240BC;
L_088240BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1116), 0u);
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
L_088240E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (aot_gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08824158;
      }
      goto L_08824118;
    }
L_08824118:
    aot_gpr[20] = (aot_gpr[20] & 255u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[29] | 0u);
    goto L_08824124;
L_08824124:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08824140u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 21u, 0x0881E138u>(ctx, &aot_mem) && ctx.pc == 0x08824140u) goto L_08824140;
    return;
L_08824140:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08824124;
      }
      goto L_08824158;
    }
L_08824158:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882418C;
      }
      goto L_08824164;
    }
L_08824164:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08824170u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 107u, 0x08823D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08824170u) goto L_08824170;
    return;
L_08824170:
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[6] = (2178u << 16u);
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08824188u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(15756));
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 191u, 0x08A4BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08824188u) goto L_08824188;
    return;
L_08824188:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0882418C;
L_0882418C:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088241C8;
      }
      goto L_088241A4;
    }
L_088241A4:
    aot_gpr[18] = (aot_gpr[29] | 0u);
    goto L_088241A8;
L_088241A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088241B4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 128u, 0x0881EA48u>(ctx, &aot_mem) && ctx.pc == 0x088241B4u) goto L_088241B4;
    return;
L_088241B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088241A8;
      }
      goto L_088241C8;
    }
L_088241C8:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08824210;
      }
      goto L_088241D8;
    }
L_088241D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088241FCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088241FCu) goto L_088241FC;
    return;
L_088241FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088241D8;
      }
      goto L_08824210;
    }
L_08824210:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824230:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08824244u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12256));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x08824244u) goto L_08824244;
    return;
L_08824244:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824250:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (0u | 7u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-3654), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[6] = (2u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[31] = (0x08824290u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08824290u) goto L_08824290;
    return;
L_08824290:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088242CC;
      }
      goto L_088242A4;
    }
L_088242A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088242B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 204u, 0x0881DE00u>(ctx, &aot_mem) && ctx.pc == 0x088242B8u) goto L_088242B8;
    return;
L_088242B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088242A4;
      }
      goto L_088242CC;
    }
L_088242CC:
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
L_088242E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[5] = (49024u << 16u);
    aot_gpr[16] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    goto L_08824308;
L_08824308:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(19360)));
    aot_gpr[7] = (aot_gpr[7] & 1u);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824340;
      }
      goto L_08824324;
    }
L_08824324:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(19384)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08824350;
      }
      goto L_08824338;
    }
L_08824338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824358;
      }
      goto L_08824340;
    }
L_08824340:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(19360)));
    aot_gpr[4] = (aot_gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(19360), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088243A8;
      }
      goto L_08824350;
    }
L_08824350:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_08824358;
L_08824358:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(19440));
      if (branch_taken) {
          goto L_08824308;
      }
      goto L_08824368;
    }
L_08824368:
    aot_gpr[31] = (0x08824370u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 111u, 0x08823DB8u>(ctx, &aot_mem) && ctx.pc == 0x08824370u) goto L_08824370;
    return;
L_08824370:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0882437Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 73u, 0x0881D4C4u>(ctx, &aot_mem) && ctx.pc == 0x0882437Cu) goto L_0882437C;
    return;
L_0882437C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(468), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(469), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(470), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(19360)));
    aot_gpr[4] = (aot_gpr[4] | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(19360), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_088243A8;
L_088243A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088243BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088243D4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0257_entry, 257u, 62u, 0x08905774u>(ctx, &aot_mem) && ctx.pc == 0x088243D4u) goto L_088243D4;
    return;
L_088243D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(19360)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(19360), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088243F4:
    aot_gpr[4] = (0u << 24u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824400:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22640), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824420:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824428:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824430:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-13256));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08824484u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 172u, 0x08877C70u>(ctx, &aot_mem) && ctx.pc == 0x08824484u) goto L_08824484;
    return;
L_08824484:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[31] = (0x08824490u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(1384)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 4u, 0x088C0038u>(ctx, &aot_mem) && ctx.pc == 0x08824490u) goto L_08824490;
    return;
L_08824490:
    aot_gpr[31] = (0x08824498u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 111u, 0x0881D6FCu>(ctx, &aot_mem) && ctx.pc == 0x08824498u) goto L_08824498;
    return;
L_08824498:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088244B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08824528;
      }
      goto L_088244D0;
    }
L_088244D0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-13256));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[31] = (0x088244E8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x088244E8u) goto L_088244E8;
    return;
L_088244E8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08824500;
      }
      goto L_088244F0;
    }
L_088244F0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08824500;
L_08824500:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08824528;
      }
      goto L_08824508;
    }
L_08824508:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08824528u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08824528u) goto L_08824528;
    return;
L_08824528:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882453C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08824588u);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08824588u) goto L_08824588;
    return;
L_08824588:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088245D0;
      }
      goto L_08824594;
    }
L_08824594:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-13256));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    goto L_088245D0;
L_088245D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088245ECu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 72u, 0x0881D4B4u>(ctx, &aot_mem) && ctx.pc == 0x088245ECu) goto L_088245EC;
    return;
L_088245EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08824600u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08824600u) goto L_08824600;
    return;
L_08824600:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (0u | 16u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08824644u);
    aot_gpr[6] = (0u | 32u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08824644u) goto L_08824644;
    return;
L_08824644:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08824660;
      }
      goto L_08824650;
    }
L_08824650:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0882465Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 53u, 0x08927540u>(ctx, &aot_mem) && ctx.pc == 0x0882465Cu) goto L_0882465C;
    return;
L_0882465C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08824660;
L_08824660:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0882468C;
      }
      goto L_0882466C;
    }
L_0882466C:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08824688u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 68u, 0x0881D444u>(ctx, &aot_mem) && ctx.pc == 0x08824688u) goto L_08824688;
    return;
L_08824688:
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_0882468C;
L_0882468C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[31] = (0x08824698u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 111u, 0x0881D6FCu>(ctx, &aot_mem) && ctx.pc == 0x08824698u) goto L_08824698;
    return;
L_08824698:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088246BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088246CCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 111u, 0x0881D6FCu>(ctx, &aot_mem) && ctx.pc == 0x088246CCu) goto L_088246CC;
    return;
L_088246CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088246D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088246E8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 162u, 0x0881EC98u>(ctx, &aot_mem) && ctx.pc == 0x088246E8u) goto L_088246E8;
    return;
L_088246E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088246F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088246FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824704:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08824714u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 102u, 0x0881E8C0u>(ctx, &aot_mem) && ctx.pc == 0x08824714u) goto L_08824714;
    return;
L_08824714:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824720:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22648), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824740:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08824760;
      }
      goto L_0882474C;
    }
L_0882474C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08824760;
      }
      goto L_0882475C;
    }
L_0882475C:
    aot_gpr[5] = (0u | 1u);
    goto L_08824760;
L_08824760:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824768:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0882477Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 32u, 0x089183A4u>(ctx, &aot_mem) && ctx.pc == 0x0882477Cu) goto L_0882477C;
    return;
L_0882477C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-13176));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882479C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08824818;
      }
      goto L_088247B8;
    }
L_088247B8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-13176));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088247D0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 41u, 0x0891842Cu>(ctx, &aot_mem) && ctx.pc == 0x088247D0u) goto L_088247D0;
    return;
L_088247D0:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08824818;
      }
      goto L_088247DC;
    }
L_088247DC:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824810;
      }
      goto L_088247EC;
    }
L_088247EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08824808u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08824808u) goto L_08824808;
    return;
L_08824808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824818;
      }
      goto L_08824810;
    }
L_08824810:
    aot_gpr[31] = (0x08824818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08824818u) goto L_08824818;
    return;
L_08824818:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882482C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0882483Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 51u, 0x0881F3CCu>(ctx, &aot_mem) && ctx.pc == 0x0882483Cu) goto L_0882483C;
    return;
L_0882483C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824848:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08824858u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 68u, 0x0881F4C4u>(ctx, &aot_mem) && ctx.pc == 0x08824858u) goto L_08824858;
    return;
L_08824858:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824864:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882486C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824874:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14096));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824880:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088248E0;
      }
      goto L_0882489C;
    }
L_0882489C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-13120));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088248B4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x088248B4u) goto L_088248B4;
    return;
L_088248B4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088248E0;
      }
      goto L_088248C0;
    }
L_088248C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088248E0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088248E0u) goto L_088248E0;
    return;
L_088248E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088248F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08824904u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 70u, 0x0881F4E0u>(ctx, &aot_mem) && ctx.pc == 0x08824904u) goto L_08824904;
    return;
L_08824904:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824910:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882491C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22656), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882493C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882499C;
      }
      goto L_08824958;
    }
L_08824958:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-13120));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08824970u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x08824970u) goto L_08824970;
    return;
L_08824970:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0882499C;
      }
      goto L_0882497C;
    }
L_0882497C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0882499Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882499Cu) goto L_0882499C;
    return;
L_0882499C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088249B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08824A10;
      }
      goto L_088249CC;
    }
L_088249CC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12728));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088249E4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x088249E4u) goto L_088249E4;
    return;
L_088249E4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08824A10;
      }
      goto L_088249F0;
    }
L_088249F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08824A10u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08824A10u) goto L_08824A10;
    return;
L_08824A10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824A24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08824A84;
      }
      goto L_08824A40;
    }
L_08824A40:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12688));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08824A58u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x08824A58u) goto L_08824A58;
    return;
L_08824A58:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08824A84;
      }
      goto L_08824A64;
    }
L_08824A64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08824A84u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08824A84u) goto L_08824A84;
    return;
L_08824A84:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824A98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08824AF8;
      }
      goto L_08824AB4;
    }
L_08824AB4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12960));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08824ACCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x08824ACCu) goto L_08824ACC;
    return;
L_08824ACC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08824AF8;
      }
      goto L_08824AD8;
    }
L_08824AD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08824AF8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08824AF8u) goto L_08824AF8;
    return;
L_08824AF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824B0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08824B6C;
      }
      goto L_08824B28;
    }
L_08824B28:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12920));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08824B40u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x08824B40u) goto L_08824B40;
    return;
L_08824B40:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08824B6C;
      }
      goto L_08824B4C;
    }
L_08824B4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08824B6Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08824B6Cu) goto L_08824B6C;
    return;
L_08824B6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824B80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08824BE0;
      }
      goto L_08824B9C;
    }
L_08824B9C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12824));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08824BB4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x08824BB4u) goto L_08824BB4;
    return;
L_08824BB4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08824BE0;
      }
      goto L_08824BC0;
    }
L_08824BC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08824BE0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08824BE0u) goto L_08824BE0;
    return;
L_08824BE0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824BF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08824C08u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 87u, 0x089186DCu>(ctx, &aot_mem) && ctx.pc == 0x08824C08u) goto L_08824C08;
    return;
L_08824C08:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-13080));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824C28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08824CA4;
      }
      goto L_08824C44;
    }
L_08824C44:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-13080));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08824C5Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 90u, 0x08918710u>(ctx, &aot_mem) && ctx.pc == 0x08824C5Cu) goto L_08824C5C;
    return;
L_08824C5C:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08824CA4;
      }
      goto L_08824C68;
    }
L_08824C68:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824C9C;
      }
      goto L_08824C78;
    }
L_08824C78:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08824C94u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08824C94u) goto L_08824C94;
    return;
L_08824C94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824CA4;
      }
      goto L_08824C9C;
    }
L_08824C9C:
    aot_gpr[31] = (0x08824CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08824CA4u) goto L_08824CA4;
    return;
L_08824CA4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824CB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08824CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 98u, 0x08918790u>(ctx, &aot_mem) && ctx.pc == 0x08824CC8u) goto L_08824CC8;
    return;
L_08824CC8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824CD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08824CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 100u, 0x089187BCu>(ctx, &aot_mem) && ctx.pc == 0x08824CE4u) goto L_08824CE4;
    return;
L_08824CE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824CF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08824D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 86u, 0x089186BCu>(ctx, &aot_mem) && ctx.pc == 0x08824D00u) goto L_08824D00;
    return;
L_08824D00:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824D0C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824D14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08824D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 89u, 0x08918708u>(ctx, &aot_mem) && ctx.pc == 0x08824D24u) goto L_08824D24;
    return;
L_08824D24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824D30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-3648));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-3936));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08824D6Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-3408));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 67u, 0x089185A4u>(ctx, &aot_mem) && ctx.pc == 0x08824D6Cu) goto L_08824D6C;
    return;
L_08824D6C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-3888));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08824D8Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-3344));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 67u, 0x089185A4u>(ctx, &aot_mem) && ctx.pc == 0x08824D8Cu) goto L_08824D8C;
    return;
L_08824D8C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-3600));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08824DACu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-3376));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 67u, 0x089185A4u>(ctx, &aot_mem) && ctx.pc == 0x08824DACu) goto L_08824DAC;
    return;
L_08824DAC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-4000));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08824DCCu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-3280));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 67u, 0x089185A4u>(ctx, &aot_mem) && ctx.pc == 0x08824DCCu) goto L_08824DCC;
    return;
L_08824DCC:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08824DE4u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-3312));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 67u, 0x089185A4u>(ctx, &aot_mem) && ctx.pc == 0x08824DE4u) goto L_08824DE4;
    return;
L_08824DE4:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08824DFCu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-3248));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 67u, 0x089185A4u>(ctx, &aot_mem) && ctx.pc == 0x08824DFCu) goto L_08824DFC;
    return;
L_08824DFC:
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
L_08824E14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08824E28u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3648));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 70u, 0x089185ECu>(ctx, &aot_mem) && ctx.pc == 0x08824E28u) goto L_08824E28;
    return;
L_08824E28:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08824E34u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3552));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 70u, 0x089185ECu>(ctx, &aot_mem) && ctx.pc == 0x08824E34u) goto L_08824E34;
    return;
L_08824E34:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08824E40u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3936));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 70u, 0x089185ECu>(ctx, &aot_mem) && ctx.pc == 0x08824E40u) goto L_08824E40;
    return;
L_08824E40:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08824E4Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3888));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 70u, 0x089185ECu>(ctx, &aot_mem) && ctx.pc == 0x08824E4Cu) goto L_08824E4C;
    return;
L_08824E4C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08824E58u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4000));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 70u, 0x089185ECu>(ctx, &aot_mem) && ctx.pc == 0x08824E58u) goto L_08824E58;
    return;
L_08824E58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824E64:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14024));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824E70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22664), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08824EA4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3648));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 153u, 0x08825A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08824EA4u) goto L_08824EA4;
    return;
L_08824EA4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08824EB0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22668));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08824EB0u) goto L_08824EB0;
    return;
L_08824EB0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08824EBCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3936));
    goto L_08824768;
L_08824EBC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08824EC8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22680));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08824EC8u) goto L_08824EC8;
    return;
L_08824EC8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08824ED4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3888));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 71u, 0x088254ECu>(ctx, &aot_mem) && ctx.pc == 0x08824ED4u) goto L_08824ED4;
    return;
L_08824ED4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08824EE0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22692));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08824EE0u) goto L_08824EE0;
    return;
L_08824EE0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08824EECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4000));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 43u, 0x08825314u>(ctx, &aot_mem) && ctx.pc == 0x08824EECu) goto L_08824EEC;
    return;
L_08824EEC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08824EF8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22704));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08824EF8u) goto L_08824EF8;
    return;
L_08824EF8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08824F04u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3600));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 9u, 0x088250CCu>(ctx, &aot_mem) && ctx.pc == 0x08824F04u) goto L_08824F04;
    return;
L_08824F04:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08824F10u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22716));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08824F10u) goto L_08824F10;
    return;
L_08824F10:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08824F1Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3552));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 137u, 0x0882597Cu>(ctx, &aot_mem) && ctx.pc == 0x08824F1Cu) goto L_08824F1C;
    return;
L_08824F1C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08824F28u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22728));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08824F28u) goto L_08824F28;
    return;
L_08824F28:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08824F34u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3504));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 105u, 0x0882575Cu>(ctx, &aot_mem) && ctx.pc == 0x08824F34u) goto L_08824F34;
    return;
L_08824F34:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08824F40u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22740));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08824F40u) goto L_08824F40;
    return;
L_08824F40:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08824F4Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3456));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 121u, 0x0882586Cu>(ctx, &aot_mem) && ctx.pc == 0x08824F4Cu) goto L_08824F4C;
    return;
L_08824F4C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08824F58u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22752));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08824F58u) goto L_08824F58;
    return;
L_08824F58:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-3408));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3408), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-13120));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08824F90u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22764));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08824F90u) goto L_08824F90;
    return;
L_08824F90:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-3376));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3376), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12960));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08824FC4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22776));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08824FC4u) goto L_08824FC4;
    return;
L_08824FC4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-3344));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3344), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12728));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08824FF8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22788));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08824FF8u) goto L_08824FF8;
    return;
L_08824FF8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-3280));
    ctx.pc = 0x08825000u; return;
}

void recomp_unit_0032(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0032_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_32(Runtime &runtime) {
    runtime.register_generated_unit(32u, 0x08824000u, 4096u, &recomp_unit_0032, &recomp_unit_0032_entry);
    runtime.register_function(0x08824000u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882400Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824014u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882403Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824048u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824058u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824060u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824094u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088240A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088240BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088240E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824118u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824124u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824140u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824158u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824164u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824170u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824188u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882418Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088241A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088241A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088241B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088241C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088241D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088241FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824210u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824230u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824244u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824250u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824290u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088242A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088242B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088242CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088242E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824308u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824324u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824338u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824340u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824350u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824358u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824368u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824370u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882437Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088243A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088243BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088243D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088243F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824400u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824420u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824428u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824430u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824484u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824490u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824498u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088244B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088244D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088244E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088244F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824500u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824508u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824528u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882453Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824588u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824594u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088245D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088245ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824600u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824644u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824650u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882465Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824660u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882466Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824688u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882468Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824698u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088246BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088246CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088246D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088246E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088246F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088246FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824704u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824714u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824720u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824740u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882474Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882475Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824760u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824768u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882477Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882479Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088247B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088247D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088247DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088247ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824808u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824810u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824818u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882482Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882483Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824848u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824858u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824864u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882486Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824874u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824880u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882489Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088248B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088248C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088248E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088248F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824904u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824910u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882491Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882493Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824958u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824970u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882497Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0882499Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088249B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088249CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088249E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088249F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824A10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824A24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824A40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824A58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824A64u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824A84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824A98u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824AB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824ACCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824AD8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824AF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824B0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824B28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824B40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824B4Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824B6Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824B80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824B9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824BB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824BC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824BE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824BF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824C08u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824C28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824C44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824C5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824C68u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824C78u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824C94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824C9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824CA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824CB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824CC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824CD4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824CE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824CF0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824D00u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824D0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824D14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824D24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824D30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824D6Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824D8Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824DACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824DCCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824DE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824DFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824E14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824E28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824E34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824E40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824E4Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824E58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824E64u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824E70u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824EA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824EB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824EBCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824EC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824ED4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824EE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824EECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824EF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824F04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824F10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824F1Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824F28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824F34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824F40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824F4Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824F58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824F90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824FC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08824FF8u, &recomp_unit_0032, "recomp_unit_0032");
}
} // namespace psprecomp
