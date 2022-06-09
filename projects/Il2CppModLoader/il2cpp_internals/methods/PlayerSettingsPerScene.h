#include <interception_macros.h>

namespace app::methods::PlayerSettingsPerScene {
IL2CPP_REGISTER_METHOD(0x01428A60, void, Lerp, (app::PlayerSettingsPerScene * from, app::PlayerSettingsPerScene * to, app::PlayerSettingsPerScene * * destination, float curve_value));
IL2CPP_REGISTER_METHOD(0x01428B70, PlayerSettingsPerScene *, Clone, (app::PlayerSettingsPerScene * this_ptr));
IL2CPP_REGISTER_METHOD(0x01428CD0, void, Copy, (app::PlayerSettingsPerScene * this_ptr, app::PlayerSettingsPerScene * player_settings_per_scene));
IL2CPP_REGISTER_METHOD(0x01428CD0, void, CopyFrom, (app::PlayerSettingsPerScene * this_ptr, app::PlayerSettingsPerScene * settings_player_settings_per_scene));
IL2CPP_REGISTER_METHOD(0x004FBE40, void, __ctor, (app::PlayerSettingsPerScene * this_ptr));
}
