using namespace app;

namespace app::methods::PerspectiveRotationSystem {
IL2CPP_REGISTER_METHOD(0x00499EF0, PerspectiveRotationSystem *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0049A120, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0049A1C0, void, Awake, (PerspectiveRotationSystem * __this));
IL2CPP_REGISTER_METHOD(0x0049A1D0, void, LateUpdate, (PerspectiveRotationSystem * __this));
IL2CPP_REGISTER_METHOD(0x0049A3F0, void, OnActiveChange, (PerspectiveRotationSystem * __this));
IL2CPP_REGISTER_METHOD(0x0049A590, void, Register, (PerspectiveRotationSystem * __this, PerspectiveRotationAdjustment * transform));
IL2CPP_REGISTER_METHOD(0x0049A680, void, Unregister, (PerspectiveRotationSystem * __this, PerspectiveRotationAdjustment * transform));
IL2CPP_REGISTER_METHOD(0x0049A720, void, UpdateRotation, (PerspectiveRotationAdjustment * target));
IL2CPP_REGISTER_METHOD(0x0049A9B0, void, ResetRotation, (PerspectiveRotationAdjustment * target));
IL2CPP_REGISTER_METHOD(0x0049AA90, void, __ctor, (PerspectiveRotationSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
