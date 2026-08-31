/*
 * Tencent is pleased to support the open source community by making KuiklyUI
 * available.
 * Copyright (C) 2025 Tencent. All rights reserved.
 * Licensed under the License of KuiklyUI;
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * https://github.com/Tencent-TDS/KuiklyUI/blob/main/LICENSE
 */

#include <cstdint>

#include "napi/native_api.h"
#include "thirdparty/biz_entry/libshared_api.h"

static napi_value InitKuikly(napi_env env, napi_callback_info) {
    int32_t result_value = -1;
    // The generated export header and libshared.so must come from the same Kotlin/Native link invocation.
    libshared_ExportedSymbols *api = libshared_symbols();
    if (api != nullptr && api->kotlin.root.initKuikly != nullptr) {
        result_value = api->kotlin.root.initKuikly();
    }

    napi_value result;
    napi_create_int32(env, result_value, &result);
    return result;
}

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports) {
    napi_property_descriptor desc[] = {
        {"initKuikly", nullptr, InitKuikly, nullptr, nullptr, nullptr, napi_default, nullptr},
    };
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module entry_module = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "kuikly_entry",
    .nm_priv = nullptr,
    .reserved = {nullptr},
};

extern "C" __attribute__((constructor)) void RegisterKuiklyEntryModule(void) {
    napi_module_register(&entry_module);
}
