using namespace app;

namespace app::methods::ExtraZoomDebugMenuItem {
IL2CPP_REGISTER_METHOD(0x00987D40, void, __ctor, (ExtraZoomDebugMenuItem * __this, String * path, String * str));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00987E40, void, DebugZoom, (float modifier));
IL2CPP_REGISTER_METHOD(0x00987F50, void, DebugRoundZoom, (float modifier));
IL2CPP_REGISTER_METHOD(0x009880C0, void, OnSelectedFixedUpdate, (ExtraZoomDebugMenuItem * __this));
}
