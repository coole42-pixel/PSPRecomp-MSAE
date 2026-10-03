#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0597[1022] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0,
    10, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0,
    0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29,
    0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 37, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 47,
    0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 57,
    0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0,
    0, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78,
    0, 79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0,
    0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    107, 0, 108, 109, 0, 110, 0, 0, 0, 0, 111, 0, 112, 113, 0, 114, 0, 0, 0, 0, 115, 0, 116, 117, 0, 0, 0, 0, 118, 0, 119, 0,
    0, 0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0,
    132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 149, 0, 150, 0, 0, 0, 0, 151, 0, 152, 153, 0, 0, 0, 0, 154, 0, 155, 0,
    0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0,
    164, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 176, 177, 0, 178, 0, 0, 0, 0, 179, 0, 180, 181, 0, 182, 0,
    0, 0, 0, 183, 0, 184, 185, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0,
    192, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0,
    0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 206, 207, 0, 208, 0, 0, 209, 0,
    210, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0,
    0, 220, 0, 0, 221, 0, 0, 222, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 229, 0,
    230, 231, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243,
    0, 244, 0, 245, 0, 0, 0, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0,
    258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0,
    0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 274, 0, 275, 0, 276, 0,
    277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 294, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299,
    0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315,
    0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330,
};
void recomp_unit_0597_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A59004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0597[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A59004;
    case 2u: goto L_08A59010;
    case 3u: goto L_08A5902C;
    case 4u: goto L_08A59038;
    case 5u: goto L_08A59040;
    case 6u: goto L_08A59044;
    case 7u: goto L_08A5904C;
    case 8u: goto L_08A59060;
    case 9u: goto L_08A5907C;
    case 10u: goto L_08A59084;
    case 11u: goto L_08A5908C;
    case 12u: goto L_08A59094;
    case 13u: goto L_08A590A0;
    case 14u: goto L_08A590B0;
    case 15u: goto L_08A590C0;
    case 16u: goto L_08A590D4;
    case 17u: goto L_08A590EC;
    case 18u: goto L_08A590F4;
    case 19u: goto L_08A590FC;
    case 20u: goto L_08A59108;
    case 21u: goto L_08A59110;
    case 22u: goto L_08A59120;
    case 23u: goto L_08A59130;
    case 24u: goto L_08A5913C;
    case 25u: goto L_08A59148;
    case 26u: goto L_08A59158;
    case 27u: goto L_08A59170;
    case 28u: goto L_08A59178;
    case 29u: goto L_08A59180;
    case 30u: goto L_08A5918C;
    case 31u: goto L_08A5919C;
    case 32u: goto L_08A591AC;
    case 33u: goto L_08A591C0;
    case 34u: goto L_08A591D8;
    case 35u: goto L_08A591E0;
    case 36u: goto L_08A591E8;
    case 37u: goto L_08A591F4;
    case 38u: goto L_08A59204;
    case 39u: goto L_08A59214;
    case 40u: goto L_08A59220;
    case 41u: goto L_08A5922C;
    case 42u: goto L_08A5923C;
    case 43u: goto L_08A59254;
    case 44u: goto L_08A5925C;
    case 45u: goto L_08A59264;
    case 46u: goto L_08A59270;
    case 47u: goto L_08A59280;
    case 48u: goto L_08A59290;
    case 49u: goto L_08A592A4;
    case 50u: goto L_08A592BC;
    case 51u: goto L_08A592C4;
    case 52u: goto L_08A592CC;
    case 53u: goto L_08A592D8;
    case 54u: goto L_08A592E0;
    case 55u: goto L_08A592E8;
    case 56u: goto L_08A592F0;
    case 57u: goto L_08A59300;
    case 58u: goto L_08A59310;
    case 59u: goto L_08A5931C;
    case 60u: goto L_08A59328;
    case 61u: goto L_08A59338;
    case 62u: goto L_08A59350;
    case 63u: goto L_08A59358;
    case 64u: goto L_08A59360;
    case 65u: goto L_08A5936C;
    case 66u: goto L_08A5937C;
    case 67u: goto L_08A5938C;
    case 68u: goto L_08A59394;
    case 69u: goto L_08A593A0;
    case 70u: goto L_08A593A8;
    case 71u: goto L_08A593B0;
    case 72u: goto L_08A593B8;
    case 73u: goto L_08A593C0;
    case 74u: goto L_08A593C8;
    case 75u: goto L_08A593D0;
    case 76u: goto L_08A593EC;
    case 77u: goto L_08A593F8;
    case 78u: goto L_08A59400;
    case 79u: goto L_08A59408;
    case 80u: goto L_08A59414;
    case 81u: goto L_08A59428;
    case 82u: goto L_08A59444;
    case 83u: goto L_08A5944C;
    case 84u: goto L_08A59454;
    case 85u: goto L_08A59468;
    case 86u: goto L_08A59478;
    case 87u: goto L_08A59488;
    case 88u: goto L_08A5949C;
    case 89u: goto L_08A594B4;
    case 90u: goto L_08A594BC;
    case 91u: goto L_08A594C4;
    case 92u: goto L_08A594D0;
    case 93u: goto L_08A59514;
    case 94u: goto L_08A59528;
    case 95u: goto L_08A59530;
    case 96u: goto L_08A59550;
    case 97u: goto L_08A59554;
    case 98u: goto L_08A5955C;
    case 99u: goto L_08A5957C;
    case 100u: goto L_08A59588;
    case 101u: goto L_08A59598;
    case 102u: goto L_08A595A8;
    case 103u: goto L_08A595B0;
    case 104u: goto L_08A595BC;
    case 105u: goto L_08A595D8;
    case 106u: goto L_08A595F0;
    case 107u: goto L_08A59604;
    case 108u: goto L_08A5960C;
    case 109u: goto L_08A59610;
    case 110u: goto L_08A59618;
    case 111u: goto L_08A5962C;
    case 112u: goto L_08A59634;
    case 113u: goto L_08A59638;
    case 114u: goto L_08A59640;
    case 115u: goto L_08A59654;
    case 116u: goto L_08A5965C;
    case 117u: goto L_08A59660;
    case 118u: goto L_08A59674;
    case 119u: goto L_08A5967C;
    case 120u: goto L_08A59690;
    case 121u: goto L_08A59698;
    case 122u: goto L_08A596A0;
    case 123u: goto L_08A596A8;
    case 124u: goto L_08A596B0;
    case 125u: goto L_08A596B8;
    case 126u: goto L_08A596C0;
    case 127u: goto L_08A596C8;
    case 128u: goto L_08A596D0;
    case 129u: goto L_08A596E0;
    case 130u: goto L_08A596F0;
    case 131u: goto L_08A596F8;
    case 132u: goto L_08A59704;
    case 133u: goto L_08A5970C;
    case 134u: goto L_08A59714;
    case 135u: goto L_08A5971C;
    case 136u: goto L_08A59724;
    case 137u: goto L_08A5972C;
    case 138u: goto L_08A59734;
    case 139u: goto L_08A5973C;
    case 140u: goto L_08A59744;
    case 141u: goto L_08A5974C;
    case 142u: goto L_08A59754;
    case 143u: goto L_08A5975C;
    case 144u: goto L_08A59764;
    case 145u: goto L_08A59780;
    case 146u: goto L_08A59798;
    case 147u: goto L_08A597AC;
    case 148u: goto L_08A597B4;
    case 149u: goto L_08A597B8;
    case 150u: goto L_08A597C0;
    case 151u: goto L_08A597D4;
    case 152u: goto L_08A597DC;
    case 153u: goto L_08A597E0;
    case 154u: goto L_08A597F4;
    case 155u: goto L_08A597FC;
    case 156u: goto L_08A59810;
    case 157u: goto L_08A59818;
    case 158u: goto L_08A59820;
    case 159u: goto L_08A5983C;
    case 160u: goto L_08A59854;
    case 161u: goto L_08A59860;
    case 162u: goto L_08A59868;
    case 163u: goto L_08A5987C;
    case 164u: goto L_08A59884;
    case 165u: goto L_08A5988C;
    case 166u: goto L_08A598A8;
    case 167u: goto L_08A598C0;
    case 168u: goto L_08A598CC;
    case 169u: goto L_08A598D4;
    case 170u: goto L_08A598E8;
    case 171u: goto L_08A598F0;
    case 172u: goto L_08A598F8;
    case 173u: goto L_08A59914;
    case 174u: goto L_08A5992C;
    case 175u: goto L_08A59940;
    case 176u: goto L_08A59948;
    case 177u: goto L_08A5994C;
    case 178u: goto L_08A59954;
    case 179u: goto L_08A59968;
    case 180u: goto L_08A59970;
    case 181u: goto L_08A59974;
    case 182u: goto L_08A5997C;
    case 183u: goto L_08A59990;
    case 184u: goto L_08A59998;
    case 185u: goto L_08A5999C;
    case 186u: goto L_08A599A4;
    case 187u: goto L_08A599B0;
    case 188u: goto L_08A599B8;
    case 189u: goto L_08A599CC;
    case 190u: goto L_08A599F0;
    case 191u: goto L_08A599FC;
    case 192u: goto L_08A59A04;
    case 193u: goto L_08A59A0C;
    case 194u: goto L_08A59A28;
    case 195u: goto L_08A59A40;
    case 196u: goto L_08A59A4C;
    case 197u: goto L_08A59A54;
    case 198u: goto L_08A59A68;
    case 199u: goto L_08A59A70;
    case 200u: goto L_08A59A78;
    case 201u: goto L_08A59A88;
    case 202u: goto L_08A59A94;
    case 203u: goto L_08A59AB0;
    case 204u: goto L_08A59AC8;
    case 205u: goto L_08A59ADC;
    case 206u: goto L_08A59AE4;
    case 207u: goto L_08A59AE8;
    case 208u: goto L_08A59AF0;
    case 209u: goto L_08A59AFC;
    case 210u: goto L_08A59B04;
    case 211u: goto L_08A59B18;
    case 212u: goto L_08A59B20;
    case 213u: goto L_08A59B28;
    case 214u: goto L_08A59B38;
    case 215u: goto L_08A59B48;
    case 216u: goto L_08A59B50;
    case 217u: goto L_08A59B5C;
    case 218u: goto L_08A59B64;
    case 219u: goto L_08A59B6C;
    case 220u: goto L_08A59B88;
    case 221u: goto L_08A59B94;
    case 222u: goto L_08A59BA0;
    case 223u: goto L_08A59BA8;
    case 224u: goto L_08A59BBC;
    case 225u: goto L_08A59BD0;
    case 226u: goto L_08A59BE0;
    case 227u: goto L_08A59BEC;
    case 228u: goto L_08A59BF4;
    case 229u: goto L_08A59BFC;
    case 230u: goto L_08A59C04;
    case 231u: goto L_08A59C08;
    case 232u: goto L_08A59C0C;
    case 233u: goto L_08A59C14;
    case 234u: goto L_08A59C1C;
    case 235u: goto L_08A59C24;
    case 236u: goto L_08A59C2C;
    case 237u: goto L_08A59C50;
    case 238u: goto L_08A59C58;
    case 239u: goto L_08A59C60;
    case 240u: goto L_08A59C68;
    case 241u: goto L_08A59C70;
    case 242u: goto L_08A59C78;
    case 243u: goto L_08A59C80;
    case 244u: goto L_08A59C88;
    case 245u: goto L_08A59C90;
    case 246u: goto L_08A59CA4;
    case 247u: goto L_08A59CAC;
    case 248u: goto L_08A59CB4;
    case 249u: goto L_08A59CBC;
    case 250u: goto L_08A59CC4;
    case 251u: goto L_08A59CCC;
    case 252u: goto L_08A59CD4;
    case 253u: goto L_08A59CDC;
    case 254u: goto L_08A59CE4;
    case 255u: goto L_08A59CEC;
    case 256u: goto L_08A59CF4;
    case 257u: goto L_08A59CFC;
    case 258u: goto L_08A59D04;
    case 259u: goto L_08A59D0C;
    case 260u: goto L_08A59D14;
    case 261u: goto L_08A59D1C;
    case 262u: goto L_08A59D24;
    case 263u: goto L_08A59D2C;
    case 264u: goto L_08A59D48;
    case 265u: goto L_08A59D60;
    case 266u: goto L_08A59D6C;
    case 267u: goto L_08A59D74;
    case 268u: goto L_08A59D88;
    case 269u: goto L_08A59DA4;
    case 270u: goto L_08A59DBC;
    case 271u: goto L_08A59DC8;
    case 272u: goto L_08A59DD0;
    case 273u: goto L_08A59DE4;
    case 274u: goto L_08A59DEC;
    case 275u: goto L_08A59DF4;
    case 276u: goto L_08A59DFC;
    case 277u: goto L_08A59E04;
    case 278u: goto L_08A59E0C;
    case 279u: goto L_08A59E14;
    case 280u: goto L_08A59E1C;
    case 281u: goto L_08A59E24;
    case 282u: goto L_08A59E2C;
    case 283u: goto L_08A59E3C;
    case 284u: goto L_08A59E4C;
    case 285u: goto L_08A59E54;
    case 286u: goto L_08A59E60;
    case 287u: goto L_08A59E68;
    case 288u: goto L_08A59E70;
    case 289u: goto L_08A59E78;
    case 290u: goto L_08A59E94;
    case 291u: goto L_08A59EAC;
    case 292u: goto L_08A59EB8;
    case 293u: goto L_08A59EC4;
    case 294u: goto L_08A59ECC;
    case 295u: goto L_08A59EE0;
    case 296u: goto L_08A59EE8;
    case 297u: goto L_08A59EF0;
    case 298u: goto L_08A59EF8;
    case 299u: goto L_08A59F00;
    case 300u: goto L_08A59F08;
    case 301u: goto L_08A59F10;
    case 302u: goto L_08A59F18;
    case 303u: goto L_08A59F20;
    case 304u: goto L_08A59F28;
    case 305u: goto L_08A59F30;
    case 306u: goto L_08A59F38;
    case 307u: goto L_08A59F40;
    case 308u: goto L_08A59F48;
    case 309u: goto L_08A59F50;
    case 310u: goto L_08A59F58;
    case 311u: goto L_08A59F60;
    case 312u: goto L_08A59F68;
    case 313u: goto L_08A59F70;
    case 314u: goto L_08A59F78;
    case 315u: goto L_08A59F80;
    case 316u: goto L_08A59F88;
    case 317u: goto L_08A59F90;
    case 318u: goto L_08A59F98;
    case 319u: goto L_08A59FA0;
    case 320u: goto L_08A59FA8;
    case 321u: goto L_08A59FB0;
    case 322u: goto L_08A59FB8;
    case 323u: goto L_08A59FC0;
    case 324u: goto L_08A59FC8;
    case 325u: goto L_08A59FD0;
    case 326u: goto L_08A59FD8;
    case 327u: goto L_08A59FE0;
    case 328u: goto L_08A59FE8;
    case 329u: goto L_08A59FF0;
    case 330u: goto L_08A59FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A59004:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59010:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5908C;
      }
      goto L_08A5902C;
    }
