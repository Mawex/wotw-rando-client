using namespace app;

namespace app::methods::Moon::Wwise::ListenerSyncProcessor_ListenerSyncTask {
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_FrameQuantinization, (ListenerSyncProcessor_ListenerSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_FrameQuantinization, (ListenerSyncProcessor_ListenerSyncTask * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00C3DD30, SoundListenerReference, get_Listener, (ListenerSyncProcessor_ListenerSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD40, void, set_Listener, (ListenerSyncProcessor_ListenerSyncTask * __this, SoundListenerReference value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_IsInitialized, (ListenerSyncProcessor_ListenerSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_IsInitialized, (ListenerSyncProcessor_ListenerSyncTask * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (ListenerSyncProcessor_ListenerSyncTask * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x0270A800, bool, get_IsValid, (ListenerSyncProcessor_ListenerSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x0270A820, bool, get_ShouldBeUpdatedThisFrame, (ListenerSyncProcessor_ListenerSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x0270A8A0, void, Reset, (ListenerSyncProcessor_ListenerSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x0270A8D0, void, Bind, (ListenerSyncProcessor_ListenerSyncTask * __this, SoundListenerReference listener, int32_t frameQuantinization));
}
