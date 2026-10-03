#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0455[1018] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37,
    0, 38, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43,
    0, 44, 0, 0, 0, 0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 64, 0, 0, 65, 0, 66, 0, 67, 0, 0,
    0, 0, 68, 0, 0, 69, 0, 0, 70, 71, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0,
    78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0,
    0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 113, 0, 114, 0, 0, 115, 0, 0,
    116, 117, 0, 118, 0, 0, 119, 120, 0, 121, 0, 0, 122, 0, 0, 123, 124, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 0,
    129, 0, 0, 130, 0, 0, 131, 132, 0, 133, 0, 0, 0, 0, 134, 135, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 140, 141, 0, 0,
    0, 142, 143, 0, 0, 0, 0, 0, 0, 0, 144, 145, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0,
    0, 0, 0, 150, 151, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 159, 0, 160, 0, 0, 161, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 168, 0,
    169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 173, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212,
};
void recomp_unit_0455_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089CB004u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0455[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089CB004;
    case 2u: goto L_089CB090;
    case 3u: goto L_089CB09C;
    case 4u: goto L_089CB0A8;
    case 5u: goto L_089CB0B8;
    case 6u: goto L_089CB0C4;
    case 7u: goto L_089CB0CC;
    case 8u: goto L_089CB0D4;
    case 9u: goto L_089CB0E4;
    case 10u: goto L_089CB108;
    case 11u: goto L_089CB110;
    case 12u: goto L_089CB120;
    case 13u: goto L_089CB138;
    case 14u: goto L_089CB140;
    case 15u: goto L_089CB144;
    case 16u: goto L_089CB178;
    case 17u: goto L_089CB1B0;
    case 18u: goto L_089CB1EC;
    case 19u: goto L_089CB238;
    case 20u: goto L_089CB240;
    case 21u: goto L_089CB268;
    case 22u: goto L_089CB274;
    case 23u: goto L_089CB294;
    case 24u: goto L_089CB2D0;
    case 25u: goto L_089CB338;
    case 26u: goto L_089CB340;
    case 27u: goto L_089CB348;
    case 28u: goto L_089CB350;
    case 29u: goto L_089CB360;
    case 30u: goto L_089CB368;
    case 31u: goto L_089CB394;
    case 32u: goto L_089CB39C;
    case 33u: goto L_089CB3BC;
    case 34u: goto L_089CB3C4;
    case 35u: goto L_089CB3D8;
    case 36u: goto L_089CB3F8;
    case 37u: goto L_089CB400;
    case 38u: goto L_089CB408;
    case 39u: goto L_089CB40C;
    case 40u: goto L_089CB440;
    case 41u: goto L_089CB448;
    case 42u: goto L_089CB468;
    case 43u: goto L_089CB480;
    case 44u: goto L_089CB488;
    case 45u: goto L_089CB49C;
    case 46u: goto L_089CB4A4;
    case 47u: goto L_089CB4B0;
    case 48u: goto L_089CB4C8;
    case 49u: goto L_089CB4D4;
    case 50u: goto L_089CB4DC;
    case 51u: goto L_089CB510;
    case 52u: goto L_089CB524;
    case 53u: goto L_089CB540;
    case 54u: goto L_089CB54C;
    case 55u: goto L_089CB554;
    case 56u: goto L_089CB564;
    case 57u: goto L_089CB578;
    case 58u: goto L_089CB584;
    case 59u: goto L_089CB5A0;
    case 60u: goto L_089CB5A8;
    case 61u: goto L_089CB5B8;
    case 62u: goto L_089CB5D0;
    case 63u: goto L_089CB5D8;
    case 64u: goto L_089CB5DC;
    case 65u: goto L_089CB5E8;
    case 66u: goto L_089CB5F0;
    case 67u: goto L_089CB5F8;
    case 68u: goto L_089CB60C;
    case 69u: goto L_089CB618;
    case 70u: goto L_089CB624;
    case 71u: goto L_089CB628;
    case 72u: goto L_089CB63C;
    case 73u: goto L_089CB644;
    case 74u: goto L_089CB64C;
    case 75u: goto L_089CB668;
    case 76u: goto L_089CB670;
    case 77u: goto L_089CB678;
    case 78u: goto L_089CB684;
    case 79u: goto L_089CB68C;
    case 80u: goto L_089CB69C;
    case 81u: goto L_089CB6B4;
    case 82u: goto L_089CB6C8;
    case 83u: goto L_089CB6E0;
    case 84u: goto L_089CB6E8;
    case 85u: goto L_089CB6F4;
    case 86u: goto L_089CB708;
    case 87u: goto L_089CB714;
    case 88u: goto L_089CB744;
    case 89u: goto L_089CB74C;
    case 90u: goto L_089CB768;
    case 91u: goto L_089CB770;
    case 92u: goto L_089CB7D4;
    case 93u: goto L_089CB7FC;
    case 94u: goto L_089CB830;
    case 95u: goto L_089CB838;
    case 96u: goto L_089CB848;
    case 97u: goto L_089CB888;
    case 98u: goto L_089CB8BC;
    case 99u: goto L_089CB8F4;
    case 100u: goto L_089CB938;
    case 101u: goto L_089CB940;
    case 102u: goto L_089CB950;
    case 103u: goto L_089CB95C;
    case 104u: goto L_089CB964;
    case 105u: goto L_089CB96C;
    case 106u: goto L_089CB98C;
    case 107u: goto L_089CB9A8;
    case 108u: goto L_089CB9B4;
    case 109u: goto L_089CB9B8;
    case 110u: goto L_089CB9C4;
    case 111u: goto L_089CB9D0;
    case 112u: goto L_089CB9E0;
    case 113u: goto L_089CB9E4;
    case 114u: goto L_089CB9EC;
    case 115u: goto L_089CB9F8;
    case 116u: goto L_089CBA04;
    case 117u: goto L_089CBA08;
    case 118u: goto L_089CBA10;
    case 119u: goto L_089CBA1C;
    case 120u: goto L_089CBA20;
    case 121u: goto L_089CBA28;
    case 122u: goto L_089CBA34;
    case 123u: goto L_089CBA40;
    case 124u: goto L_089CBA44;
    case 125u: goto L_089CBA5C;
    case 126u: goto L_089CBA64;
    case 127u: goto L_089CBA70;
    case 128u: goto L_089CBA78;
    case 129u: goto L_089CBA84;
    case 130u: goto L_089CBA90;
    case 131u: goto L_089CBA9C;
    case 132u: goto L_089CBAA0;
    case 133u: goto L_089CBAA8;
    case 134u: goto L_089CBABC;
    case 135u: goto L_089CBAC0;
    case 136u: goto L_089CBAC4;
    case 137u: goto L_089CBAD0;
    case 138u: goto L_089CBAD8;
    case 139u: goto L_089CBAE4;
    case 140u: goto L_089CBAF4;
    case 141u: goto L_089CBAF8;
    case 142u: goto L_089CBB08;
    case 143u: goto L_089CBB0C;
    case 144u: goto L_089CBB2C;
    case 145u: goto L_089CBB30;
    case 146u: goto L_089CBB34;
    case 147u: goto L_089CBB68;
    case 148u: goto L_089CBB70;
    case 149u: goto L_089CBB7C;
    case 150u: goto L_089CBB90;
    case 151u: goto L_089CBB94;
    case 152u: goto L_089CBB9C;
    case 153u: goto L_089CBBA8;
    case 154u: goto L_089CBBB8;
    case 155u: goto L_089CBBC0;
    case 156u: goto L_089CBBD0;
    case 157u: goto L_089CBBE8;
    case 158u: goto L_089CBBFC;
    case 159u: goto L_089CBC14;
    case 160u: goto L_089CBC1C;
    case 161u: goto L_089CBC28;
    case 162u: goto L_089CBC30;
    case 163u: goto L_089CBC38;
    case 164u: goto L_089CBC44;
    case 165u: goto L_089CBC5C;
    case 166u: goto L_089CBC64;
    case 167u: goto L_089CBC6C;
    case 168u: goto L_089CBC7C;
    case 169u: goto L_089CBC84;
    case 170u: goto L_089CBC94;
    case 171u: goto L_089CBC9C;
    case 172u: goto L_089CBCAC;
    case 173u: goto L_089CBCB0;
    case 174u: goto L_089CBCB8;
    case 175u: goto L_089CBCC4;
    case 176u: goto L_089CBCDC;
    case 177u: goto L_089CBCE4;
    case 178u: goto L_089CBCEC;
    case 179u: goto L_089CBCFC;
    case 180u: goto L_089CBD28;
    case 181u: goto L_089CBD30;
    case 182u: goto L_089CBD3C;
    case 183u: goto L_089CBD44;
    case 184u: goto L_089CBD5C;
    case 185u: goto L_089CBD64;
    case 186u: goto L_089CBD6C;
    case 187u: goto L_089CBD9C;
    case 188u: goto L_089CBDAC;
    case 189u: goto L_089CBDB8;
    case 190u: goto L_089CBDC4;
    case 191u: goto L_089CBDD0;
    case 192u: goto L_089CBDF0;
    case 193u: goto L_089CBE2C;
    case 194u: goto L_089CBE3C;
    case 195u: goto L_089CBE48;
    case 196u: goto L_089CBE54;
    case 197u: goto L_089CBE68;
    case 198u: goto L_089CBE80;
    case 199u: goto L_089CBEA0;
    case 200u: goto L_089CBEA8;
    case 201u: goto L_089CBECC;
    case 202u: goto L_089CBEE8;
    case 203u: goto L_089CBEF0;
    case 204u: goto L_089CBF1C;
    case 205u: goto L_089CBF3C;
    case 206u: goto L_089CBF68;
    case 207u: goto L_089CBF70;
    case 208u: goto L_089CBFA0;
    case 209u: goto L_089CBFB0;
    case 210u: goto L_089CBFBC;
    case 211u: goto L_089CBFC8;
    case 212u: goto L_089CBFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089CB004:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[22]);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[16] = (aot_gpr[30] + static_cast<std::uint32_t>(12));
    aot_gpr[18] = (aot_gpr[29] + 0u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(116), aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    aot_gpr[17] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(120), aot_gpr[7]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(108), 0u);
    aot_gpr[31] = (0x089CB090u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(104), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CB090u) goto L_089CB090;
    return;
