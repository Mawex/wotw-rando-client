#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlendAnimation2D_Input {
        namespace {
            inline app::BlendAnimation2D_Input__Class* type_info_ref = nullptr;
        }
        inline app::BlendAnimation2D_Input__Class** type_info = &type_info_ref;
        inline app::BlendAnimation2D_Input__Class* get_class() {
            return il2cpp::get_nested_class<app::BlendAnimation2D_Input__Class>(type_info, "Moon", "BlendAnimation2D", "Input");
        }
        inline app::BlendAnimation2D_Input* create() {
            return il2cpp::create_object<app::BlendAnimation2D_Input>(get_class());
        }
        inline app::BlendAnimation2D_Input__Array* create_array(int size) {
            return il2cpp::array_new<app::BlendAnimation2D_Input__Array>(get_class(), size);
        }
        inline app::BlendAnimation2D_Input__Array* create_array(const std::vector<app::BlendAnimation2D_Input*>& items) {
            return il2cpp::array_new<app::BlendAnimation2D_Input__Array>(get_class(), items);
        }
    } // namespace BlendAnimation2D_Input
} // namespace app::classes::types
