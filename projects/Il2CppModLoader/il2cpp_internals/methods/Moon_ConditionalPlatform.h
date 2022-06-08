using namespace app;

namespace app::methods::Moon::ConditionalPlatform {
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (ConditionalPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00CC8D60, void, Awake, (ConditionalPlatform * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (ConditionalPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00CC8E20, void, Apply, (ConditionalPlatform * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00420EE0, IUberState__Array *, get_AffectingUberStates, (ConditionalPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00CC8EF0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (ConditionalPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00CC9040, void, OnDestroy, (ConditionalPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00CC9100, void, OnUpdate, (ConditionalPlatform * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00CC92E0, void, StopTimeline, (ConditionalPlatform * __this, MoonTimeline * moonTimeline));
IL2CPP_REGISTER_METHOD(0x00CC93A0, void, StartTimeline, (ConditionalPlatform * __this, MoonTimeline * moonTimeline));
IL2CPP_REGISTER_METHOD(0x00CC9460, bool, IsPlayerGrounded, (ConditionalPlatform * __this));
IL2CPP_REGISTER_METHOD(0x008223A0, void, __ctor, (ConditionalPlatform * __this));
}
