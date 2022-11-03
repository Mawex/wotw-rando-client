#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsIEnumerableConverter {
        inline app::fsIEnumerableConverter__Class** type_info = (app::fsIEnumerableConverter__Class**)(modloader::win::memory::resolve_rva(0x04755830));
        inline app::fsIEnumerableConverter__Class* get_class() {
            return il2cpp::get_class<app::fsIEnumerableConverter__Class>(type_info, "FullSerializer.Internal", "fsIEnumerableConverter");
        }
        inline app::fsIEnumerableConverter* create() {
            return il2cpp::create_object<app::fsIEnumerableConverter>(get_class());
        }
    } // namespace fsIEnumerableConverter
} // namespace app::classes::types