L_089CB090:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CB09Cu);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089CB09Cu) goto L_089CB09C;
    return;
L_089CB09C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CB0A8u);
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089CB0A8u) goto L_089CB0A8;
    return;
L_089CB0A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089CB0B8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CB0B8u) goto L_089CB0B8;
    return;
L_089CB0B8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CB0C4u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CB0C4u) goto L_089CB0C4;
    return;
L_089CB0C4:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[22];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089CB0D4;
      }
      goto L_089CB0CC;
    }
L_089CB0CC:
    if (aot_gpr[3] != 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089CB144;
    }
    goto L_089CB0D4;
L_089CB0D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(108)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089CB178;
      }
      goto L_089CB0E4;
    }
L_089CB0E4:
    aot_gpr[11] = (aot_gpr[21] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(256));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[19] + static_cast<std::uint32_t>(32));
    aot_gpr[8] = (aot_gpr[19] + static_cast<std::uint32_t>(24));
    aot_gpr[9] = (aot_gpr[19] + static_cast<std::uint32_t>(78));
    aot_gpr[31] = (0x089CB108u);
    aot_gpr[10] = (aot_gpr[30] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 244u, 0x089CAF54u>(ctx, &aot_mem) && ctx.pc == 0x089CB108u) goto L_089CB108;
    return;
