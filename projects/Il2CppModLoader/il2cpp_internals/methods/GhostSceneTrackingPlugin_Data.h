#include <interception_macros.h>

namespace app::methods::GhostSceneTrackingPlugin_Data {
IL2CPP_REGISTER_METHOD(0x007E59C0, void, Save, (GhostSceneTrackingPlugin_Data * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x007E5AE0, void, Load, (GhostSceneTrackingPlugin_Data * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x007E5B60, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostSceneTrackingPlugin_Data * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (GhostSceneTrackingPlugin_Data * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Executed, (GhostSceneTrackingPlugin_Data * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_Executed, (GhostSceneTrackingPlugin_Data * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GhostSceneTrackingPlugin_Data * __this));
}
