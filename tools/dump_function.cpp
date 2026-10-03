#include "psprecomp/common.hpp"
#include "psprecomp/decoder.hpp"
#include "psprecomp/elf32.hpp"
#include "psprecomp/guest_memory.hpp"
#include <charconv>
#include <cstdint>
#include <iostream>
#include <map>
#include <string>

static std::uint32_t parse(std::string s) {
    if (s.rfind("0x",0)==0 || s.rfind("0X",0)==0) s.erase(0,2);
    std::uint32_t v{}; std::from_chars(s.data(),s.data()+s.size(),v,16); return v;
}

// --find <hex>: scan the loaded image for a 32-bit value (file offsets are not
// usable for that; the ELF loader decompresses segments).  Prints every
// address whose little-endian word equals the value, plus the nearest
// preceding word that looks like a function pointer (table context).
static int find_value(psprecomp::GuestMemory &mem, std::uint32_t value, std::uint32_t lo,
                      std::uint32_t hi) {
    std::uint32_t found = 0u;
    for (std::uint32_t address = lo; address + 4u <= hi; address += 4u) {
        if (!mem.contains(address, 4u)) continue;
        if (mem.load32(address) != value) continue;
        std::cout << "hit " << psprecomp::hex32(address) << "\n";
        ++found;
    }
    std::cout << "hits=" << found << "\n";
    return found != 0u ? 0 : 1;
}

// --find-addr <address>: MIPS has no 32-bit absolute addressing, so a runtime
// address shows up as `lui rX, hi` followed (within a few instructions) by a
// load/store/addiu whose 16-bit immediate equals the low half.  Scan for that
// pair; this is how references to globals like 0x08AAE48C are found in a
// recompiler image where the literal address never appears as a word.
static int find_addr(psprecomp::GuestMemory &mem, std::uint32_t target, std::uint32_t lo,
                     std::uint32_t hi) {
    const std::uint32_t upper = target >> 16u;
    const std::uint32_t lower = target & 0xFFFFu;
    std::uint32_t found = 0u;
    for (std::uint32_t pc = lo; pc + 4u <= hi; pc += 4u) {
        if (!mem.contains(pc, 4u)) continue;
        const std::uint32_t word = mem.load32(pc);
        if ((word >> 26u) != 0x0Fu || (word & 0xFFFFu) != upper) continue; // lui rT, hi
        const std::uint32_t rt = (word >> 16u) & 0x1Fu;
        for (std::uint32_t step = 1u; step <= 60u; ++step) {
            const std::uint32_t other_pc = pc + step * 4u;
            if (!mem.contains(other_pc, 4u)) break;
            const std::uint32_t other = mem.load32(other_pc);
            const std::uint32_t opcode = other >> 26u;
            const std::uint32_t rs = (other >> 21u) & 0x1Fu;
            if (rs != rt) continue;
            if ((other & 0xFFFFu) != lower) continue;
            const bool interesting = opcode == 0x23u || opcode == 0x2Bu || opcode == 0x24u ||
                opcode == 0x20u || opcode == 0x28u || opcode == 0x21u || opcode == 0x29u ||
                opcode == 0x31u || opcode == 0x39u || opcode == 0x35u || opcode == 0x3Du;
            if (!interesting) continue;
            std::cout << "ref pc=" << psprecomp::hex32(pc) << " insn=" << psprecomp::hex32(other)
                      << " opcode=" << psprecomp::hex32(opcode) << "\n";
            ++found;
        }
    }
    std::cout << "refs=" << found << "\n";
    return found != 0u ? 0 : 1;
}

// --find-insn <imm16>: every instruction whose low 16 bits equal the value,
// with opcode and pc.  Catches address construction that --find-addr misses,
// e.g. `addiu rX, rY, off` used as a pointer whose store has a zero immediate.
static int find_insn(psprecomp::GuestMemory &mem, std::uint32_t imm, std::uint32_t lo,
                     std::uint32_t hi) {
    std::uint32_t found = 0u;
    for (std::uint32_t pc = lo; pc + 4u <= hi; pc += 4u) {
        if (!mem.contains(pc, 4u)) continue;
        const std::uint32_t word = mem.load32(pc);
        if ((word & 0xFFFFu) != imm) continue;
        const std::uint32_t opcode = word >> 26u;
        if (opcode != 0x09u && opcode != 0x0Du && opcode != 0x23u && opcode != 0x2Bu &&
            opcode != 0x21u && opcode != 0x25u)
            continue;
        std::cout << "insn pc=" << psprecomp::hex32(pc) << " word=" << psprecomp::hex32(word)
                  << " opcode=" << opcode << "\n";
        ++found;
    }
    std::cout << "insns=" << found << "\n";
    return 0;
}

