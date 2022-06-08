using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::IndexedBranchInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (IndexedBranchInstruction * __this, int32_t labelIndex));
IL2CPP_REGISTER_METHOD(0x01CD6220, RuntimeLabel, GetLabel, (IndexedBranchInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x01CD6290, String *, ToDebugString, (IndexedBranchInstruction * __this, int32_t instructionIndex, Object * cookie, Func_2_Int32_Int32_ * labelIndexer, IReadOnlyList_1_System_Object_ * objects));
IL2CPP_REGISTER_METHOD(0x01CD6390, String *, ToString, (IndexedBranchInstruction * __this));
}
