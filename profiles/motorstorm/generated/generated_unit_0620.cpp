#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0620[1024] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 9,
    0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 14, 0, 0, 15, 16, 0, 0, 17, 18, 0, 0, 0, 0, 0, 19, 20, 0, 21, 0, 22,
    23, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 29, 30, 0, 31, 0, 0, 32, 33, 0, 34, 35, 0, 0,
    0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 43, 0, 44, 0, 0,
    45, 0, 0, 46, 0, 47, 0, 48, 49, 50, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 65, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 73, 0, 74, 0, 0, 75, 0, 0, 76,
    0, 77, 0, 0, 78, 79, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 93,
    0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 106, 107, 0, 0, 0, 108, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0,
    0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 117, 118, 0, 119, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0,
    123, 0, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133,
    0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 138, 0, 139, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 144, 145, 0, 0, 0, 0,
    0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 0, 153, 0, 154, 155, 0, 0, 0, 0, 0, 0, 0, 156, 157, 0,
    158, 0, 159, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 170, 0, 0, 0, 0, 0, 171,
    0, 0, 172, 0, 0, 173, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0,
    181, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0,
    0, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0, 201, 0, 202, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0,
    0, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 221,
    0, 222, 223, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 229, 230, 0, 231, 0, 232, 0, 0, 233, 0, 234, 0, 235, 0, 236, 237, 0,
    238, 0, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 245, 0, 246, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 249, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0,
    257, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 265, 266, 267, 0,
    268, 269, 0, 270, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 275, 276, 0, 0, 0, 277, 0, 278, 0, 279, 0,
    280, 0, 281, 0, 0, 282, 0, 283, 0, 0, 284, 285, 286, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 293, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 298, 0,
    299, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 303, 0, 304, 0, 305, 0, 0, 306, 307, 308, 309, 0, 0, 310, 0, 311, 0, 0, 312, 0, 313, 0, 314, 0, 315, 0, 0, 316,
};
void recomp_unit_0620_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A70000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0620[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A70000;
    case 2u: goto L_08A7001C;
    case 3u: goto L_08A70038;
    case 4u: goto L_08A70040;
    case 5u: goto L_08A70044;
    case 6u: goto L_08A70058;
    case 7u: goto L_08A70060;
    case 8u: goto L_08A7006C;
    case 9u: goto L_08A7007C;
    case 10u: goto L_08A70084;
    case 11u: goto L_08A70094;
    case 12u: goto L_08A7009C;
    case 13u: goto L_08A700A8;
    case 14u: goto L_08A700B0;
    case 15u: goto L_08A700BC;
    case 16u: goto L_08A700C0;
    case 17u: goto L_08A700CC;
    case 18u: goto L_08A700D0;
    case 19u: goto L_08A700E8;
    case 20u: goto L_08A700EC;
    case 21u: goto L_08A700F4;
    case 22u: goto L_08A700FC;
    case 23u: goto L_08A70100;
    case 24u: goto L_08A70108;
    case 25u: goto L_08A70114;
    case 26u: goto L_08A70120;
    case 27u: goto L_08A70138;
    case 28u: goto L_08A70140;
    case 29u: goto L_08A7014C;
    case 30u: goto L_08A70150;
    case 31u: goto L_08A70158;
    case 32u: goto L_08A70164;
    case 33u: goto L_08A70168;
    case 34u: goto L_08A70170;
    case 35u: goto L_08A70174;
    case 36u: goto L_08A70184;
    case 37u: goto L_08A70194;
    case 38u: goto L_08A701A0;
    case 39u: goto L_08A701AC;
    case 40u: goto L_08A701CC;
    case 41u: goto L_08A701D8;
    case 42u: goto L_08A701E4;
    case 43u: goto L_08A701EC;
    case 44u: goto L_08A701F4;
    case 45u: goto L_08A70200;
    case 46u: goto L_08A7020C;
    case 47u: goto L_08A70214;
    case 48u: goto L_08A7021C;
    case 49u: goto L_08A70220;
    case 50u: goto L_08A70224;
    case 51u: goto L_08A70228;
    case 52u: goto L_08A7023C;
    case 53u: goto L_08A7024C;
    case 54u: goto L_08A70260;
    case 55u: goto L_08A70268;
    case 56u: goto L_08A702A0;
    case 57u: goto L_08A702B0;
    case 58u: goto L_08A702D8;
    case 59u: goto L_08A702E4;
    case 60u: goto L_08A702FC;
    case 61u: goto L_08A70324;
    case 62u: goto L_08A70330;
    case 63u: goto L_08A70348;
    case 64u: goto L_08A70370;
    case 65u: goto L_08A70374;
    case 66u: goto L_08A70390;
    case 67u: goto L_08A7039C;
    case 68u: goto L_08A703A4;
    case 69u: goto L_08A703B0;
    case 70u: goto L_08A703BC;
    case 71u: goto L_08A703C8;
    case 72u: goto L_08A703D4;
    case 73u: goto L_08A703DC;
    case 74u: goto L_08A703E4;
    case 75u: goto L_08A703F0;
    case 76u: goto L_08A703FC;
    case 77u: goto L_08A70404;
    case 78u: goto L_08A70410;
    case 79u: goto L_08A70414;
    case 80u: goto L_08A70418;
    case 81u: goto L_08A7042C;
    case 82u: goto L_08A7043C;
    case 83u: goto L_08A70444;
    case 84u: goto L_08A70478;
    case 85u: goto L_08A70490;
    case 86u: goto L_08A7049C;
    case 87u: goto L_08A704A4;
    case 88u: goto L_08A704AC;
    case 89u: goto L_08A704B8;
    case 90u: goto L_08A704CC;
    case 91u: goto L_08A704DC;
    case 92u: goto L_08A704F0;
    case 93u: goto L_08A704FC;
    case 94u: goto L_08A70504;
    case 95u: goto L_08A7050C;
    case 96u: goto L_08A70518;
    case 97u: goto L_08A7052C;
    case 98u: goto L_08A70530;
    case 99u: goto L_08A70548;
    case 100u: goto L_08A70550;
    case 101u: goto L_08A70558;
    case 102u: goto L_08A70584;
    case 103u: goto L_08A70594;
    case 104u: goto L_08A7059C;
    case 105u: goto L_08A705A4;
    case 106u: goto L_08A705B0;
    case 107u: goto L_08A705B4;
    case 108u: goto L_08A705C4;
    case 109u: goto L_08A705C8;
    case 110u: goto L_08A705E4;
    case 111u: goto L_08A705F4;
    case 112u: goto L_08A70608;
    case 113u: goto L_08A70618;
    case 114u: goto L_08A70624;
    case 115u: goto L_08A70634;
    case 116u: goto L_08A7063C;
    case 117u: goto L_08A70644;
    case 118u: goto L_08A70648;
    case 119u: goto L_08A70650;
    case 120u: goto L_08A70654;
    case 121u: goto L_08A70664;
    case 122u: goto L_08A70670;
    case 123u: goto L_08A70680;
    case 124u: goto L_08A7068C;
    case 125u: goto L_08A70698;
    case 126u: goto L_08A706A0;
    case 127u: goto L_08A706A8;
    case 128u: goto L_08A706BC;
    case 129u: goto L_08A706CC;
    case 130u: goto L_08A706D0;
    case 131u: goto L_08A706E0;
    case 132u: goto L_08A706EC;
    case 133u: goto L_08A706FC;
    case 134u: goto L_08A70704;
    case 135u: goto L_08A70714;
    case 136u: goto L_08A70724;
    case 137u: goto L_08A7072C;
    case 138u: goto L_08A70730;
    case 139u: goto L_08A70738;
    case 140u: goto L_08A70740;
    case 141u: goto L_08A7074C;
    case 142u: goto L_08A70758;
    case 143u: goto L_08A70764;
    case 144u: goto L_08A70768;
    case 145u: goto L_08A7076C;
    case 146u: goto L_08A70788;
    case 147u: goto L_08A70790;
    case 148u: goto L_08A70798;
    case 149u: goto L_08A707A0;
    case 150u: goto L_08A707A8;
    case 151u: goto L_08A707B0;
    case 152u: goto L_08A707BC;
    case 153u: goto L_08A707C8;
    case 154u: goto L_08A707D0;
    case 155u: goto L_08A707D4;
    case 156u: goto L_08A707F4;
    case 157u: goto L_08A707F8;
    case 158u: goto L_08A70800;
    case 159u: goto L_08A70808;
    case 160u: goto L_08A7080C;
    case 161u: goto L_08A70820;
    case 162u: goto L_08A70830;
    case 163u: goto L_08A70840;
    case 164u: goto L_08A70844;
    case 165u: goto L_08A70858;
    case 166u: goto L_08A70878;
    case 167u: goto L_08A7089C;
    case 168u: goto L_08A708AC;
    case 169u: goto L_08A708E0;
    case 170u: goto L_08A708E4;
    case 171u: goto L_08A708FC;
    case 172u: goto L_08A70908;
    case 173u: goto L_08A70914;
    case 174u: goto L_08A70918;
    case 175u: goto L_08A70920;
    case 176u: goto L_08A70948;
    case 177u: goto L_08A70950;
    case 178u: goto L_08A70960;
    case 179u: goto L_08A70968;
    case 180u: goto L_08A70978;
    case 181u: goto L_08A70980;
    case 182u: goto L_08A7098C;
    case 183u: goto L_08A7099C;
    case 184u: goto L_08A709A4;
    case 185u: goto L_08A709B0;
    case 186u: goto L_08A709B8;
    case 187u: goto L_08A709C0;
    case 188u: goto L_08A709F0;
    case 189u: goto L_08A70A0C;
    case 190u: goto L_08A70A1C;
    case 191u: goto L_08A70A28;
    case 192u: goto L_08A70A2C;
    case 193u: goto L_08A70A38;
    case 194u: goto L_08A70A54;
    case 195u: goto L_08A70A58;
    case 196u: goto L_08A70A64;
    case 197u: goto L_08A70A74;
    case 198u: goto L_08A70A90;
    case 199u: goto L_08A70A98;
    case 200u: goto L_08A70AA4;
    case 201u: goto L_08A70AAC;
    case 202u: goto L_08A70AB4;
    case 203u: goto L_08A70AC0;
    case 204u: goto L_08A70AC8;
    case 205u: goto L_08A70AD0;
    case 206u: goto L_08A70AE0;
    case 207u: goto L_08A70AE8;
    case 208u: goto L_08A70AF0;
    case 209u: goto L_08A70AF8;
    case 210u: goto L_08A70B08;
    case 211u: goto L_08A70B10;
    case 212u: goto L_08A70B18;
    case 213u: goto L_08A70B20;
    case 214u: goto L_08A70B30;
    case 215u: goto L_08A70B38;
    case 216u: goto L_08A70B40;
    case 217u: goto L_08A70B48;
    case 218u: goto L_08A70B58;
    case 219u: goto L_08A70B64;
    case 220u: goto L_08A70B6C;
    case 221u: goto L_08A70B7C;
    case 222u: goto L_08A70B84;
    case 223u: goto L_08A70B88;
    case 224u: goto L_08A70B90;
    case 225u: goto L_08A70B98;
    case 226u: goto L_08A70BA4;
    case 227u: goto L_08A70BAC;
    case 228u: goto L_08A70BB4;
    case 229u: goto L_08A70BBC;
    case 230u: goto L_08A70BC0;
    case 231u: goto L_08A70BC8;
    case 232u: goto L_08A70BD0;
    case 233u: goto L_08A70BDC;
    case 234u: goto L_08A70BE4;
    case 235u: goto L_08A70BEC;
    case 236u: goto L_08A70BF4;
    case 237u: goto L_08A70BF8;
    case 238u: goto L_08A70C00;
    case 239u: goto L_08A70C0C;
    case 240u: goto L_08A70C14;
    case 241u: goto L_08A70C1C;
    case 242u: goto L_08A70C24;
    case 243u: goto L_08A70C2C;
    case 244u: goto L_08A70C44;
    case 245u: goto L_08A70C4C;
    case 246u: goto L_08A70C54;
    case 247u: goto L_08A70C58;
    case 248u: goto L_08A70C70;
    case 249u: goto L_08A70C84;
    case 250u: goto L_08A70C88;
    case 251u: goto L_08A70C98;
    case 252u: goto L_08A70CC8;
    case 253u: goto L_08A70CD4;
    case 254u: goto L_08A70CD8;
    case 255u: goto L_08A70CE4;
    case 256u: goto L_08A70CF4;
    case 257u: goto L_08A70D00;
    case 258u: goto L_08A70D0C;
    case 259u: goto L_08A70D18;
    case 260u: goto L_08A70D20;
    case 261u: goto L_08A70D30;
    case 262u: goto L_08A70D4C;
    case 263u: goto L_08A70D54;
    case 264u: goto L_08A70D68;
    case 265u: goto L_08A70D70;
    case 266u: goto L_08A70D74;
    case 267u: goto L_08A70D78;
    case 268u: goto L_08A70D80;
    case 269u: goto L_08A70D84;
    case 270u: goto L_08A70D8C;
    case 271u: goto L_08A70D90;
    case 272u: goto L_08A70DB0;
    case 273u: goto L_08A70DBC;
    case 274u: goto L_08A70DC8;
    case 275u: goto L_08A70DD4;
    case 276u: goto L_08A70DD8;
    case 277u: goto L_08A70DE8;
    case 278u: goto L_08A70DF0;
    case 279u: goto L_08A70DF8;
    case 280u: goto L_08A70E00;
    case 281u: goto L_08A70E08;
    case 282u: goto L_08A70E14;
    case 283u: goto L_08A70E1C;
    case 284u: goto L_08A70E28;
    case 285u: goto L_08A70E2C;
    case 286u: goto L_08A70E30;
    case 287u: goto L_08A70E38;
    case 288u: goto L_08A70E4C;
    case 289u: goto L_08A70E64;
    case 290u: goto L_08A70E80;
    case 291u: goto L_08A70E90;
    case 292u: goto L_08A70E98;
    case 293u: goto L_08A70EB0;
    case 294u: goto L_08A70EB4;
    case 295u: goto L_08A70EC8;
    case 296u: goto L_08A70EDC;
    case 297u: goto L_08A70EF0;
    case 298u: goto L_08A70EF8;
    case 299u: goto L_08A70F00;
    case 300u: goto L_08A70F04;
    case 301u: goto L_08A70F68;
    case 302u: goto L_08A70F80;
    case 303u: goto L_08A70F90;
    case 304u: goto L_08A70F98;
    case 305u: goto L_08A70FA0;
    case 306u: goto L_08A70FAC;
    case 307u: goto L_08A70FB0;
    case 308u: goto L_08A70FB4;
    case 309u: goto L_08A70FB8;
    case 310u: goto L_08A70FC4;
    case 311u: goto L_08A70FCC;
    case 312u: goto L_08A70FD8;
    case 313u: goto L_08A70FE0;
    case 314u: goto L_08A70FE8;
    case 315u: goto L_08A70FF0;
    case 316u: goto L_08A70FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A70000:
    rt.unsupported(0x08A70004u, 0x0000000Du, "special? not lowered yet"); return;
    ctx.pc = 0x029BFD90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A7001C:
    { const std::uint32_t dividend = 0u; ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; }
    rt.unsupported(0x08A70024u, 0x0000000Cu, "control flow in delay slot"); return;
L_08A70038:
    rt.unsupported(0x08A70038u, 0x74747562u, "unknown not lowered yet"); return;
L_08A70040:
    // nop
    goto L_08A70044;
L_08A70044:
    rt.unsupported(0x08A70044u, 0x63697551u, "vfpu0 not lowered yet"); return;
L_08A70058:
    if (aot_gpr[2] != aot_gpr[16]) {
    { const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 38u, 0x08A83570u>(ctx, &aot_mem); return;
    }
    goto L_08A70060;
L_08A70060:
    rt.unsupported(0x08A70060u, 0x746E6F66u, "unknown not lowered yet"); return;
L_08A7006C:
    rt.unsupported(0x08A7006Cu, 0x70736964u, "unknown not lowered yet"); return;
L_08A7007C:
    rt.unsupported(0x08A7007Cu, 0x67696C61u, "vfpu1 not lowered yet"); return;
L_08A70084:
    rt.unsupported(0x08A70084u, 0x62616E65u, "vfpu0 not lowered yet"); return;
L_08A70094:
    rt.unsupported(0x08A70094u, 0x6E6F6974u, "vfpu3 not lowered yet"); return;
L_08A7009C:
    ctx.execute_vfpu_vscl_ct<115u, 101u, 108u, 1u>();
    rt.unsupported(0x08A700A0u, 0x62617463u, "vfpu0 not lowered yet"); return;
L_08A700A8:
    ctx.execute_vfpu_vminmax(115u, 117u, 98u, 1u, false);
    rt.unsupported(0x08A700ACu, 0x73417469u, "unknown not lowered yet"); return;
L_08A700B0:
    rt.unsupported(0x08A700B0u, 0x72636E45u, "unknown not lowered yet"); return;
L_08A700BC:
    rt.unsupported(0x08A700BCu, 0x75716572u, "unknown not lowered yet"); return;
L_08A700C0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<105u, 1u>(vfpu_d); }
    if (aot_gpr[3] == aot_gpr[18]) {
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[3]) * static_cast<std::uint64_t>(aot_gpr[20]); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
        ctx.pc = 0x08A8BDE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A700CC;
L_08A700CC:
    // nop
    goto L_08A700D0;
L_08A700D0:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    ctx.execute_vfpu_vcmp_ct<83u, 101u, 1u, 15u>();
    if (aot_gpr[3] != aot_gpr[20]) {
    rt.unsupported(0x08A700E4u, 0x632E6761u, "vfpu0 not lowered yet"); return;
        ctx.pc = 0x08A88E78u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A700E8;
L_08A700E8:
    rt.unsupported(0x08A700E8u, 0x00007070u, "special? not lowered yet"); return;
L_08A700EC:
    rt.unsupported(0x08A700ECu, 0x4954504Fu, "cop2/vfpu not lowered yet"); return;
L_08A700F4:
    rt.unsupported(0x08A700F4u, 0x756C6176u, "unknown not lowered yet"); return;
L_08A700FC:
    ctx.execute_vfpu_vscl_ct<115u, 101u, 108u, 1u>();
    goto L_08A70100;
L_08A70100:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<116u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    // nop
    goto L_08A70108;
L_08A70108:
    ctx.execute_vfpu_vscl_ct<83u, 101u, 108u, 1u>();
    rt.unsupported(0x08A7010Cu, 0x61547463u, "vfpu0 not lowered yet"); return;
L_08A70114:
    // nop
    if (0u == 0u) (void)(0u);
    // nop
    goto L_08A70120;
L_08A70120:
    rt.unsupported(0x08A70120u, 0x74786554u, "unknown not lowered yet"); return;
L_08A70138:
    rt.unsupported(0x08A70138u, 0x67696C61u, "vfpu1 not lowered yet"); return;
L_08A70140:
    rt.unsupported(0x08A70140u, 0x746E6F66u, "unknown not lowered yet"); return;
L_08A7014C:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 110u, 1u>();
    goto L_08A70150;
L_08A70150:
    rt.unsupported(0x08A70150u, 0x63617053u, "vfpu0 not lowered yet"); return;
L_08A70158:
    rt.unsupported(0x08A70158u, 0x7466656Cu, "unknown not lowered yet"); return;
L_08A70164:
    // nop
    goto L_08A70168;
L_08A70168:
    if (aot_gpr[3] == aot_gpr[16]) {
    rt.unsupported(0x08A7016Cu, 0x61566461u, "vfpu0 not lowered yet"); return;
        ctx.pc = 0x08A8BF3Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70170;
L_08A70170:
    aot_gpr[14] = (static_cast<std::int32_t>(aot_gpr[3]) > static_cast<std::int32_t>(aot_gpr[5]) ? aot_gpr[3] : aot_gpr[5]);
    goto L_08A70174;
L_08A70174:
    ctx.execute_vfpu_compare3(115u, 99u, 114u, 1u, 6u);
    rt.unsupported(0x08A70178u, 0x61426C6Cu, "vfpu0 not lowered yet"); return;
L_08A70184:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 110u, 1u>();
    rt.unsupported(0x08A70188u, 0x73695673u, "unknown not lowered yet"); return;
L_08A70194:
    rt.unsupported(0x08A70194u, 0x4C78616Du, "unknown not lowered yet"); return;
L_08A701A0:
    rt.unsupported(0x08A701A0u, 0x4C78616Du, "unknown not lowered yet"); return;
L_08A701AC:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A701B8u, 0x7865542Fu, "unknown not lowered yet"); return;
L_08A701CC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08A701D0u, 0x796C6E6Fu, "unknown not lowered yet"); return;
L_08A701D8:
    rt.unsupported(0x08A701D8u, 0x74696465u, "unknown not lowered yet"); return;
L_08A701E4:
    rt.unsupported(0x08A701E4u, 0x736C6166u, "unknown not lowered yet"); return;
L_08A701EC:
    ctx.execute_vfpu_vscl_ct<116u, 114u, 117u, 1u>();
    // nop
    goto L_08A701F4;
L_08A701F4:
    rt.unsupported(0x08A701F4u, 0x6E696C62u, "vfpu3 not lowered yet"); return;
L_08A70200:
    rt.unsupported(0x08A70200u, 0x61666564u, "vfpu0 not lowered yet"); return;
L_08A7020C:
    rt.unsupported(0x08A7020Cu, 0x7972746Eu, "unknown not lowered yet"); return;
L_08A70214:
    rt.unsupported(0x08A70214u, 0x61666564u, "vfpu0 not lowered yet"); return;
L_08A7021C:
    if (aot_gpr[27] == aot_gpr[20]) {
    ctx.execute_vfpu_vcmp_ct<114u, 111u, 1u, 3u>();
        ctx.pc = 0x08A8E3B4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70224;
L_08A70220:
    ctx.execute_vfpu_vcmp_ct<114u, 111u, 1u, 3u>();
    goto L_08A70224;
L_08A70224:
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A70228;
L_08A70228:
    ctx.execute_vfpu_vminmax(115u, 117u, 98u, 1u, false);
    rt.unsupported(0x08A7022Cu, 0x73417469u, "unknown not lowered yet"); return;
L_08A7023C:
    rt.unsupported(0x08A7023Cu, 0x75716572u, "unknown not lowered yet"); return;
L_08A7024C:
    rt.unsupported(0x08A7024Cu, 0x746C756Du, "unknown not lowered yet"); return;
L_08A70260:
    ctx.execute_vfpu_vscl_ct<109u, 111u, 100u, 1u>();
    // nop
    goto L_08A70268;
L_08A70268:
    rt.unsupported(0x08A70268u, 0x676E616Cu, "vfpu1 not lowered yet"); return;
L_08A702A0:
    rt.unsupported(0x08A702A0u, 0x74786554u, "unknown not lowered yet"); return;
L_08A702B0:
    rt.unsupported(0x08A702B0u, 0x74786554u, "unknown not lowered yet"); return;
L_08A702D8:
    rt.unsupported(0x08A702D8u, 0x202D2077u, "unknown not lowered yet"); return;
L_08A702E4:
    rt.unsupported(0x08A702E4u, 0x70204C4Cu, "unknown not lowered yet"); return;
L_08A702FC:
    rt.unsupported(0x08A702FCu, 0x74786554u, "unknown not lowered yet"); return;
L_08A70324:
    rt.unsupported(0x08A70324u, 0x202D2077u, "unknown not lowered yet"); return;
L_08A70330:
    rt.unsupported(0x08A70330u, 0x70204C4Cu, "unknown not lowered yet"); return;
L_08A70348:
    rt.unsupported(0x08A70348u, 0x74786554u, "unknown not lowered yet"); return;
L_08A70370:
    rt.unsupported(0x08A70370u, 0x202D2077u, "unknown not lowered yet"); return;
L_08A70374:
    rt.unsupported(0x08A70374u, 0x4F4F4D53u, "unknown not lowered yet"); return;
L_08A70390:
    rt.unsupported(0x08A70390u, 0x746E6F66u, "unknown not lowered yet"); return;
L_08A7039C:
    rt.unsupported(0x08A7039Cu, 0x756C6176u, "unknown not lowered yet"); return;
L_08A703A4:
    rt.unsupported(0x08A703A4u, 0x4C78616Du, "unknown not lowered yet"); return;
L_08A703B0:
    rt.unsupported(0x08A703B0u, 0x6E696C62u, "vfpu3 not lowered yet"); return;
L_08A703BC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08A703C0u, 0x796C6E6Fu, "unknown not lowered yet"); return;
L_08A703C8:
    rt.unsupported(0x08A703C8u, 0x74696465u, "unknown not lowered yet"); return;
L_08A703D4:
    rt.unsupported(0x08A703D4u, 0x736C6166u, "unknown not lowered yet"); return;
L_08A703DC:
    ctx.execute_vfpu_vscl_ct<116u, 114u, 117u, 1u>();
    // nop
    goto L_08A703E4;
L_08A703E4:
    ctx.execute_vfpu_vscl_ct<115u, 101u, 108u, 1u>();
    rt.unsupported(0x08A703E8u, 0x62617463u, "vfpu0 not lowered yet"); return;
L_08A703F0:
    rt.unsupported(0x08A703F0u, 0x61666564u, "vfpu0 not lowered yet"); return;
L_08A703FC:
    rt.unsupported(0x08A703FCu, 0x7972746Eu, "unknown not lowered yet"); return;
L_08A70404:
    rt.unsupported(0x08A70404u, 0x61666564u, "vfpu0 not lowered yet"); return;
L_08A70410:
    ctx.execute_vfpu_vcmp_ct<114u, 111u, 1u, 3u>();
    goto L_08A70414;
L_08A70414:
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A70418;
L_08A70418:
    ctx.execute_vfpu_vminmax(115u, 117u, 98u, 1u, false);
    rt.unsupported(0x08A7041Cu, 0x73417469u, "unknown not lowered yet"); return;
L_08A7042C:
    rt.unsupported(0x08A7042Cu, 0x75716572u, "unknown not lowered yet"); return;
L_08A7043C:
    ctx.execute_vfpu_vscl_ct<109u, 111u, 100u, 1u>();
    // nop
    goto L_08A70444;
L_08A70444:
    rt.unsupported(0x08A70444u, 0x676E616Cu, "vfpu1 not lowered yet"); return;
L_08A70478:
    rt.unsupported(0x08A70478u, 0x73736150u, "unknown not lowered yet"); return;
L_08A70490:
    rt.unsupported(0x08A70490u, 0x746E6F66u, "unknown not lowered yet"); return;
L_08A7049C:
    rt.unsupported(0x08A7049Cu, 0x756C6176u, "unknown not lowered yet"); return;
L_08A704A4:
    rt.unsupported(0x08A704A4u, 0x63656863u, "vfpu0 not lowered yet"); return;
L_08A704AC:
    ctx.execute_vfpu_vscl_ct<115u, 101u, 108u, 1u>();
    rt.unsupported(0x08A704B0u, 0x62617463u, "vfpu0 not lowered yet"); return;
L_08A704B8:
    ctx.execute_vfpu_vminmax(115u, 117u, 98u, 1u, false);
    rt.unsupported(0x08A704BCu, 0x73417469u, "unknown not lowered yet"); return;
L_08A704CC:
    rt.unsupported(0x08A704CCu, 0x75716572u, "unknown not lowered yet"); return;
L_08A704DC:
    rt.unsupported(0x08A704DCu, 0x69646152u, "unknown not lowered yet"); return;
L_08A704F0:
    rt.unsupported(0x08A704F0u, 0x746E6F66u, "unknown not lowered yet"); return;
L_08A704FC:
    rt.unsupported(0x08A704FCu, 0x756C6176u, "unknown not lowered yet"); return;
L_08A70504:
    rt.unsupported(0x08A70504u, 0x63656863u, "vfpu0 not lowered yet"); return;
L_08A7050C:
    ctx.execute_vfpu_vscl_ct<115u, 101u, 108u, 1u>();
    rt.unsupported(0x08A70510u, 0x62617463u, "vfpu0 not lowered yet"); return;
L_08A70518:
    ctx.execute_vfpu_vminmax(115u, 117u, 98u, 1u, false);
    rt.unsupported(0x08A7051Cu, 0x73417469u, "unknown not lowered yet"); return;
L_08A7052C:
    // nop
    goto L_08A70530;
L_08A70530:
    rt.unsupported(0x08A70530u, 0x63656843u, "vfpu0 not lowered yet"); return;
L_08A70548:
    rt.unsupported(0x08A70548u, 0x45534E55u, "cop1? not lowered yet"); return;
L_08A70550:
    rt.unsupported(0x08A70550u, 0x69746361u, "unknown not lowered yet"); return;
L_08A70558:
    rt.unsupported(0x08A70558u, 0x74636E65u, "unknown not lowered yet"); return;
L_08A70584:
    rt.unsupported(0x08A70584u, 0x616E7964u, "vfpu0 not lowered yet"); return;
L_08A70594:
    rt.unsupported(0x08A70594u, 0x6874656Du, "unknown not lowered yet"); return;
L_08A7059C:
    if (aot_gpr[2] != aot_gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0640_entry, 640u, 25u, 0x08A842E0u>(ctx, &aot_mem); return;
    }
    goto L_08A705A4;
L_08A705A4:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> (aot_gpr[2] & 31u)));
    rt.unsupported(0x08A705A8u, 0x49474F4Cu, "cop2/vfpu not lowered yet"); return;
