#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::LoadObjectInstruction {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (LoadObjectInstruction * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (LoadObjectInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023FA110, String *, get_InstructionName, (LoadObjectInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023FA190, int32_t, Run, (LoadObjectInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x023FA230, String *, ToString, (LoadObjectInstruction * __this));
}
