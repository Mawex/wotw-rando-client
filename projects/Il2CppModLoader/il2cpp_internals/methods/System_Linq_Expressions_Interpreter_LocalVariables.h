#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::LocalVariables {
IL2CPP_REGISTER_METHOD(0x023FAA70, LocalDefinition, DefineLocal, (LocalVariables * __this, ParameterExpression * variable, int32_t start));
IL2CPP_REGISTER_METHOD(0x023FAF50, void, UndefineLocal, (LocalVariables * __this, LocalDefinition definition, int32_t end));
IL2CPP_REGISTER_METHOD(0x023FB1A0, void, Box, (LocalVariables * __this, ParameterExpression * variable, InstructionList * instructions));
IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_LocalCount, (LocalVariables * __this));
IL2CPP_REGISTER_METHOD(0x023FB520, bool, TryGetLocalOrClosure, (LocalVariables * __this, ParameterExpression * var, LocalVariable * * local));
IL2CPP_REGISTER_METHOD(0x002FB930, Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable_ *, get_ClosureVariables, (LocalVariables * __this));
IL2CPP_REGISTER_METHOD(0x023FB620, LocalVariable *, AddClosureVariable, (LocalVariables * __this, ParameterExpression * variable));
IL2CPP_REGISTER_METHOD(0x023FB8D0, void, __ctor, (LocalVariables * __this));
}
