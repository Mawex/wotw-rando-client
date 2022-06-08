#include <interception_macros.h>

namespace app::methods::Moon::Timeline::TransparencyAnimator {
IL2CPP_REGISTER_METHOD(0x00D0BB50, GameObject *, get_ExternalTarget, (TransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBCA0, List_1_UnityEngine_Transform_ *, get_EarlyZTransforms, (TransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D0BBE0, void, OnStartPlayback, (TransparencyAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D0BC20, void, OnPoolSpawned, (TransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D0BC30, void, OnPoolPrewarm, (TransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D0BC40, void, Init, (TransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (TransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (TransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D0C1F0, void, OnUpdateEntity, (TransparencyAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00D0C310, int32_t, get_RenderersCount, (TransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D0C3A0, void, SetTime, (TransparencyAnimator * __this, float time));
IL2CPP_REGISTER_METHOD(0x00D0C7B0, void, UpdateEarlyZMesh, (TransparencyAnimator * __this, float alpha));
IL2CPP_REGISTER_METHOD(0x00D0C920, void, GetManagedEarlyZDynamicGraphicTargets, (TransparencyAnimator * __this, List_1_UnityEngine_GameObject_ * targets));
IL2CPP_REGISTER_METHOD(0x00D0CB30, void, OnEarlyZBuilt, (TransparencyAnimator * __this, Transform * earlyZTransform, GameObject * target));
IL2CPP_REGISTER_METHOD(0x00D0CBD0, bool, get_ShouldUpdateWhileDisabled, (TransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D0CCE0, void, SynchronizePad, (TransparencyAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (TransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D0CF00, void, __ctor, (TransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D0D180, void, __cctor, ());
}
