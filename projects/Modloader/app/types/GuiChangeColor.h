#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GuiChangeColor {
        namespace {
            inline app::GuiChangeColor__Class* type_info_ref = nullptr;
        }
        inline app::GuiChangeColor__Class** type_info = &type_info_ref;
        inline app::GuiChangeColor__Class* get_class() {
            return il2cpp::get_class<app::GuiChangeColor__Class>(type_info, "Moon.Gui", "GuiChangeColor");
        }
        inline app::GuiChangeColor* create() {
            return il2cpp::create_object<app::GuiChangeColor>(get_class());
        }
    } // namespace GuiChangeColor
} // namespace app::classes::types
