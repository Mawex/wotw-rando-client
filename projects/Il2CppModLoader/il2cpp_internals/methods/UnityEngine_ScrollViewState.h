#include <interception_macros.h>

namespace app::methods::UnityEngine::ScrollViewState {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ScrollViewState * __this));
IL2CPP_REGISTER_METHOD(0x029F9B60, void, ScrollTo, (ScrollViewState * __this, Rect pos));
IL2CPP_REGISTER_METHOD(0x029F9B90, bool, ScrollTowards, (ScrollViewState * __this, Rect pos, float maxDelta));
IL2CPP_REGISTER_METHOD(0x029F9DE0, Vector2, ScrollNeeded, (ScrollViewState * __this, Rect pos));
}
