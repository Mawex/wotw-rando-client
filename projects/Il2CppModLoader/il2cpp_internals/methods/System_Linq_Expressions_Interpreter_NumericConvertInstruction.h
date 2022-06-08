using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::NumericConvertInstruction {
IL2CPP_REGISTER_METHOD(0x02408810, void, __ctor, (NumericConvertInstruction * __this, TypeCode__Enum from, TypeCode__Enum to, bool isLiftedToNull));
IL2CPP_REGISTER_METHOD(0x02408820, int32_t, Run, (NumericConvertInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x02408A00, String *, get_InstructionName, (NumericConvertInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (NumericConvertInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (NumericConvertInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02408A80, String *, ToString, (NumericConvertInstruction * __this));
}
