#include <interception_macros.h>

namespace app::methods::UnityEngine::CanvasGroup {
IL2CPP_REGISTER_METHOD(0x031A5E40, float, get_alpha, (CanvasGroup * __this));
IL2CPP_REGISTER_METHOD(0x031A5E90, void, set_alpha, (CanvasGroup * __this, float value));
IL2CPP_REGISTER_METHOD(0x031A5EF0, bool, get_interactable, (CanvasGroup * __this));
IL2CPP_REGISTER_METHOD(0x031A5F40, bool, get_blocksRaycasts, (CanvasGroup * __this));
IL2CPP_REGISTER_METHOD(0x031A5F90, bool, get_ignoreParentGroups, (CanvasGroup * __this));
IL2CPP_REGISTER_METHOD(0x031A5F40, bool, IsRaycastLocationValid, (CanvasGroup * __this, Vector2 sp, Camera * eventCamera));
}
