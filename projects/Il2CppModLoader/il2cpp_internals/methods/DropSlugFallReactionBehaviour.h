using namespace app;

namespace app::methods::DropSlugFallReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00BE3F80, void, OnInitializeTask, (DropSlugFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00BE4080, void, OnEnterTask, (DropSlugFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00BE42F0, BehaviourStatus__Enum, OnExecuteTask, (DropSlugFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00BE4380, void, SetSpinAnimationParameter, (DropSlugFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00BE4570, void, CollisionUpdate, (DropSlugFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00BE45B0, void, OnExitTask, (DropSlugFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00BE47E0, void, OnNativeCollision, (DropSlugFallReactionBehaviour * __this, Collision * collision));
IL2CPP_REGISTER_METHODINFO(0x04792208, DropSlugFallReactionBehaviour_OnNativeCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00733FD0, void, __ctor, (DropSlugFallReactionBehaviour * __this));
}
