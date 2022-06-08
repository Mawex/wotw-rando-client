using namespace app;

namespace app::methods::System::Linq::Expressions::StackGuard {
IL2CPP_REGISTER_METHOD(0x02FBFB20, bool, TryEnterOnCurrentStack, (StackGuard_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x0472A378, StackGuard_1_TryEnterOnCurrentStack__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (StackGuard_1 * __this));
IL2CPP_REGISTER_METHOD(0x01AF1250, void, RunOnEmptyStack, (StackGuard_1 * __this, Action_2_Object_Object_ * action, Object * arg1, Object * arg2));
IL2CPP_REGISTER_METHOD(0x018F0F40, Object *, RunOnEmptyStackCore, (StackGuard_1 * __this, Func_2_Object_Object_ * action, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0472ADA0, StackGuard_1_RunOnEmptyStackCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AF1250, void, RunOnEmptyStack, (StackGuard_1 * __this, Action_2_System_Linq_Expressions_Interpreter_LightCompiler_System_Linq_Expressions_Expression_ * action, LightCompiler * arg1, Expression * arg2));
IL2CPP_REGISTER_METHODINFO(0x04719848, StackGuard_1_RunOnEmptyStack_1__MethodInfo);
}
