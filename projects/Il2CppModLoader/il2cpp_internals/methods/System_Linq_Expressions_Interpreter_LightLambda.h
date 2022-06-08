#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::LightLambda {
IL2CPP_REGISTER_METHOD(0x023F7180, void, RunVoid0, (LightLambda * __this));
IL2CPP_REGISTER_METHOD(0x023F7270, void, __ctor, (LightLambda * __this, LightDelegateCreator * delegateCreator, IStrongBox__Array * closure));
IL2CPP_REGISTER_METHOD(0x023F72A0, Func_2_System_Linq_Expressions_Interpreter_LightLambda_Delegate_ *, GetRunDelegateCtor, (Type * delegateType));
IL2CPP_REGISTER_METHOD(0x023F74C0, Func_2_System_Linq_Expressions_Interpreter_LightLambda_Delegate_ *, MakeRunDelegateCtor, (Type * delegateType));
IL2CPP_REGISTER_METHOD(0x023F7FB0, Delegate *, CreateCustomDelegate, (LightLambda * __this, Type * delegateType));
IL2CPP_REGISTER_METHODINFO(0x0473F7A8, LightLambda_CreateCustomDelegate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023F8B60, Delegate *, MakeDelegate, (LightLambda * __this, Type * delegateType));
IL2CPP_REGISTER_METHOD(0x023F8C30, InterpretedFrame *, MakeFrame, (LightLambda * __this));
IL2CPP_REGISTER_METHOD(0x023F8E70, Object *, Run, (LightLambda * __this, Object__Array * arguments));
IL2CPP_REGISTER_METHODINFO(0x047976A0, LightLambda_Run__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023F9130, Object *, RunVoid, (LightLambda * __this, Object__Array * arguments));
IL2CPP_REGISTER_METHOD(0x023F93B0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01AF0EC0, void, RunVoidRef2, (LightLambda * __this, Object * * arg0, Object * * arg1));
}
