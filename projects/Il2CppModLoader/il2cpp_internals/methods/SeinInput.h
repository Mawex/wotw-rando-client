using namespace app;

namespace app::methods::SeinInput {
IL2CPP_REGISTER_METHOD(0x0100E930, void, __ctor, (SeinInput * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x0100ECB0, int32_t, get_NormalizedHorizontal, (SeinInput * __this));
IL2CPP_REGISTER_METHOD(0x0100ED00, int32_t, get_NormalizedVertical, (SeinInput * __this));
IL2CPP_REGISTER_METHOD(0x0100ED50, float, get_Horizontal, (SeinInput * __this));
IL2CPP_REGISTER_METHOD(0x0100ED70, float, get_Vertical, (SeinInput * __this));
IL2CPP_REGISTER_METHOD(0x0100ED90, Vector2, get_Axis, (SeinInput * __this));
IL2CPP_REGISTER_METHOD(0x0100EDA0, Vector2, WorldToLocal, (SeinInput * __this, Vector2 speed));
IL2CPP_REGISTER_METHOD(0x0100EDF0, void, Update, (SeinInput * __this));
IL2CPP_REGISTER_METHOD(0x0100F030, Input_InputButtonProcessor *, GetButton, (SeinInput * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x0100F0E0, AbilityType__Enum, GetAssignedAbility, (SeinInput * __this, Input_Command__Enum button));
IL2CPP_REGISTER_METHOD(0x0100F180, void, BindButton, (SeinInput * __this, AbilityType__Enum ability, Input_Command__Enum button));
}
