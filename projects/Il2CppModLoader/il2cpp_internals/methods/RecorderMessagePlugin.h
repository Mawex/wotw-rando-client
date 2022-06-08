using namespace app;

namespace app::methods::RecorderMessagePlugin {
IL2CPP_REGISTER_METHOD(0x008F3470, void, Awake, (RecorderMessagePlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (RecorderMessagePlugin * __this));
IL2CPP_REGISTER_METHOD(0x008F3650, void, ToggleShowMessages, (RecorderMessagePlugin * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_ShowMessages, (RecorderMessagePlugin * __this));
IL2CPP_REGISTER_METHOD(0x008F3770, void, set_ShowMessages, (RecorderMessagePlugin * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (RecorderMessagePlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x008F3890, void, RecordCycle, (RecorderMessagePlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x008F3AD0, void, Exit, (RecorderMessagePlugin * __this));
IL2CPP_REGISTER_METHOD(0x008F3B70, void, OnExit, (RecorderMessagePlugin * __this));
IL2CPP_REGISTER_METHODINFO(0x04757570, RecorderMessagePlugin_OnExit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008F44B0, Dictionary_2_RecorderMessageData_System_Int32_ *, ExtractRecorderMessagesData, (RecorderData * recorderData));
IL2CPP_REGISTER_METHOD(0x008F4850, void, __ctor, (RecorderMessagePlugin * __this));
}
