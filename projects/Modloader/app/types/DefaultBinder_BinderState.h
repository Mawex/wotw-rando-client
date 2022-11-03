#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultBinder_BinderState {
        inline app::DefaultBinder_BinderState__Class** type_info = (app::DefaultBinder_BinderState__Class**)(modloader::win::memory::resolve_rva(0x0474B778));
        inline app::DefaultBinder_BinderState__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultBinder_BinderState__Class>(type_info, "System", "DefaultBinder", "BinderState");
        }
        inline app::DefaultBinder_BinderState* create() {
            return il2cpp::create_object<app::DefaultBinder_BinderState>(get_class());
        }
    } // namespace DefaultBinder_BinderState
} // namespace app::classes::types
