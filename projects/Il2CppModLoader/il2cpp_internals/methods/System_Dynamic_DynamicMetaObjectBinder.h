#include <interception_macros.h>

namespace app::methods::System::Dynamic::DynamicMetaObjectBinder {
IL2CPP_REGISTER_METHOD(0x01F8AF70, void, __ctor, (DynamicMetaObjectBinder * __this));
IL2CPP_REGISTER_METHOD(0x01F8B000, Type *, get_ReturnType, (DynamicMetaObjectBinder * __this));
IL2CPP_REGISTER_METHOD(0x01F8B0A0, Expression *, Bind, (DynamicMetaObjectBinder * __this, Object__Array * args, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * parameters, LabelTarget * returnLabel));
IL2CPP_REGISTER_METHODINFO(0x04796A20, DynamicMetaObjectBinder_Bind__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F8B7A0, DynamicMetaObject__Array *, CreateArgumentMetaObjects, (Object__Array * args, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * parameters));
IL2CPP_REGISTER_METHOD(0x01F8B960, Expression *, GetUpdateExpression, (DynamicMetaObjectBinder * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStandardBinder, (DynamicMetaObjectBinder * __this));
}
