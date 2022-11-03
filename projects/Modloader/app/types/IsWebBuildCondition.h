#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsWebBuildCondition {
        namespace {
            inline app::IsWebBuildCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsWebBuildCondition__Class** type_info = &type_info_ref;
        inline app::IsWebBuildCondition__Class* get_class() {
            return il2cpp::get_class<app::IsWebBuildCondition__Class>(type_info, "", "IsWebBuildCondition");
        }
        inline app::IsWebBuildCondition* create() {
            return il2cpp::create_object<app::IsWebBuildCondition>(get_class());
        }
    } // namespace IsWebBuildCondition
} // namespace app::classes::types
