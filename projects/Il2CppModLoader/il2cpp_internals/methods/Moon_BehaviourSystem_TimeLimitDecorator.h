#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::TimeLimitDecorator {
IL2CPP_REGISTER_METHOD(0x03011D90, float, get_TimeRemaining, (TimeLimitDecorator * __this));
IL2CPP_REGISTER_METHOD(0x03011E20, float, get_TimeRemainingNormalized, (TimeLimitDecorator * __this));
IL2CPP_REGISTER_METHOD(0x00CBB680, void, Awake, (TimeLimitDecorator * __this));
IL2CPP_REGISTER_METHOD(0x00CBB680, void, OnEnter, (TimeLimitDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03011E70, BehaviourStatus__Enum, OnExecute, (TimeLimitDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldEvaluateEachTick, (TimeLimitDecorator * __this));
IL2CPP_REGISTER_METHOD(0x03011F10, float, GetUtility, (TimeLimitDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03011F40, void, __ctor, (TimeLimitDecorator * __this));
}
