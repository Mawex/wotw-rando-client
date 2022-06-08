#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Animations::AnimationScriptPlayable {
IL2CPP_REGISTER_METHOD(0x00242700, void, __ctor, (AnimationScriptPlayable__Boxed * __this, PlayableHandle handle));
IL2CPP_REGISTER_METHODINFO(0x04789068, AnimationScriptPlayable__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D9980, PlayableHandle, GetHandle, (AnimationScriptPlayable__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0307C600, Playable, operator_, (AnimationScriptPlayable playable));
IL2CPP_REGISTER_METHOD(0x03086610, AnimationScriptPlayable, operator_, (Playable playable));
IL2CPP_REGISTER_METHOD(0x00242720, bool, Equals, (AnimationScriptPlayable__Boxed * __this, AnimationScriptPlayable other));
IL2CPP_REGISTER_METHOD(0x03086650, bool, CreateHandleInternal, (PlayableGraph graph, PlayableHandle * handle, void * jobReflectionData));
IL2CPP_REGISTER_METHOD(0x03086740, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x03086810, bool, CreateHandleInternal_Injected, (PlayableGraph * graph, PlayableHandle * handle, void * jobReflectionData));
IL2CPP_REGISTER_METHOD(0x0012E910, void, CheckJobTypeValidity, (AnimationScriptPlayable__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x047838D8, AnimationScriptPlayable_CheckJobTypeValidity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012EA90, void, SetJobData, (AnimationScriptPlayable__Boxed * __this, DelayJointPostprocessJob jobData));
IL2CPP_REGISTER_METHODINFO(0x0475A228, AnimationScriptPlayable_SetJobData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012EAE0, void, SetJobData, (AnimationScriptPlayable__Boxed * __this, MatchJointsJob jobData));
IL2CPP_REGISTER_METHODINFO(0x047502C8, AnimationScriptPlayable_SetJobData_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012E610, void, CheckJobTypeValidity, (AnimationScriptPlayable__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04735C00, AnimationScriptPlayable_CheckJobTypeValidity_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012E790, void, CheckJobTypeValidity, (AnimationScriptPlayable__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x047459A8, AnimationScriptPlayable_CheckJobTypeValidity_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF7A00, AnimationScriptPlayable, Create, (PlayableGraph graph, DelayJointPostprocessJob jobData, int32_t inputCount));
IL2CPP_REGISTER_METHOD(0x02FF7B70, AnimationScriptPlayable, Create, (PlayableGraph graph, MatchJointsJob jobData, int32_t inputCount));
IL2CPP_REGISTER_METHOD(0x02FF80B0, PlayableHandle, CreateHandle, (PlayableGraph graph, int32_t inputCount));
IL2CPP_REGISTER_METHOD(0x02FF82D0, PlayableHandle, CreateHandle, (PlayableGraph graph, int32_t inputCount));
}
