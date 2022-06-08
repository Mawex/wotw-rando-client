#include <interception_macros.h>

namespace app::methods::TargetSpheres {
IL2CPP_REGISTER_METHOD(0x00CE3830, TargetSpheres_Sphere *, GetRandomSphereFromClosestGroup, (TargetSpheres * __this, Transform * transform, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00CE3CE0, bool, IsInSphere, (TargetSpheres * __this, Transform * transform, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00CE4110, bool, IsInSphereFuture, (TargetSpheres * __this, Transform * transform, Vector3 position, Vector3 sphereVel, float maxFutureTime));
IL2CPP_REGISTER_METHOD(0x00CE45A0, void, __ctor, (TargetSpheres * __this));
}
