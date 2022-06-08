#include <interception_macros.h>

namespace app::methods::Rail {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Activated, (Rail * __this));
IL2CPP_REGISTER_METHOD(0x00726BD0, void, set_Activated, (Rail * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00726D50, Renderer *, get_RailRenderer, (Rail * __this));
IL2CPP_REGISTER_METHOD(0x00726E20, void, Start, (Rail * __this));
IL2CPP_REGISTER_METHOD(0x00727000, void, FixedUpdate, (Rail * __this));
IL2CPP_REGISTER_METHOD(0x007277B0, bool, ShouldDealDamage, (Rail * __this, GameObject * obj));
IL2CPP_REGISTER_METHODINFO(0x04799EF0, Rail_ShouldDealDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00727890, void, StopIgnoringCart, (Rail * __this, Cart * cart));
IL2CPP_REGISTER_METHOD(0x00727980, void, IgnoreCart, (Rail * __this, Cart * cart, float time));
IL2CPP_REGISTER_METHOD(0x00727B90, bool, IsCartIgnored, (Rail * __this, Cart * cart));
IL2CPP_REGISTER_METHOD(0x00727C50, void, OnCollisionEnter, (Rail * __this, Collision * col));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RequiresNightberry, (Rail * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_RequiresCart, (Rail * __this));
IL2CPP_REGISTER_METHOD(0x00727F90, void, Serialize, (Rail * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00727FE0, void, OnDrawGizmos, (Rail * __this));
IL2CPP_REGISTER_METHOD(0x00728350, void, __ctor, (Rail * __this));
IL2CPP_REGISTER_METHOD(0x007284D0, void, __cctor, ());
}
