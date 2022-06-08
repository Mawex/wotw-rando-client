#include <interception_macros.h>

namespace app::methods::PickupOrbSystem {
IL2CPP_REGISTER_METHOD(0x01159E50, PickupOrbSystem *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x01159EF0, void, set_Instance, (PickupOrbSystem * value));
IL2CPP_REGISTER_METHOD(0x01159FA0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x0115A110, void, Awake, (PickupOrbSystem * __this));
IL2CPP_REGISTER_METHOD(0x0115A1B0, void, OnDestroy, (PickupOrbSystem * __this));
IL2CPP_REGISTER_METHOD(0x0115A240, void, Register, (StretchGameObject * stretchTarget));
IL2CPP_REGISTER_METHOD(0x0115A300, void, Unregister, (StretchGameObject * stretchTarget));
IL2CPP_REGISTER_METHOD(0x0115A3C0, void, Register, (DropPickup * dropPickup));
IL2CPP_REGISTER_METHOD(0x0115A480, void, Unregister, (DropPickup * dropPickup));
IL2CPP_REGISTER_METHOD(0x0115A540, void, Register, (PickupBase * pickup));
IL2CPP_REGISTER_METHOD(0x0115AAF0, void, Unregister, (PickupBase * pickup));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ScheduleJob, (PickupOrbSystem * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x0115AE20, void, FixedUpdate, (PickupOrbSystem * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (PickupOrbSystem * __this));
IL2CPP_REGISTER_METHOD(0x0115BCA0, void, __cctor, ());
}
