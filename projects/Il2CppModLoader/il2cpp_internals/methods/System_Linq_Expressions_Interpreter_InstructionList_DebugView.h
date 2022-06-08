#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::InstructionList_DebugView {
IL2CPP_REGISTER_METHOD(0x01CE09D0, void, __ctor, (InstructionList_DebugView * __this, InstructionList * list));
IL2CPP_REGISTER_METHOD(0x01CE0A70, InstructionList_DebugView_InstructionView__Array *, get_A0, (InstructionList_DebugView * __this));
IL2CPP_REGISTER_METHOD(0x01CE0A80, InstructionList_DebugView_InstructionView__Array *, GetInstructionViews, (InstructionList_DebugView * __this, bool includeDebugCookies));
IL2CPP_REGISTER_METHOD(0x01CE0C40, InstructionList_DebugView_InstructionView__Array *, GetInstructionViews, (IReadOnlyList_1_System_Linq_Expressions_Interpreter_Instruction_ * instructions, IReadOnlyList_1_System_Object_ * objects, Func_2_Int32_Int32_ * labelIndexer, IReadOnlyList_1_KeyValuePair_2_System_Int32_System_Object_ * debugCookies));
IL2CPP_REGISTER_METHOD(0x01CE11A0, int32_t, _GetInstructionViews_b__4_0, (InstructionList_DebugView * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0473C648, InstructionList_DebugView__GetInstructionViews_b__4_0__MethodInfo);
}
