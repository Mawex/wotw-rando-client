#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CRC32 {
        inline app::CRC32__Class** type_info = (app::CRC32__Class**)(modloader::win::memory::resolve_rva(0x0478FFC8));
        inline app::CRC32__Class* get_class() {
            return il2cpp::get_class<app::CRC32__Class>(type_info, "Ionic.Crc", "CRC32");
        }
        inline app::CRC32* create() {
            return il2cpp::create_object<app::CRC32>(get_class());
        }
    } // namespace CRC32
} // namespace app::classes::types
