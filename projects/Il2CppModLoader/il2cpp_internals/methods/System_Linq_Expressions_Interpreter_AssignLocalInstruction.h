using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::AssignLocalInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (AssignLocalInstruction * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (AssignLocalInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (AssignLocalInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D5C00, String *, get_InstructionName, (AssignLocalInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D5C80, int32_t, Run, (AssignLocalInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x022D5D40, Instruction *, BoxIfIndexMatches, (AssignLocalInstruction * __this, int32_t index));
}
