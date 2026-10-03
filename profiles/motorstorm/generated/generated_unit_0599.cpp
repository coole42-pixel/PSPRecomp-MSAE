#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0599[1023] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 8, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0,
    18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0,
    34, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0,
    48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0,
    64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 73, 74, 75, 0, 76, 0, 0, 0, 77, 0, 78, 79,
    80, 81, 82, 0, 83, 0, 84, 0, 85, 0, 86, 87, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0,
    97, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 108, 0,
    109, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0,
    0, 0, 125, 0, 0, 126, 0, 127, 128, 0, 0, 129, 0, 130, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 135, 136, 0,
    137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0,
    149, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 155, 0, 156, 0, 157, 0, 0,
    0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 163, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0, 168,
    0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 176,
    0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 186, 0, 0,
    0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 191, 0, 0, 192, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 203, 204, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 208, 209, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 221, 222, 0, 0,
    0, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 230, 0, 0, 0, 0,
    0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 241,
};
void recomp_unit_0599_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A5B004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0599[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A5B004;
    case 2u: goto L_08A5B00C;
    case 3u: goto L_08A5B014;
    case 4u: goto L_08A5B01C;
    case 5u: goto L_08A5B024;
    case 6u: goto L_08A5B02C;
    case 7u: goto L_08A5B034;
    case 8u: goto L_08A5B038;
    case 9u: goto L_08A5B03C;
    case 10u: goto L_08A5B044;
    case 11u: goto L_08A5B04C;
    case 12u: goto L_08A5B054;
    case 13u: goto L_08A5B05C;
    case 14u: goto L_08A5B064;
    case 15u: goto L_08A5B06C;
    case 16u: goto L_08A5B074;
    case 17u: goto L_08A5B07C;
    case 18u: goto L_08A5B084;
    case 19u: goto L_08A5B08C;
    case 20u: goto L_08A5B094;
    case 21u: goto L_08A5B09C;
    case 22u: goto L_08A5B0A4;
    case 23u: goto L_08A5B0AC;
    case 24u: goto L_08A5B0B4;
    case 25u: goto L_08A5B0BC;
    case 26u: goto L_08A5B0C4;
    case 27u: goto L_08A5B0CC;
    case 28u: goto L_08A5B0D4;
    case 29u: goto L_08A5B0DC;
    case 30u: goto L_08A5B0E4;
    case 31u: goto L_08A5B0EC;
    case 32u: goto L_08A5B0F4;
    case 33u: goto L_08A5B0FC;
    case 34u: goto L_08A5B104;
    case 35u: goto L_08A5B10C;
    case 36u: goto L_08A5B114;
    case 37u: goto L_08A5B124;
    case 38u: goto L_08A5B134;
    case 39u: goto L_08A5B13C;
    case 40u: goto L_08A5B144;
    case 41u: goto L_08A5B14C;
    case 42u: goto L_08A5B154;
    case 43u: goto L_08A5B15C;
    case 44u: goto L_08A5B164;
    case 45u: goto L_08A5B16C;
    case 46u: goto L_08A5B174;
    case 47u: goto L_08A5B17C;
    case 48u: goto L_08A5B184;
    case 49u: goto L_08A5B18C;
    case 50u: goto L_08A5B194;
    case 51u: goto L_08A5B19C;
    case 52u: goto L_08A5B1A4;
    case 53u: goto L_08A5B1AC;
    case 54u: goto L_08A5B1B4;
    case 55u: goto L_08A5B1BC;
    case 56u: goto L_08A5B1C4;
    case 57u: goto L_08A5B1CC;
    case 58u: goto L_08A5B1D4;
    case 59u: goto L_08A5B1DC;
    case 60u: goto L_08A5B1E4;
    case 61u: goto L_08A5B1EC;
    case 62u: goto L_08A5B1F4;
    case 63u: goto L_08A5B1FC;
    case 64u: goto L_08A5B204;
    case 65u: goto L_08A5B20C;
    case 66u: goto L_08A5B214;
    case 67u: goto L_08A5B21C;
    case 68u: goto L_08A5B224;
    case 69u: goto L_08A5B22C;
    case 70u: goto L_08A5B234;
    case 71u: goto L_08A5B23C;
    case 72u: goto L_08A5B244;
    case 73u: goto L_08A5B254;
    case 74u: goto L_08A5B258;
    case 75u: goto L_08A5B25C;
    case 76u: goto L_08A5B264;
    case 77u: goto L_08A5B274;
    case 78u: goto L_08A5B27C;
    case 79u: goto L_08A5B280;
    case 80u: goto L_08A5B284;
    case 81u: goto L_08A5B288;
    case 82u: goto L_08A5B28C;
    case 83u: goto L_08A5B294;
    case 84u: goto L_08A5B29C;
    case 85u: goto L_08A5B2A4;
    case 86u: goto L_08A5B2AC;
    case 87u: goto L_08A5B2B0;
    case 88u: goto L_08A5B2B4;
    case 89u: goto L_08A5B2BC;
    case 90u: goto L_08A5B2C4;
    case 91u: goto L_08A5B2CC;
    case 92u: goto L_08A5B2D4;
    case 93u: goto L_08A5B2E4;
    case 94u: goto L_08A5B2EC;
    case 95u: goto L_08A5B2F4;
    case 96u: goto L_08A5B2FC;
    case 97u: goto L_08A5B304;
    case 98u: goto L_08A5B310;
    case 99u: goto L_08A5B320;
    case 100u: goto L_08A5B328;
    case 101u: goto L_08A5B3A4;
    case 102u: goto L_08A5B508;
    case 103u: goto L_08A5B634;
    case 104u: goto L_08A5B638;
    case 105u: goto L_08A5B644;
    case 106u: goto L_08A5B670;
    case 107u: goto L_08A5B678;
    case 108u: goto L_08A5B67C;
    case 109u: goto L_08A5B684;
    case 110u: goto L_08A5B68C;
    case 111u: goto L_08A5B698;
    case 112u: goto L_08A5B6B0;
    case 113u: goto L_08A5B6C4;
    case 114u: goto L_08A5B6D4;
    case 115u: goto L_08A5B6D8;
    case 116u: goto L_08A5B6F0;
    case 117u: goto L_08A5B704;
    case 118u: goto L_08A5B71C;
    case 119u: goto L_08A5B734;
    case 120u: goto L_08A5B748;
    case 121u: goto L_08A5B750;
    case 122u: goto L_08A5B760;
    case 123u: goto L_08A5B76C;
    case 124u: goto L_08A5B77C;
    case 125u: goto L_08A5B78C;
    case 126u: goto L_08A5B798;
    case 127u: goto L_08A5B7A0;
    case 128u: goto L_08A5B7A4;
    case 129u: goto L_08A5B7B0;
    case 130u: goto L_08A5B7B8;
    case 131u: goto L_08A5B7BC;
    case 132u: goto L_08A5B7C8;
    case 133u: goto L_08A5B7D8;
    case 134u: goto L_08A5B7EC;
    case 135u: goto L_08A5B7F8;
    case 136u: goto L_08A5B7FC;
    case 137u: goto L_08A5B804;
    case 138u: goto L_08A5B80C;
    case 139u: goto L_08A5B814;
    case 140u: goto L_08A5B81C;
    case 141u: goto L_08A5B824;
    case 142u: goto L_08A5B834;
    case 143u: goto L_08A5B83C;
    case 144u: goto L_08A5B844;
    case 145u: goto L_08A5B858;
    case 146u: goto L_08A5B864;
    case 147u: goto L_08A5B86C;
    case 148u: goto L_08A5B874;
    case 149u: goto L_08A5B884;
    case 150u: goto L_08A5B894;
    case 151u: goto L_08A5B8A8;
    case 152u: goto L_08A5B8B8;
    case 153u: goto L_08A5B8C8;
    case 154u: goto L_08A5B8DC;
    case 155u: goto L_08A5B8E8;
    case 156u: goto L_08A5B8F0;
    case 157u: goto L_08A5B8F8;
    case 158u: goto L_08A5B90C;
    case 159u: goto L_08A5B91C;
    case 160u: goto L_08A5B928;
    case 161u: goto L_08A5B93C;
    case 162u: goto L_08A5B948;
    case 163u: goto L_08A5B94C;
    case 164u: goto L_08A5B950;
    case 165u: goto L_08A5B95C;
    case 166u: goto L_08A5B970;
    case 167u: goto L_08A5B978;
    case 168u: goto L_08A5B980;
    case 169u: goto L_08A5B988;
    case 170u: goto L_08A5B998;
    case 171u: goto L_08A5B9B8;
    case 172u: goto L_08A5B9C8;
    case 173u: goto L_08A5B9D0;
    case 174u: goto L_08A5B9E4;
    case 175u: goto L_08A5B9FC;
    case 176u: goto L_08A5BA00;
    case 177u: goto L_08A5BA10;
    case 178u: goto L_08A5BA1C;
    case 179u: goto L_08A5BA40;
    case 180u: goto L_08A5BA48;
    case 181u: goto L_08A5BA5C;
    case 182u: goto L_08A5BA80;
    case 183u: goto L_08A5BAC8;
    case 184u: goto L_08A5BADC;
    case 185u: goto L_08A5BAE4;
    case 186u: goto L_08A5BAF8;
    case 187u: goto L_08A5BB08;
    case 188u: goto L_08A5BB18;
    case 189u: goto L_08A5BB58;
    case 190u: goto L_08A5BB64;
    case 191u: goto L_08A5BB68;
    case 192u: goto L_08A5BB74;
    case 193u: goto L_08A5BB80;
    case 194u: goto L_08A5BB9C;
    case 195u: goto L_08A5BBAC;
    case 196u: goto L_08A5BBC0;
    case 197u: goto L_08A5BBC8;
    case 198u: goto L_08A5BBE4;
    case 199u: goto L_08A5BC04;
    case 200u: goto L_08A5BC0C;
    case 201u: goto L_08A5BC2C;
    case 202u: goto L_08A5BC7C;
    case 203u: goto L_08A5BC88;
    case 204u: goto L_08A5BC8C;
    case 205u: goto L_08A5BCA4;
    case 206u: goto L_08A5BCAC;
    case 207u: goto L_08A5BCC0;
    case 208u: goto L_08A5BCC8;
    case 209u: goto L_08A5BCCC;
    case 210u: goto L_08A5BCE0;
    case 211u: goto L_08A5BCF0;
    case 212u: goto L_08A5BD04;
    case 213u: goto L_08A5BD50;
    case 214u: goto L_08A5BD58;
    case 215u: goto L_08A5BDB0;
    case 216u: goto L_08A5BDBC;
    case 217u: goto L_08A5BDC4;
    case 218u: goto L_08A5BDCC;
    case 219u: goto L_08A5BDDC;
    case 220u: goto L_08A5BDEC;
    case 221u: goto L_08A5BDF4;
    case 222u: goto L_08A5BDF8;
    case 223u: goto L_08A5BE0C;
    case 224u: goto L_08A5BE14;
    case 225u: goto L_08A5BE1C;
    case 226u: goto L_08A5BE24;
    case 227u: goto L_08A5BE34;
    case 228u: goto L_08A5BE64;
    case 229u: goto L_08A5BE6C;
    case 230u: goto L_08A5BE70;
    case 231u: goto L_08A5BE90;
    case 232u: goto L_08A5BED8;
    case 233u: goto L_08A5BEE8;
    case 234u: goto L_08A5BEF8;
    case 235u: goto L_08A5BF04;
    case 236u: goto L_08A5BFC0;
    case 237u: goto L_08A5BFCC;
    case 238u: goto L_08A5BFD0;
    case 239u: goto L_08A5BFE4;
    case 240u: goto L_08A5BFF4;
    case 241u: goto L_08A5BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A5B004:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B00C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B014:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B01C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B024:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B02C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B034:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B038:
    // nop
    goto L_08A5B03C;
L_08A5B03C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B044:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B04C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B054:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B05C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B064:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B06C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B074:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B07C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B084:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B08C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B094:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B09C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B0A4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B0AC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B0B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B0BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B0C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B0CC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B0D4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B0DC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B0E4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B0EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B0F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B0FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B104:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B10C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B114:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B124:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B134:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B13C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B144:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B14C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B154:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B15C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B164:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B16C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B174:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B17C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B184:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B18C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B194:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B19C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B1A4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B1AC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B1B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B1BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B1C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B1CC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B1D4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B1DC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B1E4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B1EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B1F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B1FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B204:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B20C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B214:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B21C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B224:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B22C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B234:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B23C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B244:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B254:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B258:
    // nop
    goto L_08A5B25C;
L_08A5B25C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B264:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B274:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B27C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B280:
    // nop
    goto L_08A5B284;
L_08A5B284:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B288:
    // nop
    goto L_08A5B28C;
L_08A5B28C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B294:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B29C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B2A4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B2AC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B2B0:
    // nop
    goto L_08A5B2B4;
L_08A5B2B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B2BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B2C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B2CC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B2D4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B2E4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B2EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B2F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B2FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B304:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B310:
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(0u + static_cast<std::uint32_t>(0))))));
    (void)(aot_gpr[2] << (0u & 31u));
    // nop
    ctx.pc = 0x0296E430u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A5B320:
    // nop
    // nop
    goto L_08A5B328;
