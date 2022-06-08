#include <interception_macros.h>

namespace app::methods::ServerObjectSerializer {
IL2CPP_REGISTER_METHOD(0x00AC12D0, ServerObject *, Serialize, (GameObject * gameObj, bool isPrefab));
IL2CPP_REGISTER_METHOD(0x00AC19E0, GameObject *, Deserialize, (ServerObject * serverObj, Transform * parent));
IL2CPP_REGISTER_METHOD(0x00AC1FC0, void, GetSupportTypes, ());
IL2CPP_REGISTER_METHODINFO(0x04788478, ServerObjectSerializer_GetSupportTypes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AC2230, String *, SerializeToJSon, (Type * type, Object * value));
IL2CPP_REGISTER_METHOD(0x00AC23E0, Object *, DeserializeFromJson, (Type * type, String * serializedState));
IL2CPP_REGISTER_METHOD(0x00AC25A0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x016AB780, Object *, GetCopyOf, (Component_1 * comp, Object * other));
IL2CPP_REGISTER_METHOD(0x016AB6A0, Object *, AddComponentCopy, (GameObject * go, Object * toAdd));
IL2CPP_REGISTER_METHOD(0x016AB6A0, BreakablePhysicalSetup *, AddComponentCopy, (GameObject * go, BreakablePhysicalSetup * toAdd));
IL2CPP_REGISTER_METHODINFO(0x0477C6E0, ServerObjectSerializer_AddComponentCopy_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, ExplodingRigidbody *, AddComponentCopy, (GameObject * go, ExplodingRigidbody * toAdd));
IL2CPP_REGISTER_METHODINFO(0x0475D9E0, ServerObjectSerializer_AddComponentCopy_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, Component_1 *, AddComponentCopy, (GameObject * go, Component_1 * toAdd));
IL2CPP_REGISTER_METHODINFO(0x04701BB0, ServerObjectSerializer_AddComponentCopy_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, InstantiateAction *, AddComponentCopy, (GameObject * go, InstantiateAction * toAdd));
IL2CPP_REGISTER_METHODINFO(0x04748B50, ServerObjectSerializer_AddComponentCopy_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, LimitedLifetime *, AddComponentCopy, (GameObject * go, LimitedLifetime * toAdd));
IL2CPP_REGISTER_METHODINFO(0x0476B758, ServerObjectSerializer_AddComponentCopy_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, Polygon_1 *, AddComponentCopy, (GameObject * go, Polygon_1 * toAdd));
IL2CPP_REGISTER_METHODINFO(0x0472FF88, ServerObjectSerializer_AddComponentCopy_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, Projectile *, AddComponentCopy, (GameObject * go, Projectile * toAdd));
IL2CPP_REGISTER_METHODINFO(0x0471B528, ServerObjectSerializer_AddComponentCopy_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, ProjectileSpawner *, AddComponentCopy, (GameObject * go, ProjectileSpawner * toAdd));
IL2CPP_REGISTER_METHODINFO(0x04761968, ServerObjectSerializer_AddComponentCopy_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, SeekingProjectile *, AddComponentCopy, (GameObject * go, SeekingProjectile * toAdd));
IL2CPP_REGISTER_METHODINFO(0x047351A0, ServerObjectSerializer_AddComponentCopy_9__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, SpawnOnKill *, AddComponentCopy, (GameObject * go, SpawnOnKill * toAdd));
IL2CPP_REGISTER_METHODINFO(0x0474D258, ServerObjectSerializer_AddComponentCopy_10__MethodInfo);
}