L_089CB108:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB140;
      }
      goto L_089CB110;
    }
L_089CB110:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(108)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089CB1B0;
      }
      goto L_089CB120;
    }
L_089CB120:
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CB138u);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB138u) goto L_089CB138;
    return;
L_089CB138:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB240;
      }
      goto L_089CB140;
    }
L_089CB140:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089CB144;
L_089CB144:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB178:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(104)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(104), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    goto L_089CB0E4;
L_089CB1B0:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(108)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(104)));
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(104), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(108), aot_gpr[5]);
      if (branch_taken) {
          goto L_089CB120;
      }
      goto L_089CB1EC;
    }
L_089CB1EC:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(108)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(104)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(108)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(104), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CB238u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB238u) goto L_089CB238;
    return;
L_089CB238:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB140;
      }
      goto L_089CB240;
    }
L_089CB240:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2792)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(84)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (aot_gpr[30] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CB268u);
    aot_gpr[9] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB268u) goto L_089CB268;
    return;
L_089CB268:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089CB140;
      }
      goto L_089CB274;
    }
L_089CB274:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(84)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(120)));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CB294u);
    aot_gpr[9] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB294u) goto L_089CB294;
    return;
L_089CB294:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB2D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[23]);
    aot_gpr[23] = (2217u << 16u);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(2792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB338;
    }
L_089CB338:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB340;
    }
L_089CB340:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[2] = (aot_gpr[9] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_089CB408;
      }
      goto L_089CB348;
    }
L_089CB348:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (0u + 0u);
        goto L_089CB40C;
    }
    goto L_089CB350;
