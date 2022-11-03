#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FovZoneModifier {
        namespace {
            inline app::FovZoneModifier__Class* type_info_ref = nullptr;
        }
        inline app::FovZoneModifier__Class** type_info = &type_info_ref;
        inline app::FovZoneModifier__Class* get_class() {
            return il2cpp::get_class<app::FovZoneModifier__Class>(type_info, "", "FovZoneModifier");
        }
        inline app::FovZoneModifier* create() {
            return il2cpp::create_object<app::FovZoneModifier>(get_class());
        }
    } // namespace FovZoneModifier
} // namespace app::classes::types
