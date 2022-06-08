#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (EnterTryFaultInstruction * __this, int32_t targetIndex));
IL2CPP_REGISTER_METHOD(0x022DFFD0, String *, get_InstructionName, (EnterTryFaultInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedContinuations, (EnterTryFaultInstruction * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, SetTryHandler, (EnterTryFaultInstruction * __this, TryFaultHandler * tryHandler));
IL2CPP_REGISTER_METHOD(0x022E0050, int32_t, Run, (EnterTryFaultInstruction * __this, InterpretedFrame * frame));
}
