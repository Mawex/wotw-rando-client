#include <interception_macros.h>

namespace app::methods::System::Reflection::ConstructorInfo {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ConstructorInfo * __this));
IL2CPP_REGISTER_METHOD(0x00417920, MemberTypes__Enum, get_MemberType, (ConstructorInfo * __this));
IL2CPP_REGISTER_METHOD(0x0267D4D0, Object *, Invoke, (ConstructorInfo * __this, Object__Array * parameters));
IL2CPP_REGISTER_METHOD(0x01EEA6F0, bool, Equals, (ConstructorInfo * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (ConstructorInfo * __this));
IL2CPP_REGISTER_METHOD(0x02283820, bool, operator___, (ConstructorInfo * left, ConstructorInfo * right));
IL2CPP_REGISTER_METHOD(0x02283870, bool, operator___, (ConstructorInfo * left, ConstructorInfo * right));
IL2CPP_REGISTER_METHOD(0x0267D5C0, void, __cctor, ());
}
