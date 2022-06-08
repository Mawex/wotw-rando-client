using namespace app;

namespace app::methods::System::Console {
IL2CPP_REGISTER_METHOD(0x02032E80, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x020330A0, void, SetupStreams, (Encoding * inputEncoding, Encoding * outputEncoding));
IL2CPP_REGISTER_METHOD(0x020335C0, TextWriter *, get_Error, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02033660, TextWriter *, get_Out, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02033700, Stream *, Open, (void * handle, FileAccess__Enum access, int32_t bufferSize));
IL2CPP_REGISTER_METHOD(0x020338D0, Stream *, OpenStandardError, (int32_t bufferSize));
IL2CPP_REGISTER_METHOD(0x020339B0, Stream *, OpenStandardInput, (int32_t bufferSize));
IL2CPP_REGISTER_METHOD(0x02033A90, Stream *, OpenStandardOutput, (int32_t bufferSize));
IL2CPP_REGISTER_METHOD(0x02033B70, void, SetOut, (TextWriter * newOut));
IL2CPP_REGISTER_METHODINFO(0x04746920, Console_SetOut__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02033C50, Encoding *, get_InputEncoding, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02033CF0, Encoding *, get_OutputEncoding, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02033D90, ConsoleKeyInfo, ReadKey, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02033E40, ConsoleKeyInfo, ReadKey, (bool intercept));
IL2CPP_REGISTER_METHOD(0x02034010, void, DoConsoleCancelEvent, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x0477CE08, Console_DoConsoleCancelEvent__MethodInfo);
}
