#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Predicate_1_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_UnityEngine_Vector2_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0288C630, bool, Invoke, (app::Predicate_1_UnityEngine_Vector2_ * this_ptr, app::Vector2 obj))
    IL2CPP_REGISTER_METHOD(0x02A56C80, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_UnityEngine_Vector2_ * this_ptr, app::Vector2 obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_UnityEngine_Vector2_ * this_ptr, app::IAsyncResult * result))
}
