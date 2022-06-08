#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::NumericConvertInstruction_Unchecked {
IL2CPP_REGISTER_METHOD(0x0240A310, String *, get_InstructionName, (NumericConvertInstruction_Unchecked * __this));
IL2CPP_REGISTER_METHOD(0x02408810, void, __ctor, (NumericConvertInstruction_Unchecked * __this, TypeCode__Enum from, TypeCode__Enum to, bool isLiftedToNull));
IL2CPP_REGISTER_METHOD(0x0240A390, Object *, Convert, (NumericConvertInstruction_Unchecked * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x047619D8, NumericConvertInstruction_Unchecked_Convert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0240A7A0, Object *, ConvertInt32, (NumericConvertInstruction_Unchecked * __this, int32_t obj));
IL2CPP_REGISTER_METHODINFO(0x04780FC0, NumericConvertInstruction_Unchecked_ConvertInt32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0240A9F0, Object *, ConvertInt64, (NumericConvertInstruction_Unchecked * __this, int64_t obj));
IL2CPP_REGISTER_METHODINFO(0x047861A8, NumericConvertInstruction_Unchecked_ConvertInt64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0240AC30, Object *, ConvertUInt64, (NumericConvertInstruction_Unchecked * __this, uint64_t obj));
IL2CPP_REGISTER_METHODINFO(0x04728268, NumericConvertInstruction_Unchecked_ConvertUInt64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0240AE70, Object *, ConvertDouble, (NumericConvertInstruction_Unchecked * __this, double obj));
IL2CPP_REGISTER_METHODINFO(0x0477EF30, NumericConvertInstruction_Unchecked_ConvertDouble__MethodInfo);
}
