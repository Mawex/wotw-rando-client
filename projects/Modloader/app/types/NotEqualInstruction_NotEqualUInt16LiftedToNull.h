#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualUInt16LiftedToNull {
        inline app::NotEqualInstruction_NotEqualUInt16LiftedToNull__Class** type_info = (app::NotEqualInstruction_NotEqualUInt16LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04718F48));
        inline app::NotEqualInstruction_NotEqualUInt16LiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualUInt16LiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualUInt16LiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualUInt16LiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualUInt16LiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualUInt16LiftedToNull
} // namespace app::classes::types
