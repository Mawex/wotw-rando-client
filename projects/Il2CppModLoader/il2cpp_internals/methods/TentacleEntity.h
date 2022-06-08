#include <interception_macros.h>

namespace app::methods::TentacleEntity {
IL2CPP_REGISTER_METHOD(0x00CFDBE0, bool, get_IsTentacleFacingTarget, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CFDD40, bool, get_IsUnderWater, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CFDD50, void, set_IsUnderWater, (TentacleEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004A3B20, float, get_ShotCooldown, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CFDE00, Vector3, get_CameraTargetPosition, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CFDF80, void, SetLayer, (TentacleEntity * __this, int32_t segmentLayer, int32_t headLayer));
IL2CPP_REGISTER_METHOD(0x00CFE150, void, ResetDefaultHeadLayer, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CFE1E0, void, ResetDefaultLayer, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CFE200, void, ResetEntity, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CFE2B0, void, LerpTargetTo, (TentacleEntity * __this, Vector3 pos, float k, float maxSpeed));
IL2CPP_REGISTER_METHOD(0x00CFE530, void, LerpTargetToPlayer, (TentacleEntity * __this, float k, float maxSpeed));
IL2CPP_REGISTER_METHOD(0x00CFE810, Vector3, SnapTargetToInterestPoint, (TentacleEntity * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00CFEAF0, void, OnAwake, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CFEC30, void, EnterSpawningState, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CFEDD0, Vector3, ApplyTargetBounds, (TentacleEntity * __this, Vector3 target));
IL2CPP_REGISTER_METHOD(0x00CFF340, void, UpdateHitSideParameter, (TentacleEntity * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00CFF650, void, UpdateDirectionParameter, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CFF9B0, void, UpdateDistanceParameter, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CFFB50, void, OnFixedUpdate, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CFFF00, void, OnDamageReceived, (TentacleEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x00C0CBA0, bool, get_IsSuspended, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D00190, void, set_IsSuspended, (TentacleEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00D001E0, void, OnDestroy, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B63460, void, OnDisable, (TentacleEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D001F0, void, __ctor, (TentacleEntity * __this));
}
