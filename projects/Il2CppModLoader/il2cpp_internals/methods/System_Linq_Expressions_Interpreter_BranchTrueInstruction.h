#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::BranchTrueInstruction {
IL2CPP_REGISTER_METHOD(0x022D6AF0, Instruction__Array *, get_Cache, (BranchTrueInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D6BB0, String *, get_InstructionName, (BranchTrueInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (BranchTrueInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D6C30, int32_t, Run, (BranchTrueInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x01834240, void, __ctor, (BranchTrueInstruction * __this));
}
