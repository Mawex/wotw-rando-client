#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OperatorInfo {
        inline app::OperatorInfo__Class** type_info = (app::OperatorInfo__Class**)(modloader::win::memory::resolve_rva(0x04715458));
        inline app::OperatorInfo__Class* get_class() {
            return il2cpp::get_class<app::OperatorInfo__Class>(type_info, "System.Data", "OperatorInfo");
        }
        inline app::OperatorInfo* create() {
            return il2cpp::create_object<app::OperatorInfo>(get_class());
        }
        inline app::OperatorInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::OperatorInfo__Array>(get_class(), size);
        }
        inline app::OperatorInfo__Array* create_array(const std::vector<app::OperatorInfo*>& items) {
            return il2cpp::array_new<app::OperatorInfo__Array>(get_class(), items);
        }
    } // namespace OperatorInfo
} // namespace app::classes::types
