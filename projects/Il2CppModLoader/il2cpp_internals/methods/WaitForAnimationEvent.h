using namespace app;

namespace app::methods::WaitForAnimationEvent {
IL2CPP_REGISTER_METHOD(0x008C5AC0, void, Start, (WaitForAnimationEvent * __this));
IL2CPP_REGISTER_METHOD(0x008C5C30, void, OnDestroy, (WaitForAnimationEvent * __this));
IL2CPP_REGISTER_METHOD(0x008C5DA0, bool, get_IsPerforming, (WaitForAnimationEvent * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlocking, (WaitForAnimationEvent * __this));
IL2CPP_REGISTER_METHOD(0x008C5DB0, bool, get_IsSuspended, (WaitForAnimationEvent * __this));
IL2CPP_REGISTER_METHOD(0x008C5DC0, void, set_IsSuspended, (WaitForAnimationEvent * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FDCE0, SuspendableMask__Enum, get_Mask, (WaitForAnimationEvent * __this));
IL2CPP_REGISTER_METHOD(0x008C5DD0, void, set_Mask, (WaitForAnimationEvent * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, (WaitForAnimationEvent * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (WaitForAnimationEvent * __this));
IL2CPP_REGISTER_METHOD(0x008C5DE0, void, OnAnimationEvent, (WaitForAnimationEvent * __this, String * receivedEventId));
IL2CPP_REGISTER_METHODINFO(0x047639F8, WaitForAnimationEvent_OnAnimationEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008009A0, bool, ShouldPlayAnimation, (WaitForAnimationEvent * __this));
IL2CPP_REGISTER_METHOD(0x008C5E20, void, __ctor, (WaitForAnimationEvent * __this));
}
