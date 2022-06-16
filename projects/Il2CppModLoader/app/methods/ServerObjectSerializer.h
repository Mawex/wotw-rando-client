#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ServerObjectSerializer {
    IL2CPP_REGISTER_METHOD(0x00AC12D0, app::ServerObject *, Serialize, (app::GameObject * game_obj, bool is_prefab))
    IL2CPP_REGISTER_METHOD(0x00AC19E0, app::GameObject *, Deserialize, (app::ServerObject * server_obj, app::Transform * parent))
    IL2CPP_REGISTER_METHOD(0x00AC1FC0, void, GetSupportTypes, ())
    IL2CPP_REGISTER_METHODINFO(0x04788478, ServerObjectSerializer_GetSupportTypes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AC2230, app::String *, SerializeToJSon, (app::Type * type, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x00AC23E0, app::Object *, DeserializeFromJson, (app::Type * type, app::String * serialized_state))
    IL2CPP_REGISTER_METHOD(0x00AC25A0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x016AB780, app::Object *, GetCopyOf, (app::Component_1 * comp, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x016AB6A0, app::Object *, AddComponentCopy_1, (app::GameObject * go, app::Object * to_add))
    IL2CPP_REGISTER_METHOD(0x016AB6A0, app::BreakablePhysicalSetup *, AddComponentCopy_2, (app::GameObject * go, app::BreakablePhysicalSetup * to_add))
    IL2CPP_REGISTER_METHODINFO(0x0477C6E0, ServerObjectSerializer_AddComponentCopy_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB6A0, app::ExplodingRigidbody *, AddComponentCopy_3, (app::GameObject * go, app::ExplodingRigidbody * to_add))
    IL2CPP_REGISTER_METHODINFO(0x0475D9E0, ServerObjectSerializer_AddComponentCopy_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB6A0, app::Component_1 *, AddComponentCopy_4, (app::GameObject * go, app::Component_1 * to_add))
    IL2CPP_REGISTER_METHODINFO(0x04701BB0, ServerObjectSerializer_AddComponentCopy_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB6A0, app::InstantiateAction *, AddComponentCopy_5, (app::GameObject * go, app::InstantiateAction * to_add))
    IL2CPP_REGISTER_METHODINFO(0x04748B50, ServerObjectSerializer_AddComponentCopy_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB6A0, app::LimitedLifetime *, AddComponentCopy_6, (app::GameObject * go, app::LimitedLifetime * to_add))
    IL2CPP_REGISTER_METHODINFO(0x0476B758, ServerObjectSerializer_AddComponentCopy_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB6A0, app::Polygon_1 *, AddComponentCopy_7, (app::GameObject * go, app::Polygon_1 * to_add))
    IL2CPP_REGISTER_METHODINFO(0x0472FF88, ServerObjectSerializer_AddComponentCopy_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB6A0, app::Projectile *, AddComponentCopy_8, (app::GameObject * go, app::Projectile * to_add))
    IL2CPP_REGISTER_METHODINFO(0x0471B528, ServerObjectSerializer_AddComponentCopy_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB6A0, app::ProjectileSpawner *, AddComponentCopy_9, (app::GameObject * go, app::ProjectileSpawner * to_add))
    IL2CPP_REGISTER_METHODINFO(0x04761968, ServerObjectSerializer_AddComponentCopy_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB6A0, app::SeekingProjectile *, AddComponentCopy_10, (app::GameObject * go, app::SeekingProjectile * to_add))
    IL2CPP_REGISTER_METHODINFO(0x047351A0, ServerObjectSerializer_AddComponentCopy_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AB6A0, app::SpawnOnKill *, AddComponentCopy_11, (app::GameObject * go, app::SpawnOnKill * to_add))
    IL2CPP_REGISTER_METHODINFO(0x0474D258, ServerObjectSerializer_AddComponentCopy_10__MethodInfo)
}
