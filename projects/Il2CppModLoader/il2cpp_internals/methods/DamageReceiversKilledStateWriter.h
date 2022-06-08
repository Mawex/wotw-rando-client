#include <interception_macros.h>

namespace app::methods::DamageReceiversKilledStateWriter {
IL2CPP_REGISTER_METHOD(0x00DC8E30, void, OnEnable, (DamageReceiversKilledStateWriter * __this));
IL2CPP_REGISTER_METHOD(0x00DC9080, void, OnDisable, (DamageReceiversKilledStateWriter * __this));
IL2CPP_REGISTER_METHOD(0x00DC9090, void, UnsubscribeToDamageReceivers, (DamageReceiversKilledStateWriter * __this));
IL2CPP_REGISTER_METHOD(0x00DC9300, void, OnLegacyDamageReceiverKilled, (DamageReceiversKilledStateWriter * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x04757F38, DamageReceiversKilledStateWriter_OnLegacyDamageReceiverKilled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DC94D0, void, PerformStateChange, (DamageReceiversKilledStateWriter * __this));
IL2CPP_REGISTER_METHOD(0x00DC9510, IDesiredUberState *, GetRequirementsForTimeline, (DamageReceiversKilledStateWriter * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DamageReceiversKilledStateWriter * __this));
}
