#include <interception_macros.h>

namespace app::methods::SeinDeathsManager {
IL2CPP_REGISTER_METHOD(0x006FF490, void, FakeADeathHere, (SeinDeathsManager * __this));
IL2CPP_REGISTER_METHOD(0x006FF4A0, void, Awake, (SeinDeathsManager * __this));
IL2CPP_REGISTER_METHOD(0x006FF640, void, OnDestroy, (SeinDeathsManager * __this));
IL2CPP_REGISTER_METHOD(0x006FF820, void, OnGameReset, (SeinDeathsManager * __this));
IL2CPP_REGISTER_METHODINFO(0x0471A480, SeinDeathsManager_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006FF8D0, void, Serialize, (SeinDeathsManager * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00700080, void, OnDeath, ());
IL2CPP_REGISTER_METHOD(0x007001D0, void, RecordDeath, (SeinDeathsManager * __this));
IL2CPP_REGISTER_METHOD(0x00700470, void, __ctor, (SeinDeathsManager * __this));
}
