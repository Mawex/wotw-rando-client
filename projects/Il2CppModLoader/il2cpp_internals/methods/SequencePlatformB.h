#include <interception_macros.h>

namespace app::methods::SequencePlatformB {
IL2CPP_REGISTER_METHOD(0x00AB7340, void, SetToAppear, (SequencePlatformB * __this, float delay));
IL2CPP_REGISTER_METHOD(0x00AB7360, void, set_Activated, (SequencePlatformB * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00AB7980, bool, get_Activated, (SequencePlatformB * __this));
IL2CPP_REGISTER_METHOD(0x00AB7990, void, Awake, (SequencePlatformB * __this));
IL2CPP_REGISTER_METHOD(0x00AB7AC0, void, OnDestroy, (SequencePlatformB * __this));
IL2CPP_REGISTER_METHOD(0x00AB7B60, void, Start, (SequencePlatformB * __this));
IL2CPP_REGISTER_METHOD(0x00AB7BB0, bool, get_CollidersShouldDisable, (SequencePlatformB * __this));
IL2CPP_REGISTER_METHOD(0x00AB7BF0, void, FixedUpdate, (SequencePlatformB * __this));
IL2CPP_REGISTER_METHOD(0x00AB7F40, void, OnCollisionEnter, (SequencePlatformB * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00AB80E0, void, Serialize, (SequencePlatformB * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsSuspended, (SequencePlatformB * __this));
IL2CPP_REGISTER_METHOD(0x00800850, void, set_IsSuspended, (SequencePlatformB * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0057A5A0, SuspendableMask__Enum, get_Mask, (SequencePlatformB * __this));
IL2CPP_REGISTER_METHOD(0x00AB8220, void, set_Mask, (SequencePlatformB * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00AB82E0, void, __ctor, (SequencePlatformB * __this));
}
