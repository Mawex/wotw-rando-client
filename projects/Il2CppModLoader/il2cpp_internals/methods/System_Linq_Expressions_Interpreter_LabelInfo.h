#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::LabelInfo {
IL2CPP_REGISTER_METHOD(0x01CE31F0, void, __ctor, (LabelInfo * __this, LabelTarget * node));
IL2CPP_REGISTER_METHOD(0x01CE3350, BranchLabel *, GetLabel, (LabelInfo * __this, LightCompiler * compiler));
IL2CPP_REGISTER_METHOD(0x01CE3390, void, Reference, (LabelInfo * __this, LabelScopeInfo * block));
IL2CPP_REGISTER_METHOD(0x01CE3450, void, Define, (LabelInfo * __this, LabelScopeInfo * block));
IL2CPP_REGISTER_METHODINFO(0x0478D270, LabelInfo_Define__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CE36B0, void, ValidateJump, (LabelInfo * __this, LabelScopeInfo * reference));
IL2CPP_REGISTER_METHODINFO(0x047990C0, LabelInfo_ValidateJump__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CE3B10, void, ValidateFinish, (LabelInfo * __this));
IL2CPP_REGISTER_METHODINFO(0x0473D5F8, LabelInfo_ValidateFinish__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CE3BE0, void, EnsureLabel, (LabelInfo * __this, LightCompiler * compiler));
IL2CPP_REGISTER_METHOD(0x01CE3C20, bool, DefinedIn, (LabelInfo * __this, LabelScopeInfo * scope));
IL2CPP_REGISTER_METHOD(0x00519280, bool, get_HasDefinitions, (LabelInfo * __this));
IL2CPP_REGISTER_METHOD(0x01CE3D30, LabelScopeInfo *, FirstDefinition, (LabelInfo * __this));
IL2CPP_REGISTER_METHODINFO(0x047448E0, LabelInfo_FirstDefinition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CE3F60, void, AddDefinition, (LabelInfo * __this, LabelScopeInfo * scope));
IL2CPP_REGISTER_METHOD(0x01CE41B0, bool, get_HasMultipleDefinitions, (LabelInfo * __this));
IL2CPP_REGISTER_METHOD(0x0157A0D0, Object *, CommonNode, (Object * first, Object * second, Func_2_Object_Object_ * parent));
IL2CPP_REGISTER_METHOD(0x0157A0D0, LabelScopeInfo *, CommonNode, (LabelScopeInfo * first, LabelScopeInfo * second, Func_2_System_Linq_Expressions_Interpreter_LabelScopeInfo_System_Linq_Expressions_Interpreter_LabelScopeInfo_ * parent));
IL2CPP_REGISTER_METHODINFO(0x04709468, LabelInfo_CommonNode_1__MethodInfo);
}
