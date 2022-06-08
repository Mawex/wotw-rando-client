using namespace app;

namespace app::methods::TriangleNet::Log {
IL2CPP_REGISTER_METHOD(0x026294B0, bool, get_Verbose, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02629550, void, set_Verbose, (bool value));
IL2CPP_REGISTER_METHOD(0x02629600, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02629870, void, __ctor, (Log * __this));
IL2CPP_REGISTER_METHOD(0x026299C0, ILog_1_LogItem_ *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02629A60, void, Add, (Log * __this, LogItem * item));
IL2CPP_REGISTER_METHOD(0x02629B00, void, Clear, (Log * __this));
IL2CPP_REGISTER_METHOD(0x02629BB0, void, Info, (Log * __this, String * message));
IL2CPP_REGISTER_METHOD(0x02629D90, void, Warning, (Log * __this, String * message, String * location));
IL2CPP_REGISTER_METHOD(0x02629F20, void, Error, (Log * __this, String * message, String * location));
IL2CPP_REGISTER_METHOD(0x002FA280, IList_1_TriangleNet_Logging_LogItem_ *, get_Data, (Log * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, LogLevel__Enum, get_Level, (Log * __this));
}
