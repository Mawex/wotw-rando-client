#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::PropertyByRefUpdater {
IL2CPP_REGISTER_METHOD(0x022E5C20, void, __ctor, (PropertyByRefUpdater * __this, Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_ obj, PropertyInfo_1 * property, int32_t argumentIndex));
IL2CPP_REGISTER_METHOD(0x0240D130, void, Update, (PropertyByRefUpdater * __this, InterpretedFrame * frame, Object * value));
IL2CPP_REGISTER_METHODINFO(0x047862E8, PropertyByRefUpdater_Update__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0240D270, void, UndefineTemps, (PropertyByRefUpdater * __this, InstructionList * instructions, LocalVariables * locals));
}
