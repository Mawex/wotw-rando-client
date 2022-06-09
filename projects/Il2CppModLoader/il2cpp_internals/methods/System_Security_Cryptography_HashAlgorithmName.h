#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::HashAlgorithmName {
IL2CPP_REGISTER_METHOD(0x020DBC10, HashAlgorithmName, get_MD5, ());
IL2CPP_REGISTER_METHOD(0x020DBC90, HashAlgorithmName, get_SHA1, ());
IL2CPP_REGISTER_METHOD(0x020DBD10, HashAlgorithmName, get_SHA256, ());
IL2CPP_REGISTER_METHOD(0x020DBD90, HashAlgorithmName, get_SHA384, ());
IL2CPP_REGISTER_METHOD(0x020DBE10, HashAlgorithmName, get_SHA512, ());
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (app::HashAlgorithmName__Boxed * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x00107C00, String *, get_Name, (app::HashAlgorithmName__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001DC210, String *, ToString, (app::HashAlgorithmName__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001DC2A0, bool, Equals_1, (app::HashAlgorithmName__Boxed * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x001DC3A0, bool, Equals_2, (app::HashAlgorithmName__Boxed * this_ptr, app::HashAlgorithmName other));
IL2CPP_REGISTER_METHOD(0x001DC3D0, int32_t, GetHashCode, (app::HashAlgorithmName__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E27CD0, bool, operator____1, (app::HashAlgorithmName left, app::HashAlgorithmName right));
IL2CPP_REGISTER_METHOD(0x01E280E0, bool, operator____2, (app::HashAlgorithmName left, app::HashAlgorithmName right));
}
