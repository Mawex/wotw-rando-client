#include <interception_macros.h>

namespace app::methods::ChangeDetectorApproxFloat {
IL2CPP_REGISTER_METHOD(0x006D39E0, void, __ctor, (ChangeDetectorApproxFloat * __this, float epsilon, float lastValue));
IL2CPP_REGISTER_METHOD(0x010457B0, bool, CheckValueChanged, (ChangeDetectorApproxFloat * __this, float t));
}
