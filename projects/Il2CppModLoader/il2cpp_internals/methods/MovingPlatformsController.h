using namespace app;

namespace app::methods::MovingPlatformsController {
IL2CPP_REGISTER_METHOD(0x002FB960, void, __ctor, (MovingPlatformsController * __this, PlatformMovement * platformMovement));
IL2CPP_REGISTER_METHOD(0x008704E0, void, DetachFromAll, (MovingPlatformsController * __this));
IL2CPP_REGISTER_METHOD(0x00870520, void, UpdateMovingPlatform, (MovingPlatformsController * __this, CharacterPlatformMovement * characterPlatformMovement));
IL2CPP_REGISTER_METHOD(0x008720C0, void, OnGroundMovingPlatform, (MovingPlatformsController * __this, Transform * platform));
IL2CPP_REGISTER_METHOD(0x00872270, void, OnCeilingMovingPlatform, (MovingPlatformsController * __this, Transform * platform));
IL2CPP_REGISTER_METHOD(0x00872440, void, OnWallLeftMovingPlatform, (MovingPlatformsController * __this, Transform * platform));
IL2CPP_REGISTER_METHOD(0x00872610, void, OnWallRightMovingPlatform, (MovingPlatformsController * __this, Transform * platform));
IL2CPP_REGISTER_METHOD(0x008727E0, void, MoveWithThePlatformWhileSuspended, (MovingPlatformsController * __this, float platformMoveThreshold));
}
