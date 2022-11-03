#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddOvfInstruction_AddOvfUInt16 {
        inline app::AddOvfInstruction_AddOvfUInt16__Class** type_info = (app::AddOvfInstruction_AddOvfUInt16__Class**)(modloader::win::memory::resolve_rva(0x04769950));
        inline app::AddOvfInstruction_AddOvfUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::AddOvfInstruction_AddOvfUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddOvfInstruction", "AddOvfUInt16");
        }
        inline app::AddOvfInstruction_AddOvfUInt16* create() {
            return il2cpp::create_object<app::AddOvfInstruction_AddOvfUInt16>(get_class());
        }
    } // namespace AddOvfInstruction_AddOvfUInt16
} // namespace app::classes::types
