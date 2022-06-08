#include <interception_macros.h>

namespace app::methods::GlobalRecordingTable {
IL2CPP_REGISTER_METHOD(0x007F7BE0, void, AddEntry, (GlobalRecordingTable * __this, GlobalRecordingTable_RecordableEntry * entry));
IL2CPP_REGISTER_METHOD(0x007F7DA0, GlobalRecordingTable_RecordableEntry *, RegisterInstantiatedRuntime, (GlobalRecordingTable * __this, IRecordable * instance, GameObject * prefab, bool registerAllChildren));
IL2CPP_REGISTER_METHOD(0x007F8010, GlobalRecordingTable_RecordableEntry *, RegisterInstantiatedEditTime, (GlobalRecordingTable * __this, RecordableIdData idData, IRecordable * instance, GameObject * prefab, bool registerAllChildren));
IL2CPP_REGISTER_METHOD(0x007F81F0, void, RegisterAllChildrenOfInstantiated, (GlobalRecordingTable * __this, IRecordable * instance, GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x007F83E0, GlobalRecordingTable_RecordableEntry *, RegisterChildOfInstantiated, (GlobalRecordingTable * __this, Component_1 * component, IRecordable * instanceRoot, GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x007F86F0, GlobalRecordingTable_RecordableEntry *, RegisterChildOfInstantiated, (GlobalRecordingTable * __this, IRecordable * recordable, IRecordable * instanceRoot, GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x007F8A20, GlobalRecordingTable_RecordableEntry *, RegisterSceneRecordable, (GlobalRecordingTable * __this, IRecordable * recordable));
IL2CPP_REGISTER_METHOD(0x007F8C50, GlobalRecordingTable_RecordableEntry *, RegisterPuppetRecordable, (GlobalRecordingTable * __this, IRecordable * recordable, GenericPuppet * puppet));
IL2CPP_REGISTER_METHOD(0x007F8E60, GlobalRecordingTable_RecordableEntry *, GetRecordingEntry, (GlobalRecordingTable * __this, int64_t recordingId));
IL2CPP_REGISTER_METHOD(0x007F8F40, GlobalRecordingTable_RecordableEntry *, GetRecordingEntryRuntime, (GlobalRecordingTable * __this, Component_1 * target));
IL2CPP_REGISTER_METHOD(0x007F9060, GlobalRecordingTable_RecordableEntry *, GetRecordingEntryForRecordableRuntime, (GlobalRecordingTable * __this, IRecordable * target));
IL2CPP_REGISTER_METHOD(0x007F9150, Dictionary_2_System_Int64_EntityPlaceholder_ *, get_Placeholders, (GlobalRecordingTable * __this));
IL2CPP_REGISTER_METHOD(0x007F9370, void, RebuildRecordingTableForEditor, (GlobalRecordingTable * __this, List_1_List_1_GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_ * worldDataPerFrame, Transform * setupRoot));
IL2CPP_REGISTER_METHOD(0x007F94D0, void, ProcessFrame, (GlobalRecordingTable * __this, GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * data, int32_t frame, Transform * setupRoot));
IL2CPP_REGISTER_METHOD(0x007F98D0, void, AppendSceneRecordablesForEditor, (GlobalRecordingTable * __this, Transform * sceneRoot, Transform * setupRoot));
IL2CPP_REGISTER_METHOD(0x007F9B40, GameObject *, CreatePlaybackInstance, (GlobalRecordingTable * __this, GameObject * prefab, Vector3 position, Quaternion rotation, Transform * parent));
IL2CPP_REGISTER_METHOD(0x007F9D70, IRecordable *, GetMainRecordableOnObject, (GameObject * go));
IL2CPP_REGISTER_METHOD(0x007F9E80, void, __ctor, (GlobalRecordingTable * __this));
}
