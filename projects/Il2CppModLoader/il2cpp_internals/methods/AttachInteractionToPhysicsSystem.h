#include <interception_macros.h>

namespace app::methods::AttachInteractionToPhysicsSystem {
IL2CPP_REGISTER_METHOD(0x00846810, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_IsSuspended, (AttachInteractionToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x0063D080, void, set_IsSuspended, (AttachInteractionToPhysicsSystem * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008468B0, SuspendableMask__Enum, get_Mask, (AttachInteractionToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x008468C0, void, set_Mask, (AttachInteractionToPhysicsSystem * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBBE0, Transform *, get_ConnectedTransform1, (AttachInteractionToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, Transform *, get_ConnectedTransform2, (AttachInteractionToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x008468D0, bool, IsAttached, (AttachInteractionToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (AttachInteractionToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (AttachInteractionToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x00846970, void, PerformAttachment, (AttachInteractionToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGameSerializeLoad, (AttachInteractionToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSceneStartLateAfterSerialize, (AttachInteractionToPhysicsSystem * __this, SceneRoot * root));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSerializationLoad, (AttachInteractionToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x00847180, float, Remap, (AttachInteractionToPhysicsSystem * __this, Rect remap, float input));
IL2CPP_REGISTER_METHOD(0x00847250, void, OnUpdatePhysics, (AttachInteractionToPhysicsSystem * __this, float dt));
IL2CPP_REGISTER_METHOD(0x00847BD0, void, __ctor, (AttachInteractionToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
