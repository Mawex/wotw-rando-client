#include <interception_macros.h>

namespace app::methods::UnityEngine_Bindings::NativePropertyAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::NativePropertyAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x031BB600, void, __ctor_2, (app::NativePropertyAttribute * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHOD(0x031BB610, void, __ctor_3, (app::NativePropertyAttribute * this_ptr, app::String * name, bool is_free, app::TargetType__Enum target_type));
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_TargetType, (app::NativePropertyAttribute * this_ptr, app::TargetType__Enum value));
}
