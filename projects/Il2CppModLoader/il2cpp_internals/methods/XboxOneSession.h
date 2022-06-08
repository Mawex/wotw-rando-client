using namespace app;

namespace app::methods::XboxOneSession {
IL2CPP_REGISTER_METHOD(0x01C5AF60, Action *, get_OnSessionStarted, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5B000, void, set_OnSessionStarted, (Action * value));
IL2CPP_REGISTER_METHOD(0x01C5B0B0, Action *, get_OnSessionEnded, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5B150, void, set_OnSessionEnded, (Action * value));
IL2CPP_REGISTER_METHOD(0x01C5B200, Action *, get_OnWindowDeactivated, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5B2A0, void, set_OnWindowDeactivated, (Action * value));
IL2CPP_REGISTER_METHOD(0x01C5B350, Action *, get_OnWindowActivated, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5B3F0, void, set_OnWindowActivated, (Action * value));
IL2CPP_REGISTER_METHOD(0x01C5B4A0, Action *, get_OnSuspend, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5B540, void, set_OnSuspend, (Action * value));
IL2CPP_REGISTER_METHOD(0x01C5B5F0, Action *, get_OnResume, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5B690, void, set_OnResume, (Action * value));
IL2CPP_REGISTER_METHOD(0x01C5B740, bool, get_IsHighResources, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SuspendDataAvailable, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5B7E0, Guid, get_SessionID, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SessionActive, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ClearSuspendData, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5B890, bool, RequireSession, (Action * success, Action * failure));
IL2CPP_REGISTER_METHOD(0x01C5B920, bool, RestartSession, (Action * success, Action * failure));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ClearGUID, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, EndSession, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ResumeSession, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C5B9B0, bool, PauseSession, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XboxOneSession * __this));
IL2CPP_REGISTER_METHOD(0x01C5BA40, void, __cctor, (MethodInfo * method));
}
