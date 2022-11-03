#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicLookup {
        namespace {
            inline app::DynamicLookup__Class* type_info_ref = nullptr;
        }
        inline app::DynamicLookup__Class** type_info = &type_info_ref;
        inline app::DynamicLookup__Class* get_class() {
            return il2cpp::get_class<app::DynamicLookup__Class>(type_info, "Colorful", "DynamicLookup");
        }
        inline app::DynamicLookup* create() {
            return il2cpp::create_object<app::DynamicLookup>(get_class());
        }
    } // namespace DynamicLookup
} // namespace app::classes::types
