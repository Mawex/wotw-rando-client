#include <interception_macros.h>

namespace app::methods::Moon::MultiTargetCameraSetup {
IL2CPP_REGISTER_METHOD(0x00615270, bool, get_IsSuspended, (MultiTargetCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x00674DC0, void, set_IsSuspended, (MultiTargetCameraSetup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00C03C70, SuspendableMask__Enum, get_Mask, (MultiTargetCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x00C03C80, void, set_Mask, (MultiTargetCameraSetup * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0111E060, void, Awake, (MultiTargetCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x0111E240, void, OnDestroy, (MultiTargetCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x0111E410, void, OnRestoreCheckpoint, (MultiTargetCameraSetup * __this));
IL2CPP_REGISTER_METHODINFO(0x04736FD0, MultiTargetCameraSetup_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0111E5A0, void, Activate, (MultiTargetCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x0111E790, void, Deactivate, (MultiTargetCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x0111E970, void, UpdateZonesActivation, (MultiTargetCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x0111EAC0, Rect, GetRect, (MultiTargetCameraSetup * __this, CameraTargetSettings setting));
IL2CPP_REGISTER_METHOD(0x0111EBE0, Vector3, GetTargetPos, (MultiTargetCameraSetup * __this, CameraTargetSettings setting));
IL2CPP_REGISTER_METHOD(0x0111EC00, Rect, BoundingRectangle, (MultiTargetCameraSetup * __this, List_1_UnityEngine_Rect_ * rects));
IL2CPP_REGISTER_METHOD(0x0111EF30, void, OnDisable, (MultiTargetCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x0111EF40, void, FixedUpdate, (MultiTargetCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x0111FC70, void, DebugDrawCameraRectangle, (MultiTargetCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x01120260, void, __ctor, (MultiTargetCameraSetup * __this));
}
