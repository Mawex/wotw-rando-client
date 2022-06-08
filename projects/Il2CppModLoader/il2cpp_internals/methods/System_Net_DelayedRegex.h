#include <interception_macros.h>

namespace app::methods::System::Net::DelayedRegex {
IL2CPP_REGISTER_METHOD(0x01EAC710, void, __ctor, (DelayedRegex * __this, String * regexString));
IL2CPP_REGISTER_METHODINFO(0x04764D00, DelayedRegex__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EAC7D0, void, __ctor, (DelayedRegex * __this, Regex * regex));
IL2CPP_REGISTER_METHODINFO(0x047313D8, DelayedRegex__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EAC890, Regex *, get_AsRegex, (DelayedRegex * __this));
IL2CPP_REGISTER_METHOD(0x01EACA10, String *, ToString, (DelayedRegex * __this));
}
