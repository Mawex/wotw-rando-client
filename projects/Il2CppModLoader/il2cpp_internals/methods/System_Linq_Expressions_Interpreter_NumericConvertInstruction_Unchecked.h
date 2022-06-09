#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::NumericConvertInstruction_Unchecked {
IL2CPP_REGISTER_METHOD(0x0240A310, String *, get_InstructionName, (app::NumericConvertInstruction_Unchecked * this_ptr));
IL2CPP_REGISTER_METHOD(0x02408810, void, __ctor, (app::NumericConvertInstruction_Unchecked * this_ptr, app::TypeCode__Enum from, app::TypeCode__Enum to, bool is_lifted_to_null));
IL2CPP_REGISTER_METHOD(0x0240A390, Object *, Convert, (app::NumericConvertInstruction_Unchecked * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHODINFO(0x047619D8, NumericConvertInstruction_Unchecked_Convert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0240A7A0, Object *, ConvertInt32, (app::NumericConvertInstruction_Unchecked * this_ptr, int32_t obj));
IL2CPP_REGISTER_METHODINFO(0x04780FC0, NumericConvertInstruction_Unchecked_ConvertInt32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0240A9F0, Object *, ConvertInt64, (app::NumericConvertInstruction_Unchecked * this_ptr, int64_t obj));
IL2CPP_REGISTER_METHODINFO(0x047861A8, NumericConvertInstruction_Unchecked_ConvertInt64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0240AC30, Object *, ConvertUInt64, (app::NumericConvertInstruction_Unchecked * this_ptr, uint64_t obj));
IL2CPP_REGISTER_METHODINFO(0x04728268, NumericConvertInstruction_Unchecked_ConvertUInt64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0240AE70, Object *, ConvertDouble, (app::NumericConvertInstruction_Unchecked * this_ptr, double obj));
IL2CPP_REGISTER_METHODINFO(0x0477EF30, NumericConvertInstruction_Unchecked_ConvertDouble__MethodInfo);
}
