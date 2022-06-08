#include <interception_macros.h>

namespace app::methods::System::Net::InterlockedStack {
IL2CPP_REGISTER_METHOD(0x01E6A520, void, __ctor, (InterlockedStack * __this));
IL2CPP_REGISTER_METHOD(0x01E6A670, void, Push, (InterlockedStack * __this, Object * pooledStream));
IL2CPP_REGISTER_METHODINFO(0x047756D0, InterlockedStack_Push__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E6A820, Object *, Pop, (InterlockedStack * __this));
}
