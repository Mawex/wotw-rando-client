using namespace app;

namespace app::methods::AnalyticsBridge {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E8E0F0, void, OnLog, (String * message, String * stacktrace, LogType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x047629C8, AnalyticsBridge_OnLog__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, SendEvent, (IDataEvent * evt));
}
