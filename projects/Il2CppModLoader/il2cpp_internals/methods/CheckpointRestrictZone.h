using namespace app;

namespace app::methods::CheckpointRestrictZone {
IL2CPP_REGISTER_METHOD(0x00575470, bool, ShowAbandonChallangeCondition, (CheckpointRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x01321500, bool, ShouldRefillHealthAndEnergy, (CheckpointRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x01321510, bool, RestrictedToPosition, (CheckpointRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x01321520, bool, get_CharacterAlive, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013215F0, bool, IsInsideRestrictCheckpointZone, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01321B40, void, UpdateBufferedCheckpoint, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01322050, void, CreateCheckpoint, (CheckpointRestrictZone * zone, Vector3 targetPosition));
IL2CPP_REGISTER_METHOD(0x01322920, void, Awake, (CheckpointRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x01322AF0, void, OnRestoreCheckpoint, (CheckpointRestrictZone * __this));
IL2CPP_REGISTER_METHODINFO(0x04708B48, CheckpointRestrictZone_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01322BC0, void, OnCharacterDeath, (CheckpointRestrictZone * __this));
IL2CPP_REGISTER_METHODINFO(0x0475E530, CheckpointRestrictZone_OnCharacterDeath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01322CE0, void, OnEnable, (CheckpointRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x01323010, void, OnDisable, (CheckpointRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CD0, Rect, get_Bounds, (CheckpointRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x01323340, Vector2, GetSize, (CheckpointRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x013234A0, bool, get_ShouldRestrict, (CheckpointRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x013235C0, bool, get_IsInsideZone, (CheckpointRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x013236D0, void, OnFixedUpdate, (CheckpointRestrictZone * __this, float delta));
IL2CPP_REGISTER_METHOD(0x01323990, void, __ctor, (CheckpointRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x013239B0, void, __cctor, (MethodInfo * method));
}
