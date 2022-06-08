using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::PopInstruction {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PopInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (PopInstruction * __this));
IL2CPP_REGISTER_METHOD(0x0240CF20, String *, get_InstructionName, (PopInstruction * __this));
IL2CPP_REGISTER_METHOD(0x0240CFA0, int32_t, Run, (PopInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x0240CFF0, void, __cctor, (MethodInfo * method));
}
