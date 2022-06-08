#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::RandomNumberGenerator {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RandomNumberGenerator * __this));
IL2CPP_REGISTER_METHOD(0x028EE2B0, RandomNumberGenerator *, Create, ());
IL2CPP_REGISTER_METHOD(0x028EE3F0, RandomNumberGenerator *, Create, (String * rngName));
IL2CPP_REGISTER_METHOD(0x028EE4D0, void, Dispose, (RandomNumberGenerator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (RandomNumberGenerator * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x028EE580, void, GetBytes, (RandomNumberGenerator * __this, Byte__Array * data, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04796620, RandomNumberGenerator_GetBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028EE780, void, GetNonZeroBytes, (RandomNumberGenerator * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x0472A3A0, RandomNumberGenerator_GetNonZeroBytes__MethodInfo);
}
