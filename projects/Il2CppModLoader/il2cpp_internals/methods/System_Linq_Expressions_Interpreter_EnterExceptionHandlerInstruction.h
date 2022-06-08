using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction {
IL2CPP_REGISTER_METHOD(0x0052C650, void, __ctor, (EnterExceptionHandlerInstruction * __this, bool hasValue));
IL2CPP_REGISTER_METHOD(0x022DEA70, String *, get_InstructionName, (EnterExceptionHandlerInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022DEAF0, int32_t, get_ConsumedStack, (EnterExceptionHandlerInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (EnterExceptionHandlerInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, Run, (EnterExceptionHandlerInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x022DEB00, void, __cctor, (MethodInfo * method));
}
