#include <interception_macros.h>

namespace app::methods::System::Object {
IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (Object * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0227B430, bool, Equals, (Object * objA, Object * objB));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Object * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Finalize, (Object * __this));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (Object * __this));
IL2CPP_REGISTER_METHOD(0x01A1C4F0, Type *, GetType, (Object * __this));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, MemberwiseClone, (Object * __this));
IL2CPP_REGISTER_METHOD(0x01E16610, String *, ToString, (Object * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, ReferenceEquals, (Object * objA, Object * objB));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, InternalGetHashCode, (Object * o));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FieldGetter, (Object * __this, String * typeName, String * fieldName, Object * * val));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FieldSetter, (Object * __this, String * typeName, String * fieldName, Object * val));
}
