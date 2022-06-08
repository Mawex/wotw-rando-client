#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::LoadLocalFromClosureBoxedInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (LoadLocalFromClosureBoxedInstruction * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (LoadLocalFromClosureBoxedInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023F9BE0, String *, get_InstructionName, (LoadLocalFromClosureBoxedInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023F9C60, int32_t, Run, (LoadLocalFromClosureBoxedInstruction * __this, InterpretedFrame * frame));
}