L_08A5902C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[17] & 1u);
        goto L_08A59044;
    }
    goto L_08A59038;
L_08A59038:
    aot_gpr[31] = (0x08A59040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x08A59040u) goto L_08A59040;
    return;
L_08A59040:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    goto L_08A59044;
L_08A59044:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5908C;
      }
      goto L_08A5904C;
    }
L_08A5904C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59084;
      }
      goto L_08A59060;
    }
L_08A59060:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A5907Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5907Cu) goto L_08A5907C;
    return;
L_08A5907C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5908C;
      }
      goto L_08A59084;
    }
L_08A59084:
    aot_gpr[31] = (0x08A5908Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A5908Cu) goto L_08A5908C;
    return;
L_08A5908C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A59094;
L_08A59094:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A590A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A590FC;
      }
      goto L_08A590B0;
    }
L_08A590B0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25760));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A590FC;
      }
      goto L_08A590C0;
    }
L_08A590C0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A590F4;
      }
      goto L_08A590D4;
    }
L_08A590D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A590ECu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A590ECu) goto L_08A590EC;
    return;
L_08A590EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A590FC;
      }
      goto L_08A590F4;
    }
L_08A590F4:
    aot_gpr[31] = (0x08A590FCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A590FCu) goto L_08A590FC;
    return;
