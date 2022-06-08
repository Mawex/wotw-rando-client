using namespace app;

namespace app::methods::SpiritTurret {
IL2CPP_REGISTER_METHOD(0x0064D960, float, get_Lifetime, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x0064D970, void, set_Lifetime, (SpiritTurret * __this, float value));
IL2CPP_REGISTER_METHOD(0x00B32900, float, get_ExpirationTwinkleDuration, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00CE09F0, void, set_ExpirationTwinkleDuration, (SpiritTurret * __this, float value));
IL2CPP_REGISTER_METHOD(0x00D7C800, Vector3, HoverOffset, (SpiritTurret * __this, float time));
IL2CPP_REGISTER_METHOD(0x00C47CC0, Vector3, get_Position, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D654B0, void, set_Position, (SpiritTurret * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00AE6060, bool, get_IsSuspended, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00AE6070, void, set_IsSuspended, (SpiritTurret * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00974AE0, SuspendableMask__Enum, get_Mask, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7C9D0, void, set_Mask, (SpiritTurret * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00D7CA90, void, Awake, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7CBD0, void, OnDestroy, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7CC90, void, OnEnable, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7D1D0, void, OnDisable, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7D290, void, MoveToTarget, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7D3F0, IAttackable *, FindNearestAttackable, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7D770, Guid, get_AttackableConsumerID, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7D780, void, set_AttackableConsumerID, (SpiritTurret * __this, Guid value));
IL2CPP_REGISTER_METHOD(0x00D7D790, bool, IsAttackableInteresting, (SpiritTurret * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x00D7D8B0, void, RemovingAttackable, (SpiritTurret * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x00D7D990, bool, IsAttackableVisible, (SpiritTurret * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x00D7DF20, void, UpdateHovering, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7E4D0, void, PushAwayFromOthers, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7E960, void, UpdateShooting, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7EF80, void, FixedUpdate, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7F110, void, Explode, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7F4F0, void, StartTwinkle, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7F670, void, StopTwinkle, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7F710, float, CalculateCooldown, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7F860, void, __ctor, (SpiritTurret * __this));
IL2CPP_REGISTER_METHOD(0x00D7FA20, void, __cctor, (MethodInfo * method));
}
