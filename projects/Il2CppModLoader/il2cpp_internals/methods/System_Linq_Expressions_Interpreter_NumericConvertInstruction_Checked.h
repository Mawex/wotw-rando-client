using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::NumericConvertInstruction_Checked {
IL2CPP_REGISTER_METHOD(0x02408D70, String *, get_InstructionName, (NumericConvertInstruction_Checked * __this));
IL2CPP_REGISTER_METHOD(0x02408810, void, __ctor, (NumericConvertInstruction_Checked * __this, TypeCode__Enum from, TypeCode__Enum to, bool isLiftedToNull));
IL2CPP_REGISTER_METHOD(0x02408DF0, Object *, Convert, (NumericConvertInstruction_Checked * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x047625B8, NumericConvertInstruction_Checked_Convert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02409200, Object *, ConvertInt32, (NumericConvertInstruction_Checked * __this, int32_t obj));
IL2CPP_REGISTER_METHODINFO(0x0475B3A8, NumericConvertInstruction_Checked_ConvertInt32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024094F0, Object *, ConvertInt64, (NumericConvertInstruction_Checked * __this, int64_t obj));
IL2CPP_REGISTER_METHODINFO(0x04769E18, NumericConvertInstruction_Checked_ConvertInt64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02409820, Object *, ConvertUInt64, (NumericConvertInstruction_Checked * __this, uint64_t obj));
IL2CPP_REGISTER_METHODINFO(0x0472DB70, NumericConvertInstruction_Checked_ConvertUInt64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02409B80, Object *, ConvertDouble, (NumericConvertInstruction_Checked * __this, double obj));
IL2CPP_REGISTER_METHODINFO(0x047984E8, NumericConvertInstruction_Checked_ConvertDouble__MethodInfo);
}
