#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KamikazeJumperKillOnHit {
        namespace {
            inline app::KamikazeJumperKillOnHit__Class* type_info_ref = nullptr;
        }
        inline app::KamikazeJumperKillOnHit__Class** type_info = &type_info_ref;
        inline app::KamikazeJumperKillOnHit__Class* get_class() {
            return il2cpp::get_class<app::KamikazeJumperKillOnHit__Class>(type_info, "", "KamikazeJumperKillOnHit");
        }
        inline app::KamikazeJumperKillOnHit* create() {
            return il2cpp::create_object<app::KamikazeJumperKillOnHit>(get_class());
        }
    } // namespace KamikazeJumperKillOnHit
} // namespace app::classes::types
