#include <interception_macros.h>

namespace app::methods::Toad {
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsSuspended, (Toad * __this));
IL2CPP_REGISTER_METHOD(0x00AFB360, void, set_IsSuspended, (Toad * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF2B0, SuspendableMask__Enum, get_Mask, (Toad * __this));
IL2CPP_REGISTER_METHOD(0x003FF2C0, void, set_Mask, (Toad * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00AFB3A0, void, Awake, (Toad * __this));
IL2CPP_REGISTER_METHOD(0x00AFB560, void, OnDestroy, (Toad * __this));
IL2CPP_REGISTER_METHOD(0x00AFB710, void, OnEnable, (Toad * __this));
IL2CPP_REGISTER_METHOD(0x00AFB820, void, OnAnimationEvent, (Toad * __this, String * eventId));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, (Toad * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineBehaviourEnter, (Toad * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineBehaviourExit, (Toad * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineBehaviourUpdate, (Toad * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x00AFB950, void, Serialize, (Toad * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGameSerializeLoad, (Toad * __this));
IL2CPP_REGISTER_METHODINFO(0x04729990, Toad_OnGameSerializeLoad__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AFBA70, void, __ctor, (Toad * __this));
}
