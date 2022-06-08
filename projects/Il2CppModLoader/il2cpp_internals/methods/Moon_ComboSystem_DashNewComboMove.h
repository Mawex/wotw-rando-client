using namespace app;

namespace app::methods::Moon::ComboSystem::DashNewComboMove {
IL2CPP_REGISTER_METHOD(0x003FC7F0, ComboMoveState__Enum, get_m_comboMoveState, (DashNewComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_m_comboMoveState, (DashNewComboMove * __this, ComboMoveState__Enum value));
IL2CPP_REGISTER_METHOD(0x006FB830, AbilityType__Enum, get_ComboAbilityType, (DashNewComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC6670, bool, CanExecute, (DashNewComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC6780, void, EnterMove, (DashNewComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC68E0, void, Interrupt, (DashNewComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC69F0, CharacterState *, get_CharacterState, (DashNewComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC6A40, bool, get_IsAttackButtonDown, (DashNewComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC6B80, bool, get_OnAttackButtonPressed, (DashNewComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC6CD0, bool, get_OnAttackButtonReleased, (DashNewComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00A244F0, float, get_TimeToStartComboWindow, (DashNewComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC5850, void, __ctor, (DashNewComboMove * __this));
}
