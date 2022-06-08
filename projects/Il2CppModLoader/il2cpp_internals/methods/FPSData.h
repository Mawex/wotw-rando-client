using namespace app;

namespace app::methods::FPSData {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, (FPSData * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (FPSData * __this, int32_t fps));
IL2CPP_REGISTER_METHOD(0x00988C30, void, Record, (BinaryWriter * binaryWriter, int32_t fps));
IL2CPP_REGISTER_METHOD(0x00988C80, void, Save, (FPSData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00988CB0, void, Load, (FPSData * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHOD(0x008556D0, RecorderFrame_FrameDataTypes__Enum, FrameType, (FPSData * __this));
}
