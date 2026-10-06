# libadrenotools

Vendored from the user's local `examples/libadrenotools` checkout, upstream
`https://github.com/bylaws/libadrenotools`, revision
`8fae8ce254dfc1344527e05301e43f37dea2df80` on 2026-10-05.

BSD-2-Clause; original LICENSE retained. The linkernsbypass dependency is also
BSD-2-Clause and retains its own LICENSE. Only the library, headers, generated
patch data and build files are included; no custom driver binaries are included.

Android arm64 only. Hook shared libraries must be packaged/extracted into the
APK's `nativeLibraryDir` (`useLegacyPackaging=true`). Imported drivers are
extracted into private internal app storage, never shared external storage.

The application supplies optional driver selection and initialization fallback.
Do not call the turbo API: clock forcing is not a substitute for measured tuning.
