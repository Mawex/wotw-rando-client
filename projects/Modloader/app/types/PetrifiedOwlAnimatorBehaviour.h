#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlAnimatorBehaviour {
        namespace {
            inline app::PetrifiedOwlAnimatorBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlAnimatorBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlAnimatorBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlAnimatorBehaviour__Class>(type_info, "Moon", "PetrifiedOwlAnimatorBehaviour");
        }
        inline app::PetrifiedOwlAnimatorBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlAnimatorBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlAnimatorBehaviour
} // namespace app::classes::types
