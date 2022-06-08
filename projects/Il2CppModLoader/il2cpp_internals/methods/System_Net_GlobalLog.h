#include <interception_macros.h>

namespace app::methods::System::Net::GlobalLog {
IL2CPP_REGISTER_METHOD(0x01D383E0, BaseLoggingObject *, LoggingInitialize, ());
IL2CPP_REGISTER_METHOD(0x00420EE0, ThreadKinds__Enum, get_CurrentThreadKind, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetThreadSource, (ThreadKinds__Enum source));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ThreadContract, (ThreadKinds__Enum kind, String * errorMsg));
IL2CPP_REGISTER_METHOD(0x01D38520, void, ThreadContract, (ThreadKinds__Enum kind, ThreadKinds__Enum allowedSources, String * errorMsg));
IL2CPP_REGISTER_METHODINFO(0x04791D20, GlobalLog_ThreadContract_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, AddToArray, (String * msg));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Ignore, (Object * msg));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Print, (String * msg));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintHex, (String * msg, Object * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Enter, (String * func));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Enter, (String * func, String * parms));
IL2CPP_REGISTER_METHOD(0x01D38600, void, Assert, (bool condition, String * messageFormat, Object__Array * data));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Assert, (String * message));
IL2CPP_REGISTER_METHOD(0x01D386F0, void, Assert, (String * message, String * detailMessage));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LeaveException, (String * func, Exception * exception));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Leave, (String * func));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Leave, (String * func, String * result));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Leave, (String * func, int32_t returnval));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Leave, (String * func, bool returnval));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DumpArray, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (Byte__Array * buffer, int32_t length));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (Byte__Array * buffer, int32_t offset, int32_t length));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (void * buffer, int32_t offset, int32_t length));
IL2CPP_REGISTER_METHOD(0x01D38840, void, __cctor, ());
}
