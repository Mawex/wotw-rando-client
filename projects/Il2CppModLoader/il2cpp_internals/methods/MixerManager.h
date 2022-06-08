#include <interception_macros.h>

namespace app::methods::MixerManager {
IL2CPP_REGISTER_METHOD(0x0132C7D0, void, RegisterSnapshotZone, (MixerManager * __this, MixerSnapshotZone * mixerSnapshotZone));
IL2CPP_REGISTER_METHOD(0x0132C870, void, DeregisterSnapshotZone, (MixerManager * __this, MixerSnapshotZone * mixerSnapshotZone));
IL2CPP_REGISTER_METHOD(0x0132C910, void, Awake, (MixerManager * __this));
IL2CPP_REGISTER_METHOD(0x0132C9C0, MixerManager *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x0132CA60, void, RegisterActiveSnapshot, (MixerManager * __this, MixerSnapshot * snapshot));
IL2CPP_REGISTER_METHOD(0x0132CB30, void, FixedUpdate, (MixerManager * __this));
IL2CPP_REGISTER_METHOD(0x0132CCB0, void, UpdateMixerSettingsBasedOnActiveSnapshots, (MixerManager * __this));
IL2CPP_REGISTER_METHOD(0x0132D220, void, UpdateMixerSnapshotZones, (MixerManager * __this));
IL2CPP_REGISTER_METHOD(0x0132D770, AudioMixer *, GetMasterMixer, ());
IL2CPP_REGISTER_METHOD(0x0132D950, AudioMixerGroup *, GetMixerGroup, (MixerGroupType__Enum group));
IL2CPP_REGISTER_METHOD(0x0132E410, void, WarmUpResource, ());
IL2CPP_REGISTER_METHOD(0x0132E4A0, void, __ctor, (MixerManager * __this));
IL2CPP_REGISTER_METHOD(0x0132E740, void, __cctor, ());
}
