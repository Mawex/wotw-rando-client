#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContactPoint {
        namespace {
            inline app::ContactPoint__Class* type_info_ref = nullptr;
        }
        inline app::ContactPoint__Class** type_info = &type_info_ref;
        inline app::ContactPoint__Class* get_class() {
            return il2cpp::get_class<app::ContactPoint__Class>(type_info, "UnityEngine", "ContactPoint");
        }
        inline app::ContactPoint* create() {
            return il2cpp::create_object<app::ContactPoint>(get_class());
        }
        inline app::ContactPoint__Boxed* box(app::ContactPoint value) {
            return il2cpp::box_value<app::ContactPoint__Boxed>(get_class(), value);
        }
        inline app::ContactPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactPoint__Array>(get_class(), size);
        }
        inline app::ContactPoint__Array* create_array(const std::vector<app::ContactPoint>& items) {
            return il2cpp::array_new<app::ContactPoint__Array>(get_class(), items);
        }
    } // namespace ContactPoint
} // namespace app::classes::types
