#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::TripleDES {
IL2CPP_REGISTER_METHOD(0x01E12060, void, __ctor, (TripleDES * __this));
IL2CPP_REGISTER_METHOD(0x01E12140, Byte__Array *, get_Key, (TripleDES * __this));
IL2CPP_REGISTER_METHOD(0x01E122E0, void, set_Key, (TripleDES * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x04794870, TripleDES_set_Key__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E12530, TripleDES *, Create, ());
IL2CPP_REGISTER_METHOD(0x01E12670, TripleDES *, Create, (String * str));
IL2CPP_REGISTER_METHOD(0x01E12750, bool, IsWeakKey, (Byte__Array * rgbKey));
IL2CPP_REGISTER_METHODINFO(0x0471BD00, TripleDES_IsWeakKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E12900, bool, EqualBytes, (Byte__Array * rgbKey, int32_t start1, int32_t start2, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04797680, TripleDES_EqualBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E12B40, bool, IsLegalKeySize, (Byte__Array * rgbKey));
IL2CPP_REGISTER_METHOD(0x01E12B60, void, __cctor, ());
}
