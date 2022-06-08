using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction {
IL2CPP_REGISTER_METHOD(0x00CC8D50, void, __ctor, (NewArrayBoundsInstruction * __this, Type * elementType, int32_t rank));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ConsumedStack, (NewArrayBoundsInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (NewArrayBoundsInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02401850, String *, get_InstructionName, (NewArrayBoundsInstruction * __this));
IL2CPP_REGISTER_METHOD(0x024018D0, int32_t, Run, (NewArrayBoundsInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHODINFO(0x04708188, NewArrayBoundsInstruction_Run__MethodInfo);
}
