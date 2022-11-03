#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RefreshPropertiesAttribute {
        inline app::RefreshPropertiesAttribute__Class** type_info = (app::RefreshPropertiesAttribute__Class**)(modloader::win::memory::resolve_rva(0x04729610));
        inline app::RefreshPropertiesAttribute__Class* get_class() {
            return il2cpp::get_class<app::RefreshPropertiesAttribute__Class>(type_info, "System.ComponentModel", "RefreshPropertiesAttribute");
        }
        inline app::RefreshPropertiesAttribute* create() {
            return il2cpp::create_object<app::RefreshPropertiesAttribute>(get_class());
        }
    } // namespace RefreshPropertiesAttribute
} // namespace app::classes::types