L_089CB350:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CB408;
      }
      goto L_089CB360;
    }
L_089CB360:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[9]);
      if (branch_taken) {
          goto L_089CB408;
      }
      goto L_089CB368;
    }
L_089CB368:
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[29] + 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[31] = (0x089CB394u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 244u, 0x089CAF54u>(ctx, &aot_mem) && ctx.pc == 0x089CB394u) goto L_089CB394;
    return;
L_089CB394:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB39C;
    }
L_089CB39C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[31] = (0x089CB3BCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 5u, 0x089CA090u>(ctx, &aot_mem) && ctx.pc == 0x089CB3BCu) goto L_089CB3BC;
    return;
L_089CB3BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB3C4;
    }
L_089CB3C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
        goto L_089CB440;
    }
    goto L_089CB3D8;
L_089CB3D8:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_089CB3F8;
L_089CB3F8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_089CB408;
      }
      goto L_089CB400;
    }
L_089CB400:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089CB540;
      }
      goto L_089CB408;
    }
L_089CB408:
    aot_gpr[4] = (0u + 0u);
    goto L_089CB40C;
L_089CB40C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB440:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (0u + 0u);
        goto L_089CB40C;
    }
    goto L_089CB448;
L_089CB448:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[31] = (0x089CB468u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089CB468u) goto L_089CB468;
    return;
L_089CB468:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CB480u);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 42u, 0x089C32C4u>(ctx, &aot_mem) && ctx.pc == 0x089CB480u) goto L_089CB480;
    return;
L_089CB480:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB488;
    }
L_089CB488:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[5] = (aot_gpr[10] & 65535u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089CB678;
      }
      goto L_089CB49C;
    }
L_089CB49C:
    if (aot_gpr[19] == 0u) {
    aot_gpr[17] = (0u + 0u);
        goto L_089CB510;
    }
    goto L_089CB4A4;
L_089CB4A4:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CB5F0;
      }
      goto L_089CB4B0;
    }
L_089CB4B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[2] & 65535u);
    aot_gpr[3] = (aot_gpr[6] < aot_gpr[3] ? 1u : 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[6]));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (0u | 54509u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB4C8;
    }
L_089CB4C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CB4D4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 147u, 0x089C5C1Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB4D4u) goto L_089CB4D4;
    return;
L_089CB4D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB4DC;
    }
L_089CB4DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[10] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089CB768;
      }
      goto L_089CB510;
    }
L_089CB510:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[10] & 65535u);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[5] << 3u);
      if (branch_taken) {
          goto L_089CB3F8;
      }
      goto L_089CB524;
    }
L_089CB524:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[2]);
    goto L_089CB3F8;
L_089CB540:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x089CB54Cu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 29u, 0x089C31D4u>(ctx, &aot_mem) && ctx.pc == 0x089CB54Cu) goto L_089CB54C;
    return;
L_089CB54C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB554;
    }
L_089CB554:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[3] << 5u);
      if (branch_taken) {
          goto L_089CB5F8;
      }
      goto L_089CB564;
    }
L_089CB564:
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089CB64C;
      }
      goto L_089CB578;
    }
L_089CB578:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB584;
    }
L_089CB584:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CB5A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB5A0u) goto L_089CB5A0;
    return;
L_089CB5A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB5A8;
    }
L_089CB5A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089CB5DC;
      }
      goto L_089CB5B8;
    }
L_089CB5B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(172)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CB5D0u);
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB5D0u) goto L_089CB5D0;
    return;
L_089CB5D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB5D8;
    }
L_089CB5D8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089CB5DC;
L_089CB5DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089CB408;
      }
      goto L_089CB5E8;
    }
L_089CB5E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[30]);
    goto L_089CB40C;
L_089CB5F0:
    aot_gpr[17] = (0u + 0u);
    goto L_089CB510;
L_089CB5F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[20]);
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    { const bool branch_taken = aot_gpr[18] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
      if (branch_taken) {
          goto L_089CB408;
      }
      goto L_089CB60C;
    }
L_089CB60C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(364)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_089CB628;
    }
    goto L_089CB618;
L_089CB618:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (0u + 0u);
        goto L_089CB40C;
    }
    goto L_089CB624;
L_089CB624:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_089CB628;
L_089CB628:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x089CB63Cu);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0453_entry, 453u, 177u, 0x089C9B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB63Cu) goto L_089CB63C;
    return;
L_089CB63C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB644;
    }
