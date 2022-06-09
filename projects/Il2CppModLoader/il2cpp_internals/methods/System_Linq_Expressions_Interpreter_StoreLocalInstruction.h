#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::StoreLocalInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (app::StoreLocalInstruction * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::StoreLocalInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x02411610, String *, get_InstructionName, (app::StoreLocalInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x02411690, int32_t, Run, (app::StoreLocalInstruction * this_ptr, app::InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x02411760, Instruction *, BoxIfIndexMatches, (app::StoreLocalInstruction * this_ptr, int32_t index));
}
