using namespace app;

namespace app::methods::CameraData {
IL2CPP_REGISTER_METHOD(0x0043D9E0, RecorderFrame_FrameDataTypes__Enum, FrameType, (CameraData * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, (CameraData * __this));
IL2CPP_REGISTER_METHOD(0x01688560, void, Save, (CameraData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x01688790, void, Record, (BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x01688AB0, void, Load, (CameraData * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CameraData * __this));
}
