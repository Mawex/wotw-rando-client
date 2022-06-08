using namespace app;

namespace app::methods::SpringLogic {
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonSetupAnimator *, get_MoonSetupAnimator, (SpringLogic * __this));
IL2CPP_REGISTER_METHOD(0x009A6C30, void, set_MoonSetupAnimator, (SpringLogic * __this, IMoonSetupAnimator * value));
IL2CPP_REGISTER_METHOD(0x009A6D00, void, Awake, (SpringLogic * __this));
IL2CPP_REGISTER_METHOD(0x009A7020, void, OnCheckpointRestore, (SpringLogic * __this));
IL2CPP_REGISTER_METHODINFO(0x0473A550, SpringLogic_OnCheckpointRestore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009A7040, void, OnDestroy, (SpringLogic * __this));
IL2CPP_REGISTER_METHOD(0x009A71E0, void, JumpedOn, (SpringLogic * __this, GameObject * target, Vector2 direction, bool isGrenade));
IL2CPP_REGISTER_METHODINFO(0x04777BA0, SpringLogic_JumpedOn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009A75B0, void, Execute, (GameObject * target, Vector2 direction, float height, float stopDecelerationMultiplier));
IL2CPP_REGISTER_METHOD(0x009A7860, void, SpringSein, (Vector2 direction, float height, float stopDecelerationMultiplier));
IL2CPP_REGISTER_METHOD(0x009A7E50, void, SpringKu, (Vector2 direction, float height, float stopDecelerationMultiplier));
IL2CPP_REGISTER_METHOD(0x009A8220, void, __ctor, (SpringLogic * __this));
}
