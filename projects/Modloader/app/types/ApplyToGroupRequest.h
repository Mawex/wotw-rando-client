#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ApplyToGroupRequest {
        inline app::ApplyToGroupRequest__Class** type_info = (app::ApplyToGroupRequest__Class**)(modloader::win::memory::resolve_rva(0x04719AB8));
        inline app::ApplyToGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::ApplyToGroupRequest__Class>(type_info, "PlayFab.GroupsModels", "ApplyToGroupRequest");
        }
        inline app::ApplyToGroupRequest* create() {
            return il2cpp::create_object<app::ApplyToGroupRequest>(get_class());
        }
    } // namespace ApplyToGroupRequest
} // namespace app::classes::types