L_08A5B328:
    rt.unsupported(0x08A5B32Cu, 0x40010011u, "unknown not lowered yet"); return;
    ctx.pc = 0x0296D9C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A5B3A4:
    rt.unsupported(0x08A5B3A4u, 0x40010011u, "unknown not lowered yet"); return;
L_08A5B508:
    rt.unsupported(0x08A5B50Cu, 0x40010011u, "unknown not lowered yet"); return;
    ctx.pc = 0x0296E050u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A5B634:
    // nop
    goto L_08A5B638;
L_08A5B638:
    (void)(aot_gpr[1] << 0u);
    if (aot_gpr[26] == aot_gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0620_entry, 620u, 65u, 0x08A70374u>(ctx, &aot_mem); return;
    }
    goto L_08A5B644;
L_08A5B644:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08A5B660u, 0x08A5B320u, "control flow in delay slot"); return;
L_08A5B670:
    if (aot_gpr[19] == aot_gpr[5]) {
    rt.unsupported(0x08A5B674u, 0x00006374u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0624_entry, 624u, 29u, 0x08A74440u>(ctx, &aot_mem); return;
    }
    goto L_08A5B678;
L_08A5B678:
    rt.unsupported(0x08A5B678u, 0x00000005u, "special? not lowered yet"); return;
L_08A5B67C:
    if (aot_gpr[11] != aot_gpr[5]) {
    rt.unsupported(0x08A5B680u, 0x7355646Du, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0624_entry, 624u, 30u, 0x08A7444Cu>(ctx, &aot_mem); return;
    }
    goto L_08A5B684;
L_08A5B684:
    aot_gpr[14] = (0u | 0u);
    rt.unsupported(0x08A5B688u, 0x00000005u, "special? not lowered yet"); return;
L_08A5B68C:
    rt.unsupported(0x08A5B68Cu, 0x44656373u, "cop1? not lowered yet"); return;
L_08A5B698:
    rt.unsupported(0x08A5B698u, 0x69466F49u, "unknown not lowered yet"); return;
L_08A5B6B0:
    rt.unsupported(0x08A5B6B0u, 0x6E72654Bu, "vfpu3 not lowered yet"); return;
L_08A5B6C4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5B6C8u, 0x63657845u, "vfpu0 not lowered yet"); return;
L_08A5B6D4:
    rt.unsupported(0x08A5B6D4u, 0x00000005u, "special? not lowered yet"); return;
L_08A5B6D8:
    rt.unsupported(0x08A5B6D8u, 0x75646F4Du, "unknown not lowered yet"); return;
L_08A5B6F0:
    rt.unsupported(0x08A5B6F0u, 0x69647453u, "unknown not lowered yet"); return;
L_08A5B704:
    rt.unsupported(0x08A5B704u, 0x4D737953u, "unknown not lowered yet"); return;
L_08A5B71C:
    ctx.execute_vfpu_vscl_ct<84u, 104u, 114u, 1u>();
    rt.unsupported(0x08A5B720u, 0x614D6461u, "vfpu0 not lowered yet"); return;
L_08A5B734:
    ctx.execute_vfpu_vcmp_ct<116u, 105u, 1u, 5u>();
    rt.unsupported(0x08A5B738u, 0x726F4673u, "unknown not lowered yet"); return;
L_08A5B748:
    if (aot_gpr[27] == aot_gpr[5]) {
    ctx.execute_vfpu_vscl_ct<117u, 115u, 112u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0624_entry, 624u, 35u, 0x08A74518u>(ctx, &aot_mem); return;
    }
    goto L_08A5B750;
L_08A5B750:
    ctx.execute_vfpu_compare3(110u, 100u, 70u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 85u, 115u, 1u>();
    rt.unsupported(0x08A5B758u, 0x00000072u, "special? not lowered yet"); return;
L_08A5B760:
    rt.unsupported(0x08A5B760u, 0x43656373u, "unknown not lowered yet"); return;
L_08A5B76C:
    rt.unsupported(0x08A5B76Cu, 0x44656373u, "cop1? not lowered yet"); return;
L_08A5B77C:
    rt.unsupported(0x08A5B77Cu, 0x47656373u, "cop1? not lowered yet"); return;
L_08A5B78C:
    rt.unsupported(0x08A5B78Cu, 0x4D656373u, "unknown not lowered yet"); return;
L_08A5B798:
    if (aot_gpr[3] == aot_gpr[5]) {
    rt.unsupported(0x08A5B79Cu, 0x00666D73u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0624_entry, 624u, 37u, 0x08A74568u>(ctx, &aot_mem); return;
    }
    goto L_08A5B7A0;
L_08A5B7A0:
    rt.unsupported(0x08A5B7A0u, 0x00000005u, "special? not lowered yet"); return;
L_08A5B7A4:
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<115u>());
    rt.unsupported(0x08A5B7A8u, 0x00707474u, "special? not lowered yet"); return;
L_08A5B7B0:
    if (aot_gpr[27] == aot_gpr[5]) {
    rt.unsupported(0x08A5B7B4u, 0x00006C73u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0624_entry, 624u, 40u, 0x08A74580u>(ctx, &aot_mem); return;
    }
    goto L_08A5B7B8;
L_08A5B7B8:
    rt.unsupported(0x08A5B7B8u, 0x00000005u, "special? not lowered yet"); return;
L_08A5B7BC:
    rt.unsupported(0x08A5B7BCu, 0x4E656373u, "unknown not lowered yet"); return;
L_08A5B7C8:
    rt.unsupported(0x08A5B7C8u, 0x4E656373u, "unknown not lowered yet"); return;
L_08A5B7D8:
    rt.unsupported(0x08A5B7D8u, 0x4E656373u, "unknown not lowered yet"); return;
L_08A5B7EC:
    rt.unsupported(0x08A5B7ECu, 0x4F656373u, "unknown not lowered yet"); return;
L_08A5B7F8:
    rt.unsupported(0x08A5B7F8u, 0x00000005u, "special? not lowered yet"); return;
L_08A5B7FC:
    if (aot_gpr[3] == aot_gpr[5]) {
    rt.unsupported(0x08A5B800u, 0x704E7073u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0624_entry, 624u, 43u, 0x08A745CCu>(ctx, &aot_mem); return;
    }
    goto L_08A5B804;
L_08A5B804:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5B808u, 0x72657375u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0628_entry, 628u, 8u, 0x08A78118u>(ctx, &aot_mem); return;
    }
    goto L_08A5B80C;
L_08A5B80C:
    // nop
    rt.unsupported(0x08A5B810u, 0x00000005u, "special? not lowered yet"); return;
L_08A5B814:
    if (aot_gpr[11] != aot_gpr[5]) {
    rt.unsupported(0x08A5B818u, 0x696C6974u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0624_entry, 624u, 45u, 0x08A745E4u>(ctx, &aot_mem); return;
    }
    goto L_08A5B81C;
L_08A5B81C:
    rt.unsupported(0x08A5B81Cu, 0x00007974u, "special? not lowered yet"); return;
L_08A5B824:
    rt.unsupported(0x08A5B824u, 0x41656373u, "unknown not lowered yet"); return;
L_08A5B834:
    if (aot_gpr[27] == aot_gpr[5]) {
    ctx.execute_vfpu_compare3(97u, 115u, 67u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0624_entry, 624u, 47u, 0x08A74604u>(ctx, &aot_mem); return;
    }
    goto L_08A5B83C;
L_08A5B83C:
    rt.unsupported(0x08A5B83Cu, 0x00006572u, "special? not lowered yet"); return;
L_08A5B844:
    rt.unsupported(0x08A5B844u, 0x41656373u, "unknown not lowered yet"); return;
L_08A5B858:
    rt.unsupported(0x08A5B858u, 0x4D656373u, "unknown not lowered yet"); return;
L_08A5B864:
    if (aot_gpr[3] == aot_gpr[5]) {
    rt.unsupported(0x08A5B868u, 0x7265776Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0624_entry, 624u, 48u, 0x08A74634u>(ctx, &aot_mem); return;
    }
    goto L_08A5B86C;
L_08A5B86C:
    // nop
    rt.unsupported(0x08A5B870u, 0x00000005u, "special? not lowered yet"); return;
L_08A5B874:
    rt.unsupported(0x08A5B874u, 0x49656373u, "cop2/vfpu not lowered yet"); return;
L_08A5B884:
    rt.unsupported(0x08A5B884u, 0x4E656373u, "unknown not lowered yet"); return;
L_08A5B894:
    rt.unsupported(0x08A5B894u, 0x4E656373u, "unknown not lowered yet"); return;
L_08A5B8A8:
    rt.unsupported(0x08A5B8A8u, 0x4E656373u, "unknown not lowered yet"); return;
L_08A5B8B8:
    rt.unsupported(0x08A5B8B8u, 0x4E656373u, "unknown not lowered yet"); return;
L_08A5B8C8:
    rt.unsupported(0x08A5B8C8u, 0x4E656373u, "unknown not lowered yet"); return;
L_08A5B8DC:
    rt.unsupported(0x08A5B8DCu, 0x4E656373u, "unknown not lowered yet"); return;
L_08A5B8E8:
    if (aot_gpr[27] != aot_gpr[5]) {
    rt.unsupported(0x08A5B8ECu, 0x446E616Cu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0624_entry, 624u, 55u, 0x08A746B8u>(ctx, &aot_mem); return;
    }
    goto L_08A5B8F0;
L_08A5B8F0:
    rt.unsupported(0x08A5B8F0u, 0x00007672u, "special? not lowered yet"); return;
L_08A5B8F8:
    ctx.execute_vfpu_vscl_ct<73u, 110u, 116u, 1u>();
    rt.unsupported(0x08A5B8FCu, 0x70757272u, "unknown not lowered yet"); return;
L_08A5B90C:
    rt.unsupported(0x08A5B90Cu, 0xD632ACDBu, "vfpu not lowered yet"); return;
L_08A5B91C:
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 115u, 2u);
      ctx.read_vfpu_matrix(vfpu_t, 29u, 2u);
      for (std::uint32_t a = 0; a < 2u; ++a) {
        for (std::uint32_t b = 0; b < 2u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 2u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 39u, 2u);
      ctx.eat_vfpu_prefixes(); }
    rt.unsupported(0x08A5B924u, 0x08804000u, "control flow in delay slot"); return;
L_08A5B928:
    rt.unsupported(0x08A5B92Cu, 0x08A5BED8u, "control flow in delay slot"); return;
L_08A5B93C:
    ctx.set_vfpu_scalar_bits_ct<36u>(PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-23880)));
    rt.unsupported(0x08A5B940u, 0xD61E6961u, "vfpu not lowered yet"); return;
L_08A5B948:
    rt.unsupported(0x08A5B94Cu, 0x0BF0A3AEu, "control flow in delay slot"); return;
L_08A5B94C:
    aot_gpr[25] = (static_cast<std::int32_t>(0u) < 10409 ? 1u : 0u);
    ctx.pc = 0x0FC28EB8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A5B950:
    aot_gpr[25] = (static_cast<std::int32_t>(0u) < 10409 ? 1u : 0u);
    aot_gpr[15] = (aot_gpr[13] ^ 14758u);
    aot_gpr[22] = (rt.memory().aot_load_word_left(aot_gpr[9] + static_cast<std::uint32_t>(2384), aot_gpr[22]));
    goto L_08A5B95C;
L_08A5B95C:
    rt.unsupported(0x08A5B95Cu, 0x224C5F44u, "unknown not lowered yet"); return;
L_08A5B970:
    rt.unsupported(0x08A5B974u, 0x162E6FD5u, "control flow in delay slot"); return;
L_08A5B978:
    rt.unsupported(0x08A5B97Cu, 0x1A33F9AEu, "control flow in delay slot"); return;
L_08A5B980:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[30]) <= 0;
    aot_gpr[7] = (aot_gpr[31] < static_cast<std::uint32_t>(8167) ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0622_entry, 622u, 108u, 0x08A72DD0u>(ctx, &aot_mem); return;
      }
      goto L_08A5B988;
    }
L_08A5B988:
    rt.unsupported(0x08A5B988u, 0x410B34AAu, "unknown not lowered yet"); return;
L_08A5B998:
    aot_gpr[27] = (rt.memory().aot_load_word_left(aot_gpr[27] + static_cast<std::uint32_t>(8719), aot_gpr[27]));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-31510)));
    rt.memory().aot_store_word_left(aot_gpr[15] + static_cast<std::uint32_t>(26297), aot_gpr[13]);
    rt.unsupported(0x08A5B9A4u, 0xB75D5B0Au, "unknown not lowered yet"); return;
