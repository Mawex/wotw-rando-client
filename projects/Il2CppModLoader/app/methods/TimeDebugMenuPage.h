#pragma once
#include <interception_macros.h>

namespace app::methods::TimeDebugMenuPage {
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ColumnOffset, (app::TimeDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String *, get_Name, (app::TimeDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ED980, void, Awake, (app::TimeDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EDA20, void, GetItems, (app::TimeDebugMenuPage * this_ptr, app::List_1_List_1_IDebugMenuItem_ * items))
    IL2CPP_REGISTER_METHOD(0x010EF220, bool, HighFPSPhysicsGetter, (app::TimeDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047436E0, TimeDebugMenuPage_HighFPSPhysicsGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010EF240, void, HighFPSPhysicsSetter, (app::TimeDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04768268, TimeDebugMenuPage_HighFPSPhysicsSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010EF2F0, bool, LowFPSPhysicsGetter, (app::TimeDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742CD0, TimeDebugMenuPage_LowFPSPhysicsGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010EF310, void, LowFPSPhysicsSetter, (app::TimeDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x047220D0, TimeDebugMenuPage_LowFPSPhysicsSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010EF460, bool, LimitPhysicsIterationGetter, (app::TimeDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EF570, void, LimitPhysicsIterationSetter, (app::TimeDebugMenuPage * this_ptr, bool obj))
    IL2CPP_REGISTER_METHOD(0x010EF5E0, void, ctor, (app::TimeDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F43700, bool, _GetItems_b__9_0, (app::TimeDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047928B8, TimeDebugMenuPage__GetItems_b__9_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010EF670, void, _GetItems_b__9_1, (app::TimeDebugMenuPage * this_ptr, bool val))
    IL2CPP_REGISTER_METHODINFO(0x047926A8, TimeDebugMenuPage__GetItems_b__9_1__MethodInfo)
}
