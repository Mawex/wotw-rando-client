#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartSettings {
        namespace {
            inline app::CartSettings__Class* type_info_ref = nullptr;
        }
        inline app::CartSettings__Class** type_info = &type_info_ref;
        inline app::CartSettings__Class* get_class() {
            return il2cpp::get_class<app::CartSettings__Class>(type_info, "", "CartSettings");
        }
        inline app::CartSettings* create() {
            return il2cpp::create_object<app::CartSettings>(get_class());
        }
    } // namespace CartSettings
} // namespace app::classes::types
