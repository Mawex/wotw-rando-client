#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowInteractiveTextEntity {
        namespace {
            inline app::ShowInteractiveTextEntity__Class* type_info_ref = nullptr;
        }
        inline app::ShowInteractiveTextEntity__Class** type_info = &type_info_ref;
        inline app::ShowInteractiveTextEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowInteractiveTextEntity__Class>(type_info, "Moon.Timeline", "ShowInteractiveTextEntity");
        }
        inline app::ShowInteractiveTextEntity* create() {
            return il2cpp::create_object<app::ShowInteractiveTextEntity>(get_class());
        }
    } // namespace ShowInteractiveTextEntity
} // namespace app::classes::types
