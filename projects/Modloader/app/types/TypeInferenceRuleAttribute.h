#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeInferenceRuleAttribute {
        namespace {
            inline app::TypeInferenceRuleAttribute__Class* type_info_ref = nullptr;
        }
        inline app::TypeInferenceRuleAttribute__Class** type_info = &type_info_ref;
        inline app::TypeInferenceRuleAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeInferenceRuleAttribute__Class>(type_info, "UnityEngineInternal", "TypeInferenceRuleAttribute");
        }
        inline app::TypeInferenceRuleAttribute* create() {
            return il2cpp::create_object<app::TypeInferenceRuleAttribute>(get_class());
        }
    } // namespace TypeInferenceRuleAttribute
} // namespace app::classes::types
