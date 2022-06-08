using namespace app;

namespace app::methods::TitleScreenManager {
IL2CPP_REGISTER_METHOD(0x00AF74D0, bool, get_MainMenuActive, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00AF7640, void, Awake, (TitleScreenManager * __this));
IL2CPP_REGISTER_METHOD(0x00AF78F0, void, Start, (TitleScreenManager * __this));
IL2CPP_REGISTER_METHOD(0x00AF7A20, void, Startup, (TitleScreenManager * __this));
IL2CPP_REGISTER_METHOD(0x00AF82E0, void, RestartAllAnimators, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00AF8450, void, RestartProfileSelectionAnimators, (TitleScreenManager * __this));
IL2CPP_REGISTER_METHOD(0x00AF8580, void, OnReturnToTitleScreen, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00AF86A0, void, OnDestroy, (TitleScreenManager * __this));
IL2CPP_REGISTER_METHOD(0x00AF88F0, TitleScreenManager_Screen__Enum, get_CurrentScreen, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00AF8A10, void, SetScreen, (TitleScreenManager_Screen__Enum screen));
IL2CPP_REGISTER_METHOD(0x00AF91C0, void, SetScreenImmediate, (TitleScreenManager_Screen__Enum screen));
IL2CPP_REGISTER_METHOD(0x00AF9B50, void, SetVisible, (CleverMenuItemSelectionManager * manager, bool visible));
IL2CPP_REGISTER_METHOD(0x00AF9BA0, void, SetVisibleImmediate, (CleverMenuItemSelectionManager * manager, bool visible));
IL2CPP_REGISTER_METHOD(0x00AF9BF0, void, StartExternalTimelines, (TitleScreenManager * __this));
IL2CPP_REGISTER_METHOD(0x00AF9DF0, void, OnDisable, (TitleScreenManager * __this));
IL2CPP_REGISTER_METHOD(0x00AF9E20, void, OnUserChanged, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04707D90, TitleScreenManager_OnUserChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AF9FD0, void, CheckForFirstTimeQualitySettings, (TitleScreenManager * __this, bool immediate));
IL2CPP_REGISTER_METHOD(0x00AFA0A0, IEnumerator *, WaitToShowFirstTimeQualitySettings, (TitleScreenManager * __this, bool immediate));
IL2CPP_REGISTER_METHOD(0x00AFA200, ITimelineEntity *, get_PrologueMaster, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00AFA330, void, __ctor, (TitleScreenManager * __this));
IL2CPP_REGISTER_METHOD(0x00AFA490, void, __cctor, (MethodInfo * method));
}
