using namespace app;

namespace app::methods::RecorderMessageData {
IL2CPP_REGISTER_METHOD(0x008E77B0, RecorderFrame_FrameDataTypes__Enum, FrameType, (RecorderMessageData * __this));
IL2CPP_REGISTER_METHOD(0x008F25E0, void, Record, (BinaryWriter * binaryWriter, String * text));
IL2CPP_REGISTER_METHOD(0x008F2640, void, Save, (RecorderMessageData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x008F2670, void, Load, (RecorderMessageData * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHOD(0x008F26B0, void, __ctor, (RecorderMessageData * __this));
}
