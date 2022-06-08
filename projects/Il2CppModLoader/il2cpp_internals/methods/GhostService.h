#include <interception_macros.h>

namespace app::methods::GhostService {
IL2CPP_REGISTER_METHOD(0x007E85E0, int32_t, get_TotalGhosts, (GhostService * __this));
IL2CPP_REGISTER_METHOD(0x007E8670, bool, get_HasGhosts, (GhostService * __this));
IL2CPP_REGISTER_METHOD(0x007E8700, void, ClearGhosts, (GhostService * __this));
IL2CPP_REGISTER_METHOD(0x007E88D0, GhostPlayer *, get_TopScoreGhost, (GhostService * __this));
IL2CPP_REGISTER_METHOD(0x007E8AC0, Vector3, GetGhostPosition, (GhostService * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x007E8CB0, GhostPlayer *, GetGhost, (GhostService * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x002FA280, List_1_GhostPlayer_ *, GetGhosts, (GhostService * __this));
IL2CPP_REGISTER_METHOD(0x007E8D80, bool, HasGhost, (GhostService * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x007E8E70, void, PopulateGhosts, (GhostService * __this, GhostPlayer__Array * ghosts));
IL2CPP_REGISTER_METHOD(0x007E9080, void, RunGhosts, (GhostService * __this));
IL2CPP_REGISTER_METHOD(0x007E9170, bool, get_AllGhostsFinished, (GhostService * __this));
IL2CPP_REGISTER_METHOD(0x007E92B0, void, __ctor, (GhostService * __this));
}
