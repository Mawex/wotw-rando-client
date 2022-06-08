#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::LoadFieldInstruction {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (LoadFieldInstruction * __this, FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x023F98B0, String *, get_InstructionName, (LoadFieldInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (LoadFieldInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (LoadFieldInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023F9930, int32_t, Run, (LoadFieldInstruction * __this, InterpretedFrame * frame));
}