L_08A590FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59108:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59110:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59180;
      }
      goto L_08A59120;
    }
L_08A59120:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4608));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A5913C;
      }
      goto L_08A59130;
    }
L_08A59130:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25760));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A5913C;
L_08A5913C:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A59180;
      }
      goto L_08A59148;
    }
L_08A59148:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59178;
      }
      goto L_08A59158;
    }
L_08A59158:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A59170u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59170u) goto L_08A59170;
    return;
L_08A59170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59180;
      }
      goto L_08A59178;
    }
L_08A59178:
    aot_gpr[31] = (0x08A59180u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A59180u) goto L_08A59180;
    return;
L_08A59180:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5918C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A591E8;
      }
      goto L_08A5919C;
    }
L_08A5919C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25856));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A591E8;
      }
      goto L_08A591AC;
    }
L_08A591AC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A591E0;
      }
      goto L_08A591C0;
    }
L_08A591C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A591D8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A591D8u) goto L_08A591D8;
    return;
L_08A591D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A591E8;
      }
      goto L_08A591E0;
    }
L_08A591E0:
    aot_gpr[31] = (0x08A591E8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A591E8u) goto L_08A591E8;
    return;
L_08A591E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A591F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59264;
      }
      goto L_08A59204;
    }
L_08A59204:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4704));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A59220;
      }
      goto L_08A59214;
    }
