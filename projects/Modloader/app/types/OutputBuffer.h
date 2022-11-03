#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OutputBuffer {
        inline app::OutputBuffer__Class** type_info = (app::OutputBuffer__Class**)(modloader::win::memory::resolve_rva(0x0475C888));
        inline app::OutputBuffer__Class* get_class() {
            return il2cpp::get_class<app::OutputBuffer__Class>(type_info, "Unity.IO.Compression", "OutputBuffer");
        }
        inline app::OutputBuffer* create() {
            return il2cpp::create_object<app::OutputBuffer>(get_class());
        }
    } // namespace OutputBuffer
} // namespace app::classes::types
