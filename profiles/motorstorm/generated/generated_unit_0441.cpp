#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0441[1023] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35,
    0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0,
    0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0,
    60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0,
    175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0,
    0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196,
};
void recomp_unit_0441_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089BD000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0441[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089BD000;
    case 2u: goto L_089BD00C;
    case 3u: goto L_089BD018;
    case 4u: goto L_089BD034;
    case 5u: goto L_089BD058;
    case 6u: goto L_089BD078;
    case 7u: goto L_089BD09C;
    case 8u: goto L_089BD0A8;
    case 9u: goto L_089BD0B4;
    case 10u: goto L_089BD0C4;
    case 11u: goto L_089BD0D0;
    case 12u: goto L_089BD0DC;
    case 13u: goto L_089BD0E8;
    case 14u: goto L_089BD104;
    case 15u: goto L_089BD128;
    case 16u: goto L_089BD138;
    case 17u: goto L_089BD144;
    case 18u: goto L_089BD150;
    case 19u: goto L_089BD15C;
    case 20u: goto L_089BD178;
    case 21u: goto L_089BD19C;
    case 22u: goto L_089BD1AC;
    case 23u: goto L_089BD1B8;
    case 24u: goto L_089BD1C4;
    case 25u: goto L_089BD1E0;
    case 26u: goto L_089BD204;
    case 27u: goto L_089BD210;
    case 28u: goto L_089BD21C;
    case 29u: goto L_089BD228;
    case 30u: goto L_089BD234;
    case 31u: goto L_089BD244;
    case 32u: goto L_089BD250;
    case 33u: goto L_089BD25C;
    case 34u: goto L_089BD26C;
    case 35u: goto L_089BD27C;
    case 36u: goto L_089BD288;
    case 37u: goto L_089BD294;
    case 38u: goto L_089BD2A0;
    case 39u: goto L_089BD2BC;
    case 40u: goto L_089BD2E0;
    case 41u: goto L_089BD300;
    case 42u: goto L_089BD324;
    case 43u: goto L_089BD334;
    case 44u: goto L_089BD340;
    case 45u: goto L_089BD35C;
    case 46u: goto L_089BD380;
    case 47u: goto L_089BD390;
    case 48u: goto L_089BD39C;
    case 49u: goto L_089BD3B8;
    case 50u: goto L_089BD3DC;
    case 51u: goto L_089BD3E8;
    case 52u: goto L_089BD3F4;
    case 53u: goto L_089BD404;
    case 54u: goto L_089BD410;
    case 55u: goto L_089BD41C;
    case 56u: goto L_089BD438;
    case 57u: goto L_089BD444;
    case 58u: goto L_089BD468;
    case 59u: goto L_089BD474;
    case 60u: goto L_089BD480;
    case 61u: goto L_089BD48C;
    case 62u: goto L_089BD4A8;
    case 63u: goto L_089BD4CC;
    case 64u: goto L_089BD4DC;
    case 65u: goto L_089BD4E8;
    case 66u: goto L_089BD504;
    case 67u: goto L_089BD528;
    case 68u: goto L_089BD538;
    case 69u: goto L_089BD544;
    case 70u: goto L_089BD560;
    case 71u: goto L_089BD584;
    case 72u: goto L_089BD590;
    case 73u: goto L_089BD5AC;
    case 74u: goto L_089BD5D0;
    case 75u: goto L_089BD5E0;
    case 76u: goto L_089BD5EC;
    case 77u: goto L_089BD608;
    case 78u: goto L_089BD62C;
    case 79u: goto L_089BD63C;
    case 80u: goto L_089BD648;
    case 81u: goto L_089BD654;
    case 82u: goto L_089BD670;
    case 83u: goto L_089BD694;
    case 84u: goto L_089BD6A0;
    case 85u: goto L_089BD6AC;
    case 86u: goto L_089BD6B8;
    case 87u: goto L_089BD6C4;
    case 88u: goto L_089BD6E0;
    case 89u: goto L_089BD704;
    case 90u: goto L_089BD714;
    case 91u: goto L_089BD734;
    case 92u: goto L_089BD758;
    case 93u: goto L_089BD768;
    case 94u: goto L_089BD774;
    case 95u: goto L_089BD780;
    case 96u: goto L_089BD7A0;
    case 97u: goto L_089BD7C4;
    case 98u: goto L_089BD7D0;
    case 99u: goto L_089BD7EC;
    case 100u: goto L_089BD810;
    case 101u: goto L_089BD830;
    case 102u: goto L_089BD854;
    case 103u: goto L_089BD864;
    case 104u: goto L_089BD874;
    case 105u: goto L_089BD880;
    case 106u: goto L_089BD89C;
    case 107u: goto L_089BD8C0;
    case 108u: goto L_089BD8D0;
    case 109u: goto L_089BD8DC;
    case 110u: goto L_089BD8E8;
    case 111u: goto L_089BD908;
    case 112u: goto L_089BD92C;
    case 113u: goto L_089BD938;
    case 114u: goto L_089BD944;
    case 115u: goto L_089BD960;
    case 116u: goto L_089BD974;
    case 117u: goto L_089BD998;
    case 118u: goto L_089BD9A8;
    case 119u: goto L_089BD9B4;
    case 120u: goto L_089BD9C0;
    case 121u: goto L_089BD9CC;
    case 122u: goto L_089BD9DC;
    case 123u: goto L_089BD9E8;
    case 124u: goto L_089BD9F4;
    case 125u: goto L_089BDA14;
    case 126u: goto L_089BDA2C;
    case 127u: goto L_089BDA40;
    case 128u: goto L_089BDA64;
    case 129u: goto L_089BDA70;
    case 130u: goto L_089BDA7C;
    case 131u: goto L_089BDA88;
    case 132u: goto L_089BDAA4;
    case 133u: goto L_089BDAB8;
    case 134u: goto L_089BDADC;
    case 135u: goto L_089BDAE8;
    case 136u: goto L_089BDAF4;
    case 137u: goto L_089BDB00;
    case 138u: goto L_089BDB1C;
    case 139u: goto L_089BDB40;
    case 140u: goto L_089BDB50;
    case 141u: goto L_089BDB5C;
    case 142u: goto L_089BDB68;
    case 143u: goto L_089BDB84;
    case 144u: goto L_089BDBA8;
    case 145u: goto L_089BDBB8;
    case 146u: goto L_089BDBC4;
    case 147u: goto L_089BDBE0;
    case 148u: goto L_089BDC04;
    case 149u: goto L_089BDC10;
    case 150u: goto L_089BDC1C;
    case 151u: goto L_089BDC28;
    case 152u: goto L_089BDC34;
    case 153u: goto L_089BDC44;
    case 154u: goto L_089BDC54;
    case 155u: goto L_089BDC60;
    case 156u: goto L_089BDC6C;
    case 157u: goto L_089BDC88;
    case 158u: goto L_089BDCAC;
    case 159u: goto L_089BDCBC;
    case 160u: goto L_089BDCC8;
    case 161u: goto L_089BDCD4;
    case 162u: goto L_089BDCF4;
    case 163u: goto L_089BDD18;
    case 164u: goto L_089BDD24;
    case 165u: goto L_089BDD40;
    case 166u: goto L_089BDD64;
    case 167u: goto L_089BDD74;
    case 168u: goto L_089BDD80;
    case 169u: goto L_089BDD9C;
    case 170u: goto L_089BDDC0;
    case 171u: goto L_089BDDCC;
    case 172u: goto L_089BDDD8;
    case 173u: goto L_089BDDE8;
    case 174u: goto L_089BDDF4;
    case 175u: goto L_089BDE00;
    case 176u: goto L_089BDE0C;
    case 177u: goto L_089BDE2C;
    case 178u: goto L_089BDE50;
    case 179u: goto L_089BDE5C;
    case 180u: goto L_089BDE68;
    case 181u: goto L_089BDE88;
    case 182u: goto L_089BDEA8;
    case 183u: goto L_089BDEC4;
    case 184u: goto L_089BDEE8;
    case 185u: goto L_089BDEF8;
    case 186u: goto L_089BDF04;
    case 187u: goto L_089BDF20;
    case 188u: goto L_089BDF44;
    case 189u: goto L_089BDF50;
    case 190u: goto L_089BDF6C;
    case 191u: goto L_089BDF90;
    case 192u: goto L_089BDFA0;
    case 193u: goto L_089BDFAC;
    case 194u: goto L_089BDFC8;
    case 195u: goto L_089BDFEC;
    case 196u: goto L_089BDFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089BD000:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089BD00Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD00Cu) goto L_089BD00C;
    return;
