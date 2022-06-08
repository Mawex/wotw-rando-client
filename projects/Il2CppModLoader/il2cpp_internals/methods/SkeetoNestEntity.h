#include <interception_macros.h>

namespace app::methods::SkeetoNestEntity {
IL2CPP_REGISTER_METHOD(0x0075D470, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x0075D510, float, get_CameraInfluenceMinDist, (SkeetoNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x0075D530, float, get_CameraInfluenceMaxDist, (SkeetoNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x0075D550, void, AssignSpawners, (SkeetoNestEntity * __this, List_1_SkeetoPlaceholder_ * placeholders));
IL2CPP_REGISTER_METHOD(0x0075D560, void, OnAwake, (SkeetoNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x0075D850, void, OnEnable, (SkeetoNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x0075DAE0, void, ResetEntity, (SkeetoNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x0075DB00, void, FixedUpdate, (SkeetoNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x0075DE50, void, SpawnSkeeto, (SkeetoNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x0075E580, void, OnSkeetoDied, (SkeetoNestEntity * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x0472EA98, SkeetoNestEntity_OnSkeetoDied__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00443C10, void, OnDeathTimelineEnd, (SkeetoNestEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04792600, SkeetoNestEntity_OnDeathTimelineEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0075E5B0, void, OnSpawnTimelineEnd, (SkeetoNestEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04794CD8, SkeetoNestEntity_OnSpawnTimelineEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0075E5E0, void, ApplyRepelForceForSkeetos, (SkeetoNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x0075EC40, void, InstantKill, (SkeetoNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x0075EFA0, void, __ctor, (SkeetoNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x0075F160, void, __cctor, ());
}
