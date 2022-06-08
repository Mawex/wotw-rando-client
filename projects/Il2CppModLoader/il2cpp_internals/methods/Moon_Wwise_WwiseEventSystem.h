using namespace app;

namespace app::methods::Moon::Wwise::WwiseEventSystem {
IL2CPP_REGISTER_METHOD(0x027123C0, void, Initialize, (WwiseEventSystem * __this, AkWwiseInitializationSettings * config));
IL2CPP_REGISTER_METHOD(0x02712800, uint32_t, FireAndForget, (WwiseEventSystem * __this, Event_1 * wiseEvent, ISoundHost * host));
IL2CPP_REGISTER_METHOD(0x02712EF0, void, FireAndForget, (WwiseEventSystem * __this, uint32_t wiseEventId, ISoundHost * host));
IL2CPP_REGISTER_METHOD(0x02712FF0, WwiseEventSystem_SoundHandle, AllocateHandle, (WwiseEventSystem * __this, Event_1 * wiseEvent, ISoundHost * host));
IL2CPP_REGISTER_METHOD(0x027130D0, WwiseEventSystem_SoundHandleProtected *, GetFreeSoundHandle, (WwiseEventSystem * __this));
IL2CPP_REGISTER_METHOD(0x02713270, void, StopAll, (WwiseEventSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (WwiseEventSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (WwiseEventSystem * __this));
IL2CPP_REGISTER_METHOD(0x02713300, void, __ctor, (WwiseEventSystem * __this));
}
