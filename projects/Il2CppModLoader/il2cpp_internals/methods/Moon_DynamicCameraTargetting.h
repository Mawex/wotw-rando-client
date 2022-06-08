using namespace app;

namespace app::methods::Moon::DynamicCameraTargetting {
IL2CPP_REGISTER_METHOD(0x01202300, bool, get_Bypass, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x01202310, void, set_Bypass, (DynamicCameraTargetting * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01202320, bool, get_IsActive, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01202540, bool, get_OnlyUseDynamicWithEnemies, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x01202550, void, set_OnlyUseDynamicWithEnemies, (DynamicCameraTargetting * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01202560, bool, get_IsSuspended, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x01202570, void, set_IsSuspended, (DynamicCameraTargetting * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01202580, SuspendableMask__Enum, get_Mask, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x01202590, void, set_Mask, (DynamicCameraTargetting * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x012025A0, bool, get_FOVInfluencerIsValid, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x012025B0, float, get_FOVInfluencerWeight, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x012025C0, float, get_FOVInfluencerOffset, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x012025E0, float, get_FOVInfluencerTargetZ, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x01202600, float, get_FOVMultiplier, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x01202610, void, set_FOVMultiplier, (DynamicCameraTargetting * __this, float value));
IL2CPP_REGISTER_METHOD(0x01202620, void, Awake, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x01202980, void, OnDestroy, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x01202CC0, void, OnDisable, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x01202CF0, void, ResetCamera, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x01202F40, void, OnRestoreCheckpoint, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHODINFO(0x04763388, DynamicCameraTargetting_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01202F40, void, OnGameReset, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHODINFO(0x047563C0, DynamicCameraTargetting_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01202F50, void, AdjustCameraTargetWeightForLeashHooks, (float * weight, ICameraTarget * target, CameraTargetData * data, Vector3 primaryTargetPosition));
IL2CPP_REGISTER_METHOD(0x01203150, void, Activate, (DynamicCameraTargetting * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x012037F0, void, Deactivate, (DynamicCameraTargetting * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x01203BF0, Rect, GetRect, (DynamicCameraTargetting * __this, CameraTargetSettings setting, Vector3 primaryTargetPosition));
IL2CPP_REGISTER_METHOD(0x0111EBE0, Vector3, GetTargetPos, (DynamicCameraTargetting * __this, CameraTargetSettings setting));
IL2CPP_REGISTER_METHOD(0x01203DA0, Rect, BoundingRectangle, (DynamicCameraTargetting * __this, List_1_UnityEngine_Rect_ * rects));
IL2CPP_REGISTER_METHOD(0x012040D0, void, FixedUpdate, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x01204130, void, MoveToTargetInstantly, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x012041E0, void, UpdateTargetting, (DynamicCameraTargetting * __this, float deltaTime, bool instant));
IL2CPP_REGISTER_METHOD(0x01205470, void, DebugDrawTargets, (DynamicCameraTargetting * __this, List_1_Moon_CameraTargetSettings_ * providedTargets));
IL2CPP_REGISTER_METHOD(0x01205620, void, DebugDrawCamera, (DynamicCameraTargetting * __this, Rect boundingRect, Rect paddedRect, Rect debugRes, Rect cover, Rect resultantRect, Vector2 targetPos));
IL2CPP_REGISTER_METHOD(0x01205820, void, PropagateWeightToLayers, (DynamicCameraTargetting * __this, float targetWeight, float deltaTime, bool instant));
IL2CPP_REGISTER_METHOD(0x012059F0, void, AdjustDarkness, (DynamicCameraTargetting * __this, float targetBrightnessWeight, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01205B20, void, AdjustFOV, (DynamicCameraTargetting * __this, float targetFOVWeight, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01205D50, void, FillRectsFromTargets, (DynamicCameraTargetting * __this, List_1_Moon_CameraTargetSettings_ * providedTargets, CameraTargetSettings primaryTarget));
IL2CPP_REGISTER_METHOD(0x012060B0, void, DebugDrawCameraRectangle, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x012066A0, float, get_HDRBrightnessInfluceMultiplier, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x012067A0, float, get_BrightnessInfluceAdditive, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x0074B550, float, get_BrightnessInfluceMultiplicative, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x012067D0, bool, get_ContributeToAdditive, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x00658AB0, bool, get_ContributeToMultiplicative, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x012067F0, float, get_BrightnessInfluceWeight, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, GlobalBrightnessController_BrigthnessContributionOrder__Enum, get_BrightnessInfluceOrder, (DynamicCameraTargetting * __this));
IL2CPP_REGISTER_METHOD(0x01206910, void, __ctor, (DynamicCameraTargetting * __this));
}
