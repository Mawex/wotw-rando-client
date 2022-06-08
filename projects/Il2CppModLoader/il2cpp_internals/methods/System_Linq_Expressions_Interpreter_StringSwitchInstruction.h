#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::StringSwitchInstruction {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (StringSwitchInstruction * __this, Dictionary_2_System_String_System_Int32_ * cases, StrongBox_1_System_Int32_ * nullCase));
IL2CPP_REGISTER_METHOD(0x02411930, String *, get_InstructionName, (StringSwitchInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (StringSwitchInstruction * __this));
IL2CPP_REGISTER_METHOD(0x024119B0, int32_t, Run, (StringSwitchInstruction * __this, InterpretedFrame * frame));
}
