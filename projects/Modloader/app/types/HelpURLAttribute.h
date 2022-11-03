#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HelpURLAttribute {
        namespace {
            inline app::HelpURLAttribute__Class* type_info_ref = nullptr;
        }
        inline app::HelpURLAttribute__Class** type_info = &type_info_ref;
        inline app::HelpURLAttribute__Class* get_class() {
            return il2cpp::get_class<app::HelpURLAttribute__Class>(type_info, "UnityEngine", "HelpURLAttribute");
        }
        inline app::HelpURLAttribute* create() {
            return il2cpp::create_object<app::HelpURLAttribute>(get_class());
        }
    } // namespace HelpURLAttribute
} // namespace app::classes::types
