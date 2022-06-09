#include <interception_macros.h>

namespace app::methods::UnityEngine_Animations::AnimationPlayableOutput {
IL2CPP_REGISTER_METHOD(0x00241D30, void, __ctor, (app::AnimationPlayableOutput__Boxed * this_ptr, app::PlayableOutputHandle handle));
IL2CPP_REGISTER_METHODINFO(0x04727020, AnimationPlayableOutput__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0307DEE0, AnimationPlayableOutput, Create, (app::PlayableGraph graph, app::String * name, app::Animator * target));
IL2CPP_REGISTER_METHOD(0x0307E0B0, AnimationPlayableOutput, get_Null, ());
IL2CPP_REGISTER_METHOD(0x001D9980, PlayableOutputHandle, GetHandle, (app::AnimationPlayableOutput__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00241D50, Animator *, GetTarget, (app::AnimationPlayableOutput__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00241DB0, void, SetTarget, (app::AnimationPlayableOutput__Boxed * this_ptr, app::Animator * value));
IL2CPP_REGISTER_METHOD(0x0307E1E0, Animator *, InternalGetTarget, (app::PlayableOutputHandle * handle));
IL2CPP_REGISTER_METHOD(0x0307E180, void, InternalSetTarget, (app::PlayableOutputHandle * handle, app::Animator * target));
}
