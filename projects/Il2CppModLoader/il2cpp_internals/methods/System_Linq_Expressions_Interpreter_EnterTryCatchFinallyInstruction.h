#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction {
IL2CPP_REGISTER_METHOD(0x002FB960, void, SetTryHandler, (EnterTryCatchFinallyInstruction * __this, TryCatchFinallyHandler * tryHandler));
IL2CPP_REGISTER_METHOD(0x01CE49B0, int32_t, get_ProducedContinuations, (EnterTryCatchFinallyInstruction * __this));
IL2CPP_REGISTER_METHOD(0x01CE4920, void, __ctor, (EnterTryCatchFinallyInstruction * __this, int32_t targetIndex, bool hasFinally));
IL2CPP_REGISTER_METHOD(0x022DF650, EnterTryCatchFinallyInstruction *, CreateTryFinally, (int32_t labelIndex));
IL2CPP_REGISTER_METHOD(0x022DF7A0, EnterTryCatchFinallyInstruction *, CreateTryCatch, ());
IL2CPP_REGISTER_METHOD(0x022DF8E0, int32_t, Run, (EnterTryCatchFinallyInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHODINFO(0x04707E80, EnterTryCatchFinallyInstruction_Run__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022DFE80, String *, get_InstructionName, (EnterTryCatchFinallyInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022DFF10, String *, ToString, (EnterTryCatchFinallyInstruction * __this));
}
