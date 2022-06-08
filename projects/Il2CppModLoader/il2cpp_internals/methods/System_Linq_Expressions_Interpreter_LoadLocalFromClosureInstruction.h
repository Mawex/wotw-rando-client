#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::LoadLocalFromClosureInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (LoadLocalFromClosureInstruction * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (LoadLocalFromClosureInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023F9D30, String *, get_InstructionName, (LoadLocalFromClosureInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023F9DB0, int32_t, Run, (LoadLocalFromClosureInstruction * __this, InterpretedFrame * frame));
}
