#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PreserveParticleDampening {
        namespace {
            inline app::PreserveParticleDampening__Class* type_info_ref = nullptr;
        }
        inline app::PreserveParticleDampening__Class** type_info = &type_info_ref;
        inline app::PreserveParticleDampening__Class* get_class() {
            return il2cpp::get_class<app::PreserveParticleDampening__Class>(type_info, "", "PreserveParticleDampening");
        }
        inline app::PreserveParticleDampening* create() {
            return il2cpp::create_object<app::PreserveParticleDampening>(get_class());
        }
    } // namespace PreserveParticleDampening
} // namespace app::classes::types
