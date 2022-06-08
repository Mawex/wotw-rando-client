using namespace app;

namespace app::methods::TransformRecorderData {
IL2CPP_REGISTER_METHOD(0x0043D9A0, RecorderFrame_FrameDataTypes__Enum, FrameType, (TransformRecorderData * __this));
IL2CPP_REGISTER_METHOD(0x00B08E90, void, Initialize, (TransformRecorderData * __this));
IL2CPP_REGISTER_METHOD(0x00B09270, void, Save, (TransformRecorderData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00B09540, void, Load, (TransformRecorderData * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHOD(0x00B098C0, void, __ctor, (TransformRecorderData * __this));
}
