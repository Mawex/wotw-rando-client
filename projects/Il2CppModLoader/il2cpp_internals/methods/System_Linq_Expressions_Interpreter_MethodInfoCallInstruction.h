using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction {
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ArgumentCount, (MethodInfoCallInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00CC8D50, void, __ctor, (MethodInfoCallInstruction * __this, MethodInfo_1 * target, int32_t argumentCount));
IL2CPP_REGISTER_METHOD(0x023FBA40, int32_t, get_ProducedStack, (MethodInfoCallInstruction * __this));
IL2CPP_REGISTER_METHOD(0x023FBB20, int32_t, Run, (MethodInfoCallInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHODINFO(0x0478FA20, MethodInfoCallInstruction_Run__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023FBE10, Object__Array *, GetArgs, (MethodInfoCallInstruction * __this, InterpretedFrame * frame, int32_t first, int32_t skip));
IL2CPP_REGISTER_METHOD(0x023FBF80, String *, ToString, (MethodInfoCallInstruction * __this));
}