L_08A59214:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25856));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A59220;
L_08A59220:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A59264;
      }
      goto L_08A5922C;
    }
L_08A5922C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5925C;
      }
      goto L_08A5923C;
    }
L_08A5923C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A59254u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59254u) goto L_08A59254;
    return;
L_08A59254:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59264;
      }
      goto L_08A5925C;
    }
L_08A5925C:
    aot_gpr[31] = (0x08A59264u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A59264u) goto L_08A59264;
    return;
L_08A59264:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59270:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A592CC;
      }
      goto L_08A59280;
    }
L_08A59280:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(11208));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A592CC;
      }
      goto L_08A59290;
    }
L_08A59290:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A592C4;
      }
      goto L_08A592A4;
    }
L_08A592A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A592BCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A592BCu) goto L_08A592BC;
    return;
L_08A592BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A592CC;
      }
      goto L_08A592C4;
    }
L_08A592C4:
    aot_gpr[31] = (0x08A592CCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A592CCu) goto L_08A592CC;
    return;
L_08A592CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A592D8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A592E0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A592E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A592F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59360;
      }
      goto L_08A59300;
    }
L_08A59300:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4752));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A5931C;
      }
      goto L_08A59310;
    }
L_08A59310:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(11208));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A5931C;
L_08A5931C:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A59360;
      }
      goto L_08A59328;
    }
