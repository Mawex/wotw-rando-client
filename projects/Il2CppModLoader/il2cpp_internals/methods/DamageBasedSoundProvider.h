#include <interception_macros.h>

namespace app::methods::DamageBasedSoundProvider {
IL2CPP_REGISTER_METHOD(0x00DC22A0, bool, Match, (DamageBasedSoundProvider * __this, Damage * damage, SoundDamageType__Enum soundDamageType));
IL2CPP_REGISTER_METHOD(0x00DC2710, SoundDescriptor *, GetSoundForDamage, (DamageBasedSoundProvider * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00DC28F0, Object *, GetGenericResource, (DamageBasedSoundProvider * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x00DC2AE0, int32_t, GetGenericResourceId, (DamageBasedSoundProvider * __this, Object * context));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DamageBasedSoundProvider * __this));
IL2CPP_REGISTER_METHOD(0x00DC2CD0, void, __cctor, ());
}
