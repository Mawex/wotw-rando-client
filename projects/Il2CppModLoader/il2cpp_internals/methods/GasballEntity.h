#include <interception_macros.h>

namespace app::methods::GasballEntity {
IL2CPP_REGISTER_METHOD(0x0041EBA0, GasballEntity_InflateState__Enum, GetNextInflateState, (GasballEntity * __this));
IL2CPP_REGISTER_METHOD(0x0041ECC0, void, ChangeInflateState, (GasballEntity * __this, GasballEntity_InflateState__Enum state));
IL2CPP_REGISTER_METHOD(0x0041EDC0, bool, get_IsChasingOri, (GasballEntity * __this));
IL2CPP_REGISTER_METHOD(0x0041EDD0, void, set_IsChasingOri, (GasballEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0041EDE0, bool, get_OriWasInsideZone, (GasballEntity * __this));
IL2CPP_REGISTER_METHOD(0x0041EDF0, void, set_OriWasInsideZone, (GasballEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFlyingEnemy, (GasballEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AutoResetSpotOriBool, (GasballEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanOptimizeBehaviourTreeEvaluation, (GasballEntity * __this));
IL2CPP_REGISTER_METHOD(0x0041EE00, void, OnEnable, (GasballEntity * __this));
IL2CPP_REGISTER_METHOD(0x0041EFB0, void, OnDisable, (GasballEntity * __this));
IL2CPP_REGISTER_METHOD(0x0041F160, void, ResetEntity, (GasballEntity * __this));
IL2CPP_REGISTER_METHOD(0x0041F200, void, OnUpdate, (GasballEntity * __this));
IL2CPP_REGISTER_METHOD(0x0041F560, void, OnRestoreCheckpoint, (GasballEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0474CA90, GasballEntity_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0041F690, void, Explode, (GasballEntity * __this));
IL2CPP_REGISTER_METHOD(0x0041F6C0, void, ResolveDamage, (GasballEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x0041F750, void, BlockInflation, (GasballEntity * __this, bool setToBlocked));
IL2CPP_REGISTER_METHOD(0x0041F760, void, OnReceiveWindFromPipe, (GasballEntity * __this, Vector2 pushForce));
IL2CPP_REGISTER_METHOD(0x0041F890, void, __ctor, (GasballEntity * __this));
}
