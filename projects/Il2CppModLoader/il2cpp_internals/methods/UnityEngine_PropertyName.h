#include <interception_macros.h>

namespace app::methods::UnityEngine::PropertyName {
IL2CPP_REGISTER_METHOD(0x00217340, void, __ctor, (PropertyName__Boxed * __this, String * name));
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (PropertyName__Boxed * __this, PropertyName other));
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (PropertyName__Boxed * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x0296A4B0, bool, operator___, (PropertyName lhs, PropertyName rhs));
IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, GetHashCode, (PropertyName__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00217350, bool, Equals, (PropertyName__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x00217410, bool, Equals, (PropertyName__Boxed * __this, PropertyName other));
IL2CPP_REGISTER_METHOD(0x0296A4C0, PropertyName, operator_, (String * name));
IL2CPP_REGISTER_METHOD(0x0252E560, PropertyName, operator_, (int32_t id));
IL2CPP_REGISTER_METHOD(0x00217420, String *, ToString, (PropertyName__Boxed * __this));
}
