using namespace app;

namespace app::methods::Moon::Timeline::ColorTweenAnimator {
IL2CPP_REGISTER_METHOD(0x007620B0, GameObject *, get_ExternalTarget, (ColorTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (ColorTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FF8B0, UberShaderProperty_Color__Enum, get_ColorUberShaderProperty, (ColorTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (ColorTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00762140, Color, get_CurrentColor, (ColorTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00762210, Renderer *, get_EffectiveRenderer, (ColorTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00762330, void, OnStartPlayback, (ColorTweenAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00762340, void, SetupInitialValues, (ColorTweenAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04727630, ColorTweenAnimator_SetupInitialValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007624D0, void, OnUpdateEntity, (ColorTweenAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00762910, bool, HasFinished, (ColorTweenAnimator * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x002FBBC0, MoonReference_1_UnityEngine_GameObject_ *, GetGameObjectTarget, (ColorTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00762920, void, SynchronizeData, (ColorTweenAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x00762C20, void, SynchronizePad, (ColorTweenAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x00762D10, void, __ctor, (ColorTweenAnimator * __this));
}
