using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::TypeIsInstruction {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (TypeIsInstruction * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (TypeIsInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (TypeIsInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02415950, String *, get_InstructionName, (TypeIsInstruction * __this));
IL2CPP_REGISTER_METHOD(0x024159D0, int32_t, Run, (TypeIsInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x02415A60, String *, ToString, (TypeIsInstruction * __this));
}
