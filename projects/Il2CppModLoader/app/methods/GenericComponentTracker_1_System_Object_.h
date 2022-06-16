#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GenericComponentTracker_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::List_1_System_Object_ *, get_All, (app::GenericComponentTracker_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_All, (app::GenericComponentTracker_1_System_Object_ * this_ptr, app::List_1_System_Object_ * value))
    IL2CPP_REGISTER_METHOD(0x019F81F0, void, Register, (app::GenericComponentTracker_1_System_Object_ * this_ptr, app::Object * component))
    IL2CPP_REGISTER_METHOD(0x019F8410, void, Unregister, (app::GenericComponentTracker_1_System_Object_ * this_ptr, app::Object * component))
    IL2CPP_REGISTER_METHOD(0x019F84C0, void, ctor, (app::GenericComponentTracker_1_System_Object_ * this_ptr))
}
