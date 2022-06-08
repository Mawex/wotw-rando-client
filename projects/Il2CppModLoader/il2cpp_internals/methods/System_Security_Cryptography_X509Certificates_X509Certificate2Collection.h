#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509Certificate2Collection {
IL2CPP_REGISTER_METHOD(0x01C9A650, void, __ctor, (X509Certificate2Collection * __this));
IL2CPP_REGISTER_METHOD(0x021C5C40, void, __ctor, (X509Certificate2Collection * __this, X509Certificate2Collection * certificates));
IL2CPP_REGISTER_METHOD(0x021C5C70, X509Certificate2 *, get_Item, (X509Certificate2Collection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04735DB0, X509Certificate2Collection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C5DC0, int32_t, Add, (X509Certificate2Collection * __this, X509Certificate2 * certificate));
IL2CPP_REGISTER_METHODINFO(0x047449D8, X509Certificate2Collection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C5EA0, void, AddRange, (X509Certificate2Collection * __this, X509Certificate2Collection * certificates));
IL2CPP_REGISTER_METHODINFO(0x047344B0, X509Certificate2Collection_AddRange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C5F80, bool, Contains, (X509Certificate2Collection * __this, X509Certificate2 * certificate));
IL2CPP_REGISTER_METHODINFO(0x0473FDD0, X509Certificate2Collection_Contains__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C61D0, X509Certificate2Collection *, Find, (X509Certificate2Collection * __this, X509FindType__Enum findType, Object * findValue, bool validOnly));
IL2CPP_REGISTER_METHODINFO(0x0472A1B0, X509Certificate2Collection_Find__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C7150, X509Certificate2Enumerator *, GetEnumerator, (X509Certificate2Collection * __this));
IL2CPP_REGISTER_METHOD(0x021C7310, void, __cctor, ());
}
