#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayableBinding {
        inline app::PlayableBinding__Class** type_info = (app::PlayableBinding__Class**)(modloader::win::memory::resolve_rva(0x047816B0));
        inline app::PlayableBinding__Class* get_class() {
            return il2cpp::get_class<app::PlayableBinding__Class>(type_info, "UnityEngine.Playables", "PlayableBinding");
        }
        inline app::PlayableBinding* create() {
            return il2cpp::create_object<app::PlayableBinding>(get_class());
        }
        inline app::PlayableBinding__Boxed* box(app::PlayableBinding value) {
            return il2cpp::box_value<app::PlayableBinding__Boxed>(get_class(), value);
        }
        inline app::PlayableBinding__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayableBinding__Array>(get_class(), size);
        }
        inline app::PlayableBinding__Array* create_array(const std::vector<app::PlayableBinding>& items) {
            return il2cpp::array_new<app::PlayableBinding__Array>(get_class(), items);
        }
    } // namespace PlayableBinding
} // namespace app::classes::types
