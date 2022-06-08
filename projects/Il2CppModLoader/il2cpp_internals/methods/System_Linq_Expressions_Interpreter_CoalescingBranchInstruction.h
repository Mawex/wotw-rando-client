using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::CoalescingBranchInstruction {
IL2CPP_REGISTER_METHOD(0x022D9E60, Instruction__Array *, get_Cache, (CoalescingBranchInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D9F20, String *, get_InstructionName, (CoalescingBranchInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (CoalescingBranchInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (CoalescingBranchInstruction * __this));
IL2CPP_REGISTER_METHOD(0x022D9FA0, int32_t, Run, (CoalescingBranchInstruction * __this, InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x01834240, void, __ctor, (CoalescingBranchInstruction * __this));
}
