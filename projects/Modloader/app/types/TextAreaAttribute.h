#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextAreaAttribute {
        namespace {
            inline app::TextAreaAttribute__Class* type_info_ref = nullptr;
        }
        inline app::TextAreaAttribute__Class** type_info = &type_info_ref;
        inline app::TextAreaAttribute__Class* get_class() {
            return il2cpp::get_class<app::TextAreaAttribute__Class>(type_info, "UnityEngine", "TextAreaAttribute");
        }
        inline app::TextAreaAttribute* create() {
            return il2cpp::create_object<app::TextAreaAttribute>(get_class());
        }
    } // namespace TextAreaAttribute
} // namespace app::classes::types
