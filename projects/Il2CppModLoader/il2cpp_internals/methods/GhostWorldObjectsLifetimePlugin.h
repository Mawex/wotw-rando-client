#include <interception_macros.h>

namespace app::methods::GhostWorldObjectsLifetimePlugin {
IL2CPP_REGISTER_METHOD(0x002FBB60, GlobalRecordingTable *, get_GlobalRecordingTable, (GhostWorldObjectsLifetimePlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_GlobalRecordingTable, (GhostWorldObjectsLifetimePlugin * __this, GlobalRecordingTable * value));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (GhostWorldObjectsLifetimePlugin * __this));
IL2CPP_REGISTER_METHOD(0x007EC6D0, void, OnStartRecording, (GhostWorldObjectsLifetimePlugin * __this, PreRecordingData * preRecordingData));
IL2CPP_REGISTER_METHOD(0x007EC920, void, OnStopRecording, (GhostWorldObjectsLifetimePlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (GhostWorldObjectsLifetimePlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x007ECC60, void, RecordCycle, (GhostWorldObjectsLifetimePlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x007ECE50, void, RefreshObjects, (GhostWorldObjectsLifetimePlugin * __this));
IL2CPP_REGISTER_METHOD(0x007ECFD0, void, RegisterInstantiate, (GhostWorldObjectsLifetimePlugin * __this, GameObject * instance, GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x007ED130, void, RecordInstantiate, (GhostWorldObjectsLifetimePlugin * __this, GameObject * instance, GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x007EDA80, void, RegisterSceneRecordable, (GhostWorldObjectsLifetimePlugin * __this, IRecordable * recordable));
IL2CPP_REGISTER_METHOD(0x007EDFA0, void, RecordDestruction, (GhostWorldObjectsLifetimePlugin * __this));
IL2CPP_REGISTER_METHOD(0x007EE510, void, RecordDestroy, (GhostWorldObjectsLifetimePlugin * __this, RecordableIdData objID));
IL2CPP_REGISTER_METHOD(0x007EE6C0, void, RecordPosition, (GhostWorldObjectsLifetimePlugin * __this));
IL2CPP_REGISTER_METHOD(0x007EE9C0, void, RecordFinalPosition, (GhostWorldObjectsLifetimePlugin * __this, Int64__Array * keys));
IL2CPP_REGISTER_METHOD(0x007EEC90, void, RecordPositionInternal, (GhostWorldObjectsLifetimePlugin * __this, GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * data, GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * recordableEntry));
IL2CPP_REGISTER_METHOD(0x007EEDE0, void, RecordRotation, (GhostWorldObjectsLifetimePlugin * __this));
IL2CPP_REGISTER_METHOD(0x007EF0E0, void, RecordFinalRotation, (GhostWorldObjectsLifetimePlugin * __this, Int64__Array * keys));
IL2CPP_REGISTER_METHOD(0x007EF3B0, void, RecordRotationInternal, (GhostWorldObjectsLifetimePlugin * __this, GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * data, GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * recordableEntry));
IL2CPP_REGISTER_METHOD(0x007EF4F0, void, RecordScale, (GhostWorldObjectsLifetimePlugin * __this));
IL2CPP_REGISTER_METHOD(0x007EF7F0, void, RecordFinalScale, (GhostWorldObjectsLifetimePlugin * __this, Int64__Array * keys));
IL2CPP_REGISTER_METHOD(0x007EFAC0, void, RecordScaleInternal, (GhostWorldObjectsLifetimePlugin * __this, GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * data, GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * recordableEntry));
IL2CPP_REGISTER_METHOD(0x007EFC10, void, RecordActivation, (GhostWorldObjectsLifetimePlugin * __this));
IL2CPP_REGISTER_METHOD(0x007F01E0, void, RecordFinalActivation, (GhostWorldObjectsLifetimePlugin * __this, Int64__Array * keys));
IL2CPP_REGISTER_METHOD(0x007F04B0, void, RecordActivationInternal, (GhostWorldObjectsLifetimePlugin * __this, GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * data, GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * recordableEntry));
IL2CPP_REGISTER_METHOD(0x007F0630, void, __ctor, (GhostWorldObjectsLifetimePlugin * __this));
}
