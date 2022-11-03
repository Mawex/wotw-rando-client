#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderlingMoveFastBehaviour {
        namespace {
            inline app::SpiderlingMoveFastBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderlingMoveFastBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderlingMoveFastBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingMoveFastBehaviour__Class>(type_info, "Moon", "SpiderlingMoveFastBehaviour");
        }
        inline app::SpiderlingMoveFastBehaviour* create() {
            return il2cpp::create_object<app::SpiderlingMoveFastBehaviour>(get_class());
        }
    } // namespace SpiderlingMoveFastBehaviour
} // namespace app::classes::types
