using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::LoadLocalInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (LoadLocalInstruction * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (LoadLocalInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023F9F00, String *, get_InstructionName, (LoadLocalInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023F9F80, int32_t, Run, (LoadLocalInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x023FA050, Instruction *, BoxIfIndexMatches, (LoadLocalInstruction * __this, int32_t index));
}
