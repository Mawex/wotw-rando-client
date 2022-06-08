using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::StoreStaticFieldInstruction {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (StoreStaticFieldInstruction * __this, FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x02411820, String *, get_InstructionName, (StoreStaticFieldInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (StoreStaticFieldInstruction * __this));
IL2CPP_REGISTER_METHOD(0x024118A0, int32_t, Run, (StoreStaticFieldInstruction * __this, InterpretedFrame * frame));
}
