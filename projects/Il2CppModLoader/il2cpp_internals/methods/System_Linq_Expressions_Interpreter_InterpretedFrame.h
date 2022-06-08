#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::InterpretedFrame {
IL2CPP_REGISTER_METHOD(0x01CE1270, void, __ctor, (InterpretedFrame * __this, Interpreter * interpreter, IStrongBox__Array * closure));
IL2CPP_REGISTER_METHOD(0x01CE1390, DebugInfo *, GetDebugInfo, (InterpretedFrame * __this, int32_t instructionIndex));
IL2CPP_REGISTER_METHOD(0x01CE1450, String *, get_Name, (InterpretedFrame * __this));
IL2CPP_REGISTER_METHOD(0x01CE1470, void, Push, (InterpretedFrame * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01CE14F0, void, Push, (InterpretedFrame * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01CE1640, void, Push, (InterpretedFrame * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01CE16D0, void, Push, (InterpretedFrame * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01CE17E0, void, Push, (InterpretedFrame * __this, int8_t value));
IL2CPP_REGISTER_METHOD(0x01CE18F0, void, Push, (InterpretedFrame * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x01CE1A00, void, Push, (InterpretedFrame * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01CE1B10, Object *, Pop, (InterpretedFrame * __this));
IL2CPP_REGISTER_METHOD(0x01CE1B60, void, SetStackDepth, (InterpretedFrame * __this, int32_t depth));
IL2CPP_REGISTER_METHOD(0x01CE1B80, Object *, Peek, (InterpretedFrame * __this));
IL2CPP_REGISTER_METHOD(0x01CE1BC0, void, Dup, (InterpretedFrame * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, InterpretedFrame *, get_Parent, (InterpretedFrame * __this));
IL2CPP_REGISTER_METHOD(0x01CE1C80, IEnumerable_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_ *, GetStackTraceDebugInfo, (InterpretedFrame * __this));
IL2CPP_REGISTER_METHOD(0x01CE1E10, void, SaveTraceToException, (InterpretedFrame * __this, Exception * exception));
IL2CPP_REGISTER_METHOD(0x01CE20E0, InterpretedFrame *, Enter, (InterpretedFrame * __this));
IL2CPP_REGISTER_METHOD(0x01CE21F0, void, Leave, (InterpretedFrame * __this, InterpretedFrame * prevFrame));
IL2CPP_REGISTER_METHOD(0x01CE22B0, bool, IsJumpHappened, (InterpretedFrame * __this));
IL2CPP_REGISTER_METHOD(0x01CE22C0, void, RemoveContinuation, (InterpretedFrame * __this));
IL2CPP_REGISTER_METHOD(0x01CE22D0, void, PushContinuation, (InterpretedFrame * __this, int32_t continuation));
IL2CPP_REGISTER_METHOD(0x01CE2310, int32_t, YieldToCurrentContinuation, (InterpretedFrame * __this));
IL2CPP_REGISTER_METHOD(0x01CE23C0, int32_t, YieldToPendingContinuation, (InterpretedFrame * __this));
IL2CPP_REGISTER_METHOD(0x01CE2660, void, PushPendingContinuation, (InterpretedFrame * __this));
IL2CPP_REGISTER_METHOD(0x01CE2730, void, PopPendingContinuation, (InterpretedFrame * __this));
IL2CPP_REGISTER_METHOD(0x01CE2840, int32_t, Goto, (InterpretedFrame * __this, int32_t labelIndex, Object * value, bool gotoExceptionHandler));
}
