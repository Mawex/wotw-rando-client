using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::FPSBrowserUI {
IL2CPP_REGISTER_METHOD(0x01DDCF60, void, Start, (FPSBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DDD010, FPSBrowserUI *, Create, (MeshCollider * meshCollider, Transform * worldPointer, FPSCursorRenderer * cursorRenderer));
IL2CPP_REGISTER_METHOD(0x01DDD1A0, Ray, get_LookRay, (FPSBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DDD330, void, SetCursor, (FPSBrowserUI * __this, BrowserCursor * newCursor));
IL2CPP_REGISTER_METHOD(0x01DDD360, void, InputUpdate, (FPSBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DDD3A0, void, __ctor, (FPSBrowserUI * __this));
}
