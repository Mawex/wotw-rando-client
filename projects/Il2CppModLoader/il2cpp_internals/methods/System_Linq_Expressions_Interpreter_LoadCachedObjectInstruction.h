using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (LoadCachedObjectInstruction * __this, uint32_t index));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (LoadCachedObjectInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023F9550, String *, get_InstructionName, (LoadCachedObjectInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023F95D0, int32_t, Run, (LoadCachedObjectInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x023F96B0, String *, ToDebugString, (LoadCachedObjectInstruction * __this, int32_t instructionIndex, Object * cookie, Func_2_Int32_Int32_ * labelIndexer, IReadOnlyList_1_System_Object_ * objects));
IL2CPP_REGISTER_METHOD(0x023F9800, String *, ToString, (LoadCachedObjectInstruction * __this));
}
