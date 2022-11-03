#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyFloatAnimationParameterAnimator {
        namespace {
            inline app::LegacyFloatAnimationParameterAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyFloatAnimationParameterAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyFloatAnimationParameterAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyFloatAnimationParameterAnimator__Class>(type_info, "", "LegacyFloatAnimationParameterAnimator");
        }
        inline app::LegacyFloatAnimationParameterAnimator* create() {
            return il2cpp::create_object<app::LegacyFloatAnimationParameterAnimator>(get_class());
        }
    } // namespace LegacyFloatAnimationParameterAnimator
} // namespace app::classes::types
