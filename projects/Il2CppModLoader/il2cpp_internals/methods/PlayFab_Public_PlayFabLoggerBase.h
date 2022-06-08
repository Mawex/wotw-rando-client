#include <interception_macros.h>

namespace app::methods::PlayFab::Public::PlayFabLoggerBase {
IL2CPP_REGISTER_METHOD(0x002FB9B0, IPAddress *, get_ip, (PlayFabLoggerBase * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_ip, (PlayFabLoggerBase * __this, IPAddress * value));
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_port, (PlayFabLoggerBase * __this));
IL2CPP_REGISTER_METHOD(0x004E57B0, void, set_port, (PlayFabLoggerBase * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_url, (PlayFabLoggerBase * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_url, (PlayFabLoggerBase * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01AD12B0, void, __ctor, (PlayFabLoggerBase * __this));
IL2CPP_REGISTER_METHOD(0x01AD1700, void, OnEnable, (PlayFabLoggerBase * __this));
IL2CPP_REGISTER_METHOD(0x01AD1940, IEnumerator *, RegisterLogger, (PlayFabLoggerBase * __this));
IL2CPP_REGISTER_METHOD(0x01AD1A90, void, OnDisable, (PlayFabLoggerBase * __this));
IL2CPP_REGISTER_METHOD(0x0089F980, void, OnDestroy, (PlayFabLoggerBase * __this));
IL2CPP_REGISTER_METHOD(0x01AD1CC0, void, HandleUnityLog, (PlayFabLoggerBase * __this, String * message, String * stacktrace, LogType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x04780200, PlayFabLoggerBase_HandleUnityLog__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AD2290, void, ActivateThreadWorker, (PlayFabLoggerBase * __this));
IL2CPP_REGISTER_METHOD(0x01AD25B0, void, WriteLogThreadWorker, (PlayFabLoggerBase * __this));
IL2CPP_REGISTER_METHODINFO(0x0475E258, PlayFabLoggerBase_WriteLogThreadWorker__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AD2C50, void, __cctor, ());
}
