#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateAssetMenuAttribute {
        namespace {
            inline app::CreateAssetMenuAttribute__Class* type_info_ref = nullptr;
        }
        inline app::CreateAssetMenuAttribute__Class** type_info = &type_info_ref;
        inline app::CreateAssetMenuAttribute__Class* get_class() {
            return il2cpp::get_class<app::CreateAssetMenuAttribute__Class>(type_info, "UnityEngine", "CreateAssetMenuAttribute");
        }
        inline app::CreateAssetMenuAttribute* create() {
            return il2cpp::create_object<app::CreateAssetMenuAttribute>(get_class());
        }
    } // namespace CreateAssetMenuAttribute
} // namespace app::classes::types
