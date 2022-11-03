#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MocupAnimator {
        namespace {
            inline app::MocupAnimator__Class* type_info_ref = nullptr;
        }
        inline app::MocupAnimator__Class** type_info = &type_info_ref;
        inline app::MocupAnimator__Class* get_class() {
            return il2cpp::get_class<app::MocupAnimator__Class>(type_info, "", "MocupAnimator");
        }
        inline app::MocupAnimator* create() {
            return il2cpp::create_object<app::MocupAnimator>(get_class());
        }
    } // namespace MocupAnimator
} // namespace app::classes::types
