#include <interception_macros.h>

namespace app::methods::PhysicalSystemState {
IL2CPP_REGISTER_METHOD(0x014FB5B0, void, Init, (PhysicalSystemState * __this, PhysicalSystemManager * manager));
IL2CPP_REGISTER_METHOD(0x014FB8F0, void, Apply, (PhysicalSystemState * __this));
IL2CPP_REGISTER_METHODINFO(0x04707D00, PhysicalSystemState_Apply__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014FB940, void, SetIterations, (PhysicalSystemState * __this, Rigidbody__Array * bodies, int32_t iterations));
IL2CPP_REGISTER_METHOD(0x014FBAD0, void, __ctor, (PhysicalSystemState * __this));
}
