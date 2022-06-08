using namespace app;

namespace app::methods::LandOnLogic {
IL2CPP_REGISTER_METHOD(0x002FB9D0, IMoonSetupAnimator *, get_MoonSetupAnimator, (LandOnLogic * __this));
IL2CPP_REGISTER_METHOD(0x00F01E50, void, set_MoonSetupAnimator, (LandOnLogic * __this, IMoonSetupAnimator * value));
IL2CPP_REGISTER_METHOD(0x00F01F20, void, Awake, (LandOnLogic * __this));
IL2CPP_REGISTER_METHOD(0x00F02250, void, OnCheckpointRestore, (LandOnLogic * __this));
IL2CPP_REGISTER_METHODINFO(0x04728548, LandOnLogic_OnCheckpointRestore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F02260, void, OnDestroy, (LandOnLogic * __this));
IL2CPP_REGISTER_METHOD(0x00F02400, void, OnEnable, (LandOnLogic * __this));
IL2CPP_REGISTER_METHOD(0x00F024A0, void, OnDisable, (LandOnLogic * __this));
IL2CPP_REGISTER_METHOD(0x00F02540, void, ChangeState, (LandOnLogic * __this, LandOnState__Enum newState));
IL2CPP_REGISTER_METHOD(0x00F02630, bool, get_IsOnScreen, (LandOnLogic * __this));
IL2CPP_REGISTER_METHOD(0x00F02860, void, Break, (LandOnLogic * __this, GameObject * target, Vector2 direction));
IL2CPP_REGISTER_METHODINFO(0x0476E378, LandOnLogic_Break__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F02910, void, OnFixedUpdate, (LandOnLogic * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00F02980, void, __ctor, (LandOnLogic * __this));
}
