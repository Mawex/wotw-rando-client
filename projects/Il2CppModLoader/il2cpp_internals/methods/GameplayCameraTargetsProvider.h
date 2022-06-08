using namespace app;

namespace app::methods::GameplayCameraTargetsProvider {
IL2CPP_REGISTER_METHOD(0x0040F160, void, Awake, (GameplayCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0040F2E0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0040F3B0, void, UpdateTargets, (GameplayCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0040F4B0, void, Register, (ICameraTarget * target));
IL2CPP_REGISTER_METHOD(0x0040F5E0, void, Unregister, (ICameraTarget * target));
IL2CPP_REGISTER_METHOD(0x0040F6C0, List_1_Moon_CameraTargetSettings_ *, GetTargets, (GameplayCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0040FF50, Vector3, GetOriGroundPosition, (GameplayCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x00410050, Vector3, GetPos, (GameplayCameraTargetsProvider * __this, GameplayCameraTargetEntry entry));
IL2CPP_REGISTER_METHOD(0x00410280, void, __ctor, (GameplayCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x004107A0, void, __cctor, (MethodInfo * method));
}
