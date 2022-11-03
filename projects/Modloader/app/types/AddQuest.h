#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddQuest {
        namespace {
            inline app::AddQuest__Class* type_info_ref = nullptr;
        }
        inline app::AddQuest__Class** type_info = &type_info_ref;
        inline app::AddQuest__Class* get_class() {
            return il2cpp::get_class<app::AddQuest__Class>(type_info, "", "AddQuest");
        }
        inline app::AddQuest* create() {
            return il2cpp::create_object<app::AddQuest>(get_class());
        }
    } // namespace AddQuest
} // namespace app::classes::types
