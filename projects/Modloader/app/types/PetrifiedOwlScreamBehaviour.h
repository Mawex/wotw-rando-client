#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlScreamBehaviour {
        namespace {
            inline app::PetrifiedOwlScreamBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlScreamBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlScreamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlScreamBehaviour__Class>(type_info, "Moon", "PetrifiedOwlScreamBehaviour");
        }
        inline app::PetrifiedOwlScreamBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlScreamBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlScreamBehaviour
} // namespace app::classes::types
