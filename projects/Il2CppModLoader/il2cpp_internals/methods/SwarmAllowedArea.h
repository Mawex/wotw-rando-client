#include <interception_macros.h>

namespace app::methods::SwarmAllowedArea {
IL2CPP_REGISTER_METHOD(0x01812CD0, void, Start, (SwarmAllowedArea * __this));
IL2CPP_REGISTER_METHOD(0x01812EE0, void, Update, (SwarmAllowedArea * __this));
IL2CPP_REGISTER_METHOD(0x01812EF0, void, FollowTransform, (SwarmAllowedArea * __this));
IL2CPP_REGISTER_METHOD(0x01813920, void, CalculateNumberOfAgents, (SwarmAllowedArea * __this, int32_t agentsCount));
IL2CPP_REGISTER_METHOD(0x018139E0, List_1_UnityEngine_Transform_ *, GenerateTargets, (SwarmAllowedArea * __this));
IL2CPP_REGISTER_METHOD(0x01813F60, void, RandomizeTargetPosition, (SwarmAllowedArea * __this));
IL2CPP_REGISTER_METHOD(0x018142B0, bool, GetNextTarget, (SwarmAllowedArea * __this, Transform * * target));
IL2CPP_REGISTER_METHOD(0x00651F80, void, ResetTargetIndex, (SwarmAllowedArea * __this));
IL2CPP_REGISTER_METHOD(0x01814380, void, EnableSpin, (SwarmAllowedArea * __this, float spinStep));
IL2CPP_REGISTER_METHOD(0x018143A0, void, DisableSpin, (SwarmAllowedArea * __this));
IL2CPP_REGISTER_METHOD(0x018143B0, void, __ctor, (SwarmAllowedArea * __this));
}
