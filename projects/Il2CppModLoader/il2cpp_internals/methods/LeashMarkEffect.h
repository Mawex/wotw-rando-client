#include <interception_macros.h>

namespace app::methods::LeashMarkEffect {
IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (LeashMarkEffect * __this));
IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (LeashMarkEffect * __this, bool value));
IL2CPP_REGISTER_METHOD(0x015C6CC0, bool, get_IsShowing, (LeashMarkEffect * __this));
IL2CPP_REGISTER_METHOD(0x015C6CD0, void, OnPoolSpawned, (LeashMarkEffect * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (LeashMarkEffect * __this));
IL2CPP_REGISTER_METHOD(0x015C6D80, void, ShowMark, (LeashMarkEffect * __this, bool showDirection));
IL2CPP_REGISTER_METHOD(0x015C6F20, void, HideMark, (LeashMarkEffect * __this));
IL2CPP_REGISTER_METHOD(0x015C6F40, IEnumerator *, DelayedDestroyInactive, (LeashMarkEffect * __this));
IL2CPP_REGISTER_METHOD(0x015C7090, void, ChangeState, (LeashMarkEffect * __this, LeashMarkEffect_State__Enum state));
IL2CPP_REGISTER_METHOD(0x015C7640, void, FixedUpdate, (LeashMarkEffect * __this));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (LeashMarkEffect * __this));
IL2CPP_REGISTER_METHOD(0x015C7A60, void, _ChangeState_b__19_0, (LeashMarkEffect * __this));
IL2CPP_REGISTER_METHODINFO(0x04731060, LeashMarkEffect__ChangeState_b__19_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015C7A90, void, _ChangeState_b__19_1, (LeashMarkEffect * __this));
IL2CPP_REGISTER_METHODINFO(0x0476BE10, LeashMarkEffect__ChangeState_b__19_1__MethodInfo);
}
