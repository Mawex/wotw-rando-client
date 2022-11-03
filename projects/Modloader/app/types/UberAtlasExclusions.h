#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberAtlasExclusions {
        namespace {
            inline app::UberAtlasExclusions__Class* type_info_ref = nullptr;
        }
        inline app::UberAtlasExclusions__Class** type_info = &type_info_ref;
        inline app::UberAtlasExclusions__Class* get_class() {
            return il2cpp::get_class<app::UberAtlasExclusions__Class>(type_info, "", "UberAtlasExclusions");
        }
        inline app::UberAtlasExclusions* create() {
            return il2cpp::create_object<app::UberAtlasExclusions>(get_class());
        }
    } // namespace UberAtlasExclusions
} // namespace app::classes::types