L_08A59328:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59358;
      }
      goto L_08A59338;
    }
L_08A59338:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A59350u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59350u) goto L_08A59350;
    return;
L_08A59350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59360;
      }
      goto L_08A59358;
    }
L_08A59358:
    aot_gpr[31] = (0x08A59360u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A59360u) goto L_08A59360;
    return;
L_08A59360:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5936C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A59394;
      }
      goto L_08A5937C;
    }
L_08A5937C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25904));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A59394;
      }
      goto L_08A5938C;
    }
L_08A5938C:
    aot_gpr[31] = (0x08A59394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 189u, 0x08962D20u>(ctx, &aot_mem) && ctx.pc == 0x08A59394u) goto L_08A59394;
    return;
L_08A59394:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A593A0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A593A8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 3u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A593B0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A593B8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A593C0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A593C8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A593D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A59454;
      }
      goto L_08A593EC;
    }
L_08A593EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
        goto L_08A59408;
    }
    goto L_08A593F8;
L_08A593F8:
    aot_gpr[31] = (0x08A59400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x08A59400u) goto L_08A59400;
    return;
L_08A59400:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A59408;
L_08A59408:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A59454;
      }
      goto L_08A59414;
    }
L_08A59414:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5944C;
      }
      goto L_08A59428;
    }
L_08A59428:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A59444u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59444u) goto L_08A59444;
    return;
L_08A59444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59454;
      }
      goto L_08A5944C;
    }
L_08A5944C:
    aot_gpr[31] = (0x08A59454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A59454u) goto L_08A59454;
    return;
L_08A59454:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59468:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A594C4;
      }
      goto L_08A59478;
    }
L_08A59478:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25952));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A594C4;
      }
      goto L_08A59488;
    }
L_08A59488:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A594BC;
      }
      goto L_08A5949C;
    }
L_08A5949C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A594B4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A594B4u) goto L_08A594B4;
    return;
L_08A594B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A594C4;
      }
      goto L_08A594BC;
    }
L_08A594BC:
    aot_gpr[31] = (0x08A594C4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A594C4u) goto L_08A594C4;
    return;
L_08A594C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A594D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A59514u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A59514u) goto L_08A59514;
    return;
L_08A59514:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59528:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59530:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(40));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A59550u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59550u) goto L_08A59550;
    return;
L_08A59550:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A59554;
L_08A59554:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5955C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A5957Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5957Cu) goto L_08A5957C;
    return;
L_08A5957C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59588:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A595B0;
      }
      goto L_08A59598;
    }
L_08A59598:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(26064));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A595B0;
      }
      goto L_08A595A8;
    }
L_08A595A8:
    aot_gpr[31] = (0x08A595B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A595B0u) goto L_08A595B0;
    return;
L_08A595B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A595BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5967C;
      }
      goto L_08A595D8;
    }
L_08A595D8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10904));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A59610;
      }
      goto L_08A595F0;
    }
L_08A595F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18744));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
        goto L_08A59610;
    }
    goto L_08A59604;
L_08A59604:
    aot_gpr[31] = (0x08A5960Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x08A5960Cu) goto L_08A5960C;
    return;
L_08A5960C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    goto L_08A59610;
L_08A59610:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A59638;
      }
      goto L_08A59618;
    }
L_08A59618:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18744));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
        goto L_08A59638;
    }
    goto L_08A5962C;
L_08A5962C:
    aot_gpr[31] = (0x08A59634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x08A59634u) goto L_08A59634;
    return;
L_08A59634:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    goto L_08A59638;
L_08A59638:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A59660;
      }
      goto L_08A59640;
    }
L_08A59640:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18744));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (2216u << 16u);
        goto L_08A59660;
    }
    goto L_08A59654;
L_08A59654:
    aot_gpr[31] = (0x08A5965Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x08A5965Cu) goto L_08A5965C;
    return;
L_08A5965C:
    aot_gpr[4] = (2216u << 16u);
    goto L_08A59660;
L_08A59660:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26064));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5967C;
      }
      goto L_08A59674;
    }
L_08A59674:
    aot_gpr[31] = (0x08A5967Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A5967Cu) goto L_08A5967C;
    return;
L_08A5967C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59690:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59698:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A596A0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A596A8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A596B0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A596B8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A596C0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A596C8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A596D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A596F8;
      }
      goto L_08A596E0;
    }
L_08A596E0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(26144));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A596F8;
      }
      goto L_08A596F0;
    }
