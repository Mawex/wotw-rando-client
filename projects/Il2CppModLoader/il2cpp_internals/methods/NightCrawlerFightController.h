#include <interception_macros.h>

namespace app::methods::NightCrawlerFightController {
IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_Defeated, (NightCrawlerFightController * __this));
IL2CPP_REGISTER_METHOD(0x00603D70, void, set_Defeated, (NightCrawlerFightController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00603D80, float, get_CurrentFarZoneTimer, (NightCrawlerFightController * __this));
IL2CPP_REGISTER_METHOD(0x00603DA0, bool, get_ShouldDoFarAttack, (NightCrawlerFightController * __this));
IL2CPP_REGISTER_METHOD(0x00603DC0, bool, get_HasCriticalHealth, (NightCrawlerFightController * __this));
IL2CPP_REGISTER_METHOD(0x00603EA0, void, Awake, (NightCrawlerFightController * __this));
IL2CPP_REGISTER_METHOD(0x006046F0, void, OnEnable, (NightCrawlerFightController * __this));
IL2CPP_REGISTER_METHOD(0x00604AF0, void, OnDisable, (NightCrawlerFightController * __this));
IL2CPP_REGISTER_METHOD(0x00604EF0, void, OnFirstHit, (NightCrawlerFightController * __this));
IL2CPP_REGISTER_METHODINFO(0x04784F58, NightCrawlerFightController_OnFirstHit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006050F0, void, ResetFight, (NightCrawlerFightController * __this));
IL2CPP_REGISTER_METHOD(0x00605300, void, StartFight, (NightCrawlerFightController * __this));
IL2CPP_REGISTER_METHODINFO(0x0477E438, NightCrawlerFightController_StartFight__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00605770, void, FinishFight, (NightCrawlerFightController * __this));
IL2CPP_REGISTER_METHOD(0x00605B50, void, OriDamaged, (NightCrawlerFightController * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x04793498, NightCrawlerFightController_OriDamaged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00605B90, void, EscapeFinished, (NightCrawlerFightController * __this));
IL2CPP_REGISTER_METHODINFO(0x04753D58, NightCrawlerFightController_EscapeFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00605D60, void, FixedUpdate, (NightCrawlerFightController * __this));
IL2CPP_REGISTER_METHOD(0x00606040, void, DamageReceived, (NightCrawlerFightController * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x0475B0B8, NightCrawlerFightController_DamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00606740, void, __ctor, (NightCrawlerFightController * __this));
}