L_089CB644:
    aot_gpr[4] = (0u + 0u);
    goto L_089CB40C;
L_089CB64C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x089CB668u);
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    goto L_089CB004;
L_089CB668:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB670;
    }
L_089CB670:
    aot_gpr[4] = (0u + 0u);
    goto L_089CB40C;
L_089CB678:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089CB510;
      }
      goto L_089CB684;
    }
L_089CB684:
    aot_gpr[31] = (0x089CB68Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 170u, 0x089C5E10u>(ctx, &aot_mem) && ctx.pc == 0x089CB68Cu) goto L_089CB68C;
    return;
L_089CB68C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089CB6C8;
      }
      goto L_089CB69C;
    }
L_089CB69C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x089CB6B4u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0453_entry, 453u, 186u, 0x089C9CC0u>(ctx, &aot_mem) && ctx.pc == 0x089CB6B4u) goto L_089CB6B4;
    return;
L_089CB6B4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (0u | 54504u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB6C8;
    }
L_089CB6C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089CB6E0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 37u, 0x089C6184u>(ctx, &aot_mem) && ctx.pc == 0x089CB6E0u) goto L_089CB6E0;
    return;
L_089CB6E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB6E8;
    }
L_089CB6E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089CB714;
      }
      goto L_089CB6F4;
    }
L_089CB6F4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089CB708u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0453_entry, 453u, 186u, 0x089C9CC0u>(ctx, &aot_mem) && ctx.pc == 0x089CB708u) goto L_089CB708;
    return;
L_089CB708:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 54513u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB714;
    }
L_089CB714:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[31] = (0x089CB744u);
    aot_gpr[17] = (aot_gpr[8] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 139u, 0x089CA8C4u>(ctx, &aot_mem) && ctx.pc == 0x089CB744u) goto L_089CB744;
    return;
L_089CB744:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB40C;
      }
      goto L_089CB74C;
    }
L_089CB74C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(460), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089CB510;
L_089CB768:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_089CB510;
L_089CB770:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[30]);
    aot_gpr[30] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2792)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(176)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CB7D4u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB7D4u) goto L_089CB7D4;
    return;
L_089CB7D4:
    aot_gpr[20] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[10] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[19] + static_cast<std::uint32_t>(32));
    aot_gpr[8] = (aot_gpr[19] + static_cast<std::uint32_t>(24));
    aot_gpr[9] = (aot_gpr[19] + static_cast<std::uint32_t>(78));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089CB830;
      }
      goto L_089CB7FC;
    }
L_089CB7FC:
    aot_gpr[2] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB830:
    aot_gpr[31] = (0x089CB838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 244u, 0x089CAF54u>(ctx, &aot_mem) && ctx.pc == 0x089CB838u) goto L_089CB838;
    return;
L_089CB838:
    aot_gpr[6] = (aot_gpr[22] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089CB8BC;
      }
      goto L_089CB848;
    }
L_089CB848:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(460)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CB888u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB888u) goto L_089CB888;
    return;
L_089CB888:
    aot_gpr[2] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB8BC:
    aot_gpr[20] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB8F4:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2792)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
      if (branch_taken) {
          goto L_089CBB30;
      }
      goto L_089CB938;
    }
L_089CB938:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CBB30;
      }
      goto L_089CB940;
    }
L_089CB940:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), aot_gpr[29]);
      if (branch_taken) {
          goto L_089CBB2C;
      }
      goto L_089CB950;
    }
L_089CB950:
    aot_gpr[23] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), 0u);
    goto L_089CB98C;
L_089CB95C:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CB9B4;
      }
      goto L_089CB964;
    }
L_089CB964:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089CB9B8;
      }
      goto L_089CB96C;
    }
L_089CB96C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[4] & 65535u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089CBB2C;
      }
      goto L_089CB98C;
    }
L_089CB98C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[3] + aot_gpr[23]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089CB9B4;
      }
      goto L_089CB9A8;
    }
L_089CB9A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089CB95C;
      }
      goto L_089CB9B4;
    }
L_089CB9B4:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    goto L_089CB9B8;
L_089CB9B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(412)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
        goto L_089CB9E4;
    }
    goto L_089CB9C4;
L_089CB9C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(388)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
        goto L_089CB9E4;
    }
    goto L_089CB9D0;
L_089CB9D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(420)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(364)));
        goto L_089CBB68;
    }
    goto L_089CB9E0;
L_089CB9E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    goto L_089CB9E4;
L_089CB9E4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
        goto L_089CBA08;
    }
    goto L_089CB9EC;