L_08A596F0:
    aot_gpr[31] = (0x08A596F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 165u, 0x089F4A18u>(ctx, &aot_mem) && ctx.pc == 0x08A596F8u) goto L_08A596F8;
    return;
L_08A596F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59704:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5970C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59714:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5971C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59724:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5972C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59734:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5973C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59744:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5974C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59754:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5975C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59764:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A597FC;
      }
      goto L_08A59780;
    }
L_08A59780:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10984));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A597B8;
      }
      goto L_08A59798;
    }
L_08A59798:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18744));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
        goto L_08A597B8;
    }
    goto L_08A597AC;
L_08A597AC:
    aot_gpr[31] = (0x08A597B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x08A597B4u) goto L_08A597B4;
    return;
L_08A597B4:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    goto L_08A597B8;
L_08A597B8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A597E0;
      }
      goto L_08A597C0;
    }
L_08A597C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18744));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (2216u << 16u);
        goto L_08A597E0;
    }
    goto L_08A597D4;
L_08A597D4:
    aot_gpr[31] = (0x08A597DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x08A597DCu) goto L_08A597DC;
    return;
L_08A597DC:
    aot_gpr[4] = (2216u << 16u);
    goto L_08A597E0;
L_08A597E0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26144));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A597FC;
      }
      goto L_08A597F4;
    }
L_08A597F4:
    aot_gpr[31] = (0x08A597FCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 165u, 0x089F4A18u>(ctx, &aot_mem) && ctx.pc == 0x08A597FCu) goto L_08A597FC;
    return;
L_08A597FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59810:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59818:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59820:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A59868;
      }
      goto L_08A5983C;
    }
L_08A5983C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10320));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A59854u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 204u, 0x089F4CC8u>(ctx, &aot_mem) && ctx.pc == 0x08A59854u) goto L_08A59854;
    return;
L_08A59854:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59868;
      }
      goto L_08A59860;
    }
L_08A59860:
    aot_gpr[31] = (0x08A59868u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 165u, 0x089F4A18u>(ctx, &aot_mem) && ctx.pc == 0x08A59868u) goto L_08A59868;
    return;
L_08A59868:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5987C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59884:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5988C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A598D4;
      }
      goto L_08A598A8;
    }
L_08A598A8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10464));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A598C0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 204u, 0x089F4CC8u>(ctx, &aot_mem) && ctx.pc == 0x08A598C0u) goto L_08A598C0;
    return;
L_08A598C0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A598D4;
      }
      goto L_08A598CC;
    }
L_08A598CC:
    aot_gpr[31] = (0x08A598D4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 165u, 0x089F4A18u>(ctx, &aot_mem) && ctx.pc == 0x08A598D4u) goto L_08A598D4;
    return;
L_08A598D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A598E8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A598F0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A598F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A599B8;
      }
      goto L_08A59914;
    }
L_08A59914:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10608));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A5994C;
      }
      goto L_08A5992C;
    }
L_08A5992C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18744));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
        goto L_08A5994C;
    }
    goto L_08A59940;
L_08A59940:
    aot_gpr[31] = (0x08A59948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x08A59948u) goto L_08A59948;
    return;
L_08A59948:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    goto L_08A5994C;
L_08A5994C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A59974;
      }
      goto L_08A59954;
    }
L_08A59954:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18744));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
        goto L_08A59974;
    }
    goto L_08A59968;
L_08A59968:
    aot_gpr[31] = (0x08A59970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x08A59970u) goto L_08A59970;
    return;
L_08A59970:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    goto L_08A59974;
L_08A59974:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A5999C;
      }
      goto L_08A5997C;
    }
L_08A5997C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18744));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (aot_gpr[17] | 0u);
        goto L_08A5999C;
    }
    goto L_08A59990;
L_08A59990:
    aot_gpr[31] = (0x08A59998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x08A59998u) goto L_08A59998;
    return;
L_08A59998:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A5999C;
L_08A5999C:
    aot_gpr[31] = (0x08A599A4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 204u, 0x089F4CC8u>(ctx, &aot_mem) && ctx.pc == 0x08A599A4u) goto L_08A599A4;
    return;
L_08A599A4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A599B8;
      }
      goto L_08A599B0;
    }
L_08A599B0:
    aot_gpr[31] = (0x08A599B8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 165u, 0x089F4A18u>(ctx, &aot_mem) && ctx.pc == 0x08A599B8u) goto L_08A599B8;
    return;
L_08A599B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A599CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(144));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A599F0u);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A599F0u) goto L_08A599F0;
    return;
L_08A599F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A599FC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59A04:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59A0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A59A54;
      }
      goto L_08A59A28;
    }
