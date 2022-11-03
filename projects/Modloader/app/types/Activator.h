#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Activator {
        namespace {
            inline app::Activator__Class* type_info_ref = nullptr;
        }
        inline app::Activator__Class** type_info = &type_info_ref;
        inline app::Activator__Class* get_class() {
            return il2cpp::get_class<app::Activator__Class>(type_info, "System", "Activator");
        }
        inline app::Activator* create() {
            return il2cpp::create_object<app::Activator>(get_class());
        }
    } // namespace Activator
} // namespace app::classes::types