L_089BD00C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD018u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BD018u) goto L_089BD018;
    return;
L_089BD018:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BD034:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD058u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD058u) goto L_089BD058;
    return;
L_089BD058:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BD078:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD09Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD09Cu) goto L_089BD09C;
    return;
L_089BD09C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD0A8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD0A8u) goto L_089BD0A8;
    return;
L_089BD0A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD0B4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD0B4u) goto L_089BD0B4;
    return;
L_089BD0B4:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD0C4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD0C4u) goto L_089BD0C4;
    return;
L_089BD0C4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD0D0u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD0D0u) goto L_089BD0D0;
    return;
L_089BD0D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD0DCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD0DCu) goto L_089BD0DC;
    return;
L_089BD0DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD0E8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BD0E8u) goto L_089BD0E8;
    return;
L_089BD0E8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BD104:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD128u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD128u) goto L_089BD128;
    return;
L_089BD128:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD138u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD138u) goto L_089BD138;
    return;
L_089BD138:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD144u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD144u) goto L_089BD144;
    return;
L_089BD144:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD150u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD150u) goto L_089BD150;
    return;
L_089BD150:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD15Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD15Cu) goto L_089BD15C;
    return;
L_089BD15C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BD178:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD19Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD19Cu) goto L_089BD19C;
    return;
