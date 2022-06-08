#include <interception_macros.h>

namespace app::methods::PlayerSettingsPerScene {
IL2CPP_REGISTER_METHOD(0x01428A60, void, Lerp, (PlayerSettingsPerScene * from, PlayerSettingsPerScene * to, PlayerSettingsPerScene * * destination, float curveValue));
IL2CPP_REGISTER_METHOD(0x01428B70, PlayerSettingsPerScene *, Clone, (PlayerSettingsPerScene * __this));
IL2CPP_REGISTER_METHOD(0x01428CD0, void, Copy, (PlayerSettingsPerScene * __this, PlayerSettingsPerScene * playerSettingsPerScene));
IL2CPP_REGISTER_METHOD(0x01428CD0, void, CopyFrom, (PlayerSettingsPerScene * __this, PlayerSettingsPerScene * settingsPlayerSettingsPerScene));
IL2CPP_REGISTER_METHOD(0x004FBE40, void, __ctor, (PlayerSettingsPerScene * __this));
}
