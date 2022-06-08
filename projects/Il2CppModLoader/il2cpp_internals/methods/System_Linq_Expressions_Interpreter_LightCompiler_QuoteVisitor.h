using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor {
IL2CPP_REGISTER_METHOD(0x023F63B0, Expression *, VisitParameter, (LightCompiler_QuoteVisitor * __this, ParameterExpression * node));
IL2CPP_REGISTER_METHOD(0x023F64A0, Expression *, VisitBlock, (LightCompiler_QuoteVisitor * __this, BlockExpression * node));
IL2CPP_REGISTER_METHOD(0x023F6600, CatchBlock *, VisitCatchBlock, (LightCompiler_QuoteVisitor * __this, CatchBlock * node));
IL2CPP_REGISTER_METHOD(0x023F67E0, void, PushParameters, (LightCompiler_QuoteVisitor * __this, IEnumerable_1_System_Linq_Expressions_ParameterExpression_ * parameters));
IL2CPP_REGISTER_METHOD(0x023F6A90, void, PopParameters, (LightCompiler_QuoteVisitor * __this, IEnumerable_1_System_Linq_Expressions_ParameterExpression_ * parameters));
IL2CPP_REGISTER_METHOD(0x023F6CC0, void, __ctor, (LightCompiler_QuoteVisitor * __this));
IL2CPP_REGISTER_METHOD(0x0153C060, Expression *, VisitLambda, (LightCompiler_QuoteVisitor * __this, Expression_1_System_Object_ * node));
}
