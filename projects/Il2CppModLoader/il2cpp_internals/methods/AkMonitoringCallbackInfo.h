#include <interception_macros.h>

namespace app::methods::AkMonitoringCallbackInfo {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkMonitoringCallbackInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x018814D0, void *, getCPtr, (AkMonitoringCallbackInfo * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkMonitoringCallbackInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x01881560, void, Finalize, (AkMonitoringCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x018815E0, void, Dispose, (AkMonitoringCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x018817F0, AkMonitorErrorCode__Enum, get_errorCode, (AkMonitoringCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01881910, AkMonitorErrorLevel__Enum, get_errorLevel, (AkMonitoringCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01881A30, uint32_t, get_playingID, (AkMonitoringCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01881B50, uint64_t, get_gameObjID, (AkMonitoringCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01881C70, String *, get_message, (AkMonitoringCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01881DC0, void, __ctor, (AkMonitoringCallbackInfo * __this));
}
