#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::BranchTrueInstruction {
IL2CPP_REGISTER_METHOD(0x022D6AF0, Instruction__Array *, get_Cache, (app::BranchTrueInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x022D6BB0, String *, get_InstructionName, (app::BranchTrueInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::BranchTrueInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x022D6C30, int32_t, Run, (app::BranchTrueInstruction * this_ptr, app::InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x01834240, void, __ctor, (app::BranchTrueInstruction * this_ptr));
}
