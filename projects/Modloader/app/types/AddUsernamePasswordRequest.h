#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddUsernamePasswordRequest {
        inline app::AddUsernamePasswordRequest__Class** type_info = (app::AddUsernamePasswordRequest__Class**)(modloader::win::memory::resolve_rva(0x04754028));
        inline app::AddUsernamePasswordRequest__Class* get_class() {
            return il2cpp::get_class<app::AddUsernamePasswordRequest__Class>(type_info, "PlayFab.ClientModels", "AddUsernamePasswordRequest");
        }
        inline app::AddUsernamePasswordRequest* create() {
            return il2cpp::create_object<app::AddUsernamePasswordRequest>(get_class());
        }
    } // namespace AddUsernamePasswordRequest
} // namespace app::classes::types
