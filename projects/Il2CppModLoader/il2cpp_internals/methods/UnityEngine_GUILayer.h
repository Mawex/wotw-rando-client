#include <interception_macros.h>

namespace app::methods::UnityEngine::GUILayer {
IL2CPP_REGISTER_METHOD(0x02526DE0, GUIElement *, HitTest_1, (app::GUILayer * this_ptr, app::Vector3 screen_position));
IL2CPP_REGISTER_METHOD(0x02526E50, GUIElement *, HitTest_2, (app::GUILayer * this_ptr, app::Vector2 screen_position));
IL2CPP_REGISTER_METHOD(0x02526EB0, GUIElement *, HitTest_Injected, (app::GUILayer * this_ptr, app::Vector2 * screen_position));
}
