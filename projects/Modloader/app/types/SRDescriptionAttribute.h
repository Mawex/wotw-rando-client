#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SRDescriptionAttribute {
        namespace {
            inline app::SRDescriptionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SRDescriptionAttribute__Class** type_info = &type_info_ref;
        inline app::SRDescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SRDescriptionAttribute__Class>(type_info, "System", "SRDescriptionAttribute");
        }
        inline app::SRDescriptionAttribute* create() {
            return il2cpp::create_object<app::SRDescriptionAttribute>(get_class());
        }
    } // namespace SRDescriptionAttribute
} // namespace app::classes::types
