#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarSpitBehaviour {
        namespace {
            inline app::MortarSpitBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MortarSpitBehaviour__Class** type_info = &type_info_ref;
        inline app::MortarSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MortarSpitBehaviour__Class>(type_info, "", "MortarSpitBehaviour");
        }
        inline app::MortarSpitBehaviour* create() {
            return il2cpp::create_object<app::MortarSpitBehaviour>(get_class());
        }
    } // namespace MortarSpitBehaviour
} // namespace app::classes::types
