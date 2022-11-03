#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationLayerMixerPlayable {
        inline app::AnimationLayerMixerPlayable__Class** type_info = (app::AnimationLayerMixerPlayable__Class**)(modloader::win::memory::resolve_rva(0x0471DA80));
        inline app::AnimationLayerMixerPlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimationLayerMixerPlayable__Class>(type_info, "UnityEngine.Animations", "AnimationLayerMixerPlayable");
        }
        inline app::AnimationLayerMixerPlayable* create() {
            return il2cpp::create_object<app::AnimationLayerMixerPlayable>(get_class());
        }
        inline app::AnimationLayerMixerPlayable__Boxed* box(app::AnimationLayerMixerPlayable value) {
            return il2cpp::box_value<app::AnimationLayerMixerPlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimationLayerMixerPlayable
} // namespace app::classes::types
