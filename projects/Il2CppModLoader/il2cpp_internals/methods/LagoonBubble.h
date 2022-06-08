#include <interception_macros.h>

namespace app::methods::LagoonBubble {
IL2CPP_REGISTER_METHOD(0x00654950, SuspendableMask__Enum, get_Mask, (LagoonBubble * __this));
IL2CPP_REGISTER_METHOD(0x00EFC6F0, void, set_Mask, (LagoonBubble * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x003FFD00, bool, get_IsSuspended, (LagoonBubble * __this));
IL2CPP_REGISTER_METHOD(0x00EFC7A0, void, set_IsSuspended, (LagoonBubble * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00EFCA60, void, Awake, (LagoonBubble * __this));
IL2CPP_REGISTER_METHOD(0x00EFCF40, void, OnDestroy, (LagoonBubble * __this));
IL2CPP_REGISTER_METHOD(0x00EFD0E0, void, OnRestoreCheckpoint, (LagoonBubble * __this));
IL2CPP_REGISTER_METHODINFO(0x04735BF8, LagoonBubble_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EFD1D0, void, OnEnable, (LagoonBubble * __this));
IL2CPP_REGISTER_METHOD(0x00EFD280, void, OnDisable, (LagoonBubble * __this));
IL2CPP_REGISTER_METHOD(0x00EFD320, void, FixedUpdate, (LagoonBubble * __this));
IL2CPP_REGISTER_METHOD(0x00EFDA40, void, OnTriggerEnter, (LagoonBubble * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x00EFDB90, void, OnCollisionEnter, (LagoonBubble * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00EFE360, bool, CanKillBubble, (LagoonBubble * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x00EFE4E0, void, Destroy, (LagoonBubble * __this));
IL2CPP_REGISTER_METHOD(0x00EFE630, void, OnDamageResultReceived, (LagoonBubble * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x0474B5B0, LagoonBubble_OnDamageResultReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EFE9D0, void, OnReceiveWindFromPipe, (LagoonBubble * __this, Vector2 pushForce));
IL2CPP_REGISTER_METHOD(0x00EFEA00, void, __ctor, (LagoonBubble * __this));
}
