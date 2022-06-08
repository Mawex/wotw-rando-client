using namespace app;

namespace app::methods::System::IO::UnexceptionalStreamReader {
IL2CPP_REGISTER_METHOD(0x02388770, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02388850, void, __ctor, (UnexceptionalStreamReader * __this, Stream * stream, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x02388910, int32_t, Peek, (UnexceptionalStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x023889B0, int32_t, Read, (UnexceptionalStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x02388A50, int32_t, Read, (UnexceptionalStreamReader * __this, Char__Array * dest_buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0470D330, UnexceptionalStreamReader_Read_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02388CB0, bool, CheckEOL, (UnexceptionalStreamReader * __this, uint16_t current));
IL2CPP_REGISTER_METHOD(0x02388F50, String *, ReadLine, (UnexceptionalStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x02388FF0, String *, ReadToEnd, (UnexceptionalStreamReader * __this));
}
