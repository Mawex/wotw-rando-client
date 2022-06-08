using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction {
IL2CPP_REGISTER_METHOD(0x01CE4920, void, __ctor, (LeaveExceptionHandlerInstruction * __this, int32_t labelIndex, bool hasValue));
IL2CPP_REGISTER_METHOD(0x01CE4930, String *, get_InstructionName, (LeaveExceptionHandlerInstruction * __this));
IL2CPP_REGISTER_METHOD(0x01CE49B0, int32_t, get_ConsumedStack, (LeaveExceptionHandlerInstruction * __this));
IL2CPP_REGISTER_METHOD(0x01CE49B0, int32_t, get_ProducedStack, (LeaveExceptionHandlerInstruction * __this));
IL2CPP_REGISTER_METHOD(0x01CE49C0, LeaveExceptionHandlerInstruction *, Create, (int32_t labelIndex, bool hasValue));
IL2CPP_REGISTER_METHOD(0x01CE4CD0, int32_t, Run, (LeaveExceptionHandlerInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x01CE4D40, void, __cctor, (MethodInfo * method));
}
