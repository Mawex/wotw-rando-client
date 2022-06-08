using namespace app;

namespace app::methods::EnemyArenaWaveVirtualAnimator {
IL2CPP_REGISTER_METHOD(0x002FBBE0, EnemyArenaController *, get_Controller, (EnemyArenaWaveVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_Controller, (EnemyArenaWaveVirtualAnimator * __this, EnemyArenaController * value));
IL2CPP_REGISTER_METHOD(0x00C03C70, int32_t, get_WaveIndex, (EnemyArenaWaveVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00C03C80, void, set_WaveIndex, (EnemyArenaWaveVirtualAnimator * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00C03C90, EnemyArenaController_EnemyWave *, get_Wave, (EnemyArenaWaveVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBC20, DesiredUberStateGeneric *, get_DesiredState, (EnemyArenaWaveVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_DesiredState, (EnemyArenaWaveVirtualAnimator * __this, DesiredUberStateGeneric * value));
IL2CPP_REGISTER_METHOD(0x00C03CC0, void, __ctor, (EnemyArenaWaveVirtualAnimator * __this, EnemyArenaController * controller, int32_t waveIndex));
IL2CPP_REGISTER_METHOD(0x00C03E70, void, __ctor, (EnemyArenaWaveVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00C03FF0, void, RefreshDesiredState, (EnemyArenaWaveVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00C041E0, void, Reset, (EnemyArenaWaveVirtualAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C042A0, EntityOperationPermit__Enum, OnBeforeRemoveChild, (EnemyArenaWaveVirtualAnimator * __this, ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x00C043C0, void, CustomRemoveChild, (EnemyArenaWaveVirtualAnimator * __this, EntityId id, ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x00C04510, void, RemoveEnemyPlaceholder, (EnemyArenaWaveVirtualAnimator * __this, GameObject * placeholderGameObject));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RebuildHierarchy, (EnemyArenaWaveVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00C047C0, String *, get_Name, (EnemyArenaWaveVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, Dictionary_2_System_Int32_System_Single_ *, get_EventBoard, (EnemyArenaWaveVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBC80, Nullable_1_Single_, get_CustomStart, (EnemyArenaWaveVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_CustomStart, (EnemyArenaWaveVirtualAnimator * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x002FBCA0, Nullable_1_Single_, get_CustomEnd, (EnemyArenaWaveVirtualAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_CustomEnd, (EnemyArenaWaveVirtualAnimator * __this, Nullable_1_Single_ value));
}
