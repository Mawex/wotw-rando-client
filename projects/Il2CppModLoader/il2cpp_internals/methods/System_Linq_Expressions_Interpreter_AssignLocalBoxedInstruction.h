using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::AssignLocalBoxedInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (AssignLocalBoxedInstruction * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (AssignLocalBoxedInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (AssignLocalBoxedInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D5A10, String *, get_InstructionName, (AssignLocalBoxedInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D5A90, int32_t, Run, (AssignLocalBoxedInstruction * __this, InterpretedFrame * frame));
}
