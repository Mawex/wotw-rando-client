using namespace app;

namespace app::methods::GhostServerEventsPlugin {
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (GhostServerEventsPlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (GhostServerEventsPlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x007E5B70, void, RecordCycle, (GhostServerEventsPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x007E5C10, void, RecordServerInstantiate, (GhostServerEventsPlugin * __this, String * assetGuid, GameObject * instance));
IL2CPP_REGISTER_METHOD(0x007E6500, void, RecordServerDestroy, (GhostServerEventsPlugin * __this, int32_t objID));
IL2CPP_REGISTER_METHOD(0x007E6720, void, RecordServerBrainTriger, (GhostServerEventsPlugin * __this, int32_t brainID, int32_t entryIndx));
IL2CPP_REGISTER_METHOD(0x007E6970, void, RecordServerTransform, (GhostServerEventsPlugin * __this));
IL2CPP_REGISTER_METHOD(0x007E6F50, void, __ctor, (GhostServerEventsPlugin * __this));
}
