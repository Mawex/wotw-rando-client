using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (AssignLocalToClosureInstruction * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (AssignLocalToClosureInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (AssignLocalToClosureInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D5E00, String *, get_InstructionName, (AssignLocalToClosureInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D5E80, int32_t, Run, (AssignLocalToClosureInstruction * __this, InterpretedFrame * frame));
}
