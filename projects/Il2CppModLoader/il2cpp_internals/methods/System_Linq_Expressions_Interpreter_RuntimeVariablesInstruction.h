#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::RuntimeVariablesInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (RuntimeVariablesInstruction * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (RuntimeVariablesInstruction * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_ConsumedStack, (RuntimeVariablesInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02410430, String *, get_InstructionName, (RuntimeVariablesInstruction * __this));
IL2CPP_REGISTER_METHOD(0x024104B0, int32_t, Run, (RuntimeVariablesInstruction * __this, InterpretedFrame * frame));
}
