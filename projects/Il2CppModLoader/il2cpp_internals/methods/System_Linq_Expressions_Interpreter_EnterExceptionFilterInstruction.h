#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::EnterExceptionFilterInstruction {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::EnterExceptionFilterInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x022DE8B0, String *, get_InstructionName, (app::EnterExceptionFilterInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::EnterExceptionFilterInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, Run, (app::EnterExceptionFilterInstruction * this_ptr, app::InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x022DE930, void, __cctor, ());
}
