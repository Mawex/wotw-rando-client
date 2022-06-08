using namespace app;

namespace app::methods::Moon::ComboSystem::SpiritSpearComboMove {
IL2CPP_REGISTER_METHOD(0x003FC7F0, ComboMoveState__Enum, get_m_comboMoveState, (SpiritSpearComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_m_comboMoveState, (SpiritSpearComboMove * __this, ComboMoveState__Enum value));
IL2CPP_REGISTER_METHOD(0x00A794C0, AbilityType__Enum, get_ComboAbilityType, (SpiritSpearComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC8950, bool, CanExecute, (SpiritSpearComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC8AA0, void, EnterMove, (SpiritSpearComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC8BD0, void, Interrupt, (SpiritSpearComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC8CE0, CharacterState *, get_CharacterState, (SpiritSpearComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC8D30, float, get_TimeToStartComboWindow, (SpiritSpearComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC5850, void, __ctor, (SpiritSpearComboMove * __this));
}
