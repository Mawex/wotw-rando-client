#include <interception_macros.h>

namespace app::methods::PlayerPuppetCharacterStates {
IL2CPP_REGISTER_METHOD(0x01428220, bool, IsPerforming, (PlayerPuppetCharacterStates * __this, int32_t stateId));
IL2CPP_REGISTER_METHOD(0x014283E0, void, SetStatePerforming, (PlayerPuppetCharacterStates * __this, int32_t stateId, bool value));
IL2CPP_REGISTER_METHOD(0x01428520, void, RemoveAllStates, (PlayerPuppetCharacterStates * __this));
IL2CPP_REGISTER_METHOD(0x01428630, void, __ctor, (PlayerPuppetCharacterStates * __this));
}
