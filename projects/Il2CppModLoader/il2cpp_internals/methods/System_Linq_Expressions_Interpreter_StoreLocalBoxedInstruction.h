using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::StoreLocalBoxedInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (StoreLocalBoxedInstruction * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (StoreLocalBoxedInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02411410, String *, get_InstructionName, (StoreLocalBoxedInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02411490, int32_t, Run, (StoreLocalBoxedInstruction * __this, InterpretedFrame * frame));
}
