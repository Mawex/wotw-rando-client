using namespace app;

namespace app::methods::DelayedLog {
IL2CPP_REGISTER_METHOD(0x02F87CC0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02F87E20, void, RegisterDelayedDebugLog, (Action * action));
IL2CPP_REGISTER_METHOD(0x02F87EF0, void, Update, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02F880A0, void, EditorUpdate, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DelayedLog * __this));
}
