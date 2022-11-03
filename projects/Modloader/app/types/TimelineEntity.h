#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineEntity {
        inline app::TimelineEntity__Class** type_info = (app::TimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x04735218));
        inline app::TimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntity__Class>(type_info, "Moon.Timeline", "TimelineEntity");
        }
        inline app::TimelineEntity* create() {
            return il2cpp::create_object<app::TimelineEntity>(get_class());
        }
        inline app::TimelineEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::TimelineEntity__Array>(get_class(), size);
        }
        inline app::TimelineEntity__Array* create_array(const std::vector<app::TimelineEntity*>& items) {
            return il2cpp::array_new<app::TimelineEntity__Array>(get_class(), items);
        }
    } // namespace TimelineEntity
} // namespace app::classes::types
