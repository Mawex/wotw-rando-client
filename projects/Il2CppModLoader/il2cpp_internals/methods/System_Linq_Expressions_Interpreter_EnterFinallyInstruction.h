using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::EnterFinallyInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (EnterFinallyInstruction * __this, int32_t labelIndex));
IL2CPP_REGISTER_METHOD(0x022DF1B0, String *, get_InstructionName, (EnterFinallyInstruction * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ProducedStack, (EnterFinallyInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedContinuations, (EnterFinallyInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022DF230, EnterFinallyInstruction *, Create, (int32_t labelIndex));
IL2CPP_REGISTER_METHOD(0x022DF520, int32_t, Run, (EnterFinallyInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x022DF5C0, void, __cctor, (MethodInfo * method));
}
