#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsSceneUnloaded {
        namespace {
            inline app::IsSceneUnloaded__Class* type_info_ref = nullptr;
        }
        inline app::IsSceneUnloaded__Class** type_info = &type_info_ref;
        inline app::IsSceneUnloaded__Class* get_class() {
            return il2cpp::get_class<app::IsSceneUnloaded__Class>(type_info, "", "IsSceneUnloaded");
        }
        inline app::IsSceneUnloaded* create() {
            return il2cpp::create_object<app::IsSceneUnloaded>(get_class());
        }
    } // namespace IsSceneUnloaded
} // namespace app::classes::types
