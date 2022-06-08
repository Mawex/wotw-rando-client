#include <interception_macros.h>

namespace app::methods::EnumTools {
IL2CPP_REGISTER_METHOD(0x02552CE0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x018F2740, bool, HasFlagUnsafe, (ConstraintFlag__Enum lhs, ConstraintFlag__Enum rhs));
IL2CPP_REGISTER_METHODINFO(0x04758910, EnumTools_HasFlagUnsafe__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02654A70, int32_t, AsInt, (DesertEscapeWorm_States__Enum lhs));
IL2CPP_REGISTER_METHODINFO(0x047043C8, EnumTools_AsInt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02654A70, int32_t, AsInt, (FixedDurationSceneEntity_Markers__Enum lhs));
IL2CPP_REGISTER_METHODINFO(0x0474D9D0, EnumTools_AsInt_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018F2740, bool, HasFlagUnsafe, (Int32Enum__Enum lhs, Int32Enum__Enum rhs));
IL2CPP_REGISTER_METHODINFO(0x04749FB0, EnumTools_HasFlagUnsafe_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0156B3E0, uint8_t, AsByte, (Int32Enum__Enum t));
IL2CPP_REGISTER_METHOD(0x02654A70, int32_t, AsInt, (Int32Enum__Enum lhs));
IL2CPP_REGISTER_METHOD(0x01547930, int32_t, AsIntInternal, (Int32Enum__Enum t));
IL2CPP_REGISTER_METHOD(0x01547930, uint32_t, AsUInt, (Int32Enum__Enum t));
IL2CPP_REGISTER_METHOD(0x01547960, uint64_t, AsULong, (Int32Enum__Enum t));
}