L_08A59A28:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10760));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A59A40u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 204u, 0x089F4CC8u>(ctx, &aot_mem) && ctx.pc == 0x08A59A40u) goto L_08A59A40;
    return;
L_08A59A40:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59A54;
      }
      goto L_08A59A4C;
    }
L_08A59A4C:
    aot_gpr[31] = (0x08A59A54u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 165u, 0x089F4A18u>(ctx, &aot_mem) && ctx.pc == 0x08A59A54u) goto L_08A59A54;
    return;
L_08A59A54:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59A68:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59A70:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59A78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A59A88u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 11u, 0x089F5118u>(ctx, &aot_mem) && ctx.pc == 0x08A59A88u) goto L_08A59A88;
    return;
L_08A59A88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59A94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A59B04;
      }
      goto L_08A59AB0;
    }
L_08A59AB0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11016));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A59AE8;
      }
      goto L_08A59AC8;
    }
L_08A59AC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18744));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (aot_gpr[17] | 0u);
        goto L_08A59AE8;
    }
    goto L_08A59ADC;
L_08A59ADC:
    aot_gpr[31] = (0x08A59AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x08A59AE4u) goto L_08A59AE4;
    return;
L_08A59AE4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A59AE8;
L_08A59AE8:
    aot_gpr[31] = (0x08A59AF0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 204u, 0x089F4CC8u>(ctx, &aot_mem) && ctx.pc == 0x08A59AF0u) goto L_08A59AF0;
    return;
L_08A59AF0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59B04;
      }
      goto L_08A59AFC;
    }
L_08A59AFC:
    aot_gpr[31] = (0x08A59B04u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 165u, 0x089F4A18u>(ctx, &aot_mem) && ctx.pc == 0x08A59B04u) goto L_08A59B04;
    return;
L_08A59B04:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59B18:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59B20:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59B28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A59B50;
      }
      goto L_08A59B38;
    }
L_08A59B38:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(26176));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A59B50;
      }
      goto L_08A59B48;
    }
L_08A59B48:
    aot_gpr[31] = (0x08A59B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A59B50u) goto L_08A59B50;
    return;
L_08A59B50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59B5C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59B64:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59B6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A59BA8;
      }
      goto L_08A59B88;
    }
L_08A59B88:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A59B94u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A59B94u) goto L_08A59B94;
    return;
L_08A59B94:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59BA8;
      }
      goto L_08A59BA0;
    }
L_08A59BA0:
    aot_gpr[31] = (0x08A59BA8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A59BA8u) goto L_08A59BA8;
    return;
L_08A59BA8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59BBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A59BD0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A59BD0u) goto L_08A59BD0;
    return;
L_08A59BD0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(668), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(925), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A59BE0;
L_08A59BE0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59BEC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59BF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59BFC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C04:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C08:
    aot_gpr[2] = (0u | 1u);
    goto L_08A59C0C;
L_08A59C0C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C14:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C24:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C50:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C58:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C60:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C68:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C70:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C78:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C80:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C88:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(736)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C90:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26048)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59CA4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59CAC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59CB4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59CBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59CC4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59CCC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59CD4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59CDC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59CE4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59CEC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59CF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59CFC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59D04:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59D0C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59D14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59D1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59D24:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59D2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A59D74;
      }
      goto L_08A59D48;
    }
L_08A59D48:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A59D60u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A59D60u) goto L_08A59D60;
    return;
L_08A59D60:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59D74;
      }
      goto L_08A59D6C;
    }
L_08A59D6C:
    aot_gpr[31] = (0x08A59D74u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A59D74u) goto L_08A59D74;
    return;
L_08A59D74:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59D88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A59DD0;
      }
      goto L_08A59DA4;
    }
L_08A59DA4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A59DBCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A59DBCu) goto L_08A59DBC;
    return;
L_08A59DBC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59DD0;
      }
      goto L_08A59DC8;
    }
L_08A59DC8:
    aot_gpr[31] = (0x08A59DD0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A59DD0u) goto L_08A59DD0;
    return;
L_08A59DD0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59DE4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59DEC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59DF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59DFC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59E04:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59E0C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59E14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59E1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59E24:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59E2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A59E54;
      }
      goto L_08A59E3C;
    }
L_08A59E3C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(26440));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A59E54;
      }
      goto L_08A59E4C;
    }
L_08A59E4C:
    aot_gpr[31] = (0x08A59E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A59E54u) goto L_08A59E54;
    return;
L_08A59E54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59E60:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59E68:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59E70:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59E78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A59ECC;
      }
      goto L_08A59E94;
    }
L_08A59E94:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14128));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A59EACu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 87u, 0x08A46520u>(ctx, &aot_mem) && ctx.pc == 0x08A59EACu) goto L_08A59EAC;
    return;
L_08A59EAC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A59EB8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A59EB8u) goto L_08A59EB8;
    return;
