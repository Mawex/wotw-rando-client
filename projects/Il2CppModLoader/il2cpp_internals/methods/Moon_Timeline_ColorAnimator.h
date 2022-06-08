#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ColorAnimator {
IL2CPP_REGISTER_METHOD(0x0075FB80, GameObject *, get_EffectiveTarget, (ColorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (ColorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0075FC40, GameObject *, get_ExternalTarget, (ColorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (ColorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0075FCD0, Renderer *, get_EffectiveRenderer, (ColorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0075FDC0, Color, get_ColorMask, (ColorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBC80, Renderer__Array *, get_Entries, (ColorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0075FE20, void, OnStartPlayback, (ColorAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0075FE40, void, PopulateTargets, (ColorAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0075FFF0, void, OnUpdateEntity, (ColorAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00760020, void, SetTime, (ColorAnimator * __this, float time));
IL2CPP_REGISTER_METHOD(0x00760290, void, SynchronizePad, (ColorAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x007604B0, void, __ctor, (ColorAnimator * __this));
}
