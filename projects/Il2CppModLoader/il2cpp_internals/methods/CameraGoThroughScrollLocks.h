using namespace app;

namespace app::methods::CameraGoThroughScrollLocks {
IL2CPP_REGISTER_METHOD(0x01691720, void, __ctor, (CameraGoThroughScrollLocks * __this, GameplayCamera * cameraController));
IL2CPP_REGISTER_METHOD(0x01691AC0, void, Destroy, (CameraGoThroughScrollLocks * __this));
IL2CPP_REGISTER_METHOD(0x01691C50, void, AddDisablePassThroughRequest, (CameraGoThroughScrollLocks * __this, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x01691D00, void, RemoveDisablePassThroughRequest, (CameraGoThroughScrollLocks * __this, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x01691DA0, void, Update, (CameraGoThroughScrollLocks * __this));
IL2CPP_REGISTER_METHOD(0x01691F80, void, OnPassThroughScrollLock, (CameraGoThroughScrollLocks * __this));
IL2CPP_REGISTER_METHOD(0x01692320, void, OnScrollFaderFinishedFading, (CameraGoThroughScrollLocks * __this));
IL2CPP_REGISTER_METHODINFO(0x047919A0, CameraGoThroughScrollLocks_OnScrollFaderFinishedFading__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016924C0, void, OnGameEarlyFixedUpdate, (CameraGoThroughScrollLocks * __this));
IL2CPP_REGISTER_METHODINFO(0x047753C8, CameraGoThroughScrollLocks_OnGameEarlyFixedUpdate__MethodInfo);
}
