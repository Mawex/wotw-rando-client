#include <interception_macros.h>

namespace app::methods::UnityEngine::GUILayer {
IL2CPP_REGISTER_METHOD(0x02526DE0, GUIElement *, HitTest, (GUILayer * __this, Vector3 screenPosition));
IL2CPP_REGISTER_METHOD(0x02526E50, GUIElement *, HitTest, (GUILayer * __this, Vector2 screenPosition));
IL2CPP_REGISTER_METHOD(0x02526EB0, GUIElement *, HitTest_Injected, (GUILayer * __this, Vector2 * screenPosition));
}
