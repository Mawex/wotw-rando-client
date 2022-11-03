#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaurInteractionBehaviour {
        namespace {
            inline app::BaurInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::BaurInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::BaurInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::BaurInteractionBehaviour__Class>(type_info, "", "BaurInteractionBehaviour");
        }
        inline app::BaurInteractionBehaviour* create() {
            return il2cpp::create_object<app::BaurInteractionBehaviour>(get_class());
        }
    } // namespace BaurInteractionBehaviour
} // namespace app::classes::types
