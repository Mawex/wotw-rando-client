#include <interception_macros.h>

namespace app::methods::Moon::Animation::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ {
IL2CPP_REGISTER_METHOD(0x0154A430, void, DisposeIfCreated, (JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * __this, NativeArray_1_UnityEngine_Quaternion_ * array));
IL2CPP_REGISTER_METHODINFO(0x0470C3F0, JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob__DisposeIfCreated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0154A430, void, DisposeIfCreated, (JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * __this, NativeArray_1_System_Single_ * array));
IL2CPP_REGISTER_METHODINFO(0x0474EFA0, JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob__DisposeIfCreated_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0154A430, void, DisposeIfCreated, (JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * __this, NativeArray_1_UnityEngine_Experimental_Animations_TransformStreamHandle_ * array));
IL2CPP_REGISTER_METHODINFO(0x047519C0, JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob__DisposeIfCreated_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019FBE40, void, __ctor, (JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C1D8, JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019FB8A0, bool, get_IsActive, (JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAllowed, (JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * __this));
IL2CPP_REGISTER_METHOD(0x019FB940, Playable, ConstructPlayable, (JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * __this, PlayableGraph playableGraph));
IL2CPP_REGISTER_METHOD(0x019FBAE0, void, AddToAnimator, (JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * __this, MoonAnimator * animator, float blendInDuration));
IL2CPP_REGISTER_METHOD(0x019FBB10, void, RemoveFromAnimator, (JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * __this, float blendOutDuration));
IL2CPP_REGISTER_METHOD(0x019FBB40, void, OnAddedToAnimator, (JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * __this, MoonAnimator * animator, Playable playable));
IL2CPP_REGISTER_METHOD(0x019FBB60, void, OnRemovedFromAnimator, (JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * __this));
IL2CPP_REGISTER_METHOD(0x019FBB80, void, UpdateAnimatorPostprocessData, (JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * __this, Playable playable, AnimatorPostprocessUpdateData updateData));
IL2CPP_REGISTER_METHOD(0x019FBE10, void, OnDestroy, (JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * __this));
}
