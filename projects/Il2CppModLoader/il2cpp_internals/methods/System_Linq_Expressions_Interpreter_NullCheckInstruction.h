#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::NullCheckInstruction {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NullCheckInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (NullCheckInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (NullCheckInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02407510, String *, get_InstructionName, (NullCheckInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02407590, int32_t, Run, (NullCheckInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHODINFO(0x0477A3A0, NullCheckInstruction_Run__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02407670, void, __cctor, ());
}
