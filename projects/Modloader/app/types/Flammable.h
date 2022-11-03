#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Flammable {
        namespace {
            inline app::Flammable__Class* type_info_ref = nullptr;
        }
        inline app::Flammable__Class** type_info = &type_info_ref;
        inline app::Flammable__Class* get_class() {
            return il2cpp::get_class<app::Flammable__Class>(type_info, "Moon", "Flammable");
        }
        inline app::Flammable* create() {
            return il2cpp::create_object<app::Flammable>(get_class());
        }
        inline app::Flammable__Array* create_array(int size) {
            return il2cpp::array_new<app::Flammable__Array>(get_class(), size);
        }
        inline app::Flammable__Array* create_array(const std::vector<app::Flammable*>& items) {
            return il2cpp::array_new<app::Flammable__Array>(get_class(), items);
        }
    } // namespace Flammable
} // namespace app::classes::types