L_08A5B9B8:
    aot_gpr[30] = (aot_gpr[7] + static_cast<std::uint32_t>(-28255));
    aot_gpr[15] = (static_cast<std::int32_t>(aot_gpr[31]) < -8413 ? 1u : 0u);
    if (static_cast<std::int32_t>(aot_gpr[11]) <= 0) {
    aot_gpr[26] = (rt.memory().aot_load_word_left(aot_gpr[21] + static_cast<std::uint32_t>(-8879), aot_gpr[26]));
        (void)rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 221u, 0x08A41E30u>(ctx, &aot_mem); return;
    }
    goto L_08A5B9C8;
L_08A5B9C8:
    rt.unsupported(0x08A5B9C8u, 0xB3EDD0ECu, "unknown not lowered yet"); return;
L_08A5B9D0:
    rt.unsupported(0x08A5B9D0u, 0x20B317A0u, "unknown not lowered yet"); return;
L_08A5B9E4:
    ctx.execute_vfpu_compare3(27u, 116u, 18u, 1u, 7u);
    rt.unsupported(0x08A5B9E8u, 0x7F27BB5Eu, "special3? not lowered yet"); return;
L_08A5B9FC:
    aot_gpr[10] = (aot_gpr[21] | 28305u);
    goto L_08A5BA00;
