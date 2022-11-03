#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateCharacterStatisticsRequest {
        inline app::UpdateCharacterStatisticsRequest__Class** type_info = (app::UpdateCharacterStatisticsRequest__Class**)(modloader::win::memory::resolve_rva(0x047607A8));
        inline app::UpdateCharacterStatisticsRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterStatisticsRequest__Class>(type_info, "PlayFab.ClientModels", "UpdateCharacterStatisticsRequest");
        }
        inline app::UpdateCharacterStatisticsRequest* create() {
            return il2cpp::create_object<app::UpdateCharacterStatisticsRequest>(get_class());
        }
    } // namespace UpdateCharacterStatisticsRequest
} // namespace app::classes::types
