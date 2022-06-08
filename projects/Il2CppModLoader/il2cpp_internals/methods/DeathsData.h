using namespace app;

namespace app::methods::DeathsData {
IL2CPP_REGISTER_METHOD(0x00AB4D20, RecorderFrame_FrameDataTypes__Enum, FrameType, (DeathsData * __this));
IL2CPP_REGISTER_METHOD(0x00DE0C90, void, Initialize, (DeathsData * __this));
IL2CPP_REGISTER_METHOD(0x00DE0D60, void, Record, (BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00DE0EA0, void, Save, (DeathsData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00DE0F10, void, Load, (DeathsData * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DeathsData * __this));
}