L_08A5BA00:
    rt.unsupported(0x08A5BA00u, 0x04B7766Eu, "regimm? not lowered yet"); return;
L_08A5BA10:
    rt.unsupported(0x08A5BA10u, 0x07EC321Au, "regimm? not lowered yet"); return;
L_08A5BA1C:
    aot_gpr[15] = (41048u << 16u);
    aot_gpr[15] = (18511u << 16u);
    rt.unsupported(0x08A5BA24u, 0x44E07129u, "cop1? not lowered yet"); return;
L_08A5BA40:
    if (static_cast<std::int32_t>(aot_gpr[9]) > 0) {
    rt.unsupported(0x08A5BA44u, 0x61EB33F5u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 89u, 0x08A3D660u>(ctx, &aot_mem); return;
    }
    goto L_08A5BA48;
L_08A5BA48:
    rt.unsupported(0x08A5BA48u, 0x6A8C3CD5u, "unknown not lowered yet"); return;
L_08A5BA5C:
    aot_gpr[4] = (aot_gpr[12] < aot_gpr[27] ? 1u : 0u);
    rt.unsupported(0x08A5BA60u, 0x07F58C24u, "regimm? not lowered yet"); return;
L_08A5BA80:
    rt.unsupported(0x08A5BA80u, 0x68A46B95u, "unknown not lowered yet"); return;
L_08A5BAC8:
    aot_gpr[5] = (aot_gpr[10] - aot_gpr[22]);
    aot_gpr[19] = (aot_gpr[10] < static_cast<std::uint32_t>(-3218) ? 1u : 0u);
    rt.unsupported(0x08A5BAD0u, 0x43196845u, "unknown not lowered yet"); return;
L_08A5BADC:
    if (static_cast<std::int32_t>(aot_gpr[22]) > 0) {
    ctx.execute_vfpu_compare3(83u, 104u, 68u, 1u, 7u);
        (void)rt.invoke_chained_direct<&recomp_unit_0606_entry, 606u, 181u, 0x08A62C34u>(ctx, &aot_mem); return;
    }
    goto L_08A5BAE4;
L_08A5BAE4:
    aot_gpr[29] = (PSPRECOMP_AOT_LOAD16(aot_gpr[15] + static_cast<std::uint32_t>(3117)));
    rt.unsupported(0x08A5BAE8u, 0xB011922Fu, "unknown not lowered yet"); return;
L_08A5BAF8:
    rt.unsupported(0x08A5BAF8u, 0x0251B134u, "special? not lowered yet"); return;
L_08A5BB08:
    aot_gpr[23] = (aot_gpr[5] | 33603u);
    rt.unsupported(0x08A5BB0Cu, 0x4DB1E739u, "unknown not lowered yet"); return;
L_08A5BB18:
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(-9445))))));
    aot_gpr[20] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(-9248), aot_gpr[20]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[15] + static_cast<std::uint32_t>(3637)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD16(aot_gpr[28] + static_cast<std::uint32_t>(-19652)));
    PSPRECOMP_AOT_STORE16(aot_gpr[14] + static_cast<std::uint32_t>(9222), static_cast<std::uint16_t>(aot_gpr[26]));
    rt.memory().aot_store_word_left(aot_gpr[24] + static_cast<std::uint32_t>(16041), aot_gpr[8]);
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08A5BB34u, 0xCDC3AA41u, "unknown not lowered yet"); return;
L_08A5BB58:
    rt.unsupported(0x08A5BB5Cu, 0x219EF5CCu, "unknown not lowered yet"); return;
    ctx.pc = 0x03662250u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A5BB64:
    aot_fpr[27] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-5170)));
    goto L_08A5BB68;
