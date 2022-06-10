#pragma once
#include <interception_macros.h>

namespace app::methods::UnityEngine::NativeClassAttribute {
    IL2CPP_REGISTER_METHOD(0x031BB790, void, ctor_1, (app::NativeClassAttribute * this_ptr, app::String * qualified_cpp_name))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_2, (app::NativeClassAttribute * this_ptr, app::String * qualified_cpp_name, app::String * declaration))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_QualifiedNativeName, (app::NativeClassAttribute * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Declaration, (app::NativeClassAttribute * this_ptr, app::String * value))
}
