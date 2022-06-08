#include <interception_macros.h>

namespace app::methods::CameraOffsetController {
IL2CPP_REGISTER_METHOD(0x01696F20, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x01697000, Vector3, GetExtraZoomAmount, (CameraOffsetController * __this, float offset));
IL2CPP_REGISTER_METHOD(0x0064D960, float, get_ExtraZoomApplied, (CameraOffsetController * __this));
IL2CPP_REGISTER_METHOD(0x0064D970, void, set_ExtraZoomApplied, (CameraOffsetController * __this, float value));
IL2CPP_REGISTER_METHOD(0x01697150, Vector3, get_Offset, (CameraOffsetController * __this));
IL2CPP_REGISTER_METHOD(0x01697230, void, set_Offset, (CameraOffsetController * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x01697300, Vector3, get_Rotation, (CameraOffsetController * __this));
IL2CPP_REGISTER_METHOD(0x01697460, void, set_Rotation, (CameraOffsetController * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x01697550, Vector3, get_DefaultCameraZoom, (CameraOffsetController * __this));
IL2CPP_REGISTER_METHOD(0x01697700, void, AddOffsetLayer, (CameraOffsetController * __this, CameraOffsetController_OffsetLayer * layer));
IL2CPP_REGISTER_METHOD(0x016977E0, void, RemoveOffsetLayer, (CameraOffsetController * __this, CameraOffsetController_OffsetLayer * layer));
IL2CPP_REGISTER_METHOD(0x016978A0, void, Register, (CameraOffsetZone * offsetZone));
IL2CPP_REGISTER_METHOD(0x01697AA0, void, Unregister, (CameraOffsetZone * offsetZome));
IL2CPP_REGISTER_METHOD(0x01697B60, void, Awake, (CameraOffsetController * __this));
IL2CPP_REGISTER_METHOD(0x01697F30, void, OnDestroy, (CameraOffsetController * __this));
IL2CPP_REGISTER_METHOD(0x01698300, void, Reset, (CameraOffsetController * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x01698830, void, OnAspectChanged, (CameraOffsetController * __this));
IL2CPP_REGISTER_METHODINFO(0x047710F8, CameraOffsetController_OnAspectChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01698850, void, OnGameReset, (CameraOffsetController * __this));
IL2CPP_REGISTER_METHODINFO(0x0477DF30, CameraOffsetController_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01698900, void, OnScrollLockPassed, (CameraOffsetController * __this));
IL2CPP_REGISTER_METHODINFO(0x0470A020, CameraOffsetController_OnScrollLockPassed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00933260, Vector3, get_LastOffsetWithoutCamera, (CameraOffsetController * __this));
IL2CPP_REGISTER_METHOD(0x00F0E6F0, Vector3, get_LastRotationWithoutCamera, (CameraOffsetController * __this));
IL2CPP_REGISTER_METHOD(0x016989B0, void, GetCurrentOffsetTarget, (CameraOffsetController * __this, float timeDelta, bool instant, int32_t maxPriority, Vector3 * offset, Vector3 * rotation));
IL2CPP_REGISTER_METHOD(0x0169A0F0, void, UpdateOffset, (CameraOffsetController * __this, bool instant, float timeDelta));
IL2CPP_REGISTER_METHOD(0x0169A470, void, UpdateMultiplier, (CameraOffsetController * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0169A690, void, __ctor, (CameraOffsetController * __this));
IL2CPP_REGISTER_METHOD(0x0169AB50, void, __cctor, ());
}
