#include <interception_macros.h>

namespace app::methods::Moon_Timeline::UberShaderVectorAnimator {
IL2CPP_REGISTER_METHOD(0x00D1AEB0, GameObject *, get_EffectiveTarget, (app::UberShaderVectorAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::UberShaderVectorAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D1AF70, bool, get_ShouldMaskValue, (app::UberShaderVectorAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC80, Renderer__Array *, get_Entries, (app::UberShaderVectorAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D1AFA0, void, OnStartPlayback, (app::UberShaderVectorAnimator * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00D1AFC0, void, PopulateTargets, (app::UberShaderVectorAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D1B160, void, OnUpdateEntity, (app::UberShaderVectorAnimator * this_ptr, float delta_time));
IL2CPP_REGISTER_METHOD(0x00D1B190, void, SetTime, (app::UberShaderVectorAnimator * this_ptr, float time));
IL2CPP_REGISTER_METHOD(0x00D1B430, String__Array *, GetCustomNames, (app::UberShaderVectorAnimator_VectorProperty__Enum property));
IL2CPP_REGISTER_METHOD(0x00D1B6F0, void, SynchronizePad, (app::UberShaderVectorAnimator * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record, app::TimelineEntity * entity, app::Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x00D1B8E0, void, __ctor, (app::UberShaderVectorAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D1B9D0, void, __cctor, ());
}
