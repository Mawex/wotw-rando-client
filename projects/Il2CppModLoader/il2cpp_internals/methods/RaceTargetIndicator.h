#include <interception_macros.h>

namespace app::methods::RaceTargetIndicator {
IL2CPP_REGISTER_METHOD(0x00723E70, bool, get_AllowIndicator, (RaceTargetIndicator * __this));
IL2CPP_REGISTER_METHOD(0x00723F10, Vector3, get_TargetPositon, (RaceTargetIndicator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_RotateIndicator, (RaceTargetIndicator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ScaleByDistance, (RaceTargetIndicator * __this));
IL2CPP_REGISTER_METHOD(0x00723FF0, void, __ctor, (RaceTargetIndicator * __this));
}
