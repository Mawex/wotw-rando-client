#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationMotionXToDeltaPlayable {
        inline app::AnimationMotionXToDeltaPlayable__Class** type_info = (app::AnimationMotionXToDeltaPlayable__Class**)(modloader::win::memory::resolve_rva(0x0471E970));
        inline app::AnimationMotionXToDeltaPlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimationMotionXToDeltaPlayable__Class>(type_info, "UnityEngine.Animations", "AnimationMotionXToDeltaPlayable");
        }
        inline app::AnimationMotionXToDeltaPlayable* create() {
            return il2cpp::create_object<app::AnimationMotionXToDeltaPlayable>(get_class());
        }
        inline app::AnimationMotionXToDeltaPlayable__Boxed* box(app::AnimationMotionXToDeltaPlayable value) {
            return il2cpp::box_value<app::AnimationMotionXToDeltaPlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimationMotionXToDeltaPlayable
} // namespace app::classes::types
