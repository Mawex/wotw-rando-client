#include <interception_macros.h>

namespace app::methods::LogCallbackData {
IL2CPP_REGISTER_METHOD(0x00910BD0, RecorderFrame_FrameDataTypes__Enum, FrameType, (LogCallbackData * __this));
IL2CPP_REGISTER_METHOD(0x009EC720, void, Save, (LogCallbackData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x009EC790, void, Load, (LogCallbackData * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LogCallbackData * __this));
}
