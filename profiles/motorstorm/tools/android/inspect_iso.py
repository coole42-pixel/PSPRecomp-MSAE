"""Read ISO9660 directory records without extracting user game data."""
import argparse
import hashlib
import json
import struct
from pathlib import Path

SECTOR = 2048

def inspect(path):
    with path.open('rb') as iso:
        size = path.stat().st_size
        def read(offset, count):
            if offset < 0 or count < 0 or offset + count > size:
                raise ValueError('ISO extent outside image')
            iso.seek(offset)
            data = iso.read(count)
            if len(data) != count:
                raise ValueError('Truncated ISO')
            return data
        pvd = read(16 * SECTOR, SECTOR)
        if pvd[:7] != b'\x01CD001\x01':
            raise ValueError('Expected ISO9660 primary volume descriptor')
        def record(data):
            length = data[0]
            if length < 34 or len(data) < length:
                raise ValueError('Invalid directory record')
            return (struct.unpack_from('<I', data, 2)[0] * SECTOR,
                    struct.unpack_from('<I', data, 10)[0], bool(data[25] & 2))
        root = record(pvd[156:])
        result = []
        visited = set()
        def visit(extent, prefix, depth=0):
            if depth > 16 or extent[0] in visited:
                raise ValueError('Invalid directory tree')
            visited.add(extent[0])
            data = read(extent[0], extent[1])
            cursor = 0
            while cursor < len(data):
                length = data[cursor]
                if length == 0:
                    cursor = (cursor // SECTOR + 1) * SECTOR
                    continue
                entry = data[cursor:cursor + length]
                offset, count, directory = record(entry)
                name = entry[33:33 + entry[32]]
                cursor += length
                if name in (b'\0', b'\1'):
                    continue
                name = name.decode('ascii').split(';')[0]
                if '/' in name or name in ('.', '..'):
                    raise ValueError('Unsafe ISO filename')
                full = prefix + name
                if directory:
                    visit((offset, count, True), full + '/', depth + 1)
                elif full.upper() in ('PSP_GAME/SYSDIR/EBOOT.BIN', 'PSP_GAME/SYSDIR/BOOT.BIN', 'PSP_GAME/PARAM.SFO'):
                    blob = read(offset, count)
                    entry = dict(path=full, offset=offset, size=count, magic=blob[:4].hex(), sha256=hashlib.sha256(blob).hexdigest())
                    if blob[:4] == b'~PSP' and len(blob) >= 0xD4:
                        entry['prx_tag'] = hex(struct.unpack_from('<I', blob, 0xD0)[0])
                    result.append(entry)
        visit(root, '')
        return dict(iso_bytes=size, entries=result)

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('iso', type=Path)
    args = parser.parse_args()
    print(json.dumps(inspect(args.iso), indent=2))
