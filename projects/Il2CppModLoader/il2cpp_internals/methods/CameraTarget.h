#include <interception_macros.h>

namespace app::methods::CameraTarget {
IL2CPP_REGISTER_METHOD(0x00B203E0, void, __ctor, (CameraTarget * __this, GameplayCamera * gameplayGameplayCamera));
IL2CPP_REGISTER_METHOD(0x00B20740, CameraTarget_TargetLayer *, get_BaseTargetLayer, (CameraTarget * __this));
IL2CPP_REGISTER_METHOD(0x00B207E0, CameraTarget_TargetLayer *, AddTargetLayer, (CameraTarget * __this, Transform * target, float weight, bool followX, bool followY, bool followZ));
IL2CPP_REGISTER_METHOD(0x00B20990, void, RemoveTargetLayer, (CameraTarget * __this, CameraTarget_TargetLayer * targetLayer));
IL2CPP_REGISTER_METHOD(0x00B20A30, void, SetTargetPosition, (CameraTarget * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00B20A70, void, UpdateTargetPosition, (CameraTarget * __this));
}
