#include <interception_macros.h>

namespace app::methods::DamageSoundSource {
IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (DamageSoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00DC9640, void, OnRecieveDamage, (DamageSoundSource * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DamageSoundSource * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (DamageSoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (DamageSoundSource * __this));
IL2CPP_REGISTER_METHOD(0x00405E60, void, _OnRecieveDamage_b__4_0, (DamageSoundSource * __this));
IL2CPP_REGISTER_METHODINFO(0x0478F068, DamageSoundSource__OnRecieveDamage_b__4_0__MethodInfo);
}
