using namespace app;

namespace app::methods::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AnalyticsSessionInfo_SessionStateChanged * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x031C1900, void, Invoke, (AnalyticsSessionInfo_SessionStateChanged * __this, AnalyticsSessionState__Enum sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged));
IL2CPP_REGISTER_METHOD(0x031C1D10, IAsyncResult *, BeginInvoke, (AnalyticsSessionInfo_SessionStateChanged * __this, AnalyticsSessionState__Enum sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (AnalyticsSessionInfo_SessionStateChanged * __this, IAsyncResult * result));
}
