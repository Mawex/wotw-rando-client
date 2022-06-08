#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::BranchLabel {
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_LabelIndex, (BranchLabel * __this));
IL2CPP_REGISTER_METHOD(0x002FB980, void, set_LabelIndex, (BranchLabel * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x022D65A0, bool, get_HasRuntimeLabel, (BranchLabel * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_TargetIndex, (BranchLabel * __this));
IL2CPP_REGISTER_METHOD(0x022D65B0, RuntimeLabel, ToRuntimeLabel, (BranchLabel * __this));
IL2CPP_REGISTER_METHOD(0x022D65D0, void, Mark, (BranchLabel * __this, InstructionList * instructions));
IL2CPP_REGISTER_METHOD(0x022D67D0, void, AddBranch, (BranchLabel * __this, InstructionList * instructions, int32_t branchIndex));
IL2CPP_REGISTER_METHOD(0x022D6AA0, void, FixupBranch, (BranchLabel * __this, InstructionList * instructions, int32_t branchIndex));
IL2CPP_REGISTER_METHOD(0x022D6AD0, void, __ctor, (BranchLabel * __this));
}
