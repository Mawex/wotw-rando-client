#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimator_Blend2DInstance {
        namespace {
            inline app::MoonAnimator_Blend2DInstance__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimator_Blend2DInstance__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_Blend2DInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_Blend2DInstance__Class>(type_info, "Moon", "MoonAnimator", "Blend2DInstance");
        }
        inline app::MoonAnimator_Blend2DInstance* create() {
            return il2cpp::create_object<app::MoonAnimator_Blend2DInstance>(get_class());
        }
        inline app::MoonAnimator_Blend2DInstance__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_Blend2DInstance__Array>(get_class(), size);
        }
        inline app::MoonAnimator_Blend2DInstance__Array* create_array(const std::vector<app::MoonAnimator_Blend2DInstance*>& items) {
            return il2cpp::array_new<app::MoonAnimator_Blend2DInstance__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_Blend2DInstance
} // namespace app::classes::types
