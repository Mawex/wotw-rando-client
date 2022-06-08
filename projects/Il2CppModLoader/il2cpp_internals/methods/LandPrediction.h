#include <interception_macros.h>

namespace app::methods::LandPrediction {
IL2CPP_REGISTER_METHOD(0x006142D0, bool, get_GroundDetected, (LandPrediction * __this));
IL2CPP_REGISTER_METHOD(0x006142E0, void, set_GroundDetected, (LandPrediction * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F02D60, RaycastHit, get_Hit, (LandPrediction * __this));
IL2CPP_REGISTER_METHOD(0x00F02D90, void, Init, (LandPrediction * __this, Action_1_UnityEngine_RaycastHit_ * onGroundDetectionAction, PlatformMovement * plataformMovement));
IL2CPP_REGISTER_METHOD(0x00F02E30, void, Step, (LandPrediction * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LandPrediction * __this));
}
