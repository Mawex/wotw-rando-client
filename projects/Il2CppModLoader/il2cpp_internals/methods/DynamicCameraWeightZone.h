#include <interception_macros.h>

namespace app::methods::DynamicCameraWeightZone {
IL2CPP_REGISTER_METHOD(0x00BE9CE0, float, GetWeight, (Vector3 primaryTargetPosition));
IL2CPP_REGISTER_METHOD(0x00BE9FD0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00BEA0A0, void, OnEnable, (DynamicCameraWeightZone * __this));
IL2CPP_REGISTER_METHOD(0x00BEA160, void, OnDisable, (DynamicCameraWeightZone * __this));
IL2CPP_REGISTER_METHOD(0x00BEA240, void, OnDestroy, (DynamicCameraWeightZone * __this));
IL2CPP_REGISTER_METHOD(0x00BEA320, Rect, get_Bounds, (DynamicCameraWeightZone * __this));
IL2CPP_REGISTER_METHOD(0x00BEA670, void, set_Bounds, (DynamicCameraWeightZone * __this, Rect value));
IL2CPP_REGISTER_METHOD(0x00BEA910, void, __ctor, (DynamicCameraWeightZone * __this));
IL2CPP_REGISTER_METHOD(0x00BEA940, void, __cctor, ());
}
