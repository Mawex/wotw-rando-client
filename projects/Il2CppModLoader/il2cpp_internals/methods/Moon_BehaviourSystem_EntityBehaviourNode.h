#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::EntityBehaviourNode {
IL2CPP_REGISTER_METHOD(0x002FBC40, Entity *, get_Entity, (EntityBehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x00CB6450, void, OnEntityInitialization, (EntityBehaviourNode * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x00417920, EntityOwnedInitOrder__Enum, get_InitOrder, (EntityBehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldPauseLocomotionIsConstant, (EntityBehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (EntityBehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheSerializedComponents, (EntityBehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x00CB6470, BehaviourStatus__Enum, Execute, (EntityBehaviourNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityInitialized, (EntityBehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x00CB6480, void, EndBehaviour, (EntityBehaviourNode * __this, BehaviourStatus__Enum status));
IL2CPP_REGISTER_METHOD(0x0060C1C0, void, __ctor, (EntityBehaviourNode * __this));
}
