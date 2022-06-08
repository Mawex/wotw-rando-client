using namespace app;

namespace app::methods::UnityEngine::StateMachineBehaviour {
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (StateMachineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateEnter, (StateMachineBehaviour * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateUpdate, (StateMachineBehaviour * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateExit, (StateMachineBehaviour * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMove, (StateMachineBehaviour * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateIK, (StateMachineBehaviour * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineEnter, (StateMachineBehaviour * __this, Animator * animator, int32_t stateMachinePathHash));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineExit, (StateMachineBehaviour * __this, Animator * animator, int32_t stateMachinePathHash));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateEnter, (StateMachineBehaviour * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex, AnimatorControllerPlayable controller));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateUpdate, (StateMachineBehaviour * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex, AnimatorControllerPlayable controller));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateExit, (StateMachineBehaviour * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex, AnimatorControllerPlayable controller));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMove, (StateMachineBehaviour * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex, AnimatorControllerPlayable controller));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateIK, (StateMachineBehaviour * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex, AnimatorControllerPlayable controller));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineEnter, (StateMachineBehaviour * __this, Animator * animator, int32_t stateMachinePathHash, AnimatorControllerPlayable controller));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineExit, (StateMachineBehaviour * __this, Animator * animator, int32_t stateMachinePathHash, AnimatorControllerPlayable controller));
}
