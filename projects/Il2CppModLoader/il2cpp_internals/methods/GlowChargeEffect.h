#include <interception_macros.h>

namespace app::methods::GlowChargeEffect {
IL2CPP_REGISTER_METHOD(0x007FAA40, void, Awake, (GlowChargeEffect * __this));
IL2CPP_REGISTER_METHOD(0x007FAC20, void, OnEnable, (GlowChargeEffect * __this));
IL2CPP_REGISTER_METHOD(0x007FAC30, void, OnDisable, (GlowChargeEffect * __this));
IL2CPP_REGISTER_METHOD(0x007FAC40, void, OnDestroy, (GlowChargeEffect * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (GlowChargeEffect * __this));
IL2CPP_REGISTER_METHOD(0x007FAE20, void, CancelCharge, (GlowChargeEffect * __this));
IL2CPP_REGISTER_METHOD(0x007FAE40, void, OnChargeTimelineEnded, (GlowChargeEffect * __this));
IL2CPP_REGISTER_METHODINFO(0x0472B8E8, GlowChargeEffect_OnChargeTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007FAF30, void, OnCancelTimelineEnded, (GlowChargeEffect * __this));
IL2CPP_REGISTER_METHODINFO(0x047998C0, GlowChargeEffect_OnCancelTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007FB020, void, OnChargeCompletedTrigger, (GlowChargeEffect * __this));
IL2CPP_REGISTER_METHODINFO(0x0473FFD0, GlowChargeEffect_OnChargeCompletedTrigger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007FB040, void, ChangeState, (GlowChargeEffect * __this, GlowChargeEffect_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x007FB710, void, __ctor, (GlowChargeEffect * __this));
}
