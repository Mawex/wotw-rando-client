#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EncodedStreamFactory {
        namespace {
            inline app::EncodedStreamFactory__Class* type_info_ref = nullptr;
        }
        inline app::EncodedStreamFactory__Class** type_info = &type_info_ref;
        inline app::EncodedStreamFactory__Class* get_class() {
            return il2cpp::get_class<app::EncodedStreamFactory__Class>(type_info, "System.Net.Mime", "EncodedStreamFactory");
        }
        inline app::EncodedStreamFactory* create() {
            return il2cpp::create_object<app::EncodedStreamFactory>(get_class());
        }
    } // namespace EncodedStreamFactory
} // namespace app::classes::types
