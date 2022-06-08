using namespace app;

namespace app::methods::Moon::HitStop {
IL2CPP_REGISTER_METHOD(0x014AC1C0, void, SubmitHitStop, (GameObject * go, float duration));
IL2CPP_REGISTER_METHOD(0x014AC370, void, SubmitHitStop, (IHitStopReceiver * hitStopReceiver, float duration));
IL2CPP_REGISTER_METHOD(0x014AC730, void, SubmitHitStopReceiverInternal, (HitStop * __this, IHitStopReceiver * hitStopReceiver, float duration));
IL2CPP_REGISTER_METHOD(0x014AC8F0, void, SubmitHitStopInternal, (HitStop * __this, List_1_Moon_ISuspendable_ * suspendables, float duration));
IL2CPP_REGISTER_METHOD(0x014ACD00, void, Awake, (HitStop * __this));
IL2CPP_REGISTER_METHOD(0x014ACE50, void, OnDisable, (HitStop * __this));
IL2CPP_REGISTER_METHOD(0x014ACE60, void, OnDestroy, (HitStop * __this));
IL2CPP_REGISTER_METHOD(0x014ACFB0, void, UpdateHitStop, (HitStop * __this));
IL2CPP_REGISTER_METHOD(0x014AD2A0, void, Clear, (HitStop * __this));
IL2CPP_REGISTER_METHOD(0x014AD440, void, __ctor, (HitStop * __this));
IL2CPP_REGISTER_METHOD(0x014AD680, void, __cctor, (MethodInfo * method));
}
