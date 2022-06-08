#include <interception_macros.h>

namespace app::methods::Bubble {
IL2CPP_REGISTER_METHOD(0x00654950, SuspendableMask__Enum, get_Mask, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x00D51A10, void, set_Mask, (Bubble * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_IsSuspended, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x00D51AC0, void, set_IsSuspended, (Bubble * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBCA0, Collider *, get_Collider, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x002FBCC0, Collider__Array *, get_Colliders, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x00D51D80, void, Awake, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x00D52230, void, OnDestroy, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x00D522D0, void, OnRestoreCheckpoint, (Bubble * __this));
IL2CPP_REGISTER_METHODINFO(0x047496A0, Bubble_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D523C0, void, OnEnable, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x00D52AE0, void, OnDisable, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x00D53100, void, OnPoolSpawned, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x00D53110, void, DestroyOnTimelineStop, (Bubble * __this));
IL2CPP_REGISTER_METHODINFO(0x04766DC0, Bubble_DestroyOnTimelineStop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x00D53210, void, OnUpdate, (Bubble * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00D53AE0, void, OnTriggerEnter, (Bubble * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x00D53B40, void, OnCollisionEnter, (Bubble * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00D542A0, bool, CanKillBubble, (Bubble * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x00D543F0, void, Destroy, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x00D544C0, void, OnDamageResultReceived, (Bubble * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x047125C0, Bubble_OnDamageResultReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D54930, void, OnReceiveWindFromPipe, (Bubble * __this, Vector2 pushForce));
IL2CPP_REGISTER_METHOD(0x00D54970, void, OriLandAbove, (Bubble * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x00B85450, void, PlayBumpTimeline, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x00D54A80, void, PopBubble, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x00D54B90, void, EnableBubbleScripts, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x00D54D60, void, DisableBubbleScripts, (Bubble * __this, bool oriBounced));
IL2CPP_REGISTER_METHOD(0x00D54F00, void, ExecuteSpring, (Bubble * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x00D54FF0, bool, IsCenterPointInsideWater, (Bubble * __this));
IL2CPP_REGISTER_METHOD(0x00D55250, bool, ShouldKillBubble, (Bubble * __this, Transform * bubbleTransform));
IL2CPP_REGISTER_METHOD(0x00D55340, void, __ctor, (Bubble * __this));
}
