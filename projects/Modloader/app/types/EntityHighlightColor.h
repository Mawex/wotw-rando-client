#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityHighlightColor {
        namespace {
            inline app::EntityHighlightColor__Class* type_info_ref = nullptr;
        }
        inline app::EntityHighlightColor__Class** type_info = &type_info_ref;
        inline app::EntityHighlightColor__Class* get_class() {
            return il2cpp::get_class<app::EntityHighlightColor__Class>(type_info, "", "EntityHighlightColor");
        }
        inline app::EntityHighlightColor* create() {
            return il2cpp::create_object<app::EntityHighlightColor>(get_class());
        }
    } // namespace EntityHighlightColor
} // namespace app::classes::types
