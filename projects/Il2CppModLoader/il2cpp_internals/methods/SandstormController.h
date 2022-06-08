using namespace app;

namespace app::methods::SandstormController {
IL2CPP_REGISTER_METHOD(0x002FB990, SandstormController *, get_Instance, (SandstormController * __this));
IL2CPP_REGISTER_METHOD(0x00C28840, void, Awake, (SandstormController * __this));
IL2CPP_REGISTER_METHOD(0x00C28920, void, FixedUpdate, (SandstormController * __this));
IL2CPP_REGISTER_METHODINFO(0x0475C978, SandstormController_FixedUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C28FA0, bool, get_ShouldApplySandstorm, (SandstormController * __this));
IL2CPP_REGISTER_METHOD(0x00C291E0, void, ChangeState, (SandstormController * __this, SandstormController_State__Enum newState));
IL2CPP_REGISTER_METHODINFO(0x0476CCB0, SandstormController_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C292D0, bool, get_SeinInSandstorm, (SandstormController * __this));
IL2CPP_REGISTER_METHOD(0x00C29440, bool, PointInsideSandstorm, (SandstormController * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SandstormController * __this));
}
