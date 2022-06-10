#pragma once
#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer {
    IL2CPP_REGISTER_METHOD(0x01DDD440, app::FPSCursorRenderer *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_EnableInput, (app::FPSCursorRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005150D0, void, set_EnableInput, (app::FPSCursorRenderer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01DDD660, void, SetUpBrowserInput, (app::Browser * browser, app::MeshCollider * mesh))
    IL2CPP_REGISTER_METHOD(0x01DDD910, void, Start, (app::FPSCursorRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DDDA80, void, OnGUI, (app::FPSCursorRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, SetCursor, (app::FPSCursorRenderer * this_ptr, app::BrowserCursor * new_cursor, app::FPSBrowserUI * ui))
    IL2CPP_REGISTER_METHOD(0x01DDDD60, void, ctor, (app::FPSCursorRenderer * this_ptr))
}
