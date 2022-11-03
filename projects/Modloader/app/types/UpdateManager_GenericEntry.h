#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateManager_GenericEntry {
        inline app::UpdateManager_GenericEntry__Class** type_info = (app::UpdateManager_GenericEntry__Class**)(modloader::win::memory::resolve_rva(0x0476C7A8));
        inline app::UpdateManager_GenericEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::UpdateManager_GenericEntry__Class>(type_info, "Moon.Driver", "UpdateManager", "GenericEntry");
        }
        inline app::UpdateManager_GenericEntry* create() {
            return il2cpp::create_object<app::UpdateManager_GenericEntry>(get_class());
        }
        inline app::UpdateManager_GenericEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::UpdateManager_GenericEntry__Array>(get_class(), size);
        }
        inline app::UpdateManager_GenericEntry__Array* create_array(const std::vector<app::UpdateManager_GenericEntry*>& items) {
            return il2cpp::array_new<app::UpdateManager_GenericEntry__Array>(get_class(), items);
        }
    } // namespace UpdateManager_GenericEntry
} // namespace app::classes::types
