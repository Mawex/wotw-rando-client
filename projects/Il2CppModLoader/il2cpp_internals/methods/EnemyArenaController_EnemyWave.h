using namespace app;

namespace app::methods::EnemyArenaController_EnemyWave {
IL2CPP_REGISTER_METHOD(0x00C02130, MoonTimeline *, get_OnStartTimelineResolved, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C02220, ICondition *, get_ResolvedExtraCondition, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C022E0, bool, CanStart, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C02390, bool, get_AllEnemiesKilled, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C02420, void, EnablePlaceholders, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C02430, void, DisablePlaceholders, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C02440, void, SetPlaceholderActivation, (EnemyArenaController_EnemyWave * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00C025F0, void, ChangeState, (EnemyArenaController_EnemyWave * __this, EnemyArenaController_WaveStatus__Enum newState));
IL2CPP_REGISTER_METHODINFO(0x04785D18, EnemyArenaController_EnemyWave_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C02430, void, ReadyToStartEnter, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ReadyToStartExit, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C02890, void, RunningEnter, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C029B0, void, RunningExit, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C02430, void, FinishedEnter, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishedExit, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C02430, void, DisabledEnter, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C02430, void, DisabledExit, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C029C0, void, ResetAllEnemies, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C02C40, void, InstaKillAllEnemies, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C02D90, void, RefreshDeathCount, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C02FC0, void, RegisterEvent, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C03280, void, UnregisterEvent, (EnemyArenaController_EnemyWave * __this));
IL2CPP_REGISTER_METHOD(0x00C03540, void, EntityKilled, (EnemyArenaController_EnemyWave * __this, DamageResult obj));
IL2CPP_REGISTER_METHODINFO(0x04708090, EnemyArenaController_EnemyWave_EntityKilled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C03550, void, __ctor, (EnemyArenaController_EnemyWave * __this));
}
