using namespace app;

namespace app::methods::OnScreenPositions {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (OnScreenPositions * __this));
IL2CPP_REGISTER_METHOD(0x006127F0, Vector3, get_TopLeft, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00612A40, Vector3, get_TopCenter, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00612E70, Vector3, get_TopRight, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006130C0, Vector3, get_MiddleLeft, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00613320, Vector3, get_MiddleCenter, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00613690, Vector3, get_MiddleRight, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006138F0, Vector3, get_BottomLeft, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00613B50, Vector3, get_BottomCenter, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00613EC0, Vector3, get_BottomRight, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00614120, void, __ctor, (OnScreenPositions * __this));
}
