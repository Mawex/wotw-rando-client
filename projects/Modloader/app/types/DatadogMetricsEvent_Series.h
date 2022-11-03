#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DatadogMetricsEvent_Series {
        inline app::DatadogMetricsEvent_Series__Class** type_info = (app::DatadogMetricsEvent_Series__Class**)(modloader::win::memory::resolve_rva(0x04785738));
        inline app::DatadogMetricsEvent_Series__Class* get_class() {
            return il2cpp::get_nested_class<app::DatadogMetricsEvent_Series__Class>(type_info, "", "DatadogMetricsEvent", "Series");
        }
        inline app::DatadogMetricsEvent_Series* create() {
            return il2cpp::create_object<app::DatadogMetricsEvent_Series>(get_class());
        }
        inline app::DatadogMetricsEvent_Series__Array* create_array(int size) {
            return il2cpp::array_new<app::DatadogMetricsEvent_Series__Array>(get_class(), size);
        }
        inline app::DatadogMetricsEvent_Series__Array* create_array(const std::vector<app::DatadogMetricsEvent_Series*>& items) {
            return il2cpp::array_new<app::DatadogMetricsEvent_Series__Array>(get_class(), items);
        }
    } // namespace DatadogMetricsEvent_Series
} // namespace app::classes::types
