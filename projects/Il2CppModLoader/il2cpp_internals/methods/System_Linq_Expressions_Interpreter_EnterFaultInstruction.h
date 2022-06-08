#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::EnterFaultInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (EnterFaultInstruction * __this, int32_t labelIndex));
IL2CPP_REGISTER_METHOD(0x022DED20, String *, get_InstructionName, (EnterFaultInstruction * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ProducedStack, (EnterFaultInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022DEDA0, EnterFaultInstruction *, Create, (int32_t labelIndex));
IL2CPP_REGISTER_METHOD(0x022DF090, int32_t, Run, (EnterFaultInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x022DF120, void, __cctor, ());
}
