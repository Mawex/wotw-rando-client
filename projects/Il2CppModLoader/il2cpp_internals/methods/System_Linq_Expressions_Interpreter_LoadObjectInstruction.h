#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::LoadObjectInstruction {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::LoadObjectInstruction * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::LoadObjectInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x023FA110, String *, get_InstructionName, (app::LoadObjectInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x023FA190, int32_t, Run, (app::LoadObjectInstruction * this_ptr, app::InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x023FA230, String *, ToString, (app::LoadObjectInstruction * this_ptr));
}
