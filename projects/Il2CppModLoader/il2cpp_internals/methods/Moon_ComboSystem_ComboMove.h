using namespace app;

namespace app::methods::Moon::ComboSystem::ComboMove {
IL2CPP_REGISTER_METHOD(0x00CC5B40, void, __ctor, (ComboMove * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, List_1_Moon_ComboSystem_ComboInput_ *, get_ValidInputs, (ComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00980110, ComboMoveState__Enum, get_ComboMoveState, (ComboMove * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (ComboMove * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, SetComboHandler, (ComboMove * __this, SeinComboHandler * comboAttack));
IL2CPP_REGISTER_METHOD(0x00CC5F60, ComboInput *, GetComboInput, (ComboMove * __this, bool facingLeft));
IL2CPP_REGISTER_METHOD(0x00CC6200, bool, CanAcceptInput, (ComboMove * __this, ComboInput * comboInput));
IL2CPP_REGISTER_METHOD(0x00CC6320, bool, CanBeUsedAsComboEntryPoint, (ComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC6360, void, RegisterUse, (ComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00CC6370, bool, get_BellowAmountOfUsesAllowed, (ComboMove * __this));
IL2CPP_REGISTER_METHOD(0x008001B0, void, ResetAmountOfUses, (ComboMove * __this));
}