L_089BD19C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[31] = (0x089BD1ACu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD1ACu) goto L_089BD1AC;
    return;
L_089BD1AC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD1B8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD1B8u) goto L_089BD1B8;
    return;
L_089BD1B8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD1C4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD1C4u) goto L_089BD1C4;
    return;
L_089BD1C4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BD1E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD204u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD204u) goto L_089BD204;
    return;
L_089BD204:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD210u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD210u) goto L_089BD210;
    return;
L_089BD210:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD21Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD21Cu) goto L_089BD21C;
    return;
L_089BD21C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD228u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD228u) goto L_089BD228;
    return;
L_089BD228:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD234u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD234u) goto L_089BD234;
    return;
L_089BD234:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD244u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD244u) goto L_089BD244;
    return;
L_089BD244:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD250u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD250u) goto L_089BD250;
    return;
L_089BD250:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD25Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD25Cu) goto L_089BD25C;
    return;
L_089BD25C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x089BD26Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD26Cu) goto L_089BD26C;
    return;
L_089BD26C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD27Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD27Cu) goto L_089BD27C;
    return;
L_089BD27C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD288u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD288u) goto L_089BD288;
    return;
L_089BD288:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD294u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD294u) goto L_089BD294;
    return;
L_089BD294:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD2A0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(364));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BD2A0u) goto L_089BD2A0;
    return;
L_089BD2A0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BD2BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD2E0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD2E0u) goto L_089BD2E0;
    return;
L_089BD2E0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BD300:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD324u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD324u) goto L_089BD324;
    return;
L_089BD324:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BD334u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD334u) goto L_089BD334;
    return;
L_089BD334:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD340u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD340u) goto L_089BD340;
    return;
L_089BD340:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BD35C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD380u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD380u) goto L_089BD380;
    return;
L_089BD380:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BD390u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD390u) goto L_089BD390;
    return;
L_089BD390:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD39Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD39Cu) goto L_089BD39C;
    return;
L_089BD39C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BD3B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD3DCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD3DCu) goto L_089BD3DC;
    return;
L_089BD3DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD3E8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD3E8u) goto L_089BD3E8;
    return;
L_089BD3E8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD3F4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD3F4u) goto L_089BD3F4;
    return;
L_089BD3F4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[31] = (0x089BD404u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD404u) goto L_089BD404;
    return;
L_089BD404:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD410u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD410u) goto L_089BD410;
    return;
L_089BD410:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD41Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(284));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BD41Cu) goto L_089BD41C;
    return;
L_089BD41C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BD438:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BD444:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD468u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD468u) goto L_089BD468;
    return;
L_089BD468:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD474u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD474u) goto L_089BD474;
    return;
L_089BD474:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD480u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD480u) goto L_089BD480;
    return;
L_089BD480:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD48Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD48Cu) goto L_089BD48C;
    return;
L_089BD48C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BD4A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD4CCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD4CCu) goto L_089BD4CC;
    return;
