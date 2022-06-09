#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::BinaryExpression {
IL2CPP_REGISTER_METHOD(0x01F9C060, void, __ctor, (app::BinaryExpression * this_ptr, app::Expression * left, app::Expression * right));
IL2CPP_REGISTER_METHOD(0x01F9C110, bool, get_CanReduce, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F9C140, bool, IsOpAssignment, (app::ExpressionType__Enum op));
IL2CPP_REGISTER_METHOD(0x002FA280, Expression *, get_Right, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_Left, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x005D2E60, MethodInfo_1 *, get_Method, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, MethodInfo_1 *, GetMethod, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F9C150, BinaryExpression *, Update, (app::BinaryExpression * this_ptr, app::Expression * left, app::LambdaExpression * conversion, app::Expression * right));
IL2CPP_REGISTER_METHOD(0x01F9C470, Expression *, Reduce, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F9C4F0, ExpressionType__Enum, GetBinaryOpFromAssignmentOp, (app::ExpressionType__Enum op));
IL2CPP_REGISTER_METHODINFO(0x04746D70, BinaryExpression_GetBinaryOpFromAssignmentOp__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F9C670, Expression *, ReduceVariable, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F9C800, Expression *, ReduceMember, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F9CEC0, Expression *, ReduceIndex, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x008009A0, LambdaExpression *, get_Conversion, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, LambdaExpression *, GetConversion, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F9D520, bool, get_IsLifted, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F9D730, bool, get_IsLiftedToNull, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F9D770, Expression *, Accept, (app::BinaryExpression * this_ptr, app::ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x01F9D7A0, bool, get_IsLiftedLogical, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F9D8C0, bool, get_IsReferenceComparison, (app::BinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F9DA30, Expression *, ReduceUserdefinedLifted, (app::BinaryExpression * this_ptr));
}
