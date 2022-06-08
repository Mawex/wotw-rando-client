#include <interception_macros.h>

namespace app::methods::System::IO::StreamReader_NullStreamReader {
IL2CPP_REGISTER_METHOD(0x02381F00, void, __ctor, (StreamReader_NullStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x02382050, Stream *, get_BaseStream, (StreamReader_NullStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x023820F0, Encoding *, get_CurrentEncoding, (StreamReader_NullStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (StreamReader_NullStreamReader * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, Peek, (StreamReader_NullStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, Read, (StreamReader_NullStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, Read, (StreamReader_NullStreamReader * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, ReadLine, (StreamReader_NullStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x02382100, String *, ReadToEnd, (StreamReader_NullStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, ReadBuffer, (StreamReader_NullStreamReader * __this));
}
