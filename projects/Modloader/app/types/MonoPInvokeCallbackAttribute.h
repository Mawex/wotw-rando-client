#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoPInvokeCallbackAttribute {
        namespace {
            inline app::MonoPInvokeCallbackAttribute__Class* type_info_ref = nullptr;
        }
        inline app::MonoPInvokeCallbackAttribute__Class** type_info = &type_info_ref;
        inline app::MonoPInvokeCallbackAttribute__Class* get_class() {
            return il2cpp::get_class<app::MonoPInvokeCallbackAttribute__Class>(type_info, "Mono.Util", "MonoPInvokeCallbackAttribute");
        }
        inline app::MonoPInvokeCallbackAttribute* create() {
            return il2cpp::create_object<app::MonoPInvokeCallbackAttribute>(get_class());
        }
    } // namespace MonoPInvokeCallbackAttribute
} // namespace app::classes::types