L_08A5BB68:
    aot_gpr[31] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[12]) >> 11u));
    rt.unsupported(0x08A5BB70u, 0x174D0D24u, "control flow in delay slot"); return;
L_08A5BB74:
    rt.unsupported(0x08A5BB74u, 0x4E851B10u, "unknown not lowered yet"); return;
L_08A5BB80:
    rt.unsupported(0x08A5BB80u, 0x66C64821u, "vfpu1 not lowered yet"); return;
L_08A5BB9C:
    aot_gpr[28] = (8048u << 16u);
    rt.unsupported(0x08A5BBA0u, 0x4EC1F667u, "unknown not lowered yet"); return;
L_08A5BBAC:
    aot_gpr[1] = (aot_gpr[31] | 57972u);
    rt.unsupported(0x08A5BBB0u, 0x633B5F71u, "vfpu0 not lowered yet"); return;
L_08A5BBC0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) <= 0;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(-13342)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 96u, 0x08A537C0u>(ctx, &aot_mem); return;
      }
      goto L_08A5BBC8;
    }
L_08A5BBC8:
    rt.unsupported(0x08A5BBC8u, 0x76D1363Bu, "unknown not lowered yet"); return;
L_08A5BBE4:
    rt.unsupported(0x08A5BBE8u, 0x4BC9BDE0u, "cop2/vfpu not lowered yet"); return;
    ctx.pc = 0x0E945394u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A5BC04:
    rt.unsupported(0x08A5BC08u, 0x167AFD9Eu, "control flow in delay slot"); return;
