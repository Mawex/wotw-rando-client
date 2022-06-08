#include <interception_macros.h>

namespace app::methods::ConditionalShowAttribute {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_MethodName, (ConditionalShowAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_MethodName, (ConditionalShowAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_ReturnValue, (ConditionalShowAttribute * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_ReturnValue, (ConditionalShowAttribute * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01669060, void, __ctor, (ConditionalShowAttribute * __this, String * methodName, bool returnValue));
}
