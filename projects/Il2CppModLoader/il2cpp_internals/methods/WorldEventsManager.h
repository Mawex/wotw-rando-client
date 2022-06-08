#include <interception_macros.h>

namespace app::methods::WorldEventsManager {
IL2CPP_REGISTER_METHOD(0x005819F0, void, OnGameReset, (WorldEventsManager * __this));
IL2CPP_REGISTER_METHOD(0x00581AC0, void, Serialize, (WorldEventsManager * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00582220, WorldEventsRuntime *, Find, (WorldEventsManager * __this, WorldEvents * worldEvents));
IL2CPP_REGISTER_METHOD(0x00582590, void, __ctor, (WorldEventsManager * __this));
IL2CPP_REGISTER_METHOD(0x005827D0, void, __cctor, ());
}
