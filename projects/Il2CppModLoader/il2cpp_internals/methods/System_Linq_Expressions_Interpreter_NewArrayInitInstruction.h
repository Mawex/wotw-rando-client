#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::NewArrayInitInstruction {
IL2CPP_REGISTER_METHOD(0x00CC8D50, void, __ctor, (app::NewArrayInitInstruction * this_ptr, app::Type * element_type, int32_t element_count));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ConsumedStack, (app::NewArrayInitInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::NewArrayInitInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x02401A60, String *, get_InstructionName, (app::NewArrayInitInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x02401AE0, int32_t, Run, (app::NewArrayInitInstruction * this_ptr, app::InterpretedFrame * frame));
}
