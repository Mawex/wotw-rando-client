#include <interception_macros.h>

namespace app::methods::System::Data::DataExpression {
IL2CPP_REGISTER_METHOD(0x0239FA60, void, __ctor, (DataExpression * __this, DataTable * table, String * expression));
IL2CPP_REGISTER_METHOD(0x0239FA80, void, __ctor, (DataExpression * __this, DataTable * table, String * expression, Type * type));
IL2CPP_REGISTER_METHODINFO(0x04720068, DataExpression__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0239FDF0, String *, get_Expression, (DataExpression * __this));
IL2CPP_REGISTER_METHOD(0x00519280, bool, get_HasValue, (DataExpression * __this));
IL2CPP_REGISTER_METHOD(0x0239FE80, void, Bind, (DataExpression * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x023A0050, bool, DependsOn, (DataExpression * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x023A0070, Object *, Evaluate, (DataExpression * __this));
IL2CPP_REGISTER_METHOD(0x023A0080, Object *, Evaluate, (DataExpression * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHODINFO(0x0473B528, DataExpression_Evaluate_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A0290, bool, Invoke, (DataExpression * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHODINFO(0x04781080, DataExpression_Invoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9D0, DataColumn__Array *, GetDependency, (DataExpression * __this));
IL2CPP_REGISTER_METHOD(0x023A03B0, bool, IsTableAggregate, (DataExpression * __this));
IL2CPP_REGISTER_METHOD(0x023A03D0, bool, IsUnknown, (Object * value));
IL2CPP_REGISTER_METHOD(0x023A0470, bool, HasLocalAggregate, (DataExpression * __this));
IL2CPP_REGISTER_METHOD(0x023A0490, bool, HasRemoteAggregate, (DataExpression * __this));
IL2CPP_REGISTER_METHOD(0x023A04B0, bool, ToBoolean, (Object * value));
IL2CPP_REGISTER_METHODINFO(0x04761668, DataExpression_ToBoolean__MethodInfo);
}
