using namespace app;

namespace app::methods::KwolokBossSludgeLaserBehaviour {
IL2CPP_REGISTER_METHOD(0x012EA390, bool, get_IsInShootinWindow, (KwolokBossSludgeLaserBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012EA470, void, OnEnter, (KwolokBossSludgeLaserBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012EA820, BehaviourStatus__Enum, OnExecute, (KwolokBossSludgeLaserBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012EB340, void, OnExit, (KwolokBossSludgeLaserBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012EB510, float, ComputeUtility, (KwolokBossSludgeLaserBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E9180, void, InitializeHitReactionController, (KwolokBossSludgeLaserBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012EB630, void, ModifyLookAngleChangeSpeed, (KwolokBossSludgeLaserBehaviour * __this, float * speed));
IL2CPP_REGISTER_METHODINFO(0x0470F900, KwolokBossSludgeLaserBehaviour_ModifyLookAngleChangeSpeed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012EB650, void, __ctor, (KwolokBossSludgeLaserBehaviour * __this));
}
