#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RespawningPlaceholderSpawnAction {
        namespace {
            inline app::RespawningPlaceholderSpawnAction__Class* type_info_ref = nullptr;
        }
        inline app::RespawningPlaceholderSpawnAction__Class** type_info = &type_info_ref;
        inline app::RespawningPlaceholderSpawnAction__Class* get_class() {
            return il2cpp::get_class<app::RespawningPlaceholderSpawnAction__Class>(type_info, "", "RespawningPlaceholderSpawnAction");
        }
        inline app::RespawningPlaceholderSpawnAction* create() {
            return il2cpp::create_object<app::RespawningPlaceholderSpawnAction>(get_class());
        }
    } // namespace RespawningPlaceholderSpawnAction
} // namespace app::classes::types
