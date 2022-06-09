#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::CoalesceConversionBinaryExpression {
IL2CPP_REGISTER_METHOD(0x01FA1100, void, __ctor, (app::CoalesceConversionBinaryExpression * this_ptr, app::Expression * left, app::Expression * right, app::LambdaExpression * conversion));
IL2CPP_REGISTER_METHOD(0x002FB950, LambdaExpression *, GetConversion, (app::CoalesceConversionBinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AD8BA0, ExpressionType__Enum, get_NodeType, (app::CoalesceConversionBinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A488A0, Type *, get_Type, (app::CoalesceConversionBinaryExpression * this_ptr));
}
