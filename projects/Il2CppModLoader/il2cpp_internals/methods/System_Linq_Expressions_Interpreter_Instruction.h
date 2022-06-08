using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::Instruction {
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ConsumedStack, (Instruction * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ProducedStack, (Instruction * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ConsumedContinuations, (Instruction * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ProducedContinuations, (Instruction * __this));
IL2CPP_REGISTER_METHOD(0x01CD79A0, int32_t, get_StackBalance, (Instruction * __this));
IL2CPP_REGISTER_METHOD(0x01CD79F0, int32_t, get_ContinuationsBalance, (Instruction * __this));
IL2CPP_REGISTER_METHOD(0x01CD7A40, String *, ToString, (Instruction * __this));
IL2CPP_REGISTER_METHOD(0x01742A00, String *, ToDebugString, (Instruction * __this, int32_t instructionIndex, Object * cookie, Func_2_Int32_Int32_ * labelIndexer, IReadOnlyList_1_System_Object_ * objects));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, NullCheck, (Object * o));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Instruction * __this));
}
