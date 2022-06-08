#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::NewInstruction {
IL2CPP_REGISTER_METHOD(0x00CC8D50, void, __ctor, (NewInstruction * __this, ConstructorInfo * constructor, int32_t argumentCount));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ConsumedStack, (NewInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (NewInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02401D90, String *, get_InstructionName, (NewInstruction * __this));
IL2CPP_REGISTER_METHOD(0x02401E10, int32_t, Run, (NewInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHODINFO(0x0478BD48, NewInstruction_Run__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02401F60, Object__Array *, GetArgs, (NewInstruction * __this, InterpretedFrame * frame, int32_t first));
IL2CPP_REGISTER_METHOD(0x024020D0, String *, ToString, (NewInstruction * __this));
}
