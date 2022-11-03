#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TweenDelayAnimatorContext {
        inline app::TweenDelayAnimatorContext__Class** type_info = (app::TweenDelayAnimatorContext__Class**)(modloader::win::memory::resolve_rva(0x0475A418));
        inline app::TweenDelayAnimatorContext__Class* get_class() {
            return il2cpp::get_class<app::TweenDelayAnimatorContext__Class>(type_info, "Moon.Timeline", "TweenDelayAnimatorContext");
        }
        inline app::TweenDelayAnimatorContext* create() {
            return il2cpp::create_object<app::TweenDelayAnimatorContext>(get_class());
        }
    } // namespace TweenDelayAnimatorContext
} // namespace app::classes::types
