#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer {
IL2CPP_REGISTER_METHOD(0x01DDD440, FPSCursorRenderer *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_EnableInput, (FPSCursorRenderer * __this));
IL2CPP_REGISTER_METHOD(0x005150D0, void, set_EnableInput, (FPSCursorRenderer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01DDD660, void, SetUpBrowserInput, (Browser * browser, MeshCollider * mesh));
IL2CPP_REGISTER_METHOD(0x01DDD910, void, Start, (FPSCursorRenderer * __this));
IL2CPP_REGISTER_METHOD(0x01DDDA80, void, OnGUI, (FPSCursorRenderer * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, SetCursor, (FPSCursorRenderer * __this, BrowserCursor * newCursor, FPSBrowserUI * ui));
IL2CPP_REGISTER_METHOD(0x01DDDD60, void, __ctor, (FPSCursorRenderer * __this));
}
