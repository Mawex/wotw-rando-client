using namespace app;

namespace app::methods::DesertEscapeWormPathFollower {
IL2CPP_REGISTER_METHOD(0x00B88320, void, Awake, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00B88530, void, OnRestoreCheckpoint, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHODINFO(0x04719060, DesertEscapeWormPathFollower_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B88560, void, OnDestroy, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00B88730, void, OnEnable, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00B887D0, void, OnDisable, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00B88870, void, OnValidate, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00B88870, void, ApplySettings, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00B888B0, void, Start, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00B88DA0, void, FixedUpdate, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00B88E80, void, Update, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00B88E80, void, LateUpdate, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00B88E90, void, UpdateVisuals, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00B89840, Vector3, GetSegmentPosition, (DesertEscapeWormPathFollower * __this, float distanceFromHead, Transform * previousSegment));
IL2CPP_REGISTER_METHOD(0x00B89FF0, void, ResetToNode, (DesertEscapeWormPathFollower * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00B8A120, bool, get_IsSuspended, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00B8A130, void, set_IsSuspended, (DesertEscapeWormPathFollower * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006DC050, SuspendableMask__Enum, get_Mask, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00B8A140, void, set_Mask, (DesertEscapeWormPathFollower * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00B8A1F0, void, Apply, (DesertEscapeWormPathFollower * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_ApplyOnEditor, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x002FBC20, IUberState__Array *, get_AffectingUberStates, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x002FBC40, List_1_UnityEngine_GameObject_ *, get_AllTargets, (DesertEscapeWormPathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00B8A280, void, __ctor, (DesertEscapeWormPathFollower * __this));
}
