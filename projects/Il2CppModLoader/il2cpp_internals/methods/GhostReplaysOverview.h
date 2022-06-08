#include <interception_macros.h>

namespace app::methods::GhostReplaysOverview {
IL2CPP_REGISTER_METHOD(0x007E5060, void, AddGhostReplay, (GhostReplaysOverview * __this, GhostReplayMetaData * ghostReplayMetaData));
IL2CPP_REGISTER_METHOD(0x007E5100, int32_t, GetReplayCount, (GhostReplaysOverview * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, List_1_GhostReplayMetaData_ *, GetGhostReplays, (GhostReplaysOverview * __this));
IL2CPP_REGISTER_METHOD(0x007E5190, void, CleanUpMetaFiles, (GhostReplaysOverview * __this));
IL2CPP_REGISTER_METHOD(0x007E5570, void, __ctor, (GhostReplaysOverview * __this));
}
