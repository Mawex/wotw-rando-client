#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry {
        inline app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Class** type_info = (app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Class**)(modloader::win::memory::resolve_rva(0x047823E0));
        inline app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Class>(type_info, "", "GhostWorldObjectsLifetimePlugin", "RecordableTrackingEntry");
        }
        inline app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry* create() {
            return il2cpp::create_object<app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry>(get_class());
        }
        inline app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array>(get_class(), size);
        }
        inline app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array* create_array(const std::vector<app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry*>& items) {
            return il2cpp::array_new<app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array>(get_class(), items);
        }
    } // namespace GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry
} // namespace app::classes::types
