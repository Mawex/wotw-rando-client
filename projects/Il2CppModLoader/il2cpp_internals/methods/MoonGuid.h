#include <interception_macros.h>

namespace app::methods::MoonGuid {
IL2CPP_REGISTER_METHOD(0x00F506D0, void, __ctor, (MoonGuid * __this, MoonGuid * moonGuid));
IL2CPP_REGISTER_METHOD(0x00F50700, void, __ctor, (MoonGuid * __this, int32_t a, int32_t b, int32_t c, int32_t d));
IL2CPP_REGISTER_METHOD(0x00F50720, void, __ctor, (MoonGuid * __this, Guid guid));
IL2CPP_REGISTER_METHOD(0x00F50760, void, __ctor, (MoonGuid * __this, String * guid));
IL2CPP_REGISTER_METHOD(0x00F50770, void, __ctor, (MoonGuid * __this, Byte__Array * guidByteArray));
IL2CPP_REGISTER_METHOD(0x00F50780, void, __ctor, (MoonGuid * __this, BinaryReader * reader));
IL2CPP_REGISTER_METHOD(0x00F50810, void, Parse, (MoonGuid * __this, Guid guid));
IL2CPP_REGISTER_METHOD(0x00F50840, void, Parse, (MoonGuid * __this, Byte__Array * guidByteArray));
IL2CPP_REGISTER_METHOD(0x00F50930, void, Parse, (MoonGuid * __this, String * guid));
IL2CPP_REGISTER_METHOD(0x00F50B80, Byte__Array *, ToByteArray, (MoonGuid * __this));
IL2CPP_REGISTER_METHOD(0x00F51090, String *, get_GUIDString, (MoonGuid * __this));
IL2CPP_REGISTER_METHOD(0x00F510B0, bool, operator___, (MoonGuid * a, MoonGuid * b));
IL2CPP_REGISTER_METHOD(0x00F510E0, bool, operator___, (MoonGuid * a, MoonGuid * b));
IL2CPP_REGISTER_METHOD(0x00F51090, String *, ToString, (MoonGuid * __this));
IL2CPP_REGISTER_METHOD(0x00F511C0, void, UpdateString, (MoonGuid * __this));
IL2CPP_REGISTER_METHOD(0x00F51540, bool, Equals, (MoonGuid * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x00F516A0, bool, Equals, (MoonGuid * __this, MoonGuid * moonGuid));
IL2CPP_REGISTER_METHOD(0x00F516D0, int32_t, GetHashCode, (MoonGuid * __this));
IL2CPP_REGISTER_METHOD(0x00F516E0, void, Serialize, (MoonGuid * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00F51750, void, Save, (MoonGuid * __this, UberStateArchive * ar));
IL2CPP_REGISTER_METHOD(0x00F51830, void, Load, (MoonGuid * __this, UberStateArchive * ar));
IL2CPP_REGISTER_METHOD(0x00F51920, void, Save, (MoonGuid * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00F519A0, void, __cctor, ());
}
