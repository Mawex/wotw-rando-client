#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimelineStateObserver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITimelineStateObserver__Class** type_info;
        inline app::ITimelineStateObserver__Class* get_class() {
            return il2cpp::get_class<app::ITimelineStateObserver__Class>(type_info, "Moon.Timeline", "ITimelineStateObserver");
        }
        inline app::ITimelineStateObserver* create() {
            return il2cpp::create_object<app::ITimelineStateObserver>(get_class());
        }
        inline app::ITimelineStateObserver__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimelineStateObserver__Array>(get_class(), size);
        }
    } // namespace ITimelineStateObserver
} // namespace app::classes::types
