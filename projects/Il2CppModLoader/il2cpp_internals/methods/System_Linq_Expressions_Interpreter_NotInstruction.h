#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::NotInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::NotInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::NotInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::NotInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02405F90, app::String *, get_InstructionName, (app::NotInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02406010, app::Instruction *, Create, (app::Type * type));
    IL2CPP_REGISTER_METHODINFO(0x0476E998, NotInstruction_Create__MethodInfo);
}
