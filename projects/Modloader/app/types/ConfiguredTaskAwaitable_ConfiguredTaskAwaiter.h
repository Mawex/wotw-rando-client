#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfiguredTaskAwaitable_ConfiguredTaskAwaiter {
        namespace {
            inline app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Class* type_info_ref = nullptr;
        }
        inline app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Class** type_info = &type_info_ref;
        inline app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Class* get_class() {
            return il2cpp::get_nested_class<app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Class>(type_info, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable", "ConfiguredTaskAwaiter");
        }
        inline app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter* create() {
            return il2cpp::create_object<app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(get_class());
        }
        inline app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Boxed* box(app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter value) {
            return il2cpp::box_value<app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Boxed>(get_class(), value);
        }
    } // namespace ConfiguredTaskAwaitable_ConfiguredTaskAwaiter
} // namespace app::classes::types
