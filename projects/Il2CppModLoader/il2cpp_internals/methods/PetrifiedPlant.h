#include <interception_macros.h>

namespace app::methods::PetrifiedPlant {
IL2CPP_REGISTER_METHOD(0x014E92D0, void, Awake, (PetrifiedPlant * __this));
IL2CPP_REGISTER_METHOD(0x014E9490, void, OnDestroy, (PetrifiedPlant * __this));
IL2CPP_REGISTER_METHOD(0x014E9650, void, OnPreProcessDamage, (PetrifiedPlant * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x0478D020, PetrifiedPlant_OnPreProcessDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00443680, void, __ctor, (PetrifiedPlant * __this));
}
