#include <interception_macros.h>

namespace app::methods::AbilitiesData {
IL2CPP_REGISTER_METHOD(0x004AB2B0, RecorderFrame_FrameDataTypes__Enum, FrameType, (AbilitiesData * __this));
IL2CPP_REGISTER_METHOD(0x004AB2C0, void, Save, (AbilitiesData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x004AB520, void, Load, (AbilitiesData * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHOD(0x004AB680, void, Record, (BinaryWriter * binaryWriter, Object * obj, FieldInfo_1 * fieldInfo));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AbilitiesData * __this));
}
