#include <interception_macros.h>

namespace app::methods::AutoDamageCollider {
IL2CPP_REGISTER_METHOD(0x0085AAA0, bool, IsDamageBasedOnSpicificArea, (AutoDamageCollider * __this));
IL2CPP_REGISTER_METHOD(0x0085AAB0, void, OnValidate, (AutoDamageCollider * __this));
IL2CPP_REGISTER_METHOD(0x0085ABF0, void, Awake, (AutoDamageCollider * __this));
IL2CPP_REGISTER_METHOD(0x0085AC00, void, Validate, (AutoDamageCollider * __this));
IL2CPP_REGISTER_METHOD(0x0085ADF0, void, Clear, (AutoDamageCollider * __this));
IL2CPP_REGISTER_METHOD(0x0085AEA0, void, AddDamageDealer, (AutoDamageCollider * __this, List_1_UnityEngine_Vector2_ * points, Vector2 position, Transform * parent));
IL2CPP_REGISTER_METHOD(0x0085B3A0, Polygon_1 *, AddPolygonComponent, (AutoDamageCollider * __this, GameObject * obj, List_1_UnityEngine_Vector2_ * points));
IL2CPP_REGISTER_METHOD(0x0085B470, DamageDealer *, AddDamageDealer, (AutoDamageCollider * __this, GameObject * obj));
IL2CPP_REGISTER_METHOD(0x0085B520, void, ApplyDamageSettings, (AutoDamageCollider * __this));
IL2CPP_REGISTER_METHOD(0x0085B6C0, void, SetDamageDealerValues, (AutoDamageCollider * __this, DamageDealer * dealer));
IL2CPP_REGISTER_METHOD(0x0085B740, DamageType__Enum, GetBestDamageType, (AutoDamageCollider * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (AutoDamageCollider * __this));
IL2CPP_REGISTER_METHOD(0x0085BC60, void, OnBeforeStrip, (AutoDamageCollider * __this));
IL2CPP_REGISTER_METHOD(0x0085BC80, void, RemoveNullChildren, (AutoDamageCollider * __this));
IL2CPP_REGISTER_METHOD(0x0085BFA0, void, __ctor, (AutoDamageCollider * __this));
}
