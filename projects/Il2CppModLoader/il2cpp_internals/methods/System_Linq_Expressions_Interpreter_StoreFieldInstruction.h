using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::StoreFieldInstruction {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (StoreFieldInstruction * __this, FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x024112B0, String *, get_InstructionName, (StoreFieldInstruction * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (StoreFieldInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02411330, int32_t, Run, (StoreFieldInstruction * __this, InterpretedFrame * frame));
}
