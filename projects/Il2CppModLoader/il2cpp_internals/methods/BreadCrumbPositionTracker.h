#include <interception_macros.h>

namespace app::methods::BreadCrumbPositionTracker {
IL2CPP_REGISTER_METHOD(0x00D4A100, bool, get_HasPath, (BreadCrumbPositionTracker * __this));
IL2CPP_REGISTER_METHOD(0x00D4A190, void, __ctor, (BreadCrumbPositionTracker * __this, float trackInterval, float pointLifetime));
IL2CPP_REGISTER_METHOD(0x00D4A3D0, void, UpdateTracking, (BreadCrumbPositionTracker * __this, Vector2 target, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00D4A6E0, void, TrackTarget, (BreadCrumbPositionTracker * __this, Vector2 target));
IL2CPP_REGISTER_METHOD(0x00D4A800, void, Clear, (BreadCrumbPositionTracker * __this));
IL2CPP_REGISTER_METHOD(0x00D4A8B0, void, Reset, (BreadCrumbPositionTracker * __this, float trackInterval, float pointLifetime));
IL2CPP_REGISTER_METHOD(0x00D4A990, Vector2, GetCurrentTrackedPoint, (BreadCrumbPositionTracker * __this));
IL2CPP_REGISTER_METHOD(0x00D4AA40, Vector2, GetNextTrackedPoint, (BreadCrumbPositionTracker * __this));
IL2CPP_REGISTER_METHOD(0x00D4AAF0, void, UseCurrentTrackedPoint, (BreadCrumbPositionTracker * __this));
IL2CPP_REGISTER_METHOD(0x00D4AC10, void, ResetKillTimer, (BreadCrumbPositionTracker * __this));
IL2CPP_REGISTER_METHOD(0x00D4AC20, void, DrawGizmos, (BreadCrumbPositionTracker * __this));
}
