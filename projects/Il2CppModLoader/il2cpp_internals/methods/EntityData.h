using namespace app;

namespace app::methods::EntityData {
IL2CPP_REGISTER_METHOD(0x00C8F220, RecorderFrame_FrameDataTypes__Enum, FrameType, (EntityData * __this));
IL2CPP_REGISTER_METHOD(0x00C8F230, void, Initialize, (EntityData * __this));
IL2CPP_REGISTER_METHOD(0x00C8F750, void, Record, (BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00C8FCD0, void, Save, (EntityData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00C90230, void, Load, (EntityData * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHOD(0x00C90550, void, __ctor, (EntityData * __this));
}
