# KuiklyUI #1677 — MNIS BedList 离线复现工程

用于复现 [Tencent-TDS/KuiklyUI#1677](https://github.com/Tencent-TDS/KuiklyUI/issues/1677) 中 OpenHarmony 长列表快速滚动时偶发的白色/空白帧。应用启动后直接进入 `BedListOfflineRepro`，使用固定测试数据，不依赖登录、网络或 MNIS Host。

## 固定版本

- KuiklyUI revision：`3fb98374ac1ceb94845a0520b88ceb229df8e385`
- MNIS BedList 基线：`7e400ecb16fdb903fce7759f5bfefeda92651842`
- 白帧对照视口：OpenHarmony API 23，`720 x 1280`；本次比例手测视口：R901，`800 x 1280`
- 主渲染文件：`demo/src/commonMain/kotlin/com/lachesis/fusion/kuiklyui/bedlist/BedListPatientListContent.kt`
- 主渲染文件 SHA-256：`9AC183E5CBCF10CB7800CB48CFAB30513FEC501ED27F4B207278A62DCC1B8949`

## 保留内容

- 生产 BedList 的左右栏、患者卡片、动态高度和字段显隐；
- `全科` / `本组`、左侧分组、稳定 Lazy key 和 `contentType`；
- 237 条测试患者、多行长文本和风险标签；
- 跑马灯滚动保护：滚动期间暂停，停止约 `750 ms` 后恢复。

Demo 只做两处适配：

1. 仅在 BedList 组合树内使用 Android reference logical density；不缩放整个页面，也不修改 pager、Host 或其他路由。
2. 基于上述 MNIS 主线实现，将 OpenHarmony 上可能触发 `This mutex is not locked` 的 `Animatable.animateTo/snapTo` 循环改为同版本已有的 suspend `animate(...)`；跑马灯速度、位移和滚动暂停语义不变。

测试数据均为本地生成，不含账号、凭据、医院地址、病区编码、患者资料或网络 payload。

## 构建

使用 JDK 17、Gradle 7.6.3 和项目固定的 Kotlin/Native 工具链：

```text
set KUIKLY_AGP_VERSION=7.4.2
set KUIKLY_KOTLIN_VERSION=2.0.21-KBA-010
gradlew.bat -c settings.2.0.ohos.gradle.kts --no-daemon --max-workers=1 --console=plain :demo:linkSharedDebugSharedOhosArm64
```

将同一次 Debug 构建产生的文件复制到：

```text
demo/build/bin/ohosArm64/sharedDebugShared/libshared.so
  -> ohosApp/entry/libs/arm64-v8a/libshared.so

demo/build/bin/ohosArm64/sharedDebugShared/libshared_api.h
  -> ohosApp/entry/src/main/cpp/thirdparty/biz_entry/libshared_api.h
```

然后在 DevEco Studio 中打开 `ohosApp`，安装本地 OHPM 依赖，并使用自己的开发签名构建 `entry`。工程默认使用源码 `render` 模块；本地设备打包使用过的预构建 renderer 不在仓库中。

## 复现步骤

1. 启动应用，确认进入 `BedListOfflineRepro`。
2. 切换 `全科` / `本组` 和左侧患者分组。
3. 在长、短患者卡片之间快速反复 fling。
4. 重点观察多行过敏史或诊断跑马灯可见时，列表视口是否短暂变白或为空。

当前 Debug HAP 已完成构建、签名、安装、40 秒存活检查和人工手测。构建成功或一次手测未出现白帧，都不等价于框架问题已被证明消除。

## 仓库边界

仓库不包含构建缓存、`build/`、`oh_modules`、预构建 renderer、`entry/libs`、HAP/HAR/SO/JAR、日志、截图或签名材料；保留完整 Kuikly 源码、BedList 实现、资源和离线 fixture。
