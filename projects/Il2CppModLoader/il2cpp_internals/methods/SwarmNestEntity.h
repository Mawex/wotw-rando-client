#include <interception_macros.h>

namespace app::methods::SwarmNestEntity {
IL2CPP_REGISTER_METHOD(0x002FBB90, void, BindSwarm, (SwarmNestEntity * __this, SwarmEntity * swarm));
IL2CPP_REGISTER_METHOD(0x01823990, void, Awake, (SwarmNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x01823FF0, void, Update, (SwarmNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x018240B0, void, SpawnSwarmAgent, (SwarmNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x018243E0, void, ResetSwarmNest, (SwarmNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x01824580, float, GetSwarmHealth, (SwarmNestEntity * __this));
IL2CPP_REGISTER_METHOD(0x01824670, void, StopIdleTimeline, (SwarmNestEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x047984A0, SwarmNestEntity_StopIdleTimeline__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018246E0, void, StartIdleTimeline, (SwarmNestEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0472C150, SwarmNestEntity_StartIdleTimeline__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01824720, void, DestroyAtEndOfTimeline, (SwarmNestEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0476F7A0, SwarmNestEntity_DestroyAtEndOfTimeline__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01824810, void, __ctor, (SwarmNestEntity * __this));
}
