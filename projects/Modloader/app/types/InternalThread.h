#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InternalThread {
        namespace {
            inline app::InternalThread__Class* type_info_ref = nullptr;
        }
        inline app::InternalThread__Class** type_info = &type_info_ref;
        inline app::InternalThread__Class* get_class() {
            return il2cpp::get_class<app::InternalThread__Class>(type_info, "System.Threading", "InternalThread");
        }
        inline app::InternalThread* create() {
            return il2cpp::create_object<app::InternalThread>(get_class());
        }
    } // namespace InternalThread
} // namespace app::classes::types
