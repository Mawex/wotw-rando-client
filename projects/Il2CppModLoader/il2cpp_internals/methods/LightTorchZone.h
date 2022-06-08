#include <interception_macros.h>

namespace app::methods::LightTorchZone {
IL2CPP_REGISTER_METHOD(0x00FA2CA0, void, Awake, (LightTorchZone * __this));
IL2CPP_REGISTER_METHOD(0x00FA2D30, void, OnDestroy, (LightTorchZone * __this));
IL2CPP_REGISTER_METHOD(0x00FA2DB0, bool, IsInside, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (LightTorchZone * __this));
}
