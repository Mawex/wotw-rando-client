#include <interception_macros.h>

namespace app::methods::LegacyHealthBar {
IL2CPP_REGISTER_METHOD(0x00A26FE0, float, get_Value, (LegacyHealthBar * __this));
IL2CPP_REGISTER_METHOD(0x00A27010, void, Awake, (LegacyHealthBar * __this));
IL2CPP_REGISTER_METHOD(0x00A27210, void, ValidateAssignReferences, (LegacyHealthBar * __this));
IL2CPP_REGISTER_METHOD(0x00A27610, void, OnDestroy, (LegacyHealthBar * __this));
IL2CPP_REGISTER_METHOD(0x00A277B0, void, ResetHealthBar, (LegacyHealthBar * __this));
IL2CPP_REGISTER_METHODINFO(0x0476EAC0, LegacyHealthBar_ResetHealthBar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A27850, void, Start, (LegacyHealthBar * __this));
IL2CPP_REGISTER_METHOD(0x00A27A10, void, FixedUpdate, (LegacyHealthBar * __this));
IL2CPP_REGISTER_METHOD(0x00A28080, void, UpdateVisuals, (LegacyHealthBar * __this));
IL2CPP_REGISTER_METHOD(0x00A28280, void, LateUpdate, (LegacyHealthBar * __this));
IL2CPP_REGISTER_METHOD(0x00A283B0, void, __ctor, (LegacyHealthBar * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDisableOnRecordablePreview_get_gameObject, (LegacyHealthBar * __this));
}
