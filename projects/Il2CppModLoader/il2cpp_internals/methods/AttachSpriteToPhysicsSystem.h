#include <interception_macros.h>

namespace app::methods::AttachSpriteToPhysicsSystem {
IL2CPP_REGISTER_METHOD(0x008495E0, void, InitTransform, (AttachSpriteToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x003FFEA0, bool, ISuspendable_get_IsSuspended, (AttachSpriteToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x008496A0, void, ISuspendable_set_IsSuspended, (AttachSpriteToPhysicsSystem * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FBE90, SuspendableMask__Enum, ISuspendable_get_Mask, (AttachSpriteToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x003FBEA0, void, ISuspendable_set_Mask, (AttachSpriteToPhysicsSystem * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x008496B0, void, Awake, (AttachSpriteToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, IRecordableTransform_get_TrackTranformChangesForRecording, (AttachSpriteToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, TrackingExclusions, IRecordableTransform_get_TrackingExclusions, (AttachSpriteToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, RecordableParsingGroup__Enum, IRecordable_get_ParsingGroup, (AttachSpriteToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x00849850, bool, IPhysicsUpdateHandlerValidable_get_IsValid, (AttachSpriteToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x008498F0, void, IPhysicsUpdateHandler_OnUpdatePhysics, (AttachSpriteToPhysicsSystem * __this, float delta));
IL2CPP_REGISTER_METHODINFO(0x0472BAE8, AttachSpriteToPhysicsSystem_Moon_IPhysicsUpdateHandler_OnUpdatePhysics__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00849950, void, UpdateFromMainThread, (AttachSpriteToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x0084ACA0, void, PrepareJob, (AttachSpriteToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x0084ADF0, void, UpdateFromJob, (AttachSpriteToPhysicsSystem * __this, TransformAccess transform));
IL2CPP_REGISTER_METHOD(0x0084C030, void, __ctor, (AttachSpriteToPhysicsSystem * __this));
}
