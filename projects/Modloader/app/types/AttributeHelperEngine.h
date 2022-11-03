#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttributeHelperEngine {
        inline app::AttributeHelperEngine__Class** type_info = (app::AttributeHelperEngine__Class**)(modloader::win::memory::resolve_rva(0x0477B880));
        inline app::AttributeHelperEngine__Class* get_class() {
            return il2cpp::get_class<app::AttributeHelperEngine__Class>(type_info, "UnityEngine", "AttributeHelperEngine");
        }
        inline app::AttributeHelperEngine* create() {
            return il2cpp::create_object<app::AttributeHelperEngine>(get_class());
        }
    } // namespace AttributeHelperEngine
} // namespace app::classes::types
