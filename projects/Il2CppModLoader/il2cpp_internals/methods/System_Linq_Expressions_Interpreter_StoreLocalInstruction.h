#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::StoreLocalInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (StoreLocalInstruction * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (StoreLocalInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02411610, String *, get_InstructionName, (StoreLocalInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02411690, int32_t, Run, (StoreLocalInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x02411760, Instruction *, BoxIfIndexMatches, (StoreLocalInstruction * __this, int32_t index));
}
