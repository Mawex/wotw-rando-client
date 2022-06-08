#include <interception_macros.h>

namespace app::methods::UnityEngine::Animations::AnimationClipPlayable {
IL2CPP_REGISTER_METHOD(0x002414B0, void, __ctor, (AnimationClipPlayable__Boxed * __this, PlayableHandle handle));
IL2CPP_REGISTER_METHODINFO(0x047126E8, AnimationClipPlayable__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0307C320, AnimationClipPlayable, Create, (PlayableGraph graph, AnimationClip * clip));
IL2CPP_REGISTER_METHOD(0x0307C4A0, PlayableHandle, CreateHandle, (PlayableGraph graph, AnimationClip * clip));
IL2CPP_REGISTER_METHOD(0x001D9980, PlayableHandle, GetHandle, (AnimationClipPlayable__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0307C600, Playable, operator_, (AnimationClipPlayable playable));
IL2CPP_REGISTER_METHOD(0x002414D0, bool, Equals, (AnimationClipPlayable__Boxed * __this, AnimationClipPlayable other));
IL2CPP_REGISTER_METHOD(0x00241630, AnimationClip *, GetAnimationClip, (AnimationClipPlayable__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00241690, bool, GetApplyFootIK, (AnimationClipPlayable__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002416F0, bool, GetApplyPlayableIK, (AnimationClipPlayable__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00241750, bool, GetRemoveStartOffset, (AnimationClipPlayable__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0307C610, bool, CreateHandleInternal, (PlayableGraph graph, AnimationClip * clip, PlayableHandle * handle));
IL2CPP_REGISTER_METHOD(0x0307C680, AnimationClip *, GetAnimationClipInternal, (PlayableHandle * handle));
IL2CPP_REGISTER_METHOD(0x0307C6D0, bool, GetApplyFootIKInternal, (PlayableHandle * handle));
IL2CPP_REGISTER_METHOD(0x0307C720, bool, GetApplyPlayableIKInternal, (PlayableHandle * handle));
IL2CPP_REGISTER_METHOD(0x0307C770, bool, GetRemoveStartOffsetInternal, (PlayableHandle * handle));
IL2CPP_REGISTER_METHOD(0x0307C7C0, bool, CreateHandleInternal_Injected, (PlayableGraph * graph, AnimationClip * clip, PlayableHandle * handle));
}
