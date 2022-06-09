#include <interception_macros.h>

namespace app::methods::ServerObjectSerializer {
IL2CPP_REGISTER_METHOD(0x00AC12D0, ServerObject *, Serialize, (app::GameObject * game_obj, bool is_prefab));
IL2CPP_REGISTER_METHOD(0x00AC19E0, GameObject *, Deserialize, (app::ServerObject * server_obj, app::Transform * parent));
IL2CPP_REGISTER_METHOD(0x00AC1FC0, void, GetSupportTypes, ());
IL2CPP_REGISTER_METHODINFO(0x04788478, ServerObjectSerializer_GetSupportTypes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AC2230, String *, SerializeToJSon, (app::Type * type, app::Object * value));
IL2CPP_REGISTER_METHOD(0x00AC23E0, Object *, DeserializeFromJson, (app::Type * type, app::String * serialized_state));
IL2CPP_REGISTER_METHOD(0x00AC25A0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x016AB780, Object *, GetCopyOf, (app::Component_1 * comp, app::Object * other));
IL2CPP_REGISTER_METHOD(0x016AB6A0, Object *, AddComponentCopy_1, (app::GameObject * go, app::Object * to_add));
IL2CPP_REGISTER_METHOD(0x016AB6A0, BreakablePhysicalSetup *, AddComponentCopy_2, (app::GameObject * go, app::BreakablePhysicalSetup * to_add));
IL2CPP_REGISTER_METHODINFO(0x0477C6E0, ServerObjectSerializer_AddComponentCopy_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, ExplodingRigidbody *, AddComponentCopy_3, (app::GameObject * go, app::ExplodingRigidbody * to_add));
IL2CPP_REGISTER_METHODINFO(0x0475D9E0, ServerObjectSerializer_AddComponentCopy_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, Component_1 *, AddComponentCopy_4, (app::GameObject * go, app::Component_1 * to_add));
IL2CPP_REGISTER_METHODINFO(0x04701BB0, ServerObjectSerializer_AddComponentCopy_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, InstantiateAction *, AddComponentCopy_5, (app::GameObject * go, app::InstantiateAction * to_add));
IL2CPP_REGISTER_METHODINFO(0x04748B50, ServerObjectSerializer_AddComponentCopy_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, LimitedLifetime *, AddComponentCopy_6, (app::GameObject * go, app::LimitedLifetime * to_add));
IL2CPP_REGISTER_METHODINFO(0x0476B758, ServerObjectSerializer_AddComponentCopy_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, Polygon_1 *, AddComponentCopy_7, (app::GameObject * go, app::Polygon_1 * to_add));
IL2CPP_REGISTER_METHODINFO(0x0472FF88, ServerObjectSerializer_AddComponentCopy_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, Projectile *, AddComponentCopy_8, (app::GameObject * go, app::Projectile * to_add));
IL2CPP_REGISTER_METHODINFO(0x0471B528, ServerObjectSerializer_AddComponentCopy_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, ProjectileSpawner *, AddComponentCopy_9, (app::GameObject * go, app::ProjectileSpawner * to_add));
IL2CPP_REGISTER_METHODINFO(0x04761968, ServerObjectSerializer_AddComponentCopy_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, SeekingProjectile *, AddComponentCopy_10, (app::GameObject * go, app::SeekingProjectile * to_add));
IL2CPP_REGISTER_METHODINFO(0x047351A0, ServerObjectSerializer_AddComponentCopy_9__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AB6A0, SpawnOnKill *, AddComponentCopy_11, (app::GameObject * go, app::SpawnOnKill * to_add));
IL2CPP_REGISTER_METHODINFO(0x0474D258, ServerObjectSerializer_AddComponentCopy_10__MethodInfo);
}
