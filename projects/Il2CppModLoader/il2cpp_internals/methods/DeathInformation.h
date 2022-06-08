#include <interception_macros.h>

namespace app::methods::DeathInformation {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DeathInformation * __this));
IL2CPP_REGISTER_METHOD(0x00DDE2F0, void, __ctor, (DeathInformation * __this, Vector3 position, int32_t timeOfDeath, int32_t progress, int32_t deathNumber));
IL2CPP_REGISTER_METHOD(0x00DDE310, void, Serialize, (DeathInformation * __this, Archive * ar));
}
