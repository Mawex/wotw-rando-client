#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MulOvfInstruction_MulOvfUInt32 {
        inline app::MulOvfInstruction_MulOvfUInt32__Class** type_info = (app::MulOvfInstruction_MulOvfUInt32__Class**)(modloader::win::memory::resolve_rva(0x0475DDF0));
        inline app::MulOvfInstruction_MulOvfUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::MulOvfInstruction_MulOvfUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulOvfInstruction", "MulOvfUInt32");
        }
        inline app::MulOvfInstruction_MulOvfUInt32* create() {
            return il2cpp::create_object<app::MulOvfInstruction_MulOvfUInt32>(get_class());
        }
    } // namespace MulOvfInstruction_MulOvfUInt32
} // namespace app::classes::types
