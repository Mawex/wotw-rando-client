#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTime {
        inline app::DateTime__Class** type_info = (app::DateTime__Class**)(modloader::win::memory::resolve_rva(0x04706D38));
        inline app::DateTime__Class* get_class() {
            return il2cpp::get_class<app::DateTime__Class>(type_info, "System", "DateTime");
        }
        inline app::DateTime* create() {
            return il2cpp::create_object<app::DateTime>(get_class());
        }
        inline app::DateTime__Boxed* box(app::DateTime value) {
            return il2cpp::box_value<app::DateTime__Boxed>(get_class(), value);
        }
        inline app::DateTime__Array* create_array(int size) {
            return il2cpp::array_new<app::DateTime__Array>(get_class(), size);
        }
        inline app::DateTime__Array* create_array(const std::vector<app::DateTime>& items) {
            return il2cpp::array_new<app::DateTime__Array>(get_class(), items);
        }
    } // namespace DateTime
} // namespace app::classes::types
