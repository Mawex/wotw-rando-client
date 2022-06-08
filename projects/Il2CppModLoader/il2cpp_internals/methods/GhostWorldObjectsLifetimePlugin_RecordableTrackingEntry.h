using namespace app;

namespace app::methods::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry {
IL2CPP_REGISTER_METHOD(0x007F08A0, IRecordable *, get_Recordable, (GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * __this));
IL2CPP_REGISTER_METHOD(0x007F0930, Vector3, get_CurrentPosition, (GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * __this));
IL2CPP_REGISTER_METHOD(0x007F0AE0, Quaternion, get_CurrentRotation, (GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * __this));
IL2CPP_REGISTER_METHOD(0x007F0C90, Vector3, get_CurrentScale, (GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * __this));
IL2CPP_REGISTER_METHOD(0x007F0D80, bool, get_CurrentActivation, (GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * __this));
IL2CPP_REGISTER_METHOD(0x007F0DE0, void, __ctor, (GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * __this, GlobalRecordingTable_RecordableEntry * target, bool trackTransformChanges, bool isChildTransform));
IL2CPP_REGISTER_METHOD(0x007F1010, void, Refresh, (GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * __this));
IL2CPP_REGISTER_METHOD(0x007F14E0, void, FilterExclusions, (GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * __this));
}
