#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::BranchInstruction {
IL2CPP_REGISTER_METHOD(0x022D61E0, Instruction__Array *, get_Cache, (BranchInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D64F0, void, __ctor, (BranchInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D6500, void, __ctor, (BranchInstruction * __this, bool hasResult, bool hasValue));
IL2CPP_REGISTER_METHOD(0x022D6510, String *, get_InstructionName, (BranchInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D6590, int32_t, get_ConsumedStack, (BranchInstruction * __this));
IL2CPP_REGISTER_METHOD(0x01CE49B0, int32_t, get_ProducedStack, (BranchInstruction * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, Run, (BranchInstruction * __this, InterpretedFrame * frame));
}
