using namespace app;

namespace app::methods::System::Dynamic::Utils::ExpressionVisitorUtils {
IL2CPP_REGISTER_METHOD(0x01F95420, Expression__Array *, VisitBlockExpressions, (ExpressionVisitor * visitor, BlockExpression * block));
IL2CPP_REGISTER_METHOD(0x01F95640, ParameterExpression__Array *, VisitParameters, (ExpressionVisitor * visitor, IParameterProvider * nodes, String * callerName));
IL2CPP_REGISTER_METHOD(0x01F95860, Expression__Array *, VisitArguments, (ExpressionVisitor * visitor, IArgumentProvider * nodes));
}
