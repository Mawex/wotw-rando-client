#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::LightLambda {
IL2CPP_REGISTER_METHOD(0x023F7180, void, RunVoid0, (app::LightLambda * this_ptr));
IL2CPP_REGISTER_METHOD(0x023F7270, void, __ctor, (app::LightLambda * this_ptr, app::LightDelegateCreator * delegate_creator, app::IStrongBox__Array * closure));
IL2CPP_REGISTER_METHOD(0x023F72A0, Func_2_System_Linq_Expressions_Interpreter_LightLambda_Delegate_ *, GetRunDelegateCtor, (app::Type * delegate_type));
IL2CPP_REGISTER_METHOD(0x023F74C0, Func_2_System_Linq_Expressions_Interpreter_LightLambda_Delegate_ *, MakeRunDelegateCtor, (app::Type * delegate_type));
IL2CPP_REGISTER_METHOD(0x023F7FB0, Delegate *, CreateCustomDelegate, (app::LightLambda * this_ptr, app::Type * delegate_type));
IL2CPP_REGISTER_METHODINFO(0x0473F7A8, LightLambda_CreateCustomDelegate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023F8B60, Delegate *, MakeDelegate, (app::LightLambda * this_ptr, app::Type * delegate_type));
IL2CPP_REGISTER_METHOD(0x023F8C30, InterpretedFrame *, MakeFrame, (app::LightLambda * this_ptr));
IL2CPP_REGISTER_METHOD(0x023F8E70, Object *, Run, (app::LightLambda * this_ptr, app::Object__Array * arguments));
IL2CPP_REGISTER_METHODINFO(0x047976A0, LightLambda_Run__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023F9130, Object *, RunVoid, (app::LightLambda * this_ptr, app::Object__Array * arguments));
IL2CPP_REGISTER_METHOD(0x023F93B0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01AF0EC0, void, RunVoidRef2, (app::LightLambda * this_ptr, app::Object * * arg0, app::Object * * arg1));
}
