#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TierUpdateEventData {
        namespace {
            inline app::TierUpdateEventData__Class* type_info_ref = nullptr;
        }
        inline app::TierUpdateEventData__Class** type_info = &type_info_ref;
        inline app::TierUpdateEventData__Class* get_class() {
            return il2cpp::get_class<app::TierUpdateEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TierUpdateEventData");
        }
        inline app::TierUpdateEventData* create() {
            return il2cpp::create_object<app::TierUpdateEventData>(get_class());
        }
    } // namespace TierUpdateEventData
} // namespace app::classes::types
