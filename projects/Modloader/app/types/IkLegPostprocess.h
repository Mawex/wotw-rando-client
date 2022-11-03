#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IkLegPostprocess {
        namespace {
            inline app::IkLegPostprocess__Class* type_info_ref = nullptr;
        }
        inline app::IkLegPostprocess__Class** type_info = &type_info_ref;
        inline app::IkLegPostprocess__Class* get_class() {
            return il2cpp::get_class<app::IkLegPostprocess__Class>(type_info, "Moon", "IkLegPostprocess");
        }
        inline app::IkLegPostprocess* create() {
            return il2cpp::create_object<app::IkLegPostprocess>(get_class());
        }
    } // namespace IkLegPostprocess
} // namespace app::classes::types
