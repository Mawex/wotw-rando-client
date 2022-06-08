using namespace app;

namespace app::methods::Moon::Wwise::ListenerSyncProcessor {
IL2CPP_REGISTER_METHOD(0x02709E80, void, Initialize, (ListenerSyncProcessor * __this, AkWwiseInitializationSettings * config));
IL2CPP_REGISTER_METHOD(0x0270A140, void, ReregisterAudioListeners, (ListenerSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0270A270, void, RegisterListenerSync, (ListenerSyncProcessor * __this, SoundListener * listener, int32_t frameQuantization));
IL2CPP_REGISTER_METHOD(0x0270A450, void, Update, (ListenerSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0270A530, void, CommitDefaultSetIfNeeded, (ListenerSyncProcessor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ListenerSyncProcessor * __this));
}
