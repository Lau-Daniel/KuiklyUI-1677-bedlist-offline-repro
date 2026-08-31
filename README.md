# KuiklyUI #1677 — MNIS BedList offline reproducer

This source-only project reproduces the OpenHarmony transient blank/white viewport reported in [Tencent-TDS/KuiklyUI#1677](https://github.com/Tencent-TDS/KuiklyUI/issues/1677) with the real MNIS BedList rendering implementation. It is intentionally not a reduced grey-card stress page: the BedList layout, patient cards, stable lazy-list identity, dynamic card heights, field visibility, grouping rail, scope tabs, and marquee rendering are copied from the current mainline implementation.

The application starts directly on `BedListOfflineRepro`. Login, session restoration, hospital HTTP calls, device binding, and all MNIS Host business side effects have been removed. The page renders a deterministic, source-persisted fixture of 237 test patients and performs all scope/group switching locally.

## Fixed identities

- KuiklyUI source revision: `3fb98374ac1ceb94845a0520b88ceb229df8e385`
- OpenHarmony target used locally: API 23 device, `720 x 1280`, portrait
- Reproducer route: `BedListOfflineRepro`
- Main BedList renderer:
  `demo/src/commonMain/kotlin/com/lachesis/fusion/kuiklyui/bedlist/BedListPatientListContent.kt`
- Renderer SHA-256: `2B58F37E14DA13B5A590610CF5216341D02D1525A6CFFAF504E7C36C62D4862A`
- Offline fixture/interaction adapter:
  `demo/src/commonMain/kotlin/com/lachesis/fusion/kuiklyui/bedlist/BedListOfflineReproPage.kt`

The renderer hash above is byte-for-byte identical to the renderer in the tested MNIS mainline. Four BedList assets are also copied byte-for-byte:

| Asset | SHA-256 |
| --- | --- |
| `more_icon.png` | `7620EBA6E479ECDD38C2F75C35AEAFFE8AF30C51842BA04F9124D66012C80E3A` |
| `search_icon.png` | `66C2EADA36FD10BC853AEA1FE2E118A78CFC788BEC2EF3E480518C99AB14D012` |
| `path_need_finish.png` | `10E9324478E8177348BB3AC2156514A7551E8579BF9A41360AA0E87A3A64A485` |
| `path_no_need_finish.png` | `B7348EF93EF413AFFC4C344F06F7AF230B26ABA211C0C42212DD4EC11DB9B175` |

## What remains from the production page

- the original portrait BedList visual structure;
- `LazyColumn` with the production stable key and `contentType` policy;
- the left patient-group rail and local group filtering;
- `全科` / `本组` switching and local cared-patient filtering;
- the production card-field planner and conditional/dynamic-height rows;
- long multiline allergy and diagnosis values;
- the production marquee implementation and `30 dp/s` speed;
- 237 deterministic test-patient states, including mixed nursing levels, flags, risks, variable text lengths, and cared/not-cared states.

The fixture contains test-only identifiers and display values. It contains no bearer token, cookie, password, login credential, hospital endpoint, ward code, device identity, or captured HTTP payload. No network API is called by the reproducer page or the OpenHarmony Host entry. The unmodified Kuikly `core-render-ohos` source still contains the framework's generic built-in network/router modules; they are retained to preserve the exact renderer and Release build graph, but this reproducer does not acquire or invoke them.

## Kotlin/Native build

Use JDK 17 and the Kotlin/Native toolchain pinned by this revision. The wrapper properties pin Gradle `7.6.3`; the source-only archive intentionally omits the binary `gradle-wrapper.jar`, so either use a local Gradle 7.6.3 installation or restore the standard wrapper JAR from the fixed upstream revision.

Windows Command Prompt:

```text
set KUIKLY_AGP_VERSION=7.4.2
set KUIKLY_KOTLIN_VERSION=2.0.21-KBA-010
gradlew.bat -c settings.2.0.ohos.gradle.kts --no-daemon --max-workers=1 --console=plain :demo:linkSharedDebugSharedOhosArm64
```

Release timing command, when intentionally diagnosing the Release linker path:

```text
set KUIKLY_AGP_VERSION=7.4.2
set KUIKLY_KOTLIN_VERSION=2.0.21-KBA-010
gradlew.bat -c settings.2.0.ohos.gradle.kts --no-daemon --max-workers=1 --console=plain :demo:linkSharedReleaseSharedOhosArm64
```

Do not compare Release with a different source tree, task graph, worker count, or publication identity. The fixed Native input Debug link completed once in approximately `2m34s`; it produced `libshared.so` size `32,983,768` bytes with SHA-256 `9C1D64BFE1E2C20A789BE9E12E7B9495134BD15AAD74BC0F8BB88815046A1C47`.

The command above was then run exactly once for this final source on Windows. Its outer wall-clock duration was `522.031s`; Gradle reported `BUILD SUCCESSFUL in 8m 41s`, about `3.4x` the Debug Native duration. The task graph reported `18 actionable tasks: 4 executed, 4 from cache, 10 up-to-date`. The core/Compose/annotation Kotlin/Native compilations were restored `FROM-CACHE`, there were no dependency download events, and `:demo:compileKotlinOhosArm64` was `UP-TO-DATE`; the executed `:demo:linkSharedReleaseSharedOhosArm64` used `-opt`, `-O3`, `clang++`, and `ld.lld`. This isolates the reproduced delay to the Release Kotlin/Native whole-program optimization/object-generation/link path rather than a cold publication download or HAP assembly. The resulting Release artifacts were:

| Artifact | Size | SHA-256 |
| --- | ---: | --- |
| `libshared.so` | `22,565,416` bytes | `F7950E6084C0E0CA1C93080AA51CAE84B0A276BCA6FBE5873AAB9D00E74A1705` |
| `libshared_api.h` | `298,789` bytes | `FE6357CB96BE2866465E734C661C2EFA9CF2D215CD5DE788BF2F324593E02BF8` |

### How to interpret the Release timing

The `8m 41s` measurement reproduces the same Release-only Kotlin/Native optimization/object-generation/link hotspot, but it does **not** claim to reproduce the full MNIS application's absolute `20+ minute` wall-clock duration. The full application has a materially larger Native input and has separately produced an approximately `65 MB` Release `libshared.so`, whereas this offline source package produced the `22,565,416`-byte library recorded above. Machine load and Kotlin/Native cache state also affect the absolute time.

The useful comparison in this package is therefore qualitative and within one fixed source/cache identity: Release took about `3.4x` the Debug Native link even though the dependency publications and upstream Kotlin/Native compilations were already cached or up to date, and the remaining work was concentrated in `-opt` / `-O3` / `clang++` / `ld.lld`. Please do not cite `8m 41s` as a reproduction of the production app's `20+ minute` number; cite it as a smaller, self-contained reproduction of the same scaling bottleneck. The larger production source, binaries, logs, credentials, and signing material are intentionally not included in this archive.

## OpenHarmony HAP

After the Native link, copy both files from the build type that was actually produced. Use `sharedDebugShared` for the Debug task and `sharedReleaseShared` for the Release task; never combine a `.so` and header from different build types or invocations:

```text
demo/build/bin/ohosArm64/<sharedDebugShared|sharedReleaseShared>/libshared.so
  -> ohosApp/entry/libs/arm64-v8a/libshared.so

demo/build/bin/ohosArm64/<sharedDebugShared|sharedReleaseShared>/libshared_api.h
  -> ohosApp/entry/src/main/cpp/thirdparty/biz_entry/libshared_api.h
```

Open `ohosApp` in DevEco Studio with an API 23-compatible OpenHarmony SDK, install the local OHPM dependencies, configure your own development bundle/signing profile, and build the `entry` module. The source project keeps the normal `render` module and complete `core-render-ohos` source; it does not rely on the local prebuilt renderer used only to package the already-tested device HAP.

The corrected r13 Host-only Debug HAP assembly took about `27.2s` and reused the fixed Native input above without running another Native link. Its generated `libshared_api.h` had SHA-256 `FE6357CB96BE2866465E734C661C2EFA9CF2D215CD5DE788BF2F324593E02BF8`, matching the installed `libshared.so` export table. The exact signed candidate passed `verify-app`, installed successfully, and had SHA-256 `122829D77A04DCCCB0E34A02F8F644232BDF172E5A8EDE4C9A5F9AD4A976931F`. A ten-second launch precheck confirmed the application remained foreground with one live process and no new appfreeze, cppcrash, or jscrash; a transient screenshot also confirmed the portrait BedList rather than an error/blank page. The tester subsequently reproduced the transient white/blank list frame on that exact installed r13 HAP while exercising scope/group switching, multiline marquee content, and rapid scrolling. This is a manual visual result, not an automated screenshot assertion. The HAP, screenshot, crash diagnostics, and all signing material are excluded from this source-only archive.

If `libshared_api.h` is replaced in an already-built Host tree, force the small `libkuikly_entry.so` CMake target to rebuild or start from a clean Host output. A timestamp-preserving copy can otherwise leave a stale NAPI bridge even though the header bytes on disk are correct.

## Manual reproduction

1. Launch the application; it opens `BedListOfflineRepro` directly in portrait orientation.
2. Confirm the BedList header, `全科` / `本组`, left grouping rail, and production patient cards are visible.
3. Repeatedly switch `全科` / `本组` and several left-rail groups.
4. Perform rapid alternating upward/downward flings through long and short cards, especially while multiline allergy/diagnosis marquee rows are visible.
5. Observe whether an entire list viewport or a recycled portion becomes transiently white/blank while the application process remains alive.

The reproducer intentionally leaves the visual observation to the tester. A successful build/install is not treated as proof that the blank frame did or did not occur.

## Source-only boundary

The delivery archive excludes `.git`, `.gradle`, `.hvigor`, `.cxx`, every `build/` directory, `oh_modules`, `renderer-prebuilt`, `entry/libs`, HAP/HAR/SO/JAR outputs, native caches, logs, screenshots, signing profiles, certificates, keys, and verification output. It retains the complete Kotlin/Compose/KSP sources, `core-render-android`, `core-render-ohos`, Gradle wrapper properties, AppScope metadata, the production BedList renderer, assets, and the offline fixture.
