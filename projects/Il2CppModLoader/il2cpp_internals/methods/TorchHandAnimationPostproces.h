using namespace app;

namespace app::methods::TorchHandAnimationPostproces {
IL2CPP_REGISTER_METHOD(0x00651560, int32_t, get_Order, (TorchHandAnimationPostproces * __this));
IL2CPP_REGISTER_METHOD(0x00AFFB90, void, OnAddedToAnimator, (TorchHandAnimationPostproces * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x00AFFCF0, void, OnRemovedFromAnimator, (TorchHandAnimationPostproces * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x00AFFD40, void, OnDeactivated, (TorchHandAnimationPostproces * __this));
IL2CPP_REGISTER_METHOD(0x00AFFD70, void, Process, (TorchHandAnimationPostproces * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00B00550, void, LateUpdate, (TorchHandAnimationPostproces * __this));
IL2CPP_REGISTER_METHOD(0x00B005F0, int32_t, GetFacingDirection, (TorchHandAnimationPostproces * __this));
IL2CPP_REGISTER_METHOD(0x00B006B0, void, __ctor, (TorchHandAnimationPostproces * __this));
}
