#include <interception_macros.h>

namespace app::methods::LegacyWaitForTrigger {
IL2CPP_REGISTER_METHOD(0x011318A0, Rect, get_Bounds, (LegacyWaitForTrigger * __this));
IL2CPP_REGISTER_METHOD(0x01131A70, Func_2_IContext_Boolean_ *, get_CodeCondition, (LegacyWaitForTrigger * __this));
IL2CPP_REGISTER_METHOD(0x01131BD0, bool, Validate, (LegacyWaitForTrigger * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x0471D2F0, LegacyWaitForTrigger_Validate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01131BE0, bool, get_IsInside, (LegacyWaitForTrigger * __this));
IL2CPP_REGISTER_METHOD(0x008C5A70, void, __ctor, (LegacyWaitForTrigger * __this));
}
