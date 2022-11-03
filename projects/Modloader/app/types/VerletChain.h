#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletChain {
        namespace {
            inline app::VerletChain__Class* type_info_ref = nullptr;
        }
        inline app::VerletChain__Class** type_info = &type_info_ref;
        inline app::VerletChain__Class* get_class() {
            return il2cpp::get_class<app::VerletChain__Class>(type_info, "", "VerletChain");
        }
        inline app::VerletChain* create() {
            return il2cpp::create_object<app::VerletChain>(get_class());
        }
    } // namespace VerletChain
} // namespace app::classes::types
