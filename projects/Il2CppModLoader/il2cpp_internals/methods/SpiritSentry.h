#include <interception_macros.h>

namespace app::methods::SpiritSentry {
IL2CPP_REGISTER_METHOD(0x003FC020, float, get_Duration, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x003FC030, void, set_Duration, (SpiritSentry * __this, float value));
IL2CPP_REGISTER_METHOD(0x00738690, float, get_ExpirationTwinkleDuration, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_ExpirationTwinkleDuration, (SpiritSentry * __this, float value));
IL2CPP_REGISTER_METHOD(0x00D651B0, Transform *, get_m_target, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D652E0, Vector3, HoverOffset, (SpiritSentry * __this, float time));
IL2CPP_REGISTER_METHOD(0x00C47CC0, Vector3, get_Position, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D654B0, void, set_Position, (SpiritSentry * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x008519A0, bool, get_IsSuspended, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x008519B0, void, set_IsSuspended, (SpiritSentry * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008519C0, SuspendableMask__Enum, get_Mask, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D65530, void, set_Mask, (SpiritSentry * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00D655F0, void, Awake, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D656F0, void, OnDestroy, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D65790, void, OnEnable, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D65990, void, OnDisable, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D65CB0, void, MoveBackToPlayer, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D65EC0, IAttackable *, FindNearestAttackable, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D661A0, void, UpdateHovering, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D66830, void, PushAwayFromOthers, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D66CC0, void, UpdateShooting, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D671F0, void, FixedUpdate, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D67530, void, StartTwinkle, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D67760, void, StopTwinkle, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D678C0, float, CalculateCooldown, (SpiritSentry * __this, float cooldown));
IL2CPP_REGISTER_METHOD(0x00D678D0, void, __ctor, (SpiritSentry * __this));
IL2CPP_REGISTER_METHOD(0x00D67900, void, __cctor, ());
}