L_089BD4CC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BD4DCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD4DCu) goto L_089BD4DC;
    return;
L_089BD4DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD4E8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD4E8u) goto L_089BD4E8;
    return;
L_089BD4E8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BD504:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD528u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD528u) goto L_089BD528;
    return;
L_089BD528:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BD538u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD538u) goto L_089BD538;
    return;
L_089BD538:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD544u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD544u) goto L_089BD544;
    return;
L_089BD544:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BD560:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD584u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD584u) goto L_089BD584;
    return;
L_089BD584:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD590u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD590u) goto L_089BD590;
    return;
L_089BD590:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BD5AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD5D0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD5D0u) goto L_089BD5D0;
    return;
L_089BD5D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BD5E0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD5E0u) goto L_089BD5E0;
    return;
L_089BD5E0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD5ECu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD5ECu) goto L_089BD5EC;
    return;
L_089BD5EC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BD608:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD62Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD62Cu) goto L_089BD62C;
    return;
L_089BD62C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[31] = (0x089BD63Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD63Cu) goto L_089BD63C;
    return;
L_089BD63C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD648u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD648u) goto L_089BD648;
    return;
L_089BD648:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD654u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD654u) goto L_089BD654;
    return;
L_089BD654:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BD670:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD694u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD694u) goto L_089BD694;
    return;
L_089BD694:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD6A0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD6A0u) goto L_089BD6A0;
    return;
L_089BD6A0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD6ACu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD6ACu) goto L_089BD6AC;
    return;
L_089BD6AC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD6B8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD6B8u) goto L_089BD6B8;
    return;
L_089BD6B8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD6C4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD6C4u) goto L_089BD6C4;
    return;
L_089BD6C4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BD6E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD704u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD704u) goto L_089BD704;
    return;
L_089BD704:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BD714u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD714u) goto L_089BD714;
    return;
L_089BD714:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(53));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(600));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BD734:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD758u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD758u) goto L_089BD758;
    return;
L_089BD758:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD768u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD768u) goto L_089BD768;
    return;
L_089BD768:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD774u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD774u) goto L_089BD774;
    return;
L_089BD774:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD780u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD780u) goto L_089BD780;
    return;
L_089BD780:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(600));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BD7A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD7C4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD7C4u) goto L_089BD7C4;
    return;
L_089BD7C4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD7D0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD7D0u) goto L_089BD7D0;
    return;
L_089BD7D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BD7EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD810u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD810u) goto L_089BD810;
    return;
L_089BD810:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BD830:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD854u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD854u) goto L_089BD854;
    return;
L_089BD854:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BD864u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD864u) goto L_089BD864;
    return;
L_089BD864:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(38));
    aot_gpr[31] = (0x089BD874u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD874u) goto L_089BD874;
    return;
L_089BD874:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD880u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD880u) goto L_089BD880;
    return;
L_089BD880:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BD89C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD8C0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD8C0u) goto L_089BD8C0;
    return;
L_089BD8C0:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD8D0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD8D0u) goto L_089BD8D0;
    return;
L_089BD8D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD8DCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD8DCu) goto L_089BD8DC;
    return;
L_089BD8DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD8E8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD8E8u) goto L_089BD8E8;
    return;
L_089BD8E8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BD908:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD92Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD92Cu) goto L_089BD92C;
    return;
L_089BD92C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BD938u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD938u) goto L_089BD938;
    return;
L_089BD938:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BD944u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD944u) goto L_089BD944;
    return;
L_089BD944:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(156));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089BD960u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 143u, 0x0899499Cu>(ctx, &aot_mem) && ctx.pc == 0x089BD960u) goto L_089BD960;
    return;
L_089BD960:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BD974:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BD998u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD998u) goto L_089BD998;
    return;
L_089BD998:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD9A8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD9A8u) goto L_089BD9A8;
    return;
L_089BD9A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD9B4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD9B4u) goto L_089BD9B4;
    return;
L_089BD9B4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD9C0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD9C0u) goto L_089BD9C0;
    return;
L_089BD9C0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD9CCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD9CCu) goto L_089BD9CC;
    return;
L_089BD9CC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD9DCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BD9DCu) goto L_089BD9DC;
    return;
L_089BD9DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD9E8u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BD9E8u) goto L_089BD9E8;
    return;
