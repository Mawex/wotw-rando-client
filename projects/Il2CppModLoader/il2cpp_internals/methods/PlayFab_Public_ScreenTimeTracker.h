using namespace app;

namespace app::methods::PlayFab::Public::ScreenTimeTracker {
IL2CPP_REGISTER_METHOD(0x01AD30C0, void, ClientSessionStart, (ScreenTimeTracker * __this, String * entityId, String * entityType, String * playFabUserId));
IL2CPP_REGISTER_METHOD(0x01AD35E0, void, OnApplicationFocus, (ScreenTimeTracker * __this, bool isFocused));
IL2CPP_REGISTER_METHOD(0x01AD3B10, void, Send, (ScreenTimeTracker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EventSentSuccessfulCallback, (ScreenTimeTracker * __this, WriteEventsResponse * response));
IL2CPP_REGISTER_METHODINFO(0x04730B90, ScreenTimeTracker_EventSentSuccessfulCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, EventSentErrorCallback, (ScreenTimeTracker * __this, PlayFabError * response));
IL2CPP_REGISTER_METHODINFO(0x047737F0, ScreenTimeTracker_EventSentErrorCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (ScreenTimeTracker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, (ScreenTimeTracker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (ScreenTimeTracker * __this));
IL2CPP_REGISTER_METHOD(0x01AD4130, void, OnApplicationQuit, (ScreenTimeTracker * __this));
IL2CPP_REGISTER_METHOD(0x01AD4140, void, __ctor, (ScreenTimeTracker * __this));
}
