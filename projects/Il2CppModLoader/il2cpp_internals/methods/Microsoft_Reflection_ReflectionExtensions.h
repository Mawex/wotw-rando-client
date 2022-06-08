#include <interception_macros.h>

namespace app::methods::Microsoft::Reflection::ReflectionExtensions {
IL2CPP_REGISTER_METHOD(0x01A084B0, bool, IsEnum, (Type * type));
IL2CPP_REGISTER_METHOD(0x023AE4B0, bool, IsAbstract, (Type * type));
IL2CPP_REGISTER_METHOD(0x023AE4E0, bool, IsSealed, (Type * type));
IL2CPP_REGISTER_METHOD(0x013DD200, Type *, BaseType, (Type * type));
IL2CPP_REGISTER_METHOD(0x023AE510, Assembly *, Assembly, (Type * type));
IL2CPP_REGISTER_METHOD(0x023AE540, TypeCode__Enum, GetTypeCode, (Type * type));
IL2CPP_REGISTER_METHOD(0x023AE5E0, bool, ReflectionOnly, (Assembly * assm));
}
