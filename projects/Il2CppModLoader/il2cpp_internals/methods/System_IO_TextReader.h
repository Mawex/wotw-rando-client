using namespace app;

namespace app::methods::System::IO::TextReader {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TextReader * __this));
IL2CPP_REGISTER_METHOD(0x02384AD0, void, Close, (TextReader * __this));
IL2CPP_REGISTER_METHOD(0x02384B80, void, Dispose, (TextReader * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (TextReader * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, Peek, (TextReader * __this));
IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, Read, (TextReader * __this));
IL2CPP_REGISTER_METHOD(0x02384C30, int32_t, Read, (TextReader * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0470BEF8, TextReader_Read_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02384E50, String *, ReadToEnd, (TextReader * __this));
IL2CPP_REGISTER_METHOD(0x02385040, String *, ReadLine, (TextReader * __this));
IL2CPP_REGISTER_METHOD(0x02385370, TextReader *, Synchronized, (TextReader * reader));
IL2CPP_REGISTER_METHODINFO(0x0475A4F0, TextReader_Synchronized__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02385590, void, __cctor, (MethodInfo * method));
}
