using namespace app;

namespace app::methods::Moon::Timeline::CameraShakeAnimator {
IL2CPP_REGISTER_METHOD(0x010C8C60, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x010C8D30, void, set_ExternalStrenghtMultiplier, (CameraShakeAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x0064D970, void, set_ExternalSpeedMultiplier, (CameraShakeAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x010C8D40, float, get_ModifiedStrength, (CameraShakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C92B0, Vector3, get_CurrentOffset, (CameraShakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C9480, Vector3, get_CurrentRotation, (CameraShakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_ProcessShakeInEditor, (CameraShakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x006DC040, void, set_ProcessShakeInEditor, (CameraShakeAnimator * __this, bool value));
IL2CPP_REGISTER_METHOD(0x010C9650, Transform *, get_EffectiveShakeLocation, (CameraShakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C9720, float, get_EffectiveDuration, (CameraShakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C9820, float, get_EffectiveSpeed, (CameraShakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00AC93D0, void, OnPoolSpawned, (CameraShakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (CameraShakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C9830, void, OnDestroy, (CameraShakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C9920, void, OnStartPlayback, (CameraShakeAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010C9AA0, void, OnUpdateEntity, (CameraShakeAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x010C9AD0, void, SetCurrentShakeTime, (CameraShakeAnimator * __this, float time));
IL2CPP_REGISTER_METHOD(0x010C9AF0, void, OnEnable, (CameraShakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C9C20, void, OnDisable, (CameraShakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C9D00, void, OnValidate, (CameraShakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C9DD0, void, SynchronizeData, (CameraShakeAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x010C9F40, bool, ApproximateEvent, (CameraShakeAnimator * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x010CA020, void, __ctor, (CameraShakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010CA120, void, __cctor, (MethodInfo * method));
}
