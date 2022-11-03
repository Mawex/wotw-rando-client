#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Primitive {
        namespace {
            inline app::Primitive__Class* type_info_ref = nullptr;
        }
        inline app::Primitive__Class** type_info = &type_info_ref;
        inline app::Primitive__Class* get_class() {
            return il2cpp::get_class<app::Primitive__Class>(type_info, "Moon", "Primitive");
        }
        inline app::Primitive* create() {
            return il2cpp::create_object<app::Primitive>(get_class());
        }
    } // namespace Primitive
} // namespace app::classes::types
