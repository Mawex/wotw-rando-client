#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_MutableValue {
IL2CPP_REGISTER_METHOD(0x0091DD30, void, __ctor, (InitializeLocalInstruction_MutableValue * __this, int32_t index, Type * type));
IL2CPP_REGISTER_METHOD(0x01CD6F30, int32_t, Run, (InitializeLocalInstruction_MutableValue * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHODINFO(0x047663C8, InitializeLocalInstruction_MutableValue_Run__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CD7050, Instruction *, BoxIfIndexMatches, (InitializeLocalInstruction_MutableValue * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01CD71C0, String *, get_InstructionName, (InitializeLocalInstruction_MutableValue * __this));
}
