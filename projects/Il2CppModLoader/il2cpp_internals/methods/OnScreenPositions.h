#include <interception_macros.h>

namespace app::methods::OnScreenPositions {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::OnScreenPositions * this_ptr));
IL2CPP_REGISTER_METHOD(0x006127F0, Vector3, get_TopLeft, ());
IL2CPP_REGISTER_METHOD(0x00612A40, Vector3, get_TopCenter, ());
IL2CPP_REGISTER_METHOD(0x00612E70, Vector3, get_TopRight, ());
IL2CPP_REGISTER_METHOD(0x006130C0, Vector3, get_MiddleLeft, ());
IL2CPP_REGISTER_METHOD(0x00613320, Vector3, get_MiddleCenter, ());
IL2CPP_REGISTER_METHOD(0x00613690, Vector3, get_MiddleRight, ());
IL2CPP_REGISTER_METHOD(0x006138F0, Vector3, get_BottomLeft, ());
IL2CPP_REGISTER_METHOD(0x00613B50, Vector3, get_BottomCenter, ());
IL2CPP_REGISTER_METHOD(0x00613EC0, Vector3, get_BottomRight, ());
IL2CPP_REGISTER_METHOD(0x00614120, void, __ctor, (app::OnScreenPositions * this_ptr));
}
