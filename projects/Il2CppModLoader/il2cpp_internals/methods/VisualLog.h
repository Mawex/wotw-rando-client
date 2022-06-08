using namespace app;

namespace app::methods::VisualLog {
IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterStatus, (MonoBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x008C2690, VisualLog *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x008C2790, void, Disable, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x008C2830, void, OnLog, (String * message, String * stack, LogType__Enum logType));
IL2CPP_REGISTER_METHOD(0x008C29C0, void, __ctor, (VisualLog * __this));
}
