#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrounderIK {
        namespace {
            inline app::GrounderIK__Class* type_info_ref = nullptr;
        }
        inline app::GrounderIK__Class** type_info = &type_info_ref;
        inline app::GrounderIK__Class* get_class() {
            return il2cpp::get_class<app::GrounderIK__Class>(type_info, "RootMotion.FinalIK", "GrounderIK");
        }
        inline app::GrounderIK* create() {
            return il2cpp::create_object<app::GrounderIK>(get_class());
        }
    } // namespace GrounderIK
} // namespace app::classes::types
