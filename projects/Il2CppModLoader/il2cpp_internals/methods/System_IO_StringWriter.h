#include <interception_macros.h>

namespace app::methods::System::IO::StringWriter {
IL2CPP_REGISTER_METHOD(0x02384120, void, __ctor, (StringWriter * __this));
IL2CPP_REGISTER_METHOD(0x023842C0, void, __ctor, (StringWriter * __this, IFormatProvider * formatProvider));
IL2CPP_REGISTER_METHOD(0x02384420, void, __ctor, (StringWriter * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x023844F0, void, __ctor, (StringWriter * __this, StringBuilder * sb, IFormatProvider * formatProvider));
IL2CPP_REGISTER_METHODINFO(0x0478A848, StringWriter__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02384600, void, Close, (StringWriter * __this));
IL2CPP_REGISTER_METHOD(0x0089F980, void, Dispose, (StringWriter * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02384620, Encoding *, get_Encoding, (StringWriter * __this));
IL2CPP_REGISTER_METHOD(0x02384820, void, Write, (StringWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x02384850, void, Write, (StringWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047543F0, StringWriter_Write_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02384A60, void, Write, (StringWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02384AA0, String *, ToString, (StringWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
