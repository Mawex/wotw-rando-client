using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::GotoInstruction {
IL2CPP_REGISTER_METHOD(0x022E63D0, String *, get_InstructionName, (GotoInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D6590, int32_t, get_ConsumedStack, (GotoInstruction * __this));
IL2CPP_REGISTER_METHOD(0x01CE49B0, int32_t, get_ProducedStack, (GotoInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022E6450, void, __ctor, (GotoInstruction * __this, int32_t targetIndex, bool hasResult, bool hasValue, bool labelTargetGetsValue));
IL2CPP_REGISTER_METHOD(0x022E6470, GotoInstruction *, Create, (int32_t labelIndex, bool hasResult, bool hasValue, bool labelTargetGetsValue));
IL2CPP_REGISTER_METHOD(0x022E67C0, int32_t, Run, (GotoInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x022E6940, void, __cctor, (MethodInfo * method));
}
