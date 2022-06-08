#include <interception_macros.h>

namespace app::methods::ColliderAnimatorSystem {
IL2CPP_REGISTER_METHOD(0x012CE280, ColliderAnimatorSystem *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsRunning, (ColliderAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsRunning, (ColliderAnimatorSystem * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ExecutionOrder, (ColliderAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x012CE550, void, SubmitColliderRadius, (ColliderAnimatorSystem * __this, Collider * collider, float radius, SphereColliderAnimator_AnimationMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (ColliderAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x012CE7F0, void, OnUpdate, (ColliderAnimatorSystem * __this, float delta));
IL2CPP_REGISTER_METHOD(0x012CE9D0, ColliderAnimatorSystem_SphereColliderAnimationState *, GetStateFromPool, (ColliderAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x012CEB50, void, ReturnStateToPool, (ColliderAnimatorSystem * __this, ColliderAnimatorSystem_SphereColliderAnimationState * state));
IL2CPP_REGISTER_METHOD(0x012CEC10, void, ApplySphereColliderRadius, (SphereCollider * collider, float radius));
IL2CPP_REGISTER_METHOD(0x012CECE0, void, __ctor, (ColliderAnimatorSystem * __this));
}
