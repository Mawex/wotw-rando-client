#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoModule {
        namespace {
            inline app::MonoModule__Class* type_info_ref = nullptr;
        }
        inline app::MonoModule__Class** type_info = &type_info_ref;
        inline app::MonoModule__Class* get_class() {
            return il2cpp::get_class<app::MonoModule__Class>(type_info, "System.Reflection", "MonoModule");
        }
        inline app::MonoModule* create() {
            return il2cpp::create_object<app::MonoModule>(get_class());
        }
    } // namespace MonoModule
} // namespace app::classes::types
