using namespace app;

namespace app::methods::System::IO::StringReader {
IL2CPP_REGISTER_METHOD(0x02383B30, void, __ctor, (StringReader * __this, String * s));
IL2CPP_REGISTER_METHODINFO(0x0473EE38, StringReader__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02380650, void, Close, (StringReader * __this));
IL2CPP_REGISTER_METHOD(0x016644A0, void, Dispose, (StringReader * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02383C10, int32_t, Peek, (StringReader * __this));
IL2CPP_REGISTER_METHOD(0x02383C50, int32_t, Read, (StringReader * __this));
IL2CPP_REGISTER_METHOD(0x02383C90, int32_t, Read, (StringReader * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04719748, StringReader_Read_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02383EA0, String *, ReadToEnd, (StringReader * __this));
IL2CPP_REGISTER_METHOD(0x02383EE0, String *, ReadLine, (StringReader * __this));
}
