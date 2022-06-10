#pragma once
#include <interception_macros.h>

namespace app::methods::ControllerSchemeOptions {
    IL2CPP_REGISTER_METHOD(0x011F1170, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x011F11F0, void, Awake, (app::ControllerSchemeOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F1290, void, OnDestroy, (app::ControllerSchemeOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F1370, void, SetControlScheme, (app::ControllerSchemeOptions * this_ptr, app::ControlScheme__Enum scheme))
    IL2CPP_REGISTER_METHOD(0x011F1470, void, Init, (app::ControllerSchemeOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008578B0, void, ctor, (app::ControllerSchemeOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F1840, void, _Init_b__5_0, (app::ControllerSchemeOptions * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475D9C0, ControllerSchemeOptions__Init_b__5_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011F1850, void, _Init_b__5_1, (app::ControllerSchemeOptions * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047658D8, ControllerSchemeOptions__Init_b__5_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011F1860, void, _Init_b__5_2, (app::ControllerSchemeOptions * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04734E30, ControllerSchemeOptions__Init_b__5_2__MethodInfo)
}
