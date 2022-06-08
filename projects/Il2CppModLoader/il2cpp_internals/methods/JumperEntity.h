using namespace app;

namespace app::methods::JumperEntity {
IL2CPP_REGISTER_METHOD(0x00E59A40, bool, get_Aggro, (JumperEntity * __this));
IL2CPP_REGISTER_METHOD(0x00E59A50, void, set_Aggro, (JumperEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00E59A60, bool, get_IsFacingTarget, (JumperEntity * __this));
IL2CPP_REGISTER_METHOD(0x00E59AE0, void, Start, (JumperEntity * __this));
IL2CPP_REGISTER_METHOD(0x00E59AF0, bool, IsGoingToFinish, (JumperEntity * __this, MoonTimeline * timeline, AnimationPlayer * anim, float timeToEnd));
IL2CPP_REGISTER_METHOD(0x00E59B80, void, OnFixedUpdate, (JumperEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LateUpdate, (JumperEntity * __this));
IL2CPP_REGISTER_METHOD(0x00E59E50, void, OnDamageReceived, (JumperEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x00E59E90, bool, CheckObstacle, (JumperEntity * __this, Vector3 position, Vector3 direction, float distance));
IL2CPP_REGISTER_METHOD(0x00E59FA0, float, ObstacleDistance, (JumperEntity * __this, Vector3 position, Vector3 direction, float distance));
IL2CPP_REGISTER_METHOD(0x00E5A0F0, void, ResetEntity, (JumperEntity * __this));
IL2CPP_REGISTER_METHOD(0x00E5A220, void, __ctor, (JumperEntity * __this));
}
