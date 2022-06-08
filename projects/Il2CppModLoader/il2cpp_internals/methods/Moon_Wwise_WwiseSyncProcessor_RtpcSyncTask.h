using namespace app;

namespace app::methods::Moon::Wwise::WwiseSyncProcessor_RtpcSyncTask {
IL2CPP_REGISTER_METHOD(0x002FB930, Func_1_Single_ *, get_Getter, (WwiseSyncProcessor_RtpcSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Getter, (WwiseSyncProcessor_RtpcSyncTask * __this, Func_1_Single_ * value));
IL2CPP_REGISTER_METHOD(0x01746A40, SoundHostReference, get_Host, (WwiseSyncProcessor_RtpcSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x02071D00, void, set_Host, (WwiseSyncProcessor_RtpcSyncTask * __this, SoundHostReference value));
IL2CPP_REGISTER_METHOD(0x002FB990, RTPC *, get_Target, (WwiseSyncProcessor_RtpcSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Target, (WwiseSyncProcessor_RtpcSyncTask * __this, RTPC * value));
IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_CachedValue, (WwiseSyncProcessor_RtpcSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_CachedValue, (WwiseSyncProcessor_RtpcSyncTask * __this, float value));
IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_FrameQuantinization, (WwiseSyncProcessor_RtpcSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x004C5130, void, set_FrameQuantinization, (WwiseSyncProcessor_RtpcSyncTask * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (WwiseSyncProcessor_RtpcSyncTask * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x0051C040, bool, get_IsGlobal, (WwiseSyncProcessor_RtpcSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x027196D0, bool, get_IsValid, (WwiseSyncProcessor_RtpcSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x027197A0, bool, get_ShouldBeUpdatedThisFrame, (WwiseSyncProcessor_RtpcSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x02719820, void, Reset, (WwiseSyncProcessor_RtpcSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x02719860, void, Bind, (WwiseSyncProcessor_RtpcSyncTask * __this, RTPC * target, Func_1_Single_ * getter, SoundHostReference host, int32_t frameQuantinization));
}
