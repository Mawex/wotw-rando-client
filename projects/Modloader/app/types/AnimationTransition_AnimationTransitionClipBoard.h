#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationTransition_AnimationTransitionClipBoard {
        inline app::AnimationTransition_AnimationTransitionClipBoard__Class** type_info = (app::AnimationTransition_AnimationTransitionClipBoard__Class**)(modloader::win::memory::resolve_rva(0x0472D9A0));
        inline app::AnimationTransition_AnimationTransitionClipBoard__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTransition_AnimationTransitionClipBoard__Class>(type_info, "Moon", "AnimationTransition", "AnimationTransitionClipBoard");
        }
        inline app::AnimationTransition_AnimationTransitionClipBoard* create() {
            return il2cpp::create_object<app::AnimationTransition_AnimationTransitionClipBoard>(get_class());
        }
    } // namespace AnimationTransition_AnimationTransitionClipBoard
} // namespace app::classes::types
