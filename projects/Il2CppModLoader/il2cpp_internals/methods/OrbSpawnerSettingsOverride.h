#include <interception_macros.h>

namespace app::methods::OrbSpawnerSettingsOverride {
IL2CPP_REGISTER_METHOD(0x0052B590, bool, ShouldOverrideHorizontalSpeedCurve, (OrbSpawnerSettingsOverride * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, ShouldOverrideVerticalSpeedCurve, (OrbSpawnerSettingsOverride * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, ShouldOverrideGravity, (OrbSpawnerSettingsOverride * __this));
IL2CPP_REGISTER_METHOD(0x00446590, bool, ShouldOverrideInitialDropPickupState, (OrbSpawnerSettingsOverride * __this));
IL2CPP_REGISTER_METHOD(0x0061DE80, void, Apply, (OrbSpawnerSettingsOverride * __this, OrbSpawner * spawner));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (OrbSpawnerSettingsOverride * __this));
}
