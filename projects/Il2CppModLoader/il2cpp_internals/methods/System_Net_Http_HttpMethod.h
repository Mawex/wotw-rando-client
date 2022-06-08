#include <interception_macros.h>

namespace app::methods::System::Net::Http::HttpMethod {
IL2CPP_REGISTER_METHOD(0x02D1B840, void, __ctor, (HttpMethod * __this, String * method_1));
IL2CPP_REGISTER_METHODINFO(0x04753B20, HttpMethod__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D1B910, HttpMethod *, get_Get, ());
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Method, (HttpMethod * __this));
IL2CPP_REGISTER_METHOD(0x02D1B9B0, HttpMethod *, get_Post, ());
IL2CPP_REGISTER_METHOD(0x02D1BA50, bool, Equals, (HttpMethod * __this, HttpMethod * other));
IL2CPP_REGISTER_METHOD(0x02D1BBA0, bool, Equals, (HttpMethod * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode, (HttpMethod * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, ToString, (HttpMethod * __this));
IL2CPP_REGISTER_METHOD(0x02D1BD80, void, __cctor, ());
}
