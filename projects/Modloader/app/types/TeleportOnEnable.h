#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TeleportOnEnable {
        namespace {
            inline app::TeleportOnEnable__Class* type_info_ref = nullptr;
        }
        inline app::TeleportOnEnable__Class** type_info = &type_info_ref;
        inline app::TeleportOnEnable__Class* get_class() {
            return il2cpp::get_class<app::TeleportOnEnable__Class>(type_info, "", "TeleportOnEnable");
        }
        inline app::TeleportOnEnable* create() {
            return il2cpp::create_object<app::TeleportOnEnable>(get_class());
        }
    } // namespace TeleportOnEnable
} // namespace app::classes::types
