using namespace app;

namespace app::methods::Moon::Timeline::TransparencyTweenAnimator {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (TransparencyTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D10DB0, GameObject *, get_ExternalTarget, (TransparencyTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D10E40, void, OnStartPlayback, (TransparencyTweenAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D11170, void, SetupInitialValues, (TransparencyTweenAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04753D20, TransparencyTweenAnimator_SetupInitialValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (TransparencyTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (TransparencyTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D11440, void, OnUpdateEntity, (TransparencyTweenAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00D11820, bool, get_ShouldUpdateWhileDisabled, (TransparencyTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x006B8960, bool, HasFinished, (TransparencyTweenAnimator * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x002FBBC0, MoonReference_1_UnityEngine_GameObject_ *, GetGameObjectTarget, (TransparencyTweenAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D11930, float, GetTweenNormalizedValue, (TransparencyTweenAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x0474C548, TransparencyTweenAnimator_GetTweenNormalizedValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D11980, void, SynchronizeData, (TransparencyTweenAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x00D11C00, void, SynchronizePad, (TransparencyTweenAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x00D11D80, bool, ApproximateEvent, (TransparencyTweenAnimator * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x00D11FB0, void, __ctor, (TransparencyTweenAnimator * __this));
}
