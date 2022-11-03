#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoAsyncCall {
        namespace {
            inline app::MonoAsyncCall__Class* type_info_ref = nullptr;
        }
        inline app::MonoAsyncCall__Class** type_info = &type_info_ref;
        inline app::MonoAsyncCall__Class* get_class() {
            return il2cpp::get_class<app::MonoAsyncCall__Class>(type_info, "System", "MonoAsyncCall");
        }
        inline app::MonoAsyncCall* create() {
            return il2cpp::create_object<app::MonoAsyncCall>(get_class());
        }
    } // namespace MonoAsyncCall
} // namespace app::classes::types
