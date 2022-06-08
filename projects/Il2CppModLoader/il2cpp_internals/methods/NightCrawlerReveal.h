#include <interception_macros.h>

namespace app::methods::NightCrawlerReveal {
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsSuspended, (NightCrawlerReveal * __this));
IL2CPP_REGISTER_METHOD(0x006086D0, void, set_IsSuspended, (NightCrawlerReveal * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00608710, SuspendableMask__Enum, get_Mask, (NightCrawlerReveal * __this));
IL2CPP_REGISTER_METHOD(0x00608720, void, set_Mask, (NightCrawlerReveal * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00608730, void, Awake, (NightCrawlerReveal * __this));
IL2CPP_REGISTER_METHOD(0x006088F0, void, OnEnable, (NightCrawlerReveal * __this));
IL2CPP_REGISTER_METHOD(0x00608A50, void, OnDestroy, (NightCrawlerReveal * __this));
IL2CPP_REGISTER_METHOD(0x00608C00, void, FixedUpdate, (NightCrawlerReveal * __this));
IL2CPP_REGISTER_METHOD(0x00443C10, void, OnGameSerializeLoad, (NightCrawlerReveal * __this));
IL2CPP_REGISTER_METHODINFO(0x04716E48, NightCrawlerReveal_OnGameSerializeLoad__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineBehaviourEnter, (NightCrawlerReveal * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineBehaviourExit, (NightCrawlerReveal * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineBehaviourUpdate, (NightCrawlerReveal * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, (NightCrawlerReveal * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00608C50, void, StateMachineBehaviourProxy_IReceiver_OnAnimationEvent, (NightCrawlerReveal * __this, String * eventId));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (NightCrawlerReveal * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00608D80, void, __ctor, (NightCrawlerReveal * __this));
}
