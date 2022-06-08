#include <interception_macros.h>

namespace app::methods::Moon::Timeline::RigidbodyTranslationAnimatorEntity {
IL2CPP_REGISTER_METHOD(0x00417920, UpdateCategory__Enum, get_UpdateCategory, (RigidbodyTranslationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00780E20, GameObject *, get_ExternalTarget, (RigidbodyTranslationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (RigidbodyTranslationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00780ED0, void, OnStartPlayback, (RigidbodyTranslationAnimatorEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00780FC0, Rigidbody *, get_EffectiveBody, (RigidbodyTranslationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00781060, void, SetupInitialValues, (RigidbodyTranslationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x007811E0, void, OnUpdateEntity, (RigidbodyTranslationAnimatorEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00781210, void, OnStartTimelineSample, (RigidbodyTranslationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00781240, void, OnTimelineSample, (RigidbodyTranslationAnimatorEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x00781340, float, GetAnimationCurveDuration, (RigidbodyTranslationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x007813F0, Vector3, GetPosition, (RigidbodyTranslationAnimatorEntity * __this, float time));
IL2CPP_REGISTER_METHOD(0x00781670, Vector3, EffectiveTranslation, (RigidbodyTranslationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x007816C0, void, OnDrawGizmos, (RigidbodyTranslationAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00781970, void, __ctor, (RigidbodyTranslationAnimatorEntity * __this));
}
