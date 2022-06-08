#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction {
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (NullableMethodCallInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (NullableMethodCallInstruction * __this));
IL2CPP_REGISTER_METHOD(0x024077B0, String *, get_InstructionName, (NullableMethodCallInstruction * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NullableMethodCallInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02407830, Instruction *, Create, (String * method_1, int32_t argCount, MethodInfo_1 * mi));
IL2CPP_REGISTER_METHODINFO(0x04745CD0, NullableMethodCallInstruction_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02408080, Instruction *, CreateGetValue, ());
}