L_08A705B0:
    // nop
    goto L_08A705B4;
L_08A705B4:
    ctx.execute_vfpu_vminmax(70u, 111u, 114u, 1u, false);
    rt.unsupported(0x08A705B8u, 0x00676154u, "special? not lowered yet"); return;
L_08A705C4:
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A705C8;
L_08A705C8:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A705D4u, 0x726F462Fu, "unknown not lowered yet"); return;
L_08A705E4:
    ctx.execute_vfpu_vminmax(102u, 111u, 114u, 1u, false);
    rt.unsupported(0x08A705E8u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A705F4:
    ctx.execute_vfpu_vminmax(70u, 111u, 114u, 1u, false);
    rt.unsupported(0x08A705F8u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A70608:
    ctx.execute_vfpu_vminmax(115u, 117u, 98u, 1u, false);
    rt.unsupported(0x08A7060Cu, 0x79547469u, "unknown not lowered yet"); return;
L_08A70618:
    rt.unsupported(0x08A70618u, 0x746E6F66u, "unknown not lowered yet"); return;
L_08A70624:
    rt.unsupported(0x08A70624u, 0x70736964u, "unknown not lowered yet"); return;
L_08A70634:
    rt.unsupported(0x08A70634u, 0x67696C61u, "vfpu1 not lowered yet"); return;
L_08A7063C:
    rt.unsupported(0x08A7063Cu, 0x756C6176u, "unknown not lowered yet"); return;
L_08A70644:
    ctx.execute_vfpu_vminmax(115u, 117u, 98u, 1u, false);
    goto L_08A70648;
L_08A70648:
    rt.unsupported(0x08A70648u, 0x79547469u, "unknown not lowered yet"); return;
L_08A70650:
    // nop
    goto L_08A70654;
L_08A70654:
    ctx.execute_vfpu_vminmax(83u, 117u, 98u, 1u, false);
    rt.unsupported(0x08A70658u, 0x6E497469u, "vfpu3 not lowered yet"); return;
L_08A70664:
    ctx.execute_vfpu_vminmax(83u, 117u, 98u, 1u, false);
    rt.unsupported(0x08A70668u, 0x00007469u, "special? not lowered yet"); return;
L_08A70670:
    ctx.execute_vfpu_compare3(76u, 111u, 103u, 1u, 6u);
    rt.unsupported(0x08A70674u, 0x61547475u, "vfpu0 not lowered yet"); return;
L_08A70680:
    rt.unsupported(0x08A70680u, 0x75706F50u, "unknown not lowered yet"); return;
L_08A7068C:
    rt.unsupported(0x08A7068Cu, 0x736F6C63u, "unknown not lowered yet"); return;
L_08A70698:
    (void)(0u - 0u);
    // nop
    goto L_08A706A0;
L_08A706A0:
    rt.unsupported(0x08A706A0u, 0x756C6176u, "unknown not lowered yet"); return;
L_08A706A8:
    ctx.execute_vfpu_vminmax(115u, 117u, 98u, 1u, false);
    rt.unsupported(0x08A706ACu, 0x73417469u, "unknown not lowered yet"); return;
L_08A706BC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<72u, 1u>(vfpu_d); }
    rt.unsupported(0x08A706C0u, 0x6E496E65u, "vfpu3 not lowered yet"); return;
L_08A706CC:
    // nop
    goto L_08A706D0;
L_08A706D0:
    rt.unsupported(0x08A706D0u, 0x69646552u, "unknown not lowered yet"); return;
L_08A706E0:
    rt.unsupported(0x08A706E0u, 0x746E6F66u, "unknown not lowered yet"); return;
L_08A706EC:
    rt.unsupported(0x08A706ECu, 0x70736964u, "unknown not lowered yet"); return;
L_08A706FC:
    rt.unsupported(0x08A706FCu, 0x67696C61u, "vfpu1 not lowered yet"); return;
L_08A70704:
    rt.unsupported(0x08A70704u, 0x61666564u, "vfpu0 not lowered yet"); return;
L_08A70714:
    rt.unsupported(0x08A70714u, 0x68676968u, "unknown not lowered yet"); return;
L_08A70724:
    rt.unsupported(0x08A70724u, 0x4978616Du, "cop2/vfpu not lowered yet"); return;
L_08A7072C:
    // nop
    goto L_08A70730;
L_08A70730:
    if (aot_gpr[19] != aot_gpr[24]) {
    rt.unsupported(0x08A70734u, 0x62697369u, "vfpu0 not lowered yet"); return;
        ctx.pc = 0x08A88CE8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70738;
L_08A70738:
    rt.unsupported(0x08A70738u, 0x7449656Cu, "unknown not lowered yet"); return;
L_08A70740:
    rt.unsupported(0x08A70740u, 0x75706F70u, "unknown not lowered yet"); return;
L_08A7074C:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 110u, 1u>();
    rt.unsupported(0x08A70750u, 0x63617053u, "vfpu0 not lowered yet"); return;
L_08A70758:
    rt.unsupported(0x08A70758u, 0x74747562u, "unknown not lowered yet"); return;
L_08A70764:
    // nop
    goto L_08A70768;
L_08A70768:
    // nop
    goto L_08A7076C;
L_08A7076C:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A70778u, 0x73694C2Fu, "unknown not lowered yet"); return;
L_08A70788:
    rt.unsupported(0x08A70788u, 0x695F626Cu, "unknown not lowered yet"); return;
L_08A70790:
    rt.unsupported(0x08A70790u, 0x4D455449u, "unknown not lowered yet"); return;
L_08A70798:
    ctx.execute_vfpu_vhdp(104u, 114u, 101u, 1u);
    // nop
    goto L_08A707A0;
L_08A707A0:
    rt.unsupported(0x08A707A0u, 0x73616C63u, "unknown not lowered yet"); return;
L_08A707A8:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    // nop
    goto L_08A707B0;
L_08A707B0:
    rt.unsupported(0x08A707B0u, 0x6B6E696Cu, "unknown not lowered yet"); return;
L_08A707BC:
    rt.unsupported(0x08A707BCu, 0x7473694Cu, "unknown not lowered yet"); return;
L_08A707C8:
    rt.unsupported(0x08A707C8u, 0x4978616Du, "cop2/vfpu not lowered yet"); return;
L_08A707D0:
    // nop
    goto L_08A707D4;
L_08A707D4:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A707E0u, 0x6E65472Fu, "vfpu3 not lowered yet"); return;
L_08A707F4:
    rt.unsupported(0x08A707F4u, 0x00007070u, "special? not lowered yet"); return;
