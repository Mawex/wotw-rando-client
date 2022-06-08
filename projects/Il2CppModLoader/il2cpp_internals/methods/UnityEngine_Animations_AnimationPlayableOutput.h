#include <interception_macros.h>

namespace app::methods::UnityEngine::Animations::AnimationPlayableOutput {
IL2CPP_REGISTER_METHOD(0x00241D30, void, __ctor, (AnimationPlayableOutput__Boxed * __this, PlayableOutputHandle handle));
IL2CPP_REGISTER_METHODINFO(0x04727020, AnimationPlayableOutput__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0307DEE0, AnimationPlayableOutput, Create, (PlayableGraph graph, String * name, Animator * target));
IL2CPP_REGISTER_METHOD(0x0307E0B0, AnimationPlayableOutput, get_Null, ());
IL2CPP_REGISTER_METHOD(0x001D9980, PlayableOutputHandle, GetHandle, (AnimationPlayableOutput__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00241D50, Animator *, GetTarget, (AnimationPlayableOutput__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00241DB0, void, SetTarget, (AnimationPlayableOutput__Boxed * __this, Animator * value));
IL2CPP_REGISTER_METHOD(0x0307E1E0, Animator *, InternalGetTarget, (PlayableOutputHandle * handle));
IL2CPP_REGISTER_METHOD(0x0307E180, void, InternalSetTarget, (PlayableOutputHandle * handle, Animator * target));
}