L_08A5BC0C:
    rt.unsupported(0x08A5BC0Cu, 0x211A057Cu, "unknown not lowered yet"); return;
L_08A5BC2C:
    rt.unsupported(0x08A5BC2Cu, 0x611E9E11u, "vfpu0 not lowered yet"); return;
L_08A5BC7C:
    rt.unsupported(0x08A5BC7Cu, 0x03444EB4u, "special? not lowered yet"); return;
L_08A5BC88:
    rt.unsupported(0x08A5BC88u, 0x4C06E472u, "unknown not lowered yet"); return;
L_08A5BC8C:
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(1700), static_cast<std::uint16_t>(aot_gpr[28]));
    rt.memory().aot_store_word_left(aot_gpr[26] + static_cast<std::uint32_t>(-6294), aot_gpr[9]);
    rt.unsupported(0x08A5BC94u, 0xB287BD61u, "unknown not lowered yet"); return;
L_08A5BCA4:
    aot_gpr[31] = (0x08A5BCACu);
    aot_gpr[29] = (static_cast<std::int32_t>(aot_gpr[4]) < -32002 ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 80u, 0x0883C5DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5BCACu) goto L_08A5BCAC;
    return;
L_08A5BCAC:
    rt.unsupported(0x08A5BCACu, 0x46F186C3u, "cop1? not lowered yet"); return;
