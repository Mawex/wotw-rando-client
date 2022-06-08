#include <interception_macros.h>

namespace app::methods::CameraCrossFadeManager {
IL2CPP_REGISTER_METHOD(0x01687570, void, Awake, (CameraCrossFadeManager * __this));
IL2CPP_REGISTER_METHOD(0x01687720, void, Start, (CameraCrossFadeManager * __this));
IL2CPP_REGISTER_METHOD(0x016877F0, void, OnDestroy, (CameraCrossFadeManager * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsCrossFading, (CameraCrossFadeManager * __this));
IL2CPP_REGISTER_METHOD(0x016879A0, void, OnGameReset, (CameraCrossFadeManager * __this));
IL2CPP_REGISTER_METHODINFO(0x047172F8, CameraCrossFadeManager_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01687A90, void, PerformCrossFade, (CameraCrossFadeManager * __this, SceneMetaData * sceneMetaData, float crossFadeDuration));
IL2CPP_REGISTER_METHOD(0x01687FB0, void, Apply, (CameraCrossFadeManager * __this, UberPostProcessingCrossFade_CameraInformation * cameraInformation, CameraController_1 * cameraController));
IL2CPP_REGISTER_METHOD(0x01688190, void, ApplyCrossFadeSettings, (CameraCrossFadeManager * __this));
IL2CPP_REGISTER_METHOD(0x01688280, void, FixedUpdate, (CameraCrossFadeManager * __this));
IL2CPP_REGISTER_METHOD(0x01688310, void, StopCrossFade, (CameraCrossFadeManager * __this));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsSuspended, (CameraCrossFadeManager * __this));
IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_IsSuspended, (CameraCrossFadeManager * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF3C0, SuspendableMask__Enum, get_Mask, (CameraCrossFadeManager * __this));
IL2CPP_REGISTER_METHOD(0x016883F0, void, set_Mask, (CameraCrossFadeManager * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x016884A0, void, __ctor, (CameraCrossFadeManager * __this));
IL2CPP_REGISTER_METHOD(0x016884B0, void, __cctor, ());
}
