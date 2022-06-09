#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::TypeAsInstruction {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::TypeAsInstruction * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::TypeAsInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::TypeAsInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x02415500, String *, get_InstructionName, (app::TypeAsInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x02415580, int32_t, Run, (app::TypeAsInstruction * this_ptr, app::InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x02415620, String *, ToString, (app::TypeAsInstruction * this_ptr));
}