L_08A5BCC0:
    rt.unsupported(0x08A5BCC4u, 0x1F803938u, "control flow in delay slot"); return;
L_08A5BCC8:
    rt.unsupported(0x08A5BCC8u, 0x6A2774F3u, "unknown not lowered yet"); return;
L_08A5BCCC:
    aot_gpr[14] = (aot_gpr[23] ^ 29281u);
    ctx.pc = 0x04332CFCu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A5BCE0:
    rt.unsupported(0x08A5BCE0u, 0x71EC4271u, "unknown not lowered yet"); return;
L_08A5BCF0:
    rt.unsupported(0x08A5BCF0u, 0xCEADEB47u, "unknown not lowered yet"); return;
L_08A5BD04:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-29136), ctx.vfpu_scalar_bits_ct<52u>());
    rt.unsupported(0x08A5BD08u, 0xEDBA5844u, "unknown not lowered yet"); return;
L_08A5BD50:
    rt.unsupported(0x08A5BD54u, 0x5BF4DD27u, "control flow in delay slot"); return;
L_08A5BD58:
    rt.unsupported(0x08A5BD58u, 0x616403BAu, "vfpu0 not lowered yet"); return;
L_08A5BDB0:
    aot_gpr[28] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-7525))))));
    { const bool branch_taken = aot_gpr[30] != aot_gpr[1];
    aot_gpr[29] = (PSPRECOMP_AOT_LOAD32(aot_gpr[31] + static_cast<std::uint32_t>(-1630)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 85u, 0x08A75EF0u>(ctx, &aot_mem); return;
      }
      goto L_08A5BDBC;
    }
L_08A5BDBC:
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(24880)));
    rt.memory().aot_store_word_right(aot_gpr[19] + static_cast<std::uint32_t>(-27934), aot_gpr[11]);
    goto L_08A5BDC4;
L_08A5BDC4:
    { const bool branch_taken = aot_gpr[29] == aot_gpr[5];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<25u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(-2520);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 221u, 0x08A46D84u>(ctx, &aot_mem); return;
      }
      goto L_08A5BDCC;
    }
L_08A5BDCC:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    rt.unsupported(0x08A5BDD0u, 0x237DBD4Fu, "unknown not lowered yet"); return;
L_08A5BDDC:
    rt.unsupported(0x08A5BDDCu, 0x9D9A5BA1u, "unknown not lowered yet"); return;
L_08A5BDEC:
    { const bool branch_taken = aot_gpr[25] != aot_gpr[13];
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-19735), static_cast<std::uint16_t>(aot_gpr[26]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0612_entry, 612u, 53u, 0x08A683A8u>(ctx, &aot_mem); return;
      }
      goto L_08A5BDF4;
    }
L_08A5BDF4:
    rt.unsupported(0x08A5BDF4u, 0xF78BA90Au, "vfpu not lowered yet"); return;
L_08A5BDF8:
    aot_gpr[9] = (aot_gpr[16] < static_cast<std::uint32_t>(4522) ? 1u : 0u);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(12580);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<55u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 99u, 2u);
      ctx.read_vfpu_vector_ct<34u, 2u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 2u;
      constexpr std::uint32_t vfpu_input_length = 2u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 21u, vfpu_side); }
    if (aot_gpr[7] == aot_gpr[16]) {
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[25] + static_cast<std::uint32_t>(-2240)));
        (void)rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 86u, 0x08A4C5B8u>(ctx, &aot_mem); return;
    }
    goto L_08A5BE0C;
L_08A5BE0C:
    aot_gpr[29] = (PSPRECOMP_AOT_LOAD16(aot_gpr[27] + static_cast<std::uint32_t>(-7290)));
    rt.unsupported(0x08A5BE10u, 0xD1FF982Au, "vfpu4 not lowered yet"); return;
L_08A5BE14:
    rt.unsupported(0x08A5BE14u, 0x05572A5Fu, "regimm? not lowered yet"); return;
L_08A5BE1C:
    rt.unsupported(0x08A5BE20u, 0x5F10D406u, "control flow in delay slot"); return;
L_08A5BE24:
    rt.unsupported(0x08A5BE24u, 0x06A70004u, "regimm? not lowered yet"); return;
