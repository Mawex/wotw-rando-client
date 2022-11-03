#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_GetValueOrDefault1 {
        inline app::NullableMethodCallInstruction_GetValueOrDefault1__Class** type_info = (app::NullableMethodCallInstruction_GetValueOrDefault1__Class**)(modloader::win::memory::resolve_rva(0x04787F08));
        inline app::NullableMethodCallInstruction_GetValueOrDefault1__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_GetValueOrDefault1__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "GetValueOrDefault1");
        }
        inline app::NullableMethodCallInstruction_GetValueOrDefault1* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_GetValueOrDefault1>(get_class());
        }
    } // namespace NullableMethodCallInstruction_GetValueOrDefault1
} // namespace app::classes::types
