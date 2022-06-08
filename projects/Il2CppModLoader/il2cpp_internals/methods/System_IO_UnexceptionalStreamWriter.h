#include <interception_macros.h>

namespace app::methods::System::IO::UnexceptionalStreamWriter {
IL2CPP_REGISTER_METHOD(0x02389090, void, __ctor, (UnexceptionalStreamWriter * __this, Stream * stream, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x02389160, void, Flush, (UnexceptionalStreamWriter * __this));
IL2CPP_REGISTER_METHOD(0x02389210, void, Write, (UnexceptionalStreamWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x023892D0, void, Write, (UnexceptionalStreamWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x02389370, void, Write, (UnexceptionalStreamWriter * __this, Char__Array * value));
IL2CPP_REGISTER_METHOD(0x023894A0, void, Write, (UnexceptionalStreamWriter * __this, String * value));
}
