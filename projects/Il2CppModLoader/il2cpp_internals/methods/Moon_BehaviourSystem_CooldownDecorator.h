using namespace app;

namespace app::methods::Moon::BehaviourSystem::CooldownDecorator {
IL2CPP_REGISTER_METHOD(0x0300C550, float, get_TimeRemaining, (CooldownDecorator * __this));
IL2CPP_REGISTER_METHOD(0x0300C5E0, float, get_TimeRemainingNormalized, (CooldownDecorator * __this));
IL2CPP_REGISTER_METHOD(0x0300C630, void, Awake, (CooldownDecorator * __this));
IL2CPP_REGISTER_METHOD(0x0300C630, void, ResetInitCooldown, (CooldownDecorator * __this));
IL2CPP_REGISTER_METHOD(0x0300C6E0, BehaviourStatus__Enum, OnExecute, (CooldownDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0300C740, void, OnExit, (CooldownDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0300C7B0, float, GetUtility, (CooldownDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0300C7E0, void, __ctor, (CooldownDecorator * __this));
}
