using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter {
IL2CPP_REGISTER_METHOD(0x0240D6C0, void, __ctor, (QuoteInstruction_ExpressionQuoter * __this, Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable_ * hoistedVariables, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x0240D850, Expression *, VisitBlock, (QuoteInstruction_ExpressionQuoter * __this, BlockExpression * node));
IL2CPP_REGISTER_METHOD(0x0240DB40, CatchBlock *, VisitCatchBlock, (QuoteInstruction_ExpressionQuoter * __this, CatchBlock * node));
IL2CPP_REGISTER_METHOD(0x0240DDE0, Expression *, VisitRuntimeVariables, (QuoteInstruction_ExpressionQuoter * __this, RuntimeVariablesExpression * node));
IL2CPP_REGISTER_METHOD(0x0240E7A0, IRuntimeVariables *, MergeRuntimeVariables, (IRuntimeVariables * first, IRuntimeVariables * second, Int32__Array * indexes));
IL2CPP_REGISTER_METHODINFO(0x04786DC0, QuoteInstruction_ExpressionQuoter_MergeRuntimeVariables__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0240E900, Expression *, VisitParameter, (QuoteInstruction_ExpressionQuoter * __this, ParameterExpression * node));
IL2CPP_REGISTER_METHOD(0x0240EA10, IStrongBox *, GetBox, (QuoteInstruction_ExpressionQuoter * __this, ParameterExpression * variable));
IL2CPP_REGISTER_METHOD(0x0153C290, Expression *, VisitLambda, (QuoteInstruction_ExpressionQuoter * __this, Expression_1_System_Object_ * node));
}
