#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::RuntimeVariablesInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (app::RuntimeVariablesInstruction * this_ptr, int32_t count));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::RuntimeVariablesInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_ConsumedStack, (app::RuntimeVariablesInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x02410430, String *, get_InstructionName, (app::RuntimeVariablesInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x024104B0, int32_t, Run, (app::RuntimeVariablesInstruction * this_ptr, app::InterpretedFrame * frame));
}
