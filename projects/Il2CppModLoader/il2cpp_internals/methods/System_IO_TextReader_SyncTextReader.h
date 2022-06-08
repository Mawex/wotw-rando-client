#include <interception_macros.h>

namespace app::methods::System::IO::TextReader_SyncTextReader {
IL2CPP_REGISTER_METHOD(0x02385D50, void, __ctor, (TextReader_SyncTextReader * __this, TextReader * t));
IL2CPP_REGISTER_METHOD(0x01F3EDB0, void, Close, (TextReader_SyncTextReader * __this));
IL2CPP_REGISTER_METHOD(0x02385E00, void, Dispose, (TextReader_SyncTextReader * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02287F30, int32_t, Peek, (TextReader_SyncTextReader * __this));
IL2CPP_REGISTER_METHOD(0x01F3EE40, int32_t, Read, (TextReader_SyncTextReader * __this));
IL2CPP_REGISTER_METHOD(0x02385EA0, int32_t, Read, (TextReader_SyncTextReader * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01F3EED0, String *, ReadLine, (TextReader_SyncTextReader * __this));
IL2CPP_REGISTER_METHOD(0x02385ED0, String *, ReadToEnd, (TextReader_SyncTextReader * __this));
}
