#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TitleDeletedTaskEventData {
        namespace {
            inline app::TitleDeletedTaskEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleDeletedTaskEventData__Class** type_info = &type_info_ref;
        inline app::TitleDeletedTaskEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleDeletedTaskEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleDeletedTaskEventData");
        }
        inline app::TitleDeletedTaskEventData* create() {
            return il2cpp::create_object<app::TitleDeletedTaskEventData>(get_class());
        }
    } // namespace TitleDeletedTaskEventData
} // namespace app::classes::types
