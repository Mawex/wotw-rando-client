using namespace app;

namespace app::methods::System::Threading::EventWaitHandle {
IL2CPP_REGISTER_METHOD(0x027DB590, void, __ctor, (EventWaitHandle * __this, bool initialState, EventResetMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x027DB5B0, void, __ctor, (EventWaitHandle * __this, bool initialState, EventResetMode__Enum mode, String * name));
IL2CPP_REGISTER_METHODINFO(0x0473A610, EventWaitHandle__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027DBA20, bool, Reset, (EventWaitHandle * __this));
IL2CPP_REGISTER_METHODINFO(0x04752C60, EventWaitHandle_Reset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027DBAD0, bool, Set, (EventWaitHandle * __this));
IL2CPP_REGISTER_METHODINFO(0x0475E050, EventWaitHandle_Set__MethodInfo);
}
