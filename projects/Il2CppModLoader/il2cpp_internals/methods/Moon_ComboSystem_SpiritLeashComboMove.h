using namespace app;

namespace app::methods::Moon::ComboSystem::SpiritLeashComboMove {
IL2CPP_REGISTER_METHOD(0x003FC7F0, ComboMoveState__Enum, get_m_comboMoveState, (SpiritLeashComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_m_comboMoveState, (SpiritLeashComboMove * __this, ComboMoveState__Enum value));
IL2CPP_REGISTER_METHOD(0x006FB830, AbilityType__Enum, get_ComboAbilityType, (SpiritLeashComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC8310, bool, CanExecute, (SpiritLeashComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC5250, void, EnterMove, (SpiritLeashComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC8420, void, Interrupt, (SpiritLeashComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC8530, CharacterState *, get_CharacterState, (SpiritLeashComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC8580, bool, get_IsAttackButtonDown, (SpiritLeashComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC86C0, bool, get_OnAttackButtonPressed, (SpiritLeashComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC8810, bool, get_OnAttackButtonReleased, (SpiritLeashComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00A244F0, float, get_TimeToStartComboWindow, (SpiritLeashComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC5850, void, __ctor, (SpiritLeashComboMove * __this));
}
