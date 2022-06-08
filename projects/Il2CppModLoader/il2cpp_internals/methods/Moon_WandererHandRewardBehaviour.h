using namespace app;

namespace app::methods::Moon::WandererHandRewardBehaviour {
IL2CPP_REGISTER_METHOD(0x011A2F00, void, OnEntityInitialized, (WandererHandRewardBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011A3090, void, OnEnter, (WandererHandRewardBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011A33E0, void, HandOutFinish, (WandererHandRewardBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0474B100, WandererHandRewardBehaviour_HandOutFinish__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011A3600, void, RewardTakenOrTimedOut, (WandererHandRewardBehaviour * __this, bool result));
IL2CPP_REGISTER_METHOD(0x011A3690, BehaviourStatus__Enum, OnExecute, (WandererHandRewardBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008C6EF0, void, OnExit, (WandererHandRewardBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011A3950, void, __ctor, (WandererHandRewardBehaviour * __this));
}
