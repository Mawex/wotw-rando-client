using namespace app;

namespace app::methods::System::Linq::Expressions::BinaryExpression {
IL2CPP_REGISTER_METHOD(0x01F9C060, void, __ctor, (BinaryExpression * __this, Expression * left, Expression * right));
IL2CPP_REGISTER_METHOD(0x01F9C110, bool, get_CanReduce, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x01F9C140, bool, IsOpAssignment, (ExpressionType__Enum op));
IL2CPP_REGISTER_METHOD(0x002FA280, Expression *, get_Right, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_Left, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x005D2E60, MethodInfo_1 *, get_Method, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, MethodInfo_1 *, GetMethod, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x01F9C150, BinaryExpression *, Update, (BinaryExpression * __this, Expression * left, LambdaExpression * conversion, Expression * right));
IL2CPP_REGISTER_METHOD(0x01F9C470, Expression *, Reduce, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x01F9C4F0, ExpressionType__Enum, GetBinaryOpFromAssignmentOp, (ExpressionType__Enum op));
IL2CPP_REGISTER_METHODINFO(0x04746D70, BinaryExpression_GetBinaryOpFromAssignmentOp__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F9C670, Expression *, ReduceVariable, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x01F9C800, Expression *, ReduceMember, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x01F9CEC0, Expression *, ReduceIndex, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x008009A0, LambdaExpression *, get_Conversion, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, LambdaExpression *, GetConversion, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x01F9D520, bool, get_IsLifted, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x01F9D730, bool, get_IsLiftedToNull, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x01F9D770, Expression *, Accept, (BinaryExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x01F9D7A0, bool, get_IsLiftedLogical, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x01F9D8C0, bool, get_IsReferenceComparison, (BinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x01F9DA30, Expression *, ReduceUserdefinedLifted, (BinaryExpression * __this));
}
