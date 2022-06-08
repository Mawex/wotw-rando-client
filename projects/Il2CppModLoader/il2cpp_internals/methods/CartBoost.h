using namespace app;

namespace app::methods::CartBoost {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (CartBoost * __this));
IL2CPP_REGISTER_METHOD(0x008D27C0, float, get_BoostExtraSpeed, (CartBoost * __this));
IL2CPP_REGISTER_METHOD(0x00B33020, void, set_BoostExtraSpeed, (CartBoost * __this, float value));
IL2CPP_REGISTER_METHOD(0x00B33030, void, OnAwake, (CartBoost * __this));
IL2CPP_REGISTER_METHOD(0x00B33040, void, UpdateCharacterState, (CartBoost * __this));
IL2CPP_REGISTER_METHOD(0x003FFE20, bool, get_IsStatePerforming, (CartBoost * __this));
IL2CPP_REGISTER_METHOD(0x00A79490, float, get_BoostCharge, (CartBoost * __this));
IL2CPP_REGISTER_METHOD(0x00B332C0, bool, get_CanBoost, (CartBoost * __this));
IL2CPP_REGISTER_METHOD(0x00B332E0, void, PerformBoost, (CartBoost * __this, bool consumeBoostCharge));
IL2CPP_REGISTER_METHOD(0x00B335A0, void, RechargeBoost, (CartBoost * __this));
IL2CPP_REGISTER_METHOD(0x00B33620, void, __ctor, (CartBoost * __this));
}
