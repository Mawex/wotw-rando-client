#include <interception_macros.h>

namespace app::methods::PlayFab::Public::PlayFabLoggerBase {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IPAddress *, get_ip, (app::PlayFabLoggerBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_ip, (app::PlayFabLoggerBase * this_ptr, app::IPAddress * value));
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_port, (app::PlayFabLoggerBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004E57B0, void, set_port, (app::PlayFabLoggerBase * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String *, get_url, (app::PlayFabLoggerBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_url, (app::PlayFabLoggerBase * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x01AD12B0, void, __ctor, (app::PlayFabLoggerBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01AD1700, void, OnEnable, (app::PlayFabLoggerBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01AD1940, app::IEnumerator *, RegisterLogger, (app::PlayFabLoggerBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01AD1A90, void, OnDisable, (app::PlayFabLoggerBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0089F980, void, OnDestroy, (app::PlayFabLoggerBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01AD1CC0, void, HandleUnityLog, (app::PlayFabLoggerBase * this_ptr, app::String * message, app::String * stacktrace, app::LogType__Enum type));
    IL2CPP_REGISTER_METHODINFO(0x04780200, PlayFabLoggerBase_HandleUnityLog__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01AD2290, void, ActivateThreadWorker, (app::PlayFabLoggerBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01AD25B0, void, WriteLogThreadWorker, (app::PlayFabLoggerBase * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0475E258, PlayFabLoggerBase_WriteLogThreadWorker__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01AD2C50, void, __cctor, ());
}
