#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::TypeAsInstruction {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (TypeAsInstruction * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (TypeAsInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (TypeAsInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02415500, String *, get_InstructionName, (TypeAsInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02415580, int32_t, Run, (TypeAsInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x02415620, String *, ToString, (TypeAsInstruction * __this));
}
