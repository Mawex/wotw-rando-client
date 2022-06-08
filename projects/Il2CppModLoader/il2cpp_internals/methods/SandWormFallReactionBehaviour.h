using namespace app;

namespace app::methods::SandWormFallReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00C1B210, void, OnInitializeTask, (SandWormFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C1B320, void, OnEnterTask, (SandWormFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnCollision, (SandWormFallReactionBehaviour * __this, MoonControllerColliderHit hit));
IL2CPP_REGISTER_METHODINFO(0x0472D380, SandWormFallReactionBehaviour_OnCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C1B500, BehaviourStatus__Enum, OnExecuteTask, (SandWormFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C1B5E0, void, OnExitTask, (SandWormFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C1B7C0, void, __ctor, (SandWormFallReactionBehaviour * __this));
}
