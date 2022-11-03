#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FadingSound {
        namespace {
            inline app::FadingSound__Class* type_info_ref = nullptr;
        }
        inline app::FadingSound__Class** type_info = &type_info_ref;
        inline app::FadingSound__Class* get_class() {
            return il2cpp::get_class<app::FadingSound__Class>(type_info, "", "FadingSound");
        }
        inline app::FadingSound* create() {
            return il2cpp::create_object<app::FadingSound>(get_class());
        }
        inline app::FadingSound__Array* create_array(int size) {
            return il2cpp::array_new<app::FadingSound__Array>(get_class(), size);
        }
        inline app::FadingSound__Array* create_array(const std::vector<app::FadingSound*>& items) {
            return il2cpp::array_new<app::FadingSound__Array>(get_class(), items);
        }
    } // namespace FadingSound
} // namespace app::classes::types
