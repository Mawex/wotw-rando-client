#include <interception_macros.h>

namespace app::methods::frameworks::Switch::ControllerVibrationSetting {
IL2CPP_REGISTER_METHOD(0x001215B0, bool, Equals, (ControllerVibrationSetting__Boxed * __this, ControllerVibrationSetting other));
IL2CPP_REGISTER_METHOD(0x001215D0, bool, Equals, (ControllerVibrationSetting__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001216B0, int32_t, GetHashCode, (ControllerVibrationSetting__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00121740, void, __ctor, (ControllerVibrationSetting__Boxed * __this, float left, float right, float leftTrigger, float rightTrigger));
IL2CPP_REGISTER_METHOD(0x00121760, String *, ToString, (ControllerVibrationSetting__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00F59F50, bool, operator___, (ControllerVibrationSetting a, ControllerVibrationSetting b));
IL2CPP_REGISTER_METHOD(0x00F59F70, bool, operator___, (ControllerVibrationSetting a, ControllerVibrationSetting b));
IL2CPP_REGISTER_METHOD(0x00F59F90, void, __cctor, ());
}
