#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::ThrowInstruction {
IL2CPP_REGISTER_METHOD(0x023BA2B0, void, __ctor, (ThrowInstruction * __this, bool hasResult, bool isRethrow));
IL2CPP_REGISTER_METHOD(0x02414660, String *, get_InstructionName, (ThrowInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022DEAF0, int32_t, get_ProducedStack, (ThrowInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (ThrowInstruction * __this));
IL2CPP_REGISTER_METHOD(0x024146E0, int32_t, Run, (ThrowInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHODINFO(0x04766A50, ThrowInstruction_Run__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024148D0, Exception *, WrapThrownObject, (Object * thrown));
IL2CPP_REGISTER_METHOD(0x024149C0, RuntimeWrappedException *, RuntimeWrap, (Object * thrown));
IL2CPP_REGISTER_METHOD(0x02414C60, void, __cctor, ());
}
