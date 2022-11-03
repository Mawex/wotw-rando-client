#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValueTypeCopyInstruction {
        inline app::ValueTypeCopyInstruction__Class** type_info = (app::ValueTypeCopyInstruction__Class**)(modloader::win::memory::resolve_rva(0x04787028));
        inline app::ValueTypeCopyInstruction__Class* get_class() {
            return il2cpp::get_class<app::ValueTypeCopyInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "ValueTypeCopyInstruction");
        }
        inline app::ValueTypeCopyInstruction* create() {
            return il2cpp::create_object<app::ValueTypeCopyInstruction>(get_class());
        }
    } // namespace ValueTypeCopyInstruction
} // namespace app::classes::types
