using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::QuoteInstruction {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (QuoteInstruction * __this, Expression * operand, Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable_ * hoistedVariables));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (QuoteInstruction * __this));
IL2CPP_REGISTER_METHOD(0x0240D360, String *, get_InstructionName, (QuoteInstruction * __this));
IL2CPP_REGISTER_METHOD(0x0240D3E0, int32_t, Run, (QuoteInstruction * __this, InterpretedFrame * frame));
}
