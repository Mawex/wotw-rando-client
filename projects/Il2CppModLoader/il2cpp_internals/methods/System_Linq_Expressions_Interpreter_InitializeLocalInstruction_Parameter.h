#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::InitializeLocalInstruction_Parameter {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (app::InitializeLocalInstruction_Parameter * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, Run, (app::InitializeLocalInstruction_Parameter * this_ptr, app::InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x01CD7240, Instruction *, BoxIfIndexMatches, (app::InitializeLocalInstruction_Parameter * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x01CD7410, String *, get_InstructionName, (app::InitializeLocalInstruction_Parameter * this_ptr));
}
