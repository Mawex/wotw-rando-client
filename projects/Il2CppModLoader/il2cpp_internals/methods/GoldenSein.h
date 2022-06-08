#include <interception_macros.h>

namespace app::methods::GoldenSein {
IL2CPP_REGISTER_METHOD(0x00660430, SeinCharacter *, get_Sein, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x00660440, void, set_Sein, (GoldenSein * __this, SeinCharacter * value));
IL2CPP_REGISTER_METHOD(0x008011D0, SceneRoot *, GetSceneRoot, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x00801400, Vector3, get_ScenePosition, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x008017C0, Transform *, get_OriTransform, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x008018C0, Vector3, HoverOffset, (GoldenSein * __this, float time));
IL2CPP_REGISTER_METHOD(0x008019C0, Vector3, get_Position, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x00801A50, void, set_Position, (GoldenSein * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0068A180, bool, get_IsSuspended, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x00801AD0, void, set_IsSuspended, (GoldenSein * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00801AE0, SuspendableMask__Enum, get_Mask, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x00801AF0, void, set_Mask, (GoldenSein * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00801BB0, void, Awake, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x00801CC0, void, OnDestroy, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x00801D60, void, OnEnable, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x00801FF0, void, MoveBackToPlayer, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x008021F0, IAttackable *, FindNearestAttackable, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x008027E0, void, UpdateHovering, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x00803210, void, UpdateShooting, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x008037F0, void, FixedUpdate, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x00803CB0, void, CheckInput, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x00803DF0, bool, CheckCanAttack, (GoldenSein * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x00803E50, IEnumerator *, UndrainRoutine, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x00803FA0, void, PlayPressButtonTimeline, (GoldenSein * __this));
IL2CPP_REGISTER_METHOD(0x00804090, void, __ctor, (GoldenSein * __this));
}
