#include <interception_macros.h>

namespace app::methods::BuildData {
IL2CPP_REGISTER_METHOD(0x005D89A0, RecorderFrame_FrameDataTypes__Enum, FrameType, (BuildData * __this));
IL2CPP_REGISTER_METHOD(0x00814D80, void, Initialize, (BuildData * __this));
IL2CPP_REGISTER_METHOD(0x008152E0, void, Record, (BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x008158F0, void, Save, (BuildData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00815980, void, Load, (BuildData * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHOD(0x00815A10, void, __ctor, (BuildData * __this));
}