L_08A707F8:
    if (aot_gpr[19] != aot_gpr[24]) {
    rt.unsupported(0x08A707FCu, 0x62697369u, "vfpu0 not lowered yet"); return;
        ctx.pc = 0x08A88DB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70800;
L_08A70800:
    rt.unsupported(0x08A70800u, 0x7449656Cu, "unknown not lowered yet"); return;
L_08A70808:
    // nop
    goto L_08A7080C;
L_08A7080C:
    ctx.execute_vfpu_vscl_ct<71u, 101u, 110u, 1u>();
    rt.unsupported(0x08A70810u, 0x4C636972u, "unknown not lowered yet"); return;
L_08A70820:
    rt.unsupported(0x08A70820u, 0x776F7242u, "unknown not lowered yet"); return;
L_08A70830:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A70834u, 0x78655472u, "unknown not lowered yet"); return;
L_08A70840:
    // nop
    goto L_08A70844;
L_08A70844:
    ctx.execute_vfpu_vminmax(70u, 111u, 114u, 1u, false);
    rt.unsupported(0x08A70848u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A70858:
    ctx.execute_vfpu_compare3(36u, 115u, 118u, 1u, 6u);
    rt.unsupported(0x08A7085Cu, 0x70747468u, "unknown not lowered yet"); return;
L_08A70878:
    rt.unsupported(0x08A70878u, 0x696C636Fu, "unknown not lowered yet"); return;
L_08A7089C:
    rt.unsupported(0x08A7089Cu, 0x70747448u, "unknown not lowered yet"); return;
L_08A708AC:
    rt.unsupported(0x08A708ACu, 0x72656469u, "unknown not lowered yet"); return;
L_08A708E0:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator + product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A708E4;
L_08A708E4:
    rt.unsupported(0x08A708E4u, 0x70747448u, "unknown not lowered yet"); return;
L_08A708FC:
    rt.unsupported(0x08A708FCu, 0x485F5653u, "cop2/vfpu not lowered yet"); return;
L_08A70908:
    rt.unsupported(0x08A70908u, 0x4449564Fu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08A7090Cu, 0x425F5245u, "unknown not lowered yet"); return;
L_08A70914:
    rt.unsupported(0x08A70914u, 0x4E454449u, "unknown not lowered yet"); return;
L_08A70918:
    rt.unsupported(0x08A70918u, 0x49464954u, "cop2/vfpu not lowered yet"); return;
L_08A70920:
    rt.unsupported(0x08A70920u, 0x636F7673u, "vfpu0 not lowered yet"); return;
L_08A70948:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    goto L_08A70950;
L_08A70950:
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A70954u, 0x7448432Fu, "unknown not lowered yet"); return;
L_08A70960:
    rt.unsupported(0x08A70960u, 0x70747468u, "unknown not lowered yet"); return;