L_089CB9EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
        goto L_089CBA08;
    }
    goto L_089CB9F8;
L_089CB9F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (aot_gpr[19] + 0u);
        goto L_089CBC1C;
    }
    goto L_089CBA04;
L_089CBA04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    goto L_089CBA08;
L_089CBA08:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_089CBA20;
    }
    goto L_089CBA10;
L_089CBA10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089CBBC0;
      }
      goto L_089CBA1C;
    }
L_089CBA1C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(460)));
    goto L_089CBA20;
L_089CBA20:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089CBB0C;
      }
      goto L_089CBA28;
    }
L_089CBA28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089CBA44;
      }
      goto L_089CBA34;
    }
L_089CBA34:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089CBB0C;
      }
      goto L_089CBA40;
    }
L_089CBA40:
    aot_gpr[2] = (2217u << 16u);
    goto L_089CBA44;
L_089CBA44:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CBA5Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBA5Cu) goto L_089CBA5C;
    return;
L_089CBA5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CBB30;
      }
      goto L_089CBA64;
    }
L_089CBA64:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089CBA70u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 16u, 0x089CA118u>(ctx, &aot_mem) && ctx.pc == 0x089CBA70u) goto L_089CBA70;
    return;
L_089CBA70:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CBB30;
      }
      goto L_089CBA78;
    }
L_089CBA78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089CBB0C;
      }
      goto L_089CBA84;
    }
L_089CBA84:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(384)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(364)));
        goto L_089CBAA0;
    }
    goto L_089CBA90;
L_089CBA90:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089CBB0C;
      }
      goto L_089CBA9C;
    }
L_089CBA9C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(364)));
    goto L_089CBAA0;
L_089CBAA0:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089CBB0C;
      }
      goto L_089CBAA8;
    }
L_089CBAA8:
    aot_gpr[22] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[18] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089CBC38;
      }
      goto L_089CBABC;
    }
L_089CBABC:
    aot_gpr[21] = (0u + 0u);
    goto L_089CBAC0;
L_089CBAC0:
    aot_gpr[20] = (0u + 0u);
    goto L_089CBAC4;
L_089CBAC4:
    aot_gpr[17] = (aot_gpr[22] + aot_gpr[20]);
    aot_gpr[31] = (0x089CBAD0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 104u, 0x0898F644u>(ctx, &aot_mem) && ctx.pc == 0x089CBAD0u) goto L_089CBAD0;
    return;
L_089CBAD0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(364)));
        goto L_089CBAF8;
    }
    goto L_089CBAD8;
L_089CBAD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(364)));
        goto L_089CBAF8;
    }
    goto L_089CBAE4;
L_089CBAE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089CBC84;
      }
      goto L_089CBAF4;
    }
L_089CBAF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(364)));
    goto L_089CBAF8;
L_089CBAF8:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089CBAC4;
      }
      goto L_089CBB08;
    }
L_089CBB08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    goto L_089CBB0C;
L_089CBB0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[4] & 65535u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089CB98C;
      }
      goto L_089CBB2C;
    }
L_089CBB2C:
    aot_gpr[3] = (0u + 0u);
    goto L_089CBB30;
L_089CBB30:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089CBB34;
L_089CBB34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CBB68:
    if (aot_gpr[6] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
        goto L_089CB9E4;
    }
    goto L_089CBB70;
L_089CBB70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
        goto L_089CB9E4;
    }
    goto L_089CBB7C;
L_089CBB7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089CB9E0;
      }
      goto L_089CBB90;
    }
L_089CBB90:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CBB94;
L_089CBB94:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[5] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089CBD30;
      }
      goto L_089CBB9C;
    }
L_089CBB9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089CB9E0;
      }
      goto L_089CBBA8;
    }
L_089CBBA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_089CBB94;
    }
    goto L_089CBBB8;
L_089CBBB8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    goto L_089CB9E4;
L_089CBBC0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(244)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CBBD0u);
    aot_gpr[4] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBBD0u) goto L_089CBBD0;
    return;
L_089CBBD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(384));
    aot_gpr[5] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[31] = (0x089CBBE8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089CBBE8u) goto L_089CBBE8;
    return;
L_089CBBE8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_089CBA20;
    }
    goto L_089CBBFC;
L_089CBBFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[3] & 65535u);
    aot_gpr[31] = (0x089CBC14u);
    aot_gpr[7] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 9u, 0x089C3068u>(ctx, &aot_mem) && ctx.pc == 0x089CBC14u) goto L_089CBC14;
    return;
