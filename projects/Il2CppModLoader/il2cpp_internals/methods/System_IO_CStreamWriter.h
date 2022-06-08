#include <interception_macros.h>

namespace app::methods::System::IO::CStreamWriter {
IL2CPP_REGISTER_METHOD(0x01E014A0, void, __ctor, (CStreamWriter * __this, Stream * stream, Encoding * encoding, bool leaveOpen));
IL2CPP_REGISTER_METHOD(0x01E01600, void, Write, (CStreamWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01E018F0, void, Write, (CStreamWriter * __this, uint16_t val));
IL2CPP_REGISTER_METHOD(0x01E01AE0, void, InternalWriteString, (CStreamWriter * __this, String * val));
IL2CPP_REGISTER_METHOD(0x01E01B80, void, InternalWriteChar, (CStreamWriter * __this, uint16_t val));
IL2CPP_REGISTER_METHOD(0x01E01C20, void, InternalWriteChars, (CStreamWriter * __this, Char__Array * buffer, int32_t n));
IL2CPP_REGISTER_METHOD(0x01E01CE0, void, Write, (CStreamWriter * __this, Char__Array * val));
IL2CPP_REGISTER_METHOD(0x01E01D20, void, Write, (CStreamWriter * __this, String * val));
}
