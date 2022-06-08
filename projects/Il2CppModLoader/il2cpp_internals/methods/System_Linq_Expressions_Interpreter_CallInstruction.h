using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::CallInstruction {
IL2CPP_REGISTER_METHOD(0x022D75B0, String *, get_InstructionName, (CallInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D7630, CallInstruction *, Create, (MethodInfo_1 * info));
IL2CPP_REGISTER_METHOD(0x022D76E0, CallInstruction *, Create, (MethodInfo_1 * info, ParameterInfo_1__Array * parameters));
IL2CPP_REGISTER_METHOD(0x022D7980, CallInstruction *, GetArrayAccessor, (MethodInfo_1 * info, int32_t argumentCount));
IL2CPP_REGISTER_METHOD(0x022D8040, void, ArrayItemSetter1, (Array * array, int32_t index0, Object * value));
IL2CPP_REGISTER_METHOD(0x022D8070, void, ArrayItemSetter2, (Array * array, int32_t index0, int32_t index1, Object * value));
IL2CPP_REGISTER_METHOD(0x022D80A0, void, ArrayItemSetter3, (Array * array, int32_t index0, int32_t index1, int32_t index2, Object * value));
IL2CPP_REGISTER_METHOD(0x008009A0, int32_t, get_ConsumedStack, (CallInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D80E0, bool, TryGetLightLambdaTarget, (Object * instance, LightLambda * * lightLambda));
IL2CPP_REGISTER_METHOD(0x022D8230, Object *, InterpretLambdaInvoke, (CallInstruction * __this, LightLambda * targetLambda, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CallInstruction * __this));
}
