using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::NewArrayInstruction {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (NewArrayInstruction * __this, Type * elementType));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (NewArrayInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (NewArrayInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02401C10, String *, get_InstructionName, (NewArrayInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02401C90, int32_t, Run, (NewArrayInstruction * __this, InterpretedFrame * frame));
}
