using namespace app;

namespace app::methods::EnemyArenaVirtualAnimator {
IL2CPP_REGISTER_METHOD(0x002FBBE0, EnemyArenaController *, get_Controller, (EnemyArenaVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_Controller, (EnemyArenaVirtualAnimator * __this, EnemyArenaController * value));
IL2CPP_REGISTER_METHOD(0x00C036A0, void, __ctor, (EnemyArenaVirtualAnimator * __this, EnemyArenaController * controller));
IL2CPP_REGISTER_METHOD(0x00C03740, void, Reset, (EnemyArenaVirtualAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C03800, EntityOperationPermit__Enum, OnBeforeAddChild, (EnemyArenaVirtualAnimator * __this, ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x00C03900, EntityId, CustomAddChild, (EnemyArenaVirtualAnimator * __this, ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x00C039E0, EntityOperationPermit__Enum, OnBeforeRemoveChild, (EnemyArenaVirtualAnimator * __this, ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x00C03AB0, void, CustomRemoveChild, (EnemyArenaVirtualAnimator * __this, EntityId id, ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RebuildHierarchy, (EnemyArenaVirtualAnimator * __this));
}
