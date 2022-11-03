#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileLoadException {
        inline app::FileLoadException__Class** type_info = (app::FileLoadException__Class**)(modloader::win::memory::resolve_rva(0x04718730));
        inline app::FileLoadException__Class* get_class() {
            return il2cpp::get_class<app::FileLoadException__Class>(type_info, "System.IO", "FileLoadException");
        }
        inline app::FileLoadException* create() {
            return il2cpp::create_object<app::FileLoadException>(get_class());
        }
    } // namespace FileLoadException
} // namespace app::classes::types
