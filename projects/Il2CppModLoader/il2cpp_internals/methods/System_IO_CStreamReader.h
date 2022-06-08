#include <interception_macros.h>

namespace app::methods::System::IO::CStreamReader {
IL2CPP_REGISTER_METHOD(0x01E00E50, void, __ctor, (CStreamReader * __this, Stream * stream, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x01E00F90, int32_t, Peek, (CStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x01E01030, int32_t, Read, (CStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x01E01170, int32_t, Read, (CStreamReader * __this, Char__Array * dest, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04719148, CStreamReader_Read_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E01340, String *, ReadLine, (CStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x01E013F0, String *, ReadToEnd, (CStreamReader * __this));
}
