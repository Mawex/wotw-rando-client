#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::StoreStaticFieldInstruction {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::StoreStaticFieldInstruction * this_ptr, app::FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x02411820, String *, get_InstructionName, (app::StoreStaticFieldInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::StoreStaticFieldInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x024118A0, int32_t, Run, (app::StoreStaticFieldInstruction * this_ptr, app::InterpretedFrame * frame));
}
