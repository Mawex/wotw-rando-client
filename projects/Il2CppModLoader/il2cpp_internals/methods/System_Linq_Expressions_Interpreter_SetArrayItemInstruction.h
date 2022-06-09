#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::SetArrayItemInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::SetArrayItemInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_ConsumedStack, (app::SetArrayItemInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02410EE0, app::String *, get_InstructionName, (app::SetArrayItemInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02410F60, int32_t, Run, (app::SetArrayItemInstruction * this_ptr, app::InterpretedFrame * frame));
    IL2CPP_REGISTER_METHOD(0x02411170, void, __cctor, ());
}
