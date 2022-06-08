#include <interception_macros.h>

namespace app::methods::GhostCameraPlugin_CameraData {
IL2CPP_REGISTER_METHOD(0x00E159F0, void, Save, (GhostCameraPlugin_CameraData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00E15B10, void, Load, (GhostCameraPlugin_CameraData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x00E15C60, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostCameraPlugin_CameraData * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (GhostCameraPlugin_CameraData * __this));
IL2CPP_REGISTER_METHOD(0x00446970, bool, get_Executed, (GhostCameraPlugin_CameraData * __this));
IL2CPP_REGISTER_METHOD(0x00446980, void, set_Executed, (GhostCameraPlugin_CameraData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GhostCameraPlugin_CameraData * __this));
}
