#include <interception_macros.h>

namespace app::methods::AttachSoundToPhysicsSystem {
IL2CPP_REGISTER_METHOD(0x006F4090, bool, get_IsSuspended, (AttachSoundToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x006F40A0, void, set_IsSuspended, (AttachSoundToPhysicsSystem * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006515B0, SuspendableMask__Enum, get_Mask, (AttachSoundToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x00848260, void, set_Mask, (AttachSoundToPhysicsSystem * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBBC0, Transform *, get_ConnectedTransform1, (AttachSoundToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, Transform *, get_ConnectedTransform2, (AttachSoundToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x00848270, bool, IsAttached, (AttachSoundToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x00848310, void, Awake, (AttachSoundToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x008485F0, void, PerformAttachment, (AttachSoundToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x00848F60, void, OnUpdatePhysics, (AttachSoundToPhysicsSystem * __this, float dt));
IL2CPP_REGISTER_METHOD(0x003FDD60, float, CalculateRtpcValue, (AttachSoundToPhysicsSystem * __this));
IL2CPP_REGISTER_METHODINFO(0x04778978, AttachSoundToPhysicsSystem_CalculateRtpcValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00849480, float, GetStretchSpeed, (AttachSoundToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x00849490, float, GetRotationSpeed, (AttachSoundToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x008494A0, void, __ctor, (AttachSoundToPhysicsSystem * __this));
}
