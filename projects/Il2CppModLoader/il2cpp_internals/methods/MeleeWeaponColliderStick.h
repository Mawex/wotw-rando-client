using namespace app;

namespace app::methods::MeleeWeaponColliderStick {
IL2CPP_REGISTER_METHOD(0x009C8F20, void, add_OnCollision, (MeleeWeaponColliderStick * __this, Action_2_UnityEngine_Collider_UnityEngine_Vector3_ * value));
IL2CPP_REGISTER_METHOD(0x009C9010, void, remove_OnCollision, (MeleeWeaponColliderStick * __this, Action_2_UnityEngine_Collider_UnityEngine_Vector3_ * value));
IL2CPP_REGISTER_METHOD(0x009C9100, void, add_OnCollisionWithDirection, (MeleeWeaponColliderStick * __this, Action_4_UnityEngine_Collider_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_ * value));
IL2CPP_REGISTER_METHOD(0x009C91F0, void, remove_OnCollisionWithDirection, (MeleeWeaponColliderStick * __this, Action_4_UnityEngine_Collider_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_ * value));
IL2CPP_REGISTER_METHOD(0x009C92E0, void, add_OnGroundCollision, (MeleeWeaponColliderStick * __this, Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_SurfaceMaterialType_ * value));
IL2CPP_REGISTER_METHOD(0x009C93D0, void, remove_OnGroundCollision, (MeleeWeaponColliderStick * __this, Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_SurfaceMaterialType_ * value));
IL2CPP_REGISTER_METHOD(0x009C94C0, void, add_OnRecoilCollision, (MeleeWeaponColliderStick * __this, Action_2_UnityEngine_Collider_UnityEngine_Vector3_ * value));
IL2CPP_REGISTER_METHOD(0x009C95B0, void, remove_OnRecoilCollision, (MeleeWeaponColliderStick * __this, Action_2_UnityEngine_Collider_UnityEngine_Vector3_ * value));
IL2CPP_REGISTER_METHOD(0x009C96A0, int32_t, get_m_debugCircleAmout, (MeleeWeaponColliderStick * __this));
IL2CPP_REGISTER_METHOD(0x00989BF0, UpdateType__Enum, get_UpdateType, (MeleeWeaponColliderStick * __this));
IL2CPP_REGISTER_METHOD(0x009C9740, void, set_UpdateType, (MeleeWeaponColliderStick * __this, UpdateType__Enum value));
IL2CPP_REGISTER_METHOD(0x009C9750, void, Finalize, (MeleeWeaponColliderStick * __this));
IL2CPP_REGISTER_METHOD(0x005065D0, bool, get_Register, (MeleeWeaponColliderStick * __this));
IL2CPP_REGISTER_METHOD(0x009C97E0, void, set_Register, (MeleeWeaponColliderStick * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009C98D0, void, InitializeStartPosition, (MeleeWeaponColliderStick * __this));
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_Enabled, (MeleeWeaponColliderStick * __this));
IL2CPP_REGISTER_METHOD(0x009C9D80, void, set_Enabled, (MeleeWeaponColliderStick * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009C9EF0, Entity *, get_Entity, (MeleeWeaponColliderStick * __this));
IL2CPP_REGISTER_METHOD(0x009C9FE0, SeinCharacter *, get_Sein, (MeleeWeaponColliderStick * __this));
IL2CPP_REGISTER_METHOD(0x009CA0D0, GroundEntityLocomotion *, get_OwnerLocomotion, (MeleeWeaponColliderStick * __this));
IL2CPP_REGISTER_METHOD(0x009CA200, bool, get_DoGroundChecksAlongWeaponLength, (MeleeWeaponColliderStick * __this));
IL2CPP_REGISTER_METHOD(0x009CA210, void, set_DoGroundChecksAlongWeaponLength, (MeleeWeaponColliderStick * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009CA220, void, OnUpdate, (MeleeWeaponColliderStick * __this, float dt));
IL2CPP_REGISTER_METHOD(0x009CB440, bool, CheckForGroundCollision, (MeleeWeaponColliderStick * __this, Vector3 startPosition, Vector3 endPosition, Vector3 basePosition, float radius, Color one, Color two));
IL2CPP_REGISTER_METHOD(0x009CB5D0, bool, CheckForGroundCollision, (MeleeWeaponColliderStick * __this, Vector3 startPosition, Vector3 endPosition, float radius, Color one, Color two));
IL2CPP_REGISTER_METHOD(0x009CB9C0, Transform *, TryGetOwnerTransform, (MeleeWeaponColliderStick * __this));
IL2CPP_REGISTER_METHOD(0x009CBAF0, MeleeWeaponColliderStick_DebugCircle *, GetDebugCircle, (MeleeWeaponColliderStick * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x009CBDF0, void, UpdateDebugDrawing, (MeleeWeaponColliderStick * __this));
IL2CPP_REGISTER_METHOD(0x009CC090, void, ClearDebugData, (MeleeWeaponColliderStick * __this));
IL2CPP_REGISTER_METHOD(0x009CC400, void, __ctor, (MeleeWeaponColliderStick * __this));
}
