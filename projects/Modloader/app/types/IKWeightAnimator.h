#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKWeightAnimator {
        namespace {
            inline app::IKWeightAnimator__Class* type_info_ref = nullptr;
        }
        inline app::IKWeightAnimator__Class** type_info = &type_info_ref;
        inline app::IKWeightAnimator__Class* get_class() {
            return il2cpp::get_class<app::IKWeightAnimator__Class>(type_info, "Moon.Timeline", "IKWeightAnimator");
        }
        inline app::IKWeightAnimator* create() {
            return il2cpp::create_object<app::IKWeightAnimator>(get_class());
        }
    } // namespace IKWeightAnimator
} // namespace app::classes::types
