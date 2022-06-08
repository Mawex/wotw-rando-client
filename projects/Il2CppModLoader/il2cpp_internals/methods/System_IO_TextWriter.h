#include <interception_macros.h>

namespace app::methods::System::IO::TextWriter {
IL2CPP_REGISTER_METHOD(0x02385F00, String *, get_InitialNewLine, ());
IL2CPP_REGISTER_METHOD(0x02385F10, void, __ctor, (TextWriter * __this));
IL2CPP_REGISTER_METHOD(0x02385FD0, void, __ctor, (TextWriter * __this, IFormatProvider * formatProvider));
IL2CPP_REGISTER_METHOD(0x023860A0, IFormatProvider *, get_FormatProvider, (TextWriter * __this));
IL2CPP_REGISTER_METHOD(0x023860E0, void, Close, (TextWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (TextWriter * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02386190, void, Dispose, (TextWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (TextWriter * __this));
IL2CPP_REGISTER_METHOD(0x02386240, String *, get_NewLine, (TextWriter * __this));
IL2CPP_REGISTER_METHOD(0x02386250, TextWriter *, Synchronized, (TextWriter * writer));
IL2CPP_REGISTER_METHODINFO(0x04782630, TextWriter_Synchronized__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Write, (TextWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x02386490, void, Write, (TextWriter * __this, Char__Array * buffer));
IL2CPP_REGISTER_METHOD(0x023864C0, void, Write, (TextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047824C8, TextWriter_Write_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023866E0, void, Write, (TextWriter * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02386740, void, Write, (TextWriter * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x023867A0, void, Write, (TextWriter * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x02386800, void, Write, (TextWriter * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x02386860, void, Write, (TextWriter * __this, float value));
IL2CPP_REGISTER_METHOD(0x023868C0, void, Write, (TextWriter * __this, double value));
IL2CPP_REGISTER_METHOD(0x02386920, void, Write, (TextWriter * __this, Decimal value));
IL2CPP_REGISTER_METHOD(0x02386990, void, Write, (TextWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x023869D0, void, Write, (TextWriter * __this, String * format, Object * arg0));
IL2CPP_REGISTER_METHOD(0x02386A80, void, Write, (TextWriter * __this, String * format, Object * arg0, Object * arg1, Object * arg2));
IL2CPP_REGISTER_METHOD(0x02386B10, void, Write, (TextWriter * __this, String * format, Object__Array * arg));
IL2CPP_REGISTER_METHOD(0x02386B70, void, WriteLine, (TextWriter * __this));
IL2CPP_REGISTER_METHOD(0x02386B90, void, WriteLine, (TextWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x02386BD0, void, WriteLine, (TextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x02386C10, void, WriteLine, (TextWriter * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02386C50, void, WriteLine, (TextWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02386ED0, void, WriteLine, (TextWriter * __this, String * format, Object * arg0));
IL2CPP_REGISTER_METHOD(0x02386F80, void, WriteLine, (TextWriter * __this, String * format, Object * arg0, Object * arg1));
IL2CPP_REGISTER_METHOD(0x02387040, void, WriteLine, (TextWriter * __this, String * format, Object * arg0, Object * arg1, Object * arg2));
IL2CPP_REGISTER_METHOD(0x023870D0, void, WriteLine, (TextWriter * __this, String * format, Object__Array * arg));
IL2CPP_REGISTER_METHOD(0x02387130, void, __cctor, ());
}
