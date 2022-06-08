#include <interception_macros.h>

namespace app::methods::Moon::Timeline::AutoFillOnCreationAttribute {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (AutoFillOnCreationAttribute * __this, AutoFillOnCreationAttribute_ResolveConflict__Enum resolveConflict));
IL2CPP_REGISTER_METHOD(0x01BB01E0, Object *, FindObjectOfType, (AutoFillOnCreationAttribute * __this, List_1_UnityEngine_Object_ * objects, Type * findType));
IL2CPP_REGISTER_METHOD(0x01BB0520, void, ProcessField, (ITimelineEntityCreationListener * owner, FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x01552A30, void, ProcessClass, (Object * c));
IL2CPP_REGISTER_METHOD(0x01552A30, void, ProcessClass, (ITimelineEntityCreationListener * c));
IL2CPP_REGISTER_METHODINFO(0x0477D248, AutoFillOnCreationAttribute_ProcessClass_1__MethodInfo);
}
