using namespace app;

namespace app::methods::RotatingObstacleLogic {
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (RotatingObstacleLogic * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (RotatingObstacleLogic * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC830, SuspendableMask__Enum, get_Mask, (RotatingObstacleLogic * __this));
IL2CPP_REGISTER_METHOD(0x0136F5F0, void, set_Mask, (RotatingObstacleLogic * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, IMoonSetupAnimator *, get_MoonSetupAnimator, (RotatingObstacleLogic * __this));
IL2CPP_REGISTER_METHOD(0x0136F6A0, void, set_MoonSetupAnimator, (RotatingObstacleLogic * __this, IMoonSetupAnimator * value));
IL2CPP_REGISTER_METHOD(0x0136F770, void, Awake, (RotatingObstacleLogic * __this));
IL2CPP_REGISTER_METHOD(0x0136F810, void, OnDestroy, (RotatingObstacleLogic * __this));
IL2CPP_REGISTER_METHOD(0x0136F8B0, void, FixedUpdate, (RotatingObstacleLogic * __this));
IL2CPP_REGISTER_METHOD(0x0136FAC0, void, __ctor, (RotatingObstacleLogic * __this));
}
