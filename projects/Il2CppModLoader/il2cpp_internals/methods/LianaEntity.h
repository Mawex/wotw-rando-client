using namespace app;

namespace app::methods::LianaEntity {
IL2CPP_REGISTER_METHOD(0x011380B0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01138180, void, Awake, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x01138260, void, OnDestroy, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x01138320, void, OnRestoreCheckpoint, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x01138330, void, Setup, (LianaEntity * __this, SnapTrapEntity_SnapTrapParameters param, LianaEntity_LianaParameters lianaParams, bool canFreeze, bool usesDetectionZone, Rect detectionRect, float frozenMouthOpenRot, SerializedBooleanUberState * thawedState, Vector2 placeHolderScale, bool rebuildRope));
IL2CPP_REGISTER_METHOD(0x01139920, Bounds, CalculateBounds, (LianaEntity * __this, float height));
IL2CPP_REGISTER_METHOD(0x01139DB0, void, AddJointToTongue, (LianaEntity * __this, bool frozen, Transform * tongueJointTransform, int32_t jointCount, float jointsPerRopeJoint, List_1_UnityEngine_Transform_ * ropeJoints));
IL2CPP_REGISTER_METHOD(0x01139F80, void, FixedUpdate, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113A040, void, LateUpdate, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113A5A0, void, UpdateFrozenTongue, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113A8B0, void, UpdateFrozenTongueBatchedAPI, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113ABB0, void, UpdateThawedTongue, (LianaEntity * __this, Vector3 alignVisualsOffset));
IL2CPP_REGISTER_METHOD(0x0113AEE0, void, UpdateThawedTongueBatchedAPI, (LianaEntity * __this, Vector3 alignVisualsOffset));
IL2CPP_REGISTER_METHOD(0x0113B210, void, ForceReel, (LianaEntity * __this, float speed));
IL2CPP_REGISTER_METHOD(0x0113B270, void, ReelTongue, (LianaEntity * __this, float speed));
IL2CPP_REGISTER_METHOD(0x0113B3F0, void, ActivateTongue, (LianaEntity * __this, bool on, bool force));
IL2CPP_REGISTER_METHOD(0x0113B670, void, StartPullLoopAnim, (LianaEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04720AA0, LianaEntity_StartPullLoopAnim__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0113B850, void, StopPullLoopAnim, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113B890, void, TongueGrabbed, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113BB00, void, TongueReleased, (LianaEntity * __this, bool force));
IL2CPP_REGISTER_METHOD(0x0113BD80, void, Suspend, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113C2D0, void, Resume, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113C590, void, Freeze, (LianaEntity * __this, bool frozen, bool spawnEffect));
IL2CPP_REGISTER_METHOD(0x0113C780, void, Closed, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113C940, void, OpenedAfterCatch, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113C980, void, OpenedAfterMiss, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113C9C0, IEnumerator *, WaitReleaseTongue, (LianaEntity * __this, float waitTime));
IL2CPP_REGISTER_METHOD(0x0113CB20, void, DoneChewing, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113CEB0, void, ChangeTongueState, (LianaEntity * __this, LianaEntity_TongueState__Enum state));
IL2CPP_REGISTER_METHOD(0x0113D160, void, EnablePhysics, (LianaEntity * __this, bool enable));
IL2CPP_REGISTER_METHOD(0x0113D2D0, void, OnFrustumEnter, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113D3B0, void, OnFrustumExit, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113D490, void, OnSceneRootPostEnable, (LianaEntity * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHOD(0x0113D580, void, OnSceneRootPreDisable, (LianaEntity * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHOD(0x0113D2D0, void, OnFrustumInstantEnabled, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CFDD40, bool, get_InsideFrustum, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113D660, Bounds, get_Bounds, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113D680, void, set_Bounds, (LianaEntity * __this, Bounds value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowCacheBounds, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDisable, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldEnable, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldChildrenEnable, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldSetMoonReady, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113D6A0, void, __ctor, (LianaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0113D780, void, __cctor, (MethodInfo * method));
}
