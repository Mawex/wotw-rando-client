#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AreaMapIcon {
        namespace {
            inline app::AreaMapIcon__Class* type_info_ref = nullptr;
        }
        inline app::AreaMapIcon__Class** type_info = &type_info_ref;
        inline app::AreaMapIcon__Class* get_class() {
            return il2cpp::get_class<app::AreaMapIcon__Class>(type_info, "", "AreaMapIcon");
        }
        inline app::AreaMapIcon* create() {
            return il2cpp::create_object<app::AreaMapIcon>(get_class());
        }
    } // namespace AreaMapIcon
} // namespace app::classes::types
