#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::EqualInstruction {
IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::EqualInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::EqualInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x022E0380, String *, get_InstructionName, (app::EqualInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::EqualInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x022E0400, Instruction *, Create, (app::Type * type, bool lifted_to_null));
}