L_08A70968:
    rt.unsupported(0x08A70968u, 0x70747468u, "unknown not lowered yet"); return;
L_08A70978:
    rt.unsupported(0x08A70978u, 0x635F7472u, "vfpu0 not lowered yet"); return;
L_08A70980:
    ctx.execute_vfpu_vscl_ct<82u, 101u, 108u, 1u>();
    if (aot_gpr[19] != aot_gpr[5]) {
    rt.unsupported(0x08A70988u, 0x69737265u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A8D70Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A7098C;
L_08A7098C:
    (void)(aot_gpr[25] & 28271u);
    aot_gpr[19] = (aot_gpr[17] < static_cast<std::uint32_t>(12334) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[9] ^ 12338u);
    aot_gpr[18] = (aot_gpr[25] | 13616u);
    goto L_08A7099C;
L_08A7099C:
    aot_gpr[16] = (aot_gpr[1] & 13361u);
    // nop
    goto L_08A709A4;
L_08A709A4:
    rt.unsupported(0x08A709A4u, 0x70747448u, "unknown not lowered yet"); return;
L_08A709B0:
    rt.unsupported(0x08A709B0u, 0x74696E49u, "unknown not lowered yet"); return;
L_08A709B8:
    if (aot_gpr[18] == aot_gpr[15]) {
    rt.unsupported(0x08A709BCu, 0x74202D20u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A85304u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A709C0;
L_08A709C0:
    rt.unsupported(0x08A709C0u, 0x72206568u, "unknown not lowered yet"); return;
L_08A709F0:
    rt.unsupported(0x08A709F0u, 0x74206465u, "unknown not lowered yet"); return;
L_08A70A0C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<118u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<111u, 1u>(vfpu_d); }
    rt.unsupported(0x08A70A10u, 0x63207265u, "vfpu0 not lowered yet"); return;
L_08A70A1C:
    rt.unsupported(0x08A70A1Cu, 0x70747448u, "unknown not lowered yet"); return;
L_08A70A28:
    rt.unsupported(0x08A70A28u, 0x74696E49u, "unknown not lowered yet"); return;
L_08A70A2C:
    rt.unsupported(0x08A70A2Cu, 0x45202D20u, "cop1? not lowered yet"); return;
L_08A70A38:
    rt.unsupported(0x08A70A38u, 0x69706D6Fu, "unknown not lowered yet"); return;
L_08A70A54:
    // nop
    goto L_08A70A58;
L_08A70A58:
    rt.unsupported(0x08A70A58u, 0x70747448u, "unknown not lowered yet"); return;
L_08A70A64:
    rt.unsupported(0x08A70A64u, 0x74696E49u, "unknown not lowered yet"); return;
L_08A70A74:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 107u, 1u>();
    rt.unsupported(0x08A70A78u, 0x74722064u, "unknown not lowered yet"); return;
L_08A70A90:
    rt.unsupported(0x08A70A94u, 0x54485F45u, "control flow in delay slot"); return;
L_08A70A98:
    rt.unsupported(0x08A70A98u, 0x495F5054u, "cop2/vfpu not lowered yet"); return;
L_08A70AA4:
    if (aot_gpr[18] == aot_gpr[5]) {
    // nop
        ctx.pc = 0x08A85BE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70AAC;
L_08A70AAC:
    rt.unsupported(0x08A70AB0u, 0x54485F45u, "control flow in delay slot"); return;
L_08A70AB4:
    rt.unsupported(0x08A70AB4u, 0x495F5054u, "cop2/vfpu not lowered yet"); return;
L_08A70AC0:
    if (aot_gpr[2] != aot_gpr[1]) {
    rt.unsupported(0x08A70AC4u, 0x00000045u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 68u, 0x08A81C04u>(ctx, &aot_mem); return;
    }
    goto L_08A70AC8;
L_08A70AC8:
    rt.unsupported(0x08A70ACCu, 0x54485F45u, "control flow in delay slot"); return;
L_08A70AD0:
    rt.unsupported(0x08A70AD0u, 0x475F5054u, "cop1? not lowered yet"); return;
L_08A70AE0:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A70AE4u, 0x455F4E4Fu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 96u, 0x08A83FE8u>(ctx, &aot_mem); return;
    }
    goto L_08A70AE8;
L_08A70AE8:
    if (aot_gpr[18] == aot_gpr[5]) {
    // nop
        ctx.pc = 0x08A85C24u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70AF0;
L_08A70AF0:
    rt.unsupported(0x08A70AF4u, 0x54485F45u, "control flow in delay slot"); return;
L_08A70AF8:
    rt.unsupported(0x08A70AF8u, 0x475F5054u, "cop1? not lowered yet"); return;
L_08A70B08:
    rt.unsupported(0x08A70B0Cu, 0x525F4E4Fu, "control flow in delay slot"); return;
L_08A70B10:
    if (static_cast<std::int32_t>(aot_gpr[10]) <= 0) {
    // nop
        ctx.pc = 0x08A85C28u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70B18;
L_08A70B18:
    rt.unsupported(0x08A70B1Cu, 0x54485F45u, "control flow in delay slot"); return;
L_08A70B20:
    rt.unsupported(0x08A70B20u, 0x475F5054u, "cop1? not lowered yet"); return;
L_08A70B30:
    rt.unsupported(0x08A70B34u, 0x555F4E4Fu, "control flow in delay slot"); return;
L_08A70B38:
    if (aot_gpr[2] != aot_gpr[1]) {
    rt.unsupported(0x08A70B3Cu, 0x00000045u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 72u, 0x08A81C7Cu>(ctx, &aot_mem); return;
    }
    goto L_08A70B40;
L_08A70B40:
    rt.unsupported(0x08A70B44u, 0x54485F45u, "control flow in delay slot"); return;
L_08A70B48:
    rt.unsupported(0x08A70B48u, 0x435F5054u, "unknown not lowered yet"); return;
L_08A70B58:
    rt.unsupported(0x08A70B58u, 0x455F4E4Fu, "cop1? not lowered yet"); return;
L_08A70B64:
    rt.unsupported(0x08A70B68u, 0x54485F45u, "control flow in delay slot"); return;
L_08A70B6C:
    rt.unsupported(0x08A70B6Cu, 0x435F5054u, "unknown not lowered yet"); return;
L_08A70B7C:
    rt.unsupported(0x08A70B80u, 0x54414450u, "control flow in delay slot"); return;
L_08A70B84:
    rt.unsupported(0x08A70B84u, 0x00000045u, "special? not lowered yet"); return;
L_08A70B88:
    rt.unsupported(0x08A70B8Cu, 0x54485F45u, "control flow in delay slot"); return;
L_08A70B90:
    rt.unsupported(0x08A70B94u, 0x5F444E45u, "control flow in delay slot"); return;
L_08A70B98:
    rt.unsupported(0x08A70B98u, 0x455F4E4Fu, "cop1? not lowered yet"); return;
L_08A70BA4:
    rt.unsupported(0x08A70BA8u, 0x54485F45u, "control flow in delay slot"); return;
L_08A70BAC:
    rt.unsupported(0x08A70BB0u, 0x5F444E45u, "control flow in delay slot"); return;
L_08A70BB4:
    rt.unsupported(0x08A70BB8u, 0x54414450u, "control flow in delay slot"); return;
L_08A70BBC:
    rt.unsupported(0x08A70BBCu, 0x00000045u, "special? not lowered yet"); return;
L_08A70BC0:
    rt.unsupported(0x08A70BC4u, 0x54485F45u, "control flow in delay slot"); return;
L_08A70BC8:
    rt.unsupported(0x08A70BCCu, 0x5F564345u, "control flow in delay slot"); return;
L_08A70BD0:
    rt.unsupported(0x08A70BD0u, 0x455F4E4Fu, "cop1? not lowered yet"); return;
L_08A70BDC:
    rt.unsupported(0x08A70BE0u, 0x54485F45u, "control flow in delay slot"); return;
L_08A70BE4:
    rt.unsupported(0x08A70BE8u, 0x5F564345u, "control flow in delay slot"); return;
L_08A70BEC:
    rt.unsupported(0x08A70BF0u, 0x54414450u, "control flow in delay slot"); return;
L_08A70BF4:
    rt.unsupported(0x08A70BF4u, 0x00000045u, "special? not lowered yet"); return;
L_08A70BF8:
    rt.unsupported(0x08A70BFCu, 0x54485F45u, "control flow in delay slot"); return;
L_08A70C00:
    rt.unsupported(0x08A70C00u, 0x4E5F5054u, "unknown not lowered yet"); return;
L_08A70C0C:
    rt.unsupported(0x08A70C10u, 0x54415453u, "control flow in delay slot"); return;
L_08A70C14:
    if (aot_gpr[2] != aot_gpr[8]) {
    rt.unsupported(0x08A70C18u, 0x00005054u, "special? not lowered yet"); return;
        ctx.pc = 0x08A8892Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70C1C;
L_08A70C1C:
    rt.unsupported(0x08A70C1Cu, 0x61666564u, "vfpu0 not lowered yet"); return;
L_08A70C24:
    // nop
    ctx.pc = 0x08342834u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A70C2C:
    ctx.execute_vfpu_vminmax(46u, 115u, 118u, 1u, false);
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08A70C34u, 0x786D612Eu, "unknown not lowered yet"); return;
L_08A70C44:
    if (aot_gpr[2] == aot_gpr[20]) {
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[1]) * static_cast<std::uint64_t>(aot_gpr[14]); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
        ctx.pc = 0x08A85D68u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70C4C;
L_08A70C4C:
    if (aot_gpr[2] == aot_gpr[20]) {
    aot_gpr[14] = (aot_gpr[1] & 12591u);
        ctx.pc = 0x08A85D70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70C54;
L_08A70C54:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A70C54u, 0x00000020u); return; } }
    goto L_08A70C58;
L_08A70C58:
    rt.unsupported(0x08A70C58u, 0x6B6F6F43u, "unknown not lowered yet"); return;
L_08A70C70:
    aot_gpr[20] = (aot_gpr[11] < static_cast<std::uint32_t>(25939) ? 1u : 0u);
    rt.unsupported(0x08A70C74u, 0x6B6F6F43u, "unknown not lowered yet"); return;
L_08A70C84:
    rt.unsupported(0x08A70C84u, 0x0000003Au, "special? not lowered yet"); return;
L_08A70C88:
    rt.unsupported(0x08A70C88u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A70C98:
    rt.unsupported(0x08A70C98u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A70CC8:
    rt.unsupported(0x08A70CC8u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08A70CD4:
    rt.unsupported(0x08A70CD4u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A70CD8:
    aot_gpr[20] = (aot_gpr[11] < static_cast<std::uint32_t>(28261) ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<84u, 121u, 112u, 1u>();
    rt.unsupported(0x08A70CE0u, 0x0000003Au, "special? not lowered yet"); return;
L_08A70CE4:
    rt.unsupported(0x08A70CE4u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A70CF4:
    rt.unsupported(0x08A70CF4u, 0x74786574u, "unknown not lowered yet"); return;
L_08A70D00:
    rt.unsupported(0x08A70D00u, 0x74786574u, "unknown not lowered yet"); return;
L_08A70D0C:
    rt.unsupported(0x08A70D0Cu, 0x74786574u, "unknown not lowered yet"); return;
L_08A70D18:
    rt.unsupported(0x08A70D18u, 0x67616D69u, "vfpu1 not lowered yet"); return;
L_08A70D20:
    ctx.execute_vfpu_vcmp_ct<112u, 112u, 1u, 1u>();
    rt.unsupported(0x08A70D24u, 0x74616369u, "unknown not lowered yet"); return;
L_08A70D30:
    ctx.execute_vfpu_vcmp_ct<112u, 112u, 1u, 1u>();
    rt.unsupported(0x08A70D34u, 0x74616369u, "unknown not lowered yet"); return;
L_08A70D4C:
    rt.unsupported(0x08A70D4Cu, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08A70D54:
    rt.unsupported(0x08A70D54u, 0x203A6E6Fu, "unknown not lowered yet"); return;
L_08A70D68:
    rt.unsupported(0x08A70D68u, 0x203A6563u, "unknown not lowered yet"); return;
L_08A70D70:
    rt.unsupported(0x08A70D70u, 0x00000A0Du, "special? not lowered yet"); return;
L_08A70D74:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> (aot_gpr[2] & 31u)));
    goto L_08A70D78;
L_08A70D78:
    aot_gpr[31] = (aot_gpr[9] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08A70D7Cu, 0x00000073u, "special? not lowered yet"); return;
L_08A70D80:
    // nop
    goto L_08A70D84;
L_08A70D84:
    if (aot_gpr[2] != aot_gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0640_entry, 640u, 60u, 0x08A84AC8u>(ctx, &aot_mem); return;
    }
    goto L_08A70D8C;
L_08A70D8C:
    ctx.execute_vfpu_vcmp_ct<112u, 112u, 1u, 1u>();
    goto L_08A70D90;
L_08A70D90:
    rt.unsupported(0x08A70D90u, 0x74616369u, "unknown not lowered yet"); return;
L_08A70DB0:
    rt.unsupported(0x08A70DB0u, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08A70DBC:
    rt.unsupported(0x08A70DBCu, 0x7065654Bu, "unknown not lowered yet"); return;
L_08A70DC8:
    (void)(aot_gpr[9] + static_cast<std::uint32_t>(29477));
    if (aot_gpr[2] != aot_gpr[8]) {
    aot_gpr[15] = (aot_gpr[9] & 20564u);
        (void)rt.invoke_chained_direct<&recomp_unit_0628_entry, 628u, 122u, 0x08A78F9Cu>(ctx, &aot_mem); return;
    }
    goto L_08A70DD4;
L_08A70DD4:
    rt.unsupported(0x08A70DD8u, 0x74736F48u, "unknown not lowered yet"); return;
    ctx.pc = 0x0834C0B8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A70DD8:
    rt.unsupported(0x08A70DD8u, 0x74736F48u, "unknown not lowered yet"); return;
L_08A70DE8:
    if (aot_gpr[18] != aot_gpr[19]) {
    rt.unsupported(0x08A70DECu, 0x7261544Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0632_entry, 632u, 52u, 0x08A7C34Cu>(ctx, &aot_mem); return;
    }
    goto L_08A70DF0;
L_08A70DF0:
    if (aot_gpr[3] != aot_gpr[20]) {
    aot_gpr[5] = (aot_gpr[19] ^ 28793u);
        ctx.pc = 0x08A8A390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70DF8;
L_08A70DF8:
    aot_gpr[31] = (0x08A70E00u);
    if (0u == 0u) (void)(0u);
    ctx.pc = 0x05909480u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A70E00u) goto L_08A70E00;
    return;
L_08A70E00:
    if (aot_gpr[18] != aot_gpr[19]) {
    rt.unsupported(0x08A70E04u, 0x7261544Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0632_entry, 632u, 56u, 0x08A7C364u>(ctx, &aot_mem); return;
    }
    goto L_08A70E08;
L_08A70E08:
    rt.unsupported(0x08A70E08u, 0x49746567u, "cop2/vfpu not lowered yet"); return;
L_08A70E14:
    if (aot_gpr[18] != aot_gpr[19]) {
    rt.unsupported(0x08A70E18u, 0x7469544Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0632_entry, 632u, 59u, 0x08A7C378u>(ctx, &aot_mem); return;
    }
    goto L_08A70E1C;
L_08A70E1C:
    rt.unsupported(0x08A70E1Cu, 0x4449656Cu, "unsupported CFC1 control register"); return;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<58u, 1u>(vfpu_d); }
    rt.unsupported(0x08A70E24u, 0x00000A0Du, "special? not lowered yet"); return;
L_08A70E28:
    if (aot_gpr[18] != aot_gpr[19]) {
    rt.unsupported(0x08A70E2Cu, 0x63614D4Fu, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0632_entry, 632u, 62u, 0x08A7C38Cu>(ctx, &aot_mem); return;
    }
    goto L_08A70E30;
L_08A70E2C:
    rt.unsupported(0x08A70E2Cu, 0x63614D4Fu, "vfpu0 not lowered yet"); return;
L_08A70E30:
    rt.unsupported(0x08A70E30u, 0x7325203Au, "unknown not lowered yet"); return;
L_08A70E38:
    aot_gpr[15] = (aot_gpr[10] < static_cast<std::uint32_t>(22099) ? 1u : 0u);
    rt.unsupported(0x08A70E3Cu, 0x74616C50u, "unknown not lowered yet"); return;
L_08A70E4C:
    aot_gpr[15] = (aot_gpr[10] < static_cast<std::uint32_t>(22099) ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<83u, 99u, 114u, 1u>();
    rt.unsupported(0x08A70E54u, 0x69576E65u, "unknown not lowered yet"); return;
L_08A70E64:
    aot_gpr[15] = (aot_gpr[10] < static_cast<std::uint32_t>(22099) ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<83u, 99u, 114u, 1u>();
    ctx.execute_vfpu_vscl_ct<101u, 110u, 72u, 1u>();
    rt.unsupported(0x08A70E70u, 0x74686769u, "unknown not lowered yet"); return;
L_08A70E80:
    ctx.execute_vfpu_vscl_ct<65u, 99u, 99u, 1u>();
    rt.unsupported(0x08A70E84u, 0x4C2D7470u, "unknown not lowered yet"); return;
L_08A70E90:
    aot_gpr[31] = (0x08A70E98u);
    if (0u == 0u) (void)(0u);
    ctx.pc = 0x05CC9480u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A70E98u) goto L_08A70E98;
    return;
L_08A70E98:
    rt.unsupported(0x08A70E98u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A70EB0:
    ctx.execute_vfpu_compare3(101u, 45u, 67u, 1u, 6u);
    goto L_08A70EB4;
L_08A70EB4:
    ctx.execute_vfpu_compare3(110u, 116u, 114u, 1u, 6u);
    rt.unsupported(0x08A70EB8u, 0x6E203A6Cu, "vfpu3 not lowered yet"); return;
L_08A70EC8:
    rt.unsupported(0x08A70EC8u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A70EDC:
    rt.unsupported(0x08A70EDCu, 0x676E6152u, "vfpu1 not lowered yet"); return;
L_08A70EF0:
    if (aot_gpr[17] == aot_gpr[13]) {
    ctx.execute_vfpu_vscl_ct<97u, 110u, 103u, 1u>();
        ctx.pc = 0x08A8A818u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70EF8;
L_08A70EF8:
    rt.unsupported(0x08A70EF8u, 0x7325203Au, "unknown not lowered yet"); return;
L_08A70F00:
    rt.unsupported(0x08A70F00u, 0x73250A0Du, "unknown not lowered yet"); return;
L_08A70F04:
    rt.unsupported(0x08A70F04u, 0x00000A0Du, "special? not lowered yet"); return;
L_08A70F68:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A70F74u, 0x4354522Fu, "unknown not lowered yet"); return;
L_08A70F80:
    aot_gpr[14] = (aot_gpr[3] - aot_gpr[16]);
    rt.unsupported(0x08A70F84u, 0x4D582F3Cu, "unknown not lowered yet"); return;
L_08A70F90:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.memory().memory_barrier();
        ctx.pc = 0x08A85CE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70F98;
L_08A70F98:
    rt.unsupported(0x08A70F9Cu, 0x55534552u, "control flow in delay slot"); return;
L_08A70FA0:
    rt.unsupported(0x08A70FA0u, 0x495F544Cu, "cop2/vfpu not lowered yet"); return;
L_08A70FAC:
    rt.unsupported(0x08A70FB0u, 0x55534552u, "control flow in delay slot"); return;
L_08A70FB0:
    if (aot_gpr[10] != aot_gpr[19]) {
    rt.unsupported(0x08A70FB4u, 0x4E5F544Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 20u, 0x08A824FCu>(ctx, &aot_mem); return;
    }
    goto L_08A70FB8;
L_08A70FB4:
    rt.unsupported(0x08A70FB4u, 0x4E5F544Cu, "unknown not lowered yet"); return;
L_08A70FB8:
    rt.unsupported(0x08A70FB8u, 0x415F544Fu, "unknown not lowered yet"); return;
L_08A70FC4:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A70FC8u, 0x4F525245u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A85D14u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70FCC;
L_08A70FCC:
    rt.unsupported(0x08A70FCCu, 0x45475F52u, "cop1? not lowered yet"); return;
L_08A70FD8:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A70FDCu, 0x4F525245u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A85D28u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70FE0;
L_08A70FE0:
    rt.unsupported(0x08A70FE0u, 0x41505F52u, "unknown not lowered yet"); return;
L_08A70FE8:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A70FECu, 0x4F525245u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A85D38u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A70FF0;
L_08A70FF0:
    rt.unsupported(0x08A70FF0u, 0x49545F52u, "cop2/vfpu not lowered yet"); return;
L_08A70FFC:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A71000u, 0x4F525245u, "unknown not lowered yet"); return;
        ctx.pc = 0x08A85D4Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0621_entry, 621u, 1u, 0x08A71004u>(ctx, &aot_mem); return;
}

void recomp_unit_0620(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0620_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_620(Runtime &runtime) {
    runtime.register_generated_unit(620u, 0x08A70000u, 4096u, &recomp_unit_0620, &recomp_unit_0620_entry);
    runtime.register_function(0x08A70000u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7001Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70038u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70040u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70044u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70058u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70060u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7006Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7007Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70084u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70094u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7009Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A700A8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A700B0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A700BCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A700C0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A700CCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A700D0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A700E8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A700ECu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A700F4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A700FCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70100u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70108u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70114u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70120u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70138u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70140u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7014Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70150u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70158u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70164u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70168u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70170u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70174u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70184u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70194u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A701A0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A701ACu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A701CCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A701D8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A701E4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A701ECu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A701F4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70200u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7020Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70214u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7021Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70220u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70224u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70228u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7023Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7024Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70260u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70268u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A702A0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A702B0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A702D8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A702E4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A702FCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70324u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70330u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70348u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70370u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70374u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70390u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7039Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A703A4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A703B0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A703BCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A703C8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A703D4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A703DCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A703E4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A703F0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A703FCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70404u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70410u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70414u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70418u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7042Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7043Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70444u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70478u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70490u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7049Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A704A4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A704ACu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A704B8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A704CCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A704DCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A704F0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A704FCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70504u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7050Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70518u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7052Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70530u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70548u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70550u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70558u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70584u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70594u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7059Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A705A4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A705B0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A705B4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A705C4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A705C8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A705E4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A705F4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70608u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70618u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70624u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70634u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7063Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70644u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70648u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70650u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70654u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70664u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70670u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70680u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7068Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70698u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A706A0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A706A8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A706BCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A706CCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A706D0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A706E0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A706ECu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A706FCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70704u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70714u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70724u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7072Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70730u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70738u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70740u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7074Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70758u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70764u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70768u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7076Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70788u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70790u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70798u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A707A0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A707A8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A707B0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A707BCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A707C8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A707D0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A707D4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A707F4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A707F8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70800u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70808u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7080Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70820u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70830u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70840u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70844u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70858u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70878u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7089Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A708ACu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A708E0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A708E4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A708FCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70908u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70914u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70918u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70920u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70948u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70950u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70960u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70968u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70978u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70980u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7098Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A7099Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A709A4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A709B0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A709B8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A709C0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A709F0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70A0Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70A1Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70A28u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70A2Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70A38u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70A54u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70A58u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70A64u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70A74u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70A90u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70A98u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70AA4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70AACu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70AB4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70AC0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70AC8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70AD0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70AE0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70AE8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70AF0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70AF8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B08u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B10u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B18u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B20u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B30u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B38u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B40u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B48u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B58u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B64u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B6Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B7Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B84u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B88u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B90u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70B98u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70BA4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70BACu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70BB4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70BBCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70BC0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70BC8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70BD0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70BDCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70BE4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70BECu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70BF4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70BF8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70C00u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70C0Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70C14u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70C1Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70C24u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70C2Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70C44u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70C4Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70C54u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70C58u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70C70u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70C84u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70C88u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70C98u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70CC8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70CD4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70CD8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70CE4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70CF4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D00u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D0Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D18u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D20u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D30u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D4Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D54u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D68u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D70u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D74u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D78u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D80u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D84u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D8Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70D90u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70DB0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70DBCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70DC8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70DD4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70DD8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70DE8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70DF0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70DF8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70E00u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70E08u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70E14u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70E1Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70E28u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70E2Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70E30u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70E38u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70E4Cu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70E64u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70E80u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70E90u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70E98u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70EB0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70EB4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70EC8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70EDCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70EF0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70EF8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70F00u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70F04u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70F68u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70F80u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70F90u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70F98u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70FA0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70FACu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70FB0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70FB4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70FB8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70FC4u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70FCCu, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70FD8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70FE0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70FE8u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70FF0u, &recomp_unit_0620, "recomp_unit_0620");
    runtime.register_function(0x08A70FFCu, &recomp_unit_0620, "recomp_unit_0620");
}
} // namespace psprecomp
