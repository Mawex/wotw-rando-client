using namespace app;

namespace app::methods::GhostTimeTrackingPlugin_Data {
IL2CPP_REGISTER_METHOD(0x007EA1D0, void, Save, (GhostTimeTrackingPlugin_Data * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x007EA230, void, Load, (GhostTimeTrackingPlugin_Data * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x007EA270, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostTimeTrackingPlugin_Data * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (GhostTimeTrackingPlugin_Data * __this));
IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_Executed, (GhostTimeTrackingPlugin_Data * __this));
IL2CPP_REGISTER_METHOD(0x007EA280, void, set_Executed, (GhostTimeTrackingPlugin_Data * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GhostTimeTrackingPlugin_Data * __this));
}
