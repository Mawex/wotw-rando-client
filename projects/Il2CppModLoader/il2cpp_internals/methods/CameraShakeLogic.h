#include <interception_macros.h>

namespace app::methods::CameraShakeLogic {
IL2CPP_REGISTER_METHOD(0x00B1D790, void, Awake, (CameraShakeLogic * __this));
IL2CPP_REGISTER_METHOD(0x00B1D830, void, OnDestroy, (CameraShakeLogic * __this));
IL2CPP_REGISTER_METHOD(0x00B1D8D0, void, UpdateOffset, (CameraShakeLogic * __this));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (CameraShakeLogic * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (CameraShakeLogic * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC830, SuspendableMask__Enum, get_Mask, (CameraShakeLogic * __this));
IL2CPP_REGISTER_METHOD(0x00B1DF40, void, set_Mask, (CameraShakeLogic * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00856B30, void, __ctor, (CameraShakeLogic * __this));
IL2CPP_REGISTER_METHOD(0x00B1DFF0, void, __cctor, ());
}
