#include <interception_macros.h>

namespace app::methods::System::Net::HttpListenerTimeoutManager {
    IL2CPP_REGISTER_METHOD(0x01E58740, app::TimeSpan, get_EntityBody, (app::HttpListenerTimeoutManager * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0472A948, HttpListenerTimeoutManager_get_EntityBody__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E58790, void, set_EntityBody, (app::HttpListenerTimeoutManager * this_ptr, app::TimeSpan value));
    IL2CPP_REGISTER_METHODINFO(0x04773FC0, HttpListenerTimeoutManager_set_EntityBody__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E587E0, app::TimeSpan, get_DrainEntityBody, (app::HttpListenerTimeoutManager * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04748E48, HttpListenerTimeoutManager_get_DrainEntityBody__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E58830, void, set_DrainEntityBody, (app::HttpListenerTimeoutManager * this_ptr, app::TimeSpan value));
    IL2CPP_REGISTER_METHODINFO(0x04725558, HttpListenerTimeoutManager_set_DrainEntityBody__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E58880, app::TimeSpan, get_RequestQueue, (app::HttpListenerTimeoutManager * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047533C8, HttpListenerTimeoutManager_get_RequestQueue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E588D0, void, set_RequestQueue, (app::HttpListenerTimeoutManager * this_ptr, app::TimeSpan value));
    IL2CPP_REGISTER_METHODINFO(0x0476A270, HttpListenerTimeoutManager_set_RequestQueue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E58920, app::TimeSpan, get_IdleConnection, (app::HttpListenerTimeoutManager * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0473FD38, HttpListenerTimeoutManager_get_IdleConnection__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E58970, void, set_IdleConnection, (app::HttpListenerTimeoutManager * this_ptr, app::TimeSpan value));
    IL2CPP_REGISTER_METHODINFO(0x04798B10, HttpListenerTimeoutManager_set_IdleConnection__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E589C0, app::TimeSpan, get_HeaderWait, (app::HttpListenerTimeoutManager * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0474CA98, HttpListenerTimeoutManager_get_HeaderWait__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E58A10, void, set_HeaderWait, (app::HttpListenerTimeoutManager * this_ptr, app::TimeSpan value));
    IL2CPP_REGISTER_METHODINFO(0x0470A998, HttpListenerTimeoutManager_set_HeaderWait__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E58A60, int64_t, get_MinSendBytesPerSecond, (app::HttpListenerTimeoutManager * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04757278, HttpListenerTimeoutManager_get_MinSendBytesPerSecond__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E58AB0, void, set_MinSendBytesPerSecond, (app::HttpListenerTimeoutManager * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHODINFO(0x0473EDE0, HttpListenerTimeoutManager_set_MinSendBytesPerSecond__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::HttpListenerTimeoutManager * this_ptr));
}
