#include <interception_macros.h>

namespace app::methods::SwarmNestPlaceholder {
IL2CPP_REGISTER_METHOD(0x01824830, void, OnStart, (SwarmNestPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x018248A0, void, Spawn, (SwarmNestPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x018248F0, void, SpawnSwarm, (SwarmNestPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x01824B50, void, BindSwarm, (SwarmNestPlaceholder * __this, SwarmEntity * swarmEntity));
IL2CPP_REGISTER_METHOD(0x01824CA0, void, OnRestoreCheckpoint, (SwarmNestPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x01824DA0, void, __ctor, (SwarmNestPlaceholder * __this));
}
