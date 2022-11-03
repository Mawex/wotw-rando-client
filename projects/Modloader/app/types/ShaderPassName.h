#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderPassName {
        namespace {
            inline app::ShaderPassName__Class* type_info_ref = nullptr;
        }
        inline app::ShaderPassName__Class** type_info = &type_info_ref;
        inline app::ShaderPassName__Class* get_class() {
            return il2cpp::get_class<app::ShaderPassName__Class>(type_info, "UnityEngine.Experimental.Rendering", "ShaderPassName");
        }
        inline app::ShaderPassName* create() {
            return il2cpp::create_object<app::ShaderPassName>(get_class());
        }
        inline app::ShaderPassName__Boxed* box(app::ShaderPassName value) {
            return il2cpp::box_value<app::ShaderPassName__Boxed>(get_class(), value);
        }
    } // namespace ShaderPassName
} // namespace app::classes::types