L_089CBC14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089CB96C;
L_089CBC1C:
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089CBC28u);
    aot_gpr[7] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 107u, 0x089CA6C4u>(ctx, &aot_mem) && ctx.pc == 0x089CBC28u) goto L_089CBC28;
    return;
L_089CBC28:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
        goto L_089CBA08;
    }
    goto L_089CBC30;
L_089CBC30:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089CBB30;
L_089CBC38:
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(72));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[5] = (0u + 0u);
    goto L_089CBC44;
L_089CBC44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089CBC64;
      }
      goto L_089CBC5C;
    }
L_089CBC5C:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[21] = (0u + 0u);
      if (branch_taken) {
          goto L_089CBAC0;
      }
      goto L_089CBC64;
    }
L_089CBC64:
    if (aot_gpr[8] == aot_gpr[5]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_089CBCFC;
    }
    goto L_089CBC6C;
L_089CBC6C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089CBC44;
      }
      goto L_089CBC7C;
    }
L_089CBC7C:
    aot_gpr[21] = (0u + 0u);
    goto L_089CBAC0;
L_089CBC84:
    aot_gpr[4] = (aot_gpr[3] + 0u);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089CBC94u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089CBC94u) goto L_089CBC94;
    return;
L_089CBC94:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_089CBCB0;
    }
    goto L_089CBC9C;
L_089CBC9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(500) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(364)));
        goto L_089CBAF8;
    }
    goto L_089CBCAC;
L_089CBCAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_089CBCB0;
L_089CBCB0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBCE4;
      }
      goto L_089CBCB8;
    }
L_089CBCB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(416)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
        goto L_089CBCC4;
    }
    goto L_089CBCC4;
L_089CBCC4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CBCDCu);
    aot_gpr[9] = (aot_gpr[17] + 0u);
    goto L_089CB770;
L_089CBCDC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CBB30;
      }
      goto L_089CBCE4;
    }
L_089CBCE4:
    aot_gpr[31] = (0x089CBCECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089CBCECu) goto L_089CBCEC;
    return;
L_089CBCEC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    goto L_089CBAF4;
L_089CBCFC:
    aot_gpr[2] = (51171u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 61945u);
    aot_gpr[5] = (aot_gpr[16] - aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 3u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[31] = (0x089CBD28u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 9u, 0x089C3068u>(ctx, &aot_mem) && ctx.pc == 0x089CBD28u) goto L_089CBD28;
    return;
L_089CBD28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089CB96C;
L_089CBD30:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089CBD3Cu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 100u, 0x089CA62Cu>(ctx, &aot_mem) && ctx.pc == 0x089CBD3Cu) goto L_089CBD3C;
    return;
L_089CBD3C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CBB30;
      }
      goto L_089CBD44;
    }
L_089CBD44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[31] = (0x089CBD5Cu);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0453_entry, 453u, 177u, 0x089C9B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089CBD5Cu) goto L_089CBD5C;
    return;
L_089CBD5C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CB9E0;
      }
      goto L_089CBD64;
    }
L_089CBD64:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089CBB34;
L_089CBD6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089CBD9Cu);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CBD9Cu) goto L_089CBD9C;
    return;
L_089CBD9C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CBDACu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CBDACu) goto L_089CBDAC;
    return;
L_089CBDAC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CBDB8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CBDB8u) goto L_089CBDB8;
    return;
L_089CBDB8:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CBDC4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CBDC4u) goto L_089CBDC4;
    return;
L_089CBDC4:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CBDD0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CBDD0u) goto L_089CBDD0;
    return;
L_089CBDD0:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CBDF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[31] = (0x089CBE2Cu);
    aot_gpr[19] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CBE2Cu) goto L_089CBE2C;
    return;
L_089CBE2C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089CBE3Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CBE3Cu) goto L_089CBE3C;
    return;
L_089CBE3C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089CBE48u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CBE48u) goto L_089CBE48;
    return;
L_089CBE48:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089CBE54u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CBE54u) goto L_089CBE54;
    return;
L_089CBE54:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CBF1C;
      }
      goto L_089CBE68;
    }
L_089CBE68:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CBEA0;
      }
      goto L_089CBE80;
    }
L_089CBE80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
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
L_089CBEA0:
    aot_gpr[31] = (0x089CBEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CBEA8u) goto L_089CBEA8;
    return;
