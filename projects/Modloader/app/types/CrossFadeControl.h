#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrossFadeControl {
        namespace {
            inline app::CrossFadeControl__Class* type_info_ref = nullptr;
        }
        inline app::CrossFadeControl__Class** type_info = &type_info_ref;
        inline app::CrossFadeControl__Class* get_class() {
            return il2cpp::get_class<app::CrossFadeControl__Class>(type_info, "", "CrossFadeControl");
        }
        inline app::CrossFadeControl* create() {
            return il2cpp::create_object<app::CrossFadeControl>(get_class());
        }
    } // namespace CrossFadeControl
} // namespace app::classes::types
