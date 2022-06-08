using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::Interpreter {
IL2CPP_REGISTER_METHOD(0x01CE2F00, void, __ctor, (Interpreter * __this, String * name, LocalVariables * locals, InstructionArray instructions, DebugInfo__Array * debugInfos));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_Name, (Interpreter * __this));
IL2CPP_REGISTER_METHOD(0x004C6660, int32_t, get_LocalCount, (Interpreter * __this));
IL2CPP_REGISTER_METHOD(0x01CE2F60, int32_t, get_ClosureSize, (Interpreter * __this));
IL2CPP_REGISTER_METHOD(0x01CE2FF0, InstructionArray, get_Instructions, (Interpreter * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable_ *, get_ClosureVariables, (Interpreter * __this));
IL2CPP_REGISTER_METHOD(0x01CE3010, void, Run, (Interpreter * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x01CE30B0, void, __cctor, (MethodInfo * method));
}
