#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ErrorEventArgs {
        inline app::ErrorEventArgs__Class** type_info = (app::ErrorEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0473DAD8));
        inline app::ErrorEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ErrorEventArgs__Class>(type_info, "Newtonsoft.Json.Serialization", "ErrorEventArgs");
        }
        inline app::ErrorEventArgs* create() {
            return il2cpp::create_object<app::ErrorEventArgs>(get_class());
        }
    } // namespace ErrorEventArgs
} // namespace app::classes::types
