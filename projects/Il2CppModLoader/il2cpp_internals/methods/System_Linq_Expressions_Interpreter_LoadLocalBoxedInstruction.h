using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::LoadLocalBoxedInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (LoadLocalBoxedInstruction * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (LoadLocalBoxedInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023F99C0, String *, get_InstructionName, (LoadLocalBoxedInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023F9A40, int32_t, Run, (LoadLocalBoxedInstruction * __this, InterpretedFrame * frame));
}
