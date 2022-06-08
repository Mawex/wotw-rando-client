using namespace app;

namespace app::methods::AkLogger {
IL2CPP_REGISTER_METHOD(0x026EE590, void, __ctor, (AkLogger * __this));
IL2CPP_REGISTER_METHOD(0x026EE870, AkLogger *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x026EE910, void, Finalize, (AkLogger * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Init, (AkLogger * __this));
IL2CPP_REGISTER_METHOD(0x026EEB50, void, WwiseInternalLogError, (String * message));
IL2CPP_REGISTER_METHODINFO(0x047372F0, AkLogger_WwiseInternalLogError__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Message, (String * message));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Warning, (String * message));
IL2CPP_REGISTER_METHOD(0x026EEC00, void, Error, (String * message));
IL2CPP_REGISTER_METHOD(0x026EECB0, void, __cctor, (MethodInfo * method));
}
