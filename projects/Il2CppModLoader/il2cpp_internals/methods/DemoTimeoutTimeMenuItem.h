#include <interception_macros.h>

namespace app::methods::DemoTimeoutTimeMenuItem {
IL2CPP_REGISTER_METHOD(0x00B82AD0, void, __ctor, (DemoTimeoutTimeMenuItem * __this, String * path, String * str, DemoTimeoutTimeMenuItem_TimeoutType__Enum type));
IL2CPP_REGISTER_METHOD(0x00B82BA0, void, OnSelectedFixedUpdate, (DemoTimeoutTimeMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x00B82F70, float, get_Timeout, (DemoTimeoutTimeMenuItem * __this));
IL2CPP_REGISTER_METHODINFO(0x04742498, DemoTimeoutTimeMenuItem_get_Timeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B83090, void, set_Timeout, (DemoTimeoutTimeMenuItem * __this, float value));
IL2CPP_REGISTER_METHODINFO(0x04791158, DemoTimeoutTimeMenuItem_set_Timeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B831C0, float, get_ActualElapsed, (DemoTimeoutTimeMenuItem * __this));
IL2CPP_REGISTER_METHODINFO(0x04765A98, DemoTimeoutTimeMenuItem_get_ActualElapsed__MethodInfo);
}
