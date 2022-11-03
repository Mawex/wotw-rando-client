#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExtendedPropertyDescriptor {
        inline app::ExtendedPropertyDescriptor__Class** type_info = (app::ExtendedPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04729BC0));
        inline app::ExtendedPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::ExtendedPropertyDescriptor__Class>(type_info, "System.ComponentModel", "ExtendedPropertyDescriptor");
        }
        inline app::ExtendedPropertyDescriptor* create() {
            return il2cpp::create_object<app::ExtendedPropertyDescriptor>(get_class());
        }
    } // namespace ExtendedPropertyDescriptor
} // namespace app::classes::types
