# KuiklyUI #1677 — MNIS BedList 离线复现工程

这个仅源码工程用于复现 [Tencent-TDS/KuiklyUI#1677](https://github.com/Tencent-TDS/KuiklyUI/issues/1677) 中反馈的 OpenHarmony 短暂空白/白色视口问题，列表渲染使用的是 MNIS BedList 的实际实现。这里没有把页面简化成灰色卡片压力页：BedList 的布局、患者卡片、Lazy 列表稳定身份、动态卡片高度、字段显隐、分组栏、范围标签以及跑马灯渲染，都取自当前主线实现。

应用启动后直接进入 `BedListOfflineRepro`。登录、会话恢复、医院 HTTP 请求、设备绑定和 MNIS Host 业务副作用均已移除；页面使用固定在源码中的测试数据，并在本地完成范围和分组切换。

## 固定身份

- KuiklyUI 源码 revision：`3fb98374ac1ceb94845a0520b88ceb229df8e385`
- 本地使用的 OpenHarmony 环境：API 23 设备，`720 x 1280`，竖屏
- 复现路由：`BedListOfflineRepro`
- BedList 主渲染文件：
  `demo/src/commonMain/kotlin/com/lachesis/fusion/kuiklyui/bedlist/BedListPatientListContent.kt`
- 渲染文件 SHA-256：`050F8A2EDC5BAD16A21BB65200D12C2CDAC1351B502E4AE7DC1B04FC9DE25216`
- 离线数据与交互适配文件：
  `demo/src/commonMain/kotlin/com/lachesis/fusion/kuiklyui/bedlist/BedListOfflineReproPage.kt`

上面的渲染文件与已测试的 MNIS 主线渲染文件逐字节一致。以下四个 BedList 资源也逐字节复制：

| 资源 | SHA-256 |
| --- | --- |
| `more_icon.png` | `7620EBA6E479ECDD38C2F75C35AEAFFE8AF30C51842BA04F9124D66012C80E3A` |
| `search_icon.png` | `66C2EADA36FD10BC853AEA1FE2E118A78CFC788BEC2EF3E480518C99AB14D012` |
| `path_need_finish.png` | `10E9324478E8177348BB3AC2156514A7551E8579BF9A41360AA0E87A3A64A485` |
| `path_no_need_finish.png` | `B7348EF93EF413AFFC4C344F06F7AF230B26ABA211C0C42212DD4EC11DB9B175` |

## 保留的生产页面部分

- 原始竖屏 BedList 视觉结构；
- 生产页面使用的 `LazyColumn`、稳定 key 和 `contentType` 策略；
- 左侧患者分组栏和本地分组筛选；
- `全科` / `本组` 切换以及本地责任患者筛选；
- 生产卡片字段规划、条件行和动态高度；
- 多行过敏史和诊断文本；
- 生产跑马灯实现及 `30 dp/s` 速度；滚动开始时保留同一套文本和布局子树，只暂停 `graphicsLayer` 位移动画，滚动停止 `750 ms` 后再恢复；
- 237 条固定测试患者状态，覆盖不同护理级别、标记、风险、文本长度和责任/非责任状态。

这些数据仅用于测试，包含测试专用标识和展示值，不含 bearer token、Cookie、密码、登录凭据、医院 endpoint、病区编码、设备标识或抓取的 HTTP payload。复现页面和 OpenHarmony Host 入口都不会调用网络接口。

未修改的 Kuikly `core-render-ohos` 源码仍包含框架通用的 network/router 模块。为了保持原有渲染器和 Release 构建图，这些源码继续保留在工程中，但本复现工程不会获取或调用它们。

## 本轮主线对照结果

我在同一台 OpenHarmony 设备上用 238 条患者数据做了固定参数对照：每个候选都执行 5 次上下交替高速 fling，每次取 3 帧，共 15 帧。当前保留方案在其中 3 帧出现接近整列空白，固定出现在第 00、06、12 帧。

我随后只把高量列表的 `beyondBoundsItemCount` 从 `0` 改为 `2`，其余跑马灯、Lazy key、`contentType`、速度和滚动参数全部保持不变。结果仍是同样的 `3/15`，帧号也完全一致，所以没有采用这项改动。本仓库保留的是 `beyondBoundsItemCount = 0` 的方案：稳定 key/`contentType`、滚动期间暂停跑马灯位移、停止后等待 `750 ms` 再恢复，以及使用 `graphicsLayer` 避免逐帧重新布局都继续保留，但白色空帧仍可复现。

同一方案的最终 SmartPerf 采样覆盖 5 次 velocity `30000` 的 fling：p95 帧间隔为 `33.64 ms`，低于 `50 ms` 目标；最大单帧间隔为 `470.94 ms`，超过 `150 ms` 上限，因此该轮仍按失败记录。也就是说，大多数采样帧的统计值尚可，但孤立的长停顿和可见空白帧并没有被消除。

## Kotlin/Native 构建

请使用本 revision 固定的 JDK 17 和 Kotlin/Native 工具链。源码包中的 wrapper properties 固定 Gradle `7.6.3`；为保持源码包体积和边界，压缩包没有包含二进制 `gradle-wrapper.jar`。可以使用本机 Gradle 7.6.3，或者从固定的上游 revision 恢复标准 wrapper JAR。

Windows 命令提示符：

```text
set KUIKLY_AGP_VERSION=7.4.2
set KUIKLY_KOTLIN_VERSION=2.0.21-KBA-010
gradlew.bat -c settings.2.0.ohos.gradle.kts --no-daemon --max-workers=1 --console=plain :demo:linkSharedDebugSharedOhosArm64
```

如果需要专门观察 Release linker 路径，可以执行下面的命令。Release Native 构建缓慢单独记录在 [Tencent-TDS/KuiklyUI#1687](https://github.com/Tencent-TDS/KuiklyUI/issues/1687)，这里不把它与 #1677 的滚动白色空帧混成一个问题：

```text
set KUIKLY_AGP_VERSION=7.4.2
set KUIKLY_KOTLIN_VERSION=2.0.21-KBA-010
gradlew.bat -c settings.2.0.ohos.gradle.kts --no-daemon --max-workers=1 --console=plain :demo:linkSharedReleaseSharedOhosArm64
```

Release 与 Debug 的比较必须使用同一份源码、同一 task graph、同一 worker 数量和同一 publication 身份。固定 Native 输入的 Debug link 已执行过一次，耗时约 `2m34s`；产物 `libshared.so` 大小为 `32,983,768` bytes，SHA-256 为 `9C1D64BFE1E2C20A789BE9E12E7B9495134BD15AAD74BC0F8BB88815046A1C47`。

上面的 Release 命令也针对这份最终源码在 Windows 上完整执行过一次：外部计时为 `522.031s`，Gradle 报告 `BUILD SUCCESSFUL in 8m 41s`，约为 Debug Native 耗时的 `3.4x`。当时 task graph 为 `18 actionable tasks: 4 executed, 4 from cache, 10 up-to-date`。Core、Compose 和 annotation 的 Kotlin/Native 编译均从缓存恢复，未发生依赖下载，`:demo:compileKotlinOhosArm64` 为 `UP-TO-DATE`；实际执行的是 `:demo:linkSharedReleaseSharedOhosArm64`，使用了 `-opt`、`-O3`、`clang++` 和 `ld.lld`。对应 Release 产物如下：

| 产物 | 大小 | SHA-256 |
| --- | ---: | --- |
| `libshared.so` | `22,565,416` bytes | `F7950E6084C0E0CA1C93080AA51CAE84B0A276BCA6FBE5873AAB9D00E74A1705` |
| `libshared_api.h` | `298,789` bytes | `FE6357CB96BE2866465E734C661C2EFA9CF2D215CD5DE788BF2F324593E02BF8` |

### 如何理解这次 Release 耗时

这个 `8m41s` 结果可以复现同一类“Release 才明显变慢”的 Kotlin/Native 优化、对象生成和链接热点，但不能据此声称已经复现 MNIS 主应用绝对意义上的 `20+ 分钟`。主应用 Native 输入规模明显更大，已另外得到过约 `65 MB` 的 Release `libshared.so`；本离线工程产出的库为上表记录的 `22,565,416` bytes。机器负载和 Kotlin/Native 缓存状态也会影响绝对耗时。

因此，这个工程最适合用来做同一源码/缓存身份下的定性比较：依赖 publication 和上游 Kotlin/Native 编译已经处于缓存或 up-to-date 状态时，Release Native link 仍约为 Debug 的 `3.4x`，剩余时间主要集中在 `-opt` / `-O3` / `clang++` / `ld.lld` 路径。请不要把 `8m41s` 当成生产应用 `20+ 分钟` 的等量复现，而应把它作为同一扩展趋势的独立、小规模复现。生产源码、二进制、日志、凭据和签名材料均未放入这个源码包。

## OpenHarmony HAP

Native link 完成后，请从实际执行的构建类型中同时复制下面两个文件。Debug 使用 `sharedDebugShared`，Release 使用 `sharedReleaseShared`；不要把不同构建类型或不同 invocation 产生的 `.so` 和 header 混用：

```text
demo/build/bin/ohosArm64/<sharedDebugShared|sharedReleaseShared>/libshared.so
  -> ohosApp/entry/libs/arm64-v8a/libshared.so

demo/build/bin/ohosArm64/<sharedDebugShared|sharedReleaseShared>/libshared_api.h
  -> ohosApp/entry/src/main/cpp/thirdparty/biz_entry/libshared_api.h
```

请在 DevEco Studio 中用 API 23 兼容的 OpenHarmony SDK 打开 `ohosApp`，安装本地 OHPM 依赖，配置你自己的开发 bundle/签名 profile，然后构建 `entry` 模块。源码工程保留了正常的 `render` 模块和完整的 `core-render-ohos` 源码；已经测试过的设备 HAP 打包过程中使用的本地预构建 renderer 不属于这个源码包的依赖。

下面是此前 r13 Host-only Debug HAP 的历史验证记录，不是本源码包内的制品：组装耗时约 `27.2s`，复用了固定 Native 输入，没有再次执行 Native link。生成的 `libshared_api.h` SHA-256 为 `FE6357CB96BE2866465E734C661C2EFA9CF2D215CD5DE788BF2F324593E02BF8`，与当时安装的 `libshared.so` 导出表一致；精确签名候选 SHA-256 为 `122829D77A04DCCCB0E34A02F8F644232BDF172E5A8EDE4C9A5F9AD4A976931F`。此前的竖屏真机观察确认 BedList 能正常显示，并在范围/分组切换、多行跑马灯可见时快速滚动观察到明显的短暂白色/空白列表帧。当前源码已同步上面记录的主线保留方案，渲染文件与主线逐字节一致；本次同步只做 Debug focused 编译，不把历史 HAP 证据冒充当前源码包证据。HAP、截图以及全部签名材料均未放入这个源码包。

如果在已经构建过 Host 的工程中替换了 `libshared_api.h`，请强制小型 `libkuikly_entry.so` CMake target 重新构建，或者从干净的 Host 输出目录开始。只复制文件并保留原时间戳，可能导致 NAPI bridge 仍使用旧版本，即使磁盘上的 header 字节已经正确。

## 手工复现步骤

1. 启动应用；应用会在竖屏下直接打开 `BedListOfflineRepro`。
2. 确认能看到 BedList 顶部栏、`全科` / `本组`、左侧分组栏和生产样式的患者卡片。
3. 反复切换 `全科` / `本组`，并切换左侧的几个分组。
4. 在长卡片和短卡片之间快速上下交替 fling，尤其是在多行过敏史/诊断跑马灯可见时进行。
5. 观察整个列表视口或被回收的部分是否短暂变成白色/空白。

这个复现工程把最终视觉观察交给测试人员完成；构建或安装成功本身不能证明白帧一定出现，也不能证明白帧已经消失。

## 仅源码边界

交付压缩包排除了 `.git`、`.gradle`、`.hvigor`、`.cxx`、所有 `build/` 目录、`oh_modules`、`renderer-prebuilt`、`entry/libs`、HAP/HAR/SO/JAR 产物、Native 缓存、日志、截图、签名 profile、证书、密钥和验证输出。包内保留完整的 Kotlin/Compose/KSP 源码、`core-render-android`、`core-render-ohos`、Gradle wrapper properties、AppScope 元数据、生产 BedList 渲染器、资源以及离线 fixture。
