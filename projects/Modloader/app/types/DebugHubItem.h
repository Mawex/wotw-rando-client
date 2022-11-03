#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugHubItem {
        inline app::DebugHubItem__Class** type_info = (app::DebugHubItem__Class**)(modloader::win::memory::resolve_rva(0x04783D20));
        inline app::DebugHubItem__Class* get_class() {
            return il2cpp::get_class<app::DebugHubItem__Class>(type_info, "", "DebugHubItem");
        }
        inline app::DebugHubItem* create() {
            return il2cpp::create_object<app::DebugHubItem>(get_class());
        }
        inline app::DebugHubItem__Array* create_array(int size) {
            return il2cpp::array_new<app::DebugHubItem__Array>(get_class(), size);
        }
        inline app::DebugHubItem__Array* create_array(const std::vector<app::DebugHubItem*>& items) {
            return il2cpp::array_new<app::DebugHubItem__Array>(get_class(), items);
        }
    } // namespace DebugHubItem
} // namespace app::classes::types
