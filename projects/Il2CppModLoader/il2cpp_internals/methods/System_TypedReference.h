#include <interception_macros.h>

namespace app::methods::System::TypedReference {
IL2CPP_REGISTER_METHOD(0x027C42F0, TypedReference, MakeTypedReference, (Object * target, FieldInfo_1__Array * flds));
IL2CPP_REGISTER_METHODINFO(0x0470EED8, TypedReference_MakeTypedReference__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C4880, TypedReference, MakeTypedReferenceInternal, (Object * target, FieldInfo_1__Array * fields));
IL2CPP_REGISTER_METHOD(0x00203FF0, int32_t, GetHashCode, (TypedReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002040D0, bool, Equals, (TypedReference__Boxed * __this, Object * o));
IL2CPP_REGISTER_METHODINFO(0x0476E168, TypedReference_Equals__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002040E0, bool, get_IsNull, (TypedReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x027C4A10, void, SetTypedReference, (TypedReference target, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04703100, TypedReference_SetTypedReference__MethodInfo);
}
