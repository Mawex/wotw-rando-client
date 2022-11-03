#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsDescriptionAttribute {
        namespace {
            inline app::SettingsDescriptionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SettingsDescriptionAttribute__Class** type_info = &type_info_ref;
        inline app::SettingsDescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsDescriptionAttribute__Class>(type_info, "System.Configuration", "SettingsDescriptionAttribute");
        }
        inline app::SettingsDescriptionAttribute* create() {
            return il2cpp::create_object<app::SettingsDescriptionAttribute>(get_class());
        }
    } // namespace SettingsDescriptionAttribute
} // namespace app::classes::types
