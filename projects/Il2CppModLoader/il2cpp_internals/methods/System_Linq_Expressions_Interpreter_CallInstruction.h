#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::CallInstruction {
IL2CPP_REGISTER_METHOD(0x022D75B0, String *, get_InstructionName, (app::CallInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x022D7630, CallInstruction *, Create_1, (app::MethodInfo_1 * info));
IL2CPP_REGISTER_METHOD(0x022D76E0, CallInstruction *, Create_2, (app::MethodInfo_1 * info, app::ParameterInfo_1__Array * parameters));
IL2CPP_REGISTER_METHOD(0x022D7980, CallInstruction *, GetArrayAccessor, (app::MethodInfo_1 * info, int32_t argument_count));
IL2CPP_REGISTER_METHOD(0x022D8040, void, ArrayItemSetter1, (app::Array * array, int32_t index0, app::Object * value));
IL2CPP_REGISTER_METHOD(0x022D8070, void, ArrayItemSetter2, (app::Array * array, int32_t index0, int32_t index1, app::Object * value));
IL2CPP_REGISTER_METHOD(0x022D80A0, void, ArrayItemSetter3, (app::Array * array, int32_t index0, int32_t index1, int32_t index2, app::Object * value));
IL2CPP_REGISTER_METHOD(0x008009A0, int32_t, get_ConsumedStack, (app::CallInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x022D80E0, bool, TryGetLightLambdaTarget, (app::Object * instance, app::LightLambda * * light_lambda));
IL2CPP_REGISTER_METHOD(0x022D8230, Object *, InterpretLambdaInvoke, (app::CallInstruction * this_ptr, app::LightLambda * target_lambda, app::Object__Array * args));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::CallInstruction * this_ptr));
}