L_089BD9E8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BD9F4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BD9F4u) goto L_089BD9F4;
    return;
L_089BD9F4:
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(84));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(148));
    aot_gpr[31] = (0x089BDA14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 139u, 0x08994940u>(ctx, &aot_mem) && ctx.pc == 0x089BDA14u) goto L_089BDA14;
    return;
L_089BDA14:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[31] = (0x089BDA2Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 74u, 0x08994488u>(ctx, &aot_mem) && ctx.pc == 0x089BDA2Cu) goto L_089BDA2C;
    return;
L_089BDA2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDA40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDA64u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDA64u) goto L_089BDA64;
    return;
L_089BDA64:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BDA70u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BDA70u) goto L_089BDA70;
    return;
L_089BDA70:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BDA7Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDA7Cu) goto L_089BDA7C;
    return;
L_089BDA7C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089BDA88u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDA88u) goto L_089BDA88;
    return;
L_089BDA88:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(156));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089BDAA4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 143u, 0x0899499Cu>(ctx, &aot_mem) && ctx.pc == 0x089BDAA4u) goto L_089BDAA4;
    return;
L_089BDAA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDAB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDADCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDADCu) goto L_089BDADC;
    return;
L_089BDADC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDAE8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BDAE8u) goto L_089BDAE8;
    return;
L_089BDAE8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDAF4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDAF4u) goto L_089BDAF4;
    return;
L_089BDAF4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDB00u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDB00u) goto L_089BDB00;
    return;
L_089BDB00:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BDB1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDB40u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDB40u) goto L_089BDB40;
    return;
L_089BDB40:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[31] = (0x089BDB50u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDB50u) goto L_089BDB50;
    return;
L_089BDB50:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDB5Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BDB5Cu) goto L_089BDB5C;
    return;
L_089BDB5C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDB68u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDB68u) goto L_089BDB68;
    return;
L_089BDB68:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BDB84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDBA8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDBA8u) goto L_089BDBA8;
    return;
L_089BDBA8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BDBB8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDBB8u) goto L_089BDBB8;
    return;
L_089BDBB8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDBC4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BDBC4u) goto L_089BDBC4;
    return;
L_089BDBC4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BDBE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDC04u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDC04u) goto L_089BDC04;
    return;
L_089BDC04:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDC10u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BDC10u) goto L_089BDC10;
    return;
L_089BDC10:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDC1Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDC1Cu) goto L_089BDC1C;
    return;
L_089BDC1C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDC28u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDC28u) goto L_089BDC28;
    return;
L_089BDC28:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDC34u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDC34u) goto L_089BDC34;
    return;
L_089BDC34:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x089BDC44u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDC44u) goto L_089BDC44;
    return;
L_089BDC44:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[31] = (0x089BDC54u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDC54u) goto L_089BDC54;
    return;
L_089BDC54:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDC60u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(324));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDC60u) goto L_089BDC60;
    return;
L_089BDC60:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDC6Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(328));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089BDC6Cu) goto L_089BDC6C;
    return;
L_089BDC6C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089BDC88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDCACu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDCACu) goto L_089BDCAC;
    return;
L_089BDCAC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDCBCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDCBCu) goto L_089BDCBC;
    return;
L_089BDCBC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDCC8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BDCC8u) goto L_089BDCC8;
    return;
L_089BDCC8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDCD4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDCD4u) goto L_089BDCD4;
    return;
L_089BDCD4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(600));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BDCF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDD18u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDD18u) goto L_089BDD18;
    return;
L_089BDD18:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDD24u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BDD24u) goto L_089BDD24;
    return;
L_089BDD24:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BDD40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDD64u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDD64u) goto L_089BDD64;
    return;
L_089BDD64:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BDD74u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDD74u) goto L_089BDD74;
    return;
L_089BDD74:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDD80u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BDD80u) goto L_089BDD80;
    return;
L_089BDD80:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BDD9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDDC0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDDC0u) goto L_089BDDC0;
    return;
L_089BDDC0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDDCCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BDDCCu) goto L_089BDDCC;
    return;
L_089BDDCC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDDD8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDDD8u) goto L_089BDDD8;
    return;
L_089BDDD8:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDDE8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDDE8u) goto L_089BDDE8;
    return;
L_089BDDE8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDDF4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDDF4u) goto L_089BDDF4;
    return;
