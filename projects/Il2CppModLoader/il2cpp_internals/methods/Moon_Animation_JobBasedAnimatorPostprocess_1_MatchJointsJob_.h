using namespace app;

namespace app::methods::Moon::Animation::JobBasedAnimatorPostprocess_1_MatchJointsJob_ {
IL2CPP_REGISTER_METHOD(0x019FC330, void, __ctor, (JobBasedAnimatorPostprocess_1_MatchJointsJob_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04723078, JobBasedAnimatorPostprocess_1_MatchJointsJob___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019FBED0, bool, get_IsActive, (JobBasedAnimatorPostprocess_1_MatchJointsJob_ * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAllowed, (JobBasedAnimatorPostprocess_1_MatchJointsJob_ * __this));
IL2CPP_REGISTER_METHOD(0x019FBF70, Playable, ConstructPlayable, (JobBasedAnimatorPostprocess_1_MatchJointsJob_ * __this, PlayableGraph playableGraph));
IL2CPP_REGISTER_METHOD(0x019FBAE0, void, AddToAnimator, (JobBasedAnimatorPostprocess_1_MatchJointsJob_ * __this, MoonAnimator * animator, float blendInDuration));
IL2CPP_REGISTER_METHOD(0x019FBB10, void, RemoveFromAnimator, (JobBasedAnimatorPostprocess_1_MatchJointsJob_ * __this, float blendOutDuration));
IL2CPP_REGISTER_METHOD(0x019FBB40, void, OnAddedToAnimator, (JobBasedAnimatorPostprocess_1_MatchJointsJob_ * __this, MoonAnimator * animator, Playable playable));
IL2CPP_REGISTER_METHOD(0x019FBB60, void, OnRemovedFromAnimator, (JobBasedAnimatorPostprocess_1_MatchJointsJob_ * __this));
IL2CPP_REGISTER_METHOD(0x019FC0A0, void, UpdateAnimatorPostprocessData, (JobBasedAnimatorPostprocess_1_MatchJointsJob_ * __this, Playable playable, AnimatorPostprocessUpdateData updateData));
IL2CPP_REGISTER_METHOD(0x019FBE10, void, OnDestroy, (JobBasedAnimatorPostprocess_1_MatchJointsJob_ * __this));
}
