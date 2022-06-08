using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::NewArrayInitInstruction {
IL2CPP_REGISTER_METHOD(0x00CC8D50, void, __ctor, (NewArrayInitInstruction * __this, Type * elementType, int32_t elementCount));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ConsumedStack, (NewArrayInitInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (NewArrayInitInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02401A60, String *, get_InstructionName, (NewArrayInitInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02401AE0, int32_t, Run, (NewArrayInitInstruction * __this, InterpretedFrame * frame));
}
