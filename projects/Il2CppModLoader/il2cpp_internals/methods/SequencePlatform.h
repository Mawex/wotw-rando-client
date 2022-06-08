#include <interception_macros.h>

namespace app::methods::SequencePlatform {
IL2CPP_REGISTER_METHOD(0x00AB5E50, void, OnEnable, (SequencePlatform * __this));
IL2CPP_REGISTER_METHOD(0x00AB5E60, void, set_Activated, (SequencePlatform * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_Activated, (SequencePlatform * __this));
IL2CPP_REGISTER_METHOD(0x00AB5F30, void, Awake, (SequencePlatform * __this));
IL2CPP_REGISTER_METHOD(0x00AB5FD0, void, OnDestroy, (SequencePlatform * __this));
IL2CPP_REGISTER_METHOD(0x00AB6070, void, Start, (SequencePlatform * __this));
IL2CPP_REGISTER_METHOD(0x00AB6160, void, FixedUpdate, (SequencePlatform * __this));
IL2CPP_REGISTER_METHOD(0x00AB6250, void, OnSequenceAppear, (SequencePlatform * __this));
IL2CPP_REGISTER_METHOD(0x00AB62B0, void, OnCollisionEnter, (SequencePlatform * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00AB65A0, void, HideThePlatforms, (SequencePlatform * __this, HashSet_1_SequencePlatform_ * platformsToIgnore));
IL2CPP_REGISTER_METHOD(0x00AB66D0, IEnumerator *, PerformNextPlatform, (SequencePlatform * __this));
IL2CPP_REGISTER_METHOD(0x00AB6820, IEnumerator *, PerformVanish, (SequencePlatform * __this));
IL2CPP_REGISTER_METHOD(0x00AB6970, void, Serialize, (SequencePlatform * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (SequencePlatform * __this));
IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (SequencePlatform * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF610, SuspendableMask__Enum, get_Mask, (SequencePlatform * __this));
IL2CPP_REGISTER_METHOD(0x00AB6A30, void, set_Mask, (SequencePlatform * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00AB6AE0, void, __ctor, (SequencePlatform * __this));
}