L_08A5BE34:
    rt.unsupported(0x08A5BE34u, 0x71B19E77u, "unknown not lowered yet"); return;
L_08A5BE64:
    aot_gpr[17] = (aot_gpr[18] & 59990u);
    aot_gpr[27] = (aot_gpr[14] | 55110u);
    goto L_08A5BE6C;
L_08A5BE6C:
    rt.unsupported(0x08A5BE6Cu, 0x617F3FE6u, "vfpu0 not lowered yet"); return;
L_08A5BE70:
    rt.unsupported(0x08A5BE70u, 0x6B4A146Cu, "unknown not lowered yet"); return;
L_08A5BE90:
    aot_gpr[26] = (55143u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(32027), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    aot_gpr[18] = (31068u << 16u);
    (void)(aot_gpr[3] & 25440u);
    rt.unsupported(0x08A5BEC8u, 0x42868475u, "unknown not lowered yet"); return;
L_08A5BED8:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A5BEDCu, 0x00000020u); return; } }
    (void)(0u << 16u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(0u + static_cast<std::uint32_t>(0))))));
    goto L_08A5BEE8;
L_08A5BEE8:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A5BEECu, 0x00000020u); return; } }
    (void)(0u << 16u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(0u + static_cast<std::uint32_t>(0))))));
    goto L_08A5BEF8;
L_08A5BEF8:
    rt.unsupported(0x08A5BEF8u, 0x72657375u, "unknown not lowered yet"); return;
L_08A5BF04:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    (void)(0u ^ 0u);
    rt.unsupported(0x08A5BF0Cu, 0x6B617242u, "unknown not lowered yet"); return;
L_08A5BFC0:
    rt.unsupported(0x08A5BFC0u, 0x67697254u, "vfpu1 not lowered yet"); return;
L_08A5BFCC:
    // nop
    goto L_08A5BFD0;
L_08A5BFD0:
    rt.unsupported(0x08A5BFD0u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5BFE4:
    rt.unsupported(0x08A5BFE4u, 0x616C6176u, "vfpu0 not lowered yet"); return;
L_08A5BFF4:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A5BFF8u, 0x444F4D5Fu, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0620_entry, 620u, 14u, 0x08A700B0u>(ctx, &aot_mem); return;
    }
    goto L_08A5BFFC;
L_08A5BFFC:
    rt.unsupported(0x08A5BFFCu, 0x4D5F4C45u, "unknown not lowered yet"); return;
}

void recomp_unit_0599(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0599_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_599(Runtime &runtime) {
    runtime.register_generated_unit(599u, 0x08A5B000u, 4096u, &recomp_unit_0599, &recomp_unit_0599_entry);
    runtime.register_function(0x08A5B004u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B00Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B014u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B01Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B024u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B02Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B034u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B038u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B03Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B044u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B04Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B054u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B05Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B064u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B06Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B074u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B07Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B084u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B08Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B094u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B09Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B0A4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B0ACu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B0B4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B0BCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B0C4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B0CCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B0D4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B0DCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B0E4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B0ECu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B0F4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B0FCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B104u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B10Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B114u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B124u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B134u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B13Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B144u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B14Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B154u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B15Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B164u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B16Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B174u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B17Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B184u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B18Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B194u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B19Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B1A4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B1ACu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B1B4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B1BCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B1C4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B1CCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B1D4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B1DCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B1E4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B1ECu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B1F4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B1FCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B204u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B20Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B214u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B21Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B224u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B22Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B234u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B23Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B244u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B254u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B258u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B25Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B264u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B274u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B27Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B280u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B284u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B288u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B28Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B294u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B29Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B2A4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B2ACu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B2B0u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B2B4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B2BCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B2C4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B2CCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B2D4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B2E4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B2ECu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B2F4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B2FCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B304u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B310u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B320u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B328u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B3A4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B508u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B634u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B638u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B644u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B670u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B678u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B67Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B684u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B68Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B698u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B6B0u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B6C4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B6D4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B6D8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B6F0u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B704u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B71Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B734u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B748u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B750u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B760u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B76Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B77Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B78Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B798u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B7A0u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B7A4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B7B0u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B7B8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B7BCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B7C8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B7D8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B7ECu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B7F8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B7FCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B804u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B80Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B814u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B81Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B824u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B834u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B83Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B844u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B858u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B864u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B86Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B874u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B884u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B894u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B8A8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B8B8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B8C8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B8DCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B8E8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B8F0u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B8F8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B90Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B91Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B928u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B93Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B948u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B94Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B950u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B95Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B970u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B978u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B980u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B988u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B998u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B9B8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B9C8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B9D0u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B9E4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5B9FCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BA00u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BA10u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BA1Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BA40u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BA48u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BA5Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BA80u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BAC8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BADCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BAE4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BAF8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BB08u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BB18u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BB58u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BB64u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BB68u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BB74u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BB80u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BB9Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BBACu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BBC0u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BBC8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BBE4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BC04u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BC0Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BC2Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BC7Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BC88u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BC8Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BCA4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BCACu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BCC0u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BCC8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BCCCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BCE0u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BCF0u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BD04u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BD50u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BD58u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BDB0u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BDBCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BDC4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BDCCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BDDCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BDECu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BDF4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BDF8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BE0Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BE14u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BE1Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BE24u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BE34u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BE64u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BE6Cu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BE70u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BE90u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BED8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BEE8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BEF8u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BF04u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BFC0u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BFCCu, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BFD0u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BFE4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BFF4u, &recomp_unit_0599, "recomp_unit_0599");
    runtime.register_function(0x08A5BFFCu, &recomp_unit_0599, "recomp_unit_0599");
}
} // namespace psprecomp
