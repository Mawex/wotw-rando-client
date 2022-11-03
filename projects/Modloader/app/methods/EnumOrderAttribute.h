#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::EnumOrderAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::EnumOrderAttribute * this_ptr, int32_t order))
    IL2CPP_REGISTER_METHOD(0x01584FB0, app::Object__Array*, GetOrderedEnums_1, ())
    IL2CPP_REGISTER_METHOD(0x01584950, app::EquipmentType__Enum__Array*, GetOrderedEnums_2, ())
    IL2CPP_REGISTER_METHODINFO(0x0470E158, EnumOrderAttribute_GetOrderedEnums_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015842F0, app::SpiritShardType__Enum__Array*, GetOrderedEnums_3, ())
    IL2CPP_REGISTER_METHODINFO(0x04750E28, EnumOrderAttribute_GetOrderedEnums_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015842F0, app::ByteEnum__Enum__Array*, GetOrderedEnums_4, ())
    IL2CPP_REGISTER_METHOD(0x01584950, app::Int32Enum__Enum__Array*, GetOrderedEnums_5, ())
} // namespace app::classes::EnumOrderAttribute
