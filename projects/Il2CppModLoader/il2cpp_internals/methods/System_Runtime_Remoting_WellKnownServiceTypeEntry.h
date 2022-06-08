#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::WellKnownServiceTypeEntry {
IL2CPP_REGISTER_METHOD(0x01D87900, void, __ctor, (WellKnownServiceTypeEntry * __this, String * typeName, String * assemblyName, String * objectUri, WellKnownObjectMode__Enum mode));
IL2CPP_REGISTER_METHODINFO(0x04727410, WellKnownServiceTypeEntry__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00654950, WellKnownObjectMode__Enum, get_Mode, (WellKnownServiceTypeEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Type *, get_ObjectType, (WellKnownServiceTypeEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_ObjectUri, (WellKnownServiceTypeEntry * __this));
IL2CPP_REGISTER_METHOD(0x01D87A60, String *, ToString, (WellKnownServiceTypeEntry * __this));
}
