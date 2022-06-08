using namespace app;

namespace app::methods::Moon::ExceptionProcessing::ExceptionProcessor {
IL2CPP_REGISTER_METHOD(0x01987530, Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_ *, Process, (ExceptionProcessor * __this, String * logPath));
IL2CPP_REGISTER_METHOD(0x019875F0, void, HandleLog, (ExceptionProcessor * __this, String * logString, String * stackTrace, LogType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x04706B38, ExceptionProcessor_HandleLog__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01987600, void, ProcessMessage, (ExceptionProcessor * __this, String * logString, String * stackTrace));
IL2CPP_REGISTER_METHOD(0x01987AC0, void, ProcessLog, (ExceptionProcessor * __this, String * path));
IL2CPP_REGISTER_METHOD(0x01987B80, void, ProcessMessages, (ExceptionProcessor * __this, String * data));
IL2CPP_REGISTER_METHOD(0x01987D20, String *, ParseException, (ExceptionProcessor * __this, String * exception));
IL2CPP_REGISTER_METHOD(0x01987DE0, String *, ParseStackTrace, (ExceptionProcessor * __this, String * exception));
IL2CPP_REGISTER_METHOD(0x01988130, void, __ctor, (ExceptionProcessor * __this));
IL2CPP_REGISTER_METHOD(0x019884C0, void, __cctor, (MethodInfo * method));
}
