using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::LoadStaticFieldInstruction {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (LoadStaticFieldInstruction * __this, FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x023FA2D0, String *, get_InstructionName, (LoadStaticFieldInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (LoadStaticFieldInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023FA350, int32_t, Run, (LoadStaticFieldInstruction * __this, InterpretedFrame * frame));
}
