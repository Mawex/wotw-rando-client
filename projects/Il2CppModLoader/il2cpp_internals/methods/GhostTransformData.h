#include <interception_macros.h>

namespace app::methods::GhostTransformData {
IL2CPP_REGISTER_METHOD(0x007EC230, Vector3, get_Position, (GhostTransformData * __this));
IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_FaceLeft, (GhostTransformData * __this));
IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_FeetAngle, (GhostTransformData * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GhostTransformData * __this));
IL2CPP_REGISTER_METHOD(0x007EC250, void, __ctor, (GhostTransformData * __this, Vector3 position, bool faceLeft, float feetAngle));
IL2CPP_REGISTER_METHOD(0x007EC270, void, Save, (GhostTransformData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x007EC320, void, Load, (GhostTransformData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x003FFDF0, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostTransformData * __this));
IL2CPP_REGISTER_METHOD(0x007EC3F0, int32_t, GetDataSize, (GhostTransformData * __this));
IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_Executed, (GhostTransformData * __this));
IL2CPP_REGISTER_METHOD(0x007EC410, void, set_Executed, (GhostTransformData * __this, bool value));
}