L_08A59EB8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59ECC;
      }
      goto L_08A59EC4;
    }
L_08A59EC4:
    aot_gpr[31] = (0x08A59ECCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A59ECCu) goto L_08A59ECC;
    return;
L_08A59ECC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59EE0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59EE8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59EF0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59EF8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F00:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F08:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F10:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F18:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F20:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F28:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F30:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F38:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F40:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F48:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F50:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F58:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F60:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F68:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F70:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F78:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F80:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F88:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(520)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F90:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(524)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59F98:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59FA0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59FA8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59FB0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59FB8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59FC0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59FC8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59FD0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59FD8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59FE0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59FE8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59FF0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59FF8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0597(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0597_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_597(Runtime &runtime) {
    runtime.register_generated_unit(597u, 0x08A59000u, 4096u, &recomp_unit_0597, &recomp_unit_0597_entry);
    runtime.register_function(0x08A59004u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59010u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5902Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59038u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59040u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59044u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5904Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59060u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5907Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59084u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5908Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59094u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A590A0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A590B0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A590C0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A590D4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A590ECu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A590F4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A590FCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59108u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59110u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59120u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59130u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5913Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59148u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59158u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59170u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59178u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59180u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5918Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5919Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A591ACu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A591C0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A591D8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A591E0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A591E8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A591F4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59204u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59214u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59220u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5922Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5923Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59254u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5925Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59264u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59270u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59280u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59290u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A592A4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A592BCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A592C4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A592CCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A592D8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A592E0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A592E8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A592F0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59300u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59310u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5931Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59328u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59338u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59350u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59358u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59360u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5936Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5937Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5938Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59394u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A593A0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A593A8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A593B0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A593B8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A593C0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A593C8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A593D0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A593ECu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A593F8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59400u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59408u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59414u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59428u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59444u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5944Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59454u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59468u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59478u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59488u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5949Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A594B4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A594BCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A594C4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A594D0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59514u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59528u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59530u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59550u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59554u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5955Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5957Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59588u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59598u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A595A8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A595B0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A595BCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A595D8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A595F0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59604u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5960Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59610u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59618u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5962Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59634u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59638u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59640u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59654u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5965Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59660u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59674u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5967Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59690u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59698u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A596A0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A596A8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A596B0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A596B8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A596C0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A596C8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A596D0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A596E0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A596F0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A596F8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59704u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5970Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59714u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5971Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59724u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5972Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59734u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5973Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59744u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5974Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59754u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5975Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59764u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59780u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59798u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A597ACu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A597B4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A597B8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A597C0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A597D4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A597DCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A597E0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A597F4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A597FCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59810u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59818u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59820u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5983Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59854u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59860u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59868u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5987Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59884u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5988Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A598A8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A598C0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A598CCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A598D4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A598E8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A598F0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A598F8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59914u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5992Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59940u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59948u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5994Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59954u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59968u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59970u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59974u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5997Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59990u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59998u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A5999Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A599A4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A599B0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A599B8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A599CCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A599F0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A599FCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59A04u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59A0Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59A28u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59A40u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59A4Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59A54u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59A68u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59A70u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59A78u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59A88u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59A94u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59AB0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59AC8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59ADCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59AE4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59AE8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59AF0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59AFCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59B04u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59B18u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59B20u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59B28u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59B38u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59B48u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59B50u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59B5Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59B64u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59B6Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59B88u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59B94u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59BA0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59BA8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59BBCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59BD0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59BE0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59BECu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59BF4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59BFCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C04u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C08u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C0Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C14u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C1Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C24u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C2Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C50u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C58u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C60u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C68u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C70u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C78u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C80u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C88u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59C90u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59CA4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59CACu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59CB4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59CBCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59CC4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59CCCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59CD4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59CDCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59CE4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59CECu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59CF4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59CFCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59D04u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59D0Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59D14u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59D1Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59D24u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59D2Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59D48u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59D60u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59D6Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59D74u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59D88u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59DA4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59DBCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59DC8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59DD0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59DE4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59DECu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59DF4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59DFCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59E04u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59E0Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59E14u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59E1Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59E24u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59E2Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59E3Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59E4Cu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59E54u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59E60u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59E68u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59E70u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59E78u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59E94u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59EACu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59EB8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59EC4u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59ECCu, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59EE0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59EE8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59EF0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59EF8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F00u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F08u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F10u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F18u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F20u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F28u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F30u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F38u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F40u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F48u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F50u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F58u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F60u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F68u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F70u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F78u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F80u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F88u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F90u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59F98u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59FA0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59FA8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59FB0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59FB8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59FC0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59FC8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59FD0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59FD8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59FE0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59FE8u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59FF0u, &recomp_unit_0597, "recomp_unit_0597");
    runtime.register_function(0x08A59FF8u, &recomp_unit_0597, "recomp_unit_0597");
}
} // namespace psprecomp
