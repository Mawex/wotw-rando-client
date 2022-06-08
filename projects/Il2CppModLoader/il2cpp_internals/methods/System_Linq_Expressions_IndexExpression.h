#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::IndexExpression {
IL2CPP_REGISTER_METHOD(0x022D0050, void, __ctor, (IndexExpression * __this, Expression * instance, PropertyInfo_1 * indexer, IReadOnlyList_1_System_Linq_Expressions_Expression_ * arguments));
IL2CPP_REGISTER_METHOD(0x00E3D360, ExpressionType__Enum, get_NodeType, (IndexExpression * __this));
IL2CPP_REGISTER_METHOD(0x022D0110, Type *, get_Type, (IndexExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_Object, (IndexExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, PropertyInfo_1 *, get_Indexer, (IndexExpression * __this));
IL2CPP_REGISTER_METHOD(0x022D0190, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_Arguments, (IndexExpression * __this));
IL2CPP_REGISTER_METHOD(0x022D0210, Expression *, GetArgument, (IndexExpression * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x022D02B0, int32_t, get_ArgumentCount, (IndexExpression * __this));
IL2CPP_REGISTER_METHOD(0x022D0340, Expression *, Accept, (IndexExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x022D0370, Expression *, Rewrite, (IndexExpression * __this, Expression * instance, Expression__Array * arguments));
}
