#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SubInstruction_SubUInt16 {
        inline app::SubInstruction_SubUInt16__Class** type_info = (app::SubInstruction_SubUInt16__Class**)(modloader::win::memory::resolve_rva(0x047101C8));
        inline app::SubInstruction_SubUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::SubInstruction_SubUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubInstruction", "SubUInt16");
        }
        inline app::SubInstruction_SubUInt16* create() {
            return il2cpp::create_object<app::SubInstruction_SubUInt16>(get_class());
        }
    } // namespace SubInstruction_SubUInt16
} // namespace app::classes::types
