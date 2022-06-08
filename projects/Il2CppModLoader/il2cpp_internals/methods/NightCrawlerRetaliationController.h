#include <interception_macros.h>

namespace app::methods::NightCrawlerRetaliationController {
IL2CPP_REGISTER_METHOD(0x00608180, Enum__Array *, GetEntries, (NightCrawlerRetaliationController * __this));
IL2CPP_REGISTER_METHOD(0x00608210, void, OnEnable, (NightCrawlerRetaliationController * __this));
IL2CPP_REGISTER_METHOD(0x006083C0, void, OnDisable, (NightCrawlerRetaliationController * __this));
IL2CPP_REGISTER_METHOD(0x00608570, void, OnDamageReceived, (NightCrawlerRetaliationController * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x04762D08, NightCrawlerRetaliationController_OnDamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00608590, Enum, Evaluate, (NightCrawlerRetaliationController * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (NightCrawlerRetaliationController * __this));
IL2CPP_REGISTER_METHOD(0x00608630, bool, Validate, (NightCrawlerRetaliationController * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00608670, void, ResetCondition, (NightCrawlerRetaliationController * __this));
IL2CPP_REGISTER_METHOD(0x00608680, void, UpdateCondition, (NightCrawlerRetaliationController * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x006086C0, void, __ctor, (NightCrawlerRetaliationController * __this));
}
