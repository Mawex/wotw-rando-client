#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::LeaveFaultInstruction {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LeaveFaultInstruction * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (LeaveFaultInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedContinuations, (LeaveFaultInstruction * __this));
IL2CPP_REGISTER_METHOD(0x01CE4DD0, String *, get_InstructionName, (LeaveFaultInstruction * __this));
IL2CPP_REGISTER_METHOD(0x01CE4E50, int32_t, Run, (LeaveFaultInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x01CE4E80, void, __cctor, ());
}