L_089BDDF4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDE00u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDE00u) goto L_089BDE00;
    return;
L_089BDE00:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDE0Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDE0Cu) goto L_089BDE0C;
    return;
L_089BDE0C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BDE2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDE50u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDE50u) goto L_089BDE50;
    return;
L_089BDE50:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDE5Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BDE5Cu) goto L_089BDE5C;
    return;
L_089BDE5C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDE68u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDE68u) goto L_089BDE68;
    return;
L_089BDE68:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089BDE88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDEA8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089BDEA8u) goto L_089BDEA8;
    return;
L_089BDEA8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BDEC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDEE8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDEE8u) goto L_089BDEE8;
    return;
L_089BDEE8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BDEF8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDEF8u) goto L_089BDEF8;
    return;
L_089BDEF8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDF04u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BDF04u) goto L_089BDF04;
    return;
L_089BDF04:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BDF20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDF44u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDF44u) goto L_089BDF44;
    return;
L_089BDF44:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDF50u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BDF50u) goto L_089BDF50;
    return;
L_089BDF50:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BDF6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDF90u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDF90u) goto L_089BDF90;
    return;
L_089BDF90:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089BDFA0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDFA0u) goto L_089BDFA0;
    return;
L_089BDFA0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDFACu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BDFACu) goto L_089BDFAC;
    return;
L_089BDFAC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089BDFC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089BDFECu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089BDFECu) goto L_089BDFEC;
    return;
L_089BDFEC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089BDFF8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089BDFF8u) goto L_089BDFF8;
    return;
L_089BDFF8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    ctx.pc = 0x089BE000u; return;
}

void recomp_unit_0441(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0441_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_441(Runtime &runtime) {
    runtime.register_generated_unit(441u, 0x089BD000u, 4096u, &recomp_unit_0441, &recomp_unit_0441_entry);
    runtime.register_function(0x089BD000u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD00Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD018u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD034u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD058u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD078u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD09Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD0A8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD0B4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD0C4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD0D0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD0DCu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD0E8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD104u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD128u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD138u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD144u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD150u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD15Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD178u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD19Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD1ACu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD1B8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD1C4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD1E0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD204u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD210u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD21Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD228u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD234u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD244u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD250u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD25Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD26Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD27Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD288u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD294u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD2A0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD2BCu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD2E0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD300u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD324u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD334u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD340u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD35Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD380u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD390u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD39Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD3B8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD3DCu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD3E8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD3F4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD404u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD410u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD41Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD438u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD444u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD468u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD474u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD480u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD48Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD4A8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD4CCu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD4DCu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD4E8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD504u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD528u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD538u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD544u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD560u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD584u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD590u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD5ACu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD5D0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD5E0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD5ECu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD608u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD62Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD63Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD648u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD654u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD670u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD694u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD6A0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD6ACu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD6B8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD6C4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD6E0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD704u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD714u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD734u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD758u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD768u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD774u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD780u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD7A0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD7C4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD7D0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD7ECu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD810u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD830u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD854u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD864u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD874u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD880u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD89Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD8C0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD8D0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD8DCu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD8E8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD908u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD92Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD938u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD944u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD960u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD974u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD998u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD9A8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD9B4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD9C0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD9CCu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD9DCu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD9E8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BD9F4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDA14u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDA2Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDA40u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDA64u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDA70u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDA7Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDA88u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDAA4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDAB8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDADCu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDAE8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDAF4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDB00u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDB1Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDB40u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDB50u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDB5Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDB68u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDB84u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDBA8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDBB8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDBC4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDBE0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDC04u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDC10u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDC1Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDC28u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDC34u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDC44u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDC54u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDC60u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDC6Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDC88u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDCACu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDCBCu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDCC8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDCD4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDCF4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDD18u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDD24u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDD40u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDD64u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDD74u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDD80u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDD9Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDDC0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDDCCu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDDD8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDDE8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDDF4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDE00u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDE0Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDE2Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDE50u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDE5Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDE68u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDE88u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDEA8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDEC4u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDEE8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDEF8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDF04u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDF20u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDF44u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDF50u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDF6Cu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDF90u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDFA0u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDFACu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDFC8u, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDFECu, &recomp_unit_0441, "recomp_unit_0441");
    runtime.register_function(0x089BDFF8u, &recomp_unit_0441, "recomp_unit_0441");
}
} // namespace psprecomp
