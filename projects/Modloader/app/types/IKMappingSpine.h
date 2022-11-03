#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKMappingSpine {
        inline app::IKMappingSpine__Class** type_info = (app::IKMappingSpine__Class**)(modloader::win::memory::resolve_rva(0x04713C00));
        inline app::IKMappingSpine__Class* get_class() {
            return il2cpp::get_class<app::IKMappingSpine__Class>(type_info, "RootMotion.FinalIK", "IKMappingSpine");
        }
        inline app::IKMappingSpine* create() {
            return il2cpp::create_object<app::IKMappingSpine>(get_class());
        }
    } // namespace IKMappingSpine
} // namespace app::classes::types
