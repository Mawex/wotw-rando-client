using namespace app;

namespace app::methods::GhostServerEventsPlugin_ServerEventData {
IL2CPP_REGISTER_METHOD(0x007E7250, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostServerEventsPlugin_ServerEventData * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (GhostServerEventsPlugin_ServerEventData * __this));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Executed, (GhostServerEventsPlugin_ServerEventData * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_Executed, (GhostServerEventsPlugin_ServerEventData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x007E7260, void, Load, (GhostServerEventsPlugin_ServerEventData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x007E75F0, void, Save, (GhostServerEventsPlugin_ServerEventData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x007E78D0, void, __ctor, (GhostServerEventsPlugin_ServerEventData * __this));
}
