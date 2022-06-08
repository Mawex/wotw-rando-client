#include <interception_macros.h>

namespace app::methods::TriggerBasedRubberBanding {
IL2CPP_REGISTER_METHOD(0x00B125C0, bool, IsEnabled, (TriggerBasedRubberBanding * __this));
IL2CPP_REGISTER_METHOD(0x00B12750, float, GetValue, (TriggerBasedRubberBanding * __this, Vector3 origin, Vector3 target));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TriggerBasedRubberBanding * __this));
}
