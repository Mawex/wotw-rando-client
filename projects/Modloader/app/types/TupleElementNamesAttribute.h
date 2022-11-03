#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TupleElementNamesAttribute {
        namespace {
            inline app::TupleElementNamesAttribute__Class* type_info_ref = nullptr;
        }
        inline app::TupleElementNamesAttribute__Class** type_info = &type_info_ref;
        inline app::TupleElementNamesAttribute__Class* get_class() {
            return il2cpp::get_class<app::TupleElementNamesAttribute__Class>(type_info, "System.Runtime.CompilerServices", "TupleElementNamesAttribute");
        }
        inline app::TupleElementNamesAttribute* create() {
            return il2cpp::create_object<app::TupleElementNamesAttribute>(get_class());
        }
    } // namespace TupleElementNamesAttribute
} // namespace app::classes::types
