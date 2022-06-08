using namespace app;

namespace app::methods::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData {
IL2CPP_REGISTER_METHOD(0x007F1530, GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData *, GetObjectData, (GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * __this, RecordableIdData idData));
IL2CPP_REGISTER_METHOD(0x007F1600, void, AddObjectData, (GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * __this, RecordableIdData idData));
IL2CPP_REGISTER_METHOD(0x007F17E0, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Executed, (GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Executed, (GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x007F17F0, void, Save, (GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x007F2210, void, Load, (GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x007F2B40, void, __ctor, (GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * __this));
}
