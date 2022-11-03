#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioMixerPlayable {
        namespace {
            inline app::AudioMixerPlayable__Class* type_info_ref = nullptr;
        }
        inline app::AudioMixerPlayable__Class** type_info = &type_info_ref;
        inline app::AudioMixerPlayable__Class* get_class() {
            return il2cpp::get_class<app::AudioMixerPlayable__Class>(type_info, "UnityEngine.Audio", "AudioMixerPlayable");
        }
        inline app::AudioMixerPlayable* create() {
            return il2cpp::create_object<app::AudioMixerPlayable>(get_class());
        }
        inline app::AudioMixerPlayable__Boxed* box(app::AudioMixerPlayable value) {
            return il2cpp::box_value<app::AudioMixerPlayable__Boxed>(get_class(), value);
        }
    } // namespace AudioMixerPlayable
} // namespace app::classes::types
