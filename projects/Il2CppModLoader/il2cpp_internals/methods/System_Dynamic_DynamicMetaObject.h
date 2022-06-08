#include <interception_macros.h>

namespace app::methods::System::Dynamic::DynamicMetaObject {
IL2CPP_REGISTER_METHOD(0x01F8A880, void, __ctor, (DynamicMetaObject * __this, Expression * expression, BindingRestrictions * restrictions));
IL2CPP_REGISTER_METHOD(0x01F8A940, void, __ctor, (DynamicMetaObject * __this, Expression * expression, BindingRestrictions * restrictions, Object * value));
IL2CPP_REGISTER_METHOD(0x002FA280, Expression *, get_Expression, (DynamicMetaObject * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, BindingRestrictions *, get_Restrictions, (DynamicMetaObject * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Object *, get_Value, (DynamicMetaObject * __this));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_HasValue, (DynamicMetaObject * __this));
IL2CPP_REGISTER_METHOD(0x01F8A970, Type *, get_RuntimeType, (DynamicMetaObject * __this));
IL2CPP_REGISTER_METHOD(0x01F8AA10, Type *, get_LimitType, (DynamicMetaObject * __this));
IL2CPP_REGISTER_METHOD(0x01F8AAC0, DynamicMetaObject *, BindGetMember, (DynamicMetaObject * __this, GetMemberBinder * binder));
IL2CPP_REGISTER_METHOD(0x01F8AB80, DynamicMetaObject *, BindSetMember, (DynamicMetaObject * __this, SetMemberBinder * binder, DynamicMetaObject * value));
IL2CPP_REGISTER_METHOD(0x01F8AC50, IEnumerable_1_System_String_ *, GetDynamicMemberNames, (DynamicMetaObject * __this));
IL2CPP_REGISTER_METHOD(0x01F8ACD0, DynamicMetaObject *, Create, (Object * value, Expression * expression));
IL2CPP_REGISTER_METHODINFO(0x0476C218, DynamicMetaObject_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F8AEE0, void, __cctor, ());
}
