#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MothAgroSelector {
        namespace {
            inline app::MothAgroSelector__Class* type_info_ref = nullptr;
        }
        inline app::MothAgroSelector__Class** type_info = &type_info_ref;
        inline app::MothAgroSelector__Class* get_class() {
            return il2cpp::get_class<app::MothAgroSelector__Class>(type_info, "", "MothAgroSelector");
        }
        inline app::MothAgroSelector* create() {
            return il2cpp::create_object<app::MothAgroSelector>(get_class());
        }
    } // namespace MothAgroSelector
} // namespace app::classes::types
