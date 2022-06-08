using namespace app;

namespace app::methods::SeinSpiritLeashAbility_LeashableInfo {
IL2CPP_REGISTER_METHOD(0x0011C130, Vector3, GetAttackablePosition, (SeinSpiritLeashAbility_LeashableInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011C160, bool, ShouldDecelerateOnApproach, (SeinSpiritLeashAbility_LeashableInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011C170, float, GetCloseEnoughDistance, (SeinSpiritLeashAbility_LeashableInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011C180, void, Clear, (SeinSpiritLeashAbility_LeashableInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011C190, void, Copy, (SeinSpiritLeashAbility_LeashableInfo__Boxed * __this, SeinSpiritLeashAbility_LeashableInfo other));
IL2CPP_REGISTER_METHOD(0x0011C220, void, SetAttackablePoint, (SeinSpiritLeashAbility_LeashableInfo__Boxed * __this, IAttackable * attackable, GameObject * attackableObject, ISpiritLeashAttackable * spiritLeashAttackable));
IL2CPP_REGISTER_METHOD(0x0011C270, void, SetAttackableSurfaceLocal, (SeinSpiritLeashAbility_LeashableInfo__Boxed * __this, GrabbableSurface * surface, GameObject * attackableObject, ISpiritLeashAttackable * spiritLeashAttackable, Vector3 localPos));
IL2CPP_REGISTER_METHOD(0x0011C3B0, void, SetAttackableSurfaceWorld, (SeinSpiritLeashAbility_LeashableInfo__Boxed * __this, GrabbableSurface * surface, GameObject * attackableObject, ISpiritLeashAttackable * spiritLeashAttackable, Vector3 worldPos));
}
