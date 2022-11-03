#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RigidbodySerialize {
        namespace {
            inline app::RigidbodySerialize__Class* type_info_ref = nullptr;
        }
        inline app::RigidbodySerialize__Class** type_info = &type_info_ref;
        inline app::RigidbodySerialize__Class* get_class() {
            return il2cpp::get_class<app::RigidbodySerialize__Class>(type_info, "", "RigidbodySerialize");
        }
        inline app::RigidbodySerialize* create() {
            return il2cpp::create_object<app::RigidbodySerialize>(get_class());
        }
    } // namespace RigidbodySerialize
} // namespace app::classes::types
