#include <interception_macros.h>

namespace app::methods::LegacyWaitForInput {
IL2CPP_REGISTER_METHOD(0x01131720, Func_2_IContext_Boolean_ *, get_CodeCondition, (app::LegacyWaitForInput * this_ptr));
IL2CPP_REGISTER_METHOD(0x01131880, bool, Validate, (app::LegacyWaitForInput * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04790690, LegacyWaitForInput_Validate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008C5A70, void, __ctor, (app::LegacyWaitForInput * this_ptr));
}
