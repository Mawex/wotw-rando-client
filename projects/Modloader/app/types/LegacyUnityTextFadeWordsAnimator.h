#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyUnityTextFadeWordsAnimator {
        namespace {
            inline app::LegacyUnityTextFadeWordsAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyUnityTextFadeWordsAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyUnityTextFadeWordsAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyUnityTextFadeWordsAnimator__Class>(type_info, "", "LegacyUnityTextFadeWordsAnimator");
        }
        inline app::LegacyUnityTextFadeWordsAnimator* create() {
            return il2cpp::create_object<app::LegacyUnityTextFadeWordsAnimator>(get_class());
        }
    } // namespace LegacyUnityTextFadeWordsAnimator
} // namespace app::classes::types
