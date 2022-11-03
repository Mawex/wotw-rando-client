#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MessageRange {
        namespace {
            inline app::MessageRange__Class* type_info_ref = nullptr;
        }
        inline app::MessageRange__Class** type_info = &type_info_ref;
        inline app::MessageRange__Class* get_class() {
            return il2cpp::get_class<app::MessageRange__Class>(type_info, "Moon.Timeline", "MessageRange");
        }
        inline app::MessageRange* create() {
            return il2cpp::create_object<app::MessageRange>(get_class());
        }
        inline app::MessageRange__Boxed* box(app::MessageRange value) {
            return il2cpp::box_value<app::MessageRange__Boxed>(get_class(), value);
        }
    } // namespace MessageRange
} // namespace app::classes::types
