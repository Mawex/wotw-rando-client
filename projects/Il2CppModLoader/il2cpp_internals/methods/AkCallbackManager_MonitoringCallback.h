using namespace app;

namespace app::methods::AkCallbackManager_MonitoringCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AkCallbackManager_MonitoringCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x026D4CF0, void, Invoke, (AkCallbackManager_MonitoringCallback * __this, AkMonitorErrorCode__Enum in_errorCode, AkMonitorErrorLevel__Enum in_errorLevel, uint32_t in_playingID, uint64_t in_gameObjID, String * in_msg));
IL2CPP_REGISTER_METHOD(0x026D5190, IAsyncResult *, BeginInvoke, (AkCallbackManager_MonitoringCallback * __this, AkMonitorErrorCode__Enum in_errorCode, AkMonitorErrorLevel__Enum in_errorLevel, uint32_t in_playingID, uint64_t in_gameObjID, String * in_msg, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (AkCallbackManager_MonitoringCallback * __this, IAsyncResult * result));
}
