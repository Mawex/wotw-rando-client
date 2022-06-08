using namespace app;

namespace app::methods::RecorderPlaybackUIInspector {
IL2CPP_REGISTER_METHOD(0x008F7CD0, void, PlayCycle, (RecorderPlaybackUIInspector * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, (RecorderPlaybackUIInspector * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Exit, (RecorderPlaybackUIInspector * __this));
IL2CPP_REGISTER_METHOD(0x008F7CE0, void, DrawFrameData, (RecorderPlaybackUIInspector * __this));
IL2CPP_REGISTER_METHOD(0x008F83A0, FieldInfo_1 *, GetFieldInfo, (RecorderPlaybackUIInspector * __this, AbilitiesData * abilitiesData));
IL2CPP_REGISTER_METHOD(0x008F87E0, void, DrawValueDiffField, (RecorderPlaybackUIInspector * __this, String * label, float value, float recordedValue));
IL2CPP_REGISTER_METHOD(0x008F8B40, void, DrawValueField, (RecorderPlaybackUIInspector * __this, String * label, float value, float recordedValue));
IL2CPP_REGISTER_METHOD(0x008F8CC0, void, DrawValueField, (RecorderPlaybackUIInspector * __this, String * label, Vector2 value, Vector2 recordedValue));
IL2CPP_REGISTER_METHOD(0x008F8E50, void, DrawValueField, (RecorderPlaybackUIInspector * __this, String * label, Vector3 value, Vector3 recordedValue));
IL2CPP_REGISTER_METHOD(0x008F9040, void, Awake, (RecorderPlaybackUIInspector * __this));
IL2CPP_REGISTER_METHOD(0x008F9100, void, OnGUI, (RecorderPlaybackUIInspector * __this));
IL2CPP_REGISTER_METHOD(0x008F9140, void, __ctor, (RecorderPlaybackUIInspector * __this));
}
