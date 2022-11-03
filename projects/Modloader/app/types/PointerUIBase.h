#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PointerUIBase {
        namespace {
            inline app::PointerUIBase__Class* type_info_ref = nullptr;
        }
        inline app::PointerUIBase__Class** type_info = &type_info_ref;
        inline app::PointerUIBase__Class* get_class() {
            return il2cpp::get_class<app::PointerUIBase__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PointerUIBase");
        }
        inline app::PointerUIBase* create() {
            return il2cpp::create_object<app::PointerUIBase>(get_class());
        }
    } // namespace PointerUIBase
} // namespace app::classes::types
