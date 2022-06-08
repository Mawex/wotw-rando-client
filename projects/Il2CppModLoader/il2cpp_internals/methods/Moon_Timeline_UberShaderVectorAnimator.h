using namespace app;

namespace app::methods::Moon::Timeline::UberShaderVectorAnimator {
IL2CPP_REGISTER_METHOD(0x00D1AEB0, GameObject *, get_EffectiveTarget, (UberShaderVectorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (UberShaderVectorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D1AF70, bool, get_ShouldMaskValue, (UberShaderVectorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBC80, Renderer__Array *, get_Entries, (UberShaderVectorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D1AFA0, void, OnStartPlayback, (UberShaderVectorAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D1AFC0, void, PopulateTargets, (UberShaderVectorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D1B160, void, OnUpdateEntity, (UberShaderVectorAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00D1B190, void, SetTime, (UberShaderVectorAnimator * __this, float time));
IL2CPP_REGISTER_METHOD(0x00D1B430, String__Array *, GetCustomNames, (UberShaderVectorAnimator_VectorProperty__Enum property));
IL2CPP_REGISTER_METHOD(0x00D1B6F0, void, SynchronizePad, (UberShaderVectorAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x00D1B8E0, void, __ctor, (UberShaderVectorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D1B9D0, void, __cctor, (MethodInfo * method));
}
