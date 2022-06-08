#include <interception_macros.h>

namespace app::methods::FoxEnemy2 {
IL2CPP_REGISTER_METHOD(0x01283220, void, Awake, (FoxEnemy2 * __this));
IL2CPP_REGISTER_METHOD(0x01283490, void, Start, (FoxEnemy2 * __this));
IL2CPP_REGISTER_METHOD(0x012834A0, void, FixedUpdate, (FoxEnemy2 * __this));
IL2CPP_REGISTER_METHOD(0x01283A50, void, TestJumpAttack, (FoxEnemy2 * __this));
IL2CPP_REGISTER_METHOD(0x01283C70, void, FoxGrabber_Receiver_OnGrabbed, (FoxEnemy2 * __this, IPinnable * pinnable));
IL2CPP_REGISTER_METHOD(0x01283DF0, void, StateMachineBehaviourProxy_IReceiver_OnStateMachineBehaviourEnter, (FoxEnemy2 * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x01284390, void, StateMachineBehaviourProxy_IReceiver_OnStateMachineBehaviourUpdate, (FoxEnemy2 * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x012847B0, void, StateMachineBehaviourProxy_IReceiver_OnStateMachineBehaviourExit, (FoxEnemy2 * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StateMachineBehaviourProxy_IReceiver_OnAnimationEvent, (FoxEnemy2 * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StateMachineBehaviourProxy_IReceiver_OnAnimationEvent, (FoxEnemy2 * __this, String * eventId));
IL2CPP_REGISTER_METHOD(0x012849D0, void, __ctor, (FoxEnemy2 * __this));
}
