using namespace app;

namespace app::methods::DefaultCameraTargetsProvider {
IL2CPP_REGISTER_METHOD(0x0040F3B0, void, UpdateTargets, (DefaultCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x00B7F1A0, List_1_Moon_CameraTargetSettings_ *, GetTargets, (DefaultCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x00B7F3F0, Vector3, GetOriGroundPosition, (DefaultCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x00B7F4F0, bool, GetPos, (DefaultCameraTargetsProvider * __this, DefaultCameraProviderEntry * entry, Vector3 * pos));
IL2CPP_REGISTER_METHOD(0x00B7F790, void, __ctor, (DefaultCameraTargetsProvider * __this));
}
