#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Comparer_1_ExternalForceEntry_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_ExternalForceEntry_ *, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02C9A7A0, app::Comparer_1_ExternalForceEntry_ *, Create, (app::Comparison_1_ExternalForceEntry_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04764BE8, Comparer_1_ExternalForceEntry__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C9A9A0, app::Comparer_1_ExternalForceEntry_ *, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x0280EC20, int32_t, IComparer_Compare, (app::Comparer_1_ExternalForceEntry_ * this_ptr, app::Object * x, app::Object * y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_ExternalForceEntry_ * this_ptr))
}