L_089CBEA8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = ((aot_gpr[3] >> 6u) & 0x00000003u);
    aot_gpr[3] = (aot_gpr[3] & 63u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089CBECCu);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CBECCu) goto L_089CBECC;
    return;
L_089CBECC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] & 240u);
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[3] = (aot_gpr[3] & 15u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089CBEE8;
L_089CBEE8:
    aot_gpr[31] = (0x089CBEF0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CBEF0u) goto L_089CBEF0;
    return;
L_089CBEF0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[2] == 0u) aot_gpr[3] = (0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CBF1C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(11)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(6)));
    aot_gpr[2] = (aot_gpr[2] & 3u);
    aot_gpr[2] = (aot_gpr[2] << 6u);
    aot_gpr[3] = (aot_gpr[3] & 63u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[31] = (0x089CBF3Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CBF3Cu) goto L_089CBF3C;
    return;
L_089CBF3C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(10)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[2] & 61440u);
    aot_gpr[3] = (aot_gpr[3] & 15u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 8u));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089CBF68u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CBF68u) goto L_089CBF68;
    return;
L_089CBF68:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089CBEE8;
L_089CBF70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089CBFA0u);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CBFA0u) goto L_089CBFA0;
    return;
L_089CBFA0:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CBFB0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CBFB0u) goto L_089CBFB0;
    return;
L_089CBFB0:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CBFBCu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CBFBCu) goto L_089CBFBC;
    return;
L_089CBFBC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CBFC8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CBFC8u) goto L_089CBFC8;
    return;
L_089CBFC8:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CBFE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    ctx.pc = 0x089CC000u; return;
}

void recomp_unit_0455(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0455_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_455(Runtime &runtime) {
    runtime.register_generated_unit(455u, 0x089CB000u, 4096u, &recomp_unit_0455, &recomp_unit_0455_entry);
    runtime.register_function(0x089CB004u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB090u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB09Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB0A8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB0B8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB0C4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB0CCu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB0D4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB0E4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB108u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB110u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB120u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB138u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB140u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB144u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB178u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB1B0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB1ECu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB238u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB240u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB268u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB274u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB294u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB2D0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB338u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB340u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB348u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB350u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB360u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB368u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB394u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB39Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB3BCu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB3C4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB3D8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB3F8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB400u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB408u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB40Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB440u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB448u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB468u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB480u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB488u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB49Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB4A4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB4B0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB4C8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB4D4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB4DCu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB510u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB524u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB540u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB54Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB554u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB564u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB578u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB584u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB5A0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB5A8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB5B8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB5D0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB5D8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB5DCu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB5E8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB5F0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB5F8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB60Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB618u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB624u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB628u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB63Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB644u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB64Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB668u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB670u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB678u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB684u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB68Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB69Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB6B4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB6C8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB6E0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB6E8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB6F4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB708u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB714u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB744u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB74Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB768u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB770u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB7D4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB7FCu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB830u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB838u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB848u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB888u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB8BCu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB8F4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB938u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB940u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB950u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB95Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB964u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB96Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB98Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB9A8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB9B4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB9B8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB9C4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB9D0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB9E0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB9E4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB9ECu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CB9F8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA04u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA08u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA10u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA1Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA20u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA28u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA34u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA40u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA44u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA5Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA64u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA70u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA78u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA84u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA90u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBA9Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBAA0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBAA8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBABCu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBAC0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBAC4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBAD0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBAD8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBAE4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBAF4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBAF8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBB08u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBB0Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBB2Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBB30u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBB34u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBB68u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBB70u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBB7Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBB90u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBB94u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBB9Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBBA8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBBB8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBBC0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBBD0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBBE8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBBFCu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBC14u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBC1Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBC28u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBC30u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBC38u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBC44u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBC5Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBC64u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBC6Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBC7Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBC84u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBC94u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBC9Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBCACu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBCB0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBCB8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBCC4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBCDCu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBCE4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBCECu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBCFCu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBD28u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBD30u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBD3Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBD44u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBD5Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBD64u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBD6Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBD9Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBDACu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBDB8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBDC4u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBDD0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBDF0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBE2Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBE3Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBE48u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBE54u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBE68u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBE80u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBEA0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBEA8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBECCu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBEE8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBEF0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBF1Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBF3Cu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBF68u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBF70u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBFA0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBFB0u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBFBCu, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBFC8u, &recomp_unit_0455, "recomp_unit_0455");
    runtime.register_function(0x089CBFE8u, &recomp_unit_0455, "recomp_unit_0455");
}
} // namespace psprecomp
