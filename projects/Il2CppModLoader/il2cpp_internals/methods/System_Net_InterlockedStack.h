#include <interception_macros.h>

namespace app::methods::System_Net::InterlockedStack {
IL2CPP_REGISTER_METHOD(0x01E6A520, void, __ctor, (app::InterlockedStack * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E6A670, void, Push, (app::InterlockedStack * this_ptr, app::Object * pooled_stream));
IL2CPP_REGISTER_METHODINFO(0x047756D0, InterlockedStack_Push__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E6A820, Object *, Pop, (app::InterlockedStack * this_ptr));
}