// --scan-unknown: walk the loaded image and list every instruction whose
// decoded mnemonic is "unknown" (a decoder gap, e.g. Allegrex atomics or VFPU
// encodings), with counts and sample PCs.  Run this before regenerating the
// corpus so one rebuild fixes the whole set.
static int scan_unknown(psprecomp::GuestMemory &mem, std::uint32_t lo, std::uint32_t hi) {
    std::map<std::uint32_t, std::pair<std::uint64_t, std::uint32_t>> by_word;
    for (std::uint32_t pc = lo; pc + 4u <= hi; pc += 4u) {
        if (!mem.contains(pc, 4u)) continue;
        const std::uint32_t word = mem.load32(pc);
        const auto decoded = psprecomp::decode_allegrex(word);
        if (decoded.mnemonic != std::string("unknown") &&
            decoded.kind != psprecomp::OpcodeKind::Unsupported)
            continue;
        auto &entry = by_word[word];
        if (entry.first == 0u) entry.second = pc;
        ++entry.first;
    }
    for (const auto &[word, info] : by_word) {
        std::cout << "word=" << psprecomp::hex32(word) << " count=" << info.first
                  << " sample=" << psprecomp::hex32(info.second) << "\n";
    }
    std::cout << "distinct=" << by_word.size() << "\n";
    return 0;
}

int main(int argc,char**argv){
 if(argc<3){std::cerr<<"usage: dump_function elf address count | dump_function elf --find value [lo hi] | dump_function elf --find-addr address [lo hi] | dump_function elf --scan-unknown [lo hi]\n";return 2;}
 auto elf=psprecomp::Elf32Image::from_file(argv[1]); psprecomp::GuestMemory mem; (void)elf.load_and_relocate(mem);
 if (std::string(argv[2]) == "--find") {
     const std::uint32_t value = parse(argv[3]);
     const std::uint32_t lo = argc > 4 ? parse(argv[4]) : 0x08800000u;
     const std::uint32_t hi = argc > 5 ? parse(argv[5]) : 0x08C00000u;
     return find_value(mem, value, lo, hi);
 }
 if (std::string(argv[2]) == "--find-addr") {
     const std::uint32_t value = parse(argv[3]);
     const std::uint32_t lo = argc > 4 ? parse(argv[4]) : 0x08800000u;
     const std::uint32_t hi = argc > 5 ? parse(argv[5]) : 0x08C00000u;
     return find_addr(mem, value, lo, hi);
 }
 if (std::string(argv[2]) == "--find-insn") {
     const std::uint32_t value = parse(argv[3]);
     const std::uint32_t lo = argc > 4 ? parse(argv[4]) : 0x08800000u;
     const std::uint32_t hi = argc > 5 ? parse(argv[5]) : 0x08C00000u;
     return find_insn(mem, value, lo, hi);
 }
 if (std::string(argv[2]) == "--scan-unknown") {
     const std::uint32_t lo = argc > 3 ? parse(argv[3]) : 0x08800000u;
     const std::uint32_t hi = argc > 4 ? parse(argv[4]) : 0x08C00000u;
     return scan_unknown(mem, lo, hi);
 }
 // --relocs <address>: relocation entries whose patch address equals the value
 // (so an unrelocated `jal 0` placeholder can be told apart from a deliberate
 // call with no relocation entry).
 if (std::string(argv[2]) == "--relocs") {
     const std::uint32_t target = parse(argv[3]);
     const auto sites = elf.relocation_sites(0x08804000u);
     std::uint32_t found = 0u;
     for (const auto &site : sites) {
         if (site.patch_address != target) continue;
         std::cout << "reloc address=" << psprecomp::hex32(site.patch_address)
                   << " type=" << site.type << " patch_seg=" << site.patch_segment
                   << " target_seg=" << site.target_segment << "\n";
         ++found;
     }
     std::cout << "relocs=" << found << "\n";
     return 0;
 }
 if (std::string(argv[2]) == "--string") {
     const std::uint32_t address = parse(argv[3]);
     std::string text;
     for (std::uint32_t i = 0u; i < 256u && mem.contains(address + i, 1u); ++i) {
         const std::uint8_t c = mem.load8(address + i);
         if (c == 0u) break;
         text.push_back(static_cast<char>(c >= 32u && c < 127u ? c : '.'));
     }
     std::cout << "string=\"" << text << "\"\n";
     return 0;
 }
 auto pc=parse(argv[2]); auto count=parse(argv[3]);
 for(std::uint32_t i=0;i<count;i++,pc+=4){ auto w=mem.load32(pc); auto d=psprecomp::decode_allegrex(w);
 std::cout<<psprecomp::hex32(pc)<<" "<<psprecomp::hex32(w)<<" "<<d.mnemonic
 <<" rs="<<d.rs<<" rt="<<d.rt<<" rd="<<d.rd<<" sa="<<d.sa<<" imm="<<d.immediate;
 if(d.kind==psprecomp::OpcodeKind::J||d.kind==psprecomp::OpcodeKind::Jal){auto t=((pc+4)&0xF0000000u)|(d.target<<2);std::cout<<" target="<<psprecomp::hex32(t);} 
 std::cout<<"\n";
 }
}
