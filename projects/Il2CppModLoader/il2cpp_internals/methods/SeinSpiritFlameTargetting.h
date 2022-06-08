using namespace app;

namespace app::methods::SeinSpiritFlameTargetting {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinSpiritFlameTargetting * __this));
IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_Range, (SeinSpiritFlameTargetting * __this));
IL2CPP_REGISTER_METHOD(0x003FDD30, void, set_Range, (SeinSpiritFlameTargetting * __this, float value));
IL2CPP_REGISTER_METHOD(0x003FD740, float, get_MaxNumberOfTargets, (SeinSpiritFlameTargetting * __this));
IL2CPP_REGISTER_METHOD(0x005E3B30, void, set_MaxNumberOfTargets, (SeinSpiritFlameTargetting * __this, float value));
IL2CPP_REGISTER_METHOD(0x005E3B40, void, OnSetReferenceToSein, (SeinSpiritFlameTargetting * __this));
IL2CPP_REGISTER_METHOD(0x005D0850, void, Start, (SeinSpiritFlameTargetting * __this));
IL2CPP_REGISTER_METHOD(0x005E3C20, bool, IsShootableTarget, (SeinSpiritFlameTargetting * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x005E3FB0, void, UpdateClosestAttackables, (SeinSpiritFlameTargetting * __this));
IL2CPP_REGISTER_METHOD(0x005E4610, void, UpdateTargetHighlight, (SeinSpiritFlameTargetting * __this));
IL2CPP_REGISTER_METHOD(0x005E4850, void, UpdateCharacterState, (SeinSpiritFlameTargetting * __this));
IL2CPP_REGISTER_METHOD(0x005E5440, void, __ctor, (SeinSpiritFlameTargetting * __this));
}
