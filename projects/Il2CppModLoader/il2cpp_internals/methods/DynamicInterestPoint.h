#include <interception_macros.h>

namespace app::methods::DynamicInterestPoint {
IL2CPP_REGISTER_METHOD(0x00BEAB40, Vector3, get_EffectiveInterestDirection, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, ShouldShowInfluenceRadius, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x0074AB10, bool, ShouldShowInfluenceZone, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x00BEADF0, void, Awake, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x00BEAFB0, void, OnDestroy, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x00BEB090, bool, get_CameraTargetActive, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x00BEB140, Vector3, get_CameraTargetPosition, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x00BEB430, Vector2, get_CameraTargetPadding, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x00BEB450, Vector3, get_CameraInfluencePosition, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x00BEB770, float, get_CameraInfluenceMinDist, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x00BEB780, bool, IsValidTargetPosition, (DynamicInterestPoint * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x00BEB8F0, void, AdjustCameraTargetWeight, (DynamicInterestPoint * __this, float * weight, CameraTargetData * data, Vector3 primaryTargetPosition));
IL2CPP_REGISTER_METHOD(0x00BEC040, float, get_CameraInfluenceMaxDist, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x00BEC050, Vector2, get_CameraZoomFactor, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, CameraTargetType__Enum, get_TargetType, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x00BEC070, void, GetTargetData, (DynamicInterestPoint * __this, CameraTargetData * * data));
IL2CPP_REGISTER_METHOD(0x00BEC160, void, OnSceneRootPostEnable, (DynamicInterestPoint * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHOD(0x00BEC240, void, OnSceneRootPreDisable, (DynamicInterestPoint * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHOD(0x00BEC320, bool, get_FOVInfluencerIsValid, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x003FDAA0, float, get_FOVInfluencerWeight, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x00738690, float, get_FOVInfluencerOffset, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x003FC510, float, get_FOVInfluencerTargetZ, (DynamicInterestPoint * __this));
IL2CPP_REGISTER_METHOD(0x00BEC400, void, __ctor, (DynamicInterestPoint * __this));
}
