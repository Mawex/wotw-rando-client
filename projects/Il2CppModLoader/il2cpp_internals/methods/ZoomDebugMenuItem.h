using namespace app;

namespace app::methods::ZoomDebugMenuItem {
IL2CPP_REGISTER_METHOD(0x00F59470, void, __ctor, (ZoomDebugMenuItem * __this, String * path, String * str));
IL2CPP_REGISTER_METHOD(0x00F59590, void, DebugZoom, (float modifier));
IL2CPP_REGISTER_METHOD(0x00F596A0, void, DebugRoundZoom, (float modifier));
IL2CPP_REGISTER_METHOD(0x00F59810, void, OnSelectedFixedUpdate, (ZoomDebugMenuItem * __this));
}
