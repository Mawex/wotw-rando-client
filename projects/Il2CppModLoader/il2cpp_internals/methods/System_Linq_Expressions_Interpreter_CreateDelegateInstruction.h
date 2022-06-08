using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::CreateDelegateInstruction {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (CreateDelegateInstruction * __this, LightDelegateCreator * delegateCreator));
IL2CPP_REGISTER_METHOD(0x022DA180, int32_t, get_ConsumedStack, (CreateDelegateInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (CreateDelegateInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022DA230, String *, get_InstructionName, (CreateDelegateInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022DA2B0, int32_t, Run, (CreateDelegateInstruction * __this, InterpretedFrame * frame));
}
