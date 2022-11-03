#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IntStateMap {
        namespace {
            inline app::IntStateMap__Class* type_info_ref = nullptr;
        }
        inline app::IntStateMap__Class** type_info = &type_info_ref;
        inline app::IntStateMap__Class* get_class() {
            return il2cpp::get_class<app::IntStateMap__Class>(type_info, "", "IntStateMap");
        }
        inline app::IntStateMap* create() {
            return il2cpp::create_object<app::IntStateMap>(get_class());
        }
    } // namespace IntStateMap
} // namespace app::classes::types
