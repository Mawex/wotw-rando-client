using namespace app;

namespace app::methods::UberBrightnessContrastAnimator {
IL2CPP_REGISTER_METHOD(0x013E41D0, float, get_Weight, (UberBrightnessContrastAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E4250, void, OnUpdateEntity, (UberBrightnessContrastAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x013E4270, void, OnStartPlayback, (UberBrightnessContrastAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x013E4340, void, OnStopPlayback, (UberBrightnessContrastAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E4340, void, OnDisable, (UberBrightnessContrastAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E4350, void, OnStartWhenPlaybackOrPreview, (UberBrightnessContrastAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E4410, void, OnStopWhenPlaybackOrPreview, (UberBrightnessContrastAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00623270, void, UpdateAtTime, (UberBrightnessContrastAnimator * __this, float timeValue));
IL2CPP_REGISTER_METHOD(0x013E44D0, void, __ctor, (UberBrightnessContrastAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E4730, void, __cctor, (MethodInfo * method));
}
